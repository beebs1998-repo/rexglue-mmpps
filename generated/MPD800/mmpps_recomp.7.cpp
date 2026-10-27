#include "mmpps_funcs.7.h"

DEFINE_REX_FUNC(sub_89915FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lhz r6,32012(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 32012);
	// addi r9,r10,-4592
	ctx.r9.s64 = ctx.r10.s64 + -4592;
	// subfc r11,r8,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ~ctx.r7.u32;
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89916014
	if (ctx.cr6.eq) goto loc_89916014;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r7,r9,-2
	ctx.r7.s64 = ctx.r9.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r6,5768
	ctx.r6.s64 = ctx.r6.s64 + 5768;
loc_89915FE4:
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89915ffc
	if (!ctx.cr6.eq) goto loc_89915FFC;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// beq 0x8991601c
	if (ctx.cr0.eq) goto loc_8991601C;
loc_89915FFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// blt cr6,0x89915fe4
	if (ctx.cr6.lt) goto loc_89915FE4;
loc_89916014:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991601C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916A60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r11,7935(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 7935);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x89916a78
	if (!ctx.cr6.lt) goto loc_89916A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,7935(r10)
	REX_STORE_U8(ctx.r10.u32 + 7935, ctx.r11.u8);
loc_89916A78:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-9508
	ctx.r11.s64 = ctx.r11.s64 + -9508;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89916A90:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x89916a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89916A90;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916B48) {
	REX_FUNC_PROLOGUE();
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,12080
	ctx.r11.s64 = ctx.r11.s64 + 12080;
	// lbz r10,8418(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 8418);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r9,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r9.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq 0x89916b8c
	if (ctx.cr0.eq) goto loc_89916B8C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
loc_89916B8C:
	// addi r11,r10,254
	ctx.r11.s64 = ctx.r10.s64 + 254;
	// stb r11,8418(r7)
	REX_STORE_U8(ctx.r7.u32 + 8418, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916F10) {
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
	// bl 0x89915fa0
	ctx.lr = 0x89916F24;
	sub_89915FA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89916f40
	if (!ctx.cr6.eq) goto loc_89916F40;
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
loc_89916F40:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r9,r11,5768
	ctx.r9.s64 = ctx.r11.s64 + 5768;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lhz r11,-4592(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r10,7924(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 7924);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r5,r8,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x89916fa0
	if (ctx.cr6.eq) goto loc_89916FA0;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r5,r9,10
	ctx.r5.s64 = ctx.r9.s64 + 10;
	// lhz r8,12000(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12000);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r3,r4,17
	ctx.r3.u64 = ctx.r4.u32 & 0x7FFF;
	// sthx r3,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u16);
	// b 0x89916fa8
	goto loc_89916FA8;
loc_89916FA0:
	// addi r7,r9,10
	ctx.r7.s64 = ctx.r9.s64 + 10;
	// sthx r8,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u16);
loc_89916FA8:
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 + 12;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r4,r9,6
	ctx.r4.s64 = ctx.r9.s64 + 6;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// sthx r7,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sthx r5,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u16);
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthx r8,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u16);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// sthx r7,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
	// stw r10,7924(r6)
	REX_STORE_U32(ctx.r6.u32 + 7924, ctx.r10.u32);
	// bl 0x89934058
	ctx.lr = 0x89916FF4;
	sub_89934058(ctx, base);
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

DEFINE_REX_FUNC(sub_89918198) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899181A0;
	__savegprlr_22(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// mulli r9,r10,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r22,-30275
	ctx.r22.s64 = -1984102400;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r3,r5,20424
	ctx.r3.s64 = ctx.r5.s64 + 20424;
	// lwz r11,-21584(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// rlwinm r23,r10,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// subf r6,r4,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lhz r9,20424(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 20424);
	// srawi r5,r7,21
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 21;
	// lwz r11,9520(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 9520);
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// srawi r4,r6,21
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 21;
	// srawi r3,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// subf r9,r10,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r6,r9,136
	ctx.r6.s64 = ctx.r9.s64 + 136;
	// addi r3,r10,96
	ctx.r3.s64 = ctx.r10.s64 + 96;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r3,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// or r24,r6,r5
	ctx.r24.u64 = ctx.r6.u64 | ctx.r5.u64;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r28,r10,32896
	ctx.r28.u64 = ctx.r10.u64 | 32896;
	// addi r31,r11,-2528
	ctx.r31.s64 = ctx.r11.s64 + -2528;
loc_89918254:
	// add r10,r25,r26
	ctx.r10.u64 = ctx.r25.u64 + ctx.r26.u64;
	// rlwinm r11,r26,21,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 21) & 0xFFE00000;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r6,r9,r23
	ctx.r6.u64 = ctx.r9.u64 + ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r30,r6,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
loc_89918270:
	// add r11,r27,r7
	ctx.r11.u64 = ctx.r27.u64 + ctx.r7.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r3,r6,0,4,5
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC000000;
	// beq cr6,0x89918324
	if (ctx.cr6.eq) goto loc_89918324;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x899182e8
	if (!ctx.cr6.lt) goto loc_899182E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_899182A8:
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r9,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899182e8
	if (!ctx.cr6.eq) goto loc_899182E8;
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x899182e8
	if (!ctx.cr6.eq) goto loc_899182E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x899182a8
	if (ctx.cr6.lt) goto loc_899182A8;
loc_899182E8:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stw r28,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r28.u32);
	// oris r6,r3,4352
	ctx.r6.u64 = ctx.r3.u64 | 285212672;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r10,0,3,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFFFE0;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r3,0,20,10
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFE00FFF;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// oris r10,r4,31
	ctx.r10.u64 = ctx.r4.u64 | 2031616;
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
loc_89918324:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x89918270
	if (ctx.cr6.lt) goto loc_89918270;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x89918254
	if (ctx.cr6.lt) goto loc_89918254;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r11,9520(r22)
	REX_STORE_U32(ctx.r22.u32 + 9520, ctx.r11.u32);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899193A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899193B0;
	__savegprlr_24(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lhz r9,-9220(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lhz r29,7376(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 7376);
	// lis r31,-30269
	ctx.r31.s64 = -1983709184;
	// lhz r28,-10776(r8)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r8.u32 + -10776);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lhz r26,9644(r7)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 9644);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// sth r9,-10752(r31)
	REX_STORE_U16(ctx.r31.u32 + -10752, ctx.r9.u16);
	// sth r11,-21400(r6)
	REX_STORE_U16(ctx.r6.u32 + -21400, ctx.r11.u16);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// sth r11,7112(r8)
	REX_STORE_U16(ctx.r8.u32 + 7112, ctx.r11.u16);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r9,9652(r30)
	REX_STORE_U16(ctx.r30.u32 + 9652, ctx.r9.u16);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,-31408(r3)
	REX_STORE_U16(ctx.r3.u32 + -31408, ctx.r10.u16);
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// sth r10,-21588(r6)
	REX_STORE_U16(ctx.r6.u32 + -21588, ctx.r10.u16);
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// sth r5,6044(r4)
	REX_STORE_U16(ctx.r4.u32 + 6044, ctx.r5.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
	// sth r7,528(r6)
	REX_STORE_U16(ctx.r6.u32 + 528, ctx.r7.u16);
loc_8991943C:
	// mulli r10,r8,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r4,r11,79
	ctx.r4.s64 = ctx.r11.s64 + 79;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// stwx r8,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2304
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2304, ctx.xer);
	// stbx r5,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// blt cr6,0x8991943c
	if (ctx.cr6.lt) goto loc_8991943C;
	// mulli r10,r25,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(84));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-30290
	ctx.r10.s64 = -1985085440;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r10,21760
	ctx.r6.s64 = ctx.r10.s64 + 21760;
	// addi r4,r8,21760
	ctx.r4.s64 = ctx.r8.s64 + 21760;
loc_89919484:
	// rlwinm r8,r7,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8991948C:
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// blt cr6,0x8991948c
	if (ctx.cr6.lt) goto loc_8991948C;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_899194B0:
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// blt cr6,0x899194b0
	if (ctx.cr6.lt) goto loc_899194B0;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,128
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 128, ctx.xer);
	// blt cr6,0x89919484
	if (ctx.cr6.lt) goto loc_89919484;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// mulli r8,r9,84
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(84));
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r29,r9
	ctx.r3.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r8,32556(r6)
	REX_STORE_U32(ctx.r6.u32 + 32556, ctx.r8.u32);
	// mulli r6,r4,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(84));
	// mulli r7,r3,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r6,7100(r4)
	REX_STORE_U32(ctx.r4.u32 + 7100, ctx.r6.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// sth r5,-21392(r3)
	REX_STORE_U16(ctx.r3.u32 + -21392, ctx.r5.u16);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stw r7,12616(r10)
	REX_STORE_U32(ctx.r10.u32 + 12616, ctx.r7.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// sth r5,12632(r31)
	REX_STORE_U16(ctx.r31.u32 + 12632, ctx.r5.u16);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// sth r5,-9532(r4)
	REX_STORE_U16(ctx.r4.u32 + -9532, ctx.r5.u16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// sth r5,7928(r3)
	REX_STORE_U16(ctx.r3.u32 + 7928, ctx.r5.u16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,26952
	ctx.r8.s64 = ctx.r8.s64 + 26952;
	// addi r31,r7,27812
	ctx.r31.s64 = ctx.r7.s64 + 27812;
loc_89919560:
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r5,r4,r31
	REX_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u16);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r3,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 4;
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r3,r6,84
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(84));
	// stwx r6,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r10,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r10.u32);
	// mulli r6,r10,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// addi r30,r8,12
	ctx.r30.s64 = ctx.r8.s64 + 12;
	// addi r24,r8,16
	ctx.r24.s64 = ctx.r8.s64 + 16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r7,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r7.u32);
	// stwx r6,r4,r24
	REX_STORE_U32(ctx.r4.u32 + ctx.r24.u32, ctx.r6.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89919560
	if (ctx.cr6.lt) goto loc_89919560;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,26544
	ctx.r8.s64 = ctx.r8.s64 + 26544;
	// addi r30,r7,12032
	ctx.r30.s64 = ctx.r7.s64 + 12032;
loc_899195E4:
	// mullw r6,r10,r29
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// sthx r5,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u16);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// mullw r31,r7,r29
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 4;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// addi r24,r8,4
	ctx.r24.s64 = ctx.r8.s64 + 4;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mulli r4,r6,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(84));
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r10,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// mulli r6,r10,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// addi r3,r8,12
	ctx.r3.s64 = ctx.r8.s64 + 12;
	// addi r24,r8,16
	ctx.r24.s64 = ctx.r8.s64 + 16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// stwx r6,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r6.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899195e4
	if (ctx.cr6.lt) goto loc_899195E4;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,12160
	ctx.r9.s64 = ctx.r9.s64 + 12160;
	// addi r31,r8,26868
	ctx.r31.s64 = ctx.r8.s64 + 26868;
loc_89919670:
	// mullw r7,r10,r28
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// sthx r5,r3,r31
	REX_STORE_U16(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u16);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 4;
	// mullw r3,r8,r28
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 4;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r10,r4,r27
	ctx.r10.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mulli r6,r7,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(84));
	// stwx r7,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r10,r3,r30
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r10.u32);
	// mulli r7,r10,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// addi r30,r9,16
	ctx.r30.s64 = ctx.r9.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r8,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r8.u32);
	// stwx r7,r3,r30
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r7.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89919670
	if (ctx.cr6.lt) goto loc_89919670;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,7936
	ctx.r9.s64 = ctx.r9.s64 + 7936;
	// addi r31,r8,12624
	ctx.r31.s64 = ctx.r8.s64 + 12624;
loc_899196FC:
	// mullw r7,r10,r26
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// sthx r5,r3,r31
	REX_STORE_U16(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u16);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// mullw r3,r8,r26
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 2;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r10,r4,r25
	ctx.r10.u64 = ctx.r4.u64 + ctx.r25.u64;
	// mulli r6,r7,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(84));
	// stwx r7,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r10,r3,r30
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r10.u32);
	// mulli r7,r10,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// addi r30,r9,16
	ctx.r30.s64 = ctx.r9.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r8,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r8.u32);
	// stwx r7,r3,r30
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r7.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899196fc
	if (ctx.cr6.lt) goto loc_899196FC;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C340) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991C348;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// lwzx r29,r30,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// clrlwi r11,r8,17
	ctx.r11.u64 = ctx.r8.u32 & 0x7FFF;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r28,r30,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r11,r5,18,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFF;
	// lbzx r27,r30,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8991c430
	if (ctx.cr6.gt) goto loc_8991C430;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8991c3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8991C3E4;
	// bdzf 4*cr6+eq,0x8991c3f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8991C3F8;
	// bne cr6,0x8991c41c
	if (!ctx.cr6.eq) goto loc_8991C41C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x899d4fb0
	ctx.lr = 0x8991C3E0;
	sub_899D4FB0(ctx, base);
	// b 0x8991c440
	goto loc_8991C440;
loc_8991C3E4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8991C3F4;
	sub_899D4C10(ctx, base);
	// b 0x8991c440
	goto loc_8991C440;
loc_8991C3F8:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x899d4640
	ctx.lr = 0x8991C418;
	sub_899D4640(ctx, base);
	// b 0x8991c440
	goto loc_8991C440;
loc_8991C41C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x899d4e08
	ctx.lr = 0x8991C42C;
	sub_899D4E08(ctx, base);
	// b 0x8991c440
	goto loc_8991C440;
loc_8991C430:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8991C440;
	sub_899D4440(ctx, base);
loc_8991C440:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992e330
	ctx.lr = 0x8991C454;
	sub_8992E330(ctx, base);
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

DEFINE_REX_FUNC(sub_8991CE00) {
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
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lwz r11,-10744(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10744);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,-10744(r10)
	REX_STORE_U32(ctx.r10.u32 + -10744, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x8991CE28;
	sub_89936360(ctx, base);
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

DEFINE_REX_FUNC(sub_8991D038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// ori r8,r5,20077
	ctx.r8.u64 = ctx.r5.u64 | 20077;
	// lwz r11,-10744(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -10744);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lwz r10,-9212(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r9,r4,12800
	ctx.r9.s64 = ctx.r4.s64 + 12800;
	// mulli r4,r5,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r10.u32);
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r5,r8,17
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFF;
	// addi r6,r9,176
	ctx.r6.s64 = ctx.r9.s64 + 176;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r5,17,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// addi r9,r9,172
	ctx.r9.s64 = ctx.r9.s64 + 172;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stwx r5,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r5.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r6,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r11,-10744(r7)
	REX_STORE_U32(ctx.r7.u32 + -10744, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8991D8E8;
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
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,104
	ctx.r9.s64 = ctx.r30.s64 + 104;
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// extsh r25,r4
	ctx.r25.s64 = ctx.r4.s16;
	// lwzx r28,r31,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r27,r31,r9
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwzx r29,r31,r8
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r26,r31,r7
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x8991d9a4
	if (ctx.cr6.eq) goto loc_8991D9A4;
	// bl 0x89932c20
	ctx.lr = 0x8991D93C;
	sub_89932C20(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8991d9b0
	if (ctx.cr6.eq) goto loc_8991D9B0;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x8991d970
	if (!ctx.cr6.gt) goto loc_8991D970;
	// subfic r10,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_8991D970:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8991d984
	if (!ctx.cr6.lt) goto loc_8991D984;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// b 0x8991d9b0
	goto loc_8991D9B0;
loc_8991D984:
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x8991d998
	if (!ctx.cr6.gt) goto loc_8991D998;
	// add r10,r9,r25
	ctx.r10.u64 = ctx.r9.u64 + ctx.r25.u64;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x8991d9b0
	goto loc_8991D9B0;
loc_8991D998:
	// subf r10,r25,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r25.u64;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x8991d9b0
	goto loc_8991D9B0;
loc_8991D9A4:
	// bl 0x89932c20
	ctx.lr = 0x8991D9A8;
	sub_89932C20(ctx, base);
	// addi r4,r30,158
	ctx.r4.s64 = ctx.r30.s64 + 158;
	// sthx r3,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u16);
loc_8991D9B0:
	// subf. r11,r29,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge 0x8991d9c0
	if (!ctx.cr0.lt) goto loc_8991D9C0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991D9C0:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8991d9d4
	if (!ctx.cr6.lt) goto loc_8991D9D4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991D9D4:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8991da20
	if (ctx.cr6.gt) goto loc_8991DA20;
	// subf. r11,r27,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge 0x8991d9f4
	if (!ctx.cr0.lt) goto loc_8991D9F4;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991D9F4:
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8991da08
	if (!ctx.cr6.lt) goto loc_8991DA08;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991DA08:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8991da20
	if (ctx.cr6.gt) goto loc_8991DA20;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8991DA20:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8991da34
	if (!ctx.cr6.eq) goto loc_8991DA34;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8991DA34:
	// addi r10,r30,108
	ctx.r10.s64 = ctx.r30.s64 + 108;
	// li r11,512
	ctx.r11.s64 = 512;
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r9,r11,r25
	ctx.r9.u64 = uint32_t((ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r8,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// eqv r7,r11,r9
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899216F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x89921700;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r18,r4,16
	ctx.r18.u64 = ctx.r4.u32 & 0xFFFF;
	// lis r4,16576
	ctx.r4.s64 = 1086324736;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r22,r4,16384
	ctx.r22.u64 = ctx.r4.u64 | 16384;
	// addi r31,r10,5344
	ctx.r31.s64 = ctx.r10.s64 + 5344;
	// addi r25,r9,12280
	ctx.r25.s64 = ctx.r9.s64 + 12280;
	// addi r27,r8,-31400
	ctx.r27.s64 = ctx.r8.s64 + -31400;
	// addi r20,r7,11976
	ctx.r20.s64 = ctx.r7.s64 + 11976;
	// addi r23,r6,7132
	ctx.r23.s64 = ctx.r6.s64 + 7132;
	// addi r29,r5,6424
	ctx.r29.s64 = ctx.r5.s64 + 6424;
loc_89921750:
	// mulli r30,r19,84
	ctx.r30.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(84));
	// lwzx r3,r30,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89921a70
	if (ctx.cr6.eq) goto loc_89921A70;
	// rlwinm r9,r11,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// stb r21,29(r25)
	REX_STORE_U8(ctx.r25.u32 + 29, ctx.r21.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r9,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r10,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r10,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// extsh r24,r28
	ctx.r24.s64 = ctx.r28.s16;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r11,r27,3724
	ctx.r11.s64 = ctx.r27.s64 + 3724;
	// rlwinm r26,r24,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r7,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899217BC;
	sub_89931BB8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899217e8
	if (ctx.cr6.eq) goto loc_899217E8;
	// subf r8,r23,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r23.u64;
	// addi r9,r27,3456
	ctx.r9.s64 = ctx.r27.s64 + 3456;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_899217D8:
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899217d8
	if (!ctx.cr6.eq) goto loc_899217D8;
loc_899217E8:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stb r21,27(r25)
	REX_STORE_U8(ctx.r25.u32 + 27, ctx.r21.u8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r9,r20,28
	ctx.r9.s64 = ctx.r20.s64 + 28;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89921854
	if (ctx.cr6.eq) goto loc_89921854;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r7,r28
	ctx.r7.s64 = ctx.r28.s8;
	// addi r9,r27,3456
	ctx.r9.s64 = ctx.r27.s64 + 3456;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x89921848
	if (ctx.cr6.eq) goto loc_89921848;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89921830:
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
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
	// bne cr6,0x89921830
	if (!ctx.cr6.eq) goto loc_89921830;
loc_89921848:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stb r21,27(r25)
	REX_STORE_U8(ctx.r25.u32 + 27, ctx.r21.u8);
	// b 0x8992187c
	goto loc_8992187C;
loc_89921854:
	// rlwinm r9,r11,30,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// stb r21,27(r25)
	REX_STORE_U8(ctx.r25.u32 + 27, ctx.r21.u8);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// addi r11,r27,3456
	ctx.r11.s64 = ctx.r27.s64 + 3456;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_8992187C:
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stb r21,26(r25)
	REX_STORE_U8(ctx.r25.u32 + 26, ctx.r21.u8);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// stb r21,25(r25)
	REX_STORE_U8(ctx.r25.u32 + 25, ctx.r21.u8);
	// addi r11,r27,3328
	ctx.r11.s64 = ctx.r27.s64 + 3328;
	// addi r10,r27,3200
	ctx.r10.s64 = ctx.r27.s64 + 3200;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r5,r29,28
	ctx.r5.s64 = ctx.r29.s64 + 28;
	// lwzx r6,r30,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r4,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r4,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r3,r30,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// rlwinm r6,r9,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r17,r9,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r16,r8,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r17,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r17.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899218F8;
	sub_89931BB8(ctx, base);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// bl 0x89931bb8
	ctx.lr = 0x8992190C;
	sub_89931BB8(ctx, base);
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x89931bb8
	ctx.lr = 0x89921920;
	sub_89931BB8(ctx, base);
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x89931bb8
	ctx.lr = 0x89921934;
	sub_89931BB8(ctx, base);
	// addi r7,r29,79
	ctx.r7.s64 = ctx.r29.s64 + 79;
	// stb r21,20(r25)
	REX_STORE_U8(ctx.r25.u32 + 20, ctx.r21.u8);
	// addi r6,r29,80
	ctx.r6.s64 = ctx.r29.s64 + 80;
	// stb r21,19(r25)
	REX_STORE_U8(ctx.r25.u32 + 19, ctx.r21.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r11,r27,2560
	ctx.r11.s64 = ctx.r27.s64 + 2560;
	// addi r10,r27,2432
	ctx.r10.s64 = ctx.r27.s64 + 2432;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// lbzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r8,r30,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r7,r9,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r8,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899219A8;
	sub_89931BB8(ctx, base);
	// addi r7,r29,48
	ctx.r7.s64 = ctx.r29.s64 + 48;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwzx r3,r30,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899219BC;
	sub_89931BB8(ctx, base);
	// addi r6,r29,64
	ctx.r6.s64 = ctx.r29.s64 + 64;
	// addi r5,r29,68
	ctx.r5.s64 = ctx.r29.s64 + 68;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r4,r24,4
	ctx.r4.s64 = ctx.r24.s64 + 4;
	// stb r21,16(r25)
	REX_STORE_U8(ctx.r25.u32 + 16, ctx.r21.u8);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// rlwinm r4,r6,28,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFF;
	// lwzx r8,r30,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r4,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFF;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r28,r10,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r3,r5,28,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFF;
	// rlwinm r30,r10,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r8,r3,28,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFF;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r17,r8,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r31
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r8,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// addi r11,r27,2060
	ctx.r11.s64 = ctx.r27.s64 + 2060;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r9,r27,2060
	ctx.r9.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r28,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r26,r17,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// addi r28,r24,9
	ctx.r28.s64 = ctx.r24.s64 + 9;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r4,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// stw r30,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// stw r7,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r3,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// stw r26,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r26.u32);
	// stw r8,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r8.u32);
loc_89921A70:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x89921a98
	if (ctx.cr6.eq) goto loc_89921A98;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x89921750
	if (ctx.cr6.lt) goto loc_89921750;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_89921A98:
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// cmpwi cr6,r6,23
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 23, ctx.xer);
	// bge cr6,0x89921b0c
	if (!ctx.cr6.lt) goto loc_89921B0C;
	// lwz r7,0(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
loc_89921AA8:
	// li r9,15
	ctx.r9.s64 = 15;
loc_89921AAC:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89921ae0
	if (ctx.cr6.eq) goto loc_89921AE0;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r23,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r23.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_89921AD0:
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89921ad0
	if (!ctx.cr6.eq) goto loc_89921AD0;
loc_89921AE0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stbx r21,r9,r25
	REX_STORE_U8(ctx.r9.u32 + ctx.r25.u32, ctx.r21.u8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x89921aac
	if (ctx.cr6.lt) goto loc_89921AAC;
	// addi r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 9;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x89921aa8
	if (ctx.cr6.lt) goto loc_89921AA8;
loc_89921B0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89927050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89927058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c408
	ctx.lr = 0x89927064;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899270fc
	if (ctx.cr6.eq) goto loc_899270FC;
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
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mulli r29,r6,112
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// stwx r30,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r9,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stwx r4,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x899270B0;
	sub_8992BD50(ctx, base);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r9,-3608
	ctx.r7.s64 = ctx.r9.s64 + -3608;
	// lwz r11,-21584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -21584);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addis r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 7864320;
	// stw r30,-3608(r9)
	REX_STORE_U32(ctx.r9.u32 + -3608, ctx.r30.u32);
	// lis r31,176
	ctx.r31.s64 = 11534336;
	// stwx r3,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r3.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwx r31,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r31.u32);
	// stbx r6,r29,r5
	REX_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r6.u8);
	// stwx r7,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r7.u32);
loc_899270FC:
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r11,480
	ctx.r11.s64 = 480;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,33
	ctx.r3.s64 = 33;
	// stw r11,19364(r9)
	REX_STORE_U32(ctx.r9.u32 + 19364, ctx.r11.u32);
	// stb r10,7115(r8)
	REX_STORE_U8(ctx.r8.u32 + 7115, ctx.r10.u8);
	// bl 0x89936360
	ctx.lr = 0x8992711C;
	sub_89936360(ctx, base);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lbz r6,12271(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 12271);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89927180
	if (ctx.cr6.eq) goto loc_89927180;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r9,r10,17016
	ctx.r9.s64 = ctx.r10.s64 + 17016;
	// lhz r11,27844(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 27844);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89927164
	if (!ctx.cr6.eq) goto loc_89927164;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89927164:
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
	ctx.lr = 0x89927180;
	sub_899D94E8(ctx, base);
loc_89927180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89927980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89927988;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,530(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899279ac
	if (!ctx.cr6.eq) goto loc_899279AC;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,12322(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12322);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x89927b80
	if (ctx.cr6.lt) goto loc_89927B80;
loc_899279AC:
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lbz r8,586(r22)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + 586);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89927b80
	if (!ctx.cr6.eq) goto loc_89927B80;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// lwz r11,19364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89927b80
	if (!ctx.cr6.eq) goto loc_89927B80;
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// li r20,0
	ctx.r20.s64 = 0;
	// lbz r31,522(r30)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + 522);
	// li r21,16
	ctx.r21.s64 = 16;
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// addi r28,r11,-2216
	ctx.r28.s64 = ctx.r11.s64 + -2216;
	// addi r26,r10,-10736
	ctx.r26.s64 = ctx.r10.s64 + -10736;
	// addi r29,r9,25128
	ctx.r29.s64 = ctx.r9.s64 + 25128;
loc_89927A04:
	// mulli r11,r20,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subfc r6,r21,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r21.u32;
	ctx.r6.u64 = ctx.r7.u64 - ctx.r21.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// subfe r7,r3,r10
	temp.u8 = (~ctx.r3.u32 + ctx.r10.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89927af8
	if (ctx.cr6.eq) goto loc_89927AF8;
	// addi r10,r29,625
	ctx.r10.s64 = ctx.r29.s64 + 625;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r9,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89927a64
	if (!ctx.cr6.eq) goto loc_89927A64;
	// addi r9,r29,624
	ctx.r9.s64 = ctx.r29.s64 + 624;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x89927b5c
	if (!ctx.cr6.eq) goto loc_89927B5C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927af8
	if (ctx.cr6.eq) goto loc_89927AF8;
loc_89927A64:
	// lbz r10,-31405(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927a78
	if (ctx.cr6.eq) goto loc_89927A78;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,38(r26)
	REX_STORE_U8(ctx.r26.u32 + 38, ctx.r11.u8);
loc_89927A78:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addic r9,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// stb r31,522(r30)
	REX_STORE_U8(ctx.r30.u32 + 522, ctx.r31.u8);
	// subfe r11,r9,r31
	temp.u8 = (~ctx.r9.u32 + ctx.r31.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89927aa8
	if (ctx.cr6.lt) goto loc_89927AA8;
	// bne cr6,0x89927af8
	if (!ctx.cr6.eq) goto loc_89927AF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12275(r27)
	REX_STORE_U8(ctx.r27.u32 + 12275, ctx.r11.u8);
	// b 0x89927af8
	goto loc_89927AF8;
loc_89927AA8:
	// lbz r10,12271(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 12271);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927af8
	if (ctx.cr6.eq) goto loc_89927AF8;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89927af8
	if (!ctx.cr6.eq) goto loc_89927AF8;
	// lbz r11,12326(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 12326);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89927adc
	if (!ctx.cr6.eq) goto loc_89927ADC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12275(r27)
	REX_STORE_U8(ctx.r27.u32 + 12275, ctx.r11.u8);
	// b 0x89927af8
	goto loc_89927AF8;
loc_89927ADC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,-8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x899d94e8
	ctx.lr = 0x89927AF0;
	sub_899D94E8(ctx, base);
	// lbz r8,586(r22)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + 586);
	// lbz r31,522(r30)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + 522);
loc_89927AF8:
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89927a04
	if (ctx.cr6.lt) goto loc_89927A04;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// addi r10,r8,17024
	ctx.r10.s64 = ctx.r8.s64 + 17024;
	// lwz r11,26936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,13
	ctx.r5.s64 = 13;
	// srawi r7,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// and r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 & ctx.r9.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x89931d78
	ctx.lr = 0x89927B50;
	sub_89931D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89927B5C:
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lbz r10,6415(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6415);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,6415(r11)
	REX_STORE_U8(ctx.r11.u32 + 6415, ctx.r10.u8);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x89927b8c
	if (!ctx.cr6.eq) goto loc_89927B8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,6415(r11)
	REX_STORE_U8(ctx.r11.u32 + 6415, ctx.r10.u8);
loc_89927B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89927B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89927E88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89927E90;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,12144(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928238
	if (ctx.cr6.eq) goto loc_89928238;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r9,r11,12028
	ctx.r9.s64 = ctx.r11.s64 + 12028;
	// lhz r11,12028(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89927ec4
	if (!ctx.cr6.eq) goto loc_89927EC4;
	// lhz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89928238
	if (ctx.cr6.eq) goto loc_89928238;
loc_89927EC4:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r10,25128
	ctx.r10.s64 = ctx.r10.s64 + 25128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r20,r10,664
	ctx.r20.s64 = ctx.r10.s64 + 664;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r8,r11,-25880
	ctx.r8.s64 = ctx.r11.s64 + -25880;
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r10,12800
	ctx.r6.s64 = ctx.r10.s64 + 12800;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r21,-32768
	ctx.r21.s64 = -2147483648;
	// lis r16,-16384
	ctx.r16.s64 = -1073741824;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r17,16384
	ctx.r17.s64 = 1073741824;
	// lis r14,-30276
	ctx.r14.s64 = -1984167936;
	// addi r15,r11,21760
	ctx.r15.s64 = ctx.r11.s64 + 21760;
	// addi r18,r9,-2936
	ctx.r18.s64 = ctx.r9.s64 + -2936;
loc_89927F20:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928204
	if (ctx.cr6.eq) goto loc_89928204;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_89927F3C:
	// lwz r19,0(r28)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r19,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899281d8
	if (ctx.cr6.eq) goto loc_899281D8;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r18,4
	ctx.r9.s64 = ctx.r18.s64 + 4;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,0(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x899281d8
	if (ctx.cr6.eq) goto loc_899281D8;
	// rlwinm r22,r11,0,0,1
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
loc_89927F94:
	// lwz r23,4(r30)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,24(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// beq cr6,0x89927fd8
	if (ctx.cr6.eq) goto loc_89927FD8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r22,r16
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r16.s32, ctx.xer);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// beq cr6,0x89927fcc
	if (ctx.cr6.eq) goto loc_89927FCC;
	// cmpw cr6,r22,r17
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r17.s32, ctx.xer);
	// add r27,r3,r11
	ctx.r27.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x89927fd0
	if (ctx.cr6.eq) goto loc_89927FD0;
	// add r26,r4,r10
	ctx.r26.u64 = ctx.r4.u64 + ctx.r10.u64;
	// b 0x89927fe8
	goto loc_89927FE8;
loc_89927FCC:
	// subf r27,r11,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_89927FD0:
	// subf r26,r10,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r10.u64;
	// b 0x89927fe8
	goto loc_89927FE8;
loc_89927FD8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// subf r27,r10,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r26,r4,r11
	ctx.r26.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_89927FE8:
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r10,23808(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23808);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// ble cr6,0x899280e4
	if (!ctx.cr6.gt) goto loc_899280E4;
loc_89928000:
	// addi r25,r25,-8
	ctx.r25.s64 = ctx.r25.s64 + -8;
	// lwz r31,4(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899280dc
	if (ctx.cr6.eq) goto loc_899280DC;
	// lbz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 202);
	// lbz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899280dc
	if (ctx.cr6.lt) goto loc_899280DC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899280dc
	if (ctx.cr6.eq) goto loc_899280DC;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r10,0,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_89928040:
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r21
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r21.s32, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x89928084
	if (ctx.cr6.eq) goto loc_89928084;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r16.s32, ctx.xer);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// beq cr6,0x89928078
	if (ctx.cr6.eq) goto loc_89928078;
	// cmpw cr6,r6,r17
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r17.s32, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8992807c
	if (ctx.cr6.eq) goto loc_8992807C;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// b 0x89928098
	goto loc_89928098;
loc_89928078:
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8992807C:
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x89928098
	goto loc_89928098;
loc_89928084:
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_89928098:
	// subf. r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x899280a8
	if (!ctx.cr0.lt) goto loc_899280A8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899280A8:
	// clrlwi r8,r29,4
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFFFFF;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899280d0
	if (!ctx.cr6.lt) goto loc_899280D0;
	// subf. r10,r9,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899280c4
	if (!ctx.cr0.lt) goto loc_899280C4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899280C4:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + ctx.r23.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899280f4
	if (ctx.cr6.lt) goto loc_899280F4;
loc_899280D0:
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x89928040
	if (!ctx.cr6.eq) goto loc_89928040;
loc_899280DC:
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x89928000
	if (ctx.cr6.gt) goto loc_89928000;
loc_899280E4:
	// lwz r24,0(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x89927f94
	if (!ctx.cr6.eq) goto loc_89927F94;
	// b 0x899281d8
	goto loc_899281D8;
loc_899280F4:
	// rlwinm r11,r19,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89928114
	if (ctx.cr6.eq) goto loc_89928114;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,26936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89928124
	if (!ctx.cr6.eq) goto loc_89928124;
loc_89928114:
	// li r7,448
	ctx.r7.s64 = 448;
	// lhz r6,124(r28)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + 124);
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x899d64d0
	ctx.lr = 0x89928124;
	sub_899D64D0(ctx, base);
loc_89928124:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// or r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 | ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8992816C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r29,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899281d8
	if (!ctx.cr6.eq) goto loc_899281D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,2,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFE0000;
	// rlwinm r10,r10,0,14,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE003FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899281d8
	if (!ctx.cr6.eq) goto loc_899281D8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8991beb8
	ctx.lr = 0x899281A4;
	sub_8991BEB8(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x899281d8
	if (ctx.cr6.lt) goto loc_899281D8;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r7,r10,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lhz r11,32544(r14)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r14.u32 + 32544);
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// addi r6,r8,76
	ctx.r6.s64 = ctx.r8.s64 + 76;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,32544(r14)
	REX_STORE_U16(ctx.r14.u32 + 32544, ctx.r5.u16);
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
loc_899281D8:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r28,132
	ctx.r28.s64 = ctx.r28.s64 + 132;
	// lhz r9,536(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 536);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89927f3c
	if (!ctx.cr6.eq) goto loc_89927F3C;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_89928204:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,16896
	ctx.r10.s64 = ctx.r10.s64 + 16896;
	// addi r5,r11,-31744
	ctx.r5.s64 = ctx.r11.s64 + -31744;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r20,r20,696
	ctx.r20.s64 = ctx.r20.s64 + 696;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x89927f20
	if (ctx.cr6.lt) goto loc_89927F20;
loc_89928238:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89928F20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89928F28;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,12144(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89929214
	if (ctx.cr6.eq) goto loc_89929214;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r10,r10,25128
	ctx.r10.s64 = ctx.r10.s64 + 25128;
	// lwz r11,26932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	// clrlwi r19,r11,31
	ctx.r19.u64 = ctx.r11.u32 & 0x1;
	// mulli r11,r19,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89929214
	if (ctx.cr6.eq) goto loc_89929214;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-3544
	ctx.r10.s64 = ctx.r10.s64 + -3544;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,0(r29)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x89929214
	if (ctx.cr6.eq) goto loc_89929214;
	// lis r14,-30284
	ctx.r14.s64 = -1984692224;
	// rlwinm r15,r11,0,0,1
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// lwz r7,23808(r14)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + 23808);
	// lis r16,-16384
	ctx.r16.s64 = -1073741824;
	// lis r17,16384
	ctx.r17.s64 = 1073741824;
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// addi r18,r11,21760
	ctx.r18.s64 = ctx.r11.s64 + 21760;
	// addi r21,r10,12800
	ctx.r21.s64 = ctx.r10.s64 + 12800;
loc_89928FE0:
	// lwz r22,4(r29)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r25,r20,4
	ctx.r25.u64 = ctx.r20.u32 & 0xFFFFFFF;
	// cmpw cr6,r15,r23
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x89929028
	if (ctx.cr6.eq) goto loc_89929028;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// beq cr6,0x8992901c
	if (ctx.cr6.eq) goto loc_8992901C;
	// cmpw cr6,r15,r17
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r17.s32, ctx.xer);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x89929020
	if (ctx.cr6.eq) goto loc_89929020;
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x89929040
	goto loc_89929040;
loc_8992901C:
	// subf r27,r11,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_89929020:
	// subf r26,r9,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89929040
	goto loc_89929040;
loc_89929028:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// subf r27,r9,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89929040:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// ble cr6,0x899291f8
	if (!ctx.cr6.gt) goto loc_899291F8;
loc_89929050:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899291ec
	if (ctx.cr6.eq) goto loc_899291EC;
	// lbz r11,202(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 202);
	// lbz r10,200(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899291ec
	if (ctx.cr6.lt) goto loc_899291EC;
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x899291ec
	if (ctx.cr6.eq) goto loc_899291EC;
	// lwz r10,36(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r5,r10,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_89929090:
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x899290f0
	if (ctx.cr6.eq) goto loc_899290F0;
	// lwz r6,52(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r5,r16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x899290dc
	if (ctx.cr6.eq) goto loc_899290DC;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x899290c8
	if (ctx.cr6.eq) goto loc_899290C8;
	// lwz r8,48(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x89929104
	goto loc_89929104;
loc_899290C8:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// b 0x89929104
	goto loc_89929104;
loc_899290DC:
	// lwz r8,48(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// b 0x89929104
	goto loc_89929104;
loc_899290F0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,48(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,52(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_89929104:
	// subf. r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x89929114
	if (!ctx.cr0.lt) goto loc_89929114;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89929114:
	// clrlwi r7,r4,4
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFFFFF;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8992913c
	if (!ctx.cr6.lt) goto loc_8992913C;
	// subf. r10,r8,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89929130
	if (!ctx.cr0.lt) goto loc_89929130;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89929130:
	// add r8,r3,r22
	ctx.r8.u64 = ctx.r3.u64 + ctx.r22.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8992914c
	if (ctx.cr6.lt) goto loc_8992914C;
loc_8992913C:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89929090
	if (!ctx.cr6.eq) goto loc_89929090;
	// b 0x899291ec
	goto loc_899291EC;
loc_8992914C:
	// rlwinm r11,r20,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89929174
	if (ctx.cr6.eq) goto loc_89929174;
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsh r3,r19
	ctx.r3.s64 = ctx.r19.s16;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bl 0x89928e98
	ctx.lr = 0x89929170;
	sub_89928E98(ctx, base);
	// b 0x899291ec
	goto loc_899291EC;
loc_89929174:
	// or r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 | ctx.r4.u64;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899291e0
	if (!ctx.cr6.eq) goto loc_899291E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// extsh r3,r19
	ctx.r3.s64 = ctx.r19.s16;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8991beb8
	ctx.lr = 0x8992919C;
	sub_8991BEB8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899291e0
	if (ctx.cr6.lt) goto loc_899291E0;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r21,80
	ctx.r9.s64 = ctx.r21.s64 + 80;
	// addi r8,r21,76
	ctx.r8.s64 = ctx.r21.s64 + 76;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899291c8
	if (ctx.cr6.gt) goto loc_899291C8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_899291C8:
	// lwz r10,664(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// lhz r11,-25516(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + -25516);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// sth r9,-25516(r24)
	REX_STORE_U16(ctx.r24.u32 + -25516, ctx.r9.u16);
loc_899291E0:
	// lbz r11,655(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992920c
	if (ctx.cr6.eq) goto loc_8992920C;
loc_899291EC:
	// cmplw cr6,r28,r18
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, ctx.xer);
	// bgt cr6,0x89929050
	if (ctx.cr6.gt) goto loc_89929050;
	// lwz r7,23808(r14)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + 23808);
loc_899291F8:
	// lwz r20,0(r29)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x89928fe0
	if (!ctx.cr6.eq) goto loc_89928FE0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8992920C:
	// extsh r3,r19
	ctx.r3.s64 = ctx.r19.s16;
	// bl 0x8993bba8
	ctx.lr = 0x89929214;
	sub_8993BBA8(ctx, base);
loc_89929214:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992ACA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8992ACB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// addi r10,r11,520
	ctx.r10.s64 = ctx.r11.s64 + 520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8992ade8
	if (ctx.cr6.eq) goto loc_8992ADE8;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r9,r11,6400
	ctx.r9.s64 = ctx.r11.s64 + 6400;
	// addi r8,r10,-2532
	ctx.r8.s64 = ctx.r10.s64 + -2532;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lis r7,-16192
	ctx.r7.s64 = -1061158912;
	// lbzx r3,r29,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// addi r9,r5,7200
	ctx.r9.s64 = ctx.r5.s64 + 7200;
	// ori r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 16384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992AD14;
	sub_89931D78(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r9,4947(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4947);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8992ad48
	if (!ctx.cr6.eq) goto loc_8992AD48;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r3,r10,17704
	ctx.r3.s64 = ctx.r10.s64 + 17704;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992AD40;
	sub_89931D78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8992AD48:
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r28,r11,-21388
	ctx.r28.s64 = ctx.r11.s64 + -21388;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// lbzx r10,r29,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8992add0
	if (ctx.cr6.lt) goto loc_8992ADD0;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// extsb r27,r9
	ctx.r27.s64 = ctx.r9.s8;
	// addi r3,r10,17716
	ctx.r3.s64 = ctx.r10.s64 + 17716;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992AD7C;
	sub_89931D78(ctx, base);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// addi r7,r8,11744
	ctx.r7.s64 = ctx.r8.s64 + 11744;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r30,r5,7180
	ctx.r30.s64 = ctx.r5.s64 + 7180;
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// lbzx r11,r29,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992ADAC;
	sub_89931D78(ctx, base);
	// lbzx r9,r29,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// addi r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 10;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992ADC8;
	sub_89931D78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8992ADD0:
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// addi r3,r10,17704
	ctx.r3.s64 = ctx.r10.s64 + 17704;
	// bl 0x89931d78
	ctx.lr = 0x8992ADE0;
	sub_89931D78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8992ADE8:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,16576
	ctx.r10.s64 = 1086324736;
	// addi r11,r11,7200
	ctx.r11.s64 = ctx.r11.s64 + 7200;
	// ori r6,r10,16384
	ctx.r6.u64 = ctx.r10.u64 | 16384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x89931d78
	ctx.lr = 0x8992AE04;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// addi r3,r9,17704
	ctx.r3.s64 = ctx.r9.s64 + 17704;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x89931d78
	ctx.lr = 0x8992AE20;
	sub_89931D78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992B4E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8992B4E8;
	__savegprlr_26(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r7,r11,25128
	ctx.r7.s64 = ctx.r11.s64 + 25128;
	// mulli r8,r10,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// mulli r5,r10,26
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(26));
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r9,r4,2,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r10,r6,18448
	ctx.r10.s64 = ctx.r6.s64 + 18448;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r3,-32640
	ctx.r3.s64 = -2139095040;
	// addi r6,r11,-31400
	ctx.r6.s64 = ctx.r11.s64 + -31400;
	// ori r11,r3,32768
	ctx.r11.u64 = ctx.r3.u64 | 32768;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhz r31,2(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// addi r9,r6,256
	ctx.r9.s64 = ctx.r6.s64 + 256;
	// lhz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhzu r29,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// or r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 | ctx.r11.u64;
	// lhz r28,2(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lhz r27,4(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// or r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 | ctx.r11.u64;
	// lhz r26,6(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// stw r3,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// or r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 | ctx.r11.u64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// or r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 | ctx.r11.u64;
	// addi r9,r6,12280
	ctx.r9.s64 = ctx.r6.s64 + 12280;
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// rlwinm r6,r4,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r6,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// stb r11,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// stb r10,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992BE58) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// mulli r8,r10,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// rlwinm r31,r9,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r8,r30
	REX_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8992C408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bgt cr6,0x8992c474
	if (ctx.cr6.gt) goto loc_8992C474;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bgt cr6,0x8992c474
	if (ctx.cr6.gt) goto loc_8992C474;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r8,r11,592
	ctx.r8.s64 = ctx.r11.s64 + 592;
	// addi r11,r10,-4592
	ctx.r11.s64 = ctx.r10.s64 + -4592;
	// addis r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 65536;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// li r10,320
	ctx.r10.s64 = 320;
	// addi r11,r9,-29696
	ctx.r11.s64 = ctx.r9.s64 + -29696;
loc_8992C43C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8992c45c
	if (!ctx.cr6.eq) goto loc_8992C45C;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8992c47c
	if (ctx.cr6.eq) goto loc_8992C47C;
loc_8992C45C:
	// addis r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// addi r9,r9,-26112
	ctx.r9.s64 = ctx.r9.s64 + -26112;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8992c43c
	if (ctx.cr6.lt) goto loc_8992C43C;
loc_8992C474:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8992C47C:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,4936(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 4936);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,4936(r10)
	REX_STORE_U16(ctx.r10.u32 + 4936, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8992CB10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8992CB18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r10,5752(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992cbfc
	if (ctx.cr6.eq) goto loc_8992CBFC;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30282
	ctx.r8.s64 = -1984561152;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r9,12640
	ctx.r29.s64 = ctx.r9.s64 + 12640;
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
	// ble cr6,0x8992cb94
	if (!ctx.cr6.gt) goto loc_8992CB94;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8992CB60:
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
	ctx.lr = 0x8992CB84;
	sub_89939350(ctx, base);
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992cb60
	if (ctx.cr6.lt) goto loc_8992CB60;
loc_8992CB94:
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lbz r10,6414(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992cbfc
	if (ctx.cr6.eq) goto loc_8992CBFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8992cbfc
	if (!ctx.cr6.gt) goto loc_8992CBFC;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8992CBB4:
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
	// beq cr6,0x8992cbec
	if (ctx.cr6.eq) goto loc_8992CBEC;
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
	ctx.lr = 0x8992CBEC;
	sub_899390E0(ctx, base);
loc_8992CBEC:
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992cbb4
	if (ctx.cr6.lt) goto loc_8992CBB4;
loc_8992CBFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992D2C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8992D2C8;
	__savegprlr_14(ctx, base);
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,19168(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992d878
	if (ctx.cr6.eq) goto loc_8992D878;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,5496
	ctx.r23.s64 = ctx.r10.s64 + 5496;
	// lis r9,-30278
	ctx.r9.s64 = -1984299008;
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
	// beq cr6,0x8992d878
	if (ctx.cr6.eq) goto loc_8992D878;
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
loc_8992D388:
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
	// bge 0x8992d3a8
	if (!ctx.cr0.lt) goto loc_8992D3A8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8992D3A8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8992d3c8
	if (!ctx.cr6.lt) goto loc_8992D3C8;
	// lbz r10,91(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 91);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992d3d0
	if (ctx.cr6.eq) goto loc_8992D3D0;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// b 0x8992d3d0
	goto loc_8992D3D0;
loc_8992D3C8:
	// li r10,60
	ctx.r10.s64 = 60;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
loc_8992D3D0:
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
	// bgt cr6,0x8992d860
	if (ctx.cr6.gt) goto loc_8992D860;
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
	// beq cr6,0x8992d854
	if (ctx.cr6.eq) goto loc_8992D854;
loc_8992D490:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8992d83c
	if (ctx.cr6.eq) goto loc_8992D83C;
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
	// bne cr6,0x8992d66c
	if (!ctx.cr6.eq) goto loc_8992D66C;
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
	// beq cr6,0x8992d614
	if (ctx.cr6.eq) goto loc_8992D614;
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// beq cr6,0x8992d5f4
	if (ctx.cr6.eq) goto loc_8992D5F4;
	// cmplwi cr6,r29,49152
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 49152, ctx.xer);
	// bne cr6,0x8992d630
	if (!ctx.cr6.eq) goto loc_8992D630;
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
	// b 0x8992d630
	goto loc_8992D630;
loc_8992D5F4:
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
	// b 0x8992d630
	goto loc_8992D630;
loc_8992D614:
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
loc_8992D630:
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
	// b 0x8992d83c
	goto loc_8992D83C;
loc_8992D66C:
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
	// beq cr6,0x8992d7ec
	if (ctx.cr6.eq) goto loc_8992D7EC;
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// beq cr6,0x8992d7d0
	if (ctx.cr6.eq) goto loc_8992D7D0;
	// cmplwi cr6,r29,49152
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 49152, ctx.xer);
	// bne cr6,0x8992d804
	if (!ctx.cr6.eq) goto loc_8992D804;
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
	// b 0x8992d804
	goto loc_8992D804;
loc_8992D7D0:
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
	// b 0x8992d804
	goto loc_8992D804;
loc_8992D7EC:
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
loc_8992D804:
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
loc_8992D83C:
	// lhzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992d490
	if (!ctx.cr6.eq) goto loc_8992D490;
	// lwz r4,-204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r5,-200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
loc_8992D854:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r22,9520(r11)
	REX_STORE_U32(ctx.r11.u32 + 9520, ctx.r22.u32);
loc_8992D860:
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
	// blt cr6,0x8992d388
	if (ctx.cr6.lt) goto loc_8992D388;
loc_8992D878:
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899319C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899319D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// li r9,20
	ctx.r9.s64 = 20;
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lwz r11,8156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8156);
	// lwz r10,9520(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 9520);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r8,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// stw r11,11748(r29)
	REX_STORE_U32(ctx.r29.u32 + 11748, ctx.r11.u32);
	// bl 0x89930d90
	ctx.lr = 0x899319FC;
	sub_89930D90(ctx, base);
	// bl 0x89931088
	ctx.lr = 0x89931A00;
	sub_89931088(ctx, base);
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lwz r11,9520(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 9520);
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// lwz r10,8156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8156);
	// lis r5,-4096
	ctx.r5.s64 = -268435456;
	// lwz r9,11748(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 11748);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,-17116(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -17116);
	// stw r10,19176(r6)
	REX_STORE_U32(ctx.r6.u32 + 19176, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// bgt cr6,0x89931a34
	if (ctx.cr6.gt) goto loc_89931A34;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_89931A34:
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// stw r9,-17116(r7)
	REX_STORE_U32(ctx.r7.u32 + -17116, ctx.r9.u32);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r9,19352(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 19352);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89931a64
	if (!ctx.cr6.gt) goto loc_89931A64;
	// lis r9,6503
	ctx.r9.s64 = 426180608;
	// stw r10,19352(r11)
	REX_STORE_U32(ctx.r11.u32 + 19352, ctx.r10.u32);
	// ori r9,r9,4112
	ctx.r9.u64 = ctx.r9.u64 | 4112;
	// stw r9,5212(r8)
	REX_STORE_U32(ctx.r8.u32 + 5212, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89931A64:
	// lis r10,6503
	ctx.r10.s64 = 426180608;
	// stw r9,19352(r11)
	REX_STORE_U32(ctx.r11.u32 + 19352, ctx.r9.u32);
	// ori r10,r10,4112
	ctx.r10.u64 = ctx.r10.u64 | 4112;
	// stw r10,5212(r8)
	REX_STORE_U32(ctx.r8.u32 + 5212, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89931C78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-31400
	ctx.r11.s64 = ctx.r10.s64 + -31400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x89931cb8
	if (!ctx.cr6.lt) goto loc_89931CB8;
	// lis r8,-32640
	ctx.r8.s64 = -2139095040;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// ori r6,r8,32813
	ctx.r6.u64 = ctx.r8.u64 | 32813;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_89931CB8:
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// addi r7,r8,5344
	ctx.r7.s64 = ctx.r8.s64 + 5344;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// lwzx r6,r5,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r3,r8,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r8,r5,12280
	ctx.r8.s64 = ctx.r5.s64 + 12280;
	// lwzx r5,r10,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r7,r3,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stwu r4,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stbx r10,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// stw r5,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// stw r7,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x89932488;
	__savegprlr_15(ctx, base);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r16,r11,9056
	ctx.r16.s64 = ctx.r11.s64 + 9056;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lhz r9,19184(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 19184);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// mulli r11,r9,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// lbz r20,-31402(r6)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r6.u32 + -31402);
	// add r18,r11,r16
	ctx.r18.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// addi r27,r11,13024
	ctx.r27.s64 = ctx.r11.s64 + 13024;
	// addi r23,r10,-2480
	ctx.r23.s64 = ctx.r10.s64 + -2480;
	// addi r4,r9,9656
	ctx.r4.s64 = ctx.r9.s64 + 9656;
	// addi r22,r8,27804
	ctx.r22.s64 = ctx.r8.s64 + 27804;
	// addi r19,r7,5472
	ctx.r19.s64 = ctx.r7.s64 + 5472;
loc_899324D4:
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
loc_899324D8:
	// lwz r24,0(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r24,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89932770
	if (ctx.cr6.eq) goto loc_89932770;
	// clrlwi r28,r20,24
	ctx.r28.u64 = ctx.r20.u32 & 0xFF;
	// lhz r3,24(r21)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r21.u32 + 24);
	// lhz r31,20(r21)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r21.u32 + 20);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x89932508
	if (!ctx.cr6.eq) goto loc_89932508;
loc_89932500:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x89932750
	goto loc_89932750;
loc_89932508:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x899326b0
	if (!ctx.cr6.gt) goto loc_899326B0;
	// addic. r26,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r26.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x899326b0
	if (!ctx.cr0.gt) goto loc_899326B0;
loc_8993251C:
	// lbzx r6,r30,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// mulli r7,r6,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,116
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 116, ctx.xer);
	// bge cr6,0x89932634
	if (!ctx.cr6.lt) goto loc_89932634;
	// rlwinm r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89932500
	if (ctx.cr6.eq) goto loc_89932500;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// subfic r9,r11,116
	ctx.xer.ca = ctx.r11.u32 <= 116;
	ctx.r9.u64 = static_cast<uint64_t>(116) - ctx.r11.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// lbzx r8,r9,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// addic. r11,r10,-160
	ctx.xer.ca = ctx.r10.u32 > 159;
	ctx.r11.s64 = ctx.r10.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// bge 0x89932588
	if (!ctx.cr0.lt) goto loc_89932588;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89932588:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x89932500
	if (ctx.cr6.gt) goto loc_89932500;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r11,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r11.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899325a0
	if (!ctx.cr0.lt) goto loc_899325A0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899325A0:
	// cmpwi cr6,r11,160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 160, ctx.xer);
	// bgt cr6,0x89932500
	if (ctx.cr6.gt) goto loc_89932500;
	// lwzx r11,r7,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899325c8
	if (ctx.cr6.eq) goto loc_899325C8;
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
	// lhzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,516
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 516, ctx.xer);
	// beq cr6,0x899326a4
	if (ctx.cr6.eq) goto loc_899326A4;
loc_899325C8:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,160
	ctx.r8.s64 = ctx.r8.s64 + 160;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r8,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899326a4
	if (ctx.cr6.eq) goto loc_899326A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x89932614
	if (!ctx.cr6.gt) goto loc_89932614;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_89932614:
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// bge cr6,0x8993274c
	if (!ctx.cr6.lt) goto loc_8993274C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993274c
	if (ctx.cr6.eq) goto loc_8993274C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8993274c
	goto loc_8993274C;
loc_89932634:
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// addic. r11,r8,-160
	ctx.xer.ca = ctx.r8.u32 > 159;
	ctx.r11.s64 = ctx.r8.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89932644
	if (!ctx.cr0.lt) goto loc_89932644;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89932644:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x89932500
	if (ctx.cr6.gt) goto loc_89932500;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r10,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r10.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8993265c
	if (!ctx.cr0.lt) goto loc_8993265C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8993265C:
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// bgt cr6,0x89932500
	if (ctx.cr6.gt) goto loc_89932500;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r15,r11,160
	ctx.r15.s64 = ctx.r11.s64 + 160;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r15.s32 >> 4;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r8,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89932728
	if (!ctx.cr6.eq) goto loc_89932728;
loc_899326A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8993251c
	if (ctx.cr6.lt) goto loc_8993251C;
loc_899326B0:
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r11,r9,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// rlwinm r8,r11,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bge cr6,0x89932738
	if (!ctx.cr6.lt) goto loc_89932738;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8993274c
	if (ctx.cr6.eq) goto loc_8993274C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x899326ec
	if (!ctx.cr6.gt) goto loc_899326EC;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_899326EC:
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// li r10,116
	ctx.r10.s64 = 116;
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
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// subfe r10,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993274c
	if (ctx.cr6.eq) goto loc_8993274C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8993274c
	goto loc_8993274C;
loc_89932728:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8993274c
	if (!ctx.cr6.gt) goto loc_8993274C;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// b 0x8993274c
	goto loc_8993274C;
loc_89932738:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8993274c
	if (ctx.cr6.eq) goto loc_8993274C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8993274c
	if (!ctx.cr6.gt) goto loc_8993274C;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8993274C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_89932750:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,55(r21)
	REX_STORE_U8(ctx.r21.u32 + 55, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89932770
	if (ctx.cr6.eq) goto loc_89932770;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r19
	REX_STORE_U16(ctx.r11.u32 + ctx.r19.u32, ctx.r10.u16);
loc_89932770:
	// addi r21,r21,60
	ctx.r21.s64 = ctx.r21.s64 + 60;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x899324d8
	if (!ctx.cr6.eq) goto loc_899324D8;
	// addi r17,r17,180
	ctx.r17.s64 = ctx.r17.s64 + 180;
	// addi r11,r16,360
	ctx.r11.s64 = ctx.r16.s64 + 360;
	// addi r18,r18,180
	ctx.r18.s64 = ctx.r18.s64 + 180;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899324d4
	if (ctx.cr6.lt) goto loc_899324D4;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89934538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x89934540;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stb r11,-25513(r10)
	REX_STORE_U8(ctx.r10.u32 + -25513, ctx.r11.u8);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// addi r27,r11,9656
	ctx.r27.s64 = ctx.r11.s64 + 9656;
	// addi r25,r10,32560
	ctx.r25.s64 = ctx.r10.s64 + 32560;
loc_8993456C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89934570:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r25,12
	ctx.r7.s64 = ctx.r25.s64 + 12;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// sthx r8,r6,r7
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r8.u16);
	// blt cr6,0x89934570
	if (ctx.cr6.lt) goto loc_89934570;
	// mulli r11,r9,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899345bc
	if (ctx.cr6.eq) goto loc_899345BC;
	// addi r10,r27,56
	ctx.r10.s64 = ctx.r27.s64 + 56;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
loc_899345BC:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8993456c
	if (ctx.cr6.lt) goto loc_8993456C;
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
	// li r26,-32768
	ctx.r26.s64 = -32768;
	// addi r24,r11,7128
	ctx.r24.s64 = ctx.r11.s64 + 7128;
	// addi r23,r10,-10056
	ctx.r23.s64 = ctx.r10.s64 + -10056;
	// addi r22,r9,-31952
	ctx.r22.s64 = ctx.r9.s64 + -31952;
	// addi r21,r8,11752
	ctx.r21.s64 = ctx.r8.s64 + 11752;
	// addi r20,r7,-9208
	ctx.r20.s64 = ctx.r7.s64 + -9208;
	// addi r19,r6,32032
	ctx.r19.s64 = ctx.r6.s64 + 32032;
loc_89934604:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
loc_8993460C:
	// mulli r28,r6,92
	ctx.r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lwzx r11,r28,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899346d8
	if (ctx.cr6.eq) goto loc_899346D8;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899346d8
	if (ctx.cr6.eq) goto loc_899346D8;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8993467c
	if (ctx.cr6.eq) goto loc_8993467C;
	// bl 0x89933c68
	ctx.lr = 0x89934650;
	sub_89933C68(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x89934710
	if (!ctx.cr6.lt) goto loc_89934710;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r6,6
	ctx.r9.s64 = ctx.r6.s64 + 6;
	// clrlwi r8,r7,18
	ctx.r8.u64 = ctx.r7.u32 & 0x3FFF;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// sthx r8,r10,r22
	REX_STORE_U16(ctx.r10.u32 + ctx.r22.u32, ctx.r8.u16);
	// sthx r30,r10,r23
	REX_STORE_U16(ctx.r10.u32 + ctx.r23.u32, ctx.r30.u16);
	// sthx r11,r10,r24
	REX_STORE_U16(ctx.r10.u32 + ctx.r24.u32, ctx.r11.u16);
	// b 0x899346a8
	goto loc_899346A8;
loc_8993467C:
	// bl 0x89933c20
	ctx.lr = 0x89934680;
	sub_89933C20(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x89934710
	if (!ctx.cr6.lt) goto loc_89934710;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r6,6
	ctx.r9.s64 = ctx.r6.s64 + 6;
	// clrlwi r8,r7,18
	ctx.r8.u64 = ctx.r7.u32 & 0x3FFF;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// sthx r8,r10,r19
	REX_STORE_U16(ctx.r10.u32 + ctx.r19.u32, ctx.r8.u16);
	// sthx r30,r10,r20
	REX_STORE_U16(ctx.r10.u32 + ctx.r20.u32, ctx.r30.u16);
	// sthx r11,r10,r21
	REX_STORE_U16(ctx.r10.u32 + ctx.r21.u32, ctx.r11.u16);
loc_899346A8:
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// stwx r29,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r29.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r5,r26
	ctx.r9.u64 = ctx.r5.u64 | ctx.r26.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r27,44
	ctx.r7.s64 = ctx.r27.s64 + 44;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r3,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r3.u32);
	// sthx r9,r5,r25
	REX_STORE_U16(ctx.r5.u32 + ctx.r25.u32, ctx.r9.u16);
loc_899346D8:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8993460c
	if (!ctx.cr6.lt) goto loc_8993460C;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// bne cr6,0x89934604
	if (!ctx.cr6.eq) goto loc_89934604;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_89934710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935D50) {
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
	// addi r5,r11,4106
	ctx.r5.s64 = ctx.r11.s64 + 4106;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x89935D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89936218) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89936248
	if (ctx.cr6.eq) goto loc_89936248;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,7934(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7934);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_89936248:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89936268
	if (!ctx.cr6.eq) goto loc_89936268;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,5096
	ctx.r9.s64 = ctx.r11.s64 + 5096;
	// lbzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x899d9448
	sub_899D9448(ctx, base);
	return;
loc_89936268:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// addi r7,r9,5096
	ctx.r7.s64 = ctx.r9.s64 + 5096;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r5,r8,-10736
	ctx.r5.s64 = ctx.r8.s64 + -10736;
	// addi r4,r6,-26152
	ctx.r4.s64 = ctx.r6.s64 + -26152;
	// lbzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stbx r3,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u8);
	// stbx r11,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899365D0) {
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
	// beq cr6,0x89936684
	if (ctx.cr6.eq) goto loc_89936684;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
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
	// bge cr6,0x8993666c
	if (!ctx.cr6.lt) goto loc_8993666C;
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
	// beq cr6,0x8993666c
	if (ctx.cr6.eq) goto loc_8993666C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bgt 0x89936664
	if (ctx.cr0.gt) goto loc_89936664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x89936650;
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
loc_89936664:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89936684
	if (!ctx.cr6.eq) goto loc_89936684;
loc_8993666C:
	// bl 0x89936360
	ctx.lr = 0x89936670;
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
loc_89936684:
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

DEFINE_REX_FUNC(sub_899370F0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// lbz r8,530(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 530);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89937118
	if (!ctx.cr6.eq) goto loc_89937118;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r9,12322(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12322);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// ble cr6,0x89937194
	if (!ctx.cr6.gt) goto loc_89937194;
loc_89937118:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r9,586(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89937194
	if (!ctx.cr6.eq) goto loc_89937194;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 + 624;
	// mulli r11,r11,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89937194
	if (ctx.cr6.eq) goto loc_89937194;
	// addi r9,r10,625
	ctx.r9.s64 = ctx.r10.s64 + 625;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89937170
	if (ctx.cr6.eq) goto loc_89937170;
	// addi r9,r10,637
	ctx.r9.s64 = ctx.r10.s64 + 637;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r6,r7,18964
	ctx.r6.s64 = ctx.r7.s64 + 18964;
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
loc_89937170:
	// rlwinm r9,r8,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89937194
	if (ctx.cr6.eq) goto loc_89937194;
	// addi r9,r10,636
	ctx.r9.s64 = ctx.r10.s64 + 636;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r7,r8,18960
	ctx.r7.s64 = ctx.r8.s64 + 18960;
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbx r5,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
loc_89937194:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,26936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mulli r10,r9,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899383D8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899383E0;
	__savegprlr_29(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r7,3620
	ctx.r5.s64 = ctx.r7.s64 + 3620;
	// addi r3,r6,6420
	ctx.r3.s64 = ctx.r6.s64 + 6420;
	// lhz r10,25056(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 25056);
	// lhz r9,3620(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 3620);
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// lhz r7,6420(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 6420);
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// lwz r8,25056(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 25056);
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// subfic r3,r29,31
	ctx.xer.ca = ctx.r29.u32 <= 31;
	ctx.r3.u64 = static_cast<uint64_t>(31) - ctx.r29.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,-9496(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + -9496);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lwz r9,512(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 512);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r31,-9496
	ctx.r31.s64 = ctx.r31.s64 + -9496;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// rlwinm r9,r3,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lhz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// rlwimi r10,r4,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r5,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// or r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// or r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938978) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89938980;
	__savegprlr_28(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r4,r10,25056
	ctx.r4.s64 = ctx.r10.s64 + 25056;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// addi r31,r9,3620
	ctx.r31.s64 = ctx.r9.s64 + 3620;
	// addi r30,r6,6420
	ctx.r30.s64 = ctx.r6.s64 + 6420;
	// lwz r8,25056(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 25056);
	// lhz r7,3620(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 3620);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r5,6420(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 6420);
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lhz r7,2(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r4,-9496(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + -9496);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r31,r29,-9496
	ctx.r31.s64 = ctx.r29.s64 + -9496;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r6,12792(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 12792);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lhz r31,2(r31)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r5,r10,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addis r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 65536;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r9,512(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// or r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
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
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993B498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8993B4A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// addi r30,r11,-3544
	ctx.r30.s64 = ctx.r11.s64 + -3544;
loc_8993B4B8:
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993b518
	if (ctx.cr6.eq) goto loc_8993B518;
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// rlwinm r28,r10,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r27,r8,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,656(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 656);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r28,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89939350
	ctx.lr = 0x8993B518;
	sub_89939350(ctx, base);
loc_8993B518:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,1412
	ctx.r11.s64 = ctx.r29.s64 + 1412;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993b4b8
	if (ctx.cr6.lt) goto loc_8993B4B8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,12323(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12323);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993b5a8
	if (ctx.cr6.eq) goto loc_8993B5A8;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_8993B53C:
	// lwz r3,-12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r3,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xE000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993b598
	if (ctx.cr6.eq) goto loc_8993B598;
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r28,r8,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r8,664(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 664);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x899390e0
	ctx.lr = 0x8993B598;
	sub_899390E0(ctx, base);
loc_8993B598:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,1404
	ctx.r11.s64 = ctx.r29.s64 + 1404;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993b53c
	if (ctx.cr6.lt) goto loc_8993B53C;
loc_8993B5A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993C990) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x8993C998;
	__savegprlr_19(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r22,-31402(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -31402);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8993c9b8
	if (!ctx.cr6.eq) goto loc_8993C9B8;
loc_8993C9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8993C9B8:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// addi r31,r11,9656
	ctx.r31.s64 = ctx.r11.s64 + 9656;
	// addi r23,r10,27804
	ctx.r23.s64 = ctx.r10.s64 + 27804;
	// ble cr6,0x8993cb80
	if (!ctx.cr6.gt) goto loc_8993CB80;
	// addic. r21,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r21.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// ble 0x8993cb80
	if (!ctx.cr0.gt) goto loc_8993CB80;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// extsb r27,r6
	ctx.r27.s64 = ctx.r6.s8;
	// addi r28,r11,13024
	ctx.r28.s64 = ctx.r11.s64 + 13024;
	// addi r25,r10,-2480
	ctx.r25.s64 = ctx.r10.s64 + -2480;
loc_8993C9F0:
	// lbzx r30,r24,r23
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r23.u32);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// mulli r7,r30,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(92));
	// lbzx r29,r7,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8993cb04
	if (!ctx.cr6.gt) goto loc_8993CB04;
	// rlwinm r11,r20,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993c9b0
	if (ctx.cr6.eq) goto loc_8993C9B0;
	// subf r9,r29,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r29.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// lbzx r8,r9,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// addic. r11,r10,-160
	ctx.xer.ca = ctx.r10.u32 > 159;
	ctx.r11.s64 = ctx.r10.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// bge 0x8993ca58
	if (!ctx.cr0.lt) goto loc_8993CA58;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993CA58:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x8993c9b0
	if (ctx.cr6.gt) goto loc_8993C9B0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r11,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r11.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993ca70
	if (!ctx.cr0.lt) goto loc_8993CA70;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993CA70:
	// cmpwi cr6,r11,160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 160, ctx.xer);
	// bgt cr6,0x8993c9b0
	if (ctx.cr6.gt) goto loc_8993C9B0;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993ca98
	if (ctx.cr6.eq) goto loc_8993CA98;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lhzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,516
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 516, ctx.xer);
	// beq cr6,0x8993cb74
	if (ctx.cr6.eq) goto loc_8993CB74;
loc_8993CA98:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,160
	ctx.r8.s64 = ctx.r8.s64 + 160;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993cb74
	if (ctx.cr6.eq) goto loc_8993CB74;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8993cae4
	if (!ctx.cr6.gt) goto loc_8993CAE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8993CAE4:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8993cc20
	if (!ctx.cr6.lt) goto loc_8993CC20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993cc20
	if (ctx.cr6.eq) goto loc_8993CC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8993CB04:
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addic. r11,r8,-160
	ctx.xer.ca = ctx.r8.u32 > 159;
	ctx.r11.s64 = ctx.r8.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993cb14
	if (!ctx.cr0.lt) goto loc_8993CB14;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993CB14:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x8993c9b0
	if (ctx.cr6.gt) goto loc_8993C9B0;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addic. r10,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r10.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8993cb2c
	if (!ctx.cr0.lt) goto loc_8993CB2C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8993CB2C:
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// bgt cr6,0x8993c9b0
	if (ctx.cr6.gt) goto loc_8993C9B0;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r19,r11,160
	ctx.r19.s64 = ctx.r11.s64 + 160;
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r19,4
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r19.s32 >> 4;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993cbf8
	if (!ctx.cr6.eq) goto loc_8993CBF8;
loc_8993CB74:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r21
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8993c9f0
	if (ctx.cr6.lt) goto loc_8993C9F0;
loc_8993CB80:
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r11,r8,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8993cc08
	if (!ctx.cr6.gt) goto loc_8993CC08;
	// rlwinm r7,r11,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8993cc20
	if (ctx.cr6.eq) goto loc_8993CC20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8993cbc0
	if (!ctx.cr6.gt) goto loc_8993CBC0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8993CBC0:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
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
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// subfe r10,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993cc20
	if (ctx.cr6.eq) goto loc_8993CC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8993CBF8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8993cc20
	if (!ctx.cr6.gt) goto loc_8993CC20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8993CC08:
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993cc20
	if (ctx.cr6.eq) goto loc_8993CC20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8993cc20
	if (!ctx.cr6.gt) goto loc_8993CC20;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8993CC20:
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899405A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899405B0;
	__savegprlr_23(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// addi r28,r11,-4180
	ctx.r28.s64 = ctx.r11.s64 + -4180;
	// addi r26,r4,10
	ctx.r26.s64 = ctx.r4.s64 + 10;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,-4180(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4180);
	// addi r10,r10,3800
	ctx.r10.s64 = ctx.r10.s64 + 3800;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89940780
	if (ctx.cr6.eq) goto loc_89940780;
	// mulli r9,r3,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r30,r9,r26
	ctx.r30.u64 = ctx.r9.u64 + ctx.r26.u64;
loc_899405E8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r7,r30,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,97
	ctx.r9.s64 = 97;
	// li r8,122
	ctx.r8.s64 = 122;
	// rlwinm r25,r9,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// srawi r24,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 31;
	// subfc r9,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r23,r11,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r9,r25,r24
	temp.u8 = (ctx.r25.u32 + ctx.r24.u32 < ctx.r25.u32) | (ctx.r25.u32 + ctx.r24.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// subfc r8,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// adde r8,r23,r25
	temp.u8 = (ctx.r23.u32 + ctx.r25.u32 < ctx.r23.u32) | (ctx.r23.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r23.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8994063c
	if (ctx.cr6.eq) goto loc_8994063C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_8994063C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8994064c
	if (!ctx.cr6.eq) goto loc_8994064C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8994064C:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// li r9,97
	ctx.r9.s64 = 97;
	// li r8,122
	ctx.r8.s64 = 122;
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// srawi r25,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 31;
	// subfc r9,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r24,r11,1,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r9,r5,r25
	temp.u8 = (ctx.r5.u32 + ctx.r25.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r5.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// subfc r8,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// adde r8,r24,r5
	temp.u8 = (ctx.r24.u32 + ctx.r5.u32 < ctx.r24.u32) | (ctx.r24.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r24.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89940698
	if (ctx.cr6.eq) goto loc_89940698;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_89940698:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x899406b4
	if (!ctx.cr6.eq) goto loc_899406B4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899406B4:
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r9,97
	ctx.r9.s64 = 97;
	// li r8,122
	ctx.r8.s64 = 122;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// subfc r9,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r25,r11,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r9,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subfc r5,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// adde r8,r25,r6
	temp.u8 = (ctx.r25.u32 + ctx.r6.u32 < ctx.r25.u32) | (ctx.r25.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r25.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89940700
	if (ctx.cr6.eq) goto loc_89940700;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
loc_89940700:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8994071c
	if (!ctx.cr6.eq) goto loc_8994071C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8994071C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x89940764
	if (!ctx.cr6.eq) goto loc_89940764;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r29,r11,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r31,r6,0,0,21
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r5,r5,0,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r6,r29,0,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFC00;
	// addi r31,r31,99
	ctx.r31.s64 = ctx.r31.s64 + 99;
	// addi r5,r5,97
	ctx.r5.s64 = ctx.r5.s64 + 97;
	// addi r6,r6,118
	ctx.r6.s64 = ctx.r6.s64 + 118;
	// stwx r31,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r6,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
loc_89940764:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lbzx r11,r29,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x899405e8
	if (!ctx.cr6.eq) goto loc_899405E8;
loc_89940780:
	// mulli r11,r3,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r10,27
	ctx.r8.s64 = ctx.r10.s64 + 27;
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r6,19496
	ctx.r4.s64 = ctx.r6.s64 + 19496;
	// addi r3,r10,11
	ctx.r3.s64 = ctx.r10.s64 + 11;
	// lbzx r9,r7,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lbzx r4,r7,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 19;
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stwx r4,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r4.u32);
	// lbzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r6,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u32);
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwx r4,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89943148) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89943150;
	__savegprlr_18(ctx, base);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// li r21,2
	ctx.r21.s64 = 2;
	// addi r29,r8,-4384
	ctx.r29.s64 = ctx.r8.s64 + -4384;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r7,-4384(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + -4384);
	// addi r10,r10,-4320
	ctx.r10.s64 = ctx.r10.s64 + -4320;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// addi r9,r9,25128
	ctx.r9.s64 = ctx.r9.s64 + 25128;
	// lwz r6,56(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r31,24(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r30,16(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r26,5
	ctx.r26.s64 = 5;
	// li r27,6
	ctx.r27.s64 = 6;
	// li r28,7
	ctx.r28.s64 = 7;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
loc_899431C0:
	// lwz r8,580(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 580);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899431e0
	if (!ctx.cr6.eq) goto loc_899431E0;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r22,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r22.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_899431E0:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x899431fc
	if (!ctx.cr6.eq) goto loc_899431FC;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r23,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r23.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_899431FC:
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x89943218
	if (!ctx.cr6.eq) goto loc_89943218;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r21,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r21.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_89943218:
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x89943234
	if (!ctx.cr6.eq) goto loc_89943234;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r24,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r24.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_89943234:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x89943250
	if (!ctx.cr6.eq) goto loc_89943250;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r25,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r25.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_89943250:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8994326c
	if (!ctx.cr6.eq) goto loc_8994326C;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r26,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r26.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_8994326C:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x89943288
	if (!ctx.cr6.eq) goto loc_89943288;
	// lbz r20,-1(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,0(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r27,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r27.u8);
	// stbx r18,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r18.u8);
loc_89943288:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x899432a4
	if (!ctx.cr6.eq) goto loc_899432A4;
	// lbz r8,-1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r20,0(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r19,0(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r28,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r28.u8);
	// stbx r19,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r19.u8);
loc_899432A4:
	// addi r9,r9,696
	ctx.r9.s64 = ctx.r9.s64 + 696;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x899431c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899431C0;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89944708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x89944710;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r7,r11,27280
	ctx.r7.s64 = ctx.r11.s64 + 27280;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r30,r10,25128
	ctx.r30.s64 = ctx.r10.s64 + 25128;
	// addi r6,r9,7384
	ctx.r6.s64 = ctx.r9.s64 + 7384;
	// lbz r11,27280(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27280);
	// li r22,0
	ctx.r22.s64 = 0;
	// lbz r10,128(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 128);
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lbz r8,7384(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 7384);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// lbz r9,256(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// addi r20,r5,8088
	ctx.r20.s64 = ctx.r5.s64 + 8088;
	// lbz r7,128(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// lis r23,1
	ctx.r23.s64 = 65536;
	// lbz r6,256(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 256);
	// stb r10,625(r30)
	REX_STORE_U8(ctx.r30.u32 + 625, ctx.r10.u8);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// stb r11,624(r30)
	REX_STORE_U8(ctx.r30.u32 + 624, ctx.r11.u8);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stb r9,626(r30)
	REX_STORE_U8(ctx.r30.u32 + 626, ctx.r9.u8);
	// stb r8,1320(r30)
	REX_STORE_U8(ctx.r30.u32 + 1320, ctx.r8.u8);
	// addi r21,r11,-4216
	ctx.r21.s64 = ctx.r11.s64 + -4216;
	// stb r7,1321(r30)
	REX_STORE_U8(ctx.r30.u32 + 1321, ctx.r7.u8);
	// lbz r19,530(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// stb r6,1322(r30)
	REX_STORE_U8(ctx.r30.u32 + 1322, ctx.r6.u8);
loc_89944780:
	// mulli r31,r24,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(696));
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// addi r27,r30,588
	ctx.r27.s64 = ctx.r30.s64 + 588;
	// addi r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 + 624;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r26,r31,r27
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r8,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x70;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// lwz r29,4(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// bgt cr6,0x89944f14
	if (ctx.cr6.gt) goto loc_89944F14;
	// beq cr6,0x89944d80
	if (ctx.cr6.eq) goto loc_89944D80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89944c00
	if (ctx.cr6.eq) goto loc_89944C00;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x89944964
	if (ctx.cr6.eq) goto loc_89944964;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x89945128
	if (!ctx.cr6.eq) goto loc_89945128;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,654
	ctx.r11.s64 = ctx.r30.s64 + 654;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x89945128
	if (!ctx.cr6.eq) goto loc_89945128;
	// addi r7,r30,626
	ctx.r7.s64 = ctx.r30.s64 + 626;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89944838
	if (ctx.cr6.eq) goto loc_89944838;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r30,316
	ctx.r10.s64 = ctx.r30.s64 + 316;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
loc_89944838:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89944878
	if (ctx.cr6.eq) goto loc_89944878;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,452
	ctx.r9.s64 = ctx.r30.s64 + 452;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,316
	ctx.r8.s64 = ctx.r30.s64 + 316;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r5,r6,r23
	ctx.r5.u64 = ctx.r6.u64 + ctx.r23.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x89944878
	if (!ctx.cr6.gt) goto loc_89944878;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r23.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89944878:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899448b8
	if (ctx.cr6.eq) goto loc_899448B8;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,520
	ctx.r9.s64 = ctx.r30.s64 + 520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,384
	ctx.r8.s64 = ctx.r30.s64 + 384;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subf r5,r23,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r23.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x899448b8
	if (!ctx.cr6.lt) goto loc_899448B8;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_899448B8:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899448e4
	if (ctx.cr6.eq) goto loc_899448E4;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r7,r23,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r23.u64;
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_899448E4:
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r30,452
	ctx.r10.s64 = ctx.r30.s64 + 452;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,316
	ctx.r8.s64 = ctx.r30.s64 + 316;
	// addi r7,r30,520
	ctx.r7.s64 = ctx.r30.s64 + 520;
	// addi r6,r30,384
	ctx.r6.s64 = ctx.r30.s64 + 384;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r11,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// srawi. r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r6,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r3,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// bge 0x89944940
	if (!ctx.cr0.lt) goto loc_89944940;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89944940:
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r8,r30,180
	ctx.r8.s64 = ctx.r30.s64 + 180;
	// srawi. r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// bge 0x89944958
	if (!ctx.cr0.lt) goto loc_89944958;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89944958:
	// addi r10,r30,248
	ctx.r10.s64 = ctx.r30.s64 + 248;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x89945128
	goto loc_89945128;
loc_89944964:
	// addi r25,r30,654
	ctx.r25.s64 = ctx.r30.s64 + 654;
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89944b50
	if (!ctx.cr6.eq) goto loc_89944B50;
	// addi r29,r30,626
	ctx.r29.s64 = ctx.r30.s64 + 626;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944a54
	if (ctx.cr6.eq) goto loc_89944A54;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89944a14
	if (ctx.cr6.eq) goto loc_89944A14;
loc_89944994:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x89944a08
	if (!ctx.cr6.eq) goto loc_89944A08;
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x899449e4
	if (ctx.cr6.eq) goto loc_899449E4;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
loc_899449BC:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x899449d4
	if (!ctx.cr6.eq) goto loc_899449D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_899449D4:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x899449bc
	if (!ctx.cr6.eq) goto loc_899449BC;
loc_899449E4:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89944a08
	if (!ctx.cr6.eq) goto loc_89944A08;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x89933ef8
	ctx.lr = 0x899449FC;
	sub_89933EF8(ctx, base);
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// bl 0x89945140
	ctx.lr = 0x89944A08;
	sub_89945140(ctx, base);
loc_89944A08:
	// lwzu r4,8(r20)
	ea = 8 + ctx.r20.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r20.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x89944994
	if (!ctx.cr6.eq) goto loc_89944994;
loc_89944A14:
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89944a38
	if (ctx.cr6.eq) goto loc_89944A38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// b 0x89944a3c
	goto loc_89944A3C;
loc_89944A38:
	// stwx r22,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r22.u32);
loc_89944A3C:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// bl 0x89945140
	ctx.lr = 0x89944A54;
	sub_89945140(ctx, base);
loc_89944A54:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944b50
	if (ctx.cr6.eq) goto loc_89944B50;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89944af0
	if (ctx.cr6.eq) goto loc_89944AF0;
loc_89944A70:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x89944ae4
	if (!ctx.cr6.eq) goto loc_89944AE4;
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x89944ac0
	if (ctx.cr6.eq) goto loc_89944AC0;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
loc_89944A98:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x89944ab0
	if (!ctx.cr6.eq) goto loc_89944AB0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_89944AB0:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x89944a98
	if (!ctx.cr6.eq) goto loc_89944A98;
loc_89944AC0:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89944ae4
	if (!ctx.cr6.eq) goto loc_89944AE4;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x89933ef8
	ctx.lr = 0x89944AD8;
	sub_89933EF8(ctx, base);
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// bl 0x89945140
	ctx.lr = 0x89944AE4;
	sub_89945140(ctx, base);
loc_89944AE4:
	// lwzu r4,8(r20)
	ea = 8 + ctx.r20.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r20.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x89944a70
	if (!ctx.cr6.eq) goto loc_89944A70;
loc_89944AF0:
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89944b08
	if (ctx.cr6.eq) goto loc_89944B08;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// b 0x89944b38
	goto loc_89944B38;
loc_89944B08:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89944b38
	if (ctx.cr6.eq) goto loc_89944B38;
loc_89944B14:
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89944b14
	if (!ctx.cr6.eq) goto loc_89944B14;
loc_89944B38:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// bl 0x89945140
	ctx.lr = 0x89944B50;
	sub_89945140(ctx, base);
loc_89944B50:
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89944bcc
	if (ctx.cr6.eq) goto loc_89944BCC;
	// addi r11,r30,626
	ctx.r11.s64 = ctx.r30.s64 + 626;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944ba0
	if (ctx.cr6.eq) goto loc_89944BA0;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x89944b9c
	if (!ctx.cr6.lt) goto loc_89944B9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89944ba0
	goto loc_89944BA0;
loc_89944B9C:
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
loc_89944BA0:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89944bcc
	if (ctx.cr6.eq) goto loc_89944BCC;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x89944bc8
	if (!ctx.cr6.eq) goto loc_89944BC8;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_89944BC8:
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_89944BCC:
	// addi r11,r30,626
	ctx.r11.s64 = ctx.r30.s64 + 626;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x89945128
	if (!ctx.cr6.eq) goto loc_89945128;
	// stbx r22,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r22.u8);
	// b 0x89945128
	goto loc_89945128;
loc_89944C00:
	// addi r28,r30,626
	ctx.r28.s64 = ctx.r30.s64 + 626;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944c50
	if (ctx.cr6.eq) goto loc_89944C50;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89944c3c
	if (ctx.cr6.eq) goto loc_89944C3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x89944c40
	goto loc_89944C40;
loc_89944C3C:
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
loc_89944C40:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// bl 0x89945140
	ctx.lr = 0x89944C50;
	sub_89945140(ctx, base);
loc_89944C50:
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944cbc
	if (ctx.cr6.eq) goto loc_89944CBC;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944c7c
	if (ctx.cr6.eq) goto loc_89944C7C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x89944cac
	goto loc_89944CAC;
loc_89944C7C:
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89944cac
	if (ctx.cr6.eq) goto loc_89944CAC;
loc_89944C88:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89944c88
	if (!ctx.cr6.eq) goto loc_89944C88;
loc_89944CAC:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// bl 0x89945140
	ctx.lr = 0x89944CBC;
	sub_89945140(ctx, base);
loc_89944CBC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r29,r7,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// beq cr6,0x89944d18
	if (ctx.cr6.eq) goto loc_89944D18;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89944d0c
	if (ctx.cr6.eq) goto loc_89944D0C;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x89944d10
	goto loc_89944D10;
loc_89944D0C:
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
loc_89944D10:
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// bl 0x89945140
	ctx.lr = 0x89944D18;
	sub_89945140(ctx, base);
loc_89944D18:
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944d44
	if (ctx.cr6.eq) goto loc_89944D44;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x89945120
	goto loc_89945120;
loc_89944D44:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89945120
	if (ctx.cr6.eq) goto loc_89945120;
loc_89944D50:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89944d50
	if (!ctx.cr6.eq) goto loc_89944D50;
	// b 0x89945120
	goto loc_89945120;
loc_89944D80:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,654
	ctx.r11.s64 = ctx.r30.s64 + 654;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// addi r7,r30,626
	ctx.r7.s64 = ctx.r30.s64 + 626;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89944dfc
	if (ctx.cr6.eq) goto loc_89944DFC;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,316
	ctx.r9.s64 = ctx.r30.s64 + 316;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,452
	ctx.r8.s64 = ctx.r30.s64 + 452;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subf r5,r23,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r23.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x89944dfc
	if (!ctx.cr6.lt) goto loc_89944DFC;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89944DFC:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89944e28
	if (ctx.cr6.eq) goto loc_89944E28;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,452
	ctx.r9.s64 = ctx.r30.s64 + 452;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r6,r23,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r23.u64;
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_89944E28:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89944e54
	if (ctx.cr6.eq) goto loc_89944E54;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,520
	ctx.r9.s64 = ctx.r30.s64 + 520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_89944E54:
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89944e94
	if (ctx.cr6.eq) goto loc_89944E94;
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,520
	ctx.r8.s64 = ctx.r30.s64 + 520;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r6,r7,r23
	ctx.r6.u64 = ctx.r7.u64 + ctx.r23.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x89944e94
	if (!ctx.cr6.gt) goto loc_89944E94;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r23.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89944E94:
	// mulli r10,r24,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(174));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r30,452
	ctx.r10.s64 = ctx.r30.s64 + 452;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,316
	ctx.r9.s64 = ctx.r30.s64 + 316;
	// addi r8,r30,520
	ctx.r8.s64 = ctx.r30.s64 + 520;
	// addi r7,r30,384
	ctx.r7.s64 = ctx.r30.s64 + 384;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r30,112
	ctx.r5.s64 = ctx.r30.s64 + 112;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// srawi. r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r4,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// bge 0x89944ef0
	if (!ctx.cr0.lt) goto loc_89944EF0;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89944EF0:
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r8,r30,180
	ctx.r8.s64 = ctx.r30.s64 + 180;
	// srawi. r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// bge 0x89944958
	if (!ctx.cr0.lt) goto loc_89944958;
	// addi r10,r30,248
	ctx.r10.s64 = ctx.r30.s64 + 248;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x89945128
	goto loc_89945128;
loc_89944F14:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x89944ff0
	if (ctx.cr6.eq) goto loc_89944FF0;
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// bne cr6,0x89945128
	if (!ctx.cr6.eq) goto loc_89945128;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// lis r9,320
	ctx.r9.s64 = 20971520;
	// addi r8,r30,626
	ctx.r8.s64 = ctx.r30.s64 + 626;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// and r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 & ctx.r3.u64;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89944f64
	if (ctx.cr6.eq) goto loc_89944F64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89944F64:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r8,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// andc r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// and r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89944f8c
	if (ctx.cr6.eq) goto loc_89944F8C;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r23.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89944F8C:
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// lis r9,240
	ctx.r9.s64 = 15728640;
	// rlwinm r7,r8,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subfc r6,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r5,r9,r10
	ctx.r5.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89944fc4
	if (ctx.cr6.eq) goto loc_89944FC4;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89944FC4:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r8,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r23.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x89945128
	goto loc_89945128;
loc_89944FF0:
	// addi r29,r30,626
	ctx.r29.s64 = ctx.r30.s64 + 626;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945080
	if (ctx.cr6.eq) goto loc_89945080;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x89945038
	if (ctx.cr6.eq) goto loc_89945038;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8994501C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r7,r8,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8994501c
	if (!ctx.cr6.eq) goto loc_8994501C;
loc_89945038:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwx r22,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r22.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// stwx r22,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u32);
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// lwzx r4,r5,r21
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ctx.r7.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// bl 0x89945140
	ctx.lr = 0x89945080;
	sub_89945140(ctx, base);
loc_89945080:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945128
	if (ctx.cr6.eq) goto loc_89945128;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r8,0(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x899450c8
	if (ctx.cr6.eq) goto loc_899450C8;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_899450AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r6,r7,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x899450ac
	if (!ctx.cr6.eq) goto loc_899450AC;
loc_899450C8:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899450f8
	if (!ctx.cr6.eq) goto loc_899450F8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899450f8
	if (ctx.cr6.eq) goto loc_899450F8;
loc_899450DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r8,r9,r21
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899450dc
	if (!ctx.cr6.eq) goto loc_899450DC;
loc_899450F8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r22,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r22.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// stwx r22,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u32);
	// lwzx r5,r6,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
loc_89945120:
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// bl 0x89945140
	ctx.lr = 0x89945128;
	sub_89945140(ctx, base);
loc_89945128:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// blt cr6,0x89944780
	if (ctx.cr6.lt) goto loc_89944780;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994F040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8994F048;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r6,r8,-2532
	ctx.r6.s64 = ctx.r8.s64 + -2532;
	// lwz r11,3528(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3528);
	// addi r5,r7,11744
	ctx.r5.s64 = ctx.r7.s64 + 11744;
	// lis r4,-30269
	ctx.r4.s64 = -1983709184;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// addi r31,r4,-10772
	ctx.r31.s64 = ctx.r4.s64 + -10772;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// addi r28,r30,20412
	ctx.r28.s64 = ctx.r30.s64 + 20412;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r27,r29,-9484
	ctx.r27.s64 = ctx.r29.s64 + -9484;
	// lis r26,-30269
	ctx.r26.s64 = -1983709184;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// stb r10,4947(r9)
	REX_STORE_U8(ctx.r9.u32 + 4947, ctx.r10.u8);
	// addi r24,r26,-21296
	ctx.r24.s64 = ctx.r26.s64 + -21296;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r23,r25,20428
	ctx.r23.s64 = ctx.r25.s64 + 20428;
	// stb r10,-2532(r8)
	REX_STORE_U8(ctx.r8.u32 + -2532, ctx.r10.u8);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r22,r8,-21372
	ctx.r22.s64 = ctx.r8.s64 + -21372;
	// stb r10,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// stb r10,11744(r7)
	REX_STORE_U8(ctx.r7.u32 + 11744, ctx.r10.u8);
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lis r20,-30273
	ctx.r20.s64 = -1983971328;
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lis r19,-30270
	ctx.r19.s64 = -1983774720;
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lis r18,-30275
	ctx.r18.s64 = -1984102400;
	// stb r9,-10772(r4)
	REX_STORE_U8(ctx.r4.u32 + -10772, ctx.r9.u8);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lbz r9,13(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// addi r17,r4,-9500
	ctx.r17.s64 = ctx.r4.s64 + -9500;
	// stb r9,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r10,8419(r3)
	REX_STORE_U8(ctx.r3.u32 + 8419, ctx.r10.u8);
	// lbz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// stb r10,20412(r30)
	REX_STORE_U8(ctx.r30.u32 + 20412, ctx.r10.u8);
	// lbz r10,15(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// stb r10,1(r28)
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// stb r10,-9484(r29)
	REX_STORE_U8(ctx.r29.u32 + -9484, ctx.r10.u8);
	// lbz r10,17(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// stb r10,1(r27)
	REX_STORE_U8(ctx.r27.u32 + 1, ctx.r10.u8);
	// lbz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// stb r10,-21296(r26)
	REX_STORE_U8(ctx.r26.u32 + -21296, ctx.r10.u8);
	// lbz r10,19(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// stb r10,1(r24)
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r10.u8);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stb r10,20428(r25)
	REX_STORE_U8(ctx.r25.u32 + 20428, ctx.r10.u8);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// stb r10,1(r23)
	REX_STORE_U8(ctx.r23.u32 + 1, ctx.r10.u8);
	// lbz r10,22(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// stb r10,-21372(r8)
	REX_STORE_U8(ctx.r8.u32 + -21372, ctx.r10.u8);
	// lbz r10,23(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// stb r10,1(r22)
	REX_STORE_U8(ctx.r22.u32 + 1, ctx.r10.u8);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// stb r10,6055(r6)
	REX_STORE_U8(ctx.r6.u32 + 6055, ctx.r10.u8);
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// stb r10,7934(r21)
	REX_STORE_U8(ctx.r21.u32 + 7934, ctx.r10.u8);
	// lbz r10,26(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// stb r10,539(r7)
	REX_STORE_U8(ctx.r7.u32 + 539, ctx.r10.u8);
	// lbz r10,27(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// stb r10,-25514(r20)
	REX_STORE_U8(ctx.r20.u32 + -25514, ctx.r10.u8);
	// lbz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// stb r10,12799(r5)
	REX_STORE_U8(ctx.r5.u32 + 12799, ctx.r10.u8);
	// lbz r10,29(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 29);
	// stb r10,12322(r19)
	REX_STORE_U8(ctx.r19.u32 + 12322, ctx.r10.u8);
	// lbz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r9,31(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// stb r10,12270(r18)
	REX_STORE_U8(ctx.r18.u32 + 12270, ctx.r10.u8);
	// stb r9,-9500(r4)
	REX_STORE_U8(ctx.r4.u32 + -9500, ctx.r9.u8);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// stb r10,1(r17)
	REX_STORE_U8(ctx.r17.u32 + 1, ctx.r10.u8);
	// addi r8,r3,7932
	ctx.r8.s64 = ctx.r3.s64 + 7932;
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// addi r7,r9,6400
	ctx.r7.s64 = ctx.r9.s64 + 6400;
	// stb r10,7932(r3)
	REX_STORE_U8(ctx.r3.u32 + 7932, ctx.r10.u8);
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// lbz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stb r10,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r10.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lbz r10,35(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stb r10,6400(r9)
	REX_STORE_U8(ctx.r9.u32 + 6400, ctx.r10.u8);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// stb r10,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// lis r29,-30274
	ctx.r29.s64 = -1984036864;
	// lbz r10,37(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 37);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// stb r10,32554(r6)
	REX_STORE_U8(ctx.r6.u32 + 32554, ctx.r10.u8);
	// lis r27,-30251
	ctx.r27.s64 = -1982529536;
	// lbz r10,38(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 38);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stb r10,12271(r5)
	REX_STORE_U8(ctx.r5.u32 + 12271, ctx.r10.u8);
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
	// lbz r10,39(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 39);
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// stb r10,-31405(r4)
	REX_STORE_U8(ctx.r4.u32 + -31405, ctx.r10.u8);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// stw r8,3352(r3)
	REX_STORE_U32(ctx.r3.u32 + 3352, ctx.r8.u32);
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// stb r10,12274(r31)
	REX_STORE_U8(ctx.r31.u32 + 12274, ctx.r10.u8);
	// lis r18,-30253
	ctx.r18.s64 = -1982660608;
	// stw r9,512(r30)
	REX_STORE_U32(ctx.r30.u32 + 512, ctx.r9.u32);
	// lis r17,-30273
	ctx.r17.s64 = -1983971328;
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lis r15,-30253
	ctx.r15.s64 = -1982660608;
	// lwz r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lis r14,-30253
	ctx.r14.s64 = -1982660608;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lhz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// sth r8,536(r29)
	REX_STORE_U16(ctx.r29.u32 + 536, ctx.r8.u16);
	// stb r10,12326(r28)
	REX_STORE_U8(ctx.r28.u32 + 12326, ctx.r10.u8);
	// lhz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 74);
	// stw r7,12792(r19)
	REX_STORE_U32(ctx.r19.u32 + 12792, ctx.r7.u32);
	// stw r6,3620(r18)
	REX_STORE_U32(ctx.r18.u32 + 3620, ctx.r6.u32);
	// stw r5,6420(r17)
	REX_STORE_U32(ctx.r17.u32 + 6420, ctx.r5.u32);
	// stw r4,-9496(r15)
	REX_STORE_U32(ctx.r15.u32 + -9496, ctx.r4.u32);
	// sth r10,19184(r27)
	REX_STORE_U16(ctx.r27.u32 + 19184, ctx.r10.u16);
	// stw r9,25056(r16)
	REX_STORE_U32(ctx.r16.u32 + 25056, ctx.r9.u32);
	// lhz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// sth r10,12600(r26)
	REX_STORE_U16(ctx.r26.u32 + 12600, ctx.r10.u16);
	// lhz r10,78(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 78);
	// sth r10,584(r25)
	REX_STORE_U16(ctx.r25.u32 + 584, ctx.r10.u16);
	// lhz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r10,20416(r24)
	REX_STORE_U16(ctx.r24.u32 + 20416, ctx.r10.u16);
	// lhz r10,82(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// sth r10,8416(r23)
	REX_STORE_U16(ctx.r23.u32 + 8416, ctx.r10.u16);
	// lhz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 84);
	// sth r10,-9540(r22)
	REX_STORE_U16(ctx.r22.u32 + -9540, ctx.r10.u16);
	// lhz r10,86(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 86);
	// sth r10,25060(r21)
	REX_STORE_U16(ctx.r21.u32 + 25060, ctx.r10.u16);
	// lhz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// sth r10,-9220(r20)
	REX_STORE_U16(ctx.r20.u32 + -9220, ctx.r10.u16);
	// lhz r10,90(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// sth r10,7376(r14)
	REX_STORE_U16(ctx.r14.u32 + 7376, ctx.r10.u16);
	// lhz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 92);
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// sth r10,-10776(r9)
	REX_STORE_U16(ctx.r9.u32 + -10776, ctx.r10.u16);
	// lis r31,-30242
	ctx.r31.s64 = -1981939712;
	// lhz r11,94(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 94);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// sth r11,9644(r8)
	REX_STORE_U16(ctx.r8.u32 + 9644, ctx.r11.u16);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r28,-30273
	ctx.r28.s64 = -1983971328;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lhz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// sth r10,32012(r7)
	REX_STORE_U16(ctx.r7.u32 + 32012, ctx.r10.u16);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lhz r10,98(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 98);
	// lis r24,-30251
	ctx.r24.s64 = -1982529536;
	// sth r10,26900(r6)
	REX_STORE_U16(ctx.r6.u32 + 26900, ctx.r10.u16);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lis r21,-30269
	ctx.r21.s64 = -1983709184;
	// lhz r10,102(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 102);
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// sth r10,-10752(r5)
	REX_STORE_U16(ctx.r5.u32 + -10752, ctx.r10.u16);
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lhz r10,114(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lis r18,-30274
	ctx.r18.s64 = -1984036864;
	// sth r10,-21588(r31)
	REX_STORE_U16(ctx.r31.u32 + -21588, ctx.r10.u16);
	// lis r17,-30275
	ctx.r17.s64 = -1984102400;
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// sth r10,6044(r30)
	REX_STORE_U16(ctx.r30.u32 + 6044, ctx.r10.u16);
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// lhz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// sth r10,12268(r29)
	REX_STORE_U16(ctx.r29.u32 + 12268, ctx.r10.u16);
	// lhz r10,118(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// sth r10,3528(r28)
	REX_STORE_U16(ctx.r28.u32 + 3528, ctx.r10.u16);
	// lhz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// sth r10,20400(r27)
	REX_STORE_U16(ctx.r27.u32 + 20400, ctx.r10.u16);
	// lhz r10,122(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 122);
	// sth r10,-9492(r26)
	REX_STORE_U16(ctx.r26.u32 + -9492, ctx.r10.u16);
	// lhz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 124);
	// sth r10,3616(r25)
	REX_STORE_U16(ctx.r25.u32 + 3616, ctx.r10.u16);
	// lhz r10,126(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// sth r10,9640(r7)
	REX_STORE_U16(ctx.r7.u32 + 9640, ctx.r10.u16);
	// stw r9,20424(r4)
	REX_STORE_U32(ctx.r4.u32 + 20424, ctx.r9.u32);
	// stw r8,-25888(r3)
	REX_STORE_U32(ctx.r3.u32 + -25888, ctx.r8.u32);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lhz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r8,106(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 106);
	// lhz r6,110(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// lhz r5,112(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// lhz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 108);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,12740(r24)
	REX_STORE_U32(ctx.r24.u32 + 12740, ctx.r10.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,160(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// sth r9,-31408(r19)
	REX_STORE_U16(ctx.r19.u32 + -31408, ctx.r9.u16);
	// sth r8,528(r18)
	REX_STORE_U16(ctx.r18.u32 + 528, ctx.r8.u16);
	// sth r7,9652(r17)
	REX_STORE_U16(ctx.r17.u32 + 9652, ctx.r7.u16);
	// stw r10,-25884(r23)
	REX_STORE_U32(ctx.r23.u32 + -25884, ctx.r10.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,588(r22)
	REX_STORE_U32(ctx.r22.u32 + 588, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,-10764(r21)
	REX_STORE_U32(ctx.r21.u32 + -10764, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// stw r10,3628(r20)
	REX_STORE_U32(ctx.r20.u32 + 3628, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// sth r6,-21400(r3)
	REX_STORE_U16(ctx.r3.u32 + -21400, ctx.r6.u16);
	// sth r5,7112(r31)
	REX_STORE_U16(ctx.r31.u32 + 7112, ctx.r5.u16);
	// stw r10,9528(r16)
	REX_STORE_U32(ctx.r16.u32 + 9528, ctx.r10.u32);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r28,-30251
	ctx.r28.s64 = -1982529536;
	// lwz r3,248(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// lis r25,-30242
	ctx.r25.s64 = -1981939712;
	// stw r27,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// stw r26,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// lis r21,-30276
	ctx.r21.s64 = -1984167936;
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lis r19,-30273
	ctx.r19.s64 = -1983971328;
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// lis r17,-30275
	ctx.r17.s64 = -1984102400;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,252(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// lis r14,-30270
	ctx.r14.s64 = -1983774720;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// lis r17,-30270
	ctx.r17.s64 = -1983774720;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// lis r19,-30251
	ctx.r19.s64 = -1982529536;
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// lis r21,-30269
	ctx.r21.s64 = -1983709184;
	// lis r23,-30276
	ctx.r23.s64 = -1984167936;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stw r17,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// lis r27,-30274
	ctx.r27.s64 = -1984036864;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lis r30,-30273
	ctx.r30.s64 = -1983971328;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r28,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r7,172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r6,176(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r5,180(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r9,184(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r31,188(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r24,192(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// lbz r22,196(r11)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 196);
	// lbz r20,197(r11)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 197);
	// lbz r18,198(r11)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 198);
	// lwz r16,200(r11)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r14,204(r11)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r17,208(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r19,212(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r21,216(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r23,220(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r25,224(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r26,228(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r27,232(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r28,236(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// lwz r29,240(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r30,244(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// stw r3,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// stw r10,3872(r8)
	REX_STORE_U32(ctx.r8.u32 + 3872, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r31,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// stw r4,27796(r15)
	REX_STORE_U32(ctx.r15.u32 + 27796, ctx.r4.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// lis r19,-30276
	ctx.r19.s64 = -1984167936;
	// stw r21,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// stw r6,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lwz r7,208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r14,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r14.u32);
	// stw r17,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r17.u32);
	// stw r24,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// stw r23,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// lis r23,-30273
	ctx.r23.s64 = -1983971328;
	// stw r16,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// stw r28,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r29,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// ld r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 268);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// stw r5,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r5.u32);
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// stb r18,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r18.u8);
	// lis r18,-30242
	ctx.r18.s64 = -1981939712;
	// std r8,12004(r6)
	REX_STORE_U64(ctx.r6.u32 + 12004, ctx.r8.u64);
	// stw r25,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// stb r22,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r22.u8);
	// stb r20,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r20.u8);
	// stw r26,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r27,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// lis r27,-30273
	ctx.r27.s64 = -1983971328;
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r9,-25892(r7)
	REX_STORE_U32(ctx.r7.u32 + -25892, ctx.r9.u32);
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,-10768(r5)
	REX_STORE_U32(ctx.r5.u32 + -10768, ctx.r11.u32);
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,248(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r19,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r19.u32);
	// stw r21,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r21.u32);
	// lwz r20,272(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r14,244(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r19,232(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r21,176(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// std r10,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r10.u64);
	// stw r18,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// stw r23,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// stw r24,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r25,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r7,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// lwz r30,240(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r28,260(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r26,256(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r22,264(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lbz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r16,102(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r15,103(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r18,236(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r23,156(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r24,152(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,208(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ld r8,276(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 276);
	// lbz r7,284(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 284);
	// std r8,7912(r29)
	REX_STORE_U64(ctx.r29.u32 + 7912, ctx.r8.u64);
	// stb r7,5755(r27)
	REX_STORE_U8(ctx.r27.u32 + 5755, ctx.r7.u8);
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r27,120(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r27,-31412(r29)
	REX_STORE_U32(ctx.r29.u32 + -31412, ctx.r27.u32);
	// lwz r29,212(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stw r5,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// lbz r11,285(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 285);
	// lbz r9,286(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 286);
	// stw r4,3876(r29)
	REX_STORE_U32(ctx.r29.u32 + 3876, ctx.r4.u32);
	// lwz r29,224(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,288(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// lbz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 292);
	// lbz r6,293(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 293);
	// lwz r5,296(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// stw r30,4948(r29)
	REX_STORE_U32(ctx.r29.u32 + 4948, ctx.r30.u32);
	// lwz r30,192(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r28,12748(r30)
	REX_STORE_U32(ctx.r30.u32 + 12748, ctx.r28.u32);
	// lwz r30,216(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r26,7380(r30)
	REX_STORE_U32(ctx.r30.u32 + 7380, ctx.r26.u32);
	// lwz r30,200(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r22,7900(r30)
	REX_STORE_U32(ctx.r30.u32 + 7900, ctx.r22.u32);
	// lwz r30,180(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r20,-21408(r30)
	REX_STORE_U32(ctx.r30.u32 + -21408, ctx.r20.u32);
	// lwz r30,164(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stb r17,5211(r30)
	REX_STORE_U8(ctx.r30.u32 + 5211, ctx.r17.u8);
	// lwz r30,148(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stb r16,32014(r30)
	REX_STORE_U8(ctx.r30.u32 + 32014, ctx.r16.u8);
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stb r15,3530(r30)
	REX_STORE_U8(ctx.r30.u32 + 3530, ctx.r15.u8);
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r14,-31416(r30)
	REX_STORE_U32(ctx.r30.u32 + -31416, ctx.r14.u32);
	// lwz r30,128(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r4,26936(r30)
	REX_STORE_U32(ctx.r30.u32 + 26936, ctx.r4.u32);
	// lwz r30,136(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r4,20944(r30)
	REX_STORE_U32(ctx.r30.u32 + 20944, ctx.r4.u32);
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r4,19180(r30)
	REX_STORE_U32(ctx.r30.u32 + 19180, ctx.r4.u32);
	// lwz r30,140(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r4,-10740(r30)
	REX_STORE_U32(ctx.r30.u32 + -10740, ctx.r4.u32);
	// lwz r30,116(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r4,32024(r30)
	REX_STORE_U32(ctx.r30.u32 + 32024, ctx.r4.u32);
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,228(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r4,9648(r30)
	REX_STORE_U32(ctx.r30.u32 + 9648, ctx.r4.u32);
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r10,7124(r30)
	REX_STORE_U32(ctx.r30.u32 + 7124, ctx.r10.u32);
	// lwz r30,108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stb r9,6402(r4)
	REX_STORE_U8(ctx.r4.u32 + 6402, ctx.r9.u8);
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r18,516(r30)
	REX_STORE_U32(ctx.r30.u32 + 516, ctx.r18.u32);
	// lwz r30,168(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stb r7,9543(r4)
	REX_STORE_U8(ctx.r4.u32 + 9543, ctx.r7.u8);
	// stw r19,7096(r30)
	REX_STORE_U32(ctx.r30.u32 + 7096, ctx.r19.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r21,20948(r30)
	REX_STORE_U32(ctx.r30.u32 + 20948, ctx.r21.u32);
	// lwz r30,92(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r23,3792(r30)
	REX_STORE_U32(ctx.r30.u32 + 3792, ctx.r23.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,26524(r30)
	REX_STORE_U32(ctx.r30.u32 + 26524, ctx.r24.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,5760(r30)
	REX_STORE_U32(ctx.r30.u32 + 5760, ctx.r25.u32);
	// lwz r30,220(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r3,-21288(r30)
	REX_STORE_U32(ctx.r30.u32 + -21288, ctx.r3.u32);
	// lwz r3,204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stb r11,9519(r3)
	REX_STORE_U8(ctx.r3.u32 + 9519, ctx.r11.u8);
	// lwz r3,188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r8,-25520(r3)
	REX_STORE_U32(ctx.r3.u32 + -25520, ctx.r8.u32);
	// lwz r3,252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stb r6,32550(r3)
	REX_STORE_U8(ctx.r3.u32 + 32550, ctx.r6.u8);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ld r10,272(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r7,r9,20432
	ctx.r7.s64 = ctx.r9.s64 + 20432;
	// addi r6,r8,7384
	ctx.r6.s64 = ctx.r8.s64 + 7384;
	// stw r5,-21580(r4)
	REX_STORE_U32(ctx.r4.u32 + -21580, ctx.r5.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r4,r11,3632
	ctx.r4.s64 = ctx.r11.s64 + 3632;
	// addi r5,r5,27280
	ctx.r5.s64 = ctx.r5.s64 + 27280;
loc_8994F810:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994F820:
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r26,r10,r7
	ctx.r26.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r30,300(r30)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + 300);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r30,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u8);
	// lbz r3,812(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 812);
	// stbx r3,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// lbz r3,1324(r27)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 1324);
	// stbx r3,r26,r11
	REX_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r3.u8);
	// lbz r9,1836(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1836);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8994f820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994F820;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// blt cr6,0x8994f810
	if (ctx.cr6.lt) goto loc_8994F810;
	// lbz r11,2348(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2348);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// addi r8,r9,532
	ctx.r8.s64 = ctx.r9.s64 + 532;
	// lis r3,-30247
	ctx.r3.s64 = -1982267392;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stb r11,532(r9)
	REX_STORE_U8(ctx.r9.u32 + 532, ctx.r11.u8);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// addi r5,r10,-31400
	ctx.r5.s64 = ctx.r10.s64 + -31400;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r30,-30251
	ctx.r30.s64 = -1982529536;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lis r29,-30251
	ctx.r29.s64 = -1982529536;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// lis r25,-30251
	ctx.r25.s64 = -1982529536;
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// addi r22,r24,-2540
	ctx.r22.s64 = ctx.r24.s64 + -2540;
	// lis r21,-30253
	ctx.r21.s64 = -1982660608;
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lis r19,-30251
	ctx.r19.s64 = -1982529536;
	// lis r17,-30251
	ctx.r17.s64 = -1982529536;
	// lis r16,-30242
	ctx.r16.s64 = -1981939712;
	// addi r18,r31,2444
	ctx.r18.s64 = ctx.r31.s64 + 2444;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// lbz r11,2349(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2349);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lwz r11,2356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2356);
	// lwz r10,2360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2360);
	// stw r11,5764(r4)
	REX_STORE_U32(ctx.r4.u32 + 5764, ctx.r11.u32);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lwz r11,2352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2352);
	// stw r10,19360(r3)
	REX_STORE_U32(ctx.r3.u32 + 19360, ctx.r10.u32);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// stw r11,-9224(r7)
	REX_STORE_U32(ctx.r7.u32 + -9224, ctx.r11.u32);
	// lwz r11,2364(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2364);
	// lbz r10,2368(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2368);
	// lwz r9,2372(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2372);
	// stw r9,12636(r6)
	REX_STORE_U32(ctx.r6.u32 + 12636, ctx.r9.u32);
	// stw r11,12068(r30)
	REX_STORE_U32(ctx.r30.u32 + 12068, ctx.r11.u32);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lwz r11,2376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2376);
	// stb r10,6418(r8)
	REX_STORE_U8(ctx.r8.u32 + 6418, ctx.r10.u8);
	// lwz r8,2400(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2400);
	// lwz r6,2404(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2404);
	// lwz r9,2384(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2384);
	// stw r9,-9528(r4)
	REX_STORE_U32(ctx.r4.u32 + -9528, ctx.r9.u32);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// stw r8,12756(r29)
	REX_STORE_U32(ctx.r29.u32 + 12756, ctx.r8.u32);
	// lwz r10,2380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// lwz r9,2388(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r8,2392(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2392);
	// lwz r7,2396(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2396);
	// stw r6,3796(r3)
	REX_STORE_U32(ctx.r3.u32 + 3796, ctx.r6.u32);
	// stw r11,4940(r28)
	REX_STORE_U32(ctx.r28.u32 + 4940, ctx.r11.u32);
	// lwz r11,2408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2408);
	// stw r11,20396(r27)
	REX_STORE_U32(ctx.r27.u32 + 20396, ctx.r11.u32);
	// stw r10,7920(r26)
	REX_STORE_U32(ctx.r26.u32 + 7920, ctx.r10.u32);
	// stw r9,19172(r25)
	REX_STORE_U32(ctx.r25.u32 + 19172, ctx.r9.u32);
	// stw r8,7120(r30)
	REX_STORE_U32(ctx.r30.u32 + 7120, ctx.r8.u32);
	// lwz r11,2412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2412);
	// lwz r10,2416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2416);
	// lwz r9,2420(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2420);
	// lwz r8,2424(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2424);
	// stw r8,-2540(r24)
	REX_STORE_U32(ctx.r24.u32 + -2540, ctx.r8.u32);
	// stw r11,26916(r23)
	REX_STORE_U32(ctx.r23.u32 + 26916, ctx.r11.u32);
	// lwz r11,2428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// stw r11,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// lwz r11,2440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2440);
	// stw r10,-9536(r21)
	REX_STORE_U32(ctx.r21.u32 + -9536, ctx.r10.u32);
	// lwz r10,2436(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// stw r7,8152(r20)
	REX_STORE_U32(ctx.r20.u32 + 8152, ctx.r7.u32);
	// stw r9,12156(r19)
	REX_STORE_U32(ctx.r19.u32 + 12156, ctx.r9.u32);
	// stw r11,12020(r4)
	REX_STORE_U32(ctx.r4.u32 + 12020, ctx.r11.u32);
	// lwz r11,2432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2432);
	// stw r10,-21592(r16)
	REX_STORE_U32(ctx.r16.u32 + -21592, ctx.r10.u32);
	// stw r11,12072(r17)
	REX_STORE_U32(ctx.r17.u32 + 12072, ctx.r11.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rotlwi r8,r18,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
loc_8994F9C0:
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r10,r5,-128
	ctx.r10.s64 = ctx.r5.s64 + -128;
	// addi r11,r8,-128
	ctx.r11.s64 = ctx.r8.s64 + -128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994F9D0:
	// lwzu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8994f9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994F9D0;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r7,128
	ctx.r11.s64 = ctx.r7.s64 + 128;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8994f9c0
	if (ctx.cr6.lt) goto loc_8994F9C0;
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
loc_8994FA08:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8994fa08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994FA08;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,7736(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r8,7740(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,7744
	ctx.r7.s64 = ctx.r31.s64 + 7744;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stw r9,26912(r6)
	REX_STORE_U32(ctx.r6.u32 + 26912, ctx.r9.u32);
	// stw r8,3880(r5)
	REX_STORE_U32(ctx.r5.u32 + 3880, ctx.r8.u32);
	// addi r10,r10,5464
	ctx.r10.s64 = ctx.r10.s64 + 5464;
loc_8994FA48:
	// lbzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8994fa48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994FA48;
	// lbz r11,7776(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7776);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r8,r10,-9508
	ctx.r8.s64 = ctx.r10.s64 + -9508;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r30,r9,25128
	ctx.r30.s64 = ctx.r9.s64 + 25128;
	// stb r11,-9508(r10)
	REX_STORE_U8(ctx.r10.u32 + -9508, ctx.r11.u8);
	// addi r4,r31,7788
	ctx.r4.s64 = ctx.r31.s64 + 7788;
	// lbz r11,7777(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7777);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// li r5,696
	ctx.r5.s64 = 696;
	// lbz r11,7778(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7778);
	// stb r11,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// lbz r11,7779(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7779);
	// stb r11,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// lbz r11,7780(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7780);
	// stb r11,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
	// lbz r11,7781(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7781);
	// stb r11,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// lbz r11,7782(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7782);
	// stb r11,6(r8)
	REX_STORE_U8(ctx.r8.u32 + 6, ctx.r11.u8);
	// lbz r11,7783(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7783);
	// stb r11,7(r8)
	REX_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// lwz r11,7784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7784);
	// stw r11,27792(r7)
	REX_STORE_U32(ctx.r7.u32 + 27792, ctx.r11.u32);
	// bl 0x899dbdb0
	ctx.lr = 0x8994FAC4;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,8484
	ctx.r4.s64 = ctx.r31.s64 + 8484;
	// addi r3,r30,696
	ctx.r3.s64 = ctx.r30.s64 + 696;
	// li r5,696
	ctx.r5.s64 = 696;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FAD4;
	sub_899DBDB0(ctx, base);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// addi r4,r31,9180
	ctx.r4.s64 = ctx.r31.s64 + 9180;
	// addi r30,r5,9056
	ctx.r30.s64 = ctx.r5.s64 + 9056;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FAEC;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9360
	ctx.r4.s64 = ctx.r31.s64 + 9360;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FAFC;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9240
	ctx.r4.s64 = ctx.r31.s64 + 9240;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB0C;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9420
	ctx.r4.s64 = ctx.r31.s64 + 9420;
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB1C;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9300
	ctx.r4.s64 = ctx.r31.s64 + 9300;
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB2C;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9480
	ctx.r4.s64 = ctx.r31.s64 + 9480;
	// addi r3,r30,300
	ctx.r3.s64 = ctx.r30.s64 + 300;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB3C;
	sub_899DBDB0(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r30,r31,26436
	ctx.r30.s64 = ctx.r31.s64 + 26436;
	// addi r11,r11,-25880
	ctx.r11.s64 = ctx.r11.s64 + -25880;
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r29,r11,16896
	ctx.r29.s64 = ctx.r11.s64 + 16896;
loc_8994FB50:
	// addi r4,r30,-16896
	ctx.r4.s64 = ctx.r30.s64 + -16896;
	// addi r3,r29,-16896
	ctx.r3.s64 = ctx.r29.s64 + -16896;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB60;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FB70;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x8994fb50
	if (!ctx.cr0.eq) goto loc_8994FB50;
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
loc_8994FB98:
	// addi r4,r29,-3168
	ctx.r4.s64 = ctx.r29.s64 + -3168;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBA8;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBB8;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,-2112
	ctx.r4.s64 = ctx.r29.s64 + -2112;
	// addi r3,r30,-2112
	ctx.r3.s64 = ctx.r30.s64 + -2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBC8;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,1056
	ctx.r4.s64 = ctx.r29.s64 + 1056;
	// addi r3,r30,1056
	ctx.r3.s64 = ctx.r30.s64 + 1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBD8;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,-1056
	ctx.r4.s64 = ctx.r29.s64 + -1056;
	// addi r3,r30,-1056
	ctx.r3.s64 = ctx.r30.s64 + -1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBE8;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,2112
	ctx.r4.s64 = ctx.r29.s64 + 2112;
	// addi r3,r30,2112
	ctx.r3.s64 = ctx.r30.s64 + 2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FBF8;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x8994fb98
	if (!ctx.cr0.eq) goto loc_8994FB98;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// addi r30,r30,-14268
	ctx.r30.s64 = ctx.r30.s64 + -14268;
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r29,r11,1600
	ctx.r29.s64 = ctx.r11.s64 + 1600;
loc_8994FC20:
	// addi r4,r30,-1600
	ctx.r4.s64 = ctx.r30.s64 + -1600;
	// addi r3,r29,-1600
	ctx.r3.s64 = ctx.r29.s64 + -1600;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FC30;
	sub_899DBDB0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FC40;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x8994fc20
	if (!ctx.cr0.eq) goto loc_8994FC20;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r28,r11,592
	ctx.r28.s64 = ctx.r11.s64 + 592;
	// addi r29,r29,-12668
	ctx.r29.s64 = ctx.r29.s64 + -12668;
	// li r30,352
	ctx.r30.s64 = 352;
loc_8994FC64:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FC74;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// bne 0x8994fc64
	if (!ctx.cr0.eq) goto loc_8994FC64;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r28,r11,12800
	ctx.r28.s64 = ctx.r11.s64 + 12800;
	// addi r29,r29,26756
	ctx.r29.s64 = ctx.r29.s64 + 26756;
	// li r30,256
	ctx.r30.s64 = 256;
loc_8994FC98:
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FCA8;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// addi r28,r28,208
	ctx.r28.s64 = ctx.r28.s64 + 208;
	// bne 0x8994fc98
	if (!ctx.cr0.eq) goto loc_8994FC98;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addi r28,r11,19368
	ctx.r28.s64 = ctx.r11.s64 + 19368;
	// addi r29,r29,14468
	ctx.r29.s64 = ctx.r29.s64 + 14468;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_8994FCCC:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FCDC;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// bne 0x8994fccc
	if (!ctx.cr0.eq) goto loc_8994FCCC;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// addi r28,r11,6424
	ctx.r28.s64 = ctx.r11.s64 + 6424;
	// addi r29,r29,-26492
	ctx.r29.s64 = ctx.r29.s64 + -26492;
	// li r30,2304
	ctx.r30.s64 = 2304;
loc_8994FD00:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD10;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bne 0x8994fd00
	if (!ctx.cr0.eq) goto loc_8994FD00;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r30,r11,9656
	ctx.r30.s64 = ctx.r11.s64 + 9656;
	// addi r4,r4,-29564
	ctx.r4.s64 = ctx.r4.s64 + -29564;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD3C;
	sub_899DBDB0(ctx, base);
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// addi r4,r4,-29472
	ctx.r4.s64 = ctx.r4.s64 + -29472;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD50;
	sub_899DBDB0(ctx, base);
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// addi r4,r4,-29380
	ctx.r4.s64 = ctx.r4.s64 + -29380;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD64;
	sub_899DBDB0(ctx, base);
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r3,r30,276
	ctx.r3.s64 = ctx.r30.s64 + 276;
	// addi r4,r4,-29288
	ctx.r4.s64 = ctx.r4.s64 + -29288;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD78;
	sub_899DBDB0(ctx, base);
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r3,r30,368
	ctx.r3.s64 = ctx.r30.s64 + 368;
	// addi r4,r4,-29196
	ctx.r4.s64 = ctx.r4.s64 + -29196;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FD8C;
	sub_899DBDB0(ctx, base);
	// addis r4,r31,10
	ctx.r4.s64 = ctx.r31.s64 + 655360;
	// addi r3,r30,460
	ctx.r3.s64 = ctx.r30.s64 + 460;
	// addi r4,r4,-29104
	ctx.r4.s64 = ctx.r4.s64 + -29104;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994FDA0;
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
loc_8994FDC4:
	// lhz r7,-7038(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -7038);
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
	// sthx r7,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r7,r9,1920
	ctx.r7.s64 = ctx.r9.s64 + 1920;
	// lhz r29,-3198(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + -3198);
	// addi r28,r8,2560
	ctx.r28.s64 = ctx.r8.s64 + 2560;
	// sthx r29,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u16);
	// addi r29,r9,2560
	ctx.r29.s64 = ctx.r9.s64 + 2560;
	// lhz r27,-6398(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + -6398);
	// addi r26,r8,3200
	ctx.r26.s64 = ctx.r8.s64 + 3200;
	// sthx r27,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r27.u16);
	// addi r6,r9,3200
	ctx.r6.s64 = ctx.r9.s64 + 3200;
	// lhz r27,-2558(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + -2558);
	// sthx r27,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r27.u16);
	// lhz r5,-5758(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -5758);
	// sthx r5,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u16);
	// lhz r4,-1918(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -1918);
	// sthx r4,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u16);
	// lhz r3,-5118(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -5118);
	// sthx r3,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// lhz r5,-1278(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -1278);
	// sthx r5,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u16);
	// lhz r4,-4478(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -4478);
	// sthx r4,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r4.u16);
	// lhz r3,-638(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -638);
	// sthx r3,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u16);
	// lhz r7,-3838(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -3838);
	// sthx r7,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u16);
	// lhzu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthx r7,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8994fdc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994FDC4;
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
loc_8994FE68:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r8,4032
	ctx.r10.s64 = ctx.r8.s64 + 4032;
	// addi r11,r7,4032
	ctx.r11.s64 = ctx.r7.s64 + 4032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994FE78:
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
	// bdnz 0x8994fe78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994FE78;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,1088
	ctx.r11.s64 = ctx.r6.s64 + 1088;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8994fe68
	if (ctx.cr6.lt) goto loc_8994FE68;
	// addis r6,r31,10
	ctx.r6.s64 = ctx.r31.s64 + 655360;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r6,-14164
	ctx.r6.s64 = ctx.r6.s64 + -14164;
	// addi r7,r11,13024
	ctx.r7.s64 = ctx.r11.s64 + 13024;
loc_8994FED4:
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r10,r7,5088
	ctx.r10.s64 = ctx.r7.s64 + 5088;
	// addi r11,r11,4064
	ctx.r11.s64 = ctx.r11.s64 + 4064;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994FEEC:
	// lbz r9,-5088(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -5088);
	// stb r9,-5088(r10)
	REX_STORE_U8(ctx.r10.u32 + -5088, ctx.r9.u8);
	// lbz r5,-4064(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -4064);
	// stb r5,-4064(r10)
	REX_STORE_U8(ctx.r10.u32 + -4064, ctx.r5.u8);
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
	// bdnz 0x8994feec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994FEEC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x8994fed4
	if (ctx.cr6.lt) goto loc_8994FED4;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// ori r9,r11,56492
	ctx.r9.u64 = ctx.r11.u64 | 56492;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r4,r4,56494
	ctx.r4.u64 = ctx.r4.u64 | 56494;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ori r6,r8,56493
	ctx.r6.u64 = ctx.r8.u64 | 56493;
	// addi r5,r10,26920
	ctx.r5.s64 = ctx.r10.s64 + 26920;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// ori r3,r3,56495
	ctx.r3.u64 = ctx.r3.u64 | 56495;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stb r11,26920(r10)
	REX_STORE_U8(ctx.r10.u32 + 26920, ctx.r11.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// ori r3,r10,56499
	ctx.r3.u64 = ctx.r10.u64 | 56499;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r7,3884
	ctx.r11.s64 = ctx.r7.s64 + 3884;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// ori r4,r30,56498
	ctx.r4.u64 = ctx.r30.u64 | 56498;
	// ori r9,r9,56496
	ctx.r9.u64 = ctx.r9.u64 | 56496;
	// ori r8,r8,56497
	ctx.r8.u64 = ctx.r8.u64 | 56497;
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// lis r25,9
	ctx.r25.s64 = 589824;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r24,9
	ctx.r24.s64 = 589824;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// ori r17,r10,56500
	ctx.r17.u64 = ctx.r10.u64 | 56500;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// addi r10,r26,10208
	ctx.r10.s64 = ctx.r26.s64 + 10208;
	// lis r22,9
	ctx.r22.s64 = 589824;
	// lwz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r26,r25,56516
	ctx.r26.u64 = ctx.r25.u64 | 56516;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// stb r11,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r21,9
	ctx.r21.s64 = 589824;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// ori r25,r24,56520
	ctx.r25.u64 = ctx.r24.u64 | 56520;
	// ori r24,r23,56524
	ctx.r24.u64 = ctx.r23.u64 | 56524;
	// ori r23,r22,56528
	ctx.r23.u64 = ctx.r22.u64 | 56528;
	// ori r9,r9,56501
	ctx.r9.u64 = ctx.r9.u64 | 56501;
	// ori r8,r8,56502
	ctx.r8.u64 = ctx.r8.u64 | 56502;
	// ori r7,r7,56503
	ctx.r7.u64 = ctx.r7.u64 | 56503;
	// ori r4,r4,56504
	ctx.r4.u64 = ctx.r4.u64 | 56504;
	// ori r30,r30,56505
	ctx.r30.u64 = ctx.r30.u64 | 56505;
	// addi r16,r3,27804
	ctx.r16.s64 = ctx.r3.s64 + 27804;
	// ori r29,r29,56506
	ctx.r29.u64 = ctx.r29.u64 | 56506;
	// ori r28,r28,56507
	ctx.r28.u64 = ctx.r28.u64 | 56507;
	// ori r27,r27,56508
	ctx.r27.u64 = ctx.r27.u64 | 56508;
	// ori r6,r6,56509
	ctx.r6.u64 = ctx.r6.u64 | 56509;
	// ori r31,r31,56512
	ctx.r31.u64 = ctx.r31.u64 | 56512;
	// ori r22,r11,56532
	ctx.r22.u64 = ctx.r11.u64 | 56532;
	// ori r21,r21,56533
	ctx.r21.u64 = ctx.r21.u64 | 56533;
	// ori r20,r20,56534
	ctx.r20.u64 = ctx.r20.u64 | 56534;
	// ori r19,r19,56535
	ctx.r19.u64 = ctx.r19.u64 | 56535;
	// ori r18,r18,56536
	ctx.r18.u64 = ctx.r18.u64 | 56536;
	// lis r15,9
	ctx.r15.s64 = 589824;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r15,r15,56537
	ctx.r15.u64 = ctx.r15.u64 | 56537;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// lis r19,-30242
	ctx.r19.s64 = -1981939712;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r19,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r20,84(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addis r19,r11,10
	ctx.r19.s64 = ctx.r11.s64 + 655360;
	// stw r15,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// addis r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 655360;
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r19,r19,-5928
	ctx.r19.s64 = ctx.r19.s64 + -5928;
	// addi r11,r11,-5672
	ctx.r11.s64 = ctx.r11.s64 + -5672;
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// lwz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// stw r23,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r24,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// rotlwi r24,r20,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lwz r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// lis r26,-30274
	ctx.r26.s64 = -1984036864;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// lis r18,-30253
	ctx.r18.s64 = -1982660608;
	// stw r26,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// lwz r26,168(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r18,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// stw r18,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r18.u32);
	// lis r18,-30275
	ctx.r18.s64 = -1984102400;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r25,-30276
	ctx.r25.s64 = -1984167936;
	// stw r18,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,108(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lbzx r11,r22,r14
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r14.u32);
	// rotlwi r14,r20,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stb r11,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r22,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// rotlwi r11,r20,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r19,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// lbzx r11,r20,r15
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r15.u32);
	// stb r11,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r11.u8);
	// lbzx r11,r14,r21
	ctx.r11.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r21.u32);
	// stb r11,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r11.u8);
	// lbzx r11,r24,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r23.u32);
	// stb r11,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r11.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r11,r5,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// stb r11,3884(r18)
	REX_STORE_U8(ctx.r18.u32 + 3884, ctx.r11.u8);
	// rotlwi r11,r20,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// stb r10,1(r25)
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r10.u8);
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// stb r10,2(r25)
	REX_STORE_U8(ctx.r25.u32 + 2, ctx.r10.u8);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r10,3(r25)
	REX_STORE_U8(ctx.r25.u32 + 3, ctx.r10.u8);
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r10,4(r25)
	REX_STORE_U8(ctx.r25.u32 + 4, ctx.r10.u8);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lwz r7,168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stb r10,5(r25)
	REX_STORE_U8(ctx.r25.u32 + 5, ctx.r10.u8);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lwz r31,148(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r10,27804(r3)
	REX_STORE_U8(ctx.r3.u32 + 27804, ctx.r10.u8);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stb r10,1(r16)
	REX_STORE_U8(ctx.r16.u32 + 1, ctx.r10.u8);
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,2(r16)
	REX_STORE_U8(ctx.r16.u32 + 2, ctx.r10.u8);
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// stb r10,3(r16)
	REX_STORE_U8(ctx.r16.u32 + 3, ctx.r10.u8);
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r29,180(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,164(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stb r10,4(r16)
	REX_STORE_U8(ctx.r16.u32 + 4, ctx.r10.u8);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r10,5(r16)
	REX_STORE_U8(ctx.r16.u32 + 5, ctx.r10.u8);
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,12000(r7)
	REX_STORE_U32(ctx.r7.u32 + 12000, ctx.r10.u32);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwzx r7,r11,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,-21584(r29)
	REX_STORE_U32(ctx.r29.u32 + -21584, ctx.r10.u32);
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lbzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r29,200(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stw r9,7104(r29)
	REX_STORE_U32(ctx.r29.u32 + 7104, ctx.r9.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r29,216(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r8,540(r29)
	REX_STORE_U32(ctx.r29.u32 + 540, ctx.r8.u32);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lwz r29,192(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r7,524(r29)
	REX_STORE_U32(ctx.r29.u32 + 524, ctx.r7.u32);
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwz r29,224(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stb r6,6035(r29)
	REX_STORE_U8(ctx.r29.u32 + 6035, ctx.r6.u8);
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// lwz r29,212(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stb r5,9535(r29)
	REX_STORE_U8(ctx.r29.u32 + 9535, ctx.r5.u8);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r4,12266(r29)
	REX_STORE_U8(ctx.r29.u32 + 12266, ctx.r4.u8);
	// addi r4,r10,3536
	ctx.r4.s64 = ctx.r10.s64 + 3536;
	// lwz r29,108(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rotlwi r10,r22,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// stb r3,6054(r29)
	REX_STORE_U8(ctx.r29.u32 + 6054, ctx.r3.u8);
	// addi r3,r9,5472
	ctx.r3.s64 = ctx.r9.s64 + 5472;
	// lwz r29,112(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rotlwi r9,r19,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stb r31,32019(r29)
	REX_STORE_U8(ctx.r29.u32 + 32019, ctx.r31.u8);
	// addi r31,r8,5496
	ctx.r31.s64 = ctx.r8.s64 + 5496;
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stb r30,9539(r29)
	REX_STORE_U8(ctx.r29.u32 + 9539, ctx.r30.u8);
	// addi r30,r7,-21360
	ctx.r30.s64 = ctx.r7.s64 + -21360;
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r29,r6,12480
	ctx.r29.s64 = ctx.r6.s64 + 12480;
	// addi r6,r5,8016
	ctx.r6.s64 = ctx.r5.s64 + 8016;
	// addi r28,r28,7640
	ctx.r28.s64 = ctx.r28.s64 + 7640;
	// addi r27,r27,12640
	ctx.r27.s64 = ctx.r27.s64 + 12640;
	// addi r26,r26,4952
	ctx.r26.s64 = ctx.r26.s64 + 4952;
	// addi r25,r25,8160
	ctx.r25.s64 = ctx.r25.s64 + 8160;
	// addi r24,r24,-10320
	ctx.r24.s64 = ctx.r24.s64 + -10320;
	// addi r23,r23,7896
	ctx.r23.s64 = ctx.r23.s64 + 7896;
loc_89950314:
	// lhz r5,-3070(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -3070);
	// addi r22,r6,256
	ctx.r22.s64 = ctx.r6.s64 + 256;
	// sthx r5,r10,r23
	REX_STORE_U16(ctx.r10.u32 + ctx.r23.u32, ctx.r5.u16);
	// lhz r5,-2814(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2814);
	// sthx r5,r10,r24
	REX_STORE_U16(ctx.r10.u32 + ctx.r24.u32, ctx.r5.u16);
	// lhz r5,-2558(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2558);
	// sthx r5,r10,r25
	REX_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r5.u16);
	// lhz r5,-2302(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2302);
	// sthx r5,r10,r26
	REX_STORE_U16(ctx.r10.u32 + ctx.r26.u32, ctx.r5.u16);
	// lhz r5,-2046(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2046);
	// sthx r5,r10,r27
	REX_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r5.u16);
	// lhz r5,-1790(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -1790);
	// sthx r5,r10,r28
	REX_STORE_U16(ctx.r10.u32 + ctx.r28.u32, ctx.r5.u16);
	// lhz r5,-1534(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -1534);
	// sthx r5,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u16);
	// lhz r5,-1278(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -1278);
	// sthx r5,r10,r22
	REX_STORE_U16(ctx.r10.u32 + ctx.r22.u32, ctx.r5.u16);
	// lhz r5,-1022(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -1022);
	// sthx r5,r10,r29
	REX_STORE_U16(ctx.r10.u32 + ctx.r29.u32, ctx.r5.u16);
	// lhz r5,-766(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -766);
	// sthx r5,r10,r30
	REX_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r5.u16);
	// lhz r5,-510(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -510);
	// sthx r5,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u16);
	// lhz r5,-254(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -254);
	// sthx r5,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// lhzu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthx r5,r10,r4
	REX_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
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
	// bdnz 0x89950314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89950314;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addis r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 655360;
	// addi r10,r10,5768
	ctx.r10.s64 = ctx.r10.s64 + 5768;
	// addi r9,r9,-4132
	ctx.r9.s64 = ctx.r9.s64 + -4132;
	// li r8,16
	ctx.r8.s64 = 16;
loc_899503CC:
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
	// bne 0x899503cc
	if (!ctx.cr0.eq) goto loc_899503CC;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// ori r8,r10,61660
	ctx.r8.u64 = ctx.r10.u64 | 61660;
	// ori r7,r9,61664
	ctx.r7.u64 = ctx.r9.u64 | 61664;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r10,r6,61680
	ctx.r10.u64 = ctx.r6.u64 | 61680;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lhzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r6,r5,61666
	ctx.r6.u64 = ctx.r5.u64 | 61666;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// ori r5,r4,61668
	ctx.r5.u64 = ctx.r4.u64 | 61668;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// ori r4,r3,61670
	ctx.r4.u64 = ctx.r3.u64 | 61670;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// ori r3,r31,61672
	ctx.r3.u64 = ctx.r31.u64 | 61672;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// ori r31,r7,61674
	ctx.r31.u64 = ctx.r7.u64 | 61674;
	// lhzx r7,r11,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lhzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// ori r30,r30,61676
	ctx.r30.u64 = ctx.r30.u64 | 61676;
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// ori r28,r28,61678
	ctx.r28.u64 = ctx.r28.u64 | 61678;
	// lhzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lhzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// stw r9,-10064(r29)
	REX_STORE_U32(ctx.r29.u32 + -10064, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lhzx r31,r11,r30
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lis r25,-30269
	ctx.r25.s64 = -1983709184;
	// lhzx r30,r11,r28
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// sth r8,26864(r27)
	REX_STORE_U16(ctx.r27.u32 + 26864, ctx.r8.u16);
	// lis r24,-30251
	ctx.r24.s64 = -1982529536;
	// sth r7,9536(r26)
	REX_STORE_U16(ctx.r26.u32 + 9536, ctx.r7.u16);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// sth r6,-21276(r25)
	REX_STORE_U16(ctx.r25.u32 + -21276, ctx.r6.u16);
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// stb r5,11746(r28)
	REX_STORE_U8(ctx.r28.u32 + 11746, ctx.r5.u8);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r8,r24,12080
	ctx.r8.s64 = ctx.r24.s64 + 12080;
	// sth r4,27272(r27)
	REX_STORE_U16(ctx.r27.u32 + 27272, ctx.r4.u16);
	// sth r3,12272(r9)
	REX_STORE_U16(ctx.r9.u32 + 12272, ctx.r3.u16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r31,-17120(r7)
	REX_STORE_U16(ctx.r7.u32 + -17120, ctx.r31.u16);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// sth r30,27276(r6)
	REX_STORE_U16(ctx.r6.u32 + 27276, ctx.r30.u16);
	// stb r29,4946(r5)
	REX_STORE_U8(ctx.r5.u32 + 4946, ctx.r29.u8);
loc_899504DC:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x899504dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899504DC;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// ori r8,r10,61748
	ctx.r8.u64 = ctx.r10.u64 | 61748;
	// ori r7,r9,61750
	ctx.r7.u64 = ctx.r9.u64 | 61750;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// ori r3,r6,61752
	ctx.r3.u64 = ctx.r6.u64 | 61752;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r6,r5,61754
	ctx.r6.u64 = ctx.r5.u64 | 61754;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// ori r5,r4,61755
	ctx.r5.u64 = ctx.r4.u64 | 61755;
	// lhzx r7,r11,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r10,8418(r31)
	REX_STORE_U8(ctx.r31.u32 + 8418, ctx.r10.u8);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// sth r9,-9520(r30)
	REX_STORE_U16(ctx.r30.u32 + -9520, ctx.r9.u16);
	// lis r29,-30273
	ctx.r29.s64 = -1983971328;
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// addis r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 655360;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r4,-4592
	ctx.r10.s64 = ctx.r4.s64 + -4592;
	// sth r7,26536(r3)
	REX_STORE_U16(ctx.r3.u32 + 26536, ctx.r7.u16);
	// addi r9,r9,-3780
	ctx.r9.s64 = ctx.r9.s64 + -3780;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// stb r6,5754(r29)
	REX_STORE_U8(ctx.r29.u32 + 5754, ctx.r6.u8);
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// stb r5,4939(r31)
	REX_STORE_U8(ctx.r31.u32 + 4939, ctx.r5.u8);
loc_8995056C:
	// lhzu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r6,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8995056c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8995056C;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// ori r4,r8,63804
	ctx.r4.u64 = ctx.r8.u64 | 63804;
	// ori r3,r7,63806
	ctx.r3.u64 = ctx.r7.u64 | 63806;
	// ori r31,r6,63808
	ctx.r31.u64 = ctx.r6.u64 | 63808;
	// ori r30,r5,63810
	ctx.r30.u64 = ctx.r5.u64 | 63810;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// lhzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lhzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lhzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lhzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lis r30,-30251
	ctx.r30.s64 = -1982529536;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r7,9516(r29)
	REX_STORE_U16(ctx.r29.u32 + 9516, ctx.r7.u16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// sth r6,-21396(r3)
	REX_STORE_U16(ctx.r3.u32 + -21396, ctx.r6.u16);
	// sth r5,4936(r31)
	REX_STORE_U16(ctx.r31.u32 + 4936, ctx.r5.u16);
	// sth r4,12148(r30)
	REX_STORE_U16(ctx.r30.u32 + 12148, ctx.r4.u16);
loc_899505D8:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899505d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899505D8;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r8,r10,63812
	ctx.r8.u64 = ctx.r10.u64 | 63812;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// ori r5,r7,63817
	ctx.r5.u64 = ctx.r7.u64 | 63817;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// ori r4,r4,63832
	ctx.r4.u64 = ctx.r4.u64 | 63832;
	// ori r6,r6,63831
	ctx.r6.u64 = ctx.r6.u64 | 63831;
	// ori r7,r7,63835
	ctx.r7.u64 = ctx.r7.u64 | 63835;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stb r10,12332(r9)
	REX_STORE_U8(ctx.r9.u32 + 12332, ctx.r10.u8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ori r3,r3,63833
	ctx.r3.u64 = ctx.r3.u64 | 63833;
	// ori r4,r30,63837
	ctx.r4.u64 = ctx.r30.u64 | 63837;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// ori r8,r8,63834
	ctx.r8.u64 = ctx.r8.u64 | 63834;
	// stw r4,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// ori r6,r31,63836
	ctx.r6.u64 = ctx.r31.u64 | 63836;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r7,r27,63842
	ctx.r7.u64 = ctx.r27.u64 | 63842;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lis r28,9
	ctx.r28.s64 = 589824;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lis r26,9
	ctx.r26.s64 = 589824;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// lis r22,9
	ctx.r22.s64 = 589824;
	// ori r3,r29,63838
	ctx.r3.u64 = ctx.r29.u64 | 63838;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r4,r9,12332
	ctx.r4.s64 = ctx.r9.s64 + 12332;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// ori r8,r28,63840
	ctx.r8.u64 = ctx.r28.u64 | 63840;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// ori r6,r26,63844
	ctx.r6.u64 = ctx.r26.u64 | 63844;
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lis r25,9
	ctx.r25.s64 = 589824;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ori r9,r23,63827
	ctx.r9.u64 = ctx.r23.u64 | 63827;
	// lwz r23,80(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r7,r22,63813
	ctx.r7.u64 = ctx.r22.u64 | 63813;
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// stw r6,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lis r21,9
	ctx.r21.s64 = 589824;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// lis r17,9
	ctx.r17.s64 = 589824;
	// lis r16,9
	ctx.r16.s64 = 589824;
	// lis r15,9
	ctx.r15.s64 = 589824;
	// lis r14,9
	ctx.r14.s64 = 589824;
	// ori r3,r25,63822
	ctx.r3.u64 = ctx.r25.u64 | 63822;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r8,r24,6404
	ctx.r8.s64 = ctx.r24.s64 + 6404;
	// ori r6,r21,63818
	ctx.r6.u64 = ctx.r21.u64 | 63818;
	// ori r31,r20,63823
	ctx.r31.u64 = ctx.r20.u64 | 63823;
	// ori r30,r19,63828
	ctx.r30.u64 = ctx.r19.u64 | 63828;
	// ori r29,r18,63814
	ctx.r29.u64 = ctx.r18.u64 | 63814;
	// ori r28,r17,63819
	ctx.r28.u64 = ctx.r17.u64 | 63819;
	// ori r27,r16,63824
	ctx.r27.u64 = ctx.r16.u64 | 63824;
	// ori r26,r15,63829
	ctx.r26.u64 = ctx.r15.u64 | 63829;
	// ori r25,r14,63815
	ctx.r25.u64 = ctx.r14.u64 | 63815;
	// ori r23,r23,63820
	ctx.r23.u64 = ctx.r23.u64 | 63820;
	// ori r22,r22,63825
	ctx.r22.u64 = ctx.r22.u64 | 63825;
	// stb r10,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lwz r19,168(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r15,9
	ctx.r15.s64 = 589824;
	// ori r10,r10,63848
	ctx.r10.u64 = ctx.r10.u64 | 63848;
	// lwz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r19,r19,63821
	ctx.r19.u64 = ctx.r19.u64 | 63821;
	// lwz r20,96(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// ori r10,r15,63852
	ctx.r10.u64 = ctx.r15.u64 | 63852;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// lis r19,9
	ctx.r19.s64 = 589824;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ori r5,r5,63826
	ctx.r5.u64 = ctx.r5.u64 | 63826;
	// ori r10,r19,63864
	ctx.r10.u64 = ctx.r19.u64 | 63864;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// ori r20,r20,63816
	ctx.r20.u64 = ctx.r20.u64 | 63816;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// ori r21,r21,63830
	ctx.r21.u64 = ctx.r21.u64 | 63830;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// stw r20,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// ori r18,r18,63846
	ctx.r18.u64 = ctx.r18.u64 | 63846;
	// ori r5,r5,63860
	ctx.r5.u64 = ctx.r5.u64 | 63860;
	// lis r16,9
	ctx.r16.s64 = 589824;
	// stw r18,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// lis r21,9
	ctx.r21.s64 = 589824;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r20,9
	ctx.r20.s64 = 589824;
	// ori r18,r16,63851
	ctx.r18.u64 = ctx.r16.u64 | 63851;
	// ori r5,r21,63872
	ctx.r5.u64 = ctx.r21.u64 | 63872;
	// ori r20,r20,63868
	ctx.r20.u64 = ctx.r20.u64 | 63868;
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lis r17,9
	ctx.r17.s64 = 589824;
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lis r14,9
	ctx.r14.s64 = 589824;
	// ori r17,r17,63850
	ctx.r17.u64 = ctx.r17.u64 | 63850;
	// stw r20,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// lis r20,-30276
	ctx.r20.s64 = -1984167936;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// stb r10,6404(r24)
	REX_STORE_U8(ctx.r24.u32 + 6404, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lis r18,9
	ctx.r18.s64 = 589824;
	// ori r17,r14,63856
	ctx.r17.u64 = ctx.r14.u64 | 63856;
	// ori r5,r5,63873
	ctx.r5.u64 = ctx.r5.u64 | 63873;
	// addi r16,r20,32020
	ctx.r16.s64 = ctx.r20.s64 + 32020;
	// stw r17,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// ori r19,r19,63874
	ctx.r19.u64 = ctx.r19.u64 | 63874;
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// ori r18,r18,63875
	ctx.r18.u64 = ctx.r18.u64 | 63875;
	// stw r16,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// lis r21,-30276
	ctx.r21.s64 = -1984167936;
	// stw r19,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// stw r18,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r18.u32);
	// addi r24,r21,32552
	ctx.r24.s64 = ctx.r21.s64 + 32552;
	// addi r17,r3,-9512
	ctx.r17.s64 = ctx.r3.s64 + -9512;
	// lis r15,-30274
	ctx.r15.s64 = -1984036864;
	// lis r14,-30274
	ctx.r14.s64 = -1984036864;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r19,-30273
	ctx.r19.s64 = -1983971328;
	// lis r16,-30276
	ctx.r16.s64 = -1984167936;
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r10,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r10,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r10,6(r4)
	REX_STORE_U8(ctx.r4.u32 + 6, ctx.r10.u8);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// stb r10,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r10.u8);
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stb r10,6(r8)
	REX_STORE_U8(ctx.r8.u32 + 6, ctx.r10.u8);
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// stb r10,7(r4)
	REX_STORE_U8(ctx.r4.u32 + 7, ctx.r10.u8);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// stb r10,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lbzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r26,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// stb r10,7(r8)
	REX_STORE_U8(ctx.r8.u32 + 7, ctx.r10.u8);
	// stw r29,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// stw r31,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// lwz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r31,136(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r26,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// stw r5,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// stw r15,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,124(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r19,132(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r15,180(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r10,3(r4)
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lbzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// stw r23,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// stw r23,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// stb r10,8(r4)
	REX_STORE_U8(ctx.r4.u32 + 8, ctx.r10.u8);
	// lwz r23,140(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// lwz r18,148(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lwz r22,116(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// lwz r14,164(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stb r10,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r10.u8);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stb r10,8(r8)
	REX_STORE_U8(ctx.r8.u32 + 8, ctx.r10.u8);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r28,r6,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stb r10,9(r4)
	REX_STORE_U8(ctx.r4.u32 + 9, ctx.r10.u8);
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rotlwi r26,r6,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r4,r10,3800
	ctx.r4.s64 = ctx.r10.s64 + 3800;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// lwz r20,200(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stb r11,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r20,216(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lbzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// addis r9,r28,10
	ctx.r9.s64 = ctx.r28.s64 + 655360;
	// lwz r28,224(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r9,r9,-1244
	ctx.r9.s64 = ctx.r9.s64 + -1244;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lwz r28,212(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stb r11,9(r8)
	REX_STORE_U8(ctx.r8.u32 + 9, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r9,r11,416
	ctx.r9.s64 = ctx.r11.s64 + 416;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r28,184(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lbzx r11,r25,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stb r11,32552(r21)
	REX_STORE_U8(ctx.r21.u32 + 32552, ctx.r11.u8);
	// lbzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r27.u32);
	// stb r11,1(r24)
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
	// lbzx r11,r8,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r22.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r11,-9512(r3)
	REX_STORE_U8(ctx.r3.u32 + -9512, ctx.r11.u8);
	// lbzx r11,r26,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r23.u32);
	// stb r11,1(r17)
	REX_STORE_U8(ctx.r17.u32 + 1, ctx.r11.u8);
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// lbzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// lhzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r24,r11,r10
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r29,r11,r19
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// lhzx r26,r11,r14
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r14.u32);
	// stb r3,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r3.u8);
	// sth r5,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r5.u16);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// sth r29,240(r1)
	REX_STORE_U16(ctx.r1.u32 + 240, ctx.r29.u16);
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// sth r26,256(r1)
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r26.u16);
	// stb r10,9642(r3)
	REX_STORE_U8(ctx.r3.u32 + 9642, ctx.r10.u8);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r4,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r29,r26,16
	ctx.r29.u64 = ctx.r26.u32 & 0xFFFF;
	// lwz r26,104(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lbzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r30,r11,r16
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r16.u32);
	// lhzx r27,r11,r18
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// lhzx r25,r11,r15
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r15.u32);
	// lwzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lbz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// clrlwi r28,r25,16
	ctx.r28.u64 = ctx.r25.u32 & 0xFFFF;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stb r4,32020(r3)
	REX_STORE_U8(ctx.r3.u32 + 32020, ctx.r4.u8);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// lhz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 152);
	// stb r10,535(r26)
	REX_STORE_U8(ctx.r26.u32 + 535, ctx.r10.u8);
	// lwz r26,116(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r31,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r30,208(r1)
	REX_STORE_U16(ctx.r1.u32 + 208, ctx.r30.u16);
	// clrlwi r30,r27,16
	ctx.r30.u64 = ctx.r27.u32 & 0xFFFF;
	// sth r27,260(r1)
	REX_STORE_U16(ctx.r1.u32 + 260, ctx.r27.u16);
	// clrlwi r27,r24,24
	ctx.r27.u64 = ctx.r24.u32 & 0xFF;
	// sth r25,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r25.u16);
	// stb r4,538(r26)
	REX_STORE_U8(ctx.r26.u32 + 538, ctx.r4.u8);
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stb r24,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r24.u8);
	// sth r3,5208(r4)
	REX_STORE_U16(ctx.r4.u32 + 5208, ctx.r3.u16);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// sth r31,12608(r3)
	REX_STORE_U16(ctx.r3.u32 + 12608, ctx.r31.u16);
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// sth r5,-25516(r4)
	REX_STORE_U16(ctx.r4.u32 + -25516, ctx.r5.u16);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// sth r30,32544(r3)
	REX_STORE_U16(ctx.r3.u32 + 32544, ctx.r30.u16);
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// sth r29,12736(r5)
	REX_STORE_U16(ctx.r5.u32 + 12736, ctx.r29.u16);
	// sth r28,4944(r4)
	REX_STORE_U16(ctx.r4.u32 + 4944, ctx.r28.u16);
	// stb r27,6031(r3)
	REX_STORE_U8(ctx.r3.u32 + 6031, ctx.r27.u8);
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stb r9,6030(r5)
	REX_STORE_U8(ctx.r5.u32 + 6030, ctx.r9.u8);
	// lwz r5,196(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r8,-9544(r3)
	REX_STORE_U32(ctx.r3.u32 + -9544, ctx.r8.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,20408(r5)
	REX_STORE_U32(ctx.r5.u32 + 20408, ctx.r7.u32);
	// lwz r5,248(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r6,-31436(r4)
	REX_STORE_U32(ctx.r4.u32 + -31436, ctx.r6.u32);
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// stw r3,-9524(r4)
	REX_STORE_U32(ctx.r4.u32 + -9524, ctx.r3.u32);
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r10,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r10,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_89950B54:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,-420
	ctx.r8.s64 = ctx.r9.s64 + -420;
	// addi r7,r10,-420
	ctx.r7.s64 = ctx.r10.s64 + -420;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89950B64:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89950b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89950B64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89950B80:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89950b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89950B80;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,412
	ctx.r8.s64 = ctx.r9.s64 + 412;
	// addi r7,r10,412
	ctx.r7.s64 = ctx.r10.s64 + 412;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89950B9C:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89950b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89950B9C;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,828
	ctx.r8.s64 = ctx.r9.s64 + 828;
	// addi r7,r10,828
	ctx.r7.s64 = ctx.r10.s64 + 828;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89950BB8:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89950bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89950BB8;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x89950b54
	if (!ctx.cr0.eq) goto loc_89950B54;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// lis r7,10
	ctx.r7.s64 = 655360;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r5,r7,12
	ctx.r5.u64 = ctx.r7.u64 | 12;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lbzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// ori r4,r6,5
	ctx.r4.u64 = ctx.r6.u64 | 5;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// ori r7,r3,8
	ctx.r7.u64 = ctx.r3.u64 | 8;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stb r11,6046(r9)
	REX_STORE_U8(ctx.r9.u32 + 6046, ctx.r11.u8);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// ori r31,r31,28
	ctx.r31.u64 = ctx.r31.u64 | 28;
	// ori r3,r3,26
	ctx.r3.u64 = ctx.r3.u64 | 26;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// ori r4,r9,27
	ctx.r4.u64 = ctx.r9.u64 | 27;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stb r10,9542(r6)
	REX_STORE_U8(ctx.r6.u32 + 9542, ctx.r10.u8);
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// ori r7,r30,29
	ctx.r7.u64 = ctx.r30.u64 | 29;
	// stb r5,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// ori r5,r28,31
	ctx.r5.u64 = ctx.r28.u64 | 31;
	// ori r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 | 32;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// ori r31,r26,33
	ctx.r31.u64 = ctx.r26.u64 | 33;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// ori r3,r29,30
	ctx.r3.u64 = ctx.r29.u64 | 30;
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r31,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// lis r24,10
	ctx.r24.s64 = 655360;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lis r21,10
	ctx.r21.s64 = 655360;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// ori r26,r16,22
	ctx.r26.u64 = ctx.r16.u64 | 22;
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r7,r25,13
	ctx.r7.u64 = ctx.r25.u64 | 13;
	// ori r5,r24,14
	ctx.r5.u64 = ctx.r24.u64 | 14;
	// ori r4,r23,15
	ctx.r4.u64 = ctx.r23.u64 | 15;
	// ori r31,r22,16
	ctx.r31.u64 = ctx.r22.u64 | 16;
	// lbz r10,101(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// ori r6,r21,17
	ctx.r6.u64 = ctx.r21.u64 | 17;
	// ori r30,r20,18
	ctx.r30.u64 = ctx.r20.u64 | 18;
	// ori r29,r19,19
	ctx.r29.u64 = ctx.r19.u64 | 19;
	// ori r28,r18,20
	ctx.r28.u64 = ctx.r18.u64 | 20;
	// ori r27,r17,21
	ctx.r27.u64 = ctx.r17.u64 | 21;
	// addi r3,r8,580
	ctx.r3.s64 = ctx.r8.s64 + 580;
	// stb r10,580(r8)
	REX_STORE_U8(ctx.r8.u32 + 580, ctx.r10.u8);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// lis r24,-30276
	ctx.r24.s64 = -1984167936;
	// lis r23,-30274
	ctx.r23.s64 = -1984036864;
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lis r20,-30276
	ctx.r20.s64 = -1984167936;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// ori r18,r15,23
	ctx.r18.u64 = ctx.r15.u64 | 23;
	// ori r17,r14,24
	ctx.r17.u64 = ctx.r14.u64 | 24;
	// ori r16,r16,25
	ctx.r16.u64 = ctx.r16.u64 | 25;
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// ori r8,r8,35
	ctx.r8.u64 = ctx.r8.u64 | 35;
	// stw r9,-25896(r25)
	REX_STORE_U32(ctx.r25.u32 + -25896, ctx.r9.u32);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r9,r9,34
	ctx.r9.u64 = ctx.r9.u64 | 34;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// ori r8,r10,38
	ctx.r8.u64 = ctx.r10.u64 | 38;
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// ori r7,r7,36
	ctx.r7.u64 = ctx.r7.u64 | 36;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// ori r9,r25,37
	ctx.r9.u64 = ctx.r25.u64 | 37;
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// ori r7,r14,39
	ctx.r7.u64 = ctx.r14.u64 | 39;
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// ori r9,r16,40
	ctx.r9.u64 = ctx.r16.u64 | 40;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// ori r8,r19,44
	ctx.r8.u64 = ctx.r19.u64 | 44;
	// stw r17,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// ori r7,r21,52
	ctx.r7.u64 = ctx.r21.u64 | 52;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// stw r7,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// ori r9,r22,56
	ctx.r9.u64 = ctx.r22.u64 | 56;
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r20,48
	ctx.r5.u64 = ctx.r20.u64 | 48;
	// ori r7,r27,64
	ctx.r7.u64 = ctx.r27.u64 | 64;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r5,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// ori r5,r18,62
	ctx.r5.u64 = ctx.r18.u64 | 62;
	// lis r23,-30276
	ctx.r23.s64 = -1984167936;
	// stw r7,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// ori r8,r17,60
	ctx.r8.u64 = ctx.r17.u64 | 60;
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// stb r10,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// ori r10,r26,63
	ctx.r10.u64 = ctx.r26.u64 | 63;
	// lis r15,-30251
	ctx.r15.s64 = -1982529536;
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r27,-30242
	ctx.r27.s64 = -1981939712;
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r15,12752
	ctx.r26.s64 = ctx.r15.s64 + 12752;
	// addi r25,r27,-21380
	ctx.r25.s64 = ctx.r27.s64 + -21380;
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// lis r20,-30275
	ctx.r20.s64 = -1984102400;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lis r18,-30276
	ctx.r18.s64 = -1984167936;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r10,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// lbzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// stb r10,32551(r24)
	REX_STORE_U8(ctx.r24.u32 + 32551, ctx.r10.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r14,-30251
	ctx.r14.s64 = -1982529536;
	// stb r9,586(r5)
	REX_STORE_U8(ctx.r5.u32 + 586, ctx.r9.u8);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// lwz r28,148(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lbzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r31,r31,68
	ctx.r31.u64 = ctx.r31.u64 | 68;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r30,r30,70
	ctx.r30.u64 = ctx.r30.u64 | 70;
	// lwz r24,164(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// ori r29,r29,72
	ctx.r29.u64 = ctx.r29.u64 | 72;
	// lwz r17,180(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stb r10,12342(r23)
	REX_STORE_U8(ctx.r23.u32 + 12342, ctx.r10.u8);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// lis r23,-30247
	ctx.r23.s64 = -1982267392;
	// stb r9,12752(r15)
	REX_STORE_U8(ctx.r15.u32 + 12752, ctx.r9.u8);
	// stb r8,7115(r3)
	REX_STORE_U8(ctx.r3.u32 + 7115, ctx.r8.u8);
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lwz r15,200(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r14,216(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stb r7,3891(r3)
	REX_STORE_U8(ctx.r3.u32 + 3891, ctx.r7.u8);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// lwz r16,192(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stb r6,32546(r3)
	REX_STORE_U8(ctx.r3.u32 + 32546, ctx.r6.u8);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r5,12267(r3)
	REX_STORE_U8(ctx.r3.u32 + 12267, ctx.r5.u8);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stb r4,32555(r3)
	REX_STORE_U8(ctx.r3.u32 + 32555, ctx.r4.u8);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// ori r4,r4,66
	ctx.r4.u64 = ctx.r4.u64 | 66;
	// lwz r25,224(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stb r11,1(r26)
	REX_STORE_U8(ctx.r26.u32 + 1, ctx.r11.u8);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r26,r26,76
	ctx.r26.u64 = ctx.r26.u64 | 76;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// rotlwi r23,r11,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lis r26,-30273
	ctx.r26.s64 = -1983971328;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// lwz r25,212(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// lis r25,-30242
	ctx.r25.s64 = -1981939712;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r9,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// lbzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// lbzx r24,r11,r17
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbzx r17,r11,r15
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// lbzx r28,r11,r28
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r14.u32);
	// stb r9,260(r1)
	REX_STORE_U8(ctx.r1.u32 + 260, ctx.r9.u8);
	// stb r3,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r3.u8);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r24,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r24.u8);
	// stb r3,9534(r20)
	REX_STORE_U8(ctx.r20.u32 + 9534, ctx.r3.u8);
	// lis r20,-30275
	ctx.r20.s64 = -1984102400;
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,9655(r19)
	REX_STORE_U8(ctx.r19.u32 + 9655, ctx.r11.u8);
	// stb r28,256(r1)
	REX_STORE_U8(ctx.r1.u32 + 256, ctx.r28.u8);
	// clrlwi r28,r24,24
	ctx.r28.u64 = ctx.r24.u32 & 0xFF;
	// stb r7,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r28,9527(r10)
	REX_STORE_U8(ctx.r10.u32 + 9527, ctx.r28.u8);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r7,3890(r22)
	REX_STORE_U8(ctx.r22.u32 + 3890, ctx.r7.u8);
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r5,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lbz r9,101(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// stb r5,9647(r21)
	REX_STORE_U8(ctx.r21.u32 + 9647, ctx.r5.u8);
	// stb r17,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r17.u8);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r22,232(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stb r9,-21380(r27)
	REX_STORE_U8(ctx.r27.u32 + -21380, ctx.r9.u8);
	// clrlwi r27,r17,24
	ctx.r27.u64 = ctx.r17.u32 & 0xFF;
	// lbz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 260);
	// stb r27,587(r8)
	REX_STORE_U8(ctx.r8.u32 + 587, ctx.r27.u8);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,236(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lbz r24,152(r1)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 152);
	// stb r9,32018(r18)
	REX_STORE_U8(ctx.r18.u32 + 32018, ctx.r9.u8);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r19,228(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stb r24,7935(r6)
	REX_STORE_U8(ctx.r6.u32 + 7935, ctx.r24.u8);
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r17,220(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r15,204(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r14,196(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r11,r23,r16
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r16.u32);
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lbzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ori r23,r10,80
	ctx.r23.u64 = ctx.r10.u64 | 80;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// ori r16,r10,92
	ctx.r16.u64 = ctx.r10.u64 | 92;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbzx r11,r25,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r18,r11,88
	ctx.r18.u64 = ctx.r11.u64 | 88;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r11,r11,84
	ctx.r11.u64 = ctx.r11.u64 | 84;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lbzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addis r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 655360;
	// addi r30,r30,1376
	ctx.r30.s64 = ctx.r30.s64 + 1376;
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,26932(r5)
	REX_STORE_U32(ctx.r5.u32 + 26932, ctx.r10.u32);
	// stw r9,20404(r3)
	REX_STORE_U32(ctx.r3.u32 + 20404, ctx.r9.u32);
	// lwzx r7,r11,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lhzx r31,r11,r22
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r6,r11,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lbzx r4,r11,r15
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// lhzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// stw r7,3892(r3)
	REX_STORE_U32(ctx.r3.u32 + 3892, ctx.r7.u32);
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r8,12152(r5)
	REX_STORE_U32(ctx.r5.u32 + 12152, ctx.r8.u32);
	// lhzx r5,r11,r17
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r17.u32);
	// lbzx r3,r11,r14
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r14.u32);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// sth r10,6416(r26)
	REX_STORE_U16(ctx.r26.u32 + 6416, ctx.r10.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhzx r9,r11,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lwz r22,92(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,6032(r27)
	REX_STORE_U16(ctx.r27.u32 + 6032, ctx.r9.u16);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lhzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// stw r7,20952(r28)
	REX_STORE_U32(ctx.r28.u32 + 20952, ctx.r7.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// sth r8,12264(r20)
	REX_STORE_U16(ctx.r20.u32 + 12264, ctx.r8.u16);
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r29,140(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r9,8420(r25)
	REX_STORE_U32(ctx.r25.u32 + 8420, ctx.r9.u32);
	// stw r6,19364(r29)
	REX_STORE_U32(ctx.r29.u32 + 19364, ctx.r6.u32);
	// addis r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 655360;
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r6,r6,96
	ctx.r6.s64 = ctx.r6.s64 + 96;
	// sth r5,27844(r29)
	REX_STORE_U16(ctx.r29.u32 + 27844, ctx.r5.u16);
	// addis r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 655360;
	// lwz r29,136(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r5,r5,352
	ctx.r5.s64 = ctx.r5.s64 + 352;
	// stb r4,12321(r29)
	REX_STORE_U8(ctx.r29.u32 + 12321, ctx.r4.u8);
	// addis r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 655360;
	// lwz r29,128(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r4,608
	ctx.r4.s64 = ctx.r4.s64 + 608;
	// stb r3,6027(r29)
	REX_STORE_U8(ctx.r29.u32 + 6027, ctx.r3.u8);
	// addis r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 655360;
	// lwzx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r29,124(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r3,864
	ctx.r3.s64 = ctx.r3.s64 + 864;
	// stw r9,-9516(r24)
	REX_STORE_U32(ctx.r24.u32 + -9516, ctx.r9.u32);
	// sth r31,-21364(r29)
	REX_STORE_U16(ctx.r29.u32 + -21364, ctx.r31.u16);
	// addis r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 655360;
	// lwz r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1120
	ctx.r31.s64 = ctx.r31.s64 + 1120;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r29,132(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhzx r8,r11,r18
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// lwzx r7,r11,r16
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// stw r9,12076(r29)
	REX_STORE_U32(ctx.r29.u32 + 12076, ctx.r9.u32);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lwz r29,148(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r9,-26152
	ctx.r9.s64 = ctx.r9.s64 + -26152;
	// sth r8,19188(r29)
	REX_STORE_U16(ctx.r29.u32 + 19188, ctx.r8.u16);
	// lis r8,-30251
	ctx.r8.s64 = -1982529536;
	// lwz r29,164(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r8,r8,12768
	ctx.r8.s64 = ctx.r8.s64 + 12768;
	// stw r7,3532(r29)
	REX_STORE_U32(ctx.r29.u32 + 3532, ctx.r7.u32);
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// addi r7,r7,-10736
	ctx.r7.s64 = ctx.r7.s64 + -10736;
	// addi r29,r29,5216
	ctx.r29.s64 = ctx.r29.s64 + 5216;
	// addi r28,r28,12344
	ctx.r28.s64 = ctx.r28.s64 + 12344;
	// addi r27,r27,-9480
	ctx.r27.s64 = ctx.r27.s64 + -9480;
loc_89951230:
	// lbzx r26,r6,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stbx r26,r10,r27
	REX_STORE_U8(ctx.r10.u32 + ctx.r27.u32, ctx.r26.u8);
	// lbzx r26,r5,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stbx r26,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r26.u8);
	// lbzx r26,r4,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stbx r26,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u8);
	// lbzx r26,r3,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stbx r26,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r26.u8);
	// lbzx r26,r31,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// stbx r26,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r26.u8);
	// lbzx r26,r30,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r26,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89951230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951230;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// ori r8,r10,1632
	ctx.r8.u64 = ctx.r10.u64 | 1632;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// lis r7,10
	ctx.r7.s64 = 655360;
	// lis r3,10
	ctx.r3.s64 = 655360;
	// ori r4,r4,1646
	ctx.r4.u64 = ctx.r4.u64 | 1646;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// ori r5,r7,1640
	ctx.r5.u64 = ctx.r7.u64 | 1640;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// ori r3,r3,1672
	ctx.r3.u64 = ctx.r3.u64 | 1672;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// ori r4,r31,1676
	ctx.r4.u64 = ctx.r31.u64 | 1676;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stb r10,-21284(r9)
	REX_STORE_U8(ctx.r9.u32 + -21284, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r3,r30,1680
	ctx.r3.u64 = ctx.r30.u64 | 1680;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r26,10
	ctx.r26.s64 = 655360;
	// ori r4,r27,1683
	ctx.r4.u64 = ctx.r27.u64 | 1683;
	// ori r8,r8,1639
	ctx.r8.u64 = ctx.r8.u64 | 1639;
	// ori r7,r7,1647
	ctx.r7.u64 = ctx.r7.u64 | 1647;
	// stw r4,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// ori r3,r26,1685
	ctx.r3.u64 = ctx.r26.u64 | 1685;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lis r21,10
	ctx.r21.s64 = 655360;
	// addi r4,r9,-21284
	ctx.r4.s64 = ctx.r9.s64 + -21284;
	// ori r8,r29,1681
	ctx.r8.u64 = ctx.r29.u64 | 1681;
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// ori r7,r28,1682
	ctx.r7.u64 = ctx.r28.u64 | 1682;
	// addi r9,r6,6036
	ctx.r9.s64 = ctx.r6.s64 + 6036;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// ori r3,r22,1641
	ctx.r3.u64 = ctx.r22.u64 | 1641;
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,6036(r6)
	REX_STORE_U8(ctx.r6.u32 + 6036, ctx.r10.u8);
	// ori r6,r21,1652
	ctx.r6.u64 = ctx.r21.u64 | 1652;
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lis r16,10
	ctx.r16.s64 = 655360;
	// lis r15,10
	ctx.r15.s64 = 655360;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r8,r25,1648
	ctx.r8.u64 = ctx.r25.u64 | 1648;
	// ori r7,r23,1633
	ctx.r7.u64 = ctx.r23.u64 | 1633;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// addi r31,r24,544
	ctx.r31.s64 = ctx.r24.s64 + 544;
	// ori r30,r20,1634
	ctx.r30.u64 = ctx.r20.u64 | 1634;
	// ori r29,r19,1642
	ctx.r29.u64 = ctx.r19.u64 | 1642;
	// ori r28,r18,1656
	ctx.r28.u64 = ctx.r18.u64 | 1656;
	// ori r27,r17,1635
	ctx.r27.u64 = ctx.r17.u64 | 1635;
	// ori r26,r16,1643
	ctx.r26.u64 = ctx.r16.u64 | 1643;
	// ori r25,r15,1660
	ctx.r25.u64 = ctx.r15.u64 | 1660;
	// ori r23,r14,1636
	ctx.r23.u64 = ctx.r14.u64 | 1636;
	// ori r22,r22,1644
	ctx.r22.u64 = ctx.r22.u64 | 1644;
	// ori r21,r21,1664
	ctx.r21.u64 = ctx.r21.u64 | 1664;
	// ori r18,r11,1638
	ctx.r18.u64 = ctx.r11.u64 | 1638;
	// ld r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r19,96(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r5,r5,1668
	ctx.r5.u64 = ctx.r5.u64 | 1668;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// ori r19,r19,1645
	ctx.r19.u64 = ctx.r19.u64 | 1645;
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r20,r20,1637
	ctx.r20.u64 = ctx.r20.u64 | 1637;
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// ori r5,r5,1698
	ctx.r5.u64 = ctx.r5.u64 | 1698;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r10,544(r24)
	REX_STORE_U32(ctx.r24.u32 + 544, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r24,10
	ctx.r24.s64 = 655360;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// ori r10,r10,1694
	ctx.r10.u64 = ctx.r10.u64 | 1694;
	// stw r5,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// ori r24,r24,1696
	ctx.r24.u64 = ctx.r24.u64 | 1696;
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// ori r10,r19,1700
	ctx.r10.u64 = ctx.r19.u64 | 1700;
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// ori r24,r20,1702
	ctx.r24.u64 = ctx.r20.u64 | 1702;
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// ori r10,r22,1706
	ctx.r10.u64 = ctx.r22.u64 | 1706;
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r24,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// ori r24,r23,1708
	ctx.r24.u64 = ctx.r23.u64 | 1708;
	// ori r5,r21,1704
	ctx.r5.u64 = ctx.r21.u64 | 1704;
	// lis r15,-30242
	ctx.r15.s64 = -1981939712;
	// stw r24,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// addi r8,r8,12012
	ctx.r8.s64 = ctx.r8.s64 + 12012;
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// lis r16,-30253
	ctx.r16.s64 = -1982660608;
	// stw r15,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// stw r16,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// addi r24,r15,-21368
	ctx.r24.s64 = ctx.r15.s64 + -21368;
	// ori r17,r17,1687
	ctx.r17.u64 = ctx.r17.u64 | 1687;
	// ori r14,r14,1690
	ctx.r14.u64 = ctx.r14.u64 | 1690;
	// stw r24,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// ori r18,r18,1692
	ctx.r18.u64 = ctx.r18.u64 | 1692;
	// addi r7,r16,12028
	ctx.r7.s64 = ctx.r16.s64 + 12028;
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stw r14,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r14.u32);
	// lis r23,-30251
	ctx.r23.s64 = -1982529536;
	// stw r18,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stb r10,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// addi r24,r5,9512
	ctx.r24.s64 = ctx.r5.s64 + 9512;
	// ori r22,r8,1710
	ctx.r22.u64 = ctx.r8.u64 | 1710;
	// addi r21,r23,12744
	ctx.r21.s64 = ctx.r23.s64 + 12744;
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r10,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stb r10,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r10.u8);
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r10,3(r4)
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r19,r19,1716
	ctx.r19.u64 = ctx.r19.u64 | 1716;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lwz r29,104(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r28,r28,27812
	ctx.r28.s64 = ctx.r28.s64 + 27812;
	// lwz r30,136(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// ori r17,r17,1718
	ctx.r17.u64 = ctx.r17.u64 | 1718;
	// stw r21,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// lwz r21,144(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r22,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r22.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r23,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r24,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r24.u32);
	// stw r5,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// lwz r16,140(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r30,-30251
	ctx.r30.s64 = -1982529536;
	// lwz r19,200(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lwz r30,148(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r26,r26,1712
	ctx.r26.u64 = ctx.r26.u64 | 1712;
	// stb r10,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r25,116(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lwz r7,168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lis r30,-30251
	ctx.r30.s64 = -1982529536;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// lwz r30,164(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stb r10,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stb r10,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// ori r10,r10,1714
	ctx.r10.u64 = ctx.r10.u64 | 1714;
	// rotlwi r24,r6,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rotlwi r26,r6,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// ori r3,r22,1722
	ctx.r3.u64 = ctx.r22.u64 | 1722;
	// lwz r22,216(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// ori r23,r23,1724
	ctx.r23.u64 = ctx.r23.u64 | 1724;
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// ori r28,r15,1720
	ctx.r28.u64 = ctx.r15.u64 | 1720;
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// addi r17,r20,4920
	ctx.r17.s64 = ctx.r20.s64 + 4920;
	// lwz r27,160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// ori r5,r5,1726
	ctx.r5.u64 = ctx.r5.u64 | 1726;
	// lwz r18,220(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// ori r22,r7,1728
	ctx.r22.u64 = ctx.r7.u64 | 1728;
	// lwz r15,196(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stb r11,6(r4)
	REX_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
	// lbzx r11,r6,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r11.u8);
	// lwzx r11,r6,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbzx r11,r6,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// rotlwi r25,r14,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// stb r11,7(r4)
	REX_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r11,r6,r16
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r16.u32);
	// lwz r16,204(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stb r11,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r11.u8);
	// lwzx r11,r24,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// lwz r24,232(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r21,236(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lhzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r7,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r7.u8);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r7,168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stb r4,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r4.u8);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// sth r9,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r9.u16);
	// stb r6,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r6.u8);
	// sth r4,12012(r7)
	REX_STORE_U16(ctx.r7.u32 + 12012, ctx.r4.u16);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,12275(r6)
	REX_STORE_U8(ctx.r6.u32 + 12275, ctx.r11.u8);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r7,r6,-2
	ctx.r7.s64 = ctx.r6.s64 + -2;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lhzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r30.u32);
	// lbz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 208);
	// lwz r30,212(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r26,156(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stb r9,7931(r4)
	REX_STORE_U8(ctx.r4.u32 + 7931, ctx.r9.u8);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stb r8,-31406(r9)
	REX_STORE_U8(ctx.r9.u32 + -31406, ctx.r8.u8);
	// rotlwi r8,r14,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lhzx r11,r8,r19
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r19.u32);
	// rotlwi r8,r14,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r19,228(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// sth r11,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// rotlwi r11,r14,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r14,188(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r4,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r4.u16);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r11,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r11.u16);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// sth r9,12028(r30)
	REX_STORE_U16(ctx.r30.u32 + 12028, ctx.r9.u16);
	// lwz r9,248(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// sth r6,12760(r4)
	REX_STORE_U16(ctx.r4.u32 + 12760, ctx.r6.u16);
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lhzx r11,r8,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// sth r11,2(r27)
	REX_STORE_U16(ctx.r27.u32 + 2, ctx.r11.u16);
	// lhzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r26.u32);
	// sth r11,-21368(r10)
	REX_STORE_U16(ctx.r10.u32 + -21368, ctx.r11.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addis r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 655360;
	// addi r8,r8,1728
	ctx.r8.s64 = ctx.r8.s64 + 1728;
	// lhzx r10,r11,r24
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// sth r10,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r10.u16);
	// lhzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// sth r10,9512(r9)
	REX_STORE_U16(ctx.r9.u32 + 9512, ctx.r10.u16);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lhzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lhzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r16.u32);
	// sth r10,12744(r4)
	REX_STORE_U16(ctx.r4.u32 + 12744, ctx.r10.u16);
	// lwz r4,264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lhzx r10,r11,r15
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r15.u32);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lhzx r10,r11,r14
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r14.u32);
	// sth r10,12144(r6)
	REX_STORE_U16(ctx.r6.u32 + 12144, ctx.r10.u16);
	// lhzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// sth r10,4920(r20)
	REX_STORE_U16(ctx.r20.u32 + 4920, ctx.r10.u16);
	// lhzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// sth r10,2(r17)
	REX_STORE_U16(ctx.r17.u32 + 2, ctx.r10.u16);
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r10,4(r17)
	REX_STORE_U16(ctx.r17.u32 + 4, ctx.r10.u16);
	// lhzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sth r10,6(r17)
	REX_STORE_U16(ctx.r17.u32 + 6, ctx.r10.u16);
	// lhzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r10,8(r17)
	REX_STORE_U16(ctx.r17.u32 + 8, ctx.r10.u16);
	// lhzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// sth r10,10(r17)
	REX_STORE_U16(ctx.r17.u32 + 10, ctx.r10.u16);
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r10,12(r17)
	REX_STORE_U16(ctx.r17.u32 + 12, ctx.r10.u16);
	// lhzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// sth r10,14(r17)
	REX_STORE_U16(ctx.r17.u32 + 14, ctx.r10.u16);
	// lhzx r9,r11,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// sth r10,3624(r6)
	REX_STORE_U16(ctx.r6.u32 + 3624, ctx.r10.u16);
	// sth r9,7928(r31)
	REX_STORE_U16(ctx.r31.u32 + 7928, ctx.r9.u16);
loc_89951858:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89951858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951858;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// ori r10,r10,1762
	ctx.r10.u64 = ctx.r10.u64 | 1762;
	// li r8,16
	ctx.r8.s64 = 16;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r9,r9,12032
	ctx.r9.s64 = ctx.r9.s64 + 12032;
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r7,12632(r6)
	REX_STORE_U16(ctx.r6.u32 + 12632, ctx.r7.u16);
loc_89951890:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89951890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951890;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r10,r10,1796
	ctx.r10.u64 = ctx.r10.u64 | 1796;
	// li r8,16
	ctx.r8.s64 = 16;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// addi r9,r9,26868
	ctx.r9.s64 = ctx.r9.s64 + 26868;
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r7,-21392(r6)
	REX_STORE_U16(ctx.r6.u32 + -21392, ctx.r7.u16);
loc_899518C8:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899518c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899518C8;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// ori r7,r10,1830
	ctx.r7.u64 = ctx.r10.u64 | 1830;
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// ori r4,r6,1832
	ctx.r4.u64 = ctx.r6.u64 | 1832;
	// ori r3,r5,1834
	ctx.r3.u64 = ctx.r5.u64 | 1834;
	// lhzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// addi r5,r7,12624
	ctx.r5.s64 = ctx.r7.s64 + 12624;
	// ori r3,r6,1836
	ctx.r3.u64 = ctx.r6.u64 | 1836;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// sth r10,-9532(r8)
	REX_STORE_U16(ctx.r8.u32 + -9532, ctx.r10.u16);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// ori r10,r10,1840
	ctx.r10.u64 = ctx.r10.u64 | 1840;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r6,r6,1838
	ctx.r6.u64 = ctx.r6.u64 | 1838;
	// ori r8,r8,1842
	ctx.r8.u64 = ctx.r8.u64 | 1842;
	// ori r5,r5,1846
	ctx.r5.u64 = ctx.r5.u64 | 1846;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lis r25,10
	ctx.r25.s64 = 655360;
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r24,-30269
	ctx.r24.s64 = -1983709184;
	// lhzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lis r21,10
	ctx.r21.s64 = 655360;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// ori r6,r6,1844
	ctx.r6.u64 = ctx.r6.u64 | 1844;
	// sth r11,12624(r7)
	REX_STORE_U16(ctx.r7.u32 + 12624, ctx.r11.u16);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r7,r10,1848
	ctx.r7.u64 = ctx.r10.u64 | 1848;
	// addis r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 655360;
	// addi r17,r5,-31432
	ctx.r17.s64 = ctx.r5.s64 + -31432;
	// addi r10,r10,1870
	ctx.r10.s64 = ctx.r10.s64 + 1870;
	// ori r8,r8,1850
	ctx.r8.u64 = ctx.r8.u64 | 1850;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// ori r31,r31,1852
	ctx.r31.u64 = ctx.r31.u64 | 1852;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ori r30,r30,1854
	ctx.r30.u64 = ctx.r30.u64 | 1854;
	// ori r29,r29,1856
	ctx.r29.u64 = ctx.r29.u64 | 1856;
	// ori r28,r28,1858
	ctx.r28.u64 = ctx.r28.u64 | 1858;
	// ori r27,r27,1860
	ctx.r27.u64 = ctx.r27.u64 | 1860;
	// ori r25,r25,1862
	ctx.r25.u64 = ctx.r25.u64 | 1862;
	// ori r23,r23,1864
	ctx.r23.u64 = ctx.r23.u64 | 1864;
	// addi r18,r24,-21292
	ctx.r18.s64 = ctx.r24.s64 + -21292;
	// ori r21,r21,1866
	ctx.r21.u64 = ctx.r21.u64 | 1866;
	// ori r4,r4,1867
	ctx.r4.u64 = ctx.r4.u64 | 1867;
	// ori r20,r20,1868
	ctx.r20.u64 = ctx.r20.u64 | 1868;
	// lis r16,-30273
	ctx.r16.s64 = -1983971328;
	// lis r15,-30251
	ctx.r15.s64 = -1982529536;
	// lhzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// ori r26,r19,1869
	ctx.r26.u64 = ctx.r19.u64 | 1869;
	// lis r14,-30270
	ctx.r14.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// sth r11,2(r22)
	REX_STORE_U16(ctx.r22.u32 + 2, ctx.r11.u16);
	// lhzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// sth r11,4(r22)
	REX_STORE_U16(ctx.r22.u32 + 4, ctx.r11.u16);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lwz r19,168(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// sth r11,6(r22)
	REX_STORE_U16(ctx.r22.u32 + 6, ctx.r11.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// sth r3,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r3.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r6,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r6.u16);
	// sth r10,5752(r16)
	REX_STORE_U16(ctx.r16.u32 + 5752, ctx.r10.u16);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r10,26948(r14)
	REX_STORE_U16(ctx.r14.u32 + 26948, ctx.r10.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r3,-31432(r5)
	REX_STORE_U16(ctx.r5.u32 + -31432, ctx.r3.u16);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// sth r9,19168(r15)
	REX_STORE_U16(ctx.r15.u32 + 19168, ctx.r9.u16);
	// lhzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r10,2(r17)
	REX_STORE_U16(ctx.r17.u32 + 2, ctx.r10.u16);
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// sth r10,4(r17)
	REX_STORE_U16(ctx.r17.u32 + 4, ctx.r10.u16);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// sth r10,6(r17)
	REX_STORE_U16(ctx.r17.u32 + 6, ctx.r10.u16);
	// lhzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// sth r10,8(r17)
	REX_STORE_U16(ctx.r17.u32 + 8, ctx.r10.u16);
	// lhzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sth r10,10(r17)
	REX_STORE_U16(ctx.r17.u32 + 10, ctx.r10.u16);
	// lhzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// sth r10,12(r17)
	REX_STORE_U16(ctx.r17.u32 + 12, ctx.r10.u16);
	// lhzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r10,14(r17)
	REX_STORE_U16(ctx.r17.u32 + 14, ctx.r10.u16);
	// lhzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// sth r10,-21292(r24)
	REX_STORE_U16(ctx.r24.u32 + -21292, ctx.r10.u16);
	// lhzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// sth r10,2(r18)
	REX_STORE_U16(ctx.r18.u32 + 2, ctx.r10.u16);
	// lbzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbzx r8,r11,r20
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// stb r10,534(r7)
	REX_STORE_U8(ctx.r7.u32 + 534, ctx.r10.u8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lbzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r9,-31402(r6)
	REX_STORE_U8(ctx.r6.u32 + -31402, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stb r10,5210(r4)
	REX_STORE_U8(ctx.r4.u32 + 5210, ctx.r10.u8);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stb r8,9646(r5)
	REX_STORE_U8(ctx.r5.u32 + 9646, ctx.r8.u8);
	// addi r5,r10,12032
	ctx.r5.s64 = ctx.r10.s64 + 12032;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// ori r6,r7,33252
	ctx.r6.u64 = ctx.r7.u64 | 33252;
	// addi r4,r9,9448
	ctx.r4.s64 = ctx.r9.s64 + 9448;
loc_89951B20:
	// lbzx r31,r3,r8
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// li r7,512
	ctx.r7.s64 = 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r8,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stbx r31,r8,r4
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r31.u8);
loc_89951B38:
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// bdnz 0x89951b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951B38;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x89951b20
	if (ctx.cr6.lt) goto loc_89951B20;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// lis r7,12
	ctx.r7.s64 = 786432;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// ori r10,r10,1936
	ctx.r10.u64 = ctx.r10.u64 | 1936;
	// ori r9,r9,1940
	ctx.r9.u64 = ctx.r9.u64 | 1940;
	// ori r8,r8,1944
	ctx.r8.u64 = ctx.r8.u64 | 1944;
	// ori r7,r7,1945
	ctx.r7.u64 = ctx.r7.u64 | 1945;
	// ori r6,r6,1946
	ctx.r6.u64 = ctx.r6.u64 | 1946;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lbzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lis r21,-30274
	ctx.r21.s64 = -1984036864;
	// lis r20,-30274
	ctx.r20.s64 = -1984036864;
	// ori r5,r5,1947
	ctx.r5.u64 = ctx.r5.u64 | 1947;
	// ori r4,r4,1948
	ctx.r4.u64 = ctx.r4.u64 | 1948;
	// ori r3,r3,1949
	ctx.r3.u64 = ctx.r3.u64 | 1949;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// stb r10,530(r21)
	REX_STORE_U8(ctx.r21.u32 + 530, ctx.r10.u8);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// stw r9,576(r20)
	REX_STORE_U32(ctx.r20.u32 + 576, ctx.r9.u32);
	// lis r17,-30274
	ctx.r17.s64 = -1984036864;
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// ori r31,r31,1950
	ctx.r31.u64 = ctx.r31.u64 | 1950;
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// ori r30,r30,1952
	ctx.r30.u64 = ctx.r30.u64 | 1952;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r29,r29,1954
	ctx.r29.u64 = ctx.r29.u64 | 1954;
	// stb r8,9518(r19)
	REX_STORE_U8(ctx.r19.u32 + 9518, ctx.r8.u8);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// stb r7,6034(r18)
	REX_STORE_U8(ctx.r18.u32 + 6034, ctx.r7.u8);
	// lis r27,12
	ctx.r27.s64 = 786432;
	// stb r6,522(r17)
	REX_STORE_U8(ctx.r17.u32 + 522, ctx.r6.u8);
	// lis r26,12
	ctx.r26.s64 = 786432;
	// lbzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lis r25,12
	ctx.r25.s64 = 786432;
	// lhzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lis r24,12
	ctx.r24.s64 = 786432;
	// lhzx r29,r11,r29
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// lis r23,12
	ctx.r23.s64 = 786432;
	// lis r22,12
	ctx.r22.s64 = 786432;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lis r16,-30273
	ctx.r16.s64 = -1983971328;
	// ori r28,r28,1956
	ctx.r28.u64 = ctx.r28.u64 | 1956;
	// ori r27,r27,1958
	ctx.r27.u64 = ctx.r27.u64 | 1958;
	// ori r26,r26,1960
	ctx.r26.u64 = ctx.r26.u64 | 1960;
	// stb r4,32547(r10)
	REX_STORE_U8(ctx.r10.u32 + 32547, ctx.r4.u8);
	// ori r25,r25,1962
	ctx.r25.u64 = ctx.r25.u64 | 1962;
	// stb r3,6419(r9)
	REX_STORE_U8(ctx.r9.u32 + 6419, ctx.r3.u8);
	// ori r24,r24,1964
	ctx.r24.u64 = ctx.r24.u64 | 1964;
	// stb r5,6415(r16)
	REX_STORE_U8(ctx.r16.u32 + 6415, ctx.r5.u8);
	// ori r23,r23,1966
	ctx.r23.u64 = ctx.r23.u64 | 1966;
	// lhzx r28,r11,r28
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// ori r22,r22,1968
	ctx.r22.u64 = ctx.r22.u64 | 1968;
	// lhzx r27,r11,r27
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lhzx r26,r11,r26
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lhzx r25,r11,r25
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lhzx r24,r11,r24
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// lhzx r23,r11,r23
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lhzx r22,r11,r22
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lis r3,-30251
	ctx.r3.s64 = -1982529536;
	// stb r31,9654(r8)
	REX_STORE_U8(ctx.r8.u32 + 9654, ctx.r31.u8);
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// sth r30,-9488(r7)
	REX_STORE_U16(ctx.r7.u32 + -9488, ctx.r30.u16);
	// lis r9,12
	ctx.r9.s64 = 786432;
	// sth r29,-8692(r6)
	REX_STORE_U16(ctx.r6.u32 + -8692, ctx.r29.u16);
	// ori r7,r9,1992
	ctx.r7.u64 = ctx.r9.u64 | 1992;
	// sth r28,26520(r5)
	REX_STORE_U16(ctx.r5.u32 + 26520, ctx.r28.u16);
	// lis r6,12
	ctx.r6.s64 = 786432;
	// sth r27,-8696(r4)
	REX_STORE_U16(ctx.r4.u32 + -8696, ctx.r27.u16);
	// sth r26,12064(r3)
	REX_STORE_U16(ctx.r3.u32 + 12064, ctx.r26.u16);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// sth r25,-10760(r10)
	REX_STORE_U16(ctx.r10.u32 + -10760, ctx.r25.u16);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lbzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r6,1972
	ctx.r7.u64 = ctx.r6.u64 | 1972;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// ori r8,r8,1970
	ctx.r8.u64 = ctx.r8.u64 | 1970;
	// ori r6,r5,1976
	ctx.r6.u64 = ctx.r5.u64 | 1976;
	// ori r5,r3,1980
	ctx.r5.u64 = ctx.r3.u64 | 1980;
	// ori r31,r9,1988
	ctx.r31.u64 = ctx.r9.u64 | 1988;
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r3,r10,1984
	ctx.r3.u64 = ctx.r10.u64 | 1984;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lwzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lwzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// ori r3,r29,1993
	ctx.r3.u64 = ctx.r29.u64 | 1993;
	// stb r4,12323(r30)
	REX_STORE_U8(ctx.r30.u32 + 12323, ctx.r4.u8);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// sth r9,12604(r28)
	REX_STORE_U16(ctx.r28.u32 + 12604, ctx.r9.u16);
	// lis r9,12
	ctx.r9.s64 = 786432;
	// ori r29,r4,1994
	ctx.r29.u64 = ctx.r4.u64 | 1994;
	// ori r27,r9,1995
	ctx.r27.u64 = ctx.r9.u64 | 1995;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// ori r20,r9,1997
	ctx.r20.u64 = ctx.r9.u64 | 1997;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// ori r25,r4,1996
	ctx.r25.u64 = ctx.r4.u64 | 1996;
	// sth r10,-31404(r9)
	REX_STORE_U16(ctx.r9.u32 + -31404, ctx.r10.u16);
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lis r18,-30276
	ctx.r18.s64 = -1984167936;
	// ori r19,r4,1998
	ctx.r19.u64 = ctx.r4.u64 | 1998;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r17,-30269
	ctx.r17.s64 = -1983709184;
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// stw r7,32028(r18)
	REX_STORE_U32(ctx.r18.u32 + 32028, ctx.r7.u32);
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stw r8,6048(r4)
	REX_STORE_U32(ctx.r4.u32 + 6048, ctx.r8.u32);
	// lis r14,-30242
	ctx.r14.s64 = -1981939712;
	// li r4,512
	ctx.r4.s64 = 512;
	// sth r24,-21220(r17)
	REX_STORE_U16(ctx.r17.u32 + -21220, ctx.r24.u16);
	// lis r18,-30273
	ctx.r18.s64 = -1983971328;
	// sth r23,9540(r16)
	REX_STORE_U16(ctx.r16.u32 + 9540, ctx.r23.u16);
	// addis r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 786432;
	// sth r22,20420(r15)
	REX_STORE_U16(ctx.r15.u32 + 20420, ctx.r22.u16);
	// stb r9,-31401(r31)
	REX_STORE_U8(ctx.r31.u32 + -31401, ctx.r9.u8);
	// addis r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 786432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,3356(r3)
	REX_STORE_U32(ctx.r3.u32 + 3356, ctx.r6.u32);
	// addi r8,r8,1999
	ctx.r8.s64 = ctx.r8.s64 + 1999;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r7,r7,2511
	ctx.r7.s64 = ctx.r7.s64 + 2511;
	// stw r5,-21384(r14)
	REX_STORE_U32(ctx.r14.u32 + -21384, ctx.r5.u32);
	// lbzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r9,531(r30)
	REX_STORE_U8(ctx.r30.u32 + 531, ctx.r9.u8);
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r9,6026(r28)
	REX_STORE_U8(ctx.r28.u32 + 6026, ctx.r9.u8);
	// lbzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r9,9643(r26)
	REX_STORE_U8(ctx.r26.u32 + 9643, ctx.r9.u8);
	// lbzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// stb r9,9526(r21)
	REX_STORE_U8(ctx.r21.u32 + 9526, ctx.r9.u8);
	// lbzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// stb r9,6414(r18)
	REX_STORE_U8(ctx.r18.u32 + 6414, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
	// addi r6,r6,12280
	ctx.r6.s64 = ctx.r6.s64 + 12280;
loc_89951E00:
	// lbzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r5,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u8);
	// lbzx r4,r10,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89951e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951E00;
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
loc_89951E34:
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89951e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89951E34;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// lis r7,12
	ctx.r7.s64 = 786432;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// ori r4,r10,3120
	ctx.r4.u64 = ctx.r10.u64 | 3120;
	// ori r3,r9,3124
	ctx.r3.u64 = ctx.r9.u64 | 3124;
	// ori r8,r8,3128
	ctx.r8.u64 = ctx.r8.u64 | 3128;
	// ori r7,r7,3130
	ctx.r7.u64 = ctx.r7.u64 | 3130;
	// ori r6,r6,3132
	ctx.r6.u64 = ctx.r6.u64 | 3132;
	// ori r5,r5,3136
	ctx.r5.u64 = ctx.r5.u64 | 3136;
	// lwzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lis r3,-30214
	ctx.r3.s64 = -1980104704;
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lhzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r31,-30214
	ctx.r31.s64 = -1980104704;
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// stw r9,3488(r3)
	REX_STORE_U32(ctx.r3.u32 + 3488, ctx.r9.u32);
	// stw r10,-9212(r4)
	REX_STORE_U32(ctx.r4.u32 + -9212, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r8,3492(r31)
	REX_STORE_U16(ctx.r31.u32 + 3492, ctx.r8.u16);
	// sth r7,3496(r30)
	REX_STORE_U16(ctx.r30.u32 + 3496, ctx.r7.u16);
	// sth r6,3500(r5)
	REX_STORE_U16(ctx.r5.u32 + 3500, ctx.r6.u16);
	// stw r11,3504(r29)
	REX_STORE_U32(ctx.r29.u32 + 3504, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997F0B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8997F0B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8991b880
	ctx.lr = 0x8997F0C8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997f0d8
	if (!ctx.cr6.eq) goto loc_8997F0D8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8997F0D8:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r10,r10,-4592
	ctx.r10.s64 = ctx.r10.s64 + -4592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r10,-2
	ctx.r26.s64 = ctx.r10.s64 + -2;
	// addi r9,r9,-18332
	ctx.r9.s64 = ctx.r9.s64 + -18332;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r29,r9,-4
	ctx.r29.s64 = ctx.r9.s64 + -4;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
loc_8997F100:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lhzu r28,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// lhz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// extsh r5,r25
	ctx.r5.s64 = ctx.r25.s16;
	// mulli r30,r8,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// oris r6,r10,49152
	ctx.r6.u64 = ctx.r10.u64 | 3221225472;
	// mulli r24,r5,208
	ctx.r24.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// ori r6,r6,256
	ctx.r6.u64 = ctx.r6.u64 | 256;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r6,r24,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// stwx r5,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r6,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997F158;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8997F160;
	sub_8991C578(ctx, base);
	// lbz r4,14(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 14);
	// lhz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 12);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lhzu r6,16(r29)
	ea = 16 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r23,r31,148
	ctx.r23.s64 = ctx.r31.s64 + 148;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r22,r31,150
	ctx.r22.s64 = ctx.r31.s64 + 150;
	// sth r6,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// addi r21,r31,150
	ctx.r21.s64 = ctx.r31.s64 + 150;
	// addi r6,r31,154
	ctx.r6.s64 = ctx.r31.s64 + 154;
	// addi r20,r31,154
	ctx.r20.s64 = ctx.r31.s64 + 154;
	// addi r19,r31,56
	ctx.r19.s64 = ctx.r31.s64 + 56;
	// addi r18,r31,48
	ctx.r18.s64 = ctx.r31.s64 + 48;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r17,r31,48
	ctx.r17.s64 = ctx.r31.s64 + 48;
	// addi r16,r31,60
	ctx.r16.s64 = ctx.r31.s64 + 60;
	// addi r15,r31,52
	ctx.r15.s64 = ctx.r31.s64 + 52;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rotlwi r9,r7,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lbzx r3,r24,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r3.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lhzx r29,r30,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r14,r31,206
	ctx.r14.s64 = ctx.r31.s64 + 206;
	// sthx r25,r30,r23
	REX_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r25.u16);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r25,r31,204
	ctx.r25.s64 = ctx.r31.s64 + 204;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// sthx r8,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u16);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lhzx r11,r24,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r22.u32);
	// addi r29,r31,66
	ctx.r29.s64 = ctx.r31.s64 + 66;
	// sthx r11,r30,r21
	REX_STORE_U16(ctx.r30.u32 + ctx.r21.u32, ctx.r11.u16);
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// lhzx r6,r24,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r6.u32);
	// stwx r10,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r10.u32);
	// sthx r6,r30,r20
	REX_STORE_U16(ctx.r30.u32 + ctx.r20.u32, ctx.r6.u16);
	// lwzx r11,r24,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r9.u32);
	// stwx r11,r30,r17
	REX_STORE_U32(ctx.r30.u32 + ctx.r17.u32, ctx.r11.u32);
	// lwzx r11,r24,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r15.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r4,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r4.u8);
	// lbzx r11,r24,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// lhz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r11,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// ld r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stbx r5,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u8);
	// stbx r5,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r5.u8);
	// sthx r4,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r4.u16);
	// blt cr6,0x8997f100
	if (ctx.cr6.lt) goto loc_8997F100;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x8997F27C;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997F6E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r8,r11,12800
	ctx.r8.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r6,r7,-32768
	ctx.r6.s64 = ctx.r7.s64 + -32768;
	// addis r10,r6,-192
	ctx.r10.s64 = ctx.r6.s64 + -12582912;
	// stwx r6,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8997f710
	if (!ctx.cr0.lt) goto loc_8997F710;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8997F710:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8997f72c
	if (!ctx.cr6.gt) goto loc_8997F72C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
loc_8997F72C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8997F738) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8997F740;
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
	// addi r7,r30,164
	ctx.r7.s64 = ctx.r30.s64 + 164;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bgt cr6,0x8997fdc0
	if (ctx.cr6.gt) goto loc_8997FDC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997f89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F89C;
	// bdzf 4*cr6+eq,0x8997faec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FAEC;
	// bdzf 4*cr6+eq,0x8997fb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FB10;
	// bne cr6,0x8997fcf8
	if (!ctx.cr6.eq) goto loc_8997FCF8;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8997f83c
	if (ctx.cr6.lt) goto loc_8997F83C;
	// beq cr6,0x8997f810
	if (ctx.cr6.eq) goto loc_8997F810;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8997f880
	if (!ctx.cr6.lt) goto loc_8997F880;
	// bl 0x899368b0
	ctx.lr = 0x8997F7B4;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997f880
	if (!ctx.cr6.eq) goto loc_8997F880;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lhzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x899365d0
	ctx.lr = 0x8997F800;
	sub_899365D0(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// b 0x8997f880
	goto loc_8997F880;
loc_8997F810:
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
	// bgt cr6,0x8997f880
	if (ctx.cr6.gt) goto loc_8997F880;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8997f87c
	goto loc_8997F87C;
loc_8997F83C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,320
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 320, ctx.xer);
	// bgt cr6,0x8997f880
	if (ctx.cr6.gt) goto loc_8997F880;
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
	// bne 0x8997f880
	if (!ctx.cr0.eq) goto loc_8997F880;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x8997F874;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_8997F87C:
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
loc_8997F880:
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
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F89C:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x8997fdc0
	if (ctx.cr6.gt) goto loc_8997FDC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997f954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F954;
	// bdzf 4*cr6+eq,0x8997f97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F97C;
	// bdzf 4*cr6+eq,0x8997f9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F9BC;
	// bdzf 4*cr6+eq,0x8997f9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F9E8;
	// bdzf 4*cr6+eq,0x8997fa48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FA48;
	// bne cr6,0x8997fa8c
	if (!ctx.cr6.eq) goto loc_8997FA8C;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// ori r3,r5,20077
	ctx.r3.u64 = ctx.r5.u64 | 20077;
	// addi r8,r4,-18172
	ctx.r8.s64 = ctx.r4.s64 + -18172;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// srawi r7,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r7,r7,19,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x2;
	// addi r5,r30,182
	ctx.r5.s64 = ctx.r30.s64 + 182;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbzx r7,r7,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stbx r28,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// or r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 | ctx.r6.u64;
	// or r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F954:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8991d830
	ctx.lr = 0x8997F96C;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F97C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997f998
	if (!ctx.cr6.lt) goto loc_8997F998;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997F998:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997F9A0;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997fdc0
	if (ctx.cr6.eq) goto loc_8997FDC0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F9BC:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997f9d8
	if (ctx.cr6.eq) goto loc_8997F9D8;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F9D8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997F9E8:
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
	// blt cr6,0x8997fa38
	if (ctx.cr6.lt) goto loc_8997FA38;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// rlwinm r4,r6,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FA38:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FA48:
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
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x8997fdc0
	if (ctx.cr6.lt) goto loc_8997FDC0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x8997fdbc
	goto loc_8997FDBC;
loc_8997FA8C:
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
	// blt cr6,0x8997fdc0
	if (ctx.cr6.lt) goto loc_8997FDC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,7200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7200, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// bgt cr6,0x8997fad8
	if (ctx.cr6.gt) goto loc_8997FAD8;
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
	// bge cr6,0x8997fdc0
	if (!ctx.cr6.lt) goto loc_8997FDC0;
loc_8997FAD8:
	// bl 0x89936508
	ctx.lr = 0x8997FADC;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FAEC:
	// bl 0x89936828
	ctx.lr = 0x8997FAF0;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997fdc0
	if (!ctx.cr6.eq) goto loc_8997FDC0;
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
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FB10:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x8997fdc0
	if (ctx.cr6.gt) goto loc_8997FDC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997f954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997F954;
	// bdzf 4*cr6+eq,0x8997fbd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FBD0;
	// bdzf 4*cr6+eq,0x8997fc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FC14;
	// bdzf 4*cr6+eq,0x8997fc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FC30;
	// bdzf 4*cr6+eq,0x8997fc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FC74;
	// bne cr6,0x8997fcb8
	if (!ctx.cr6.eq) goto loc_8997FCB8;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// ori r3,r4,20077
	ctx.r3.u64 = ctx.r4.u64 | 20077;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,-9212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -9212);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r10,-18168
	ctx.r10.s64 = ctx.r10.s64 + -18168;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r5)
	REX_STORE_U32(ctx.r5.u32 + -9212, ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r28,r30,182
	ctx.r28.s64 = ctx.r30.s64 + 182;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r6,18,15,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x1FFFE;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r7,r6,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FBD0:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997fbf0
	if (!ctx.cr6.lt) goto loc_8997FBF0;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997FBF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997FBF8;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997fdc0
	if (ctx.cr6.eq) goto loc_8997FDC0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FC14:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997f9d8
	if (ctx.cr6.eq) goto loc_8997F9D8;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FC30:
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
	// blt cr6,0x8997fa38
	if (ctx.cr6.lt) goto loc_8997FA38;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-16
	ctx.r6.s64 = -16;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x8997fdbc
	goto loc_8997FDBC;
loc_8997FC74:
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
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x8997fdc0
	if (ctx.cr6.lt) goto loc_8997FDC0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
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
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FCB8:
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
	// cmplwi cr6,r7,60
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 60, ctx.xer);
	// blt cr6,0x8997fdc0
	if (ctx.cr6.lt) goto loc_8997FDC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,10800
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10800, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// ble cr6,0x8997fdc0
	if (!ctx.cr6.gt) goto loc_8997FDC0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FCF8:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8997fd84
	if (ctx.cr6.lt) goto loc_8997FD84;
	// beq cr6,0x8997fd68
	if (ctx.cr6.eq) goto loc_8997FD68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8997fdc0
	if (!ctx.cr6.lt) goto loc_8997FDC0;
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
	// bgt cr6,0x8997fdc0
	if (ctx.cr6.gt) goto loc_8997FDC0;
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
	ctx.lr = 0x8997FD64;
	sub_8995E188(ctx, base);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FD68:
	// bl 0x89936938
	ctx.lr = 0x8997FD6C;
	sub_89936938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997fdc0
	if (!ctx.cr6.eq) goto loc_8997FDC0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fdc0
	goto loc_8997FDC0;
loc_8997FD84:
	// bl 0x89936760
	ctx.lr = 0x8997FD88;
	sub_89936760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997fdc0
	if (ctx.cr6.eq) goto loc_8997FDC0;
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
	// li r5,-8
	ctx.r5.s64 = -8;
	// li r4,-9
	ctx.r4.s64 = -9;
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
loc_8997FDBC:
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
loc_8997FDC0:
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

DEFINE_REX_FUNC(sub_89985A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89985A78;
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
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bgt cr6,0x89989848
	if (ctx.cr6.gt) goto loc_89989848;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23224
	ctx.r12.s64 = ctx.r12.s64 + 23224;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89985B54;
	case 1:
		goto loc_89985B54;
	case 2:
		goto loc_89985B54;
	case 3:
		goto loc_89986100;
	case 4:
		goto loc_89986844;
	case 5:
		goto loc_89986388;
	case 6:
		goto loc_89987070;
	case 7:
		goto loc_899872A0;
	case 8:
		goto loc_899874B8;
	case 9:
		goto loc_899889C0;
	case 10:
		goto loc_89988B04;
	case 11:
		goto loc_89988B04;
	case 12:
		goto loc_899879E8;
	case 13:
		goto loc_899879E8;
	case 14:
		goto loc_899875A8;
	case 15:
		goto loc_89987AC4;
	case 16:
		goto loc_89987C44;
	case 17:
		goto loc_89989848;
	case 18:
		goto loc_89987E28;
	case 19:
		goto loc_89987AC4;
	case 20:
		goto loc_89987C44;
	case 21:
		goto loc_89989848;
	case 22:
		goto loc_89987E28;
	case 23:
		goto loc_89987FD0;
	case 24:
		goto loc_89987FD0;
	case 25:
		goto loc_89988208;
	case 26:
		goto loc_899883F8;
	case 27:
		goto loc_899885D4;
	case 28:
		goto loc_89988718;
	case 29:
		goto loc_89988718;
	case 30:
		goto loc_8998946C;
	case 31:
		goto loc_8998946C;
	case 32:
		goto loc_8998962C;
	case 33:
		goto loc_8998962C;
	case 34:
		goto loc_89989254;
	case 35:
		goto loc_89988D3C;
	case 36:
		goto loc_89988D3C;
	case 37:
		goto loc_89988F14;
	case 38:
		goto loc_899877D8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89985B54:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89985fdc
	if (ctx.cr6.eq) goto loc_89985FDC;
	// bl 0x89984840
	ctx.lr = 0x89985B6C;
	sub_89984840(ctx, base);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89985f0c
	if (ctx.cr6.lt) goto loc_89985F0C;
	// beq cr6,0x89985d10
	if (ctx.cr6.eq) goto loc_89985D10;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89989848
	if (!ctx.cr6.lt) goto loc_89989848;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89985c34
	if (ctx.cr6.eq) goto loc_89985C34;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x89985bb8
	if (ctx.cr6.eq) goto loc_89985BB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89985BAC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// b 0x89985c70
	goto loc_89985C70;
loc_89985BB8:
	// addi r9,r30,191
	ctx.r9.s64 = ctx.r30.s64 + 191;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89985bf4
	if (ctx.cr6.lt) goto loc_89985BF4;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// b 0x89985c70
	goto loc_89985C70;
loc_89985BF4:
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// addi r8,r30,180
	ctx.r8.s64 = ctx.r30.s64 + 180;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985C34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89985C44;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89985ce4
	if (ctx.cr6.lt) goto loc_89985CE4;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
loc_89985C70:
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
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
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
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// bne 0x89989848
	if (!ctx.cr0.eq) goto loc_89989848;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x89936360
	ctx.lr = 0x89985CDC;
	sub_89936360(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89985CF4;
	sub_8991B610(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985D10:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89985e3c
	if (ctx.cr6.eq) goto loc_89985E3C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x89985d44
	if (ctx.cr6.eq) goto loc_89985D44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89985D38;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// b 0x89985e78
	goto loc_89985E78;
loc_89985D44:
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
	// blt cr6,0x89985d78
	if (ctx.cr6.lt) goto loc_89985D78;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x89985e78
	goto loc_89985E78;
loc_89985D78:
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
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,-15688
	ctx.r10.s64 = ctx.r10.s64 + -15688;
	// stbx r28,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u8);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
loc_89985DAC:
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lhz r6,2(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r11,6(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lhz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// lwzx r10,r26,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r27,r6,r8
	ctx.r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899cc2e0
	ctx.lr = 0x89985DEC;
	sub_899CC2E0(ctx, base);
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lhzu r11,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwzx r9,r26,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// subfic r11,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x899cc2e0
	ctx.lr = 0x89985E1C;
	sub_899CC2E0(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x89985dac
	if (ctx.cr6.lt) goto loc_89985DAC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985E3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89985E4C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89985ee0
	if (ctx.cr6.lt) goto loc_89985EE0;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
loc_89985E78:
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
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985EE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89985EF0;
	sub_8991B610(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985F0C:
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
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,195
	ctx.r11.s64 = ctx.r30.s64 + 195;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89985fa8
	if (ctx.cr6.eq) goto loc_89985FA8;
	// stwx r29,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r29.u32);
	// b 0x89985fbc
	goto loc_89985FBC;
loc_89985FA8:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r11,2
	ctx.r11.s64 = 2;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
loc_89985FBC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b610
	ctx.lr = 0x89985FC4;
	sub_8991B610(ctx, base);
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89985FCC;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r29,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89985FDC:
	// bl 0x8991c8b8
	ctx.lr = 0x89985FE0;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89985ff4
	if (!ctx.cr6.eq) goto loc_89985FF4;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x89985FF4;
	sub_89936360(ctx, base);
loc_89985FF4:
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r29,r9,20077
	ctx.r29.u64 = ctx.r9.u64 | 20077;
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r25,r10,-15656
	ctx.r25.s64 = ctx.r10.s64 + -15656;
loc_89986014:
	// lwz r11,-9212(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -9212);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r6,17
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFF;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// lhzx r6,r4,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzx r4,r10,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r10,r9,6,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1F0000;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// stw r11,-9212(r26)
	REX_STORE_U32(ctx.r26.u32 + -9212, ctx.r11.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r4,r7,r10
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// rlwinm r11,r9,30,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1FFF;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r23,r30,207
	ctx.r23.s64 = ctx.r30.s64 + 207;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r8,r24,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r31.u32);
	// lbzx r4,r9,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbzx r7,r23,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// bl 0x899d4640
	ctx.lr = 0x899860E4;
	sub_899D4640(ctx, base);
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89986014
	if (ctx.cr6.lt) goto loc_89986014;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986100:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89986108;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89986128
	if (!ctx.cr6.lt) goto loc_89986128;
loc_89986118:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8998611C:
	// bl 0x899844a8
	ctx.lr = 0x89986120;
	sub_899844A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986128:
	// mulli r27,r11,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r29,r30,72
	ctx.r29.s64 = ctx.r30.s64 + 72;
	// lhzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89986340
	if (ctx.cr6.eq) goto loc_89986340;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r27,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89986340
	if (!ctx.cr6.eq) goto loc_89986340;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899855e8
	ctx.lr = 0x89986158;
	sub_899855E8(ctx, base);
	// lhzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x89989848
	if (ctx.cr6.gt) goto loc_89989848;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89986294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986294;
	// bdzf 4*cr6+eq,0x899862f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899862F8;
	// bne cr6,0x8998631c
	if (!ctx.cr6.eq) goto loc_8998631C;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// li r28,0
	ctx.r28.s64 = 0;
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
	// blt cr6,0x89986210
	if (ctx.cr6.lt) goto loc_89986210;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r11,-15652
	ctx.r6.s64 = ctx.r11.s64 + -15652;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// lbzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r4.u32);
loc_89986210:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stwx r3,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// ori r3,r10,3
	ctx.r3.u64 = ctx.r10.u64 | 3;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stbx r7,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u8);
	// stbx r3,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// stwx r8,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986294:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899862C4;
	sub_8991B610(ctx, base);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// li r5,6
	ctx.r5.s64 = 6;
	// sthx r11,r8,r31
	REX_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u16);
	// stwx r11,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
	// stbx r5,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899862F8:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// stbx r6,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998631C:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986340:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r9,r11,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// oris r7,r9,8368
	ctx.r7.u64 = ctx.r9.u64 | 548405248;
	// stwx r28,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998636C;
	sub_8991B610(ctx, base);
	// addi r6,r30,168
	ctx.r6.s64 = ctx.r30.s64 + 168;
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// stwx r28,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u32);
	// sthx r28,r5,r31
	REX_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r28.u16);
	// bl 0x899d9280
	ctx.lr = 0x89986380;
	sub_899D9280(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986388:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89986390;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x899863A8;
	sub_899855E8(ctx, base);
	// addi r27,r30,189
	ctx.r27.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r27,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x899867bc
	if (ctx.cr6.gt) goto loc_899867BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899864c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899864C8;
	// bdzf 4*cr6+eq,0x8998653c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998653C;
	// bdzf 4*cr6+eq,0x89986588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986588;
	// bdzf 4*cr6+eq,0x89986640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986640;
	// bdzf 4*cr6+eq,0x899866b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899866B8;
	// bdzf 4*cr6+eq,0x899866ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899866EC;
	// bdzf 4*cr6+eq,0x89986764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986764;
	// bne cr6,0x899867a4
	if (!ctx.cr6.eq) goto loc_899867A4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899863EC;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899863F8;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x89986414
	if (!ctx.cr6.lt) goto loc_89986414;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_89986414:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x8998642c
	if (!ctx.cr6.gt) goto loc_8998642C;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8998642C:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899864b8
	if (ctx.cr6.eq) goto loc_899864B8;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899864b8
	if (ctx.cr6.eq) goto loc_899864B8;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986464;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899867bc
	if (ctx.cr6.eq) goto loc_899867BC;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,-15636
	ctx.r6.s64 = ctx.r8.s64 + -15636;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r5,r30,160
	ctx.r5.s64 = ctx.r30.s64 + 160;
	// li r4,3
	ctx.r4.s64 = 3;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stbx r4,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r4.u8);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// sthx r8,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u16);
	// b 0x899867bc
	goto loc_899867BC;
loc_899864B8:
	// lbzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x899867bc
	goto loc_899867BC;
loc_899864C8:
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
loc_899864DC:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899864f0
	if (!ctx.cr6.gt) goto loc_899864F0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899864F0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x89986504
	if (!ctx.cr6.lt) goto loc_89986504;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_89986504:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x899864dc
	if (ctx.cr6.lt) goto loc_899864DC;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r8,r31
	REX_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u16);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x899867bc
	if (!ctx.cr6.eq) goto loc_899867BC;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r9.u8);
	// stbx r28,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u8);
	// b 0x899867bc
	goto loc_899867BC;
loc_8998653C:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x8991b610
	ctx.lr = 0x89986558;
	sub_8991B610(ctx, base);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// stbx r28,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r28.u8);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,-1
	ctx.r8.s64 = -1;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986588:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,28
	ctx.r8.s64 = 28;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899cfa40
	ctx.lr = 0x899865B0;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899865cc
	if (ctx.cr6.eq) goto loc_899865CC;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899865CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lhzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899cfa40
	ctx.lr = 0x899865F0;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998660c
	if (ctx.cr6.eq) goto loc_8998660C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8998660C:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899867bc
	if (ctx.cr6.eq) goto loc_899867BC;
	// lbzx r9,r27,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
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
	// stbx r6,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r6.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899867bc
	goto loc_899867BC;
loc_89986640:
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
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x89986670
	if (ctx.cr6.lt) goto loc_89986670;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r8.u8);
loc_89986670:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// cmpwi cr6,r6,128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 128, ctx.xer);
	// bge cr6,0x8998669c
	if (!ctx.cr6.lt) goto loc_8998669C;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8998669C:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x899867bc
	if (!ctx.cr6.gt) goto loc_899867BC;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// b 0x899867bc
	goto loc_899867BC;
loc_899866B8:
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
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x899867bc
	if (ctx.cr6.lt) goto loc_899867BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r8.u8);
	// b 0x899867bc
	goto loc_899867BC;
loc_899866EC:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x8998671c
	if (ctx.cr6.lt) goto loc_8998671C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r8.u8);
loc_8998671C:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthx r4,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u16);
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bge cr6,0x89986748
	if (!ctx.cr6.lt) goto loc_89986748;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_89986748:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x899867bc
	if (!ctx.cr6.gt) goto loc_899867BC;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// b 0x899867bc
	goto loc_899867BC;
loc_89986764:
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
	// blt cr6,0x899867bc
	if (ctx.cr6.lt) goto loc_899867BC;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x899867bc
	goto loc_899867BC;
loc_899867A4:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899867bc
	if (!ctx.cr6.eq) goto loc_899867BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u8);
loc_899867BC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lhzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,-124
	ctx.r4.s64 = ctx.r10.s64 + -124;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,29
	ctx.r8.u64 = ctx.r4.u32 & 0x7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
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
	// stwx r6,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89986844:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89986ee4
	if (ctx.cr6.eq) goto loc_89986EE4;
	// addi r26,r30,191
	ctx.r26.s64 = ctx.r30.s64 + 191;
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89986ea8
	if (ctx.cr6.lt) goto loc_89986EA8;
	// beq cr6,0x89986e30
	if (ctx.cr6.eq) goto loc_89986E30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8998704c
	if (!ctx.cr6.lt) goto loc_8998704C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89984f48
	ctx.lr = 0x89986878;
	sub_89984F48(ctx, base);
	// addi r29,r30,190
	ctx.r29.s64 = ctx.r30.s64 + 190;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8998704c
	if (ctx.cr6.gt) goto loc_8998704C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89986964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986964;
	// bdzf 4*cr6+eq,0x89986a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986A00;
	// bdzf 4*cr6+eq,0x89986a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986A4C;
	// bdzf 4*cr6+eq,0x89986a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986A68;
	// bdzf 4*cr6+eq,0x89986ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986AE0;
	// bdzf 4*cr6+eq,0x89986b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986B88;
	// bdzf 4*cr6+eq,0x89986c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89986C84;
	// bne cr6,0x89986d34
	if (!ctx.cr6.eq) goto loc_89986D34;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899868dc
	if (ctx.cr6.eq) goto loc_899868DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,108
	ctx.r3.s64 = 108;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x89936360
	ctx.lr = 0x899868D8;
	sub_89936360(ctx, base);
	// b 0x8998704c
	goto loc_8998704C;
loc_899868DC:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899868fc
	if (ctx.cr6.eq) goto loc_899868FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,108
	ctx.r3.s64 = 108;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x89936360
	ctx.lr = 0x899868F8;
	sub_89936360(ctx, base);
	// b 0x8998704c
	goto loc_8998704C;
loc_899868FC:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8998691c
	if (ctx.cr6.eq) goto loc_8998691C;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,108
	ctx.r3.s64 = 108;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x89936360
	ctx.lr = 0x89986918;
	sub_89936360(ctx, base);
	// b 0x8998704c
	goto loc_8998704C;
loc_8998691C:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89986934
	if (ctx.cr6.eq) goto loc_89986934;
	// li r11,6
	ctx.r11.s64 = 6;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986934:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8998694c
	if (ctx.cr6.eq) goto loc_8998694C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_8998694C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986964:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986984
	if (!ctx.cr6.eq) goto loc_89986984;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986984:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986994;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,-11832
	ctx.r6.s64 = ctx.r8.s64 + -11832;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
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
	// rlwinm r11,r4,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// lwzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x8999c3f0
	ctx.lr = 0x899869D8;
	sub_8999C3F0(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986A00:
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
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x8998704c
	if (ctx.cr6.lt) goto loc_8998704C;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// bl 0x89936360
	ctx.lr = 0x89986A3C;
	sub_89936360(ctx, base);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986A4C:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8998704c
	if (!ctx.cr6.eq) goto loc_8998704C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986A68:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986a88
	if (!ctx.cr6.eq) goto loc_89986A88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986A88:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986A98;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// lwzx r3,r9,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x8998d8d8
	ctx.lr = 0x89986AC8;
	sub_8998D8D8(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x89936360
	ctx.lr = 0x89986ADC;
	sub_89936360(ctx, base);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986AE0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986b00
	if (!ctx.cr6.eq) goto loc_89986B00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986B00:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986B10;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x89936360
	ctx.lr = 0x89986B20;
	sub_89936360(ctx, base);
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// ori r29,r11,20077
	ctx.r29.u64 = ctx.r11.u64 | 20077;
loc_89986B34:
	// lwz r11,-9212(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r3,r26,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lbzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// stw r11,-9212(r27)
	REX_STORE_U32(ctx.r27.u32 + -9212, ctx.r11.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// clrlwi r6,r11,17
	ctx.r6.u64 = ctx.r11.u32 & 0x7FFF;
	// bl 0x8999fc70
	ctx.lr = 0x89986B70;
	sub_8999FC70(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x89986b34
	if (ctx.cr6.lt) goto loc_89986B34;
	// b 0x8998704c
	goto loc_8998704C;
loc_89986B88:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986ba8
	if (!ctx.cr6.eq) goto loc_89986BA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986BA8:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986BB8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-15732
	ctx.r11.s64 = ctx.r11.s64 + -15732;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_89986BD8:
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r11,r24,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzu r6,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwzx r9,r25,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bl 0x899ce510
	ctx.lr = 0x89986C10;
	sub_899CE510(ctx, base);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x89986bd8
	if (ctx.cr6.lt) goto loc_89986BD8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r11,r11,-15708
	ctx.r11.s64 = ctx.r11.s64 + -15708;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_89986C34:
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// li r7,16
	ctx.r7.s64 = 16;
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r9,r24,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// li r3,18
	ctx.r3.s64 = 18;
	// lhzu r6,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// bl 0x899ce510
	ctx.lr = 0x89986C68;
	sub_899CE510(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x89986c34
	if (ctx.cr6.lt) goto loc_89986C34;
	// b 0x8998704c
	goto loc_8998704C;
loc_89986C84:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986ca4
	if (!ctx.cr6.eq) goto loc_89986CA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986CA4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986CB4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r11,r11,-15620
	ctx.r11.s64 = ctx.r11.s64 + -15620;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_89986CD0:
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r4,r27,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rotlwi r10,r6,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lhzu r7,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r3,r6,-2
	ctx.r3.s64 = ctx.r6.s64 + -2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8999efa8
	ctx.lr = 0x89986D18;
	sub_8999EFA8(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x89986cd0
	if (ctx.cr6.lt) goto loc_89986CD0;
	// b 0x8998704c
	goto loc_8998704C;
loc_89986D34:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89986d54
	if (!ctx.cr6.eq) goto loc_89986D54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986D54:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89986D64;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998704c
	if (ctx.cr6.eq) goto loc_8998704C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-15732
	ctx.r11.s64 = ctx.r11.s64 + -15732;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_89986D84:
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r11,r24,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzu r6,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwzx r9,r25,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bl 0x899ce510
	ctx.lr = 0x89986DBC;
	sub_899CE510(ctx, base);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x89986d84
	if (ctx.cr6.lt) goto loc_89986D84;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r11,r11,-15708
	ctx.r11.s64 = ctx.r11.s64 + -15708;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_89986DE0:
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// li r7,16
	ctx.r7.s64 = 16;
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r9,r24,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// li r3,19
	ctx.r3.s64 = 19;
	// lhzu r6,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// bl 0x899ce510
	ctx.lr = 0x89986E14;
	sub_899CE510(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x89986de0
	if (ctx.cr6.lt) goto loc_89986DE0;
	// b 0x8998704c
	goto loc_8998704C;
loc_89986E30:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// sthx r10,r29,r31
	REX_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u16);
	// bl 0x8991b770
	ctx.lr = 0x89986E48;
	sub_8991B770(ctx, base);
	// lhzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// bne cr6,0x8998704c
	if (!ctx.cr6.eq) goto loc_8998704C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89986E5C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89986e7c
	if (ctx.cr6.lt) goto loc_89986E7C;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
loc_89986E7C:
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r30,190
	ctx.r10.s64 = ctx.r30.s64 + 190;
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r28,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u8);
	// stbx r28,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u8);
	// stbx r28,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u8);
	// stbx r7,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986EA8:
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
	// blt cr6,0x8998704c
	if (ctx.cr6.lt) goto loc_8998704C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,46
	ctx.r3.s64 = 46;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936360
	ctx.lr = 0x89986ED4;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u8);
	// b 0x8998704c
	goto loc_8998704C;
loc_89986EE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x89986EEC;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89986f00
	if (!ctx.cr6.eq) goto loc_89986F00;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x89986F00;
	sub_89936360(ctx, base);
loc_89986F00:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r10,r10,-15632
	ctx.r10.s64 = ctx.r10.s64 + -15632;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8998704c
	if (ctx.cr6.lt) goto loc_8998704C;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
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
	// addi r24,r10,-15624
	ctx.r24.s64 = ctx.r10.s64 + -15624;
loc_89986F50:
	// lwz r11,-9212(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lhz r4,2(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r23,r30,200
	ctx.r23.s64 = ctx.r30.s64 + 200;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r7,r10,17
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// srawi r8,r22,16
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 16;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// lhzx r21,r10,r26
	ctx.r21.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r10,r8,4,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x70000;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r22,r22,16
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// stw r11,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r11.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r7,r21
	ctx.r7.s64 = ctx.r21.s16;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rlwinm r21,r11,18,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// rlwinm r11,r22,30,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x1FFF;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r11,-4096
	ctx.r7.s64 = ctx.r11.s64 + -4096;
	// addi r22,r30,207
	ctx.r22.s64 = ctx.r30.s64 + 207;
	// lbzx r21,r21,r24
	ctx.r21.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r24.u32);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r8,r23,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r7,r22,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// extsb r4,r21
	ctx.r4.s64 = ctx.r21.s8;
	// bl 0x899d4640
	ctx.lr = 0x89987038;
	sub_899D4640(ctx, base);
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x89986f50
	if (ctx.cr6.lt) goto loc_89986F50;
loc_8998704C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x89987068;
	sub_89933B88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987070:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89987078;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89987090;
	sub_899855E8(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bne cr6,0x89989840
	if (!ctx.cr6.eq) goto loc_89989840;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89987164
	if (ctx.cr6.eq) goto loc_89987164;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
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
	// beq cr6,0x899870f0
	if (ctx.cr6.eq) goto loc_899870F0;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899871e8
	goto loc_899871E8;
loc_899870F0:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r28,0
	ctx.r28.s64 = 0;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899871e8
	if (ctx.cr6.lt) goto loc_899871E8;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998713C;
	sub_8991B610(ctx, base);
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,256
	ctx.r5.s64 = 256;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// sthx r5,r8,r31
	REX_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u16);
	// stwx r28,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987164:
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89987250
	if (ctx.cr6.lt) goto loc_89987250;
	// beq cr6,0x899871b8
	if (ctx.cr6.eq) goto loc_899871B8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89989848
	if (!ctx.cr6.lt) goto loc_89989848;
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
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899871B8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r5,r7,-32768
	ctx.r5.s64 = ctx.r7.s64 + -32768;
	// addis r4,r6,-8
	ctx.r4.s64 = ctx.r6.s64 + -524288;
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899871E8:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
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
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987250:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8998726C;
	sub_89936360(ctx, base);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// stwx r6,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899872A0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899872A8;
	sub_8991BA70(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x899872C0;
	sub_899855E8(ctx, base);
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89987394
	if (ctx.cr6.lt) goto loc_89987394;
	// bne cr6,0x89987488
	if (!ctx.cr6.eq) goto loc_89987488;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r7,r10,23
	ctx.r7.u64 = ctx.r10.u32 & 0x1FF;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
loc_89987304:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// ble cr6,0x89987320
	if (!ctx.cr6.gt) goto loc_89987320;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
loc_89987320:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bge cr6,0x8998733c
	if (!ctx.cr6.lt) goto loc_8998733C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
loc_8998733C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89987304
	if (ctx.cr6.lt) goto loc_89987304;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x89987488
	if (!ctx.cr6.eq) goto loc_89987488;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stbx r28,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,7
	ctx.r9.s64 = 7;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987378;
	sub_8991B610(ctx, base);
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r28,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u8);
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987394:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r9,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x899873b4
	if (!ctx.cr6.eq) goto loc_899873B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x89987488
	goto loc_89987488;
loc_899873B4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899873BC;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899873C8;
	sub_89932D30(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x899873D8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89987488
	if (ctx.cr6.eq) goto loc_89987488;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r6,r9,32768
	ctx.r6.u64 = ctx.r9.u64 | 32768;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// rlwinm r9,r5,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r8,r28,128
	ctx.r8.s64 = ctx.r28.s64 + 128;
	// lwzx r10,r4,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r5,r8,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r3,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r3,r4,18,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0xFFFFFFFC;
	// lhzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r6,r7,r6
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// add r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r25,r10,-15596
	ctx.r25.s64 = ctx.r10.s64 + -15596;
loc_8998744C:
	// lhzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// li r7,16
	ctx.r7.s64 = 16;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// bl 0x899ce510
	ctx.lr = 0x89987470;
	sub_899CE510(ctx, base);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8998744c
	if (ctx.cr6.lt) goto loc_8998744C;
loc_89987488:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x89987490;
	sub_8991B770(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899874B8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899874C0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89986118
	if (ctx.cr6.lt) goto loc_89986118;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// ori r7,r9,20480
	ctx.r7.u64 = ctx.r9.u64 | 20480;
	// lhzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// sthx r6,r29,r31
	REX_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// lhzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r9,17,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFFFFFE;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// andc r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stbx r10,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u8);
	// bl 0x899855e8
	ctx.lr = 0x89987554;
	sub_899855E8(ctx, base);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r7,r28,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x89989840
	if (!ctx.cr6.eq) goto loc_89989840;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x8991b770
	ctx.lr = 0x89987578;
	sub_8991B770(ctx, base);
	// lhzx r6,r29,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// li r7,6
	ctx.r7.s64 = 6;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// stbx r7,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899875A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899875B0;
	sub_8991BA70(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x899875C8;
	sub_899855E8(ctx, base);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x89987650
	if (ctx.cr6.gt) goto loc_89987650;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8998762c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998762C;
	// bdzf 4*cr6+eq,0x899876ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899876EC;
	// bdzf 4*cr6+eq,0x8998772c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998772C;
	// bdzf 4*cr6+eq,0x8998775c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998775C;
	// bdzf 4*cr6+eq,0x89987778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89987778;
	// bne cr6,0x899877b4
	if (!ctx.cr6.eq) goto loc_899877B4;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// oris r8,r10,16384
	ctx.r8.u64 = ctx.r10.u64 | 1073741824;
	// stbx r9,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998762C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998763C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89987650
	if (ctx.cr6.eq) goto loc_89987650;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
loc_89987650:
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
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
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
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r29,r8,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r29,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r5,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899876EC:
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-56
	ctx.r5.s64 = -56;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899d0428
	ctx.lr = 0x89987704;
	sub_899D0428(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89987650
	if (ctx.cr6.eq) goto loc_89987650;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x89987650
	goto loc_89987650;
loc_8998772C:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89987650
	if (ctx.cr6.eq) goto loc_89987650;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x89987650
	goto loc_89987650;
loc_8998775C:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89987650
	if (!ctx.cr6.eq) goto loc_89987650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x89987650
	goto loc_89987650;
loc_89987778:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89987650
	if (!ctx.cr6.eq) goto loc_89987650;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89987650
	if (ctx.cr6.eq) goto loc_89987650;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u8);
	// b 0x89987650
	goto loc_89987650;
loc_899877B4:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899877D8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899877E0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x899877F8;
	sub_899855E8(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r29,r29,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r7,r7,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r5,r9,9016
	ctx.r5.s64 = ctx.r9.s64 + 9016;
	// ori r3,r8,57344
	ctx.r3.u64 = ctx.r8.u64 | 57344;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r28,r11,128
	ctx.r28.s64 = ctx.r11.s64 + 128;
	// clrlwi r27,r11,23
	ctx.r27.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lhzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r27,128
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 128, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r3,r28,r3
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r5,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwx r5,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// bge cr6,0x899878ac
	if (!ctx.cr6.lt) goto loc_899878AC;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899878AC:
	// clrlwi r9,r11,23
	ctx.r9.u64 = ctx.r11.u32 & 0x1FF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x899878c4
	if (!ctx.cr6.gt) goto loc_899878C4;
	// subfic r11,r10,768
	ctx.xer.ca = ctx.r10.u32 <= 768;
	ctx.r11.u64 = static_cast<uint64_t>(768) - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899878C4:
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// sthx r5,r7,r31
	REX_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r5.u16);
	// blt cr6,0x89987978
	if (ctx.cr6.lt) goto loc_89987978;
	// beq cr6,0x89987944
	if (ctx.cr6.eq) goto loc_89987944;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89989848
	if (!ctx.cr6.lt) goto loc_89989848;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// addi r7,r9,255
	ctx.r7.s64 = ctx.r9.s64 + 255;
	// stbx r7,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stbx r8,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r4,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987944:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987978:
	// addi r27,r30,180
	ctx.r27.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899cfa40
	ctx.lr = 0x899879B0;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r10,129
	ctx.r10.s64 = 129;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r29,r27
	REX_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899879E8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899879F0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89987A08;
	sub_899855E8(ctx, base);
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,172
	ctx.r7.s64 = ctx.r30.s64 + 172;
	// mulli r8,r29,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// srawi r6,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 18;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// rlwinm r7,r9,4,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x8;
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r5,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987AC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89987ACC;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899858d0
	ctx.lr = 0x89987AE4;
	sub_899858D0(ctx, base);
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
	// blt cr6,0x89987b9c
	if (ctx.cr6.lt) goto loc_89987B9C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
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
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r5,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r4,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
loc_89987B9C:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// mulli r29,r29,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r28,r30,192
	ctx.r28.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r28,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r9,-15696
	ctx.r11.s64 = ctx.r9.s64 + -15696;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// andc r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r11,r5,3,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x4;
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987C14;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,45
	ctx.r3.s64 = 45;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// bl 0x89936360
	ctx.lr = 0x89987C28;
	sub_89936360(ctx, base);
	// addi r11,r30,195
	ctx.r11.s64 = ctx.r30.s64 + 195;
	// lbzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stbx r10,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987C44:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89987C4C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899858d0
	ctx.lr = 0x89987C64;
	sub_899858D0(ctx, base);
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89987d04
	if (ctx.cr6.eq) goto loc_89987D04;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x89987d28
	if (!ctx.cr6.eq) goto loc_89987D28;
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
	// blt cr6,0x89987d28
	if (ctx.cr6.lt) goto loc_89987D28;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r8,-15696
	ctx.r10.s64 = ctx.r8.s64 + -15696;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// rlwinm r10,r4,3,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x4;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987CFC;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987D04:
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
	// blt cr6,0x89987dc8
	if (ctx.cr6.lt) goto loc_89987DC8;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
loc_89987D28:
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
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r29,r9,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987DC8:
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r8,r9,-15696
	ctx.r8.s64 = ctx.r9.s64 + -15696;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r11,r5,3,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x4;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987DFC;
	sub_8991B610(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// andc r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r5.u64;
	// stbx r3,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987E28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89987E30;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899858d0
	ctx.lr = 0x89987E48;
	sub_899858D0(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89987ec8
	if (ctx.cr6.eq) goto loc_89987EC8;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x89987eec
	if (!ctx.cr6.eq) goto loc_89987EEC;
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
	// blt cr6,0x89987eec
	if (ctx.cr6.lt) goto loc_89987EEC;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r8,-15696
	ctx.r10.s64 = ctx.r8.s64 + -15696;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// andc r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r6.u64;
	// rlwinm r9,r11,3,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x4;
	// lbzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987EC0;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987EC8:
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
	// blt cr6,0x89987f8c
	if (ctx.cr6.lt) goto loc_89987F8C;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
loc_89987EEC:
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
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r7,r6,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987F8C:
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r8,-15696
	ctx.r10.s64 = ctx.r8.s64 + -15696;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// andc r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r6.u64;
	// rlwinm r9,r11,3,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x4;
	// lbzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x89987FC8;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89987FD0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89987FD8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899858d0
	ctx.lr = 0x89987FF0;
	sub_899858D0(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899880c4
	if (ctx.cr6.eq) goto loc_899880C4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x89988148
	if (!ctx.cr6.eq) goto loc_89988148;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89989848
	if (ctx.cr6.gt) goto loc_89989848;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89988078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89988078;
	// bdzf 4*cr6+eq,0x89988098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89988098;
	// bne cr6,0x899880b8
	if (!ctx.cr6.eq) goto loc_899880B8;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89988044;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r8,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// sthx r6,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u16);
	// stbx r7,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988078:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988098:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899880B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x89988168
	goto loc_89988168;
loc_899880C4:
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
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
	// blt cr6,0x8998810c
	if (ctx.cr6.lt) goto loc_8998810C;
	// beq cr6,0x89988168
	if (ctx.cr6.eq) goto loc_89988168;
	// b 0x89988148
	goto loc_89988148;
loc_8998810C:
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r9,-15696
	ctx.r11.s64 = ctx.r9.s64 + -15696;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// rlwinm r10,r4,3,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x4;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89988148;
	sub_8991B610(ctx, base);
loc_89988148:
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
loc_89988168:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
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
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r4,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988208:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89988210;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899856c8
	ctx.lr = 0x89988228;
	sub_899856C8(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x899882f0
	if (ctx.cr6.eq) goto loc_899882F0;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// beq cr6,0x89988258
	if (ctx.cr6.eq) goto loc_89988258;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// b 0x89988324
	goto loc_89988324;
loc_89988258:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r30,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r5,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899882F0:
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// blt cr6,0x8998983c
	if (ctx.cr6.lt) goto loc_8998983C;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bgt cr6,0x8998983c
	if (ctx.cr6.gt) goto loc_8998983C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bne cr6,0x89988368
	if (!ctx.cr6.eq) goto loc_89988368;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x89988368
	if (!ctx.cr6.gt) goto loc_89988368;
loc_89988324:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,32
	ctx.r9.s64 = 32;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89988340;
	sub_8991B610(ctx, base);
	// addi r8,r30,162
	ctx.r8.s64 = ctx.r30.s64 + 162;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// addi r6,r30,189
	ctx.r6.s64 = ctx.r30.s64 + 189;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// sthx r11,r8,r31
	REX_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u16);
	// sthx r11,r7,r31
	REX_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u16);
	// stbx r5,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988368:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r5,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899883F8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89988400;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899856c8
	ctx.lr = 0x89988418;
	sub_899856C8(ctx, base);
	// mulli r29,r29,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89988598
	if (ctx.cr6.gt) goto loc_89988598;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89988454
	if (ctx.cr6.eq) goto loc_89988454;
	// bdz 0x89988454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89988454;
	// bdz 0x899885a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899885A4;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899885a4
	if (ctx.cr6.eq) goto loc_899885A4;
loc_89988454:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8998850c
	if (ctx.cr6.lt) goto loc_8998850C;
	// beq cr6,0x899884cc
	if (ctx.cr6.eq) goto loc_899884CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89988578
	if (!ctx.cr6.lt) goto loc_89988578;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,7
	ctx.r9.s64 = 7;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998849C;
	sub_8991B610(ctx, base);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r7.u8);
	// lbzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,189
	ctx.r11.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899884CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899859b8
	ctx.lr = 0x899884D4;
	sub_899859B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89988578
	if (ctx.cr6.eq) goto loc_89988578;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// stbx r7,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r8,r30,162
	ctx.r8.s64 = ctx.r30.s64 + 162;
	// stbx r6,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r6.u8);
	// lhzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// sthx r4,r29,r8
	REX_STORE_U16(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998850C:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lhzx r8,r29,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8998854c
	if (!ctx.cr6.gt) goto loc_8998854C;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
loc_8998854C:
	// lhzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x89988578
	if (!ctx.cr6.lt) goto loc_89988578;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
loc_89988578:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// sthx r9,r29,r10
	REX_STORE_U16(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x8991b7f8
	ctx.lr = 0x89988590;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988598:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899885A4:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,7
	ctx.r9.s64 = 7;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899885C0;
	sub_8991B610(ctx, base);
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r29,r8
	REX_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899885D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899885DC;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899856c8
	ctx.lr = 0x899885F4;
	sub_899856C8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8998861c
	if (!ctx.cr6.eq) goto loc_8998861C;
loc_89988600:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,162
	ctx.r9.s64 = ctx.r30.s64 + 162;
	// li r11,256
	ctx.r11.s64 = 256;
	// sthx r11,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u16);
	// sthx r11,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998861C:
	// addi r7,r30,189
	ctx.r7.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89988684
	if (ctx.cr6.lt) goto loc_89988684;
	// beq cr6,0x89988654
	if (ctx.cr6.eq) goto loc_89988654;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899886f4
	if (!ctx.cr6.lt) goto loc_899886F4;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899886f4
	if (!ctx.cr6.eq) goto loc_899886F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r7,r31
	REX_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x899886f4
	goto loc_899886F4;
loc_89988654:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899859b8
	ctx.lr = 0x8998865C;
	sub_899859B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899886f4
	if (ctx.cr6.eq) goto loc_899886F4;
	// lbzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r8,r7,r31
	REX_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r6,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x899886f4
	goto loc_899886F4;
loc_89988684:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lhzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x899886c8
	if (!ctx.cr6.gt) goto loc_899886C8;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_899886C8:
	// lhzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x899886f4
	if (!ctx.cr6.lt) goto loc_899886F4;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
loc_899886F4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r30,162
	ctx.r8.s64 = ctx.r30.s64 + 162;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sthx r9,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// bl 0x8991b7f8
	ctx.lr = 0x89988710;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988718:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89988720;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899856c8
	ctx.lr = 0x89988738;
	sub_899856C8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89988600
	if (ctx.cr6.eq) goto loc_89988600;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899887cc
	if (ctx.cr6.lt) goto loc_899887CC;
	// beq cr6,0x8998879c
	if (ctx.cr6.eq) goto loc_8998879C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89988848
	if (!ctx.cr6.lt) goto loc_89988848;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89988848
	if (!ctx.cr6.eq) goto loc_89988848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x89988848
	goto loc_89988848;
loc_8998879C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899859b8
	ctx.lr = 0x899887A4;
	sub_899859B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89988848
	if (ctx.cr6.eq) goto loc_89988848;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stbx r8,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x89988848
	goto loc_89988848;
loc_899887CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899887D4;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899887E0;
	sub_89932D30(ctx, base);
	// mulli r9,r28,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8998880c
	if (!ctx.cr6.gt) goto loc_8998880C;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8998880C:
	// lhzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8998882c
	if (!ctx.cr6.lt) goto loc_8998882C;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8998882C:
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89988848
	if (ctx.cr6.eq) goto loc_89988848;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
loc_89988848:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lhzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,162
	ctx.r9.s64 = ctx.r30.s64 + 162;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x89988910
	if (ctx.cr6.eq) goto loc_89988910;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x89988918
	if (!ctx.cr6.eq) goto loc_89988918;
	// lhzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// subfic r5,r8,4
	ctx.xer.ca = ctx.r8.u32 <= 4;
	ctx.r5.u64 = static_cast<uint64_t>(4) - ctx.r8.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// clrlwi r9,r3,26
	ctx.r9.u64 = ctx.r3.u32 & 0x3F;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
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
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// b 0x89988918
	goto loc_89988918;
loc_89988910:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x89988918;
	sub_8991B7F8(ctx, base);
loc_89988918:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89988928;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// lhzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ori r3,r9,40960
	ctx.r3.u64 = ctx.r9.u64 | 40960;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// rlwinm r4,r7,0,23,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// ori r6,r6,27648
	ctx.r6.u64 = ctx.r6.u64 | 27648;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lis r30,-30296
	ctx.r30.s64 = -1985478656;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// lwzx r5,r7,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mullw r3,r9,r3
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r30,-27144
	ctx.r8.s64 = ctx.r30.s64 + -27144;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899ccea0
	ctx.lr = 0x899889B8;
	sub_899CCEA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899889C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899889C8;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x899889E0;
	sub_899855E8(ctx, base);
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89988a18
	if (ctx.cr6.lt) goto loc_89988A18;
	// bne cr6,0x89988a48
	if (!ctx.cr6.eq) goto loc_89988A48;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
	// cmpwi cr6,r6,2560
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2560, ctx.xer);
	// bne cr6,0x89988a48
	if (!ctx.cr6.eq) goto loc_89988A48;
	// b 0x89988a3c
	goto loc_89988A3C;
loc_89988A18:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x89988a48
	if (!ctx.cr6.eq) goto loc_89988A48;
	// addi r8,r30,191
	ctx.r8.s64 = ctx.r30.s64 + 191;
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89988a48
	if (ctx.cr6.eq) goto loc_89988A48;
loc_89988A3C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89988A48:
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lhzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// sthx r7,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// srawi r9,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 9;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
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
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r3,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988B04:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89988B0C;
	sub_8991BA70(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89988B24;
	sub_899855E8(ctx, base);
	// mulli r6,r29,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89988b40
	if (ctx.cr6.eq) goto loc_89988B40;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
loc_89988B40:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89988c34
	if (ctx.cr6.eq) goto loc_89988C34;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x89988b8c
	if (ctx.cr6.eq) goto loc_89988B8C;
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
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x89988c74
	goto loc_89988C74;
loc_89988B8C:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89988bbc
	if (!ctx.cr6.eq) goto loc_89988BBC;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x89988c74
	goto loc_89988C74;
loc_89988BBC:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89988BCC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// addi r10,r10,-15580
	ctx.r10.s64 = ctx.r10.s64 + -15580;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r7,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x4;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// li r3,18
	ctx.r3.s64 = 18;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899ce510
	ctx.lr = 0x89988C2C;
	sub_899CE510(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988C34:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// li r7,1
	ctx.r7.s64 = 1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// lbzx r4,r6,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stbx r3,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u8);
loc_89988C74:
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
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r28,r8,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r4,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,195
	ctx.r11.s64 = ctx.r30.s64 + 195;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stbx r4,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988D3C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89988D44;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89988D5C;
	sub_899855E8(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r8,r8,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89988e40
	if (ctx.cr6.eq) goto loc_89988E40;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x89988dbc
	if (ctx.cr6.eq) goto loc_89988DBC;
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89988e74
	goto loc_89988E74;
loc_89988DBC:
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89988e00
	if (ctx.cr6.lt) goto loc_89988E00;
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r10,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u8);
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// b 0x89988e74
	goto loc_89988E74;
loc_89988E00:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r3,r7,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u8);
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988E40:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,44
	ctx.r3.s64 = 44;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// bl 0x89936360
	ctx.lr = 0x89988E74;
	sub_89936360(ctx, base);
loc_89988E74:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
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
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988F14:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89988F1C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89988F34;
	sub_899855E8(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mulli r7,r29,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// beq cr6,0x89988fdc
	if (ctx.cr6.eq) goto loc_89988FDC;
	// rlwinm r8,r11,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,192(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89988FDC:
	// oris r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 1073741824;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r4,r5,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// lhzx r3,r4,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899890b0
	if (ctx.cr6.lt) goto loc_899890B0;
	// bne cr6,0x89989244
	if (!ctx.cr6.eq) goto loc_89989244;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r6,r10,23
	ctx.r6.u64 = ctx.r10.u32 & 0x1FF;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_89989034:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// ble cr6,0x89989050
	if (!ctx.cr6.gt) goto loc_89989050;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_89989050:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bge cr6,0x8998906c
	if (!ctx.cr6.lt) goto loc_8998906C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_8998906C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89989034
	if (ctx.cr6.lt) goto loc_89989034;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x89989244
	if (!ctx.cr6.eq) goto loc_89989244;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r28,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u8);
	// bl 0x8991b770
	ctx.lr = 0x899890A8;
	sub_8991B770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899890B0:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r7,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899890dc
	if (ctx.cr6.eq) goto loc_899890DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899890D4;
	sub_8991B770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899890DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899890E4;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899890F0;
	sub_89932D30(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89989100;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989244
	if (ctx.cr6.eq) goto loc_89989244;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// addi r27,r7,9016
	ctx.r27.s64 = ctx.r7.s64 + 9016;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r3,r4,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// rlwinm r4,r8,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r9,r5,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lhzx r7,r4,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r9,r8,49152
	ctx.r9.u64 = ctx.r8.u64 | 49152;
	// rlwinm r11,r6,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// ori r4,r4,34816
	ctx.r4.u64 = ctx.r4.u64 | 34816;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r5,r28,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// addi r3,r7,-8
	ctx.r3.s64 = ctx.r7.s64 + -8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x899a8438
	ctx.lr = 0x899891D8;
	sub_899A8438(ctx, base);
	// addi r11,r29,256
	ctx.r11.s64 = ctx.r29.s64 + 256;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r5,r28,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// ori r4,r9,6144
	ctx.r4.u64 = ctx.r9.u64 | 6144;
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r7,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r8,r8,-27176
	ctx.r8.s64 = ctx.r8.s64 + -27176;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// lhzx r31,r11,r27
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r31,r4
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
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
	// bl 0x899cc518
	ctx.lr = 0x89989244;
	sub_899CC518(ctx, base);
loc_89989244:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x8998924C;
	sub_8991B770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89989254:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998925C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x89989274;
	sub_899855E8(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// oris r8,r10,16384
	ctx.r8.u64 = ctx.r10.u64 | 1073741824;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899893a8
	if (ctx.cr6.eq) goto loc_899893A8;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x899892f4
	if (ctx.cr6.eq) goto loc_899892F4;
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899893d0
	goto loc_899893D0;
loc_899892F4:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89989310
	if (!ctx.cr6.eq) goto loc_89989310;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x899893c8
	goto loc_899893C8;
loc_89989310:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89989320;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// lis r25,8
	ctx.r25.s64 = 524288;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r26,r11,-25696
	ctx.r26.s64 = ctx.r11.s64 + -25696;
	// clrlwi r28,r6,30
	ctx.r28.u64 = ctx.r6.u32 & 0x3;
loc_89989364:
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm r7,r9,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// li r6,256
	ctx.r6.s64 = 256;
	// subf r4,r25,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r25.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899cba78
	ctx.lr = 0x8998938C;
	sub_899CBA78(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x89989364
	if (ctx.cr6.lt) goto loc_89989364;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899893A8:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899893C4;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_899893C8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899893D0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
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
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
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
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998946C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89989474;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x8998948C;
	sub_899855E8(ctx, base);
	// mulli r4,r29,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x89986118
	if (ctx.cr6.eq) goto loc_89986118;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8998952c
	if (ctx.cr6.eq) goto loc_8998952C;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x89989504
	if (ctx.cr6.eq) goto loc_89989504;
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x89989558
	goto loc_89989558;
loc_89989504:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x89989550
	goto loc_89989550;
loc_8998952C:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
	// li r9,1
	ctx.r9.s64 = 1;
loc_89989550:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
loc_89989558:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
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
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r26,r5,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r26,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r26.u32);
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r8,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r8.u32);
	// beq cr6,0x89989604
	if (ctx.cr6.eq) goto loc_89989604;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x89989848
	if (!ctx.cr6.eq) goto loc_89989848;
loc_89989604:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stbx r5,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998962C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89989634;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x8998611c
	if (ctx.cr6.lt) goto loc_8998611C;
	// bl 0x899855e8
	ctx.lr = 0x8998964C;
	sub_899855E8(ctx, base);
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8998983c
	if (!ctx.cr6.eq) goto loc_8998983C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89989788
	if (ctx.cr6.eq) goto loc_89989788;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// ble cr6,0x89989760
	if (!ctx.cr6.gt) goto loc_89989760;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bgt cr6,0x89989760
	if (ctx.cr6.gt) goto loc_89989760;
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,-15572
	ctx.r9.s64 = ctx.r9.s64 + -15572;
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lbz r9,-16(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + -16);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89989760:
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
	// blt cr6,0x89989848
	if (ctx.cr6.lt) goto loc_89989848;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x899897a8
	goto loc_899897A8;
loc_89989788:
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89989848
	if (ctx.cr6.eq) goto loc_89989848;
loc_899897A8:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
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
	// lwzx r29,r8,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8998983C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
loc_89989840:
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_89989848:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B4E48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899B4E50;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// addi r26,r11,27276
	ctx.r26.s64 = ctx.r11.s64 + 27276;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r10,-1344
	ctx.r30.s64 = ctx.r10.s64 + -1344;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r26,60
	ctx.r9.s64 = ctx.r26.s64 + 60;
	// addi r10,r30,1560
	ctx.r10.s64 = ctx.r30.s64 + 1560;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r27,r8,3484
	ctx.r27.s64 = ctx.r8.s64 + 3484;
loc_899B4E7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r27,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// blt cr6,0x899b4e7c
	if (ctx.cr6.lt) goto loc_899B4E7C;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r9,r26,196
	ctx.r9.s64 = ctx.r26.s64 + 196;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// addi r11,r30,2096
	ctx.r11.s64 = ctx.r30.s64 + 2096;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_899B4EB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
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
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// blt cr6,0x899b4eb8
	if (ctx.cr6.lt) goto loc_899B4EB8;
	// addi r6,r26,476
	ctx.r6.s64 = ctx.r26.s64 + 476;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r5,r26,356
	ctx.r5.s64 = ctx.r26.s64 + 356;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r4,r30,1680
	ctx.r4.s64 = ctx.r30.s64 + 1680;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x89935688
	ctx.lr = 0x899B4F00;
	sub_89935688(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r30,1840
	ctx.r11.s64 = ctx.r30.s64 + 1840;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r10,216
	ctx.r10.s64 = 216;
	// li r9,-36
	ctx.r9.s64 = -36;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x899B4F38;
	sub_89934B48(ctx, base);
	// addi r6,r26,-272
	ctx.r6.s64 = ctx.r26.s64 + -272;
	// addi r5,r30,1840
	ctx.r5.s64 = ctx.r30.s64 + 1840;
	// addi r4,r30,1984
	ctx.r4.s64 = ctx.r30.s64 + 1984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899B4F50;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r10,r11,-3328
	ctx.r10.s64 = ctx.r11.s64 + -3328;
	// lbz r11,-3328(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -3328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b4fe8
	if (ctx.cr6.eq) goto loc_899B4FE8;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899B4F6C:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r3,3(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// addi r4,r30,-1776
	ctx.r4.s64 = ctx.r30.s64 + -1776;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbzu r8,7(r31)
	ea = 7 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899B4FC8;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r25,r10
	ctx.r7.u64 = ctx.r25.u64 + ctx.r10.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b4f6c
	if (!ctx.cr6.eq) goto loc_899B4F6C;
loc_899B4FE8:
	// addi r9,r30,-1776
	ctx.r9.s64 = ctx.r30.s64 + -1776;
	// addi r10,r30,-1520
	ctx.r10.s64 = ctx.r30.s64 + -1520;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_899B4FF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r27,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x899b4ff4
	if (ctx.cr6.lt) goto loc_899B4FF4;
	// addi r9,r30,-1776
	ctx.r9.s64 = ctx.r30.s64 + -1776;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// addi r11,r30,-112
	ctx.r11.s64 = ctx.r30.s64 + -112;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_899B5034:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
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
	// blt cr6,0x899b5034
	if (ctx.cr6.lt) goto loc_899B5034;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r10,r10,-3280
	ctx.r10.s64 = ctx.r10.s64 + -3280;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b5104
	if (ctx.cr6.eq) goto loc_899B5104;
	// addi r31,r10,-10
	ctx.r31.s64 = ctx.r10.s64 + -10;
loc_899B5080:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r3,18(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// lbz r8,19(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// addi r4,r30,-1304
	ctx.r4.s64 = ctx.r30.s64 + -1304;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r27,11(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,13(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r25,r8,16
	ctx.r25.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r8,15(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// add r24,r10,r4
	ctx.r24.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// sth r25,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// bl 0x89934b48
	ctx.lr = 0x899B50E0;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b5080
	if (!ctx.cr6.eq) goto loc_899B5080;
loc_899B5104:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_899B5108:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-1304
	ctx.r10.s64 = ctx.r30.s64 + -1304;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r9,r31,594
	ctx.r9.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(594));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r8,r31,780
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899B5138;
	sub_89935B08(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899b5108
	if (ctx.cr6.lt) goto loc_899B5108;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B78B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899B78C0;
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
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r29,r11,188
	ctx.r29.s64 = ctx.r11.s64 + 188;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// lbzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899b79c4
	if (!ctx.cr6.eq) goto loc_899B79C4;
	// lbz r11,183(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 183);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,183(r31)
	REX_STORE_U8(ctx.r31.u32 + 183, ctx.r10.u8);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x899b79b8
	if (ctx.cr6.eq) goto loc_899B79B8;
	// bl 0x89932b18
	ctx.lr = 0x899B7910;
	sub_89932B18(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhz r9,158(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r8,r10,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x899B7944;
	sub_89932C20(ctx, base);
	// subf r4,r3,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r3.u64;
	// clrlwi r11,r4,23
	ctx.r11.u64 = ctx.r4.u32 & 0x1FF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x899b79b8
	if (ctx.cr6.lt) goto loc_899B79B8;
	// cmpwi cr6,r11,508
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 508, ctx.xer);
	// bgt cr6,0x899b79b8
	if (ctx.cr6.gt) goto loc_899B79B8;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// bgt cr6,0x899b796c
	if (ctx.cr6.gt) goto loc_899B796C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
loc_899B796C:
	// sth r11,158(r31)
	REX_STORE_U16(ctx.r31.u32 + 158, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// rlwinm r7,r10,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r8,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r7,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// lhzx r4,r6,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// b 0x899b79c4
	goto loc_899B79C4;
loc_899B79B8:
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u8);
loc_899B79C4:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899b79e4
	if (!ctx.cr0.lt) goto loc_899B79E4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899B79E4:
	// lis r11,172
	ctx.r11.s64 = 11272192;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899b7a00
	if (!ctx.cr6.gt) goto loc_899B7A00;
loc_899B79F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B7A00:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899b7a2c
	if (!ctx.cr0.lt) goto loc_899B7A2C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899B7A2C:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b79f0
	if (ctx.cr6.gt) goto loc_899B79F0;
	// lbz r11,182(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 182);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r10,182(r31)
	REX_STORE_U8(ctx.r31.u32 + 182, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b7a6c
	if (ctx.cr6.eq) goto loc_899B7A6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r9,r10,-2384
	ctx.r9.s64 = ctx.r10.s64 + -2384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_899B7A6C:
	// lhz r11,158(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B7A8C;
	sub_8991B610(ctx, base);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r6,20077
	ctx.r10.u64 = ctx.r6.u64 | 20077;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// ori r8,r8,16576
	ctx.r8.u64 = ctx.r8.u64 | 16576;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// lwz r7,168(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lhz r6,158(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r11,248
	ctx.r7.s64 = ctx.r11.s64 + 248;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
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
	ctx.lr = 0x899B7B44;
	sub_899D79F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B9650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899B9658;
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
	// mulli r23,r10,208
	ctx.r23.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r30,r23,r31
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r23,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// lwzx r26,r23,r24
	ctx.r26.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwzx r29,r23,r8
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// lbzx r28,r23,r7
	ctx.r28.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r7.u32);
	// lbzx r27,r23,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bgt cr6,0x899b97bc
	if (ctx.cr6.gt) goto loc_899B97BC;
	// lis r12,-30308
	ctx.r12.s64 = -1986265088;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26948
	ctx.r12.s64 = ctx.r12.s64 + -26948;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B9798;
	case 1:
		goto loc_899B97BC;
	case 2:
		goto loc_899B9B9C;
	case 3:
		goto loc_899B9B9C;
	case 4:
		goto loc_899B9774;
	case 5:
		goto loc_899B97CC;
	case 6:
		goto loc_899B9928;
	case 7:
		goto loc_899B9AD0;
	case 8:
		goto loc_899B9774;
	case 9:
		goto loc_899B97BC;
	case 10:
		goto loc_899B9978;
	case 11:
		goto loc_899B9774;
	case 12:
		goto loc_899B9774;
	case 13:
		goto loc_899B9C44;
	case 14:
		goto loc_899B9C94;
	case 15:
		goto loc_899B9B4C;
	case 16:
		goto loc_899B9C00;
	case 17:
		goto loc_899B9C00;
	case 18:
		goto loc_899B9B4C;
	case 19:
		goto loc_899B97BC;
	case 20:
		goto loc_899B97BC;
	case 21:
		goto loc_899B97BC;
	case 22:
		goto loc_899B97BC;
	case 23:
		goto loc_899B9AFC;
	case 24:
		goto loc_899B9AFC;
	case 25:
		goto loc_899B9B4C;
	case 26:
		goto loc_899B9B4C;
	case 27:
		goto loc_899B9928;
	case 28:
		goto loc_899B9928;
	case 29:
		goto loc_899B97BC;
	case 30:
		goto loc_899B97BC;
	case 31:
		goto loc_899B97BC;
	case 32:
		goto loc_899B97BC;
	case 33:
		goto loc_899B9D38;
	case 34:
		goto loc_899B9D38;
	case 35:
		goto loc_899B99E4;
	case 36:
		goto loc_899B99E4;
	case 37:
		goto loc_899B9C2C;
	case 38:
		goto loc_899B9BB4;
	case 39:
		goto loc_899B981C;
	case 40:
		goto loc_899B98A4;
	case 41:
		goto loc_899B9A94;
	case 42:
		goto loc_899B9A94;
	case 43:
		goto loc_899B9CE4;
	case 44:
		goto loc_899B9B4C;
	case 45:
		goto loc_899B9B4C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B9774:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9778;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// lwzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r10,r11,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r10,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9798:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,15
	ctx.r4.s64 = 15;
loc_899B97B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B97BC;
	sub_899D4440(ctx, base);
loc_899B97BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B97CC:
	// bl 0x8991b9f0
	ctx.lr = 0x899B97D0;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B97F8;
	sub_899D4440(ctx, base);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// mulli r10,r25,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B981C:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9820;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B984C;
	sub_899D4440(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,206
	ctx.r10.s64 = ctx.r31.s64 + 206;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r23,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r5,r23,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lwzx r4,r23,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// addis r30,r8,-4
	ctx.r30.s64 = ctx.r8.s64 + -262144;
	// bl 0x8992c368
	ctx.lr = 0x899B9870;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b97bc
	if (ctx.cr6.eq) goto loc_899B97BC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8992e490
	ctx.lr = 0x899B9894;
	sub_8992E490(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B98A4:
	// bl 0x8991b9f0
	ctx.lr = 0x899B98A8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B98D4;
	sub_899D4440(ctx, base);
	// addi r11,r31,206
	ctx.r11.s64 = ctx.r31.s64 + 206;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r5,r23,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r4,r23,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// lwzx r30,r23,r9
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// bl 0x8992c368
	ctx.lr = 0x899B98F4;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b97bc
	if (ctx.cr6.eq) goto loc_899B97BC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8992e490
	ctx.lr = 0x899B9918;
	sub_8992E490(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9928:
	// bl 0x8991b9f0
	ctx.lr = 0x899B992C;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9954;
	sub_899D4C10(ctx, base);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// mulli r10,r25,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9978:
	// bl 0x8991b9f0
	ctx.lr = 0x899B997C;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B99A4;
	sub_899D4C10(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// lhzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mulli r8,r6,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// lbzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B99E4:
	// bl 0x8991b9f0
	ctx.lr = 0x899B99E8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x899b9a24
	if (!ctx.cr6.eq) goto loc_899B9A24;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_899B9A24:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,206
	ctx.r10.s64 = ctx.r31.s64 + 206;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r23,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r4,r23,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lwzx r25,r23,r9
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// addis r24,r8,-8
	ctx.r24.s64 = ctx.r8.s64 + -524288;
	// bl 0x8992c368
	ctx.lr = 0x899B9A48;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b9a68
	if (ctx.cr6.eq) goto loc_899B9A68;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992e490
	ctx.lr = 0x899B9A68;
	sub_8992E490(ctx, base);
loc_899B9A68:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9A84;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9A94:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9A98;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x899b9ad0
	if (!ctx.cr6.eq) goto loc_899B9AD0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_899B9AD0:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9AEC;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9AFC:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9B00;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9B28;
	sub_899D4C10(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9B4C:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9B50;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9B78;
	sub_899D4C10(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9B9C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x899b97b4
	goto loc_899B97B4;
loc_899B9BB4:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9BB8;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9BE0;
	sub_899D4C10(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9C00:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9C1C;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9C2C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x899b97b4
	goto loc_899B97B4;
loc_899B9C44:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9C48;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B9C70;
	sub_899D4440(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9C94:
	// bl 0x8991b9f0
	ctx.lr = 0x899B9C98;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x899b97bc
	if (ctx.cr6.lt) goto loc_899B97BC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B9CC0;
	sub_899D4440(ctx, base);
	// mulli r11,r25,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9CE4:
	// rlwinm r11,r30,0,10,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x300000;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899b9d0c
	if (ctx.cr6.lt) goto loc_899B9D0C;
	// bne cr6,0x899b97bc
	if (!ctx.cr6.eq) goto loc_899B97BC;
	// rlwinm r11,r30,0,12,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9D0C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B9D28;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B9D38:
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
loc_899B9D48:
	// lhzu r11,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B9D70;
	sub_899D4440(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x899b9d48
	if (!ctx.cr0.eq) goto loc_899B9D48;
	// lwzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lis r9,96
	ctx.r9.s64 = 6291456;
	// rlwinm r8,r11,0,12,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// ori r7,r9,24672
	ctx.r7.u64 = ctx.r9.u64 | 24672;
	// rlwinm r8,r8,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r7,r23,r10
	REX_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r7.u32);
	// stwx r8,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C0D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899C0D18;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899C0D30;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x899c0fb0
	if (ctx.cr6.eq) goto loc_899C0FB0;
	// bl 0x8991f608
	ctx.lr = 0x899C0D40;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899c0d58
	if (!ctx.cr6.eq) goto loc_899C0D58;
loc_899C0D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899C0D58:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r25,r11,-4592
	ctx.r25.s64 = ctx.r11.s64 + -4592;
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// bl 0x8991b880
	ctx.lr = 0x899C0D6C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0d4c
	if (ctx.cr6.eq) goto loc_899C0D4C;
	// lhz r27,0(r25)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
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
	// li r18,0
	ctx.r18.s64 = 0;
	// ori r5,r10,260
	ctx.r5.u64 = ctx.r10.u64 | 260;
	// clrlwi r21,r28,16
	ctx.r21.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r18,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r18.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r18,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r18.u32);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r21,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r21.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C0DBC;
	sub_8991B538(ctx, base);
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// addi r23,r31,52
	ctx.r23.s64 = ctx.r31.s64 + 52;
	// lis r4,576
	ctx.r4.s64 = 37748736;
	// rlwinm r11,r26,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r4,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r4.u32);
	// stwx r11,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r11.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C0DDC;
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
	// addi r20,r31,204
	ctx.r20.s64 = ctx.r31.s64 + 204;
	// addi r19,r31,200
	ctx.r19.s64 = ctx.r31.s64 + 200;
	// sthx r10,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u16);
	// extsh r26,r29
	ctx.r26.s64 = ctx.r29.s16;
	// sthx r10,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u16);
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// li r11,116
	ctx.r11.s64 = 116;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r11,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r11.u8);
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// stwx r4,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stwx r26,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r26.u32);
	// stbx r3,r26,r8
	REX_STORE_U8(ctx.r26.u32 + ctx.r8.u32, ctx.r3.u8);
	// lis r17,39
	ctx.r17.s64 = 2555904;
	// ori r22,r9,256
	ctx.r22.u64 = ctx.r9.u64 | 256;
	// addi r29,r10,1960
	ctx.r29.s64 = ctx.r10.s64 + 1960;
loc_899C0E48:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r16,r28,4,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
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
	// lhzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// stwx r21,r14,r3
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, ctx.r21.u32);
	// sthx r27,r14,r5
	REX_STORE_U16(ctx.r14.u32 + ctx.r5.u32, ctx.r27.u16);
	// sthx r8,r14,r7
	REX_STORE_U16(ctx.r14.u32 + ctx.r7.u32, ctx.r8.u16);
	// or r7,r4,r22
	ctx.r7.u64 = ctx.r4.u64 | ctx.r22.u64;
	// stwx r10,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r18,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r18.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stwx r7,r14,r31
	REX_STORE_U32(ctx.r14.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C0EBC;
	sub_8991B538(ctx, base);
	// lwzx r9,r30,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
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
	// lwzx r8,r30,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// stwx r8,r14,r5
	REX_STORE_U32(ctx.r14.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r10,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r17,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r17.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C0EF0;
	sub_8991C578(ctx, base);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r5,r29,14
	ctx.r5.s64 = ctx.r29.s64 + 14;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// lhzx r10,r16,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r6.u32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// lbzx r8,r16,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r5.u32);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r16,r11,16
	ctx.r16.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r16,12
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 12, ctx.xer);
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r5,r14,r3
	REX_STORE_U8(ctx.r14.u32 + ctx.r3.u32, ctx.r5.u8);
	// stbx r7,r14,r4
	REX_STORE_U8(ctx.r14.u32 + ctx.r4.u32, ctx.r7.u8);
	// lbzx r5,r30,r19
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// stbx r5,r14,r9
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r8,r14,r6
	REX_STORE_U8(ctx.r14.u32 + ctx.r6.u32, ctx.r8.u8);
	// lbzx r4,r30,r20
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// stbx r4,r14,r10
	REX_STORE_U8(ctx.r14.u32 + ctx.r10.u32, ctx.r4.u8);
	// stwx r26,r14,r28
	REX_STORE_U32(ctx.r14.u32 + ctx.r28.u32, ctx.r26.u32);
	// blt cr6,0x899c0e48
	if (ctx.cr6.lt) goto loc_899C0E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r26,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 9) & 0xFFFFFE00;
	// lhzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r11,r11,12032
	ctx.r11.s64 = ctx.r11.s64 + 12032;
loc_899C0F70:
	// lhzx r8,r30,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r24.u32);
	// add r7,r10,r18
	ctx.r7.u64 = ctx.r10.u64 + ctx.r18.u64;
	// lhzx r6,r30,r23
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// addi r5,r18,1
	ctx.r5.s64 = ctx.r18.s64 + 1;
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
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stwx r5,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u32);
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// stwx r9,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x899c0f70
	if (ctx.cr6.lt) goto loc_899C0F70;
	// li r3,1
	ctx.r3.s64 = 1;
loc_899C0FB0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C23E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899C23F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x8991bc58
	ctx.lr = 0x899C23FC;
	sub_8991BC58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c2590
	if (ctx.cr6.eq) goto loc_899C2590;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C2418;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c2590
	if (ctx.cr6.eq) goto loc_899C2590;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r15
	ctx.r10.s64 = ctx.r15.s16;
	// addi r28,r11,12800
	ctx.r28.s64 = ctx.r11.s64 + 12800;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r28,158
	ctx.r9.s64 = ctx.r28.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lhzx r19,r29,r9
	ctx.r19.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r21,r28,200
	ctx.r21.s64 = ctx.r28.s64 + 200;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r19,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0x3FE;
	// lwz r17,-21584(r9)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// extsh r23,r19
	ctx.r23.s64 = ctx.r19.s16;
	// ori r30,r8,57344
	ctx.r30.u64 = ctx.r8.u64 | 57344;
	// lis r20,1
	ctx.r20.s64 = 65536;
	// lis r14,320
	ctx.r14.s64 = 20971520;
	// lis r16,120
	ctx.r16.s64 = 7864320;
	// addi r24,r10,2296
	ctx.r24.s64 = ctx.r10.s64 + 2296;
loc_899C2478:
	// addi r10,r23,128
	ctx.r10.s64 = ctx.r23.s64 + 128;
	// lhzx r8,r22,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r27.u32);
	// addi r7,r28,48
	ctx.r7.s64 = ctx.r28.s64 + 48;
	// lwzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lbzx r5,r29,r21
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r21.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r10,r28,52
	ctx.r10.s64 = ctx.r28.s64 + 52;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r31,r29,r7
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lhzx r8,r6,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwzx r4,r29,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// mullw r10,r7,r30
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r7,r6,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mullw r6,r3,r30
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mulli r3,r7,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(224));
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r25,r9,r20
	ctx.r25.u64 = ctx.r9.u64 + ctx.r20.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899C24F0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c2570
	if (ctx.cr6.eq) goto loc_899C2570;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C2504;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c2570
	if (!ctx.cr6.eq) goto loc_899C2570;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899c2548
	if (ctx.cr6.lt) goto loc_899C2548;
	// cmpw cr6,r25,r14
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r14.s32, ctx.xer);
	// bgt cr6,0x899c2548
	if (ctx.cr6.gt) goto loc_899C2548;
	// subf r11,r17,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r17.u64;
	// subf. r10,r16,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899c2530
	if (!ctx.cr0.lt) goto loc_899C2530;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899C2530:
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
	// b 0x899c254c
	goto loc_899C254C;
loc_899C2548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899C254C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c2570
	if (ctx.cr6.eq) goto loc_899C2570;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc2e0
	ctx.lr = 0x899C2570;
	sub_899CC2E0(ctx, base);
loc_899C2570:
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
	// blt cr6,0x899c2478
	if (ctx.cr6.lt) goto loc_899C2478;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C2590;
	sub_89932A38(ctx, base);
loc_899C2590:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3368) {
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
	// b 0x899c3108
	sub_899C3108(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C36C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C36C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8991bc58
	ctx.lr = 0x899C36D4;
	sub_8991BC58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c38bc
	if (ctx.cr6.eq) goto loc_899C38BC;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r29,184
	ctx.r30.s64 = ctx.r29.s64 + 184;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899c3728
	if (ctx.cr6.eq) goto loc_899C3728;
	// addi r11,r29,183
	ctx.r11.s64 = ctx.r29.s64 + 183;
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
	// blt cr6,0x899c38bc
	if (ctx.cr6.lt) goto loc_899C38BC;
	// stbx r26,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x899c3758
	goto loc_899C3758;
loc_899C3728:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C3738;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c38bc
	if (ctx.cr6.eq) goto loc_899C38BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C3748;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c38bc
	if (ctx.cr6.eq) goto loc_899C38BC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
loc_899C3758:
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r29,158
	ctx.r9.s64 = ctx.r29.s64 + 158;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// addi r10,r8,2380
	ctx.r10.s64 = ctx.r8.s64 + 2380;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r11,1,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 128;
	// rlwinm r28,r6,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r4,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// lhzx r28,r28,r9
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// srawi r9,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 4;
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r28,r11,r4
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// add r25,r8,r6
	ctx.r25.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r3,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r3.u64;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r4,r9,r4
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwzx r8,r31,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lhzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addi r28,r29,52
	ctx.r28.s64 = ctx.r29.s64 + 52;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r6,r29,200
	ctx.r6.s64 = ctx.r29.s64 + 200;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 65536;
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// bl 0x8991a9d0
	ctx.lr = 0x899C3858;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c3874
	if (ctx.cr6.eq) goto loc_899C3874;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C386C;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c3888
	if (ctx.cr6.eq) goto loc_899C3888;
loc_899C3874:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r26,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u8);
	// bl 0x89932a38
	ctx.lr = 0x899C3880;
	sub_89932A38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C3888:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,116
	ctx.r6.s64 = 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8999efa8
	ctx.lr = 0x899C38A8;
	sub_8999EFA8(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899c38bc
	if (!ctx.cr6.eq) goto loc_899C38BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C38BC;
	sub_89932A38(ctx, base);
loc_899C38BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C4740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x899C4748;
	__savegprlr_16(ctx, base);
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
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899c4780
	if (ctx.cr6.lt) goto loc_899C4780;
	// bne cr6,0x899c4bd0
	if (!ctx.cr6.eq) goto loc_899C4BD0;
	// bl 0x899c40c0
	ctx.lr = 0x899C4778;
	sub_899C40C0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_899C4780:
	// addi r29,r30,162
	ctx.r29.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r22,r11,9016
	ctx.r22.s64 = ctx.r11.s64 + 9016;
	// addi r17,r30,48
	ctx.r17.s64 = ctx.r30.s64 + 48;
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
	// lwzx r8,r31,r17
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r22
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r22.u32);
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
	// stwx r5,r31,r17
	REX_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r5.u32);
	// lhzx r4,r31,r17
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r17.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c47e4
	if (!ctx.cr0.lt) goto loc_899C47E4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C47E4:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c47fc
	if (!ctx.cr6.gt) goto loc_899C47FC;
loc_899C47EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_899C47FC:
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r18,r30,52
	ctx.r18.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r22
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r10,r31,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r18.u32);
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
	// stwx r4,r31,r18
	REX_STORE_U32(ctx.r31.u32 + ctx.r18.u32, ctx.r4.u32);
	// lhzx r3,r31,r18
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r18.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r11.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c483c
	if (!ctx.cr0.lt) goto loc_899C483C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C483C:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c47ec
	if (ctx.cr6.gt) goto loc_899C47EC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C484C;
	sub_89932B18(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C4858;
	sub_89932D30(ctx, base);
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c48f8
	if (ctx.cr6.lt) goto loc_899C48F8;
	// bne cr6,0x899c4910
	if (!ctx.cr6.eq) goto loc_899C4910;
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
	// bne cr6,0x899c4894
	if (!ctx.cr6.eq) goto loc_899C4894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899C4894:
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
loc_899C48B4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899c48e4
	if (ctx.cr6.eq) goto loc_899C48E4;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x899c48d4
	if (!ctx.cr6.lt) goto loc_899C48D4;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
loc_899C48D4:
	// ble cr6,0x899c48e4
	if (!ctx.cr6.gt) goto loc_899C48E4;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
loc_899C48E4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899c48b4
	if (ctx.cr6.lt) goto loc_899C48B4;
	// b 0x899c4910
	goto loc_899C4910;
loc_899C48F8:
	// lhzx r10,r31,r17
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r17.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// bgt cr6,0x899c4910
	if (ctx.cr6.gt) goto loc_899C4910;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899C4910:
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// lwzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// bl 0x8991b770
	ctx.lr = 0x899C4940;
	sub_8991B770(ctx, base);
	// addi r20,r30,12
	ctx.r20.s64 = ctx.r30.s64 + 12;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r19,-30253
	ctx.r19.s64 = -1982660608;
	// addi r29,r11,2484
	ctx.r29.s64 = ctx.r11.s64 + 2484;
	// lis r9,192
	ctx.r9.s64 = 12582912;
	// lwzx r3,r31,r20
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r21,20
	ctx.r21.s64 = 1310720;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,-9212(r19)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r19.u32 + -9212);
	// ori r24,r9,16448
	ctx.r24.u64 = ctx.r9.u64 | 16448;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lis r23,1
	ctx.r23.s64 = 65536;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// ori r28,r10,20077
	ctx.r28.u64 = ctx.r10.u64 | 20077;
loc_899C4984:
	// addi r10,r27,128
	ctx.r10.s64 = ctx.r27.s64 + 128;
	// lhz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r27,384
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 384, ctx.xer);
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rotlwi r4,r9,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r7,r31,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lwzx r9,r31,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r18.u32);
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lhzx r8,r6,r22
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// mullw r6,r11,r3
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// mullw r8,r10,r5
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// mulli r4,r4,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(224));
	// subf r8,r4,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r4.u64;
	// mullw r6,r5,r11
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r10,r3
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r21,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r21.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x899c4a0c
	if (!ctx.cr6.lt) goto loc_899C4A0C;
	// cmpwi cr6,r27,128
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 128, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bgt cr6,0x899c4a10
	if (ctx.cr6.gt) goto loc_899C4A10;
loc_899C4A0C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_899C4A10:
	// mullw r11,r26,r28
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lbzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r26,r10,12345
	ctx.r26.s64 = ctx.r10.s64 + 12345;
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// addi r8,r26,1
	ctx.r8.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// rlwinm r10,r11,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// addi r8,r30,207
	ctx.r8.s64 = ctx.r30.s64 + 207;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r9,r7,31,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x3FFF;
	// rlwinm r11,r11,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,-4096
	ctx.r10.s64 = ctx.r11.s64 + -4096;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r23.u64;
	// bl 0x899d7a90
	ctx.lr = 0x899C4A74;
	sub_899D7A90(ctx, base);
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r27,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// clrlwi r7,r25,16
	ctx.r7.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x899c4984
	if (ctx.cr6.lt) goto loc_899C4984;
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r26,-9212(r19)
	REX_STORE_U32(ctx.r19.u32 + -9212, ctx.r26.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C4AA8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c4bd0
	if (ctx.cr6.eq) goto loc_899C4BD0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C4AB8;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c4bd0
	if (ctx.cr6.eq) goto loc_899C4BD0;
	// lwzx r10,r31,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// extsh r24,r9
	ctx.r24.s64 = ctx.r9.s16;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// rlwinm r25,r24,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x3FE;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// ori r30,r8,20480
	ctx.r30.u64 = ctx.r8.u64 | 20480;
	// lis r27,128
	ctx.r27.s64 = 8388608;
	// lwz r23,-21584(r9)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// lis r20,320
	ctx.r20.s64 = 20971520;
	// lis r21,120
	ctx.r21.s64 = 7864320;
	// addi r28,r10,2492
	ctx.r28.s64 = ctx.r10.s64 + 2492;
loc_899C4AFC:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lhzx r11,r25,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r22.u32);
	// addi r9,r26,128
	ctx.r9.s64 = ctx.r26.s64 + 128;
	// lwzx r7,r31,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r18.u32);
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwzx r3,r8,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// lhzx r9,r6,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// srawi r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x899c4b94
	if (ctx.cr6.lt) goto loc_899C4B94;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x899c4b94
	if (ctx.cr6.gt) goto loc_899C4B94;
	// subf r11,r23,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r23.u64;
	// subf. r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899c4b7c
	if (!ctx.cr0.lt) goto loc_899C4B7C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899C4B7C:
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
	// b 0x899c4b98
	goto loc_899C4B98;
loc_899C4B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899C4B98:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c4bb4
	if (ctx.cr6.eq) goto loc_899C4BB4;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899cb940
	ctx.lr = 0x899C4BB4;
	sub_899CB940(ctx, base);
loc_899C4BB4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x899c4afc
	if (ctx.cr6.lt) goto loc_899C4AFC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C4BD0;
	sub_89932A38(ctx, base);
loc_899C4BD0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8470) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C8478;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r10,2576
	ctx.r9.s64 = ctx.r10.s64 + 2576;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,12272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12272);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8991b880
	ctx.lr = 0x899C84AC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c84bc
	if (!ctx.cr6.eq) goto loc_899C84BC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C84BC:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r31,r9,12800
	ctx.r31.s64 = ctx.r9.s64 + 12800;
	// lis r7,-16208
	ctx.r7.s64 = -1062207488;
	// lhz r30,-4592(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// lhz r11,26864(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 26864);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mulli r26,r4,208
	ctx.r26.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// stwx r10,r26,r5
	REX_STORE_U32(ctx.r26.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r11,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r11.u32);
	// ori r10,r7,260
	ctx.r10.u64 = ctx.r7.u64 | 260;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwx r10,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u32);
	// stwx r27,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991b538
	ctx.lr = 0x899C8510;
	sub_8991B538(ctx, base);
	// lhz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// rlwinm r7,r28,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r5,r26,r9
	REX_STORE_U32(ctx.r26.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r7,r26,r8
	REX_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C8534;
	sub_8991C578(ctx, base);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// li r11,116
	ctx.r11.s64 = 116;
	// stwx r4,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r27,r26,r10
	REX_STORE_U32(ctx.r26.u32 + ctx.r10.u32, ctx.r27.u32);
	// stbx r11,r26,r9
	REX_STORE_U8(ctx.r26.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r26,r8
	REX_STORE_U8(ctx.r26.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8CD8) {
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
	// lhzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addic. r9,r9,-160
	ctx.xer.ca = ctx.r9.u32 > 159;
	ctx.r9.s64 = ctx.r9.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// bge 0x899c8d2c
	if (!ctx.cr0.lt) goto loc_899C8D2C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C8D2C:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// ble cr6,0x899c8d40
	if (!ctx.cr6.gt) goto loc_899C8D40;
loc_899C8D34:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_899C8D40:
	// lhzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899c8d54
	if (!ctx.cr0.lt) goto loc_899C8D54;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C8D54:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899c8d34
	if (ctx.cr6.gt) goto loc_899C8D34;
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
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C9A18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C9A20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r9,-30224
	ctx.r9.s64 = -1980760064;
	// addi r10,r11,2672
	ctx.r10.s64 = ctx.r11.s64 + 2672;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,28312
	ctx.r29.s64 = ctx.r9.s64 + 28312;
	// lbz r11,2672(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c9abc
	if (ctx.cr6.eq) goto loc_899C9ABC;
	// addi r31,r10,-9
	ctx.r31.s64 = ctx.r10.s64 + -9;
loc_899C9A48:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r28,17(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r9,11(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,13(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// addi r11,r29,-576
	ctx.r11.s64 = ctx.r29.s64 + -576;
	// lbz r8,14(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// lbz r9,15(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899C9AA0;
	sub_89934B48(ctx, base);
	// lbzu r10,9(r31)
	ea = 9 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899c9a48
	if (!ctx.cr6.eq) goto loc_899C9A48;
loc_899C9ABC:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r5,r29,-576
	ctx.r5.s64 = ctx.r29.s64 + -576;
	// addi r6,r11,17308
	ctx.r6.s64 = ctx.r11.s64 + 17308;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899C9AD8;
	sub_89935610(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CAB38) {
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
	ctx.lr = 0x899CAB6C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899cab84
	if (!ctx.cr6.eq) goto loc_899CAB84;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899CAB84:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// bl 0x89915de0
	ctx.lr = 0x899CAB90;
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

DEFINE_REX_FUNC(sub_899CAFC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899CAFC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r26,r10,2900
	ctx.r26.s64 = ctx.r10.s64 + 2900;
	// lhz r11,12272(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12272);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r24,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r24.s64 = ctx.r9.s32 >> 7;
	// extsh r28,r24
	ctx.r28.s64 = ctx.r24.s16;
	// rlwinm r25,r28,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8991b880
	ctx.lr = 0x899CAFF8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899cb008
	if (!ctx.cr6.eq) goto loc_899CB008;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CB008:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-16208
	ctx.r8.s64 = -1062207488;
	// lhz r29,-4592(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// lhz r3,26864(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mulli r30,r5,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// ori r11,r8,260
	ctx.r11.u64 = ctx.r8.u64 | 260;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// bl 0x8991b538
	ctx.lr = 0x899CB05C;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899CB064;
	sub_8991C578(ctx, base);
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bgt cr6,0x899cb0c4
	if (ctx.cr6.gt) goto loc_899CB0C4;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899cb0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CB0A0;
	// bdzf 4*cr6+eq,0x899cb080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CB080;
	// bne cr6,0x899cb0a0
	if (!ctx.cr6.eq) goto loc_899CB0A0;
loc_899CB080:
	// lhzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r26.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x899cb0c4
	goto loc_899CB0C4;
loc_899CB0A0:
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// lhzx r10,r25,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r26.u32);
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
loc_899CB0C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899CB0CC;
	sub_89932A38(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r10,r31,186
	ctx.r10.s64 = ctx.r31.s64 + 186;
	// addi r11,r9,25128
	ctx.r11.s64 = ctx.r9.s64 + 25128;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// lwzx r4,r30,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r3,r30,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// mulli r10,r11,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addis r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 524288;
	// bl 0x89932c20
	ctx.lr = 0x899CB108;
	sub_89932C20(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// addi r6,r7,9016
	ctx.r6.s64 = ctx.r7.s64 + 9016;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r4,r8,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// li r7,116
	ctx.r7.s64 = 116;
	// lhzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// sthx r8,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u16);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r24,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r24.u8);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r11,r4,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// stbx r7,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// stwx r4,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r4.u32);
	// stwx r10,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// stbx r7,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBE38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lbz r9,32018(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 32018);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_899CBE68:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x899cbe84
	if (ctx.cr6.eq) goto loc_899CBE84;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r6,r9,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// stw r6,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// b 0x899cbea8
	goto loc_899CBEA8;
loc_899CBE84:
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x899cbe9c
	if (ctx.cr6.gt) goto loc_899CBE9C;
	// li r9,2
	ctx.r9.s64 = 2;
loc_899CBE9C:
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
loc_899CBEA8:
	// lwz r9,-16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r8,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r9,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x899cbe68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CBE68;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CC438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899CC440;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r31,2048
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2048, ctx.xer);
	// bgt cr6,0x899cc47c
	if (ctx.cr6.gt) goto loc_899CC47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a5a0
	ctx.lr = 0x899CC474;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899cc488
	if (!ctx.cr6.eq) goto loc_899CC488;
loc_899CC47C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CC488:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// ble cr6,0x899cc4b8
	if (!ctx.cr6.gt) goto loc_899CC4B8;
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
	// clrlwi r27,r6,30
	ctx.r27.u64 = ctx.r6.u32 & 0x3;
loc_899CC4B8:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// addi r11,r11,-8688
	ctx.r11.s64 = ctx.r11.s64 + -8688;
	// addi r30,r4,-2
	ctx.r30.s64 = ctx.r4.s64 + -2;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_899CC4CC:
	// lhzu r11,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwzu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899cc1e8
	ctx.lr = 0x899CC4F0;
	sub_899CC1E8(ctx, base);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899cc4cc
	if (!ctx.cr6.eq) goto loc_899CC4CC;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x89936360
	ctx.lr = 0x899CC50C;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CCF78) {
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
	// blt cr6,0x899ccfd4
	if (ctx.cr6.lt) goto loc_899CCFD4;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899ccfd4
	if (ctx.cr6.gt) goto loc_899CCFD4;
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
	// bge 0x899ccfbc
	if (!ctx.cr0.lt) goto loc_899CCFBC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CCFBC:
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
	// b 0x899ccfd8
	goto loc_899CCFD8;
loc_899CCFD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CCFD8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899ccffc
	if (!ctx.cr6.eq) goto loc_899CCFFC;
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
loc_899CCFFC:
	// bl 0x899ccea0
	ctx.lr = 0x899CD000;
	sub_899CCEA0(ctx, base);
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

DEFINE_REX_FUNC(sub_899CDA00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899cda4c
	if (ctx.cr6.lt) goto loc_899CDA4C;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cda4c
	if (ctx.cr6.gt) goto loc_899CDA4C;
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
	// bge 0x899cda34
	if (!ctx.cr0.lt) goto loc_899CDA34;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CDA34:
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
	// b 0x899cda50
	goto loc_899CDA50;
loc_899CDA4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CDA50:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cda64
	if (!ctx.cr6.eq) goto loc_899CDA64;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899CDA64:
	// b 0x899cd8c8
	sub_899CD8C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CE020) {
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
	// lhz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 116);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwz r8,120(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r9,116
	ctx.r9.s64 = 116;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r30,r4,1,22,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r7.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// bl 0x899d5650
	ctx.lr = 0x899CE094;
	sub_899D5650(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_899CE960) {
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
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x899ceb20
	if (ctx.cr6.lt) goto loc_899CEB20;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ce9a8
	if (ctx.cr6.eq) goto loc_899CE9A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ce9a8
	if (ctx.cr6.eq) goto loc_899CE9A8;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899cea44
	if (ctx.cr6.eq) goto loc_899CEA44;
loc_899CE9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899ce740
	ctx.lr = 0x899CE9B0;
	sub_899CE740(ctx, base);
	// lhz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// sth r10,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// sth r9,56(r31)
	REX_STORE_U16(ctx.r31.u32 + 56, ctx.r9.u16);
	// bgt cr6,0x899ce9e0
	if (ctx.cr6.gt) goto loc_899CE9E0;
	// lhz r11,86(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 86);
	// lhz r10,94(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 94);
	// sth r11,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// sth r10,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r10.u16);
loc_899CE9E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,0,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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
loc_899CEA44:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lhz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lhz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// sth r7,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r7.u16);
	// sth r4,56(r31)
	REX_STORE_U16(ctx.r31.u32 + 56, ctx.r4.u16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899cea88
	if (ctx.cr6.lt) goto loc_899CEA88;
	// bne cr6,0x899ceaa8
	if (!ctx.cr6.eq) goto loc_899CEAA8;
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// sth r10,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
	// lhz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// sth r9,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r9.u16);
	// b 0x899ceaa8
	goto loc_899CEAA8;
loc_899CEA88:
	// lhz r10,86(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 86);
	// lhz r9,94(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 94);
	// sth r10,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
	// sth r9,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r9.u16);
	// lhz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// sth r7,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r7.u16);
	// lhz r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// sth r6,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r6.u16);
loc_899CEAA8:
	// lwz r7,60(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r3,r8,0,24,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
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
loc_899CEB20:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899ceb40
	if (!ctx.cr0.lt) goto loc_899CEB40;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CEB40:
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899ceb68
	if (!ctx.cr6.gt) goto loc_899CEB68;
loc_899CEB4C:
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
loc_899CEB68:
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-21584(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899ceb94
	if (!ctx.cr0.lt) goto loc_899CEB94;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CEB94:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899ceb4c
	if (ctx.cr6.gt) goto loc_899CEB4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_899D1138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899D1140;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x899340e8
	ctx.lr = 0x899D1154;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d12f8
	if (ctx.cr6.eq) goto loc_899D12F8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r7,2
	ctx.r7.s64 = 2;
	// lhz r11,8416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8416);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x899d1178
	if (!ctx.cr6.lt) goto loc_899D1178;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,8416(r10)
	REX_STORE_U16(ctx.r10.u32 + 8416, ctx.r11.u16);
loc_899D1178:
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// addi r5,r10,-8688
	ctx.r5.s64 = ctx.r10.s64 + -8688;
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
	// bge cr6,0x899d12f8
	if (!ctx.cr6.lt) goto loc_899D12F8;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_899D11A8:
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899d11c0
	if (!ctx.cr6.eq) goto loc_899D11C0;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// beq 0x899d11dc
	if (ctx.cr0.eq) goto loc_899D11DC;
loc_899D11C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x899d11a8
	if (ctx.cr6.lt) goto loc_899D11A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899D11DC:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r9,6028(r6)
	REX_STORE_U16(ctx.r6.u32 + 6028, ctx.r9.u16);
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r11,-21396(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -21396);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// li r27,7
	ctx.r27.s64 = 7;
	// sth r31,-21396(r8)
	REX_STORE_U16(ctx.r8.u32 + -21396, ctx.r31.u16);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// li r28,256
	ctx.r28.s64 = 256;
	// ori r3,r8,32896
	ctx.r3.u64 = ctx.r8.u64 | 32896;
	// lis r29,8
	ctx.r29.s64 = 524288;
	// addi r9,r9,11472
	ctx.r9.s64 = ctx.r9.s64 + 11472;
	// lis r30,-8
	ctx.r30.s64 = -524288;
	// addi r6,r11,11272
	ctx.r6.s64 = ctx.r11.s64 + 11272;
loc_899D1230:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r24,r9,4
	ctx.r24.s64 = ctx.r9.s64 + 4;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r23,r9,8
	ctx.r23.s64 = ctx.r9.s64 + 8;
	// rlwinm r22,r8,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r9,10
	ctx.r21.s64 = ctx.r9.s64 + 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r20,r22,r9
	ctx.r20.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// lwzx r8,r22,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// rotlwi r24,r8,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r8,232(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 232);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r8,228(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 228);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwzx r8,r24,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r24,0(r8)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r24,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r24,4(r8)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r24,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r24.u32);
	// lwz r24,4(r8)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r24,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r24.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// sth r31,134(r11)
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r31.u16);
	// stw r3,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// stw r26,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r26.u32);
	// stw r25,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r25.u32);
	// sth r28,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r28.u16);
	// stw r29,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r29.u32);
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// lhzx r8,r22,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r23.u32);
	// sth r8,68(r11)
	REX_STORE_U16(ctx.r11.u32 + 68, ctx.r8.u16);
	// lbzx r8,r22,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r21.u32);
	// stw r4,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r8,70(r11)
	REX_STORE_U8(ctx.r11.u32 + 70, ctx.r8.u8);
	// blt cr6,0x899d1230
	if (ctx.cr6.lt) goto loc_899D1230;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x89936360
	ctx.lr = 0x899D12F8;
	sub_89936360(ctx, base);
loc_899D12F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D2B78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D2B80;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r11,-26648
	ctx.r31.s64 = ctx.r11.s64 + -26648;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-6336
	ctx.r7.s64 = ctx.r31.s64 + -6336;
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934fb8
	ctx.lr = 0x899D2BC0;
	sub_89934FB8(ctx, base);
	// addi r6,r31,-480
	ctx.r6.s64 = ctx.r31.s64 + -480;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r9,208
	ctx.r9.s64 = 208;
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934fb8
	ctx.lr = 0x899D2BF4;
	sub_89934FB8(ctx, base);
	// addi r4,r31,-960
	ctx.r4.s64 = ctx.r31.s64 + -960;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
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
	ctx.lr = 0x899D2C28;
	sub_89934FB8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r31,-6496
	ctx.r11.s64 = ctx.r31.s64 + -6496;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,172
	ctx.r9.s64 = 172;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-42
	ctx.r8.s64 = -42;
	// li r7,-42
	ctx.r7.s64 = -42;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D2C5C;
	sub_89934FB8(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r25,r11,3556
	ctx.r25.s64 = ctx.r11.s64 + 3556;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30220
	ctx.r10.s64 = -1980497920;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r30,r11,3484
	ctx.r30.s64 = ctx.r11.s64 + 3484;
	// addi r28,r10,-32504
	ctx.r28.s64 = ctx.r10.s64 + -32504;
loc_899D2C80:
	// lhz r29,0(r26)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r7,r29,16
	ctx.r7.u64 = ctx.r29.u64 | 16;
loc_899D2C90:
	// addi r10,r31,-6336
	ctx.r10.s64 = ctx.r31.s64 + -6336;
	// addi r11,r31,-3408
	ctx.r11.s64 = ctx.r31.s64 + -3408;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d2cdc
	if (!ctx.cr6.gt) goto loc_899D2CDC;
	// rlwinm r6,r9,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_899D2CB8:
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
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d2cb8
	if (ctx.cr6.lt) goto loc_899D2CB8;
loc_899D2CDC:
	// addi r9,r31,-8944
	ctx.r9.s64 = ctx.r31.s64 + -8944;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r31,-480
	ctx.r10.s64 = ctx.r31.s64 + -480;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d2d30
	if (!ctx.cr6.gt) goto loc_899D2D30;
	// rlwinm r6,r9,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_899D2D0C:
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
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d2d0c
	if (ctx.cr6.lt) goto loc_899D2D0C;
loc_899D2D30:
	// addi r10,r31,-960
	ctx.r10.s64 = ctx.r31.s64 + -960;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d2d80
	if (!ctx.cr6.gt) goto loc_899D2D80;
	// rlwinm r6,r9,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_899D2D5C:
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
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d2d5c
	if (ctx.cr6.lt) goto loc_899D2D5C;
loc_899D2D80:
	// addi r4,r4,160
	ctx.r4.s64 = ctx.r4.s64 + 160;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r3,r3,816
	ctx.r3.s64 = ctx.r3.s64 + 816;
	// cmpwi cr6,r4,480
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 480, ctx.xer);
	// blt cr6,0x899d2c90
	if (ctx.cr6.lt) goto loc_899D2C90;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r9,r31,-6496
	ctx.r9.s64 = ctx.r31.s64 + -6496;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d2de8
	if (!ctx.cr6.gt) goto loc_899D2DE8;
	// rlwinm r7,r10,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xC0000000;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_899D2DC0:
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
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d2dc0
	if (ctx.cr6.lt) goto loc_899D2DC0;
loc_899D2DE8:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r27,r27,204
	ctx.r27.s64 = ctx.r27.s64 + 204;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899d2c80
	if (ctx.cr6.lt) goto loc_899D2C80;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D4720) {
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
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lhz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// lhz r9,54(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 54);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,9016
	ctx.r7.s64 = ctx.r8.s64 + 9016;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r6,-30305
	ctx.r6.s64 = -1986068480;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r6,8704
	ctx.r6.s64 = ctx.r6.s64 + 8704;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// sth r5,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r5.u16);
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r3,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r3,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 6;
	// rlwinm r10,r3,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addis r10,r3,-160
	ctx.r10.s64 = ctx.r3.s64 + -10485760;
	// lhzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lhzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// bge 0x899d47d8
	if (!ctx.cr0.lt) goto loc_899D47D8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899D47D8:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r8,160
	ctx.r11.s64 = ctx.r8.s64 + 160;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x899d4820
	if (!ctx.cr6.lt) goto loc_899D4820;
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
	// bge 0x899d480c
	if (!ctx.cr0.lt) goto loc_899D480C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D480C:
	// addi r10,r8,120
	ctx.r10.s64 = ctx.r8.s64 + 120;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x899d4824
	if (ctx.cr6.lt) goto loc_899D4824;
loc_899D4820:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D4824:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d48fc
	if (!ctx.cr6.eq) goto loc_899D48FC;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8991a8f0
	ctx.lr = 0x899D483C;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d48fc
	if (!ctx.cr6.eq) goto loc_899D48FC;
	// lbz r8,79(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 79);
	// lbz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 80);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x899d42b0
	ctx.lr = 0x899D4860;
	sub_899D42B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d48fc
	if (ctx.cr6.eq) goto loc_899D48FC;
	// lbz r11,77(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 77);
	// stb r30,76(r31)
	REX_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,77(r31)
	REX_STORE_U8(ctx.r31.u32 + 77, ctx.r10.u8);
	// beq cr6,0x899d48fc
	if (ctx.cr6.eq) goto loc_899D48FC;
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 78);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,78(r31)
	REX_STORE_U8(ctx.r31.u32 + 78, ctx.r10.u8);
	// bne cr6,0x899d4900
	if (!ctx.cr6.eq) goto loc_899D4900;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lhz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// sth r10,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// sth r9,54(r31)
	REX_STORE_U16(ctx.r31.u32 + 54, ctx.r9.u16);
	// b 0x899d4900
	goto loc_899D4900;
loc_899D48FC:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_899D4900:
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

DEFINE_REX_FUNC(sub_899D5A38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899D5A40;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-30253
	ctx.r19.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// ori r31,r11,20077
	ctx.r31.u64 = ctx.r11.u64 | 20077;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lwz r11,-9212(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + -9212);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r30,r11,12345
	ctx.r30.s64 = ctx.r11.s64 + 12345;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// stw r30,-9212(r19)
	REX_STORE_U32(ctx.r19.u32 + -9212, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r6,r7,17
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFF;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r5,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89919e68
	ctx.lr = 0x899D5AA4;
	sub_89919E68(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x899d5ad8
	if (!ctx.cr6.eq) goto loc_899D5AD8;
loc_899D5AB0:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899d5c44
	if (ctx.cr6.eq) goto loc_899D5C44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89919e68
	ctx.lr = 0x899D5ACC;
	sub_89919E68(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d5ab0
	if (ctx.cr6.eq) goto loc_899D5AB0;
loc_899D5AD8:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// rlwinm r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// addi r11,r11,7904
	ctx.r11.s64 = ctx.r11.s64 + 7904;
	// oris r24,r10,49152
	ctx.r24.u64 = ctx.r10.u64 | 3221225472;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// li r25,23
	ctx.r25.s64 = 23;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r29,r8,32896
	ctx.r29.u64 = ctx.r8.u64 | 32896;
	// li r26,519
	ctx.r26.s64 = 519;
	// li r27,128
	ctx.r27.s64 = 128;
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
	// addi r5,r9,11976
	ctx.r5.s64 = ctx.r9.s64 + 11976;
loc_899D5B1C:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mullw r9,r30,r31
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// clrlwi r8,r3,17
	ctx.r8.u64 = ctx.r3.u32 & 0x7FFF;
	// lwz r4,744(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 744);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// srawi r4,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 16;
	// rlwinm r3,r8,20,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFF;
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// clrlwi r4,r4,29
	ctx.r4.u64 = ctx.r4.u32 & 0x7;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// lwz r8,740(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 740);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// stb r10,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r10.u8);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// clrlwi r30,r30,17
	ctx.r30.u64 = ctx.r30.u32 & 0x7FFF;
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// addi r18,r9,1
	ctx.r18.s64 = ctx.r9.s64 + 1;
	// stb r10,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r10.u8);
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// srawi r3,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 16;
	// stw r23,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// addi r18,r8,128
	ctx.r18.s64 = ctx.r8.s64 + 128;
	// stw r22,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r22.u32);
	// clrlwi r8,r3,21
	ctx.r8.u64 = ctx.r3.u32 & 0x7FF;
	// rlwinm r4,r18,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r3,r30,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r30,r9,12345
	ctx.r30.s64 = ctx.r9.s64 + 12345;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r18,r30,1
	ctx.r18.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r9,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r18.s32 >> 16;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lhzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stb r9,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r9.u8);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stb r21,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r21.u8);
	// stb r20,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r20.u8);
	// stb r10,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r10.u8);
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// sth r26,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r26.u16);
	// stb r27,46(r11)
	REX_STORE_U8(ctx.r11.u32 + 46, ctx.r27.u8);
	// stb r10,47(r11)
	REX_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// rlwinm r9,r3,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF00;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// bne cr6,0x899d5b1c
	if (!ctx.cr6.eq) goto loc_899D5B1C;
	// stw r30,-9212(r19)
	REX_STORE_U32(ctx.r19.u32 + -9212, ctx.r30.u32);
loc_899D5C44:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D7840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D7848;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,3728
	ctx.r10.s64 = ctx.r11.s64 + 3728;
	// lis r9,-30220
	ctx.r9.s64 = -1980497920;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lbz r11,3728(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3728);
	// addi r29,r9,12400
	ctx.r29.s64 = ctx.r9.s64 + 12400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d78f8
	if (ctx.cr6.eq) goto loc_899D78F8;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
loc_899D7874:
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r29,-1760
	ctx.r5.s64 = ctx.r29.s64 + -1760;
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// neg r27,r3
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lhz r4,-2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// extsb r26,r6
	ctx.r26.s64 = ctx.r6.s8;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899D78D4;
	sub_89934FB8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899d7874
	if (!ctx.cr6.eq) goto loc_899D7874;
loc_899D78F8:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r11,3484
	ctx.r7.s64 = ctx.r11.s64 + 3484;
loc_899D7904:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,-1760
	ctx.r9.s64 = ctx.r29.s64 + -1760;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r11,r8,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(204));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_899D7924:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x899d7924
	if (ctx.cr6.lt) goto loc_899D7924;
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
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// blt cr6,0x899d7904
	if (ctx.cr6.lt) goto loc_899D7904;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8200) {
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
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,14728
	ctx.r30.s64 = ctx.r11.s64 + 14728;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,-80
	ctx.r11.s64 = ctx.r30.s64 + -80;
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-16
	ctx.r8.s64 = -16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D8250;
	sub_89934FB8(ctx, base);
	// addi r11,r30,-80
	ctx.r11.s64 = ctx.r30.s64 + -80;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// li r9,192
	ctx.r9.s64 = 192;
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D8284;
	sub_89934FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,3484
	ctx.r5.s64 = ctx.r10.s64 + 3484;
	// addi r4,r11,3872
	ctx.r4.s64 = ctx.r11.s64 + 3872;
loc_899D829C:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r6,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(108));
	// lhzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// ori r7,r9,8
	ctx.r7.u64 = ctx.r9.u64 | 8;
	// addi r9,r30,-80
	ctx.r9.s64 = ctx.r30.s64 + -80;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d82f0
	if (!ctx.cr6.gt) goto loc_899D82F0;
	// rlwinm r7,r10,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xC0000000;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_899D82CC:
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
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d82cc
	if (ctx.cr6.lt) goto loc_899D82CC;
loc_899D82F0:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899d829c
	if (ctx.cr6.lt) goto loc_899D829C;
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

DEFINE_REX_FUNC(sub_899D9058) {
	REX_FUNC_PROLOGUE();
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ori r8,r11,4096
	ctx.r8.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lwz r11,-26964(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -26964);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_899D94E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D94F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-25804(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -25804);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899d9514
	if (!ctx.cr6.eq) goto loc_899D9514;
loc_899D9508:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D9514:
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r3,3668(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// lwz r10,608(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 608);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x899d9564
	if (ctx.cr6.eq) goto loc_899D9564;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu. r11,r4,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r4.u32 / ctx.r8.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// beq 0x899d9598
	if (ctx.cr0.eq) goto loc_899D9598;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899D9548:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d9558
	if (ctx.cr6.eq) goto loc_899D9558;
	// li r27,1
	ctx.r27.s64 = 1;
loc_899D9558:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x899d9548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D9548;
	// b 0x899d9598
	goto loc_899D9598;
loc_899D9564:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r4,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x899d9598
	if (ctx.cr6.eq) goto loc_899D9598;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899D9580:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d9590
	if (ctx.cr6.eq) goto loc_899D9590;
	// li r27,1
	ctx.r27.s64 = 1;
loc_899D9590:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x899d9580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D9580;
loc_899D9598:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D95A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,268(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 268);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D95C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899d9508
	if (ctx.cr6.eq) goto loc_899D9508;
	// lwz r3,3668(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D95EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D9608;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,10048
	ctx.r31.s64 = ctx.r11.s64 + 10048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x899d9654
	if (ctx.cr6.eq) goto loc_899D9654;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,3672(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 3672);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,668(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899D9650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x899d967c
	goto loc_899D967C;
loc_899D9654:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,3672(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3672);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,672(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899D967C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899D967C:
	// lis r8,-30220
	ctx.r8.s64 = -1980497920;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-30220
	ctx.r7.s64 = -1980497920;
	// lwz r9,3668(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// addi r6,r8,25704
	ctx.r6.s64 = ctx.r8.s64 + 25704;
	// addi r5,r7,25576
	ctx.r5.s64 = ctx.r7.s64 + 25576;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,25704(r8)
	REX_STORE_U32(ctx.r8.u32 + 25704, ctx.r11.u32);
	// stw r28,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwz r3,88(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899D96C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DAD38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x899dace0
	sub_899DACE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DADA0) {
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
	// bl 0x899dace0
	ctx.lr = 0x899DADC0;
	sub_899DACE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dadd0
	if (ctx.cr0.eq) goto loc_899DADD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dabc8
	ctx.lr = 0x899DADD0;
	sub_899DABC8(ctx, base);
loc_899DADD0:
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

DEFINE_REX_FUNC(sub_899DB1A0) {
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
	// lis r31,-30305
	ctx.r31.s64 = -1986068480;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x899db1cc
	if (ctx.cr6.eq) goto loc_899DB1CC;
	// bl 0x899e41d8
	ctx.lr = 0x899DB1C4;
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_899DB1CC:
	// bl 0x899dc560
	ctx.lr = 0x899DB1D0;
	sub_899DC560(ctx, base);
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

DEFINE_REX_FUNC(sub_899DB520) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dbc70
	ctx.lr = 0x899DB534;
	sub_899DBC70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dc938
	ctx.lr = 0x899DB53C;
	sub_899DC938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dc550
	ctx.lr = 0x899DB544;
	sub_899DC550(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dc920
	ctx.lr = 0x899DB54C;
	sub_899DC920(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DB744) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x899db76c
	if (ctx.cr6.eq) goto loc_899DB76C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x899dc5d0
	ctx.lr = 0x899DB76C;
	sub_899DC5D0(ctx, base);
loc_899DB76C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_16) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savegprlr_25) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_20) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_27) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBD50) {
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
	// addi r11,r11,1456
	ctx.r11.s64 = ctx.r11.s64 + 1456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dcaf8
	ctx.lr = 0x899DBD7C;
	sub_899DCAF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dbd8c
	if (ctx.cr0.eq) goto loc_899DBD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dabc8
	ctx.lr = 0x899DBD8C;
	sub_899DABC8(ctx, base);
loc_899DBD8C:
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

DEFINE_REX_FUNC(sub_899DC508) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x899dc490
	ctx.lr = 0x899DC51C;
	sub_899DC490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899dc528
	if (ctx.cr0.eq) goto loc_899DC528;
	// bl 0x899e0560
	ctx.lr = 0x899DC528;
	sub_899E0560(ctx, base);
loc_899DC528:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x899dc490
	ctx.lr = 0x899DC530;
	sub_899DC490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899dc53c
	if (ctx.cr0.eq) goto loc_899DC53C;
	// bl 0x899e0560
	ctx.lr = 0x899DC53C;
	sub_899E0560(ctx, base);
loc_899DC53C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC804) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// b 0x899dc830
	goto loc_899DC830;
loc_899DC830:
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x899e4208
	ctx.lr = 0x899DC838;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCA20) {
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
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1047
	ctx.r4.u64 = ctx.r4.u64 | 1047;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899dc980
	ctx.lr = 0x899DCA40;
	sub_899DC980(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x899e41f8
	ctx.lr = 0x899DCA48;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_899DCD40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x899e4238
	ctx.lr = 0x899DCD58;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DD030) {
	REX_FUNC_PROLOGUE();
	// b 0x899e07e8
	sub_899E07E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DD038) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DD0C0) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899dd274
	if (!ctx.cr6.eq) goto loc_899DD274;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x899dd168
	if (ctx.cr6.eq) goto loc_899DD168;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899dd168
	if (ctx.cr6.eq) goto loc_899DD168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x899e4258
	ctx.lr = 0x899DD140;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899dd198
	if (ctx.cr0.lt) goto loc_899DD198;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x899dd22c
	goto loc_899DD22C;
loc_899DD168:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x899e4258
	ctx.lr = 0x899DD190;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x899dd1a0
	if (!ctx.cr0.lt) goto loc_899DD1A0;
loc_899DD198:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dd280
	goto loc_899DD280;
loc_899DD1A0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x899e4258
	ctx.lr = 0x899DD1C8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x899dd1f0
	if (!ctx.cr0.lt) goto loc_899DD1F0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e4288
	ctx.lr = 0x899DD1EC;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x899dd198
	goto loc_899DD198;
loc_899DD1F0:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_899DD22C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x899dd268
	if (!ctx.cr6.lt) goto loc_899DD268;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899DD258:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x899dd258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DD258;
loc_899DD268:
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_899DD274:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_899DD280:
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

DEFINE_REX_FUNC(sub_899DFBF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899DFBF8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq 0x899dfc60
	if (ctx.cr0.eq) goto loc_899DFC60;
	// bl 0x899e4278
	ctx.lr = 0x899DFC3C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x899dfc60
	if (ctx.cr6.eq) goto loc_899DFC60;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3198
	ctx.r6.s64 = 3198;
	// lwz r5,312(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x899e4268
	ctx.lr = 0x899DFC60;
	__imp__KeBugCheckEx(ctx, base);
loc_899DFC60:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x899dfc70
	if (!ctx.cr6.eq) goto loc_899DFC70;
loc_899DFC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899e0430
	goto loc_899E0430;
loc_899DFC70:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899dfc68
	if (ctx.cr6.gt) goto loc_899DFC68;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x899dfc9c
	if (!ctx.cr6.eq) goto loc_899DFC9C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_899DFC9C:
	// lwz r10,80(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x899dfcd4
	if (!ctx.cr0.eq) goto loc_899DFCD4;
	// lwz r11,380(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899dfcd4
	if (!ctx.cr6.eq) goto loc_899DFCD4;
	// lbz r11,-11(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dfcdc
	if (ctx.cr0.eq) goto loc_899DFCDC;
loc_899DFCD4:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_899DFCDC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899dfd00
	if (!ctx.cr0.eq) goto loc_899DFD00;
	// lwz r3,1408(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x899e4228
	ctx.lr = 0x899DFCF4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_899DFD00:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e0404
	if (ctx.cr0.eq) goto loc_899E0404;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x899dfd68
	if (ctx.cr0.eq) goto loc_899DFD68;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r9,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x899dfd78
	goto loc_899DFD78;
loc_899DFD68:
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_899DFD78:
	// stw r25,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x899e01d4
	if (ctx.cr6.gt) goto loc_899E01D4;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x899dfda8
	if (!ctx.cr6.eq) goto loc_899DFDA8;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_899DFDA8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899dfdc4
	if (ctx.cr6.eq) goto loc_899DFDC4;
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x899dfe04
	goto loc_899DFE04;
loc_899DFDC4:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899dfdfc
	if (ctx.cr0.eq) goto loc_899DFDFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x899dfe04
	goto loc_899DFE04;
loc_899DFDFC:
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// stb r11,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_899DFE04:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x899dfe24
	if (!ctx.cr6.gt) goto loc_899DFE24;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dfe24
	if (ctx.cr0.eq) goto loc_899DFE24;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x899dcca0
	ctx.lr = 0x899DFE24;
	sub_899DCCA0(ctx, base);
loc_899DFE24:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x899e03d0
	if (ctx.cr6.eq) goto loc_899E03D0;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899dfe88
	if (ctx.cr0.eq) goto loc_899DFE88;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x899e4288
	ctx.lr = 0x899DFE6C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899e03d0
	if (ctx.cr0.lt) goto loc_899E03D0;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x899e03d0
	goto loc_899E03D0;
loc_899DFE88:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r28.u64;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x899dff3c
	if (ctx.cr0.eq) goto loc_899DFF3C;
	// lbz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x899dff04
	if (!ctx.cr6.lt) goto loc_899DFF04;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x899dff78
	goto loc_899DFF78;
loc_899DFF04:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_899DFF10:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899dffb0
	if (ctx.cr6.eq) goto loc_899DFFB0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899dffb0
	if (!ctx.cr6.gt) goto loc_899DFFB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dff10
	goto loc_899DFF10;
loc_899DFF3C:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899e000c
	if (ctx.cr0.eq) goto loc_899E000C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x899dffd4
	if (!ctx.cr6.lt) goto loc_899DFFD4;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_899DFF78:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899dffb0
	if (!ctx.cr6.eq) goto loc_899DFFB0;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_899DFFB0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// b 0x899e01bc
	goto loc_899E01BC;
loc_899DFFD4:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_899DFFE0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899dffb0
	if (ctx.cr6.eq) goto loc_899DFFB0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899dffb0
	if (!ctx.cr6.gt) goto loc_899DFFB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dffe0
	goto loc_899DFFE0;
loc_899E000C:
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899e0070
	if (!ctx.cr6.eq) goto loc_899E0070;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899e0070
	if (!ctx.cr6.eq) goto loc_899E0070;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x899e0070
	if (!ctx.cr6.eq) goto loc_899E0070;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x899e0070
	if (!ctx.cr6.lt) goto loc_899E0070;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_899E0070:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899e00b4
	if (ctx.cr0.eq) goto loc_899E00B4;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x899e00a4
	if (ctx.cr0.eq) goto loc_899E00A4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x899e00a4
	if (!ctx.cr6.gt) goto loc_899E00A4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_899E00A4:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x899e4298
	ctx.lr = 0x899E00B4;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_899E00B4:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x899e01c4
	if (ctx.cr6.gt) goto loc_899E01C4;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x899e00f8
	if (!ctx.cr0.eq) goto loc_899E00F8;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x899e010c
	goto loc_899E010C;
loc_899E00F8:
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_899E010C:
	// lbz r9,5(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x899e0164
	if (!ctx.cr6.lt) goto loc_899E0164;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899e019c
	if (!ctx.cr6.eq) goto loc_899E019C;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x899e019c
	goto loc_899E019C;
loc_899E0164:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_899E0170:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899e019c
	if (ctx.cr6.eq) goto loc_899E019C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899e019c
	if (!ctx.cr6.gt) goto loc_899E019C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899e0170
	goto loc_899E0170;
loc_899E019C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_899E01BC:
	// stw r11,48(r21)
	REX_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x899e03d0
	goto loc_899E03D0;
loc_899E01C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899E01D0;
	sub_899DDAA8(ctx, base);
	// b 0x899e03d0
	goto loc_899E03D0;
loc_899E01D4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899e01fc
	if (!ctx.cr6.eq) goto loc_899E01FC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899ddcf8
	ctx.lr = 0x899E01F4;
	sub_899DDCF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899e03d0
	if (!ctx.cr0.eq) goto loc_899E03D0;
loc_899E01FC:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e020c
	if (ctx.cr0.eq) goto loc_899E020C;
	// stw r19,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x899e03d8
	goto loc_899E03D8;
loc_899E020C:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e02d4
	if (ctx.cr0.eq) goto loc_899E02D4;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x899e0250
	if (ctx.cr0.eq) goto loc_899E0250;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x899e0260
	goto loc_899E0260;
loc_899E0250:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_899E0260:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899e028c
	if (ctx.cr0.eq) goto loc_899E028C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x899e028c
	if (!ctx.cr0.eq) goto loc_899E028C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_899E028C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899e02ec
	goto loc_899E02EC;
loc_899E02D4:
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899e02ec
	if (ctx.cr0.eq) goto loc_899E02EC;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_899E02EC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899df000
	ctx.lr = 0x899E02FC;
	sub_899DF000(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x899e03c8
	if (ctx.cr0.eq) goto loc_899E03C8;
	// lbz r10,-11(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x899e037c
	if (ctx.cr0.eq) goto loc_899E037C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899e0328
	if (ctx.cr0.eq) goto loc_899E0328;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x899e0338
	goto loc_899E0338;
loc_899E0328:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_899E0338:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x899e0374
	if (ctx.cr0.eq) goto loc_899E0374;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e0358
	if (ctx.cr0.eq) goto loc_899E0358;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x899e0368
	goto loc_899E0368;
loc_899E0358:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_899E0368:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x899e037c
	goto loc_899E037C;
loc_899E0374:
	// std r19,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_899E037C:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x899e038c
	if (ctx.cr6.lt) goto loc_899E038C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_899E038C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899daf50
	ctx.lr = 0x899E0398;
	sub_899DAF50(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x899e03b8
	if (!ctx.cr6.gt) goto loc_899E03B8;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e03b8
	if (ctx.cr0.eq) goto loc_899E03B8;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x899dcca0
	ctx.lr = 0x899E03B8;
	sub_899DCCA0(ctx, base);
loc_899E03B8:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899df8f8
	ctx.lr = 0x899E03C8;
	sub_899DF8F8(ctx, base);
loc_899E03C8:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r29,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_899E03D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x899e0404
	if (!ctx.cr6.eq) goto loc_899E0404;
loc_899E03D8:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e0404
	if (ctx.cr0.eq) goto loc_899E0404;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x899e42c8
	ctx.lr = 0x899E0404;
	__imp__RtlRaiseException(ctx, base);
loc_899E0404:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899e0420
	goto loc_899E0420;
loc_899E0420:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x899e0458
	ctx.lr = 0x899E042C;
	sub_899E0458(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
loc_899E0430:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

