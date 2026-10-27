#include "mmpps_funcs.66.h"

DEFINE_REX_FUNC(sub_82107EC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82107ED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82107fb0
	if (ctx.cr6.gt) goto loc_82107FB0;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,1616
	ctx.r12.s64 = ctx.r12.s64 + 1616;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,32528
	ctx.r12.s64 = ctx.r12.s64 + 32528;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82107F10;
	case 1:
		goto loc_82107FB0;
	case 2:
		goto loc_82107FBC;
	case 3:
		goto loc_82108140;
	case 4:
		goto loc_82108290;
	case 5:
		goto loc_82108444;
	case 6:
		goto loc_82108278;
	case 7:
		goto loc_821084CC;
	case 8:
		goto loc_82108564;
	case 9:
		goto loc_82107FE0;
	case 10:
		goto loc_8210802C;
	case 11:
		goto loc_82108100;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82107F10:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r8,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x82107f64
	if (!ctx.cr6.lt) goto loc_82107F64;
	// mulli r9,r10,80
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// addi r8,r11,288
	ctx.r8.s64 = ctx.r11.s64 + 288;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// lis r6,-32157
	ctx.r6.s64 = -2107441152;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r6,r6,29784
	ctx.r6.s64 = ctx.r6.s64 + 29784;
	// stw r10,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
loc_82107F64:
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-19872
	ctx.r8.s64 = ctx.r9.s64 + -19872;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r9,428(r8)
	REX_STORE_U32(ctx.r8.u32 + 428, ctx.r9.u32);
	// bl 0x82107590
	ctx.lr = 0x82107F80;
	sub_82107590(ctx, base);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r3,-30016(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30016);
loc_82107F90:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82107FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82107fb0
	if (ctx.cr0.eq) goto loc_82107FB0;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82107FAC:
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82107FB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82107FB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_82107FBC:
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// addi r9,r9,-19872
	ctx.r9.s64 = ctx.r9.s64 + -19872;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r3,-30016(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -30016);
	// stw r11,428(r9)
	REX_STORE_U32(ctx.r9.u32 + 428, ctx.r11.u32);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82107f90
	goto loc_82107F90;
loc_82107FE0:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-19552
	ctx.r8.s64 = ctx.r10.s64 + -19552;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// lis r6,-32161
	ctx.r6.s64 = -2107703296;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r4,r6,-7844
	ctx.r4.s64 = ctx.r6.s64 + -7844;
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-30016(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -30016);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,660(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82107fac
	goto loc_82107FAC;
loc_8210802C:
	// lis r31,-32156
	ctx.r31.s64 = -2107375616;
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,664(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 664);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82107fb0
	if (!ctx.cr0.eq) goto loc_82107FB0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-7844
	ctx.r5.s64 = ctx.r11.s64 + -7844;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821080d0
	if (ctx.cr0.eq) goto loc_821080D0;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,29784
	ctx.r10.s64 = ctx.r11.s64 + 29784;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821080c8
	if (!ctx.cr6.gt) goto loc_821080C8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82108080:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210809c
	if (ctx.cr6.eq) goto loc_8210809C;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x821080a0
	goto loc_821080A0;
loc_8210809C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821080A0:
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x821080b8
	if (!ctx.cr6.eq) goto loc_821080B8;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r9,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_821080B8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,88
	ctx.r7.s64 = ctx.r7.s64 + 88;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82108080
	if (ctx.cr6.lt) goto loc_82108080;
loc_821080C8:
	// stw r4,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
loc_821080D0:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821080f8
	if (ctx.cr0.eq) goto loc_821080F8;
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821080F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82107fac
	goto loc_82107FAC;
loc_821080F8:
	// stw r4,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// b 0x82107fb0
	goto loc_82107FB0;
loc_82108100:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82104350
	ctx.lr = 0x82108114;
	sub_82104350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82107fb0
	if (ctx.cr0.eq) goto loc_82107FB0;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-30016(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82108138:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82107fac
	goto loc_82107FAC;
loc_82108140:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r29,r11,22064
	ctx.r29.s64 = ctx.r11.s64 + 22064;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// lfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// beq cr6,0x82108208
	if (ctx.cr6.eq) goto loc_82108208;
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
loc_82108164:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// lis r31,-32156
	ctx.r31.s64 = -2107375616;
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82107fb0
	if (!ctx.cr0.eq) goto loc_82107FB0;
	// lwz r11,176(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// lwz r11,5856(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 5856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// lwz r11,884(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821081C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821081d4
	if (ctx.cr0.eq) goto loc_821081D4;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_821081D4:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,29784
	ctx.r31.s64 = ctx.r11.s64 + 29784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821102f8
	ctx.lr = 0x821081E8;
	sub_821102F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8210825c
	if (ctx.cr6.eq) goto loc_8210825C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210825c
	if (ctx.cr6.eq) goto loc_8210825C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82108210
	if (!ctx.cr6.eq) goto loc_82108210;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82107fac
	goto loc_82107FAC;
loc_82108208:
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82108164
	goto loc_82108164;
loc_82108210:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82108220
	if (!ctx.cr6.eq) goto loc_82108220;
loc_82108218:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82107fac
	goto loc_82107FAC;
loc_82108220:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8210824c
	if (!ctx.cr6.eq) goto loc_8210824C;
loc_8210823C:
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// bl 0x821044a0
	ctx.lr = 0x82108244;
	sub_821044A0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82107fac
	goto loc_82107FAC;
loc_8210824C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8210823c
	if (ctx.cr6.eq) goto loc_8210823C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8210823c
	if (ctx.cr6.eq) goto loc_8210823C;
loc_8210825C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821042a8
	ctx.lr = 0x82108268;
	sub_821042A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82107fb0
	if (ctx.cr0.eq) goto loc_82107FB0;
	// bl 0x82107730
	ctx.lr = 0x82108274;
	sub_82107730(ctx, base);
	// b 0x82108218
	goto loc_82108218;
loc_82108278:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// b 0x82108138
	goto loc_82108138;
loc_82108290:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r31,r11,22064
	ctx.r31.s64 = ctx.r11.s64 + 22064;
	// lwz r11,5856(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r10,r10,29784
	ctx.r10.s64 = ctx.r10.s64 + 29784;
	// addi r28,r11,21848
	ctx.r28.s64 = ctx.r11.s64 + 21848;
	// li r27,5
	ctx.r27.s64 = 5;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82108324
	if (!ctx.cr6.eq) goto loc_82108324;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210831C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82108324:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82108380
	if (!ctx.cr6.eq) goto loc_82108380;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82108380:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821083dc
	if (!ctx.cr6.eq) goto loc_821083DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// stw r11,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821083D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_821083DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82108434
	if (!ctx.cr6.eq) goto loc_82108434;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// stw r11,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-19024
	ctx.r4.s64 = ctx.r10.s64 + -19024;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210842C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82108434:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// b 0x82108218
	goto loc_82108218;
loc_82108444:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82107fb0
	if (!ctx.cr0.eq) goto loc_82107FB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82108478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r7,r11,1840
	ctx.r7.s64 = ctx.r11.s64 + 1840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,22064
	ctx.r6.s64 = ctx.r10.s64 + 22064;
	// stw r9,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,404(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// li r9,10
	ctx.r9.s64 = 10;
	// lfs f13,56(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f0,880(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 880, temp.u32);
	// stfs f13,876(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 876, temp.u32);
	// stw r11,720(r6)
	REX_STORE_U32(ctx.r6.u32 + 720, ctx.r11.u32);
	// stw r10,884(r6)
	REX_STORE_U32(ctx.r6.u32 + 884, ctx.r10.u32);
	// stw r9,860(r6)
	REX_STORE_U32(ctx.r6.u32 + 860, ctx.r9.u32);
	// stw r8,864(r6)
	REX_STORE_U32(ctx.r6.u32 + 864, ctx.r8.u32);
	// stw r7,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x82107fb0
	goto loc_82107FB0;
loc_821084CC:
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,-19872
	ctx.r9.s64 = ctx.r9.s64 + -19872;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,428(r9)
	REX_STORE_U32(ctx.r9.u32 + 428, ctx.r11.u32);
	// lwz r3,-30020(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -30020);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821084FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,900
	ctx.r9.s64 = 900;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,5856(r11)
	REX_STORE_U32(ctx.r11.u32 + 5856, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r9,5852(r11)
	REX_STORE_U32(ctx.r11.u32 + 5852, ctx.r9.u32);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// stw r8,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r8.u32);
	// stw r7,884(r11)
	REX_STORE_U32(ctx.r11.u32 + 884, ctx.r7.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,860(r11)
	REX_STORE_U32(ctx.r11.u32 + 860, ctx.r6.u32);
	// stw r5,864(r11)
	REX_STORE_U32(ctx.r11.u32 + 864, ctx.r5.u32);
	// blt 0x8210855c
	if (ctx.cr0.lt) goto loc_8210855C;
	// mulli r8,r10,80
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// stw r9,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8210855C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82107fac
	goto loc_82107FAC;
loc_82108564:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r31,r11,22064
	ctx.r31.s64 = ctx.r11.s64 + 22064;
	// lwz r11,5856(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82107fb0
	if (!ctx.cr6.eq) goto loc_82107FB0;
	// bl 0x82107528
	ctx.lr = 0x8210857C;
	sub_82107528(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82107fb4
	goto loc_82107FB4;
}

DEFINE_REX_FUNC(sub_82142958) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82142960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821429b4
	if (ctx.cr6.eq) goto loc_821429B4;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
loc_82142994:
	// lhz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821429b0
	if (ctx.cr6.eq) goto loc_821429B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142994
	if (!ctx.cr6.eq) goto loc_82142994;
	// b 0x821429b4
	goto loc_821429B4;
loc_821429B0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821429B4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821429C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821433E8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214340C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214341c
	if (!ctx.cr0.eq) goto loc_8214341C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82143458
	goto loc_82143458;
loc_8214341C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82143458
	if (ctx.cr0.eq) goto loc_82143458;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,254
	ctx.r4.s64 = 254;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821f4368
	ctx.lr = 0x82143454;
	sub_821F4368(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82143458:
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

DEFINE_REX_FUNC(sub_8214A548) {
	REX_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r5,6
	ctx.r10.s64 = ctx.r5.s64 + 6;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8214EE58) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,6520(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6520);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214ee74
	if (ctx.cr6.eq) goto loc_8214EE74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214eec8
	goto loc_8214EEC8;
loc_8214EE74:
	// stw r8,6552(r11)
	REX_STORE_U32(ctx.r11.u32 + 6552, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,6556(r11)
	REX_STORE_U32(ctx.r11.u32 + 6556, ctx.r7.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r4,6560(r11)
	REX_STORE_U32(ctx.r11.u32 + 6560, ctx.r4.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,6564(r11)
	REX_STORE_U32(ctx.r11.u32 + 6564, ctx.r5.u32);
	// stw r6,6568(r11)
	REX_STORE_U32(ctx.r11.u32 + 6568, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,6540(r11)
	REX_STORE_U32(ctx.r11.u32 + 6540, ctx.r9.u32);
	// stw r10,6532(r11)
	REX_STORE_U32(ctx.r11.u32 + 6532, ctx.r10.u32);
	// stw r31,6536(r11)
	REX_STORE_U32(ctx.r11.u32 + 6536, ctx.r31.u32);
	// stw r10,6544(r11)
	REX_STORE_U32(ctx.r11.u32 + 6544, ctx.r10.u32);
	// stw r10,6548(r11)
	REX_STORE_U32(ctx.r11.u32 + 6548, ctx.r10.u32);
	// stw r8,6520(r11)
	REX_STORE_U32(ctx.r11.u32 + 6520, ctx.r8.u32);
	// stw r31,6524(r11)
	REX_STORE_U32(ctx.r11.u32 + 6524, ctx.r31.u32);
	// stw r7,6660(r11)
	REX_STORE_U32(ctx.r11.u32 + 6660, ctx.r7.u32);
	// stw r10,6664(r11)
	REX_STORE_U32(ctx.r11.u32 + 6664, ctx.r10.u32);
	// stw r10,6472(r11)
	REX_STORE_U32(ctx.r11.u32 + 6472, ctx.r10.u32);
	// stw r10,6476(r11)
	REX_STORE_U32(ctx.r11.u32 + 6476, ctx.r10.u32);
loc_8214EEC8:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821517D8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821517FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215180c
	if (!ctx.cr0.eq) goto loc_8215180C;
loc_82151804:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82151828
	goto loc_82151828;
loc_8215180C:
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x82151804
	if (ctx.cr6.eq) goto loc_82151804;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x821f4098
	ctx.lr = 0x82151820;
	sub_821F4098(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82151828:
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

DEFINE_REX_FUNC(sub_82154710) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,1001
	ctx.r11.s64 = 1001;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,1002
	ctx.r10.s64 = 1002;
	// stw r30,2460(r3)
	REX_STORE_U32(ctx.r3.u32 + 2460, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r30.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r30,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r30.u32);
	// stw r10,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// stw r30,2440(r3)
	REX_STORE_U32(ctx.r3.u32 + 2440, ctx.r30.u32);
	// bl 0x82154df0
	ctx.lr = 0x82154764;
	sub_82154DF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r30.u32);
	// stw r30,2444(r3)
	REX_STORE_U32(ctx.r3.u32 + 2444, ctx.r30.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r30,2448(r3)
	REX_STORE_U32(ctx.r3.u32 + 2448, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x82203a90
	ctx.lr = 0x82154788;
	sub_82203A90(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82203a90
	ctx.lr = 0x82154798;
	sub_82203A90(ctx, base);
	// stw r30,2456(r31)
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r30.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r3,2680
	ctx.r3.s64 = ctx.r3.s64 + 2680;
	// bl 0x82151f58
	ctx.lr = 0x821547AC;
	sub_82151F58(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_821547C8:
	// stw r30,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// sthu r30,448(r10)
	ea = 448 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821547c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821547C8;
	// stw r30,1808(r11)
	REX_STORE_U32(ctx.r11.u32 + 1808, ctx.r30.u32);
	// stw r9,1812(r11)
	REX_STORE_U32(ctx.r11.u32 + 1812, ctx.r9.u32);
	// stw r30,1816(r11)
	REX_STORE_U32(ctx.r11.u32 + 1816, ctx.r30.u32);
	// sth r30,2240(r11)
	REX_STORE_U16(ctx.r11.u32 + 2240, ctx.r30.u16);
	// stw r30,2248(r11)
	REX_STORE_U32(ctx.r11.u32 + 2248, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_82156218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82156220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x821f3b80
	ctx.lr = 0x8215622C;
	sub_821F3B80(ctx, base);
	// lis r8,-32158
	ctx.r8.s64 = -2107506688;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r7,r8,-17812
	ctx.r7.s64 = ctx.r8.s64 + -17812;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-17812(r8)
	REX_STORE_U32(ctx.r8.u32 + -17812, ctx.r11.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r9.u32);
	// bl 0x82162a30
	ctx.lr = 0x82156250;
	sub_82162A30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156360
	if (ctx.cr0.eq) goto loc_82156360;
	// bl 0x82162ae8
	ctx.lr = 0x8215625C;
	sub_82162AE8(ctx, base);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-31468(r30)
	REX_STORE_U32(ctx.r30.u32 + -31468, ctx.r3.u32);
	// bne 0x821562a8
	if (!ctx.cr0.eq) goto loc_821562A8;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lwz r31,-31464(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -31464);
	// bl 0x821585a0
	ctx.lr = 0x82156278;
	sub_821585A0(ctx, base);
	// bl 0x8215b3e0
	ctx.lr = 0x8215627C;
	sub_8215B3E0(ctx, base);
	// bl 0x821585a0
	ctx.lr = 0x82156280;
	sub_821585A0(ctx, base);
	// bl 0x8215b7a0
	ctx.lr = 0x82156284;
	sub_8215B7A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82156360
	if (ctx.cr6.eq) goto loc_82156360;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821562A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82156360
	goto loc_82156360;
loc_821562A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821562B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821562D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215be80
	ctx.lr = 0x821562D4;
	sub_8215BE80(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,-31468(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -31468);
	// addi r31,r11,-17784
	ctx.r31.s64 = ctx.r11.s64 + -17784;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215630C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32156
	ctx.r29.s64 = -2107375616;
	// stw r3,-31472(r29)
	REX_STORE_U32(ctx.r29.u32 + -31472, ctx.r3.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,10872
	ctx.r4.s64 = ctx.r11.s64 + 10872;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215632C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-31472(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -31472);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,-31468(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + -31468);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82156348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82156354
	goto loc_82156354;
loc_8215634C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821f3b80
	ctx.lr = 0x82156354;
	sub_821F3B80(ctx, base);
loc_82156354:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215634c
	if (ctx.cr6.eq) goto loc_8215634C;
loc_82156360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82158118) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82158120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r26,r11,1840
	ctx.r26.s64 = ctx.r11.s64 + 1840;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r10,5040
	ctx.r11.s64 = ctx.r10.s64 + 5040;
	// addi r10,r9,4220
	ctx.r10.s64 = ctx.r9.s64 + 4220;
	// addi r9,r8,4224
	ctx.r9.s64 = ctx.r8.s64 + 4224;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r9,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lfs f0,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r31.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stw r31,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r31.u32);
	// stw r31,148(r30)
	REX_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// stw r31,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r31,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// std r31,96(r30)
	REX_STORE_U64(ctx.r30.u32 + 96, ctx.r31.u64);
	// std r31,104(r30)
	REX_STORE_U64(ctx.r30.u32 + 104, ctx.r31.u64);
	// std r31,112(r30)
	REX_STORE_U64(ctx.r30.u32 + 112, ctx.r31.u64);
	// std r31,120(r30)
	REX_STORE_U64(ctx.r30.u32 + 120, ctx.r31.u64);
	// stw r31,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,156(r30)
	REX_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
	// bl 0x8216b3a0
	ctx.lr = 0x82158198;
	sub_8216B3A0(ctx, base);
	// li r10,50
	ctx.r10.s64 = 50;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// addi r8,r9,4972
	ctx.r8.s64 = ctx.r9.s64 + 4972;
	// addi r9,r11,-244
	ctx.r9.s64 = ctx.r11.s64 + -244;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r8,188(r30)
	REX_STORE_U32(ctx.r30.u32 + 188, ctx.r8.u32);
	// addi r8,r10,4948
	ctx.r8.s64 = ctx.r10.s64 + 4948;
loc_821581BC:
	// stwu r8,260(r9)
	ea = 260 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821581bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821581BC;
	// stw r8,13016(r11)
	REX_STORE_U32(ctx.r11.u32 + 13016, ctx.r8.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r30,13464
	ctx.r10.s64 = ctx.r30.s64 + 13464;
	// addi r8,r9,5008
	ctx.r8.s64 = ctx.r9.s64 + 5008;
	// addi r9,r10,-244
	ctx.r9.s64 = ctx.r10.s64 + -244;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r8,13464(r30)
	REX_STORE_U32(ctx.r30.u32 + 13464, ctx.r8.u32);
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
loc_821581EC:
	// stwu r11,260(r9)
	ea = 260 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821581ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821581EC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,13016(r10)
	REX_STORE_U32(ctx.r10.u32 + 13016, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r9,4704
	ctx.r10.s64 = ctx.r9.s64 + 4704;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,26740(r30)
	REX_STORE_U32(ctx.r30.u32 + 26740, ctx.r10.u32);
	// addi r10,r11,4772
	ctx.r10.s64 = ctx.r11.s64 + 4772;
	// stw r31,26868(r30)
	REX_STORE_U32(ctx.r30.u32 + 26868, ctx.r31.u32);
	// addi r9,r9,5032
	ctx.r9.s64 = ctx.r9.s64 + 5032;
	// stw r31,26872(r30)
	REX_STORE_U32(ctx.r30.u32 + 26872, ctx.r31.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r31,26876(r30)
	REX_STORE_U32(ctx.r30.u32 + 26876, ctx.r31.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r31,26888(r30)
	REX_STORE_U32(ctx.r30.u32 + 26888, ctx.r31.u32);
	// addi r8,r8,4412
	ctx.r8.s64 = ctx.r8.s64 + 4412;
	// stw r31,26892(r30)
	REX_STORE_U32(ctx.r30.u32 + 26892, ctx.r31.u32);
	// addi r28,r30,27856
	ctx.r28.s64 = ctx.r30.s64 + 27856;
	// stw r31,26896(r30)
	REX_STORE_U32(ctx.r30.u32 + 26896, ctx.r31.u32);
	// addi r11,r30,26740
	ctx.r11.s64 = ctx.r30.s64 + 26740;
	// stw r10,27040(r30)
	REX_STORE_U32(ctx.r30.u32 + 27040, ctx.r10.u32);
	// addi r10,r7,4368
	ctx.r10.s64 = ctx.r7.s64 + 4368;
	// stw r31,27072(r30)
	REX_STORE_U32(ctx.r30.u32 + 27072, ctx.r31.u32);
	// addi r11,r30,27152
	ctx.r11.s64 = ctx.r30.s64 + 27152;
	// stw r31,27140(r30)
	REX_STORE_U32(ctx.r30.u32 + 27140, ctx.r31.u32);
	// addi r11,r30,27824
	ctx.r11.s64 = ctx.r30.s64 + 27824;
	// stw r31,27148(r30)
	REX_STORE_U32(ctx.r30.u32 + 27148, ctx.r31.u32);
	// addi r27,r28,16
	ctx.r27.s64 = ctx.r28.s64 + 16;
	// stw r31,27056(r30)
	REX_STORE_U32(ctx.r30.u32 + 27056, ctx.r31.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r31,27060(r30)
	REX_STORE_U32(ctx.r30.u32 + 27060, ctx.r31.u32);
	// stw r31,27064(r30)
	REX_STORE_U32(ctx.r30.u32 + 27064, ctx.r31.u32);
	// stw r31,27068(r30)
	REX_STORE_U32(ctx.r30.u32 + 27068, ctx.r31.u32);
	// stw r9,27152(r30)
	REX_STORE_U32(ctx.r30.u32 + 27152, ctx.r9.u32);
	// stw r31,27160(r30)
	REX_STORE_U32(ctx.r30.u32 + 27160, ctx.r31.u32);
	// stw r31,27164(r30)
	REX_STORE_U32(ctx.r30.u32 + 27164, ctx.r31.u32);
	// stw r31,27168(r30)
	REX_STORE_U32(ctx.r30.u32 + 27168, ctx.r31.u32);
	// stw r31,27432(r30)
	REX_STORE_U32(ctx.r30.u32 + 27432, ctx.r31.u32);
	// stw r31,27436(r30)
	REX_STORE_U32(ctx.r30.u32 + 27436, ctx.r31.u32);
	// stw r31,27440(r30)
	REX_STORE_U32(ctx.r30.u32 + 27440, ctx.r31.u32);
	// stw r8,27824(r30)
	REX_STORE_U32(ctx.r30.u32 + 27824, ctx.r8.u32);
	// stw r31,27836(r30)
	REX_STORE_U32(ctx.r30.u32 + 27836, ctx.r31.u32);
	// stw r31,27840(r30)
	REX_STORE_U32(ctx.r30.u32 + 27840, ctx.r31.u32);
	// stw r31,27844(r30)
	REX_STORE_U32(ctx.r30.u32 + 27844, ctx.r31.u32);
	// stw r10,27856(r30)
	REX_STORE_U32(ctx.r30.u32 + 27856, ctx.r10.u32);
loc_821582A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821568e8
	ctx.lr = 0x821582AC;
	sub_821568E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,1272
	ctx.r27.s64 = ctx.r27.s64 + 1272;
	// bge 0x821582a4
	if (!ctx.cr0.lt) goto loc_821582A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,4356
	ctx.r11.s64 = ctx.r11.s64 + 4356;
	// addi r10,r10,4352
	ctx.r10.s64 = ctx.r10.s64 + 4352;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r11,5104(r28)
	REX_STORE_U32(ctx.r28.u32 + 5104, ctx.r11.u32);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// stw r10,5160(r28)
	REX_STORE_U32(ctx.r28.u32 + 5160, ctx.r10.u32);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// stw r31,7308(r28)
	REX_STORE_U32(ctx.r28.u32 + 7308, ctx.r31.u32);
	// addi r9,r9,-30300
	ctx.r9.s64 = ctx.r9.s64 + -30300;
	// stw r31,7312(r28)
	REX_STORE_U32(ctx.r28.u32 + 7312, ctx.r31.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,7316(r28)
	REX_STORE_U32(ctx.r28.u32 + 7316, ctx.r31.u32);
	// addi r8,r8,-30268
	ctx.r8.s64 = ctx.r8.s64 + -30268;
	// stw r31,7324(r28)
	REX_STORE_U32(ctx.r28.u32 + 7324, ctx.r31.u32);
	// li r7,-99
	ctx.r7.s64 = -99;
	// stw r31,5136(r28)
	REX_STORE_U32(ctx.r28.u32 + 5136, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,7328(r28)
	REX_STORE_U32(ctx.r28.u32 + 7328, ctx.r31.u32);
	// addi r29,r29,-30228
	ctx.r29.s64 = ctx.r29.s64 + -30228;
	// stw r7,5144(r28)
	REX_STORE_U32(ctx.r28.u32 + 5144, ctx.r7.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r31,7332(r28)
	REX_STORE_U32(ctx.r28.u32 + 7332, ctx.r31.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r31,5148(r28)
	REX_STORE_U32(ctx.r28.u32 + 5148, ctx.r31.u32);
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// stw r27,7336(r28)
	REX_STORE_U32(ctx.r28.u32 + 7336, ctx.r27.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r31,5152(r28)
	REX_STORE_U32(ctx.r28.u32 + 5152, ctx.r31.u32);
	// addi r10,r10,4220
	ctx.r10.s64 = ctx.r10.s64 + 4220;
	// stw r31,5156(r28)
	REX_STORE_U32(ctx.r28.u32 + 5156, ctx.r31.u32);
	// addi r7,r6,4208
	ctx.r7.s64 = ctx.r6.s64 + 4208;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// addi r6,r5,4220
	ctx.r6.s64 = ctx.r5.s64 + 4220;
	// stw r31,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// li r3,8000
	ctx.r3.s64 = 8000;
	// stw r31,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// addi r11,r29,564
	ctx.r11.s64 = ctx.r29.s64 + 564;
	// stw r7,508(r29)
	REX_STORE_U32(ctx.r29.u32 + 508, ctx.r7.u32);
	// addi r11,r28,5160
	ctx.r11.s64 = ctx.r28.s64 + 5160;
	// stw r6,564(r29)
	REX_STORE_U32(ctx.r29.u32 + 564, ctx.r6.u32);
	// stw r31,568(r29)
	REX_STORE_U32(ctx.r29.u32 + 568, ctx.r31.u32);
	// stw r31,572(r29)
	REX_STORE_U32(ctx.r29.u32 + 572, ctx.r31.u32);
	// stw r5,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r5.u32);
	// stw r31,436(r29)
	REX_STORE_U32(ctx.r29.u32 + 436, ctx.r31.u32);
	// stw r31,488(r29)
	REX_STORE_U32(ctx.r29.u32 + 488, ctx.r31.u32);
	// stw r31,492(r29)
	REX_STORE_U32(ctx.r29.u32 + 492, ctx.r31.u32);
	// stw r31,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
	// stw r31,88(r29)
	REX_STORE_U32(ctx.r29.u32 + 88, ctx.r31.u32);
	// stw r31,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r31.u32);
	// stw r31,104(r29)
	REX_STORE_U32(ctx.r29.u32 + 104, ctx.r31.u32);
	// stw r31,496(r29)
	REX_STORE_U32(ctx.r29.u32 + 496, ctx.r31.u32);
	// stw r31,504(r29)
	REX_STORE_U32(ctx.r29.u32 + 504, ctx.r31.u32);
	// stw r27,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r27.u32);
	// stw r31,576(r29)
	REX_STORE_U32(ctx.r29.u32 + 576, ctx.r31.u32);
	// stw r31,580(r29)
	REX_STORE_U32(ctx.r29.u32 + 580, ctx.r31.u32);
	// stw r31,584(r29)
	REX_STORE_U32(ctx.r29.u32 + 584, ctx.r31.u32);
	// stw r4,572(r29)
	REX_STORE_U32(ctx.r29.u32 + 572, ctx.r4.u32);
	// bl 0x821f90f0
	ctx.lr = 0x821583BC;
	sub_821F90F0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,52(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r3,568(r29)
	REX_STORE_U32(ctx.r29.u32 + 568, ctx.r3.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,35232
	ctx.r5.u64 = ctx.r11.u64 | 35232;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,35260
	ctx.r10.u64 = ctx.r10.u64 | 35260;
	// ori r9,r9,35264
	ctx.r9.u64 = ctx.r9.u64 | 35264;
	// ori r8,r8,35948
	ctx.r8.u64 = ctx.r8.u64 | 35948;
	// ori r7,r7,35216
	ctx.r7.u64 = ctx.r7.u64 | 35216;
	// ori r6,r6,35220
	ctx.r6.u64 = ctx.r6.u64 | 35220;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r31,604(r29)
	REX_STORE_U32(ctx.r29.u32 + 604, ctx.r31.u32);
	// ori r4,r4,35224
	ctx.r4.u64 = ctx.r4.u64 | 35224;
	// stw r31,608(r29)
	REX_STORE_U32(ctx.r29.u32 + 608, ctx.r31.u32);
	// ori r28,r3,35228
	ctx.r28.u64 = ctx.r3.u64 | 35228;
	// stw r31,612(r29)
	REX_STORE_U32(ctx.r29.u32 + 612, ctx.r31.u32);
	// stw r31,616(r29)
	REX_STORE_U32(ctx.r29.u32 + 616, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,620(r29)
	REX_STORE_U32(ctx.r29.u32 + 620, ctx.r31.u32);
	// stw r31,588(r29)
	REX_STORE_U32(ctx.r29.u32 + 588, ctx.r31.u32);
	// stw r31,592(r29)
	REX_STORE_U32(ctx.r29.u32 + 592, ctx.r31.u32);
	// stw r31,596(r29)
	REX_STORE_U32(ctx.r29.u32 + 596, ctx.r31.u32);
	// stw r27,60(r29)
	REX_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfsx f0,r30,r28
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// stw r27,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// stw r31,27776(r30)
	REX_STORE_U32(ctx.r30.u32 + 27776, ctx.r31.u32);
	// stw r11,27448(r30)
	REX_STORE_U32(ctx.r30.u32 + 27448, ctx.r11.u32);
	// stw r11,27452(r30)
	REX_STORE_U32(ctx.r30.u32 + 27452, ctx.r11.u32);
	// stw r11,27716(r30)
	REX_STORE_U32(ctx.r30.u32 + 27716, ctx.r11.u32);
	// stw r31,27812(r30)
	REX_STORE_U32(ctx.r30.u32 + 27812, ctx.r31.u32);
	// stwx r31,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// stwx r31,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r31,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r31,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u32);
	// stwx r31,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82163D58) {
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
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r6,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// b 0x82163d98
	goto loc_82163D98;
loc_82163D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f3b80
	ctx.lr = 0x82163D98;
	sub_821F3B80(ctx, base);
loc_82163D98:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82163d90
	if (!ctx.cr6.eq) goto loc_82163D90;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// clrlwi. r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82163dc0
	if (ctx.cr0.eq) goto loc_82163DC0;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82163DC0:
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82163dd0
	if (ctx.cr6.lt) goto loc_82163DD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82163e08
	goto loc_82163E08;
loc_82163DD0:
	// subf r10,r11,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bl 0x8211ef18
	ctx.lr = 0x82163DF4;
	sub_8211EF18(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82163E08:
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

DEFINE_REX_FUNC(sub_82166B28) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82166B5C:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82166B68:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// bdnz 0x82166b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166B68;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x82166b5c
	if (ctx.cr6.lt) goto loc_82166B5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r11,1840
	ctx.r6.s64 = ctx.r11.s64 + 1840;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f8,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
loc_82166BA8:
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82166BB4:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82166bcc
	if (!ctx.cr6.lt) goto loc_82166BCC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82166BCC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82166bdc
	if (!ctx.cr6.gt) goto loc_82166BDC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82166BDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82166bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166BB4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// blt cr6,0x82166ba8
	if (ctx.cr6.lt) goto loc_82166BA8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82166c94
	if (ctx.cr6.lt) goto loc_82166C94;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r9,r31
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821669c8
	ctx.lr = 0x82166C30;
	sub_821669C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166a58
	ctx.lr = 0x82166C3C;
	sub_82166A58(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821669c8
	ctx.lr = 0x82166C60;
	sub_821669C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166ab8
	ctx.lr = 0x82166C6C;
	sub_82166AB8(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82166c80
	if (!ctx.cr6.lt) goto loc_82166C80;
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_82166C80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166a58
	ctx.lr = 0x82166C8C;
	sub_82166A58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82166ab8
	ctx.lr = 0x82166C94;
	sub_82166AB8(ctx, base);
loc_82166C94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8216F478) {
	REX_FUNC_PROLOGUE();
	// sth r4,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216FDA0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,19004(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 19004);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,116
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(116));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,100
	ctx.r7.s64 = 100;
	// addi r3,r10,19008
	ctx.r3.s64 = ctx.r10.s64 + 19008;
	// stw r9,19056(r10)
	REX_STORE_U32(ctx.r10.u32 + 19056, ctx.r9.u32);
	// stw r8,19012(r10)
	REX_STORE_U32(ctx.r10.u32 + 19012, ctx.r8.u32);
	// lwz r10,19004(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19004);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// mulli r9,r9,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,19004(r11)
	REX_STORE_U32(ctx.r11.u32 + 19004, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170A38) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7484
	ctx.r11.s64 = ctx.r11.s64 + 7484;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82170a64
	if (ctx.cr0.eq) goto loc_82170A64;
	// bl 0x822031b0
	ctx.lr = 0x82170A64;
	sub_822031B0(ctx, base);
loc_82170A64:
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

DEFINE_REX_FUNC(sub_82171880) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,7984
	ctx.r11.s64 = ctx.r11.s64 + 7984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82172510
	ctx.lr = 0x821718AC;
	sub_82172510(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,7664
	ctx.r11.s64 = ctx.r11.s64 + 7664;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x821718c8
	if (ctx.cr0.eq) goto loc_821718C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822031b0
	ctx.lr = 0x821718C8;
	sub_822031B0(ctx, base);
loc_821718C8:
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

DEFINE_REX_FUNC(sub_82172A90) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82172AC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82172AC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172ae8
	if (ctx.cr6.eq) goto loc_82172AE8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172AE0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_82172AE8:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r25,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172b0c
	if (!ctx.cr6.eq) goto loc_82172B0C;
loc_82172B00:
	// li r3,-9
	ctx.r3.s64 = -9;
loc_82172B04:
	// stw r23,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r23.u32);
	// b 0x82172ae0
	goto loc_82172AE0;
loc_82172B0C:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82172b20
	if (ctx.cr6.eq) goto loc_82172B20;
loc_82172B18:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82172b04
	goto loc_82172B04;
loc_82172B20:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172b00
	if (ctx.cr6.eq) goto loc_82172B00;
	// lwz r24,8(r10)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82172b00
	if (ctx.cr6.eq) goto loc_82172B00;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172b00
	if (ctx.cr6.eq) goto loc_82172B00;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82172b18
	if (!ctx.cr6.lt) goto loc_82172B18;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r29,32(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,68(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,96(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// mullw r26,r9,r31
	ctx.r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// beq cr6,0x82172bb0
	if (ctx.cr6.eq) goto loc_82172BB0;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82172BB0:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// ble cr6,0x82172bf8
	if (!ctx.cr6.gt) goto loc_82172BF8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82172bd4
	if (!ctx.cr6.gt) goto loc_82172BD4;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82172BD4:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172bf8
	if (ctx.cr6.eq) goto loc_82172BF8;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,1036
	ctx.r3.s64 = ctx.r11.s64 + 1036;
	// bl 0x821718e8
	ctx.lr = 0x82172BF8;
	sub_821718E8(ctx, base);
loc_82172BF8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82172c60
	if (!ctx.cr6.lt) goto loc_82172C60;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82172c14
	if (!ctx.cr6.eq) goto loc_82172C14;
	// stw r25,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r25.u32);
	// b 0x82172c60
	goto loc_82172C60;
loc_82172C14:
	// lwz r29,68(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82172c60
	if (!ctx.cr6.lt) goto loc_82172C60;
loc_82172C24:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// subf r30,r31,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c54
	if (ctx.cr6.eq) goto loc_82172C54;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r7,-2
	ctx.r7.s64 = -2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r3,r11,1036
	ctx.r3.s64 = ctx.r11.s64 + 1036;
	// lwz r4,36(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x821718e8
	ctx.lr = 0x82172C54;
	sub_821718E8(ctx, base);
loc_82172C54:
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82172c24
	if (ctx.cr6.lt) goto loc_82172C24;
loc_82172C60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82172b18
	if (ctx.cr6.eq) goto loc_82172B18;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82203a90
	ctx.lr = 0x82172C7C;
	sub_82203A90(ctx, base);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172cb0
	if (ctx.cr6.eq) goto loc_82172CB0;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82172CB0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82172b00
	if (ctx.cr0.lt) goto loc_82172B00;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x82172b18
	goto loc_82172B18;
}

DEFINE_REX_FUNC(sub_8217F9B4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82180F30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82412350
	ctx.lr = 0x82180F54;
	sub_82412350(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// blt cr6,0x82180f60
	if (ctx.cr6.lt) goto loc_82180F60;
	// li r3,255
	ctx.r3.s64 = 255;
loc_82180F60:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82180f88
	if (!ctx.cr6.gt) goto loc_82180F88;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_82180F78:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82180f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82180F78;
loc_82180F88:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821821B0) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821822A0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x821f9368
	ctx.lr = 0x821822C8;
	sub_821F9368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218231c
	if (ctx.cr0.eq) goto loc_8218231C;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
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
loc_8218231C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8213dcc0
	ctx.lr = 0x82182334;
	sub_8213DCC0(ctx, base);
}

DEFINE_REX_FUNC(sub_82183700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82183708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82183740
	if (ctx.cr6.lt) goto loc_82183740;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822031b0
	ctx.lr = 0x82183734;
	sub_822031B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,7332
	ctx.r3.s64 = ctx.r11.s64 + 7332;
	// bl 0x821f9480
	ctx.lr = 0x82183740;
	sub_821F9480(ctx, base);
loc_82183740:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8218376c
	if (!ctx.cr6.eq) goto loc_8218376C;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x821837a4
	goto loc_821837A4;
loc_8218376C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82183790
	if (ctx.cr0.eq) goto loc_82183790;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821837a8
	if (!ctx.cr6.eq) goto loc_821837A8;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x821837a8
	goto loc_821837A8;
loc_82183790:
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821837a8
	if (!ctx.cr6.eq) goto loc_821837A8;
loc_821837A4:
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_821837A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821838a8
	if (!ctx.cr0.eq) goto loc_821838A8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_821837C4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82183828
	if (!ctx.cr6.eq) goto loc_82183828;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82183838
	if (ctx.cr0.eq) goto loc_82183838;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82183800
	if (!ctx.cr6.eq) goto loc_82183800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82162388
	ctx.lr = 0x82183800;
	sub_82162388(ctx, base);
loc_82183800:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821623f0
	ctx.lr = 0x82183824;
	sub_821623F0(ctx, base);
	// b 0x82183898
	goto loc_82183898;
loc_82183828:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8218385c
	if (!ctx.cr0.eq) goto loc_8218385C;
loc_82183838:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// stb r29,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82183898
	goto loc_82183898;
loc_8218385C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82183874
	if (!ctx.cr6.eq) goto loc_82183874;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821623f0
	ctx.lr = 0x82183874;
	sub_821623F0(ctx, base);
loc_82183874:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82162388
	ctx.lr = 0x82183898;
	sub_82162388(ctx, base);
loc_82183898:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821837c4
	if (ctx.cr0.eq) goto loc_821837C4;
loc_821838A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218C428) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8218C430;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,204
	ctx.r27.s64 = ctx.r3.s64 + 204;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8258bb00
	ctx.lr = 0x8218C450;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a558
	ctx.lr = 0x8218C458;
	sub_8218A558(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8218c580
	if (ctx.cr6.lt) goto loc_8218C580;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218c484
	if (!ctx.cr6.eq) goto loc_8218C484;
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x8218c494
	goto loc_8218C494;
loc_8218C484:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a3b8
	ctx.lr = 0x8218C490;
	sub_8218A3B8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8218C494:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8218c578
	if (ctx.cr6.lt) goto loc_8218C578;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8218c578
	if (!ctx.cr6.eq) goto loc_8218C578;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8218c578
	if (ctx.cr6.eq) goto loc_8218C578;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c578
	if (!ctx.cr6.eq) goto loc_8218C578;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8218c580
	if (ctx.cr6.eq) goto loc_8218C580;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8218c580
	if (ctx.cr6.eq) goto loc_8218C580;
	// lwz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8218c508
	if (!ctx.cr6.lt) goto loc_8218C508;
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// b 0x8218c528
	goto loc_8218C528;
loc_8218C508:
	// lwz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8218c524
	if (!ctx.cr6.gt) goto loc_8218C524;
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// b 0x8218c528
	goto loc_8218C528;
loc_8218C524:
	// stfs f31,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 20, temp.u32);
loc_8218C528:
	// lwz r31,228(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218c56c
	if (ctx.cr6.eq) goto loc_8218C56C;
loc_8218C534:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218c54c
	if (ctx.cr6.eq) goto loc_8218C54C;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8218c550
	goto loc_8218C550;
loc_8218C54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8218C550:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218C564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8218c534
	if (!ctx.cr6.eq) goto loc_8218C534;
loc_8218C56C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82190b50
	ctx.lr = 0x8218C574;
	sub_82190B50(ctx, base);
	// b 0x8218c580
	goto loc_8218C580;
loc_8218C578:
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,10
	ctx.r28.u64 = ctx.r28.u64 | 10;
loc_8218C580:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8258baf0
	ctx.lr = 0x8218C588;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218EF6C) {
	REX_FUNC_PROLOGUE();
	// li r11,48
	ctx.r11.s64 = 48;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82190650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x82190658;
	__savegprlr_22(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// li r28,8
	ctx.r28.s64 = 8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821906a0
	if (ctx.cr6.eq) goto loc_821906A0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821906a8
	if (!ctx.cr6.eq) goto loc_821906A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821906A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82190704
	if (ctx.cr6.eq) goto loc_82190704;
loc_821906A8:
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82190704
	if (ctx.cr6.eq) goto loc_82190704;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821906CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821906E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r24,468(r31)
	REX_STORE_U8(ctx.r31.u32 + 468, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82190700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82190704:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x821907d0
	if (ctx.cr6.eq) goto loc_821907D0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82203a90
	ctx.lr = 0x82190720;
	sub_82203A90(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82203a90
	ctx.lr = 0x82190730;
	sub_82203A90(ctx, base);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219074C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821907b4
	if (ctx.cr6.eq) goto loc_821907B4;
loc_8219075C:
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82190778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82411860
	ctx.lr = 0x82190784;
	sub_82411860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821907a4
	if (!ctx.cr6.eq) goto loc_821907A4;
	// lhz r11,1142(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 1142);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821907a4
	if (!ctx.cr6.lt) goto loc_821907A4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_821907A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219075c
	if (ctx.cr6.lt) goto loc_8219075C;
loc_821907B4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190810
	if (!ctx.cr6.eq) goto loc_82190810;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821907D0:
	// bl 0x82203a90
	ctx.lr = 0x821907D4;
	sub_82203A90(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82203a90
	ctx.lr = 0x821907E4;
	sub_82203A90(ctx, base);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82190800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1142(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 1142);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82190810
	if (!ctx.cr6.lt) goto loc_82190810;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82190810:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82190934
	if (ctx.cr6.lt) goto loc_82190934;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82190858
	if (!ctx.cr6.eq) goto loc_82190858;
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82190850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8219087c
	goto loc_8219087C;
loc_82190858:
	// stw r26,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r24,476(r31)
	REX_STORE_U8(ctx.r31.u32 + 476, ctx.r24.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82190878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8219087C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82190934
	if (ctx.cr6.lt) goto loc_82190934;
	// sth r28,456(r31)
	REX_STORE_U16(ctx.r31.u32 + 456, ctx.r28.u16);
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// stw r27,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r27.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// ori r4,r4,32815
	ctx.r4.u64 = ctx.r4.u64 | 32815;
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x821f4a68
	ctx.lr = 0x821908A4;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821908c8
	if (ctx.cr6.eq) goto loc_821908C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r22,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,11508
	ctx.r10.s64 = ctx.r11.s64 + 11508;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821908cc
	goto loc_821908CC;
loc_821908C8:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_821908CC:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r9,14
	ctx.r7.u64 = ctx.r9.u64 | 14;
	// and r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82190904
	if (ctx.cr6.lt) goto loc_82190904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199118
	ctx.lr = 0x821908F0;
	sub_82199118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82190904
	if (ctx.cr6.lt) goto loc_82190904;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82190924
	goto loc_82190924;
loc_82190904:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82190924
	if (ctx.cr6.eq) goto loc_82190924;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82190924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82190924:
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82190934
	if (ctx.cr6.lt) goto loc_82190934;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82190934:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82199560) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82199778) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82199780;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// beq cr6,0x821997b0
	if (ctx.cr6.eq) goto loc_821997B0;
	// li r28,16
	ctx.r28.s64 = 16;
loc_821997B0:
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821997c0
	if (ctx.cr6.eq) goto loc_821997C0;
	// ori r28,r28,8
	ctx.r28.u64 = ctx.r28.u64 | 8;
loc_821997C0:
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,1840
	ctx.r10.s64 = ctx.r11.s64 + 1840;
	// lfd f2,128(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 128);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82204760
	ctx.lr = 0x821997D8;
	sub_82204760(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219980C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8219993c
	if (ctx.cr6.lt) goto loc_8219993C;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lis r10,8324
	ctx.r10.s64 = 545521664;
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// ori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 | 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lhz r8,2(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// sth r8,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// beq cr6,0x821998fc
	if (ctx.cr6.eq) goto loc_821998FC;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219985C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821f4a68
	ctx.lr = 0x82199888;
	sub_821F4A68(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821998a4
	if (!ctx.cr6.eq) goto loc_821998A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_821998A4:
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821998d4
	if (ctx.cr6.eq) goto loc_821998D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
loc_821998D4:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821998EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821f4b88
	ctx.lr = 0x821998FC;
	sub_821F4B88(ctx, base);
loc_821998FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8219993c
	if (ctx.cr6.lt) goto loc_8219993C;
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4a68
	ctx.lr = 0x8219991C;
	sub_821F4A68(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lis r8,-32761
	ctx.r8.s64 = -2147024896;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r8,14
	ctx.r5.u64 = ctx.r8.u64 | 14;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_8219993C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A1028) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a106c
	if (ctx.cr6.eq) goto loc_821A106C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821a106c
	if (ctx.cr6.eq) goto loc_821A106C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A106C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A106C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0370
	ctx.lr = 0x821A1074;
	sub_821A0370(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// stw r11,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821A3088) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821a315c
	if (ctx.cr6.lt) goto loc_821A315C;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821a3104
	if (!ctx.cr6.eq) goto loc_821A3104;
	// lbz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a3104
	if (!ctx.cr6.eq) goto loc_821A3104;
	// lhz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// beq cr6,0x821a3104
	if (ctx.cr6.eq) goto loc_821A3104;
	// lbz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 216);
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a30f4
	if (!ctx.cr6.eq) goto loc_821A30F4;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a315c
	if (ctx.cr6.eq) goto loc_821A315C;
loc_821A30F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x821a3130
	goto loc_821A3130;
loc_821A3104:
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// beq cr6,0x821a3120
	if (ctx.cr6.eq) goto loc_821A3120;
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a315c
	if (!ctx.cr6.eq) goto loc_821A315C;
loc_821A3120:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a315c
	if (ctx.cr6.eq) goto loc_821A315C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
loc_821A3130:
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// sth r10,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A3150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 216);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// stb r6,216(r31)
	REX_STORE_U8(ctx.r31.u32 + 216, ctx.r6.u8);
loc_821A315C:
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

DEFINE_REX_FUNC(sub_821A7188) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,9476
	ctx.r9.s64 = ctx.r11.s64 + 9476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821a71c4
	if (ctx.cr6.eq) goto loc_821A71C4;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// bl 0x821f4b88
	ctx.lr = 0x821A71C0;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A71C4:
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

DEFINE_REX_FUNC(sub_821A8370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821A8378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A83A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stb r6,140(r31)
	REX_STORE_U8(ctx.r31.u32 + 140, ctx.r6.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,64(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821A83DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r3,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// sth r30,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// ori r8,r10,41
	ctx.r8.u64 = ctx.r10.u64 | 41;
	// stb r9,82(r31)
	REX_STORE_U8(ctx.r31.u32 + 82, ctx.r9.u8);
	// stw r30,83(r31)
	REX_STORE_U32(ctx.r31.u32 + 83, ctx.r30.u32);
	// addi r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 + 172;
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x821a5728
	ctx.lr = 0x821A8428;
	sub_821A5728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AC118) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_821AC12C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821ac12c
	if (!ctx.cr0.eq) goto loc_821AC12C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821ac174
	if (!ctx.cr6.eq) goto loc_821AC174;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x821ac174
	if (!ctx.cr6.eq) goto loc_821AC174;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac174
	if (ctx.cr0.eq) goto loc_821AC174;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x821ac118
	ctx.lr = 0x821AC174;
	sub_821AC118(ctx, base);
loc_821AC174:
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

DEFINE_REX_FUNC(sub_821ADCD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ADF20) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12180);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ADF48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE008) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE200) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE2B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE560) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12700);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12176(r3)
	REX_STORE_U32(ctx.r3.u32 + 12176, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,10460(r3)
	REX_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AEE28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF000) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF238) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821AF240;
	__savegprlr_29(ctx, base);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lbz r9,10864(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,13320
	ctx.r8.s64 = ctx.r8.s64 + 13320;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x400) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B4878) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B59F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x821B59F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821b5930
	ctx.lr = 0x821B5A08;
	sub_821B5930(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// stw r27,100(r28)
	REX_STORE_U32(ctx.r28.u32 + 100, ctx.r27.u32);
	// ori r26,r10,14
	ctx.r26.u64 = ctx.r10.u64 | 14;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821b5a88
	if (!ctx.cr6.lt) goto loc_821B5A88;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// bge cr6,0x821b5a3c
	if (!ctx.cr6.lt) goto loc_821B5A3C;
	// li r30,100
	ctx.r30.s64 = 100;
loc_821B5A3C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mulli r3,r30,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(12));
	// bl 0x821f4a68
	ctx.lr = 0x821B5A48;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b5a58
	if (!ctx.cr0.eq) goto loc_821B5A58;
	// stw r26,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r26.u32);
	// b 0x821b5a88
	goto loc_821B5A88;
loc_821B5A58:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5a84
	if (ctx.cr6.eq) goto loc_821B5A84;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x82203350
	ctx.lr = 0x821B5A78;
	sub_82203350(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x821f4b88
	ctx.lr = 0x821B5A84;
	sub_821F4B88(ctx, base);
loc_821B5A84:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B5A88:
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 116);
	// addi r31,r28,108
	ctx.r31.s64 = ctx.r28.s64 + 108;
	// stw r27,112(r28)
	REX_STORE_U32(ctx.r28.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x821b5af8
	if (!ctx.cr6.lt) goto loc_821B5AF8;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// bge cr6,0x821b5aac
	if (!ctx.cr6.lt) goto loc_821B5AAC;
	// li r30,50
	ctx.r30.s64 = 50;
loc_821B5AAC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821f4a68
	ctx.lr = 0x821B5AB8;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b5ac8
	if (!ctx.cr0.eq) goto loc_821B5AC8;
	// stw r26,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r26.u32);
	// b 0x821b5af8
	goto loc_821B5AF8;
loc_821B5AC8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5af4
	if (ctx.cr6.eq) goto loc_821B5AF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82203350
	ctx.lr = 0x821B5AE8;
	sub_82203350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f4b88
	ctx.lr = 0x821B5AF4;
	sub_821F4B88(ctx, base);
loc_821B5AF4:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B5AF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5b18
	if (ctx.cr0.eq) goto loc_821B5B18;
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 276);
	// addi r31,r28,268
	ctx.r31.s64 = ctx.r28.s64 + 268;
	// stw r27,272(r28)
	REX_STORE_U32(ctx.r28.u32 + 272, ctx.r27.u32);
	// b 0x821b5c04
	goto loc_821B5C04;
loc_821B5B18:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 288);
	// addi r31,r28,280
	ctx.r31.s64 = ctx.r28.s64 + 280;
	// stw r27,284(r28)
	REX_STORE_U32(ctx.r28.u32 + 284, ctx.r27.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x821b5b88
	if (!ctx.cr6.lt) goto loc_821B5B88;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x821b5b3c
	if (!ctx.cr6.lt) goto loc_821B5B3C;
	// li r30,2
	ctx.r30.s64 = 2;
loc_821B5B3C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4a68
	ctx.lr = 0x821B5B48;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b5b58
	if (!ctx.cr0.eq) goto loc_821B5B58;
	// stw r26,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r26.u32);
	// b 0x821b5b88
	goto loc_821B5B88;
loc_821B5B58:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5b84
	if (ctx.cr6.eq) goto loc_821B5B84;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203350
	ctx.lr = 0x821B5B78;
	sub_82203350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f4b88
	ctx.lr = 0x821B5B84;
	sub_821F4B88(ctx, base);
loc_821B5B84:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B5B88:
	// lwz r11,300(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 300);
	// addi r31,r28,292
	ctx.r31.s64 = ctx.r28.s64 + 292;
	// stw r27,296(r28)
	REX_STORE_U32(ctx.r28.u32 + 296, ctx.r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821b5bf8
	if (!ctx.cr6.lt) goto loc_821B5BF8;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x821b5bac
	if (!ctx.cr6.lt) goto loc_821B5BAC;
	// li r30,16
	ctx.r30.s64 = 16;
loc_821B5BAC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4a68
	ctx.lr = 0x821B5BB8;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b5bc8
	if (!ctx.cr0.eq) goto loc_821B5BC8;
	// stw r26,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r26.u32);
	// b 0x821b5bf8
	goto loc_821B5BF8;
loc_821B5BC8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5bf4
	if (ctx.cr6.eq) goto loc_821B5BF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203350
	ctx.lr = 0x821B5BE8;
	sub_82203350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f4b88
	ctx.lr = 0x821B5BF4;
	sub_821F4B88(ctx, base);
loc_821B5BF4:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B5BF8:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 312);
	// addi r31,r28,304
	ctx.r31.s64 = ctx.r28.s64 + 304;
	// stw r27,308(r28)
	REX_STORE_U32(ctx.r28.u32 + 308, ctx.r27.u32);
loc_821B5C04:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821b5c68
	if (!ctx.cr6.lt) goto loc_821B5C68;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x821b5c1c
	if (!ctx.cr6.lt) goto loc_821B5C1C;
	// li r30,16
	ctx.r30.s64 = 16;
loc_821B5C1C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4a68
	ctx.lr = 0x821B5C28;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821b5c38
	if (!ctx.cr0.eq) goto loc_821B5C38;
	// stw r26,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r26.u32);
	// b 0x821b5c68
	goto loc_821B5C68;
loc_821B5C38:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5c64
	if (ctx.cr6.eq) goto loc_821B5C64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203350
	ctx.lr = 0x821B5C58;
	sub_82203350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f4b88
	ctx.lr = 0x821B5C64;
	sub_821F4B88(ctx, base);
loc_821B5C64:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821B5C68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C3A90) {
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
	// beq cr6,0x821c3ad4
	if (ctx.cr6.eq) goto loc_821C3AD4;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x821c3a90
	ctx.lr = 0x821C3AB4;
	sub_821C3A90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x821f4b88
	ctx.lr = 0x821C3AC8;
	sub_821F4B88(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x821C3AD4;
	sub_821F4B88(ctx, base);
loc_821C3AD4:
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

DEFINE_REX_FUNC(sub_821C5058) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x821C5060;
	__savegprlr_26(ctx, base);
	// lwz r27,4(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
loc_821C5068:
	// lwz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821c5138
	if (!ctx.cr6.lt) goto loc_821C5138;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_821C5080:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// lhz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r3,r3,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r31,r31,3
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_821C50C0:
	// lwz r26,-4(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821c50f8
	if (!ctx.cr6.lt) goto loc_821C50F8;
	// lwz r26,4(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x821c50f8
	if (!ctx.cr6.gt) goto loc_821C50F8;
	// lwz r26,0(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821c50f8
	if (!ctx.cr6.lt) goto loc_821C50F8;
	// lwz r26,8(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x821c50f8
	if (!ctx.cr6.gt) goto loc_821C50F8;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
loc_821C50F8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x821c50c0
	if (!ctx.cr6.eq) goto loc_821C50C0;
	// rlwinm r9,r6,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// clrlwi r8,r6,3
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// dcbf r9,r7
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821c5080
	if (ctx.cr6.lt) goto loc_821C5080;
loc_821C5138:
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c5068
	if (!ctx.cr6.eq) goto loc_821C5068;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CA098) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x821CA0A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,9096
	ctx.r27.s64 = 9096;
	// addi r31,r29,10272
	ctx.r31.s64 = ctx.r29.s64 + 10272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821ca0cc
	if (!ctx.cr6.gt) goto loc_821CA0CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bdb18
	ctx.lr = 0x821CA0CC;
	sub_821BDB18(ctx, base);
loc_821CA0CC:
	// li r11,8199
	ctx.r11.s64 = 8199;
	// li r10,2609
	ctx.r10.s64 = 2609;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,10396(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 10396);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,2607
	ctx.r8.u64 = ctx.r8.u64 | 2607;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,-16380
	ctx.r5.s64 = -1073479680;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r5,r5,15360
	ctx.r5.u64 = ctx.r5.u64 | 15360;
	// li r4,2609
	ctx.r4.s64 = 2609;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r25,8
	ctx.r25.s64 = 8;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stwu r25,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r4.u32 = ea;
	// stw r4,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
loc_821CA148:
	// cntlzd r10,r30
	ctx.r10.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// lwz r9,52(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r30,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r30
	ctx.r8.u64 = ~ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r28,r8
	ctx.r28.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r28,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r25,r4
	ctx.r11.u64 = ctx.r25.u64 + ctx.r4.u64;
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821ca1b8
	if (ctx.cr6.lt) goto loc_821CA1B8;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c9990
	ctx.lr = 0x821CA1A0;
	sub_821C9990(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// sld r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r11.u8 & 0x7F));
	// b 0x821ca200
	goto loc_821CA200;
loc_821CA1B8:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// addi r9,r26,-1
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
loc_821CA1DC:
	// ld r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 4);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ld r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 12);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// rldicr r30,r30,1,62
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// std r11,4(r4)
	REX_STORE_U64(ctx.r4.u32 + 4, ctx.r11.u64);
	// std r10,12(r4)
	REX_STORE_U64(ctx.r4.u32 + 12, ctx.r10.u64);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x821ca1dc
	if (!ctx.cr0.eq) goto loc_821CA1DC;
loc_821CA200:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x821ca148
	if (!ctx.cr6.eq) goto loc_821CA148;
	// stw r4,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1920) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x821D1928;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821d194c
	if (!ctx.cr6.eq) goto loc_821D194C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821d195c
	if (!ctx.cr6.eq) goto loc_821D195C;
loc_821D194C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x821d1964
	if (!ctx.cr6.eq) goto loc_821D1964;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1964
	if (ctx.cr0.eq) goto loc_821D1964;
loc_821D195C:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x821d1968
	goto loc_821D1968;
loc_821D1964:
	// li r21,0
	ctx.r21.s64 = 0;
loc_821D1968:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r30.u64;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r27,r7,31
	ctx.r27.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r23,r10,r6
	ctx.r23.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d19b0
	if (ctx.cr6.eq) goto loc_821D19B0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28280
	ctx.r4.s64 = ctx.r11.s64 + 28280;
	// bl 0x821d44b0
	ctx.lr = 0x821D19B0;
	sub_821D44B0(ctx, base);
loc_821D19B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821d19c4
	if (!ctx.cr6.eq) goto loc_821D19C4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x821d19c8
	if (ctx.cr6.eq) goto loc_821D19C8;
loc_821D19C4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821D19C8:
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r30.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r26,r11,22312
	ctx.r26.s64 = ctx.r11.s64 + 22312;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x821d44b0
	ctx.lr = 0x821D19F0;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,22408
	ctx.r29.s64 = ctx.r11.s64 + 22408;
	// beq 0x821d1a28
	if (ctx.cr0.eq) goto loc_821D1A28;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821d1a18
	if (ctx.cr6.eq) goto loc_821D1A18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1A18;
	sub_821D44B0(ctx, base);
loc_821D1A18:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x821d44b0
	ctx.lr = 0x821D1A28;
	sub_821D44B0(ctx, base);
loc_821D1A28:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,-6884
	ctx.r4.s64 = ctx.r11.s64 + -6884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1A3C;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r11,22416
	ctx.r30.s64 = ctx.r11.s64 + 22416;
	// beq cr6,0x821d1a58
	if (ctx.cr6.eq) goto loc_821D1A58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1A58;
	sub_821D44B0(ctx, base);
loc_821D1A58:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821d1a80
	if (ctx.cr6.eq) goto loc_821D1A80;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x821d1a74
	if (ctx.cr6.eq) goto loc_821D1A74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22420
	ctx.r4.s64 = ctx.r11.s64 + 22420;
	// b 0x821d1a78
	goto loc_821D1A78;
loc_821D1A74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821D1A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1A80;
	sub_821D44B0(ctx, base);
loc_821D1A80:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821d1a94
	if (ctx.cr6.eq) goto loc_821D1A94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22376
	ctx.r4.s64 = ctx.r11.s64 + 22376;
	// b 0x821d1aa0
	goto loc_821D1AA0;
loc_821D1A94:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821d1aa8
	if (ctx.cr6.eq) goto loc_821D1AA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_821D1AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1AA8;
	sub_821D44B0(ctx, base);
loc_821D1AA8:
	// lwz r29,340(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x821d1b1c
	if (!ctx.cr6.lt) goto loc_821D1B1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22384
	ctx.r4.s64 = ctx.r11.s64 + 22384;
	// bl 0x821d44b0
	ctx.lr = 0x821D1AC4;
	sub_821D44B0(ctx, base);
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,22424
	ctx.r30.s64 = ctx.r10.s64 + 22424;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D1AEC;
	sub_821D44B0(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x821d1be4
	if (!ctx.cr6.gt) goto loc_821D1BE4;
	// lbz r11,351(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d1b10
	if (ctx.cr0.eq) goto loc_821D1B10;
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// b 0x821d1b14
	goto loc_821D1B14;
loc_821D1B10:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
loc_821D1B14:
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x821d1bd4
	goto loc_821D1BD4;
loc_821D1B1C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821d1be4
	if (ctx.cr6.eq) goto loc_821D1BE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22384
	ctx.r4.s64 = ctx.r11.s64 + 22384;
	// bl 0x821d44b0
	ctx.lr = 0x821D1B34;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addi r29,r11,22424
	ctx.r29.s64 = ctx.r11.s64 + 22424;
	// srawi r10,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 4;
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r30,r28,30
	ctx.r30.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r25,r11,30
	ctx.r25.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D1B78;
	sub_821D44B0(ctx, base);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821d1b90
	if (!ctx.cr6.eq) goto loc_821D1B90;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821d1b90
	if (!ctx.cr6.eq) goto loc_821D1B90;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821d1be4
	if (ctx.cr6.eq) goto loc_821D1BE4;
loc_821D1B90:
	// lbzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D1BA4;
	sub_821D44B0(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821d1bb4
	if (!ctx.cr6.eq) goto loc_821D1BB4;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x821d1be4
	if (ctx.cr6.eq) goto loc_821D1BE4;
loc_821D1BB4:
	// lbzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D1BC8;
	sub_821D44B0(ctx, base);
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x821d1be4
	if (ctx.cr6.eq) goto loc_821D1BE4;
	// lbzx r11,r25,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r29.u32);
loc_821D1BD4:
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D1BE4;
	sub_821D44B0(ctx, base);
loc_821D1BE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D3834) {
	REX_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d406c
	if (ctx.cr0.eq) goto loc_821D406C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3870
	if (ctx.cr0.eq) goto loc_821D3870;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3864
	if (ctx.cr0.eq) goto loc_821D3864;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23636
	ctx.r4.s64 = ctx.r11.s64 + 23636;
	// b 0x821d3878
	goto loc_821D3878;
loc_821D3864:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23644
	ctx.r4.s64 = ctx.r11.s64 + 23644;
	// b 0x821d3878
	goto loc_821D3878;
loc_821D3870:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23220
	ctx.r4.s64 = ctx.r11.s64 + 23220;
loc_821D3878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D3880;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23316
	ctx.r4.s64 = ctx.r11.s64 + 23316;
	// bl 0x821d4680
	ctx.lr = 0x821D3890;
	sub_821D4680(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22316
	ctx.r4.s64 = ctx.r11.s64 + 22316;
	// bl 0x821d44b0
	ctx.lr = 0x821D38A0;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23276
	ctx.r4.s64 = ctx.r11.s64 + 23276;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x821d44b0
	ctx.lr = 0x821D38B8;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22308
	ctx.r4.s64 = ctx.r11.s64 + 22308;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x821d44b0
	ctx.lr = 0x821D38D0;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d406c
	if (ctx.cr0.eq) goto loc_821D406C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23324
	ctx.r4.s64 = ctx.r11.s64 + 23324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D38EC;
	sub_821D44B0(ctx, base);
	// b 0x821d406c
	goto loc_821D406C;
loc_821D406C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d41e0
	ctx.lr = 0x821D4074;
	sub_821D41E0(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DA1C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821DA1C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bne cr6,0x821da27c
	if (!ctx.cr6.eq) goto loc_821DA27C;
	// lwz r11,1196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821da27c
	if (ctx.cr0.eq) goto loc_821DA27C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x821e4818
	ctx.lr = 0x821DA208;
	sub_821E4818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821da27c
	if (ctx.cr0.eq) goto loc_821DA27C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 3);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821da27c
	if (!ctx.cr6.eq) goto loc_821DA27C;
	// lwz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// lwz r10,440(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821da27c
	if (!ctx.cr6.eq) goto loc_821DA27C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821da264
	if (ctx.cr6.eq) goto loc_821DA264;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r30,1193(r31)
	REX_STORE_U8(ctx.r31.u32 + 1193, ctx.r30.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,1192(r31)
	REX_STORE_U8(ctx.r31.u32 + 1192, ctx.r30.u8);
	// ori r11,r11,4104
	ctx.r11.u64 = ctx.r11.u64 | 4104;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x821d8918
	ctx.lr = 0x821DA264;
	sub_821D8918(ctx, base);
loc_821DA264:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da27c
	if (ctx.cr6.eq) goto loc_821DA27C;
	// stw r29,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821da280
	goto loc_821DA280;
loc_821DA27C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821DA280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DE2D8) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x821ebc38
	ctx.lr = 0x821DE2EC;
	sub_821EBC38(ctx, base);
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

DEFINE_REX_FUNC(sub_821DEA48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x821DEA50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,16(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x821f4a68
	ctx.lr = 0x821DEA78;
	sub_821F4A68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821dea8c
	if (!ctx.cr0.eq) goto loc_821DEA8C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x821deb10
	goto loc_821DEB10;
loc_821DEA8C:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ded58
	ctx.lr = 0x821DEA9C;
	sub_821DED58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821deb10
	if (ctx.cr0.lt) goto loc_821DEB10;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_821DEAAC:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821deac8
	if (ctx.cr6.eq) goto loc_821DEAC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ded58
	ctx.lr = 0x821DEAC0;
	sub_821DED58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821deb10
	if (ctx.cr0.lt) goto loc_821DEB10;
loc_821DEAC8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x821deaac
	if (ctx.cr6.lt) goto loc_821DEAAC;
	// stw r26,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821deb04
	if (ctx.cr6.eq) goto loc_821DEB04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DEAFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821deb08
	goto loc_821DEB08;
loc_821DEB04:
	// li r30,1
	ctx.r30.s64 = 1;
loc_821DEB08:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821deb1c
	if (!ctx.cr6.lt) goto loc_821DEB1C;
loc_821DEB10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821de9a0
	ctx.lr = 0x821DEB18;
	sub_821DE9A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821DEB1C:
	// stw r31,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E15F0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e1624
	if (ctx.cr6.eq) goto loc_821E1624;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
loc_821E1604:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x821e1624
	if (ctx.cr6.eq) goto loc_821E1624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e1604
	if (ctx.cr6.lt) goto loc_821E1604;
loc_821E1624:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821e163c
	if (!ctx.cr6.lt) goto loc_821E163C;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_821E163C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2730) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x821E2738;
	__savegprlr_14(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e2888
	if (!ctx.cr6.eq) goto loc_821E2888;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,3984
	ctx.r11.s64 = ctx.r11.s64 + 3984;
	// addi r9,r9,4024
	ctx.r9.s64 = ctx.r9.s64 + 4024;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// addi r10,r10,7496
	ctx.r10.s64 = ctx.r10.s64 + 7496;
	// addi r11,r8,4160
	ctx.r11.s64 = ctx.r8.s64 + 4160;
	// addi r9,r6,7960
	ctx.r9.s64 = ctx.r6.s64 + 7960;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-32226
	ctx.r31.s64 = -2111963136;
	// addi r10,r7,4272
	ctx.r10.s64 = ctx.r7.s64 + 4272;
	// addi r11,r5,8072
	ctx.r11.s64 = ctx.r5.s64 + 8072;
	// addi r9,r31,4424
	ctx.r9.s64 = ctx.r31.s64 + 4424;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32226
	ctx.r4.s64 = -2111963136;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-32226
	ctx.r28.s64 = -2111963136;
	// addi r10,r4,4384
	ctx.r10.s64 = ctx.r4.s64 + 4384;
	// addi r11,r30,4584
	ctx.r11.s64 = ctx.r30.s64 + 4584;
	// addi r9,r28,8448
	ctx.r9.s64 = ctx.r28.s64 + 8448;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-32226
	ctx.r25.s64 = -2111963136;
	// addi r10,r29,8184
	ctx.r10.s64 = ctx.r29.s64 + 8184;
	// addi r11,r27,8544
	ctx.r11.s64 = ctx.r27.s64 + 8544;
	// addi r9,r25,4744
	ctx.r9.s64 = ctx.r25.s64 + 4744;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-32226
	ctx.r26.s64 = -2111963136;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-32226
	ctx.r24.s64 = -2111963136;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-32226
	ctx.r22.s64 = -2111963136;
	// addi r10,r26,4656
	ctx.r10.s64 = ctx.r26.s64 + 4656;
	// addi r11,r24,8856
	ctx.r11.s64 = ctx.r24.s64 + 8856;
	// addi r9,r22,9048
	ctx.r9.s64 = ctx.r22.s64 + 9048;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-32226
	ctx.r23.s64 = -2111963136;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-32226
	ctx.r21.s64 = -2111963136;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-32226
	ctx.r19.s64 = -2111963136;
	// addi r10,r23,8944
	ctx.r10.s64 = ctx.r23.s64 + 8944;
	// addi r11,r21,4792
	ctx.r11.s64 = ctx.r21.s64 + 4792;
	// addi r9,r19,9528
	ctx.r9.s64 = ctx.r19.s64 + 9528;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-32226
	ctx.r20.s64 = -2111963136;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-32226
	ctx.r18.s64 = -2111963136;
	// stw r9,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lis r16,-32226
	ctx.r16.s64 = -2111963136;
	// addi r10,r20,4800
	ctx.r10.s64 = ctx.r20.s64 + 4800;
	// addi r11,r18,9640
	ctx.r11.s64 = ctx.r18.s64 + 9640;
	// addi r9,r16,8736
	ctx.r9.s64 = ctx.r16.s64 + 8736;
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lis r17,-32226
	ctx.r17.s64 = -2111963136;
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lis r15,-32226
	ctx.r15.s64 = -2111963136;
	// stw r9,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addi r10,r17,9176
	ctx.r10.s64 = ctx.r17.s64 + 9176;
	// addi r11,r15,4928
	ctx.r11.s64 = ctx.r15.s64 + 4928;
	// lis r14,-32226
	ctx.r14.s64 = -2111963136;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// addi r10,r14,9752
	ctx.r10.s64 = ctx.r14.s64 + 9752;
	// addi r11,r9,4984
	ctx.r11.s64 = ctx.r9.s64 + 4984;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_821E2888:
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E6B98) {
	REX_FUNC_PROLOGUE();
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6bd0
	if (!ctx.cr6.eq) goto loc_821E6BD0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
loc_821E6BD0:
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r5,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// stw r7,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E8AE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821E8AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,-4
	ctx.r29.s64 = ctx.r4.s64 + -4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821E8B10;
	sub_821EACB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e8ba8
	if (ctx.cr0.eq) goto loc_821E8BA8;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
loc_821E8B1C:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821e8b4c
	if (ctx.cr6.eq) goto loc_821E8B4C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821e8b4c
	if (ctx.cr0.eq) goto loc_821E8B4C;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821E8B40;
	sub_821EACB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e8b1c
	if (!ctx.cr0.eq) goto loc_821E8B1C;
	// b 0x821e8ba8
	goto loc_821E8BA8;
loc_821E8B4C:
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e8b68
	if (!ctx.cr6.gt) goto loc_821E8B68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8098
	ctx.lr = 0x821E8B64;
	sub_821E8098(ctx, base);
	// b 0x821e8ba8
	goto loc_821E8BA8;
loc_821E8B68:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// ld r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 24);
	// ld r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// addi r3,r9,548
	ctx.r3.s64 = ctx.r9.s64 + 548;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x821e8b8c
	if (ctx.cr6.lt) goto loc_821E8B8C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821E8B8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x821e8ba4
	if (ctx.cr6.eq) goto loc_821E8BA4;
	// bl 0x821d8518
	ctx.lr = 0x821E8BA0;
	sub_821D8518(ctx, base);
	// b 0x821e8ba8
	goto loc_821E8BA8;
loc_821E8BA4:
	// bl 0x821e6528
	ctx.lr = 0x821E8BA8;
	sub_821E6528(ctx, base);
loc_821E8BA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821ED130) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x821ED138;
	__savegprlr_14(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r14,-160(r1)
	REX_STORE_U8(ctx.r1.u32 + -160, ctx.r14.u8);
	// ble cr6,0x821ee4cc
	if (!ctx.cr6.gt) goto loc_821EE4CC;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// addi r19,r11,1788
	ctx.r19.s64 = ctx.r11.s64 + 1788;
	// addi r15,r10,1804
	ctx.r15.s64 = ctx.r10.s64 + 1804;
	// addi r18,r9,1756
	ctx.r18.s64 = ctx.r9.s64 + 1756;
	// li r17,-1024
	ctx.r17.s64 = -1024;
	// li r16,128
	ctx.r16.s64 = 128;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x821ed190
	goto loc_821ED190;
loc_821ED18C:
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
loc_821ED190:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ed1b8
	if (ctx.cr6.eq) goto loc_821ED1B8;
	// rlwinm r11,r14,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r14,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x4;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r24,r9,28
	ctx.r24.u64 = ctx.r9.u32 & 0xF;
	// b 0x821ed1fc
	goto loc_821ED1FC;
loc_821ED1B8:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r12,7880
	ctx.r12.s64 = 7880;
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-7880
	ctx.r9.s64 = ctx.r10.s64 + -7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r8,r12
	ctx.r10.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r9,r10,7880
	ctx.r9.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
loc_821ED1FC:
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// lhz r9,26(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821ed228
	if (ctx.cr6.eq) goto loc_821ED228;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED228:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed240
	if (!ctx.cr6.eq) goto loc_821ED240;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed248
	goto loc_821ED248;
loc_821ED240:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED248:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed284
	if (ctx.cr6.gt) goto loc_821ED284;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed290
	goto loc_821ED290;
loc_821ED284:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED290:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,10(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,28(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed2d8
	if (ctx.cr6.eq) goto loc_821ED2D8;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED2D8:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed2f0
	if (!ctx.cr6.eq) goto loc_821ED2F0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed2f8
	goto loc_821ED2F8;
loc_821ED2F0:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED2F8:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed334
	if (ctx.cr6.gt) goto loc_821ED334;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed340
	goto loc_821ED340;
loc_821ED334:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED340:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,30(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed388
	if (ctx.cr6.eq) goto loc_821ED388;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED388:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed3a0
	if (!ctx.cr6.eq) goto loc_821ED3A0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed3a8
	goto loc_821ED3A8;
loc_821ED3A0:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED3A8:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed3e4
	if (ctx.cr6.gt) goto loc_821ED3E4;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed3f0
	goto loc_821ED3F0;
loc_821ED3E4:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED3F0:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,14(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,32(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed438
	if (ctx.cr6.eq) goto loc_821ED438;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED438:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed450
	if (!ctx.cr6.eq) goto loc_821ED450;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed458
	goto loc_821ED458;
loc_821ED450:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED458:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed494
	if (ctx.cr6.gt) goto loc_821ED494;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed4a0
	goto loc_821ED4A0;
loc_821ED494:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED4A0:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,34(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed4e8
	if (ctx.cr6.eq) goto loc_821ED4E8;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED4E8:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed500
	if (!ctx.cr6.eq) goto loc_821ED500;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed508
	goto loc_821ED508;
loc_821ED500:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED508:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed544
	if (ctx.cr6.gt) goto loc_821ED544;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed550
	goto loc_821ED550;
loc_821ED544:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED550:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,18(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r26,36(r7)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed598
	if (ctx.cr6.eq) goto loc_821ED598;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED598:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r31,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r31.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed5b0
	if (!ctx.cr6.eq) goto loc_821ED5B0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed5b8
	goto loc_821ED5B8;
loc_821ED5B0:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED5B8:
	// srawi r26,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r26,r26,31
	ctx.r26.u64 = ctx.r26.u32 & 0x1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// rlwinm r9,r9,3,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bgt cr6,0x821ed5f4
	if (ctx.cr6.gt) goto loc_821ED5F4;
	// subfic r10,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.u64 = static_cast<uint64_t>(26) - ctx.r10.u64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x821ed600
	goto loc_821ED600;
loc_821ED5F4:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_821ED600:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lhz r23,0(r7)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r26,42(r7)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 42);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x821ed66c
	if (ctx.cr6.eq) goto loc_821ED66C;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_821ED66C:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// bne cr6,0x821ed684
	if (!ctx.cr6.eq) goto loc_821ED684;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed68c
	goto loc_821ED68C;
loc_821ED684:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_821ED68C:
	// srawi r8,r27,10
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 10;
	// srawi r11,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 6;
	// clrlwi r31,r27,26
	ctx.r31.u64 = ctx.r27.u32 & 0x3F;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// xor r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rlwinm r10,r8,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed6c8
	if (ctx.cr6.gt) goto loc_821ED6C8;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed6d4
	goto loc_821ED6D4;
loc_821ED6C8:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED6D4:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,2(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r29,44(r7)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x821ed71c
	if (ctx.cr6.eq) goto loc_821ED71C;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_821ED71C:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x821ed734
	if (!ctx.cr6.eq) goto loc_821ED734;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x821ed73c
	goto loc_821ED73C;
loc_821ED734:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_821ED73C:
	// srawi r29,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 10;
	// clrlwi r28,r11,26
	ctx.r28.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x821ed778
	if (ctx.cr6.gt) goto loc_821ED778;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ed784
	goto loc_821ED784;
loc_821ED778:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_821ED784:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// neg r29,r10
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// sth r26,44(r7)
	REX_STORE_U16(ctx.r7.u32 + 44, ctx.r26.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// andc r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r22,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 1;
	// bge cr6,0x821ed7d8
	if (!ctx.cr6.lt) goto loc_821ED7D8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x821ed7dc
	goto loc_821ED7DC;
loc_821ED7D8:
	// li r11,64
	ctx.r11.s64 = 64;
loc_821ED7DC:
	// lhz r10,52(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 52);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r27,50(r7)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r7.u32 + 50);
	// subf r8,r27,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r27.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// bge cr6,0x821ed824
	if (!ctx.cr6.lt) goto loc_821ED824;
	// subf r9,r11,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r11.u64;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// b 0x821ed82c
	goto loc_821ED82C;
loc_821ED824:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_821ED82C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ed83c
	if (ctx.cr6.eq) goto loc_821ED83C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x821edab4
	goto loc_821EDAB4;
loc_821ED83C:
	// subf r9,r23,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r23.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r11,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 15;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed884
	if (ctx.cr6.eq) goto loc_821ED884;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED884:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed89c
	if (ctx.cr6.eq) goto loc_821ED89C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED89C:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed8b4
	if (ctx.cr6.eq) goto loc_821ED8B4;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED8B4:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed8cc
	if (ctx.cr6.eq) goto loc_821ED8CC;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED8CC:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed8e4
	if (ctx.cr6.eq) goto loc_821ED8E4;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED8E4:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed8fc
	if (ctx.cr6.eq) goto loc_821ED8FC;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED8FC:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed914
	if (ctx.cr6.eq) goto loc_821ED914;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED914:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed92c
	if (ctx.cr6.eq) goto loc_821ED92C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED92C:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed944
	if (ctx.cr6.eq) goto loc_821ED944;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED944:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed95c
	if (ctx.cr6.eq) goto loc_821ED95C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED95C:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed974
	if (ctx.cr6.eq) goto loc_821ED974;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED974:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed98c
	if (ctx.cr6.eq) goto loc_821ED98C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED98C:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed9a4
	if (ctx.cr6.eq) goto loc_821ED9A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED9A4:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed9bc
	if (ctx.cr6.eq) goto loc_821ED9BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821ed9cc
	goto loc_821ED9CC;
loc_821ED9BC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821ED9CC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r11.u64 = static_cast<uint64_t>(7) - ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821ed9f8
	if (!ctx.cr6.lt) goto loc_821ED9F8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821eda00
	goto loc_821EDA00;
loc_821ED9F8:
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_821EDA00:
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -124, ctx.xer);
	// bge cr6,0x821eda30
	if (!ctx.cr6.lt) goto loc_821EDA30;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA30:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// blt cr6,0x821eda94
	if (ctx.cr6.lt) goto loc_821EDA94;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bge cr6,0x821eda48
	if (!ctx.cr6.lt) goto loc_821EDA48;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA48:
	// cmpwi cr6,r11,246
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 246, ctx.xer);
	// bge cr6,0x821eda58
	if (!ctx.cr6.lt) goto loc_821EDA58;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA58:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x821eda68
	if (!ctx.cr6.lt) goto loc_821EDA68;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA68:
	// cmpwi cr6,r11,349
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 349, ctx.xer);
	// bge cr6,0x821eda78
	if (!ctx.cr6.lt) goto loc_821EDA78;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA78:
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// bge cr6,0x821eda88
	if (!ctx.cr6.lt) goto loc_821EDA88;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821eda98
	goto loc_821EDA98;
loc_821EDA88:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x821eda98
	if (ctx.cr6.lt) goto loc_821EDA98;
loc_821EDA94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821EDA98:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821edab4
	if (!ctx.cr6.lt) goto loc_821EDAB4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x821edab4
	if (ctx.cr6.eq) goto loc_821EDAB4;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_821EDAB4:
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// srawi. r25,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x821edac8
	if (ctx.cr0.eq) goto loc_821EDAC8;
	// xori r11,r26,15
	ctx.r11.u64 = ctx.r26.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_821EDAC8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lhzx r11,r21,r18
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,0,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821edb1c
	if (!ctx.cr6.lt) goto loc_821EDB1C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821edb28
	goto loc_821EDB28;
loc_821EDB1C:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_821EDB28:
	// rlwinm r31,r27,0,23,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1F0;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r30,r31,r8
	ctx.r30.u64 = ctx.r31.u64 & ctx.r8.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821edb6c
	if (!ctx.cr6.lt) goto loc_821EDB6C;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x821edb78
	goto loc_821EDB78;
loc_821EDB6C:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_821EDB78:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x821edb88
	if (ctx.cr6.gt) goto loc_821EDB88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821EDB88:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x821edbb8
	if (!ctx.cr6.gt) goto loc_821EDBB8;
	// lhz r11,46(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 46);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821edbbc
	if (ctx.cr6.eq) goto loc_821EDBBC;
loc_821EDBB8:
	// li r24,0
	ctx.r24.s64 = 0;
loc_821EDBBC:
	// lhzx r11,r21,r15
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r15.u32);
	// extsh r20,r29
	ctx.r20.s64 = ctx.r29.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r20,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r20.u64;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 544, ctx.xer);
	// bge cr6,0x821edbf0
	if (!ctx.cr6.lt) goto loc_821EDBF0;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x821edbfc
	goto loc_821EDBFC;
loc_821EDBF0:
	// cmpwi cr6,r10,5120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5120, ctx.xer);
	// blt cr6,0x821edbfc
	if (ctx.cr6.lt) goto loc_821EDBFC;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_821EDBFC:
	// lhz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 48);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// sth r11,52(r7)
	REX_STORE_U16(ctx.r7.u32 + 52, ctx.r11.u16);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r11,r30,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r28,18,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0x1;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// xor r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// sth r9,50(r7)
	REX_STORE_U16(ctx.r7.u32 + 50, ctx.r9.u16);
	// sth r8,48(r7)
	REX_STORE_U16(ctx.r7.u32 + 48, ctx.r8.u16);
	// beq cr6,0x821edc5c
	if (ctx.cr6.eq) goto loc_821EDC5C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDC5C:
	// rlwinm r10,r28,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edc74
	if (ctx.cr6.eq) goto loc_821EDC74;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDC74:
	// rlwinm r10,r28,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edc8c
	if (ctx.cr6.eq) goto loc_821EDC8C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDC8C:
	// rlwinm r10,r28,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edca4
	if (ctx.cr6.eq) goto loc_821EDCA4;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDCA4:
	// rlwinm r10,r28,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edcbc
	if (ctx.cr6.eq) goto loc_821EDCBC;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDCBC:
	// rlwinm r10,r28,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edcd4
	if (ctx.cr6.eq) goto loc_821EDCD4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDCD4:
	// rlwinm r10,r28,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edcec
	if (ctx.cr6.eq) goto loc_821EDCEC;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDCEC:
	// rlwinm r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd04
	if (ctx.cr6.eq) goto loc_821EDD04;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD04:
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd1c
	if (ctx.cr6.eq) goto loc_821EDD1C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD1C:
	// rlwinm r10,r28,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd34
	if (ctx.cr6.eq) goto loc_821EDD34;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD34:
	// rlwinm r10,r28,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd4c
	if (ctx.cr6.eq) goto loc_821EDD4C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD4C:
	// rlwinm r10,r28,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd64
	if (ctx.cr6.eq) goto loc_821EDD64;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD64:
	// rlwinm r10,r28,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd7c
	if (ctx.cr6.eq) goto loc_821EDD7C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD7C:
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edd94
	if (ctx.cr6.eq) goto loc_821EDD94;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821edda4
	goto loc_821EDDA4;
loc_821EDD94:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821EDDA4:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821eddcc
	if (!ctx.cr6.lt) goto loc_821EDDCC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821eddd4
	goto loc_821EDDD4;
loc_821EDDCC:
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_821EDDD4:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x821eddfc
	if (ctx.cr6.eq) goto loc_821EDDFC;
	// subf r11,r28,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r28.u64;
	// subf r31,r28,r23
	ctx.r31.u64 = ctx.r23.u64 - ctx.r28.u64;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// b 0x821ede10
	goto loc_821EDE10;
loc_821EDDFC:
	// add r31,r22,r28
	ctx.r31.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r11,r23,r28
	ctx.r11.u64 = ctx.r23.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_821EDE10:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// addi r11,r30,-8191
	ctx.r11.s64 = ctx.r30.s64 + -8191;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 & ctx.r26.u64;
	// addi r9,r10,8192
	ctx.r9.s64 = ctx.r10.s64 + 8192;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r9,r25,15
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 15;
	// andc r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 | ctx.r11.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// rlwinm r31,r9,18,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// rlwinm r11,r9,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// add r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 + ctx.r29.u64;
	// xor r23,r31,r11
	ctx.r23.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821edea0
	if (ctx.cr6.eq) goto loc_821EDEA0;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDEA0:
	// rlwinm r8,r10,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edeb8
	if (ctx.cr6.eq) goto loc_821EDEB8;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDEB8:
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821eded0
	if (ctx.cr6.eq) goto loc_821EDED0;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDED0:
	// rlwinm r8,r10,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edee8
	if (ctx.cr6.eq) goto loc_821EDEE8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDEE8:
	// rlwinm r8,r10,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf00
	if (ctx.cr6.eq) goto loc_821EDF00;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF00:
	// rlwinm r8,r10,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf18
	if (ctx.cr6.eq) goto loc_821EDF18;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF18:
	// rlwinm r8,r10,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf30
	if (ctx.cr6.eq) goto loc_821EDF30;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF30:
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf48
	if (ctx.cr6.eq) goto loc_821EDF48;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF48:
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf60
	if (ctx.cr6.eq) goto loc_821EDF60;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF60:
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf78
	if (ctx.cr6.eq) goto loc_821EDF78;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF78:
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edf90
	if (ctx.cr6.eq) goto loc_821EDF90;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDF90:
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edfa8
	if (ctx.cr6.eq) goto loc_821EDFA8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDFA8:
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edfc0
	if (ctx.cr6.eq) goto loc_821EDFC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDFC0:
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821edfd8
	if (ctx.cr6.eq) goto loc_821EDFD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821edfe8
	goto loc_821EDFE8;
loc_821EDFD8:
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821EDFE8:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821ee010
	if (!ctx.cr6.lt) goto loc_821EE010;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x821ee018
	goto loc_821EE018;
loc_821EE010:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_821EE018:
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r8,r17
	ctx.r10.u64 = ctx.r8.u64 & ctx.r17.u64;
	// subfic r9,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// sth r11,42(r7)
	REX_STORE_U16(ctx.r7.u32 + 42, ctx.r11.u16);
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lhz r10,26(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// and r10,r9,r16
	ctx.r10.u64 = ctx.r9.u64 & ctx.r16.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// srawi r9,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// bge cr6,0x821ee084
	if (!ctx.cr6.lt) goto loc_821EE084;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x821ee08c
	goto loc_821EE08C;
loc_821EE084:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_821EE08C:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r25,28(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,10(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// extsh r9,r25
	ctx.r9.s64 = ctx.r25.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r24,r9,r29
	ctx.r24.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// sth r8,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r8.u16);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// srawi r9,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 8;
	// bge cr6,0x821ee0d0
	if (!ctx.cr6.lt) goto loc_821EE0D0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x821ee0d8
	goto loc_821EE0D8;
loc_821EE0D0:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_821EE0D8:
	// lhz r8,30(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// and r24,r11,r30
	ctx.r24.u64 = ctx.r11.u64 & ctx.r30.u64;
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// srawi r11,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 8;
	// sth r24,10(r7)
	REX_STORE_U16(ctx.r7.u32 + 10, ctx.r24.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x821ee118
	if (!ctx.cr6.lt) goto loc_821EE118;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee120
	goto loc_821EE120;
loc_821EE118:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_821EE120:
	// lhz r25,32(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,14(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,12(r7)
	REX_STORE_U16(ctx.r7.u32 + 12, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x821ee160
	if (!ctx.cr6.lt) goto loc_821EE160;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee168
	goto loc_821EE168;
loc_821EE160:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_821EE168:
	// lhz r25,34(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,14(r7)
	REX_STORE_U16(ctx.r7.u32 + 14, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x821ee1a8
	if (!ctx.cr6.lt) goto loc_821EE1A8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee1b0
	goto loc_821EE1B0;
loc_821EE1A8:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_821EE1B0:
	// lhz r25,36(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,18(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r8.u16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x821ee1f0
	if (!ctx.cr6.lt) goto loc_821EE1F0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee1f8
	goto loc_821EE1F8;
loc_821EE1F0:
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_821EE1F8:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// sth r9,18(r7)
	REX_STORE_U16(ctx.r7.u32 + 18, ctx.r9.u16);
	// lhz r9,26(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// lhz r10,38(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 38);
	// lhz r29,28(r7)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// lhz r25,30(r7)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// lhz r24,32(r7)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// lhz r23,34(r7)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// lhz r22,40(r7)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r7.u32 + 40);
	// xor r11,r22,r27
	ctx.r11.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// sth r9,28(r7)
	REX_STORE_U16(ctx.r7.u32 + 28, ctx.r9.u16);
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r10,40(r7)
	REX_STORE_U16(ctx.r7.u32 + 40, ctx.r10.u16);
	// sth r29,30(r7)
	REX_STORE_U16(ctx.r7.u32 + 30, ctx.r29.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r25,32(r7)
	REX_STORE_U16(ctx.r7.u32 + 32, ctx.r25.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r24,34(r7)
	REX_STORE_U16(ctx.r7.u32 + 34, ctx.r24.u16);
	// li r10,-4096
	ctx.r10.s64 = -4096;
	// sth r23,36(r7)
	REX_STORE_U16(ctx.r7.u32 + 36, ctx.r23.u16);
	// sth r31,26(r7)
	REX_STORE_U16(ctx.r7.u32 + 26, ctx.r31.u16);
	// sth r27,38(r7)
	REX_STORE_U16(ctx.r7.u32 + 38, ctx.r27.u16);
	// blt cr6,0x821ee26c
	if (ctx.cr6.lt) goto loc_821EE26C;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_821EE26C:
	// lhz r29,0(r7)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r11,-8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8191, ctx.xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x821ee284
	if (ctx.cr6.lt) goto loc_821EE284;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821EE284:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,8191
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8191, ctx.xer);
	// blt cr6,0x821ee294
	if (ctx.cr6.lt) goto loc_821EE294;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_821EE294:
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821ee2ac
	if (!ctx.cr6.lt) goto loc_821EE2AC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee2b4
	goto loc_821EE2B4;
loc_821EE2AC:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_821EE2B4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821ee2c8
	if (!ctx.cr6.eq) goto loc_821EE2C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821ee2d4
	goto loc_821EE2D4;
loc_821EE2C8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_821EE2D4:
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12288, ctx.xer);
	// bge cr6,0x821ee2f8
	if (!ctx.cr6.lt) goto loc_821EE2F8;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_821EE2F8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// blt cr6,0x821ee308
	if (ctx.cr6.lt) goto loc_821EE308;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_821EE308:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// and r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 & ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sth r10,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// bge cr6,0x821ee330
	if (!ctx.cr6.lt) goto loc_821EE330;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x821ee338
	goto loc_821EE338;
loc_821EE330:
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_821EE338:
	// subfic r10,r8,15360
	ctx.xer.ca = ctx.r8.u32 <= 15360;
	ctx.r10.u64 = static_cast<uint64_t>(15360) - ctx.r8.u64;
	// subf r9,r11,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// neg r29,r10
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821ee368
	if (!ctx.cr6.lt) goto loc_821EE368;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821EE368:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x821ee378
	if (!ctx.cr6.lt) goto loc_821EE378;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821EE378:
	// li r11,-11776
	ctx.r11.s64 = -11776;
	// lhz r9,22(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 22);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lhz r10,20(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 20);
	// subfc r29,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r29.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r11,r11,r8
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// and r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 & ctx.r30.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// sth r8,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// and r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 & ctx.r30.u64;
	// sth r29,46(r7)
	REX_STORE_U16(ctx.r7.u32 + 46, ctx.r29.u16);
	// lhzx r29,r21,r19
	ctx.r29.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r19.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// subf r31,r9,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r9.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r29,r10,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r10.u64;
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r31,7
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 7;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// sth r11,22(r7)
	REX_STORE_U16(ctx.r7.u32 + 22, ctx.r11.u16);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,20(r7)
	REX_STORE_U16(ctx.r7.u32 + 20, ctx.r11.u16);
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ee424
	if (ctx.cr6.lt) goto loc_821EE424;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x821ee440
	goto loc_821EE440;
loc_821EE424:
	// cmpwi cr6,r20,1536
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1536, ctx.xer);
	// bge cr6,0x821ee434
	if (!ctx.cr6.lt) goto loc_821EE434;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x821ee440
	goto loc_821EE440;
loc_821EE434:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
loc_821EE440:
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// not r9,r30
	ctx.r9.u64 = ~ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & ctx.r28.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r10,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// beq cr6,0x821ee488
	if (ctx.cr6.eq) goto loc_821EE488;
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x821ee4bc
	goto loc_821EE4BC;
loc_821EE488:
	// clrlwi r11,r14,31
	ctx.r11.u64 = ctx.r14.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ee4a0
	if (!ctx.cr6.eq) goto loc_821EE4A0;
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// stb r11,-160(r1)
	REX_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// b 0x821ee4bc
	goto loc_821EE4BC;
loc_821EE4A0:
	// extsh r10,r26
	ctx.r10.s64 = ctx.r26.s16;
	// lbz r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -160);
	// lwz r9,36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r8,r14,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stbx r11,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
loc_821EE4BC:
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ed18c
	if (ctx.cr6.lt) goto loc_821ED18C;
loc_821EE4CC:
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82203B28) {
	REX_FUNC_PROLOGUE();
	// stb r4,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B320) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822397F0) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
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

DEFINE_REX_FUNC(sub_82259258) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82259260;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,32(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,48(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r28,40(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r26,36(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r29,28(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822593ac
	if (!ctx.cr6.gt) goto loc_822593AC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r9,r11,12200
	ctx.r9.s64 = ctx.r11.s64 + 12200;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82259310
	if (!ctx.cr6.eq) goto loc_82259310;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x822592dc
	if (ctx.cr6.gt) goto loc_822592DC;
loc_822592B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822592dc
	if (ctx.cr6.eq) goto loc_822592DC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x822592b4
	if (!ctx.cr6.gt) goto loc_822592B4;
loc_822592DC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82259384
	if (ctx.cr6.eq) goto loc_82259384;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_822592F4:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bdnz 0x822592f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822592F4;
	// b 0x82259384
	goto loc_82259384;
loc_82259310:
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x8225934c
	if (ctx.cr6.gt) goto loc_8225934C;
loc_82259318:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225934c
	if (ctx.cr6.eq) goto loc_8225934C;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// rlwimi r3,r26,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x82259318
	if (!ctx.cr6.gt) goto loc_82259318;
loc_8225934C:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82259384
	if (ctx.cr6.eq) goto loc_82259384;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82259360:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwimi r3,r27,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bne 0x82259360
	if (!ctx.cr0.eq) goto loc_82259360;
loc_82259384:
	// stw r26,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r25,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// stw r27,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// bl 0x82296bd8
	ctx.lr = 0x822593AC;
	sub_82296BD8(ctx, base);
loc_822593AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225C808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8225C810;
	__savegprlr_14(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225cc24
	if (ctx.cr6.eq) goto loc_8225CC24;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225cc24
	if (ctx.cr6.eq) goto loc_8225CC24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// clrlwi r15,r7,16
	ctx.r15.u64 = ctx.r7.u32 & 0xFFFF;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r16,12
	ctx.r16.s64 = 12;
	// addi r17,r11,7432
	ctx.r17.s64 = ctx.r11.s64 + 7432;
	// addi r20,r10,7404
	ctx.r20.s64 = ctx.r10.s64 + 7404;
	// addi r19,r9,7376
	ctx.r19.s64 = ctx.r9.s64 + 7376;
loc_8225C848:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// blt cr6,0x8225c858
	if (ctx.cr6.lt) goto loc_8225C858;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
loc_8225C858:
	// li r10,5
	ctx.r10.s64 = 5;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8225C870:
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8225c88c
	if (!ctx.cr6.lt) goto loc_8225C88C;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8225c890
	goto loc_8225C890;
loc_8225C88C:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_8225C890:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8225c870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225C870;
	// lwz r22,-240(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r24,-244(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// lwz r26,-248(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r25,-252(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r23,-256(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
loc_8225C8B8:
	// lwzx r29,r30,r19
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r19.u32);
	// addi r27,r1,-224
	ctx.r27.s64 = ctx.r1.s64 + -224;
	// lwzx r28,r30,r20
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// stwx r18,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r18.u32);
	// mullw r10,r23,r28
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// bgt cr6,0x8225c8e8
	if (ctx.cr6.gt) goto loc_8225C8E8;
	// subf r8,r11,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r11.u64;
loc_8225C8E8:
	// mullw r11,r25,r28
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// mullw r10,r26,r29
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bgt cr6,0x8225c908
	if (ctx.cr6.gt) goto loc_8225C908;
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
loc_8225C908:
	// mullw r10,r24,r29
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r26,r28
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x8225c92c
	if (!ctx.cr6.gt) goto loc_8225C92C;
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r22.u64;
	// b 0x8225c930
	goto loc_8225C930;
loc_8225C92C:
	// subf r11,r11,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r11.u64;
loc_8225C930:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r8,r11,r16
	ctx.r8.u64 = uint32_t((ctx.r16.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r16.s32 == -1)) ? ctx.r11.s32 / ctx.r16.s32 : 0);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x8225c944
	if (!ctx.cr6.lt) goto loc_8225C944;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8225C944:
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// stwx r8,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// ble cr6,0x8225ca0c
	if (!ctx.cr6.gt) goto loc_8225CA0C;
	// addi r11,r21,-2
	ctx.r11.s64 = ctx.r21.s64 + -2;
	// addi r31,r3,-1
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225C968:
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mullw r9,r6,r29
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r7,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8225c99c
	if (!ctx.cr6.gt) goto loc_8225C99C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8225c9a8
	goto loc_8225C9A8;
loc_8225C99C:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x8225c9a8
	if (!ctx.cr6.lt) goto loc_8225C9A8;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_8225C9A8:
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8225c9c0
	if (!ctx.cr6.gt) goto loc_8225C9C0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x8225c9cc
	goto loc_8225C9CC;
loc_8225C9C0:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x8225c9cc
	if (!ctx.cr6.lt) goto loc_8225C9CC;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_8225C9CC:
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r7,r11,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x8225c9e8
	if (!ctx.cr6.lt) goto loc_8225C9E8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8225C9E8:
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
	// bdnz 0x8225c968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225C968;
loc_8225CA0C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 28, ctx.xer);
	// blt cr6,0x8225c8b8
	if (ctx.cr6.lt) goto loc_8225C8B8;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca34
	if (!ctx.cr6.lt) goto loc_8225CA34;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8225CA34:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca48
	if (!ctx.cr6.lt) goto loc_8225CA48;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8225CA48:
	// lwz r9,-212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca5c
	if (!ctx.cr6.lt) goto loc_8225CA5C;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8225CA5C:
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca70
	if (!ctx.cr6.lt) goto loc_8225CA70;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8225CA70:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca84
	if (!ctx.cr6.lt) goto loc_8225CA84;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8225CA84:
	// lwz r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225ca94
	if (!ctx.cr6.lt) goto loc_8225CA94;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8225CA94:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addic. r8,r21,-2
	ctx.xer.ca = ctx.r21.u32 > 1;
	ctx.r8.s64 = ctx.r21.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwzx r30,r10,r19
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r29,r10,r20
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r25.u16);
	ctx.r5.u32 = ea;
	// sthu r23,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r23.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x8225cc14
	if (ctx.cr0.eq) goto loc_8225CC14;
loc_8225CACC:
	// mullw r11,r29,r10
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r30,r31
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r6,r7,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// ble cr6,0x8225cb08
	if (!ctx.cr6.gt) goto loc_8225CB08;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x8225cb14
	goto loc_8225CB14;
loc_8225CB08:
	// cmpwi cr6,r6,-8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -8, ctx.xer);
	// bge cr6,0x8225cb14
	if (!ctx.cr6.lt) goto loc_8225CB14;
	// li r6,-8
	ctx.r6.s64 = -8;
loc_8225CB14:
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8225cb2c
	if (!ctx.cr6.gt) goto loc_8225CB2C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8225cb38
	goto loc_8225CB38;
loc_8225CB2C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8225cb38
	if (!ctx.cr6.lt) goto loc_8225CB38;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_8225CB38:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r7,r10,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8225cb54
	if (!ctx.cr6.lt) goto loc_8225CB54;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8225CB54:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8225cbf8
	if (ctx.cr6.eq) goto loc_8225CBF8;
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r11,r7,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8225cba0
	if (!ctx.cr6.gt) goto loc_8225CBA0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8225cbac
	goto loc_8225CBAC;
loc_8225CBA0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x8225cbac
	if (!ctx.cr6.lt) goto loc_8225CBAC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_8225CBAC:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x8225cbc4
	if (!ctx.cr6.gt) goto loc_8225CBC4;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x8225cbd0
	goto loc_8225CBD0;
loc_8225CBC4:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x8225cbd0
	if (!ctx.cr6.lt) goto loc_8225CBD0;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_8225CBD0:
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r10,r10,r17
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8225cbec
	if (!ctx.cr6.lt) goto loc_8225CBEC;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8225CBEC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// b 0x8225cbfc
	goto loc_8225CBFC;
loc_8225CBF8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8225CBFC:
	// rlwimi r11,r6,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x8225cacc
	if (!ctx.cr6.eq) goto loc_8225CACC;
loc_8225CC14:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8225c848
	if (!ctx.cr6.eq) goto loc_8225C848;
	// subf r3,r14,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r14.u64;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8225CC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82269248) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-17424(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + -17424);
	// lwz r16,24848(r14)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + 24848);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x82269258;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r30,r27,208
	ctx.r30.s64 = ctx.r27.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82269284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// stw r29,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 672);
	// bl 0x82271570
	ctx.lr = 0x82269298;
	sub_82271570(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r18,r9,16389
	ctx.r18.u64 = ctx.r9.u64 | 16389;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r18
	ctx.r11.u64 = ctx.r6.u64 & ctx.r18.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// blt cr6,0x822692dc
	if (ctx.cr6.lt) goto loc_822692DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822692dc
	if (!ctx.cr6.eq) goto loc_822692DC;
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16387
	ctx.r19.u64 = ctx.r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x82269328
	goto loc_82269328;
loc_822692DC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82269328
	if (ctx.cr6.lt) goto loc_82269328;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82269304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,52(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82269328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82269328:
	// stw r29,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82269378
	if (ctx.cr6.lt) goto loc_82269378;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 672);
	// bl 0x82271598
	ctx.lr = 0x82269340;
	sub_82271598(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	ctx.r19.u64 = ctx.r9.u64 & ctx.r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82269378
	if (ctx.cr6.lt) goto loc_82269378;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226937c
	if (!ctx.cr6.eq) goto loc_8226937C;
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16387
	ctx.r19.u64 = ctx.r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// b 0x822695f4
	goto loc_822695F4;
loc_82269378:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_8226937C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822695f4
	if (ctx.cr6.lt) goto loc_822695F4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r23,r10,24796
	ctx.r23.s64 = ctx.r10.s64 + 24796;
	// addi r25,r9,24764
	ctx.r25.s64 = ctx.r9.s64 + 24764;
	// addi r22,r8,24740
	ctx.r22.s64 = ctx.r8.s64 + 24740;
	// addi r21,r7,24720
	ctx.r21.s64 = ctx.r7.s64 + 24720;
	// addi r20,r6,24692
	ctx.r20.s64 = ctx.r6.s64 + 24692;
	// addi r24,r11,24660
	ctx.r24.s64 = ctx.r11.s64 + 24660;
loc_822693B8:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r26,r5,16
	ctx.r26.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822695ac
	if (!ctx.cr6.lt) goto loc_822695AC;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82269504
	if (!ctx.cr6.eq) goto loc_82269504;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x82269400;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8226942c
	if (!ctx.cr6.eq) goto loc_8226942C;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82269428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82269598
	goto loc_82269598;
loc_8226942C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x8226943C;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82269468
	if (!ctx.cr6.eq) goto loc_82269468;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82269464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82269598
	goto loc_82269598;
loc_82269468:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x82269478;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822694a4
	if (!ctx.cr6.eq) goto loc_822694A4;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822694A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82269598
	goto loc_82269598;
loc_822694A4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x822694B4;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82269598
	if (!ctx.cr6.eq) goto loc_82269598;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r29,r27,208
	ctx.r29.s64 = ctx.r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822694D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822057a0
	ctx.lr = 0x822694D8;
	sub_822057A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82269598
	if (!ctx.cr6.eq) goto loc_82269598;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82269500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82269598
	goto loc_82269598;
loc_82269504:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82269598
	if (!ctx.cr6.eq) goto loc_82269598;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x82269520;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82269540
	if (!ctx.cr6.eq) goto loc_82269540;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82269590
	goto loc_82269590;
loc_82269540:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824118b0
	ctx.lr = 0x82269550;
	sub_824118B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82269598
	if (!ctx.cr6.eq) goto loc_82269598;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r29,r27,208
	ctx.r29.s64 = ctx.r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82269570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82269598
	if (!ctx.cr6.eq) goto loc_82269598;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82269590:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82269598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82269598:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822693b8
	goto loc_822693B8;
loc_822695AC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822695f4
	if (ctx.cr6.lt) goto loc_822695F4;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 672);
	// bl 0x822714b0
	ctx.lr = 0x822695C0;
	sub_822714B0(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	ctx.r19.u64 = ctx.r9.u64 & ctx.r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822695f4
	if (ctx.cr6.lt) goto loc_822695F4;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = ctx.r27.s64 + 208;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822695F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822695F4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82269610
	goto loc_82269610;
loc_82269610:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822707E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x822707F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82270a70
	if (ctx.cr6.eq) goto loc_82270A70;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82270a70
	if (ctx.cr6.eq) goto loc_82270A70;
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x8227d650
	ctx.lr = 0x82270814;
	sub_8227D650(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r28,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// beq cr6,0x8227083c
	if (ctx.cr6.eq) goto loc_8227083C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270838;
	sub_821F4B88(ctx, base);
	// stw r28,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
loc_8227083C:
	// lwz r30,204(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82270894
	if (ctx.cr6.eq) goto loc_82270894;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x821f4b88
	ctx.lr = 0x82270854;
	sub_821F4B88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x821f4b88
	ctx.lr = 0x82270860;
	sub_821F4B88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x821f4b88
	ctx.lr = 0x8227086C;
	sub_821F4B88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x821f4b88
	ctx.lr = 0x82270878;
	sub_821F4B88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x821f4b88
	ctx.lr = 0x82270884;
	sub_821F4B88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270890;
	sub_821F4B88(ctx, base);
	// stw r28,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
loc_82270894:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270944
	if (ctx.cr6.eq) goto loc_82270944;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270934
	if (ctx.cr6.eq) goto loc_82270934;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822708B4:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x821f4b88
	ctx.lr = 0x822708CC;
	sub_821F4B88(ctx, base);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x821f4b88
	ctx.lr = 0x822708E4;
	sub_821F4B88(ctx, base);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822708b4
	if (ctx.cr6.lt) goto loc_822708B4;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821f4b88
	ctx.lr = 0x8227092C;
	sub_821F4B88(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_82270934:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x821f4b88
	ctx.lr = 0x82270940;
	sub_821F4B88(ctx, base);
	// stw r28,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
loc_82270944:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270a0c
	if (ctx.cr6.eq) goto loc_82270A0C;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822709fc
	if (ctx.cr6.eq) goto loc_822709FC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82270964:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822709cc
	if (ctx.cr6.eq) goto loc_822709CC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227098c
	if (ctx.cr6.eq) goto loc_8227098C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x8227098C;
	sub_821F4B88(ctx, base);
loc_8227098C:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lwz r9,232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822709bc
	if (ctx.cr6.eq) goto loc_822709BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x822709BC;
	sub_821F4B88(ctx, base);
loc_822709BC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
loc_822709CC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82270964
	if (ctx.cr6.lt) goto loc_82270964;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821f4b88
	ctx.lr = 0x822709F4;
	sub_821F4B88(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_822709FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x821f4b88
	ctx.lr = 0x82270A08;
	sub_821F4B88(ctx, base);
	// stw r28,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_82270A0C:
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82270a20
	if (ctx.cr6.eq) goto loc_82270A20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270A20;
	sub_821F4B88(ctx, base);
loc_82270A20:
	// lwz r30,616(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// stw r28,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82270a50
	if (ctx.cr6.eq) goto loc_82270A50;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82270a44
	if (ctx.cr6.eq) goto loc_82270A44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270A44;
	sub_821F4B88(ctx, base);
loc_82270A44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270A50;
	sub_821F4B88(ctx, base);
loc_82270A50:
	// stw r28,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82270A60;
	sub_821F4B88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_82270A70:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227EA40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220423c
	ctx.lr = 0x8227EA48;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r28
	ctx.r8.u64 = uint32_t(ctx.r28.u32 ? ctx.r9.u32 / ctx.r28.u32 : 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8227ea94
	if (!ctx.cr6.lt) goto loc_8227EA94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8220428c
	__restgprlr_17(ctx, base);
	return;
loc_8227EA94:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8227ebf8
	if (!ctx.cr6.gt) goto loc_8227EBF8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mullw r23,r10,r28
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r24,r11,r28
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
loc_8227EAB8:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8227EAE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8227eb88
	if (!ctx.cr6.gt) goto loc_8227EB88;
loc_8227EB04:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EB20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subf r29,r9,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8227EB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// srawi r10,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EB74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r6.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8227eb04
	if (ctx.cr6.gt) goto loc_8227EB04;
loc_8227EB88:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,344(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8227EBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,344(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 344);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// stwx r20,r22,r3
	REX_STORE_U32(ctx.r22.u32 + ctx.r3.u32, ctx.r20.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// blt cr6,0x8227eab8
	if (ctx.cr6.lt) goto loc_8227EAB8;
loc_8227EBF8:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8220428c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82289630) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82289638;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289698
	if (ctx.cr6.eq) goto loc_82289698;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822897e0
	if (!ctx.cr6.eq) goto loc_822897E0;
	// stw r11,228(r30)
	REX_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82289684
	if (ctx.cr6.lt) goto loc_82289684;
	// stw r11,180(r30)
	REX_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_82289684:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,232(r30)
	REX_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_82289698:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,80
	ctx.r10.u64 = ctx.r11.u64 | 80;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822896b8
	if (ctx.cr6.eq) goto loc_822896B8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_822896B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82277898
	ctx.lr = 0x822896D8;
	sub_82277898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822897e0
	if (ctx.cr6.lt) goto loc_822897E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 72);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822897e0
	if (!ctx.cr6.gt) goto loc_822897E0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822778c0
	ctx.lr = 0x82289714;
	sub_822778C0(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r31,r11,22
	ctx.r31.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822897c4
	if (ctx.cr6.eq) goto loc_822897C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822897e0
	if (ctx.cr6.lt) goto loc_822897E0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82289730:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822897e0
	if (ctx.cr6.lt) goto loc_822897E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822897a8
	if (ctx.cr6.eq) goto loc_822897A8;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r10,r29,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// slw r9,r28,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r3.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822897a8
	if (!ctx.cr6.eq) goto loc_822897A8;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82278610
	ctx.lr = 0x822897A0;
	sub_82278610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822897e0
	if (ctx.cr6.lt) goto loc_822897E0;
loc_822897A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82277928
	ctx.lr = 0x822897BC;
	sub_82277928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82289730
	if (!ctx.cr6.eq) goto loc_82289730;
loc_822897C4:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82277990
	ctx.lr = 0x822897D0;
	sub_82277990(ctx, base);
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r31.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_822897E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228F3C0) {
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
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f4b0
	if (ctx.cr6.eq) goto loc_8228F4B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8228f4b0
	if (ctx.cr6.eq) goto loc_8228F4B0;
loc_8228F404:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228F41C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228f4b0
	if (ctx.cr6.lt) goto loc_8228F4B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228f444
	if (ctx.cr6.eq) goto loc_8228F444;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8228F444:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228f45c
	if (ctx.cr6.eq) goto loc_8228F45C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_8228F45C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// bne 0x8228f484
	if (!ctx.cr0.eq) goto loc_8228F484;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_8228F484:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82277480
	ctx.lr = 0x8228F494;
	sub_82277480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228f4b0
	if (ctx.cr6.lt) goto loc_8228F4B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8228f404
	if (!ctx.cr6.eq) goto loc_8228F404;
loc_8228F4B0:
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

DEFINE_REX_FUNC(sub_82291FA8) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82291fcc
	if (!ctx.cr6.gt) goto loc_82291FCC;
	// bl 0x82294c30
	ctx.lr = 0x82291FCC;
	sub_82294C30(ctx, base);
loc_82291FCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294578
	ctx.lr = 0x82291FD4;
	sub_82294578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822948f0
	ctx.lr = 0x82291FDC;
	sub_822948F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82291fec
	if (ctx.cr6.lt) goto loc_82291FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6368
	ctx.lr = 0x82291FEC;
	sub_822A6368(ctx, base);
loc_82291FEC:
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

DEFINE_REX_FUNC(sub_82293B98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82293BA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,356(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lhz r28,342(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// lhz r27,334(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 334);
	// lwz r26,324(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,316(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// sth r28,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r28.u16);
	// sth r27,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r27.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82291628
	ctx.lr = 0x82293BEC;
	sub_82291628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82293c3c
	if (ctx.cr6.lt) goto loc_82293C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293558
	ctx.lr = 0x82293BFC;
	sub_82293558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82293c3c
	if (ctx.cr6.lt) goto loc_82293C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293aa8
	ctx.lr = 0x82293C0C;
	sub_82293AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82293c3c
	if (ctx.cr6.lt) goto loc_82293C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822919b8
	ctx.lr = 0x82293C1C;
	sub_822919B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82293c3c
	if (ctx.cr6.lt) goto loc_82293C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82291fa8
	ctx.lr = 0x82293C2C;
	sub_82291FA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82293c3c
	if (ctx.cr6.lt) goto loc_82293C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82292000
	ctx.lr = 0x82293C3C;
	sub_82292000(ctx, base);
loc_82293C3C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82298348) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x82298350;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822044f8
	ctx.lr = 0x82298358;
	__savefpr_24(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r31,60(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r24,552(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lwz r5,320(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// ble cr6,0x822983a8
	if (!ctx.cr6.gt) goto loc_822983A8;
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298394
	if (ctx.cr6.eq) goto loc_82298394;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822983a8
	if (!ctx.cr6.eq) goto loc_822983A8;
loc_82298394:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82204544
	ctx.lr = 0x822983A4;
	__restfpr_24(ctx, base);
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
loc_822983A8:
	// lhz r11,580(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822983f8
	if (!ctx.cr6.gt) goto loc_822983F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_822983C4:
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,40(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r29,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// and r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 & ctx.r9.u64;
	// blt cr6,0x822983c4
	if (ctx.cr6.lt) goto loc_822983C4;
loc_822983F8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x82298530
	if (ctx.cr6.gt) goto loc_82298530;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82298530
	if (!ctx.cr6.eq) goto loc_82298530;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82298ef8
	if (ctx.cr6.eq) goto loc_82298EF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82298ef8
	if (!ctx.cr6.eq) goto loc_82298EF8;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lhz r9,34(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,1832(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// beq cr6,0x82298460
	if (ctx.cr6.eq) goto loc_82298460;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82298438:
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r6,r10,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r30,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82298438
	if (ctx.cr6.lt) goto loc_82298438;
loc_82298460:
	// lhz r10,120(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 120);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x822984f4
	if (ctx.cr6.lt) goto loc_822984F4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82298488:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82298488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82298488;
loc_822984F4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82298ef8
	if (!ctx.cr6.gt) goto loc_82298EF8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82298504:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82298504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82298504;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82204544
	ctx.lr = 0x8229852C;
	__restfpr_24(ctx, base);
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
loc_82298530:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82298ef8
	if (ctx.cr6.lt) goto loc_82298EF8;
	// lhz r23,730(r8)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r8.u32 + 730);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82298ef8
	if (!ctx.cr6.eq) goto loc_82298EF8;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82298ef8
	if (!ctx.cr6.gt) goto loc_82298EF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,2380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24884(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24884);
	ctx.f13.f64 = double(temp.f32);
loc_82298564:
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// mulli r10,r22,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(152));
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r30,4(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82298ee8
	if (!ctx.cr6.eq) goto loc_82298EE8;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82298ee8
	if (ctx.cr6.eq) goto loc_82298EE8;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822985a4
	if (!ctx.cr6.eq) goto loc_822985A4;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82298ee8
	if (ctx.cr6.eq) goto loc_82298EE8;
loc_822985A4:
	// lhz r10,34(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822986a8
	if (!ctx.cr6.eq) goto loc_822986A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822986a8
	if (!ctx.cr6.eq) goto loc_822986A8;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822986a8
	if (!ctx.cr6.eq) goto loc_822986A8;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,1832(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// clrlwi r7,r23,16
	ctx.r7.u64 = ctx.r23.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_822985F4:
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x82298650
	if (!ctx.cr6.eq) goto loc_82298650;
loc_82298608:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82298620
	if (!ctx.cr6.lt) goto loc_82298620;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82298620:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82298690
	if (!ctx.cr6.lt) goto loc_82298690;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82298608
	goto loc_82298608;
loc_82298650:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82298668
	if (!ctx.cr6.lt) goto loc_82298668;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82298668:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82298690
	if (!ctx.cr6.lt) goto loc_82298690;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f11,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfsu f9,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// b 0x82298650
	goto loc_82298650;
loc_82298690:
	// lwz r11,304(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822985f4
	if (ctx.cr6.lt) goto loc_822985F4;
	// b 0x82298ee8
	goto loc_82298EE8;
loc_822986A8:
	// lhz r10,580(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// lwz r11,556(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 556);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,148(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82298718
	if (!ctx.cr6.gt) goto loc_82298718;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_822986CC:
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x822986fc
	if (!ctx.cr6.eq) goto loc_822986FC;
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,144(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stwu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r31.u32 = ea;
loc_822986FC:
	// lhz r7,580(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x822986cc
	if (ctx.cr6.lt) goto loc_822986CC;
loc_82298718:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8229881c
	if (!ctx.cr6.eq) goto loc_8229881C;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
loc_82298738:
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x822987c0
	if (!ctx.cr6.eq) goto loc_822987C0;
	// lwzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r31,r23,16
	ctx.r31.u64 = ctx.r23.u32 & 0xFFFF;
loc_82298750:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82298768
	if (!ctx.cr6.lt) goto loc_82298768;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82298768:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82298804
	if (!ctx.cr6.lt) goto loc_82298804;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f4,f10,f7,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f3,f9,f8,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x82298750
	goto loc_82298750;
loc_822987C0:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_82298804:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82298738
	if (ctx.cr6.lt) goto loc_82298738;
	// b 0x82298ee8
	goto loc_82298EE8;
loc_8229881C:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82298980
	if (!ctx.cr6.eq) goto loc_82298980;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
loc_8229883C:
	// lwzx r9,r5,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x82298900
	if (!ctx.cr6.eq) goto loc_82298900;
	// lwzx r31,r9,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// clrlwi r30,r23,16
	ctx.r30.u64 = ctx.r23.u32 & 0xFFFF;
loc_82298854:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8229886c
	if (!ctx.cr6.lt) goto loc_8229886C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8229886C:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82298968
	if (!ctx.cr6.lt) goto loc_82298968;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r9,4
	ctx.r26.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f10,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// fmadds f9,f9,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// fmadds f8,f8,f3,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f6,f1,f3,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f5,f3,f12,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f4,f11,f7,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f3,f10,f7,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x82298854
	goto loc_82298854;
loc_82298900:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_82298968:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229883c
	if (ctx.cr6.lt) goto loc_8229883C;
	// b 0x82298ee8
	goto loc_82298EE8;
loc_82298980:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x82298b54
	if (!ctx.cr6.eq) goto loc_82298B54;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r26,24
	ctx.r27.s64 = ctx.r26.s64 + 24;
loc_822989A0:
	// lwzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x82298ab0
	if (!ctx.cr6.eq) goto loc_82298AB0;
	// lwzx r30,r9,r7
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
loc_822989B8:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822989d0
	if (!ctx.cr6.lt) goto loc_822989D0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_822989D0:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82298b3c
	if (!ctx.cr6.lt) goto loc_82298B3C;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r21,r5,4
	ctx.r21.s64 = ctx.r5.s64 + 4;
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lfs f31,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f30,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f29,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// fmadds f8,f8,f6,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f1,f3,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f4.f64)));
	// lfs f4,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f11,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f1,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f10,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f12.f64)));
	// lfs f11,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmadds f10,f31,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f31.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f8,f30,f7,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f30.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f5,f29,f7,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f2,f28,f7,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f12,f6,f3,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f10.f64)));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f10,f4,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f8,f1,f9,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f7,f11,f9,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x822989b8
	goto loc_822989B8;
loc_82298AB0:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,4(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82298B3C:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822989a0
	if (ctx.cr6.lt) goto loc_822989A0;
	// b 0x82298ee8
	goto loc_82298EE8;
loc_82298B54:
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x82298da8
	if (!ctx.cr6.eq) goto loc_82298DA8;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
loc_82298B74:
	// lwzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x82298ce0
	if (!ctx.cr6.eq) goto loc_82298CE0;
	// lwzx r29,r9,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r28,r23,16
	ctx.r28.u64 = ctx.r23.u32 & 0xFFFF;
loc_82298B8C:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82298ba4
	if (!ctx.cr6.lt) goto loc_82298BA4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82298BA4:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82298d90
	if (!ctx.cr6.lt) goto loc_82298D90;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,84(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f7,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r7,4
	ctx.r25.s64 = ctx.r7.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f9,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// addi r21,r6,4
	ctx.r21.s64 = ctx.r6.s64 + 4;
	// lfs f31,80(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r5,4
	ctx.r20.s64 = ctx.r5.s64 + 4;
	// lfs f30,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r19,r31,4
	ctx.r19.s64 = ctx.r31.s64 + 4;
	// lfs f29,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// addi r18,r30,4
	ctx.r18.s64 = ctx.r30.s64 + 4;
	// lfs f28,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// fmadds f6,f3,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f5,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f4.f64)));
	// lfs f3,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f9,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f11,88(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f8,f1,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f12.f64)));
	// lfs f8,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f31,f1,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f1.f64, ctx.f10.f64)));
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f27,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lfs f26,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f26.f64 = double(temp.f32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// lfs f25,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f25.f64 = double(temp.f32);
	// stw r18,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r18.u32);
	// lfs f24,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmadds f6,f29,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f29.f64, ctx.f30.f64, ctx.f6.f64)));
	// lfs f29,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f28,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f4.f64)));
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f2,f5,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f2.f64)));
	// lfs f5,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f3,f7,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f9.f64)));
	// lfs f9,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f11,f7,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f6,f10,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f4,f31,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f4.f64)));
	// fmadds f2,f27,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f30.f64, ctx.f2.f64)));
	// fmadds f12,f26,f30,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f26.f64, ctx.f30.f64, ctx.f3.f64)));
	// fmadds f11,f25,f30,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f25.f64, ctx.f30.f64, ctx.f7.f64)));
	// fmadds f10,f24,f1,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f24.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f7,f29,f8,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f29.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f6,f28,f8,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f5,f5,f8,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f9,f8,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f11.f64)));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82298b8c
	goto loc_82298B8C;
loc_82298CE0:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r7)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_82298D90:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82298b74
	if (ctx.cr6.lt) goto loc_82298B74;
	// b 0x82298ee8
	goto loc_82298EE8;
loc_82298DA8:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82298ee8
	if (!ctx.cr6.gt) goto loc_82298EE8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r26,24
	ctx.r25.s64 = ctx.r26.s64 + 24;
loc_82298DBC:
	// lwzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82298e90
	if (!ctx.cr6.eq) goto loc_82298E90;
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
	// lwzx r28,r30,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_82298DD4:
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82298dec
	if (!ctx.cr6.lt) goto loc_82298DEC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82298DEC:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82298ed4
	if (!ctx.cr6.lt) goto loc_82298ED4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82298e88
	if (!ctx.cr6.gt) goto loc_82298E88;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82298E00:
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r5,148(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stfsx f0,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
loc_82298E1C:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r21,r5,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lfsx f11,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lfs f10,0(r21)
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// stfsx f9,r9,r24
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
	// blt cr6,0x82298e1c
	if (ctx.cr6.lt) goto loc_82298E1C;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82298e00
	if (ctx.cr6.lt) goto loc_82298E00;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82298E60:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// stwx r5,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x82298e60
	if (ctx.cr6.lt) goto loc_82298E60;
loc_82298E88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82298dd4
	goto loc_82298DD4;
loc_82298E90:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82298ed4
	if (!ctx.cr6.gt) goto loc_82298ED4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82298E9C:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r5,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// blt cr6,0x82298e9c
	if (ctx.cr6.lt) goto loc_82298E9C;
loc_82298ED4:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82298dbc
	if (ctx.cr6.lt) goto loc_82298DBC;
loc_82298EE8:
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82298564
	if (ctx.cr6.lt) goto loc_82298564;
loc_82298EF8:
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82204544
	ctx.lr = 0x82298F00;
	__restfpr_24(ctx, base);
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E4068) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x822E4070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4104
	if (ctx.cr6.eq) goto loc_822E4104;
	// addi r30,r3,3752
	ctx.r30.s64 = ctx.r3.s64 + 3752;
	// lwz r3,15268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 15268);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,3752(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82312890
	ctx.lr = 0x822E409C;
	sub_82312890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x823128e0
	ctx.lr = 0x822E40A8;
	sub_823128E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e40bc
	if (ctx.cr6.eq) goto loc_822E40BC;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_822E40BC:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,3788(r31)
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,3792(r31)
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r6.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,3796(r31)
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r3.u32);
	// stw r4,3812(r31)
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r4.u32);
	// stw r11,14824(r31)
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r11.u32);
	// stw r5,14828(r31)
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r5.u32);
	// stw r10,14832(r31)
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r10.u32);
	// stw r8,22300(r31)
	REX_STORE_U32(ctx.r31.u32 + 22300, ctx.r8.u32);
loc_822E4104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E72D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x822E72D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822e7304
	if (!ctx.cr6.eq) goto loc_822E7304;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E7304:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e7348
	if (ctx.cr6.eq) goto loc_822E7348;
	// lwz r30,16(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r29,14(r28)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r28.u32 + 14);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6e78
	ctx.lr = 0x822E7328;
	sub_822E6E78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e7348
	if (!ctx.cr6.eq) goto loc_822E7348;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822e74bc
	if (ctx.cr6.eq) goto loc_822E74BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822e735c
	if (!ctx.cr6.eq) goto loc_822E735C;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
loc_822E7348:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E735C:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e73cc
	if (ctx.cr6.eq) goto loc_822E73CC;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e7410
	if (!ctx.cr6.eq) goto loc_822E7410;
loc_822E73CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822ba5b8
	ctx.lr = 0x822E73D8;
	sub_822BA5B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7348
	if (ctx.cr6.eq) goto loc_822E7348;
	// bl 0x822e6620
	ctx.lr = 0x822E73E8;
	sub_822E6620(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822ba5b8
	ctx.lr = 0x822E73F4;
	sub_822BA5B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e7424
	if (!ctx.cr6.eq) goto loc_822E7424;
loc_822E7400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e66a8
	ctx.lr = 0x822E7408;
	sub_822E66A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba5c8
	ctx.lr = 0x822E7410;
	sub_822BA5C8(ctx, base);
loc_822E7410:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E7424:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E7434:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e7434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7434;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822e7454
	if (ctx.cr6.gt) goto loc_822E7454;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_822E7454:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e747c
	if (!ctx.cr6.eq) goto loc_822E747C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822e7110
	ctx.lr = 0x822E7478;
	sub_822E7110(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_822E747C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8232dc10
	ctx.lr = 0x822E7494;
	sub_8232DC10(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r27,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r27.u32);
	// stw r31,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E74BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e757c
	if (ctx.cr6.eq) goto loc_822E757C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x822e74f8
	if (!ctx.cr6.eq) goto loc_822E74F8;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E74F8:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822E757C:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 24, ctx.xer);
	// beq cr6,0x822e759c
	if (ctx.cr6.eq) goto loc_822E759C;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bne cr6,0x822e7348
	if (!ctx.cr6.eq) goto loc_822E7348;
loc_822E759C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822ba5b8
	ctx.lr = 0x822E75A8;
	sub_822BA5B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7348
	if (ctx.cr6.eq) goto loc_822E7348;
	// bl 0x822e6620
	ctx.lr = 0x822E75B8;
	sub_822E6620(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822e75f0
	if (!ctx.cr6.eq) goto loc_822E75F0;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x822e7620
	if (!ctx.cr6.eq) goto loc_822E7620;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x822ba5b8
	ctx.lr = 0x822E75D4;
	sub_822BA5B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7400
	if (ctx.cr6.eq) goto loc_822E7400;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82412fb8
	ctx.lr = 0x822E75EC;
	sub_82412FB8(ctx, base);
	// b 0x822e7654
	goto loc_822E7654;
loc_822E75F0:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x822e7620
	if (!ctx.cr6.eq) goto loc_822E7620;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822ba5b8
	ctx.lr = 0x822E7604;
	sub_822BA5B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7400
	if (ctx.cr6.eq) goto loc_822E7400;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82203350
	ctx.lr = 0x822E761C;
	sub_82203350(ctx, base);
	// b 0x822e7654
	goto loc_822E7654;
loc_822E7620:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822ba5b8
	ctx.lr = 0x822E762C;
	sub_822BA5B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7400
	if (ctx.cr6.eq) goto loc_822E7400;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E7648:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e7648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7648;
loc_822E7654:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822e7668
	if (ctx.cr6.gt) goto loc_822E7668;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_822E7668:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7690
	if (!ctx.cr6.eq) goto loc_822E7690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822e7110
	ctx.lr = 0x822E768C;
	sub_822E7110(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_822E7690:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8232dce0
	ctx.lr = 0x822E76A8;
	sub_8232DCE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r31,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// beq cr6,0x822e76d8
	if (ctx.cr6.eq) goto loc_822E76D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E76D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F9E20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x822F9E28;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f9e68
	if (ctx.cr6.eq) goto loc_822F9E68;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// bne cr6,0x822f9e6c
	if (!ctx.cr6.eq) goto loc_822F9E6C;
loc_822F9E68:
	// li r15,1
	ctx.r15.s64 = 1;
loc_822F9E6C:
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822f9e80
	if (!ctx.cr6.eq) goto loc_822F9E80;
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// b 0x822f9e84
	goto loc_822F9E84;
loc_822F9E80:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F9E84:
	// lwz r8,3776(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,3780(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r8,3792(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 1;
	// lwz r7,3796(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3812(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r5,r9
	ctx.r21.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r20,r4,r10
	ctx.r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r19,r6,r10
	ctx.r19.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r18,r3,r9
	ctx.r18.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x822f9efc
	if (ctx.cr6.eq) goto loc_822F9EFC;
loc_822F9EF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_822F9EFC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822f9ef0
	if (ctx.cr6.eq) goto loc_822F9EF0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822fa374
	if (!ctx.cr6.lt) goto loc_822FA374;
loc_822F9F14:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mullw r24,r28,r23
	ctx.r24.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// lwz r8,232(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,21940(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r21
	ctx.r29.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r25,r11,r20
	ctx.r25.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822f9f84
	if (ctx.cr6.eq) goto loc_822F9F84;
	// lwz r8,21968(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822f9f84
	if (ctx.cr6.eq) goto loc_822F9F84;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822fa1a4
	if (ctx.cr6.eq) goto loc_822FA1A4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x822fa1a4
	if (ctx.cr6.gt) goto loc_822FA1A4;
loc_822F9F84:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822f9f9c
	if (!ctx.cr6.eq) goto loc_822F9F9C;
	// lwz r10,3432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fa15c
	if (ctx.cr6.eq) goto loc_822FA15C;
loc_822F9F9C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x822fa0f4
	if (ctx.cr6.eq) goto loc_822FA0F4;
	// ld r10,3632(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// bne cr6,0x822fa0f4
	if (!ctx.cr6.eq) goto loc_822FA0F4;
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x822f9fdc
	if (!ctx.cr6.eq) goto loc_822F9FDC;
	// lwz r10,21704(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f9fe0
	if (!ctx.cr6.eq) goto loc_822F9FE0;
loc_822F9FDC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822F9FE0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822fa0ec
	if (!ctx.cr6.eq) goto loc_822FA0EC;
	// lwz r30,20688(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x822fa158
	if (!ctx.cr6.lt) goto loc_822FA158;
loc_822F9FF4:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fa0dc
	if (ctx.cr6.eq) goto loc_822FA0DC;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822fa0dc
	if (!ctx.cr6.lt) goto loc_822FA0DC;
loc_822FA060:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzu r3,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwu r3,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzu r3,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// blt cr6,0x822fa060
	if (ctx.cr6.lt) goto loc_822FA060;
loc_822FA0DC:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x822f9ff4
	if (ctx.cr6.lt) goto loc_822F9FF4;
	// b 0x822fa158
	goto loc_822FA158;
loc_822FA0EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822f9ff4
	goto loc_822F9FF4;
loc_822FA0F4:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822fa15c
	if (!ctx.cr6.lt) goto loc_822FA15C;
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r27,r29,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r29.u64;
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
loc_822FA114:
	// lwz r11,3156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3156);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r6,r27,r29
	ctx.r6.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FA140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822fa114
	if (ctx.cr6.lt) goto loc_822FA114;
loc_822FA158:
	// lwz r27,276(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_822FA15C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x822fa174
	if (ctx.cr6.eq) goto loc_822FA174;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_822FA174:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822f9f14
	if (ctx.cr6.lt) goto loc_822F9F14;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_822FA1A4:
	// lwz r5,22020(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22020);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,21960(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21960);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,21976(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// li r10,4
	ctx.r10.s64 = 4;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_822FA1C0:
	// subfic r9,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r27.u64;
	// rlwinm r7,r27,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// addme r9,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x822fa1f0
	if (ctx.cr6.gt) goto loc_822FA1F0;
	// lwz r9,21956(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x822fa1c0
	goto loc_822FA1C0;
loc_822FA1F0:
	// lwz r10,21948(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822fa220
	if (!ctx.cr6.lt) goto loc_822FA220;
	// lwz r8,21956(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21948(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
loc_822FA208:
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822fa208
	if (ctx.cr6.lt) goto loc_822FA208;
loc_822FA220:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822f9ef0
	if (ctx.cr6.eq) goto loc_822F9EF0;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x822b4e20
	ctx.lr = 0x822FA24C;
	sub_822B4E20(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FA250:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822fa294
	if (!ctx.cr6.eq) goto loc_822FA294;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x822fa250
	if (ctx.cr6.lt) goto loc_822FA250;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_822FA294:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x822f9ef0
	if (!ctx.cr6.lt) goto loc_822F9EF0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822fa2bc
	if (ctx.cr6.eq) goto loc_822FA2BC;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_822FA2BC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bge cr6,0x822fa2d8
	if (!ctx.cr6.lt) goto loc_822FA2D8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822FA2D8:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fa2e8
	if (ctx.cr6.eq) goto loc_822FA2E8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822FA2E8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa374
	if (ctx.cr6.eq) goto loc_822FA374;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_822FA2FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa340
	if (ctx.cr6.eq) goto loc_822FA340;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,-12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x822fa364
	goto loc_822FA364;
loc_822FA340:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_822FA364:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,-12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fa2fc
	if (!ctx.cr6.eq) goto loc_822FA2FC;
loc_822FA374:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82311138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82311140;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// ble cr6,0x82311308
	if (!ctx.cr6.gt) goto loc_82311308;
	// addi r23,r9,-2
	ctx.r23.s64 = ctx.r9.s64 + -2;
	// lwz r14,340(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// rlwinm r18,r23,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// subf r7,r3,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r3.u64;
	// addi r22,r9,-4
	ctx.r22.s64 = ctx.r9.s64 + -4;
	// addi r21,r9,-2
	ctx.r21.s64 = ctx.r9.s64 + -2;
	// addi r20,r9,-5
	ctx.r20.s64 = ctx.r9.s64 + -5;
	// addi r19,r23,-1
	ctx.r19.s64 = ctx.r23.s64 + -1;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
loc_82311198:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
	// lbz r6,-1(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// addi r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 1;
	// lbz r5,1(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// addi r27,r8,2
	ctx.r27.s64 = ctx.r8.s64 + 2;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,2(r8)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r3,r3,14
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(14));
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r5,r3,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r6,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 7;
	// stw r6,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// ble cr6,0x8231125c
	if (!ctx.cr6.gt) goto loc_8231125C;
	// addi r10,r23,-3
	ctx.r10.s64 = ctx.r23.s64 + -3;
	// addi r26,r8,-2
	ctx.r26.s64 = ctx.r8.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r8,-3
	ctx.r25.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231120C:
	// lbzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r30,r28,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r5,r26,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lbzx r3,r27,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r25,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mulli r3,r3,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// srawi r10,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 7;
	// stwu r10,8(r6)
	ea = 8 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x8231120c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231120C;
loc_8231125C:
	// lbzx r10,r19,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r8.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lbzx r11,r21,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r5,r22,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r20,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r8.u32);
	// mulli r31,r31,14
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(14));
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mulli r5,r10,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r18,r24
	REX_STORE_U32(ctx.r18.u32 + ctx.r24.u32, ctx.r10.u32);
	// ble cr6,0x823112f0
	if (!ctx.cr6.gt) goto loc_823112F0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823112C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x823112d8
	if (!ctx.cr6.gt) goto loc_823112D8;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
loc_823112D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r17,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r17.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stbx r10,r16,r6
	REX_STORE_U8(ctx.r16.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x823112c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823112C0;
loc_823112F0:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// add r8,r8,r14
	ctx.r8.u64 = ctx.r8.u64 + ctx.r14.u64;
	// add r16,r16,r14
	ctx.r16.u64 = ctx.r16.u64 + ctx.r14.u64;
	// bne 0x82311198
	if (!ctx.cr0.eq) goto loc_82311198;
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r26,276(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82311308:
	// lwz r30,332(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r27,348(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82311348
	if (!ctx.cr6.gt) goto loc_82311348;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// subf r28,r4,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_8231132C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bl 0x82310fc0
	ctx.lr = 0x8231133C;
	sub_82310FC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8231132c
	if (!ctx.cr0.eq) goto loc_8231132C;
loc_82311348:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82311378
	if (!ctx.cr6.gt) goto loc_82311378;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r29,r26,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r26.u64;
loc_8231135C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82310fc0
	ctx.lr = 0x8231136C;
	sub_82310FC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8231135c
	if (!ctx.cr0.eq) goto loc_8231135C;
loc_82311378:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823171C8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,1940(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1940);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82317240
	if (!ctx.cr6.lt) goto loc_82317240;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82317240:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231C3B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8231C3C0;
	__savegprlr_14(ctx, base);
	// addi r10,r1,-241
	ctx.r10.s64 = ctx.r1.s64 + -241;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r16,r10,0,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r16,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r16.u32);
	// beq cr6,0x8231c964
	if (ctx.cr6.eq) goto loc_8231C964;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8231c500
	if (ctx.cr6.eq) goto loc_8231C500;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C3F4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8231c3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C3F4;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C418:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C418;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C43C:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C43C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C460:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C460;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C484:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C484;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C4A8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C4A8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C4CC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8231c4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C4CC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C4F0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8231c4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C4F0;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231C500:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bne cr6,0x8231c6d4
	if (!ctx.cr6.eq) goto loc_8231C6D4;
loc_8231C524:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,-1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// lbz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r3,3(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// lbz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8231c524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C524;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231C6D4:
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r3.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r3.u8);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r3.u8);
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r3.u8);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r3,5(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,7(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8231c6d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C6D4;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231C964:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// beq cr6,0x8231d040
	if (ctx.cr6.eq) goto loc_8231D040;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r31,r6,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// bne cr6,0x8231cb70
	if (!ctx.cr6.eq) goto loc_8231CB70;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r30,r6,2
	ctx.r30.s64 = ctx.r6.s64 + 2;
	// addi r29,r6,3
	ctx.r29.s64 = ctx.r6.s64 + 3;
	// addi r28,r6,4
	ctx.r28.s64 = ctx.r6.s64 + 4;
	// addi r27,r6,5
	ctx.r27.s64 = ctx.r6.s64 + 5;
	// addi r26,r6,-2
	ctx.r26.s64 = ctx.r6.s64 + -2;
loc_8231C9B8:
	// lbz r5,-2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// lbzx r7,r10,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// lbz r25,-2(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r24,0(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r7.u8);
	// lbz r25,-1(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// lbz r24,1(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// lbzx r7,r10,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,-1(r8)
	REX_STORE_U8(ctx.r8.u32 + -1, ctx.r5.u8);
	// lbz r25,2(r31)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r24,0(r9)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r10,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lbz r25,1(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r24,3(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lbz r25,2(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r24,4(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r10,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbz r24,3(r9)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r25,5(r31)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r7,r10,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,4(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r24,6(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r7.u8);
	// lbz r24,7(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r25,5(r9)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r5.u8);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bdnz 0x8231c9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C9B8;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231CB70:
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r9,r16,-1
	ctx.r9.s64 = ctx.r16.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8231CB80:
	// lbz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r27,-1(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r18,-2(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r25,r27,r29
	ctx.r25.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r30,1(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r26,r18,r27
	ctx.r26.u64 = ctx.r18.u64 + ctx.r27.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r25,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r24,r29,r30
	ctx.r24.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r25,r25,r17
	ctx.r25.u64 = ctx.r25.u64 + ctx.r17.u64;
	// lbz r28,5(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r16,r26,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r25,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r25.u32);
	// add r23,r3,r30
	ctx.r23.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r4,r24,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r19,6(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r26,r16
	ctx.r16.u64 = ctx.r26.u64 + ctx.r16.u64;
	// lbz r14,7(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r5,r3
	ctx.r22.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// rlwinm r26,r23,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r8,r5
	ctx.r21.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r20,r28,r8
	ctx.r20.u64 = ctx.r28.u64 + ctx.r8.u64;
	// subf r24,r15,r16
	ctx.r24.u64 = ctx.r16.u64 - ctx.r15.u64;
	// add r23,r23,r26
	ctx.r23.u64 = ctx.r23.u64 + ctx.r26.u64;
	// rlwinm r17,r22,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// rlwinm r26,r20,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r21,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r29,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r29.u64;
	// subf r24,r29,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r29.u64;
	// add r22,r22,r17
	ctx.r22.u64 = ctx.r22.u64 + ctx.r17.u64;
	// add r23,r20,r26
	ctx.r23.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 + ctx.r25.u64;
	// subf r26,r3,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lwz r16,-328(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// subf r22,r8,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r8.u64;
	// subf r18,r18,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r18.u64;
	// subf r27,r5,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r5.u64;
	// subf r29,r30,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// addi r24,r29,8
	ctx.r24.s64 = ctx.r29.s64 + 8;
	// subf r29,r30,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r30,r3,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r3.u64;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// add r3,r19,r28
	ctx.r3.u64 = ctx.r19.u64 + ctx.r28.u64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r27,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r25,r5,8
	ctx.r25.s64 = ctx.r5.s64 + 8;
	// lbzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r28,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// srawi r4,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 4;
	// stb r27,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r27.u8);
	// lbzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r14.u64;
	// stb r26,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r26.u8);
	// lbzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stb r29,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r29.u8);
	// stb r30,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r30.u8);
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// stb r4,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8231cb80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231CB80;
	// lwz r4,-324(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
loc_8231CD24:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,-276(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r19,-328(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r28,-8
	ctx.r16.s64 = ctx.r28.s64 + -8;
	// addi r28,r8,18
	ctx.r28.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r29,r7,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r28,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r28.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	ctx.r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r10.u32);
	// add r15,r3,r9
	ctx.r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r28,r29,-2
	ctx.r28.s64 = ctx.r29.s64 + -2;
	// stw r17,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r15.u32);
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r8,8
	ctx.r26.s64 = ctx.r8.s64 + 8;
	// stw r9,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r9.u32);
	// addi r25,r8,16
	ctx.r25.s64 = ctx.r8.s64 + 16;
	// addi r24,r8,9
	ctx.r24.s64 = ctx.r8.s64 + 9;
	// addi r23,r8,1
	ctx.r23.s64 = ctx.r8.s64 + 1;
	// addi r22,r8,17
	ctx.r22.s64 = ctx.r8.s64 + 17;
	// addi r21,r8,-7
	ctx.r21.s64 = ctx.r8.s64 + -7;
	// add r20,r27,r5
	ctx.r20.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r19,r19,r30
	ctx.r19.u64 = ctx.r19.u64 + ctx.r30.u64;
	// b 0x8231cdc8
	goto loc_8231CDC8;
loc_8231CDB8:
	// lwz r28,-292(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r16,-284(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r17,-288(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r15,-304(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
loc_8231CDC8:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r4,r26,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// subf r18,r7,r31
	ctx.r18.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbzx r27,r10,r7
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r25,r10
	ctx.r14.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lbzx r29,r23,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lbzx r3,r28,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r9,r16
	ctx.r16.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r16.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbzx r27,r18,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// add r18,r4,r28
	ctx.r18.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbzx r15,r15,r9
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r14.u64;
	// lbzx r17,r17,r10
	ctx.r17.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbzx r28,r21,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lwz r14,-316(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r28,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r28.u32);
	// subf r28,r16,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r16.u64;
	// subf r16,r27,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lbzx r3,r22,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r27,-280(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r27,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r27.u32);
	// addi r27,r8,10
	ctx.r27.s64 = ctx.r8.s64 + 10;
	// stw r28,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r28.u32);
	// subf r28,r15,r16
	ctx.r28.u64 = ctx.r16.u64 - ctx.r15.u64;
	// lwz r16,-312(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// srawi r16,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 4;
	// stw r3,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// lbzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r18,-296(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// srawi r15,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r15.s64 = ctx.r29.s32 >> 4;
	// lbzx r29,r16,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lwz r16,-308(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbzx r18,r18,r10
	ctx.r18.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// add r27,r4,r28
	ctx.r27.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbzx r4,r15,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r16,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r16.u64;
	// lwz r16,-300(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r3,r29,r4
	ctx.r3.u64 = ctx.r29.u64 + ctx.r4.u64;
	// subf r4,r16,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r16.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r29,r17,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r17.u64;
	// lwz r17,-320(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 1;
	// addi r27,r4,8
	ctx.r27.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r18.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r18,r4,8
	ctx.r18.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// lbzx r28,r17,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// lbzx r4,r19,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// lbzx r29,r9,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r9,r20,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r28,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r29,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r17,-332(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// lwz r27,-324(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addi r29,r8,-5
	ctx.r29.s64 = ctx.r8.s64 + -5;
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r28,r3,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lbzx r28,r29,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r29,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r18.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lbzx r18,r3,r10
	ctx.r18.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r28.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r29,r9,8
	ctx.r29.s64 = ctx.r9.s64 + 8;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// stbx r3,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lbzx r3,r17,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// lbzx r28,r4,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r3,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// srawi r4,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 4;
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stbx r3,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8231cdb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231CDB8;
	// lwz r10,-336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// bne 0x8231cd24
	if (!ctx.cr0.eq) goto loc_8231CD24;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231D040:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r8,11
	ctx.r8.s64 = 11;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r18,r6,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r9,r16,-1
	ctx.r9.s64 = ctx.r16.s64 + -1;
	// stw r18,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bne cr6,0x8231d388
	if (!ctx.cr6.eq) goto loc_8231D388;
loc_8231D06C:
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,-1(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r20,-2(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r27,r29,r31
	ctx.r27.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r3,1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r28,r29,r20
	ctx.r28.u64 = ctx.r29.u64 + ctx.r20.u64;
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r19,r27,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lbz r30,5(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r17,r28,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r27,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r27.u32);
	// add r25,r3,r5
	ctx.r25.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r18,r26,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r21,6(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r17,r28,r17
	ctx.r17.u64 = ctx.r28.u64 + ctx.r17.u64;
	// lbz r14,7(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r24,r7,r5
	ctx.r24.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r28,r25,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 + ctx.r18.u64;
	// add r22,r30,r8
	ctx.r22.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r19,r24,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r15,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r15.u64;
	// add r23,r8,r7
	ctx.r23.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r25,r28
	ctx.r25.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 + ctx.r19.u64;
	// rlwinm r28,r22,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r29,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r27,r23,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r31,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r31.u64;
	// subf r25,r31,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r31.u64;
	// subf r24,r3,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r3.u64;
	// add r28,r22,r28
	ctx.r28.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// lwz r17,-332(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r28,r21,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r21.u64;
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// subf r17,r3,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r3.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// subf r31,r20,r17
	ctx.r31.u64 = ctx.r17.u64 - ctx.r20.u64;
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// subf r29,r7,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r7.u64;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// subf r31,r8,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r8.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// subf r3,r5,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r5.u64;
	// srawi r28,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 4;
	// add r5,r21,r30
	ctx.r5.u64 = ctx.r21.u64 + ctx.r30.u64;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// srawi r29,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srawi r27,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 4;
	// lbzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// addi r26,r7,8
	ctx.r26.s64 = ctx.r7.s64 + 8;
	// lbzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r28,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r28.u8);
	// srawi r3,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 4;
	// lbzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// srawi r28,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 4;
	// stb r29,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r29.u8);
	// lbzx r31,r31,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// lbzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stb r27,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r27.u8);
	// lbzx r30,r28,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r31,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r31.u8);
	// stb r3,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r3.u8);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// stb r30,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r30.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8231d06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D06C;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// addi r10,r16,8
	ctx.r10.s64 = ctx.r16.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8231D1D8:
	// lbz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,9(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r31,16(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r30,-8(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -8);
	// lbz r29,17(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r28,-7(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -7);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,10(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// subf r5,r31,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lbz r31,2(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,18(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lbz r27,19(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,11(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// lbz r26,-5(r10)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// srawi r24,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 4;
	// lbz r30,12(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lbz r29,4(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r31,-6(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// lbz r3,5(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r23,20(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// add r22,r8,r4
	ctx.r22.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,13(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r21,-4(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// subf r5,r25,r22
	ctx.r5.u64 = ctx.r22.u64 - ctx.r25.u64;
	// lbz r25,21(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r22,-3(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// stb r24,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r24.u8);
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,14(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r31,r27,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r27.u64;
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r4,r23,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r23.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// subf r4,r25,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r25.u64;
	// srawi r3,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 4;
	// subf r8,r22,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r22.u64;
	// lbzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r31,r8,8
	ctx.r31.s64 = ctx.r8.s64 + 8;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// srawi r7,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 4;
	// stb r4,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,15(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r3,22(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r5,-2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r4,r3,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lbz r3,23(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r31,-1(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// subf r8,r31,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r31.u64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// lbzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r4,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r4.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8231d1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D1D8;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8231D388:
	// lbz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,-1(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,-2(r10)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r26,r30,r28
	ctx.r26.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r31,1(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r27,r28,r19
	ctx.r27.u64 = ctx.r28.u64 + ctx.r19.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r26,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r25,r30,r31
	ctx.r25.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r26,r26,r17
	ctx.r26.u64 = ctx.r26.u64 + ctx.r17.u64;
	// lbz r15,-3(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// rlwinm r16,r27,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r29,5(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stw r26,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r26.u32);
	// rlwinm r4,r25,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r3,r31
	ctx.r24.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r20,6(r10)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r27,r16
	ctx.r16.u64 = ctx.r27.u64 + ctx.r16.u64;
	// lbz r14,7(r10)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r8,r5
	ctx.r22.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r23,r5,r3
	ctx.r23.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// rlwinm r27,r24,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r15,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r15.u64;
	// add r21,r29,r8
	ctx.r21.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r26,r22,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r23,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r27
	ctx.r24.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r22,r22,r26
	ctx.r22.u64 = ctx.r22.u64 + ctx.r26.u64;
	// rlwinm r27,r21,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r30,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r30.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 + ctx.r17.u64;
	// subf r25,r30,r24
	ctx.r25.u64 = ctx.r24.u64 - ctx.r30.u64;
	// add r24,r21,r27
	ctx.r24.u64 = ctx.r21.u64 + ctx.r27.u64;
	// subf r27,r28,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r16,-332(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r23,r8,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r8.u64;
	// subf r28,r5,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r4,r29,r22
	ctx.r4.u64 = ctx.r22.u64 - ctx.r29.u64;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// subf r30,r31,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r31.u64;
	// subf r31,r3,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// srawi r27,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 4;
	// subf r24,r20,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r20.u64;
	// add r3,r20,r29
	ctx.r3.u64 = ctx.r20.u64 + ctx.r29.u64;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// subf r5,r5,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r5.u64;
	// srawi r28,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 4;
	// lbzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// addi r26,r5,8
	ctx.r26.s64 = ctx.r5.s64 + 8;
	// stb r27,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// lbzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// srawi r27,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 4;
	// lbzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r14.u64;
	// stb r28,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r28.u8);
	// lbzx r31,r31,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r4,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r4.u8);
	// lbzx r29,r27,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r30,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r30.u8);
	// stb r31,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// stb r29,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r29.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stbu r4,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8231d388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D388;
	// lwz r4,-320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
loc_8231D52C:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r28,-276(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r29,r7,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r20,-332(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r29,-8
	ctx.r16.s64 = ctx.r29.s64 + -8;
	// addi r29,r8,18
	ctx.r29.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r30,r7,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r29,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r29.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// subf r4,r7,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	ctx.r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// add r15,r3,r9
	ctx.r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r29,r30,-2
	ctx.r29.s64 = ctx.r30.s64 + -2;
	// stw r17,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r15.u32);
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r8,8
	ctx.r27.s64 = ctx.r8.s64 + 8;
	// stw r9,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// addi r26,r8,16
	ctx.r26.s64 = ctx.r8.s64 + 16;
	// addi r25,r8,9
	ctx.r25.s64 = ctx.r8.s64 + 9;
	// addi r24,r8,1
	ctx.r24.s64 = ctx.r8.s64 + 1;
	// addi r23,r8,17
	ctx.r23.s64 = ctx.r8.s64 + 17;
	// addi r22,r8,-7
	ctx.r22.s64 = ctx.r8.s64 + -7;
	// add r21,r28,r5
	ctx.r21.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r20,r20,r31
	ctx.r20.u64 = ctx.r20.u64 + ctx.r31.u64;
	// addi r19,r18,1
	ctx.r19.s64 = ctx.r18.s64 + 1;
	// b 0x8231d5d4
	goto loc_8231D5D4;
loc_8231D5C4:
	// lwz r29,-320(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-300(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r17,-308(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r16,-312(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
loc_8231D5D4:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r4,r27,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// subf r18,r7,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r7.u64;
	// lbzx r28,r10,r7
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r26,r10
	ctx.r14.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// lbzx r30,r25,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lbzx r3,r29,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r16,r9
	ctx.r16.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r9.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbzx r28,r18,r9
	ctx.r28.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// add r18,r4,r29
	ctx.r18.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lbzx r15,r15,r9
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r14.u64;
	// lbzx r17,r17,r10
	ctx.r17.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbzx r29,r22,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lwz r14,-280(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r29,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// subf r29,r16,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r16.u64;
	// subf r16,r28,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lbzx r3,r23,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r28,-316(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r18,-296(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r29,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r29.u32);
	// subf r29,r15,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r15.u64;
	// stw r3,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// addi r28,r8,10
	ctx.r28.s64 = ctx.r8.s64 + 10;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lbzx r18,r18,r10
	ctx.r18.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r28,r28,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r28,r4,r29
	ctx.r28.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r16,-304(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 4;
	// srawi r15,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r15.s64 = ctx.r30.s32 >> 4;
	// lbzx r30,r16,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lbzx r4,r15,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// lwz r16,-288(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r30,r4
	ctx.r3.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r28,r16,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r16.u64;
	// lwz r16,-284(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r4,r16,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r16.u64;
	// subf r30,r17,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r17.u64;
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 1;
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r18.u64;
	// lwz r18,-292(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r17,r4,8
	ctx.r17.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r29,r10,r19
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r4,r20,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// lbzx r9,r21,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// lbzx r30,r18,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r30,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r18,-328(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r30,r8,-5
	ctx.r30.s64 = ctx.r8.s64 + -5;
	// lwz r28,-272(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r16,-324(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// lbzx r15,r30,r10
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u8);
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r29,r3,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r18,2
	ctx.r4.s64 = ctx.r18.s64 + 2;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r30,r10,r4
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r30.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r30,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r17.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r29,r3,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// subf r9,r15,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r15.u64;
	// addi r30,r18,3
	ctx.r30.s64 = ctx.r18.s64 + 3;
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r29.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// srawi r29,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 4;
	// stbx r4,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lbzx r28,r28,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r16,r5
	ctx.r9.u64 = ctx.r16.u64 + ctx.r5.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r3,r28,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r9,r30,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r30.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// lbzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// lbzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stbx r4,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8231d5c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D5C4;
	// lwz r10,-336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r18,r18,r6
	ctx.r18.u64 = ctx.r18.u64 + ctx.r6.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r18,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x8231d52c
	if (!ctx.cr0.eq) goto loc_8231D52C;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8236D3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236d514
	if (!ctx.cr6.lt) goto loc_8236D514;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,1528
	ctx.r29.s64 = ctx.r11.s64 + 1528;
loc_8236D3EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x8236d520
	if (ctx.cr6.eq) goto loc_8236D520;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x8236d4b8
	if (!ctx.cr6.eq) goto loc_8236D4B8;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8236d45c
	if (!ctx.cr6.lt) goto loc_8236D45C;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8236d45c
	if (!ctx.cr6.eq) goto loc_8236D45C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236d440
	if (ctx.cr6.eq) goto loc_8236D440;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,1050
	ctx.r5.s64 = 1050;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x8236d1b8
	ctx.lr = 0x8236D440;
	sub_8236D1B8(ctx, base);
loc_8236D440:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8236D448:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x8236d500
	goto loc_8236D500;
loc_8236D45C:
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x8236d4b8
	if (!ctx.cr6.eq) goto loc_8236D4B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236d4b8
	if (!ctx.cr6.lt) goto loc_8236D4B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x8236d4b8
	if (!ctx.cr6.eq) goto loc_8236D4B8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8236d4b8
	if (!ctx.cr6.eq) goto loc_8236D4B8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8236d4ac
	if (ctx.cr6.eq) goto loc_8236D4AC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,1050
	ctx.r5.s64 = 1050;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x8236d1b8
	ctx.lr = 0x8236D4AC;
	sub_8236D1B8(ctx, base);
loc_8236D4AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8236d448
	goto loc_8236D448;
loc_8236D4B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8236d4f8
	if (!ctx.cr6.eq) goto loc_8236D4F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8236d4f8
	if (!ctx.cr6.eq) goto loc_8236D4F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236d4f8
	if (!ctx.cr6.lt) goto loc_8236D4F8;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8236d4f8
	if (!ctx.cr6.eq) goto loc_8236D4F8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8236d500
	goto loc_8236D500;
loc_8236D4F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8236D500:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236d3ec
	if (ctx.cr6.lt) goto loc_8236D3EC;
loc_8236D514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D518:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_8236D520:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8236d518
	goto loc_8236D518;
}

DEFINE_REX_FUNC(sub_82373FB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82373FB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r6,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x821f4a68
	ctx.lr = 0x82373FD8;
	sub_821F4A68(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82373fec
	if (!ctx.cr0.eq) goto loc_82373FEC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82374148
	goto loc_82374148;
loc_82373FEC:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82374004:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82374004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82374004;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374030
	if (ctx.cr6.eq) goto loc_82374030;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_82374024:
	// lwz r10,44(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82374024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82374024;
loc_82374030:
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374058
	if (ctx.cr6.eq) goto loc_82374058;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82374058
	if (ctx.cr0.eq) goto loc_82374058;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82374050:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82374050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82374050;
loc_82374058:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237407c
	if (ctx.cr6.eq) goto loc_8237407C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8237407c
	if (ctx.cr0.eq) goto loc_8237407C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82374074:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82374074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82374074;
loc_8237407C:
	// clrlwi r29,r31,12
	ctx.r29.u64 = ctx.r31.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = ctx.r29.u64 | 542113792;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823709e0
	ctx.lr = 0x8237409C;
	sub_823709E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82374148
	if (ctx.cr0.lt) goto loc_82374148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r29,4352
	ctx.r5.u64 = ctx.r29.u64 | 285212672;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823709e0
	ctx.lr = 0x823740C4;
	sub_823709E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82374148
	if (ctx.cr0.lt) goto loc_82374148;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82374124
	if (ctx.cr6.eq) goto loc_82374124;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
loc_823740E0:
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r8,168(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 168);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,168(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 168);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// bdnz 0x823740e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823740E0;
loc_82374124:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82374148:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82374154;
	sub_821F4B88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82385F18) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82385fc8
	if (ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385fb0
	if (ctx.cr6.eq) goto loc_82385FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82385fbc
	goto loc_82385FBC;
loc_82385FB0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82385FBC:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82385fcc
	goto loc_82385FCC;
loc_82385FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82385FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82388570) {
	REX_FUNC_PROLOGUE();
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82388580
	if (!ctx.cr6.eq) goto loc_82388580;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82388580:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x823885c4
	if (ctx.cr6.gt) {
		sub_823885c4(ctx, base);
		return;
	}
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,24728
	ctx.r12.s64 = ctx.r12.s64 + 24728;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// nop 
	// addi r12,r12,-31308
	ctx.r12.s64 = ctx.r12.s64 + -31308;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		sub_823885B4(ctx, base);
		return;
	case 1:
		sub_823885B4(ctx, base);
		return;
	case 2:
		sub_823885CC(ctx, base);
		return;
	case 3:
		sub_823885EC(ctx, base);
		return;
	case 4:
		sub_82388618(ctx, base);
		return;
	case 5:
		sub_823885B4(ctx, base);
		return;
	case 6:
		sub_823885CC(ctx, base);
		return;
	case 7:
		sub_823885EC(ctx, base);
		return;
	case 8:
		sub_82388618(ctx, base);
		return;
	case 9:
		sub_82388640(ctx, base);
		return;
	case 10:
		sub_82388650(ctx, base);
		return;
	case 11:
		sub_82388660(ctx, base);
		return;
	case 12:
		sub_82388670(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
}

DEFINE_REX_FUNC(sub_8238D730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x8238D738;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8238d778
	if (ctx.cr6.eq) goto loc_8238D778;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8238d764
	if (!ctx.cr6.eq) goto loc_8238D764;
loc_8238D75C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8238d770
	goto loc_8238D770;
loc_8238D764:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8238d78c
	if (!ctx.cr6.eq) goto loc_8238D78C;
loc_8238D76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238D770:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_8238D778:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8238d764
	if (!ctx.cr6.eq) goto loc_8238D764;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8238d76c
	if (!ctx.cr6.eq) goto loc_8238D76C;
	// b 0x8238d75c
	goto loc_8238D75C;
loc_8238D78C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82385e98
	ctx.lr = 0x8238D794;
	sub_82385E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82385e98
	ctx.lr = 0x8238D79C;
	sub_82385E98(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8238d7b8
	if (!ctx.cr6.eq) goto loc_8238D7B8;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x8238d7f4
	goto loc_8238D7F4;
loc_8238D7B8:
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// bl 0x8238a7b8
	ctx.lr = 0x8238D7D0;
	sub_8238A7B8(ctx, base);
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8238d7f4
	if (ctx.cr6.eq) goto loc_8238D7F4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238a6e8
	ctx.lr = 0x8238D7E8;
	sub_8238A6E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238d7f4
	if (ctx.cr0.eq) goto loc_8238D7F4;
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
loc_8238D7F4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8238d808
	if (!ctx.cr6.eq) goto loc_8238D808;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x8238d844
	goto loc_8238D844;
loc_8238D808:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a7b8
	ctx.lr = 0x8238D820;
	sub_8238A7B8(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8238d844
	if (ctx.cr6.eq) goto loc_8238D844;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238a6e8
	ctx.lr = 0x8238D838;
	sub_8238A6E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238d844
	if (ctx.cr0.eq) goto loc_8238D844;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8238D844:
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8238da64
	if (ctx.cr6.eq) goto loc_8238DA64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8238da64
	if (ctx.cr6.eq) goto loc_8238DA64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238d870
	if (!ctx.cr6.eq) goto loc_8238D870;
loc_8238D864:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238d75c
	if (!ctx.cr6.eq) goto loc_8238D75C;
	// b 0x8238d76c
	goto loc_8238D76C;
loc_8238D870:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8238d8fc
	if (!ctx.cr6.eq) goto loc_8238D8FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238d89c
	if (!ctx.cr6.eq) goto loc_8238D89C;
loc_8238D888:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8238d75c
	if (!ctx.cr6.gt) goto loc_8238D75C;
	// b 0x8238d76c
	goto loc_8238D76C;
loc_8238D89C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238d864
	if (!ctx.cr6.eq) goto loc_8238D864;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8238d8c0
	if (!ctx.cr6.eq) goto loc_8238D8C0;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
loc_8238D8C0:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238d8d8
	if (!ctx.cr6.eq) goto loc_8238D8D8;
	// lwz r9,32(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
loc_8238D8D8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// lwz r9,32(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
loc_8238D8EC:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// b 0x8238d76c
	goto loc_8238D76C;
loc_8238D8FC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8238d97c
	if (!ctx.cr6.eq) goto loc_8238D97C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238d960
	if (!ctx.cr6.eq) goto loc_8238D960;
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8238d930
	if (!ctx.cr6.eq) goto loc_8238D930;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
loc_8238D930:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238d948
	if (!ctx.cr6.eq) goto loc_8238D948;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
loc_8238D948:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x8238d8ec
	goto loc_8238D8EC;
loc_8238D960:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238d864
	if (!ctx.cr6.eq) goto loc_8238D864;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
	// b 0x8238d888
	goto loc_8238D888;
loc_8238D97C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8238d75c
	if (!ctx.cr6.eq) goto loc_8238D75C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238d76c
	if (!ctx.cr6.eq) goto loc_8238D76C;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// blt cr6,0x8238d9c4
	if (ctx.cr6.lt) goto loc_8238D9C4;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgt cr6,0x8238d9c4
	if (ctx.cr6.gt) goto loc_8238D9C4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
	// addi r11,r10,-47
	ctx.r11.s64 = ctx.r10.s64 + -47;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8238d770
	goto loc_8238D770;
loc_8238D9C4:
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x8238da08
	if (!ctx.cr6.eq) goto loc_8238DA08;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
loc_8238DA00:
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// b 0x8238d76c
	goto loc_8238D76C;
loc_8238DA08:
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x8238da20
	if (ctx.cr6.eq) goto loc_8238DA20;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8238da20
	if (ctx.cr6.eq) goto loc_8238DA20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// b 0x8238da00
	goto loc_8238DA00;
loc_8238DA20:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x8238da48
	if (ctx.cr6.eq) goto loc_8238DA48;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x8238d76c
	if (!ctx.cr6.eq) goto loc_8238D76C;
loc_8238DA48:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,24(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x823886e0
	ctx.lr = 0x8238DA58;
	sub_823886E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238d76c
	if (ctx.cr0.eq) goto loc_8238D76C;
	// b 0x8238d75c
	goto loc_8238D75C;
loc_8238DA64:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r7,28(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mullw r29,r11,r9
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// beq cr6,0x8238dafc
	if (ctx.cr6.eq) goto loc_8238DAFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238d76c
	if (ctx.cr6.gt) goto loc_8238D76C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
loc_8238DA98:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238acc0
	ctx.lr = 0x8238DAAC;
	sub_8238ACC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238d76c
	if (ctx.cr0.lt) goto loc_8238D76C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238acc0
	ctx.lr = 0x8238DAC8;
	sub_8238ACC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238d76c
	if (ctx.cr0.lt) goto loc_8238D76C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238d730
	ctx.lr = 0x8238DAE4;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238d76c
	if (ctx.cr0.eq) goto loc_8238D76C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8238da98
	if (ctx.cr6.lt) goto loc_8238DA98;
	// b 0x8238d75c
	goto loc_8238D75C;
loc_8238DAFC:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8238d76c
	if (!ctx.cr6.eq) goto loc_8238D76C;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8238d76c
	if (!ctx.cr6.eq) goto loc_8238D76C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238d75c
	if (ctx.cr6.eq) goto loc_8238D75C;
loc_8238DB1C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238acc0
	ctx.lr = 0x8238DB30;
	sub_8238ACC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238d76c
	if (ctx.cr0.lt) goto loc_8238D76C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238acc0
	ctx.lr = 0x8238DB4C;
	sub_8238ACC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238d76c
	if (ctx.cr0.lt) goto loc_8238D76C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823886e0
	ctx.lr = 0x8238DB64;
	sub_823886E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238d76c
	if (ctx.cr0.eq) goto loc_8238D76C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8238db1c
	if (ctx.cr6.lt) goto loc_8238DB1C;
	// b 0x8238d75c
	goto loc_8238D75C;
}

DEFINE_REX_FUNC(sub_823A8E50) {
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
	// b 0x823a8e7c
	goto loc_823A8E7C;
loc_823A8E68:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821f4b88
	ctx.lr = 0x823A8E7C;
	sub_821F4B88(ctx, base);
loc_823A8E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a8e68
	if (!ctx.cr6.eq) goto loc_823A8E68;
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

DEFINE_REX_FUNC(sub_823A9C88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823A9CF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823A9D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x823bd168
	ctx.lr = 0x823A9D14;
	sub_823BD168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823a9d48
	if (ctx.cr0.lt) goto loc_823A9D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x823a9d44
	if (!ctx.cr6.eq) goto loc_823A9D44;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_823A9D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AA0C0) {
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
	// lwz r7,260(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823aa128
	if (!ctx.cr6.eq) goto loc_823AA128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,576(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aa29c
	if (ctx.cr0.lt) goto loc_823AA29C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8e18
	ctx.lr = 0x823AA124;
	sub_823C8E18(ctx, base);
	// b 0x823aa29c
	goto loc_823AA29C;
loc_823AA128:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823aa1f8
	if (!ctx.cr0.eq) goto loc_823AA1F8;
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823aa1e8
	if (ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
loc_823AA14C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823aa1d8
	if (ctx.cr0.eq) goto loc_823AA1D8;
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823aa1e8
	if (!ctx.cr6.eq) goto loc_823AA1E8;
loc_823AA1D8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823aa14c
	if (ctx.cr6.lt) goto loc_823AA14C;
loc_823AA1E8:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823aa1f8
	if (!ctx.cr6.eq) goto loc_823AA1F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aa29c
	goto loc_823AA29C;
loc_823AA1F8:
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823aa268
	if (!ctx.cr6.gt) goto loc_823AA268;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AA20C:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r5,r7,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823aa250
	if (!ctx.cr0.eq) goto loc_823AA250;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_823AA250:
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823aa20c
	if (ctx.cr6.lt) goto loc_823AA20C;
loc_823AA268:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r10,12
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r11,572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA28C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aa29c
	if (ctx.cr0.lt) goto loc_823AA29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9418
	ctx.lr = 0x823AA29C;
	sub_823C9418(ctx, base);
loc_823AA29C:
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

DEFINE_REX_FUNC(sub_823AF568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,480
	ctx.r4.s64 = ctx.r10.s64 + 480;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AF58C;
	sub_823AA558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B18F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x823B18F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823B193C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B196C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r26,4336
	ctx.r26.s64 = 284164096;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823b1ab4
	if (ctx.cr6.eq) goto loc_823B1AB4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823B19C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B19F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823B1A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B1A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0a20
	ctx.lr = 0x823B1AAC;
	sub_823B0A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
loc_823B1AB4:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823b1ae0
	if (ctx.cr6.eq) goto loc_823B1AE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa8d0
	ctx.lr = 0x823B1ACC;
	sub_823AA8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823b1af0
	if (!ctx.cr6.eq) goto loc_823B1AF0;
loc_823B1AE0:
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b1af4
	if (!ctx.cr6.gt) goto loc_823B1AF4;
loc_823B1AF0:
	// li r27,1
	ctx.r27.s64 = 1;
loc_823B1AF4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823b1bd0
	if (!ctx.cr6.eq) goto loc_823B1BD0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b1c3c
	if (!ctx.cr6.gt) goto loc_823B1C3C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,-6944
	ctx.r29.s64 = ctx.r11.s64 + -6944;
	// addi r28,r10,-1992
	ctx.r28.s64 = ctx.r10.s64 + -1992;
loc_823B1B28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B1B30;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823b1b58
	if (ctx.cr6.eq) goto loc_823B1B58;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821fcd80
	ctx.lr = 0x823B1B54;
	sub_821FCD80(ctx, base);
	// b 0x823b1b88
	goto loc_823B1B88;
loc_823B1B58:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa7d8
	ctx.lr = 0x823B1B70;
	sub_823AA7D8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821fcd80
	ctx.lr = 0x823B1B88;
	sub_821FCD80(ctx, base);
loc_823B1B88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B1B98;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b1b28
	if (ctx.cr6.lt) goto loc_823B1B28;
	// b 0x823b1c3c
	goto loc_823B1C3C;
loc_823B1BD0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823b1bf0
	if (ctx.cr6.eq) goto loc_823B1BF0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-1992
	ctx.r5.s64 = ctx.r11.s64 + -1992;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8236c550
	ctx.lr = 0x823B1BEC;
	sub_8236C550(ctx, base);
	// b 0x823b1c08
	goto loc_823B1C08;
loc_823B1BF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa7d8
	ctx.lr = 0x823B1C08;
	sub_823AA7D8(ctx, base);
loc_823B1C08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1C34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
loc_823B1C3C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823b1cb0
	if (ctx.cr6.eq) goto loc_823B1CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa978
	ctx.lr = 0x823B1C4C;
	sub_823AA978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa7d8
	ctx.lr = 0x823B1C6C;
	sub_823AA7D8(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x823aacb8
	ctx.lr = 0x823B1C8C;
	sub_823AACB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aadf0
	ctx.lr = 0x823B1CA8;
	sub_823AADF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
loc_823B1CB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6536
	ctx.r4.s64 = ctx.r11.s64 + 6536;
	// bl 0x823aa558
	ctx.lr = 0x823B1CC0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b1cd0
	if (ctx.cr0.lt) goto loc_823B1CD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7ab0
	ctx.lr = 0x823B1CD0;
	sub_823C7AB0(ctx, base);
loc_823B1CD0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823C1AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x823C1B00;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823c1b48
	if (ctx.cr6.eq) goto loc_823C1B48;
loc_823C1B1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823c1b48
	if (ctx.cr6.eq) goto loc_823C1B48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823c1cb4
	if (ctx.cr6.eq) goto loc_823C1CB4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823c1b50
	if (!ctx.cr6.eq) goto loc_823C1B50;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// b 0x823c1b1c
	goto loc_823C1B1C;
loc_823C1B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823c1e08
	goto loc_823C1E08;
loc_823C1B50:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823c1b64
	if (ctx.cr6.eq) goto loc_823C1B64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823c1e08
	goto loc_823C1E08;
loc_823C1B64:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// blt cr6,0x823c1bc0
	if (ctx.cr6.lt) goto loc_823C1BC0;
	// beq cr6,0x823c1bb8
	if (ctx.cr6.eq) goto loc_823C1BB8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823c1ba0
	if (ctx.cr6.lt) goto loc_823C1BA0;
	// bne cr6,0x823c1bc4
	if (!ctx.cr6.eq) goto loc_823C1BC4;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x823c1bc4
	goto loc_823C1BC4;
loc_823C1BA0:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x823c1bc4
	goto loc_823C1BC4;
loc_823C1BB8:
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// b 0x823c1bc4
	goto loc_823C1BC4;
loc_823C1BC0:
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_823C1BC4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bgt cr6,0x823c1c98
	if (ctx.cr6.gt) goto loc_823C1C98;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,10064
	ctx.r12.s64 = ctx.r12.s64 + 10064;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32196
	ctx.r12.s64 = -2109997056;
	// nop 
	// addi r12,r12,7160
	ctx.r12.s64 = ctx.r12.s64 + 7160;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823C1BF8;
	case 1:
		goto loc_823C1C98;
	case 2:
		goto loc_823C1C00;
	case 3:
		goto loc_823C1C00;
	case 4:
		goto loc_823C1C00;
	case 5:
		goto loc_823C1C00;
	case 6:
		goto loc_823C1C00;
	case 7:
		goto loc_823C1C00;
	case 8:
		goto loc_823C1C00;
	case 9:
		goto loc_823C1C00;
	case 10:
		goto loc_823C1C08;
	case 11:
		goto loc_823C1C08;
	case 12:
		goto loc_823C1C08;
	case 13:
		goto loc_823C1C08;
	case 14:
		goto loc_823C1C98;
	case 15:
		goto loc_823C1C98;
	case 16:
		goto loc_823C1C98;
	case 17:
		goto loc_823C1C98;
	case 18:
		goto loc_823C1C98;
	case 19:
		goto loc_823C1C98;
	case 20:
		goto loc_823C1C98;
	case 21:
		goto loc_823C1C98;
	case 22:
		goto loc_823C1C00;
	case 23:
		goto loc_823C1C10;
	case 24:
		goto loc_823C1C18;
	case 25:
		goto loc_823C1C20;
	case 26:
		goto loc_823C1C98;
	case 27:
		goto loc_823C1C28;
	case 28:
		goto loc_823C1C98;
	case 29:
		goto loc_823C1C30;
	case 30:
		goto loc_823C1C38;
	case 31:
		goto loc_823C1C98;
	case 32:
		goto loc_823C1C98;
	case 33:
		goto loc_823C1C40;
	case 34:
		goto loc_823C1C6C;
	case 35:
		goto loc_823C1C48;
	case 36:
		goto loc_823C1C58;
	case 37:
		goto loc_823C1C74;
	case 38:
		goto loc_823C1C98;
	case 39:
		goto loc_823C1C98;
	case 40:
		goto loc_823C1C98;
	case 41:
		goto loc_823C1C98;
	case 42:
		goto loc_823C1C7C;
	case 43:
		goto loc_823C1C84;
	case 44:
		goto loc_823C1C98;
	case 45:
		goto loc_823C1C8C;
	case 46:
		goto loc_823C1C94;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823C1BF8:
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// b 0x823c1c9c
	goto loc_823C1C9C;
loc_823C1C00:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C08:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C10:
	// sth r8,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// b 0x823c1c9c
	goto loc_823C1C9C;
loc_823C1C18:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C20:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C28:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C30:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C38:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C40:
	// rlwinm. r11,r25,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823c1c50
	if (ctx.cr0.eq) goto loc_823C1C50;
loc_823C1C48:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C50:
	// rlwinm. r11,r25,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823c1c60
	if (ctx.cr0.eq) goto loc_823C1C60;
loc_823C1C58:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C60:
	// rlwinm r11,r25,10,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 10) & 0x2;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C6C:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C74:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C7C:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C84:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C8C:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x823c1c98
	goto loc_823C1C98;
loc_823C1C94:
	// li r11,18
	ctx.r11.s64 = 18;
loc_823C1C98:
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_823C1C9C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// sth r5,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// b 0x823c1de4
	goto loc_823C1DE4;
loc_823C1CB4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// bl 0x823bd0b0
	ctx.lr = 0x823C1CE0;
	sub_823BD0B0(ctx, base);
	// lhz r10,90(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// sth r5,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
loc_823C1CF0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c1cf0
	if (!ctx.cr6.eq) goto loc_823C1CF0;
	// rlwinm r3,r10,3,13,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x821f4a68
	ctx.lr = 0x823C1D18;
	sub_821F4A68(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x823c1d2c
	if (!ctx.cr0.eq) goto loc_823C1D2C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823c1e08
	goto loc_823C1E08;
loc_823C1D2C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_823C1D30:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x8240c648
	ctx.lr = 0x823C1D58;
	sub_8240C648(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x823c1dcc
	if (ctx.cr0.lt) goto loc_823C1DCC;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c1af8
	ctx.lr = 0x823C1D78;
	sub_823C1AF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x823c1dcc
	if (ctx.cr0.lt) goto loc_823C1DCC;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823c1d30
	if (!ctx.cr6.eq) goto loc_823C1D30;
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240c648
	ctx.lr = 0x823C1DB0;
	sub_8240C648(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge 0x823c1de0
	if (!ctx.cr0.lt) goto loc_823C1DE0;
	// bl 0x821f4b88
	ctx.lr = 0x823C1DC4;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823c1e08
	goto loc_823C1E08;
loc_823C1DCC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f4b88
	ctx.lr = 0x823C1DD8;
	sub_821F4B88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x823c1e08
	goto loc_823C1E08;
loc_823C1DE0:
	// bl 0x821f4b88
	ctx.lr = 0x823C1DE4;
	sub_821F4B88(ctx, base);
loc_823C1DE4:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240c648
	ctx.lr = 0x823C1E00;
	sub_8240C648(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823C1E08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CD2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823CD2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823cd2e8
	if (!ctx.cr6.eq) goto loc_823CD2E8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823cd3d4
	goto loc_823CD3D4;
loc_823CD2E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823cd310
	if (!ctx.cr6.gt) goto loc_823CD310;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bgt cr6,0x823cd34c
	if (ctx.cr6.gt) goto loc_823CD34C;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823CD310:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82203350
	ctx.lr = 0x823CD328;
	sub_82203350(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,12(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823cd398
	if (!ctx.cr6.gt) goto loc_823CD398;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x823cd378
	if (ctx.cr6.gt) goto loc_823CD378;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x823cd398
	goto loc_823CD398;
loc_823CD34C:
	// bl 0x823a8f68
	ctx.lr = 0x823CD350;
	sub_823A8F68(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823a8ea0
	ctx.lr = 0x823CD360;
	sub_823A8EA0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823cd310
	if (!ctx.cr0.eq) goto loc_823CD310;
loc_823CD36C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823cd3d4
	goto loc_823CD3D4;
loc_823CD378:
	// bl 0x823a8f68
	ctx.lr = 0x823CD37C;
	sub_823A8F68(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x823a8ea0
	ctx.lr = 0x823CD38C;
	sub_823A8EA0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823cd36c
	if (ctx.cr0.eq) goto loc_823CD36C;
loc_823CD398:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82203350
	ctx.lr = 0x823CD3B0;
	sub_82203350(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_823CD3D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D1E08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823D1E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D1E20:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r31,r10,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x823d1eb4
	if (ctx.cr6.eq) goto loc_823D1EB4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d1eb4
	if (ctx.cr0.eq) goto loc_823D1EB4;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d1e74
	if (ctx.cr6.eq) goto loc_823D1E74;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_823D1E74:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d1ea8
	if (ctx.cr6.eq) goto loc_823D1EA8;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
loc_823D1EA8:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_823D1EB4:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823d1ed0
	if (ctx.cr6.eq) goto loc_823D1ED0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1e08
	ctx.lr = 0x823D1ED0;
	sub_823D1E08(ctx, base);
loc_823D1ED0:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823d1ee4
	if (ctx.cr6.eq) goto loc_823D1EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823d1e20
	goto loc_823D1E20;
loc_823D1EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D9E38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204238
	ctx.lr = 0x823D9E40;
	__savegprlr_16(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r17,1
	ctx.r17.s64 = 1;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d9ed4
	if (!ctx.cr6.gt) goto loc_823D9ED4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823D9E68:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823d9ea4
	if (ctx.cr0.eq) goto loc_823D9EA4;
	// stw r17,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r17.u32);
	// b 0x823d9ebc
	goto loc_823D9EBC;
loc_823D9EA4:
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,4136
	ctx.r12.u64 = ctx.r12.u64 | 4136;
	// and. r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823d9ec0
	if (!ctx.cr0.eq) goto loc_823D9EC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_823D9EBC:
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
loc_823D9EC0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d9e68
	if (ctx.cr6.lt) goto loc_823D9E68;
loc_823D9ED4:
	// lwz r25,12(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lis r22,8304
	ctx.r22.s64 = 544210944;
	// lis r19,8320
	ctx.r19.s64 = 545259520;
	// lis r20,4432
	ctx.r20.s64 = 290455552;
	// lis r21,4384
	ctx.r21.s64 = 287309824;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823da2d8
	if (ctx.cr6.eq) goto loc_823DA2D8;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D9EF4:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwzx r31,r11,r24
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823da2d0
	if (ctx.cr0.eq) goto loc_823DA2D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823d9f60
	if (!ctx.cr6.gt) goto loc_823D9F60;
	// li r29,4
	ctx.r29.s64 = 4;
loc_823D9F24:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823D9F4C;
	sub_823D2CD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d9f24
	if (ctx.cr6.lt) goto loc_823D9F24;
loc_823D9F60:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823d9fd4
	if (!ctx.cr6.gt) goto loc_823D9FD4;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823D9F70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,20(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d9f70
	if (ctx.cr6.lt) goto loc_823D9F70;
loc_823D9FD4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823da23c
	if (ctx.cr6.eq) goto loc_823DA23C;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x823da23c
	if (ctx.cr6.eq) goto loc_823DA23C;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x823da23c
	if (ctx.cr6.eq) goto loc_823DA23C;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x823da0ac
	if (!ctx.cr6.eq) goto loc_823DA0AC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu r27,r9,r10
	ctx.r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da2d0
	if (ctx.cr6.eq) goto loc_823DA2D0;
loc_823DA018:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823da098
	if (ctx.cr6.eq) goto loc_823DA098;
loc_823DA024:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da08c
	if (ctx.cr6.eq) goto loc_823DA08C;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_823DA048:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823DA078;
	sub_823D2CD0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da048
	if (!ctx.cr6.eq) goto loc_823DA048;
loc_823DA08C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823da024
	if (ctx.cr6.lt) goto loc_823DA024;
loc_823DA098:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823da018
	if (ctx.cr6.lt) goto loc_823DA018;
	// b 0x823da2d0
	goto loc_823DA2D0;
loc_823DA0AC:
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823da16c
	if (ctx.cr6.lt) goto loc_823DA16C;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823da16c
	if (ctx.cr6.gt) goto loc_823DA16C;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu r27,r9,r10
	ctx.r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da2d0
	if (ctx.cr6.eq) goto loc_823DA2D0;
loc_823DA0E4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823da158
	if (ctx.cr6.eq) goto loc_823DA158;
loc_823DA0F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da14c
	if (ctx.cr6.eq) goto loc_823DA14C;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_823DA114:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823DA138;
	sub_823D2CD0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da114
	if (!ctx.cr6.eq) goto loc_823DA114;
loc_823DA14C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823da0f0
	if (ctx.cr6.lt) goto loc_823DA0F0;
loc_823DA158:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823da0e4
	if (ctx.cr6.lt) goto loc_823DA0E4;
	// b 0x823da2d0
	goto loc_823DA2D0;
loc_823DA16C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x823da1e4
	if (ctx.cr6.eq) goto loc_823DA1E4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823da2d0
	if (!ctx.cr6.gt) goto loc_823DA2D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823DA188:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x823da1c4
	goto loc_823DA1C4;
loc_823DA194:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823DA1B8;
	sub_823D2CD0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823DA1C4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da194
	if (!ctx.cr6.eq) goto loc_823DA194;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823da188
	if (ctx.cr6.lt) goto loc_823DA188;
	// b 0x823da2d0
	goto loc_823DA2D0;
loc_823DA1E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823da2d0
	if (!ctx.cr6.gt) goto loc_823DA2D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823DA1F4:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r23,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r23.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r17,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r17.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823da1f4
	if (ctx.cr6.lt) goto loc_823DA1F4;
	// b 0x823da2d0
	goto loc_823DA2D0;
loc_823DA23C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da2d0
	if (ctx.cr6.eq) goto loc_823DA2D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823DA24C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823DA284;
	sub_823D2CD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823d2cd0
	ctx.lr = 0x823DA2BC;
	sub_823D2CD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823da24c
	if (ctx.cr6.lt) goto loc_823DA24C;
loc_823DA2D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x823d9ef4
	if (!ctx.cr6.eq) goto loc_823D9EF4;
loc_823DA2D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82112fa8
	ctx.lr = 0x823DA2E0;
	sub_82112FA8(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823da554
	if (!ctx.cr6.gt) goto loc_823DA554;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823DA2F4:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823da540
	if (ctx.cr0.eq) goto loc_823DA540;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// lis r10,4368
	ctx.r10.s64 = 286261248;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823da540
	if (!ctx.cr0.eq) goto loc_823DA540;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da3d0
	if (ctx.cr6.eq) goto loc_823DA3D0;
loc_823DA3AC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da3ac
	if (!ctx.cr6.eq) goto loc_823DA3AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823da3d0
	if (ctx.cr6.eq) goto loc_823DA3D0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_823DA3D0:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x823da418
	goto loc_823DA418;
loc_823DA3D8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da414
	if (ctx.cr6.eq) goto loc_823DA414;
loc_823DA3F0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da3f0
	if (!ctx.cr6.eq) goto loc_823DA3F0;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823da414
	if (!ctx.cr6.lt) goto loc_823DA414;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_823DA414:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_823DA418:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da3d8
	if (!ctx.cr6.eq) goto loc_823DA3D8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da48c
	if (ctx.cr6.eq) goto loc_823DA48C;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DA434:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x823da47c
	goto loc_823DA47C;
loc_823DA43C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da478
	if (ctx.cr6.eq) goto loc_823DA478;
loc_823DA454:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da454
	if (!ctx.cr6.eq) goto loc_823DA454;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823da478
	if (!ctx.cr6.lt) goto loc_823DA478;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_823DA478:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_823DA47C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823da43c
	if (!ctx.cr6.eq) goto loc_823DA43C;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823da434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA434;
loc_823DA48C:
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823da540
	if (!ctx.cr6.gt) goto loc_823DA540;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DA4A0:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823da530
	if (ctx.cr0.eq) goto loc_823DA530;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823da530
	if (!ctx.cr6.gt) goto loc_823DA530;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823DA4DC:
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,24(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r6.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823da4dc
	if (ctx.cr6.lt) goto loc_823DA4DC;
loc_823DA530:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bdnz 0x823da4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA4A0;
loc_823DA540:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823da2f4
	if (ctx.cr6.lt) goto loc_823DA2F4;
loc_823DA554:
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823da5ac
	if (ctx.cr6.eq) goto loc_823DA5AC;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823DA56C:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823da590
	if (!ctx.cr6.eq) goto loc_823DA590;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823da594
	if (ctx.cr6.eq) goto loc_823DA594;
loc_823DA590:
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
loc_823DA594:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823da56c
	if (ctx.cr6.lt) goto loc_823DA56C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x823da5c4
	if (!ctx.cr6.eq) goto loc_823DA5C4;
loc_823DA5AC:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823DA5B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82112fa8
	ctx.lr = 0x823DA5B8;
	sub_82112FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
loc_823DA5C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d64f8
	ctx.lr = 0x823DA5CC;
	sub_823D64F8(ctx, base);
loc_823DA5CC:
	// lwz r31,12(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823da704
	if (ctx.cr6.eq) goto loc_823DA704;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_823DA5E0:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823da6f4
	if (ctx.cr0.eq) goto loc_823DA6F4;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823da65c
	if (ctx.cr6.eq) goto loc_823DA65C;
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_823DA61C:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823da64c
	if (ctx.cr6.eq) goto loc_823DA64C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823da64c
	if (!ctx.cr6.lt) goto loc_823DA64C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823DA64C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823da61c
	if (ctx.cr6.lt) goto loc_823DA61C;
loc_823DA65C:
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823da6ac
	if (ctx.cr6.eq) goto loc_823DA6AC;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_823DA678:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823da69c
	if (ctx.cr6.eq) goto loc_823DA69C;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823da69c
	if (!ctx.cr6.lt) goto loc_823DA69C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_823DA69C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823da678
	if (ctx.cr6.lt) goto loc_823DA678;
loc_823DA6AC:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823da6f4
	if (ctx.cr6.eq) goto loc_823DA6F4;
	// bge cr6,0x823da6dc
	if (!ctx.cr6.lt) goto loc_823DA6DC;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DA6C4:
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x823da6c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA6C4;
loc_823DA6DC:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x823d64f8
	ctx.lr = 0x823DA6F0;
	sub_823D64F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DA6F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823da5e0
	if (!ctx.cr6.eq) goto loc_823DA5E0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823da5cc
	if (ctx.cr6.eq) goto loc_823DA5CC;
loc_823DA704:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823da5b0
	goto loc_823DA5B0;
}

DEFINE_REX_FUNC(sub_82409348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82409350;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82408130
	ctx.lr = 0x82409360;
	sub_82408130(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821b9638
	ctx.lr = 0x82409368;
	sub_821B9638(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82409424
	if (ctx.cr0.eq) goto loc_82409424;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82409384:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b9698
	ctx.lr = 0x82409394;
	sub_821B9698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82409440
	if (ctx.cr0.eq) goto loc_82409440;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240940c
	if (!ctx.cr6.eq) goto loc_8240940C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240940c
	if (ctx.cr0.eq) goto loc_8240940C;
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824093e4
	if (!ctx.cr6.eq) goto loc_824093E4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824093ec
	if (ctx.cr6.lt) goto loc_824093EC;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x8240940c
	if (!ctx.cr6.eq) goto loc_8240940C;
	// lwz r11,296(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 296);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,296(r28)
	REX_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
	// b 0x8240940c
	goto loc_8240940C;
loc_824093E4:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x8240940c
	if (ctx.cr6.gt) goto loc_8240940C;
loc_824093EC:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240940c
	if (!ctx.cr0.eq) goto loc_8240940C;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 | ctx.r31.u64;
	// bge cr6,0x8240940c
	if (!ctx.cr6.lt) goto loc_8240940C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8240940C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82409384
	if (ctx.cr6.lt) goto loc_82409384;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x82409428
	if (!ctx.cr6.eq) goto loc_82409428;
loc_82409424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82409428:
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82409454
	if (!ctx.cr6.eq) goto loc_82409454;
	// lwz r10,296(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 296);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82409478
	goto loc_82409478;
loc_82409440:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-21708
	ctx.r4.s64 = ctx.r11.s64 + -21708;
	// bl 0x82403790
	ctx.lr = 0x82409450;
	sub_82403790(ctx, base);
	// b 0x8240947c
	goto loc_8240947C;
loc_82409454:
	// lwz r10,104(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82409464
	if (!ctx.cr0.eq) goto loc_82409464;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82409464:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82409470
	if (ctx.cr6.eq) goto loc_82409470;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82409470:
	// lwz r10,296(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 296);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82409478:
	// stw r10,296(r28)
	REX_STORE_U32(ctx.r28.u32 + 296, ctx.r10.u32);
loc_8240947C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240DA50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240dac8
	if (!ctx.cr0.eq) goto loc_8240DAC8;
	// lwz r11,92(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240dac8
	if (ctx.cr6.eq) goto loc_8240DAC8;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240dab4
	if (ctx.cr6.eq) goto loc_8240DAB4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_8240DAB4:
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8240DAC8:
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8240d9b0
	sub_8240D9B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240F378) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r6,r9,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x8240f450
	if (ctx.cr6.gt) goto loc_8240F450;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_8240F3A0:
	// bge cr6,0x8240f3f4
	if (!ctx.cr6.lt) goto loc_8240F3F4;
	// addi r10,r11,726
	ctx.r10.s64 = ctx.r11.s64 + 726;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8240f3f0
	if (ctx.cr6.lt) goto loc_8240F3F0;
	// bne cr6,0x8240f3f4
	if (!ctx.cr6.eq) goto loc_8240F3F4;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r10,5200(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 5200);
	// lbz r9,5200(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8240f3f4
	if (ctx.cr6.gt) goto loc_8240F3F4;
loc_8240F3F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8240F3F4:
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// lhzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8240f450
	if (ctx.cr6.lt) goto loc_8240F450;
	// bne cr6,0x8240f430
	if (!ctx.cr6.eq) goto loc_8240F430;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r9,5200(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5200);
	// lbz r8,5200(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5200);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8240f450
	if (!ctx.cr6.gt) goto loc_8240F450;
loc_8240F430:
	// addi r9,r5,725
	ctx.r9.s64 = ctx.r5.s64 + 725;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8240f3a0
	if (!ctx.cr6.gt) goto loc_8240F3A0;
loc_8240F450:
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_27) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_72) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_104) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413610) {
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
	// bl 0x8258c4f0
	ctx.lr = 0x82413620;
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82413630
	if (ctx.cr0.lt) goto loc_82413630;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82413638
	goto loc_82413638;
loc_82413630:
	// bl 0x821f5ae0
	ctx.lr = 0x82413634;
	sub_821F5AE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82413638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413C74) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x824140a8
	if (ctx.cr6.lt) goto loc_824140A8;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_82413CFC:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82413d0c
	if (ctx.cr6.lt) goto loc_82413D0C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82413D0C:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v64,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82413cfc
	if (!ctx.cr6.lt) goto loc_82413CFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824140a8
	if (!ctx.cr6.eq) goto loc_824140A8;
	// b 0x82414124
	goto loc_82414124;
loc_824140A8:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x824140a8
	if (ctx.cr6.gt) goto loc_824140A8;
loc_82414124:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	ea = (ctx.r1.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	ea = (ctx.r1.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8245C220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_8245C230:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// ble cr6,0x8245c248
	if (!ctx.cr6.gt) goto loc_8245C248;
	// bl 0x8245be30
	ctx.lr = 0x8245C244;
	sub_8245BE30(ctx, base);
	// b 0x8245c24c
	goto loc_8245C24C;
loc_8245C248:
	// bl 0x8245bea8
	ctx.lr = 0x8245C24C;
	sub_8245BEA8(ctx, base);
loc_8245C24C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245c29c
	if (ctx.cr6.eq) goto loc_8245C29C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8245c2a8
	if (ctx.cr6.eq) goto loc_8245C2A8;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8245c2b4
	if (!ctx.cr6.lt) goto loc_8245C2B4;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x8245c230
	if (!ctx.cr6.gt) goto loc_8245C230;
loc_8245C29C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8245C2A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_8245C2A8:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// b 0x8245c2a0
	goto loc_8245C2A0;
loc_8245C2B4:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8245c2a0
	goto loc_8245C2A0;
}

DEFINE_REX_FUNC(sub_8245FE30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8245fe90
	if (ctx.cr0.eq) goto loc_8245FE90;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_8245FE44:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8245fe68
	if (ctx.cr6.eq) goto loc_8245FE68;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8245fe6c
	if (!ctx.cr6.eq) goto loc_8245FE6C;
loc_8245FE68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8245FE6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245fe80
	if (ctx.cr0.eq) goto loc_8245FE80;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245fe98
	if (!ctx.cr0.eq) goto loc_8245FE98;
loc_8245FE80:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8245fe44
	if (ctx.cr6.lt) goto loc_8245FE44;
loc_8245FE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8245FE98:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82461E28) {
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
	// bl 0x82441c38
	ctx.lr = 0x82461E40;
	sub_82441C38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82461e7c
	if (!ctx.cr0.eq) goto loc_82461E7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x82461e64
	if (ctx.cr6.lt) goto loc_82461E64;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82461e68
	if (!ctx.cr6.gt) goto loc_82461E68;
loc_82461E64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82461E68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82461e7c
	if (!ctx.cr0.eq) goto loc_82461E7C;
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82461e80
	if (!ctx.cr6.eq) goto loc_82461E80;
loc_82461E7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82461E80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_824646D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204234
	ctx.lr = 0x824646E0;
	__savegprlr_15(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82464734
	if (!ctx.cr0.eq) goto loc_82464734;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82464734
	if (ctx.cr0.eq) goto loc_82464734;
loc_82464704:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// ori r7,r7,8191
	ctx.r7.u64 = ctx.r7.u64 | 8191;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82464734
	if (!ctx.cr0.eq) goto loc_82464734;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82464704
	if (!ctx.cr6.eq) goto loc_82464704;
loc_82464734:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r16,r10,29224
	ctx.r16.s64 = ctx.r10.s64 + 29224;
	// bne 0x82464794
	if (!ctx.cr0.eq) goto loc_82464794;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82464794
	if (ctx.cr0.eq) goto loc_82464794;
loc_82464750:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82464764
	goto loc_82464764;
loc_8246475C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82464764:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8246475c
	if (!ctx.cr6.eq) goto loc_8246475C;
	// stw r16,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,19,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC001FFF;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82464794
	if (!ctx.cr0.eq) goto loc_82464794;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82464750
	if (!ctx.cr6.eq) goto loc_82464750;
loc_82464794:
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82203a90
	ctx.lr = 0x824647A8;
	sub_82203A90(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// bl 0x824629e0
	ctx.lr = 0x824647D0;
	sub_824629E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82464848
	if (ctx.cr0.eq) goto loc_82464848;
loc_824647D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x824647fc
	goto loc_824647FC;
loc_824647EC:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8246486c
	if (ctx.cr6.eq) goto loc_8246486C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824647FC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824647ec
	if (!ctx.cr6.eq) goto loc_824647EC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464810:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246483c
	if (!ctx.cr0.eq) goto loc_8246483C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82460068
	ctx.lr = 0x82464828;
	sub_82460068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246483c
	if (ctx.cr0.eq) goto loc_8246483C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824625e8
	ctx.lr = 0x8246483C;
	sub_824625E8(ctx, base);
loc_8246483C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824647d8
	if (!ctx.cr6.eq) goto loc_824647D8;
loc_82464848:
	// addi r30,r15,92
	ctx.r30.s64 = ctx.r15.s64 + 92;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82464850:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824648c4
	if (ctx.cr6.eq) goto loc_824648C4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82464884
	goto loc_82464884;
loc_8246486C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82464810
	goto loc_82464810;
loc_82464874:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824648f0
	if (ctx.cr6.eq) goto loc_824648F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82464884:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82464874
	if (!ctx.cr6.eq) goto loc_82464874;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464898:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824648c4
	if (!ctx.cr0.eq) goto loc_824648C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82460068
	ctx.lr = 0x824648B0;
	sub_82460068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824648c4
	if (ctx.cr0.eq) goto loc_824648C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824625e8
	ctx.lr = 0x824648C4;
	sub_824625E8(ctx, base);
loc_824648C4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82464850
	if (!ctx.cr0.eq) goto loc_82464850;
	// lwz r11,36(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 36);
	// addi r30,r15,32
	ctx.r30.s64 = ctx.r15.s64 + 32;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// bne 0x82464970
	if (!ctx.cr0.eq) goto loc_82464970;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82464964
	goto loc_82464964;
loc_824648F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82464898
	goto loc_82464898;
loc_824648F8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824632d8
	ctx.lr = 0x82464908;
	sub_824632D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464928
	if (ctx.cr6.lt) goto loc_82464928;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8246492c
	if (!ctx.cr6.gt) goto loc_8246492C;
loc_82464928:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8246492C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464938
	if (ctx.cr0.eq) goto loc_82464938;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82464938:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8245ff60
	ctx.lr = 0x82464944;
	sub_8245FF60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463fe0
	ctx.lr = 0x82464954;
	sub_82463FE0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82464970
	if (!ctx.cr0.eq) goto loc_82464970;
loc_82464964:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824648f8
	if (!ctx.cr0.eq) goto loc_824648F8;
loc_82464970:
	// addi r19,r15,24
	ctx.r19.s64 = ctx.r15.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r23,r19,4
	ctx.r23.s64 = ctx.r19.s64 + 4;
	// addi r11,r19,-36
	ctx.r11.s64 = ctx.r19.s64 + -36;
	// ori r20,r23,1
	ctx.r20.u64 = ctx.r23.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r20,24(r15)
	REX_STORE_U32(ctx.r15.u32 + 24, ctx.r20.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,28(r15)
	REX_STORE_U32(ctx.r15.u32 + 28, ctx.r11.u32);
	// bl 0x82461dc0
	ctx.lr = 0x82464998;
	sub_82461DC0(ctx, base);
	// lwz r11,76(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824652d0
	if (ctx.cr0.eq) goto loc_824652D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8245ffe0
	ctx.lr = 0x824649AC;
	sub_8245FFE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824652d0
	if (ctx.cr0.eq) goto loc_824652D0;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// stw r8,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r8.u32);
	// bl 0x824632d8
	ctx.lr = 0x824649F0;
	sub_824632D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464a10
	if (ctx.cr6.lt) goto loc_82464A10;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464a14
	if (!ctx.cr6.gt) goto loc_82464A14;
loc_82464A10:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464A14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464a20
	if (ctx.cr0.eq) goto loc_82464A20;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82464A20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x824652c4
	goto loc_824652C4;
loc_82464A28:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463b38
	ctx.lr = 0x82464A38;
	sub_82463B38(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82464b20
	if (ctx.cr6.eq) goto loc_82464B20;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464a64
	if (ctx.cr6.lt) goto loc_82464A64;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464a68
	if (!ctx.cr6.gt) goto loc_82464A68;
loc_82464A64:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464A68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464b20
	if (ctx.cr0.eq) goto loc_82464B20;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464a80
	if (ctx.cr0.eq) goto loc_82464A80;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x82464a8c
	goto loc_82464A8C;
loc_82464A80:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824611e8
	ctx.lr = 0x82464A88;
	sub_824611E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82464A8C:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82464b20
	if (ctx.cr6.lt) goto loc_82464B20;
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82464AA4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82464af4
	if (ctx.cr6.eq) goto loc_82464AF4;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82464aec
	if (ctx.cr6.eq) goto loc_82464AEC;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82464aec
	if (!ctx.cr6.eq) goto loc_82464AEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x82464aec
	if (ctx.cr6.eq) goto loc_82464AEC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82464aec
	if (ctx.cr6.lt) goto loc_82464AEC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82464AEC:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82464aa4
	goto loc_82464AA4;
loc_82464AF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82464c90
	if (ctx.cr6.eq) goto loc_82464C90;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82464c7c
	if (!ctx.cr6.gt) goto loc_82464C7C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82464b20
	if (!ctx.cr6.gt) goto loc_82464B20;
	// addi r10,r22,1
	ctx.r10.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82464c7c
	if (!ctx.cr6.gt) goto loc_82464C7C;
loc_82464B20:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464b3c
	if (ctx.cr6.lt) goto loc_82464B3C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464b40
	if (!ctx.cr6.gt) goto loc_82464B40;
loc_82464B3C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464B40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464bbc
	if (ctx.cr0.eq) goto loc_82464BBC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8243f868
	ctx.lr = 0x82464B60;
	sub_8243F868(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463b38
	ctx.lr = 0x82464B70;
	sub_82463B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x824608d0
	ctx.lr = 0x82464B80;
	sub_824608D0(ctx, base);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82464bbc
	if (ctx.cr6.eq) goto loc_82464BBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464ba8
	if (ctx.cr6.lt) goto loc_82464BA8;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464bac
	if (!ctx.cr6.gt) goto loc_82464BAC;
loc_82464BA8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464BAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464bbc
	if (ctx.cr0.eq) goto loc_82464BBC;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_82464BBC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8245ff60
	ctx.lr = 0x82464BC8;
	sub_8245FF60(ctx, base);
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,-36
	ctx.r10.s64 = ctx.r31.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r20,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x824632d8
	ctx.lr = 0x82464C04;
	sub_824632D8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82465270
	if (ctx.cr6.eq) goto loc_82465270;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8245ff60
	ctx.lr = 0x82464C18;
	sub_8245FF60(ctx, base);
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x824632d8
	ctx.lr = 0x82464C58;
	sub_824632D8(ctx, base);
	// b 0x8246529c
	goto loc_8246529C;
loc_82464C5C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82464c74
	if (ctx.cr0.eq) goto loc_82464C74;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82464c7c
	goto loc_82464C7C;
loc_82464C74:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_82464C7C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82464c5c
	if (ctx.cr6.eq) goto loc_82464C5C;
	// b 0x82464cb0
	goto loc_82464CB0;
loc_82464C90:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464ca4
	if (ctx.cr0.eq) goto loc_82464CA4;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82464cb0
	goto loc_82464CB0;
loc_82464CA4:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_82464CB0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460b08
	ctx.lr = 0x82464CC4;
	sub_82460B08(ctx, base);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82464CC8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460bc8
	ctx.lr = 0x82464CD0;
	sub_82460BC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464cdc
	if (ctx.cr0.eq) goto loc_82464CDC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82464CDC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82464cf4
	if (!ctx.cr6.lt) goto loc_82464CF4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460dc0
	ctx.lr = 0x82464CEC;
	sub_82460DC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464cc8
	if (!ctx.cr0.eq) goto loc_82464CC8;
loc_82464CF4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82464b20
	if (ctx.cr6.gt) goto loc_82464B20;
	// addi r11,r1,44
	ctx.r11.s64 = ctx.r1.s64 + 44;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824640a8
	ctx.lr = 0x82464D28;
	sub_824640A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464b20
	if (!ctx.cr0.eq) goto loc_82464B20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82464b20
	if (ctx.cr0.eq) goto loc_82464B20;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82464D48:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464d64
	if (ctx.cr6.lt) goto loc_82464D64;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464d68
	if (!ctx.cr6.gt) goto loc_82464D68;
loc_82464D64:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464D68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464d94
	if (!ctx.cr0.eq) goto loc_82464D94;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82464d88
	if (ctx.cr0.eq) goto loc_82464D88;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x82464d48
	goto loc_82464D48;
loc_82464D88:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,-40
	ctx.r28.s64 = ctx.r11.s64 + -40;
	// b 0x82464d48
	goto loc_82464D48;
loc_82464D94:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82460b08
	ctx.lr = 0x82464DAC;
	sub_82460B08(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82464DB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460c90
	ctx.lr = 0x82464DBC;
	sub_82460C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464e3c
	if (ctx.cr0.eq) goto loc_82464E3C;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82464dd4
	if (!ctx.cr6.eq) goto loc_82464DD4;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_82464DD4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824608d0
	ctx.lr = 0x82464DE0;
	sub_824608D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8243f868
	ctx.lr = 0x82464DEC;
	sub_8243F868(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8243f868
	ctx.lr = 0x82464DF8;
	sub_8243F868(ctx, base);
loc_82464DF8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82464f14
	if (!ctx.cr0.eq) goto loc_82464F14;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82464f18
	if (ctx.cr0.eq) goto loc_82464F18;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82464e30
	if (ctx.cr6.lt) goto loc_82464E30;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464e34
	if (!ctx.cr6.gt) goto loc_82464E34;
loc_82464E30:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464E34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464df8
	if (ctx.cr0.eq) goto loc_82464DF8;
loc_82464E3C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460dc0
	ctx.lr = 0x82464E44;
	sub_82460DC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464db0
	if (!ctx.cr0.eq) goto loc_82464DB0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82464f18
	if (ctx.cr6.eq) goto loc_82464F18;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82464e70
	if (!ctx.cr0.eq) goto loc_82464E70;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464f54
	if (!ctx.cr0.eq) goto loc_82464F54;
loc_82464E70:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82464e8c
	if (ctx.cr6.lt) goto loc_82464E8C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82464e90
	if (!ctx.cr6.gt) goto loc_82464E90;
loc_82464E8C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82464E90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464f54
	if (ctx.cr0.eq) goto loc_82464F54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8243f5e8
	ctx.lr = 0x82464EA4;
	sub_8243F5E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464f54
	if (ctx.cr0.eq) goto loc_82464F54;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463b38
	ctx.lr = 0x82464EBC;
	sub_82463B38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82464f54
	if (ctx.cr0.eq) goto loc_82464F54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8243f868
	ctx.lr = 0x82464ED0;
	sub_8243F868(ctx, base);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460c90
	ctx.lr = 0x82464EE0;
	sub_82460C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x82464f64
	if (ctx.cr0.eq) goto loc_82464F64;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// bl 0x824625e8
	ctx.lr = 0x82464F00;
	sub_824625E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// bl 0x82461d18
	ctx.lr = 0x82464F10;
	sub_82461D18(ctx, base);
	// b 0x82464bbc
	goto loc_82464BBC;
loc_82464F14:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82464F18:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460dc0
	ctx.lr = 0x82464F20;
	sub_82460DC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82464f18
	if (!ctx.cr0.eq) goto loc_82464F18;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82464f4c
	if (!ctx.cr0.eq) goto loc_82464F4C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82464f4c
	if (ctx.cr0.eq) goto loc_82464F4C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82464F4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82464f7c
	if (ctx.cr6.eq) goto loc_82464F7C;
loc_82464F54:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82461d18
	ctx.lr = 0x82464F60;
	sub_82461D18(ctx, base);
	// b 0x82464b20
	goto loc_82464B20;
loc_82464F64:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x824625e8
	ctx.lr = 0x82464F78;
	sub_824625E8(ctx, base);
	// b 0x82464f54
	goto loc_82464F54;
loc_82464F7C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460b08
	ctx.lr = 0x82464F90;
	sub_82460B08(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// clrlwi r29,r11,19
	ctx.r29.u64 = ctx.r11.u32 & 0x1FFF;
	// beq cr6,0x8246500c
	if (ctx.cr6.eq) goto loc_8246500C;
loc_82464FA4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82464fbc
	if (ctx.cr0.eq) goto loc_82464FBC;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82464fc4
	goto loc_82464FC4;
loc_82464FBC:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_82464FC4:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82460f20
	ctx.lr = 0x82464FF0;
	sub_82460F20(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824632d8
	ctx.lr = 0x82465000;
	sub_824632D8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82464fa4
	if (!ctx.cr6.eq) goto loc_82464FA4;
loc_8246500C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460c90
	ctx.lr = 0x82465018;
	sub_82460C90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82465160
	if (ctx.cr0.eq) goto loc_82465160;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r29,r9,19
	ctx.r29.u64 = ctx.r9.u32 & 0x1FFF;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82465048
	if (ctx.cr0.eq) goto loc_82465048;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82465050
	goto loc_82465050;
loc_82465048:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_82465050:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82460ea0
	ctx.lr = 0x8246507C;
	sub_82460EA0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824632d8
	ctx.lr = 0x8246508C;
	sub_824632D8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82465178
	if (ctx.cr6.eq) goto loc_82465178;
loc_8246509C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824650b8
	if (ctx.cr6.lt) goto loc_824650B8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824650bc
	if (!ctx.cr6.gt) goto loc_824650BC;
loc_824650B8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_824650BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82465158
	if (!ctx.cr0.eq) goto loc_82465158;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824650e0
	if (ctx.cr0.eq) goto loc_824650E0;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x824650e8
	goto loc_824650E8;
loc_824650E0:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_824650E8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r28,r10,-36
	ctx.r28.s64 = ctx.r10.s64 + -36;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x824632d8
	ctx.lr = 0x82465148;
	sub_824632D8(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8246509c
	if (!ctx.cr6.eq) goto loc_8246509C;
loc_82465158:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82465178
	if (ctx.cr6.eq) goto loc_82465178;
loc_82465160:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460dc0
	ctx.lr = 0x82465168;
	sub_82460DC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246500c
	if (!ctx.cr0.eq) goto loc_8246500C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824652e4
	if (!ctx.cr6.eq) goto loc_824652E4;
loc_82465178:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_8246517C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824651bc
	if (ctx.cr6.eq) goto loc_824651BC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824651ac
	if (ctx.cr6.eq) goto loc_824651AC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x824651ac
	if (!ctx.cr6.eq) goto loc_824651AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824651b4
	if (!ctx.cr0.eq) goto loc_824651B4;
loc_824651AC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8246517c
	goto loc_8246517C;
loc_824651B4:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x824651c0
	goto loc_824651C0;
loc_824651BC:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_824651C0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82461850
	ctx.lr = 0x824651D0;
	sub_82461850(ctx, base);
	// li r5,8191
	ctx.r5.s64 = 8191;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824632d8
	ctx.lr = 0x824651E0;
	sub_824632D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463fe0
	ctx.lr = 0x824651F0;
	sub_82463FE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824fb8c0
	ctx.lr = 0x82465204;
	sub_824FB8C0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82465258
	if (!ctx.cr0.eq) goto loc_82465258;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82465258
	if (ctx.cr0.eq) goto loc_82465258;
loc_8246521C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82465238
	if (!ctx.cr6.eq) goto loc_82465238;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82461010
	ctx.lr = 0x82465238;
	sub_82461010(ctx, base);
loc_82465238:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82465258
	if (ctx.cr6.eq) goto loc_82465258;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82465258
	if (!ctx.cr0.eq) goto loc_82465258;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8246521c
	if (!ctx.cr6.eq) goto loc_8246521C;
loc_82465258:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824652d0
	if (ctx.cr6.eq) goto loc_824652D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82461010
	ctx.lr = 0x8246526C;
	sub_82461010(ctx, base);
	// b 0x824652d0
	goto loc_824652D0;
loc_82465270:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8246528c
	if (ctx.cr6.lt) goto loc_8246528C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82465290
	if (!ctx.cr6.gt) goto loc_82465290;
loc_8246528C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82465290:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246529c
	if (ctx.cr0.eq) goto loc_8246529C;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8246529C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 8191, ctx.xer);
	// beq cr6,0x824652f0
	if (ctx.cr6.eq) goto loc_824652F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463fe0
	ctx.lr = 0x824652B8;
	sub_82463FE0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824652d0
	if (ctx.cr6.eq) goto loc_824652D0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_824652C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82463fe0
	ctx.lr = 0x824652D0;
	sub_82463FE0(ctx, base);
loc_824652D0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82464a28
	if (!ctx.cr6.eq) goto loc_82464A28;
	// lwz r31,216(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x8246537c
	goto loc_8246537C;
loc_824652E4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824222f0
	ctx.lr = 0x824652F0;
	sub_824222F0(ctx, base);
loc_824652F0:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824222f0
	ctx.lr = 0x824652FC;
	sub_824222F0(ctx, base);
loc_824652FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// b 0x82465318
	goto loc_82465318;
loc_82465308:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x82465320
	if (ctx.cr6.eq) goto loc_82465320;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82465318:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82465308
	if (!ctx.cr6.eq) goto loc_82465308;
loc_82465320:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8245ff60
	ctx.lr = 0x82465330;
	sub_8245FF60(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// stw r9,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// bl 0x824632d8
	ctx.lr = 0x8246536C;
	sub_824632D8(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 8191, ctx.xer);
	// beq cr6,0x824653a0
	if (ctx.cr6.eq) goto loc_824653A0;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_8246537C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824652fc
	if (!ctx.cr6.eq) goto loc_824652FC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82465538
	if (ctx.cr6.eq) goto loc_82465538;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824653ac
	if (ctx.cr0.eq) goto loc_824653AC;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// b 0x824653b8
	goto loc_824653B8;
loc_824653A0:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824222f0
	ctx.lr = 0x824653AC;
	sub_824222F0(ctx, base);
loc_824653AC:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,-40
	ctx.r6.s64 = ctx.r11.s64 + -40;
loc_824653B8:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460b08
	ctx.lr = 0x824653C8;
	sub_82460B08(ctx, base);
loc_824653C8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460bc8
	ctx.lr = 0x824653D0;
	sub_82460BC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82465528
	if (ctx.cr0.eq) goto loc_82465528;
	// lwz r30,160(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82465528
	if (ctx.cr0.eq) goto loc_82465528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824611e8
	ctx.lr = 0x824653F0;
	sub_824611E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82465528
	if (!ctx.cr6.eq) goto loc_82465528;
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824640a8
	ctx.lr = 0x82465420;
	sub_824640A8(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82465528
	if (!ctx.cr0.eq) goto loc_82465528;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82465528
	if (ctx.cr6.eq) goto loc_82465528;
	// rlwinm r31,r29,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8246544c
	if (!ctx.cr0.eq) goto loc_8246544C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246551c
	if (!ctx.cr6.eq) goto loc_8246551C;
loc_8246544C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x824608d0
	ctx.lr = 0x82465458;
	sub_824608D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8243f5e8
	ctx.lr = 0x82465464;
	sub_8243F5E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8243f868
	ctx.lr = 0x82465474;
	sub_8243F868(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246551c
	if (ctx.cr0.eq) goto loc_8246551C;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// stw r7,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82461850
	ctx.lr = 0x824654E0;
	sub_82461850(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x824632d8
	ctx.lr = 0x824654F4;
	sub_824632D8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82465504
	if (!ctx.cr6.eq) goto loc_82465504;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
loc_82465504:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824fb8c0
	ctx.lr = 0x82465518;
	sub_824FB8C0(ctx, base);
	// b 0x82465528
	goto loc_82465528;
loc_8246551C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82461d18
	ctx.lr = 0x82465528;
	sub_82461D18(ctx, base);
loc_82465528:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82460dc0
	ctx.lr = 0x82465530;
	sub_82460DC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824653c8
	if (!ctx.cr0.eq) goto loc_824653C8;
loc_82465538:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8243fe30
	ctx.lr = 0x8246554C;
	sub_8243FE30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C3208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x824C3210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824C3238;
	sub_824F4E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c2810
	ctx.lr = 0x824C3248;
	sub_824C2810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824C3254;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x824c3278
	if (ctx.cr6.eq) goto loc_824C3278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824C3274;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824C3278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824C3280;
	sub_82448668(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C5460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x824C5468;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r22,4(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r23,8(r4)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bne cr6,0x824c54e8
	if (!ctx.cr6.eq) goto loc_824C54E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824c55e8
	if (ctx.cr6.eq) goto loc_824C55E8;
loc_824C54B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C54B8;
	sub_824BE2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C54C4;
	sub_824BE2B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bne 0x824c54b0
	if (!ctx.cr0.eq) goto loc_824C54B0;
	// b 0x824c55e8
	goto loc_824C55E8;
loc_824C54E8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x824c5520
	if (!ctx.cr6.gt) goto loc_824C5520;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_824C5520:
	// rlwinm r24,r30,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x824354c8
	ctx.lr = 0x824C5534;
	sub_824354C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c5568
	if (ctx.cr6.eq) goto loc_824C5568;
	// addi r26,r3,-8
	ctx.r26.s64 = ctx.r3.s64 + -8;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_824C5548:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C5550;
	sub_824BE2B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stwu r11,8(r26)
	ea = 8 + ctx.r26.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// bne 0x824c5548
	if (!ctx.cr0.eq) goto loc_824C5548;
loc_824C5568:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824be308
	ctx.lr = 0x824C5574;
	sub_824BE308(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824c55a8
	if (ctx.cr6.eq) goto loc_824C55A8;
loc_824C557C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c1e58
	ctx.lr = 0x824C5584;
	sub_824C1E58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c1e58
	ctx.lr = 0x824C5590;
	sub_824C1E58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x824c557c
	if (!ctx.cr0.eq) goto loc_824C557C;
loc_824C55A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r22,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r23,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// beq cr6,0x824c55d4
	if (ctx.cr6.eq) goto loc_824C55D4;
	// addi r29,r25,-8
	ctx.r29.s64 = ctx.r25.s64 + -8;
loc_824C55BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C55C4;
	sub_824BE2B0(ctx, base);
	// ldu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bne 0x824c55bc
	if (!ctx.cr0.eq) goto loc_824C55BC;
loc_824C55D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8243d2e0
	ctx.lr = 0x824C55E8;
	sub_8243D2E0(ctx, base);
loc_824C55E8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r22,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r23,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DAA18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x824DAA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dab5c
	if (ctx.cr6.eq) goto loc_824DAB5C;
	// lwz r3,276(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x824f0010
	ctx.lr = 0x824DAA38;
	sub_824F0010(ctx, base);
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x824dbbe8
	ctx.lr = 0x824DAA44;
	sub_824DBBE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x824dbc60
	ctx.lr = 0x824DAA50;
	sub_824DBC60(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAA64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAA78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAA8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAAA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAAC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAAF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// li r30,6
	ctx.r30.s64 = 6;
loc_824DAAF8:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAB0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824daaf8
	if (!ctx.cr0.eq) goto loc_824DAAF8;
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r29,5
	ctx.r29.s64 = 5;
loc_824DAB1C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824dab3c
	if (ctx.cr6.eq) goto loc_824DAB3C;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAB3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824DAB3C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x824dab1c
	if (!ctx.cr0.eq) goto loc_824DAB1C;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DAB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824DAB5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DEE00) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824dee4c
	if (ctx.cr6.lt) goto loc_824DEE4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-3184
	ctx.r6.s64 = ctx.r11.s64 + -3184;
	// addi r5,r10,-3256
	ctx.r5.s64 = ctx.r10.s64 + -3256;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,338
	ctx.r7.s64 = 338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824DEE4C;
	sub_82428090(ctx, base);
loc_824DEE4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
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

DEFINE_REX_FUNC(sub_824DF868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824DF870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DF898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq cr6,0x824df8c0
	if (ctx.cr6.eq) goto loc_824DF8C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_824DF8C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824df8d4
	if (!ctx.cr6.eq) goto loc_824DF8D4;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x824df8dc
	goto loc_824DF8DC;
loc_824DF8D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_824DF8DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E4CF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// beq 0x824e4d34
	if (ctx.cr0.eq) goto loc_824E4D34;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E4D34:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e4d4c
	if (ctx.cr0.eq) goto loc_824E4D4C;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E4D4C:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e4d70
	if (ctx.cr0.eq) goto loc_824E4D70;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E4D70:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e4d88
	if (ctx.cr0.eq) goto loc_824E4D88;
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E4D88:
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r9,0,29,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r8,0,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r8,0,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r8,r9,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,29,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r8.u64 & 0x8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r9,r8,0,25,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r9.u64 & 0x80);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,21,19
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r8.u64 & 0x800);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r9,0,17,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r8.u64 & 0x8000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E8FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824E8FA8;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,1(r4)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r17,-1
	ctx.r17.s64 = -1;
	// lwz r25,28(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// bl 0x82502cf0
	ctx.lr = 0x824E8FF8;
	sub_82502CF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x824dfdd0
	ctx.lr = 0x824E9008;
	sub_824DFDD0(ctx, base);
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x824dfdd0
	ctx.lr = 0x824E901C;
	sub_824DFDD0(ctx, base);
	// stfs f1,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x824dfdd0
	ctx.lr = 0x824E9030;
	sub_824DFDD0(ctx, base);
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x824dfdd0
	ctx.lr = 0x824E9044;
	sub_824DFDD0(ctx, base);
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// bl 0x825035c8
	ctx.lr = 0x824E9068;
	sub_825035C8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8242dcc8
	ctx.lr = 0x824E9078;
	sub_8242DCC8(ctx, base);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x8242dcc8
	ctx.lr = 0x824E908C;
	sub_8242DCC8(ctx, base);
	// lhz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r21,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r19,r11,-3532
	ctx.r19.s64 = ctx.r11.s64 + -3532;
	// addi r18,r10,26040
	ctx.r18.s64 = ctx.r10.s64 + 26040;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x824e90d8
	if (ctx.cr6.eq) goto loc_824E90D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,28176
	ctx.r5.s64 = ctx.r11.s64 + 28176;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9056
	ctx.r7.s64 = 9056;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E90D4;
	sub_82428090(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_824E90D8:
	// cmplwi cr6,r28,20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 20, ctx.xer);
	// ble cr6,0x824e9100
	if (!ctx.cr6.gt) goto loc_824E9100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,28156
	ctx.r5.s64 = ctx.r11.s64 + 28156;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9059
	ctx.r7.s64 = 9059;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E90FC;
	sub_82428090(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_824E9100:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lhz r27,18(r26)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r26.u32 + 18);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824e9148
	if (!ctx.cr6.eq) goto loc_824E9148;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,28072
	ctx.r5.s64 = ctx.r11.s64 + 28072;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9066
	ctx.r7.s64 = 9066;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E9144;
	sub_82428090(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_824E9148:
	// lhz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 16);
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// rlwinm r10,r10,6,20,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFC0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// addi r10,r10,4200
	ctx.r10.s64 = ctx.r10.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r15,r10,r25
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824e91a0
	if (!ctx.cr6.eq) goto loc_824E91A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,27984
	ctx.r5.s64 = ctx.r11.s64 + 27984;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9071
	ctx.r7.s64 = 9071;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E919C;
	sub_82428090(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_824E91A0:
	// lhz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 16);
	// lhz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r11,r25
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bne cr6,0x824e9224
	if (!ctx.cr6.eq) goto loc_824E9224;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824e9208
	if (!ctx.cr6.eq) goto loc_824E9208;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,27896
	ctx.r5.s64 = ctx.r11.s64 + 27896;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9079
	ctx.r7.s64 = 9079;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E9204;
	sub_82428090(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_824E9208:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r16,r11,r25
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// b 0x824e9228
	goto loc_824E9228;
loc_824E9224:
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E9228:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9314
	if (ctx.cr0.eq) goto loc_824E9314;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e9264
	if (ctx.cr6.lt) goto loc_824E9264;
	// beq cr6,0x824e9268
	if (ctx.cr6.eq) goto loc_824E9268;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e925c
	if (ctx.cr6.lt) goto loc_824E925C;
	// bne cr6,0x824e9268
	if (!ctx.cr6.eq) goto loc_824E9268;
	// li r21,5
	ctx.r21.s64 = 5;
	// b 0x824e9268
	goto loc_824E9268;
loc_824E925C:
	// li r21,4
	ctx.r21.s64 = 4;
	// b 0x824e9268
	goto loc_824E9268;
loc_824E9264:
	// li r21,7
	ctx.r21.s64 = 7;
loc_824E9268:
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e929c
	if (ctx.cr6.lt) goto loc_824E929C;
	// beq cr6,0x824e9294
	if (ctx.cr6.eq) goto loc_824E9294;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e928c
	if (ctx.cr6.lt) goto loc_824E928C;
	// bne cr6,0x824e92a0
	if (!ctx.cr6.eq) goto loc_824E92A0;
	// ori r21,r21,80
	ctx.r21.u64 = ctx.r21.u64 | 80;
	// b 0x824e92a0
	goto loc_824E92A0;
loc_824E928C:
	// ori r21,r21,64
	ctx.r21.u64 = ctx.r21.u64 | 64;
	// b 0x824e92a0
	goto loc_824E92A0;
loc_824E9294:
	// ori r21,r21,16
	ctx.r21.u64 = ctx.r21.u64 | 16;
	// b 0x824e92a0
	goto loc_824E92A0;
loc_824E929C:
	// ori r21,r21,112
	ctx.r21.u64 = ctx.r21.u64 | 112;
loc_824E92A0:
	// rlwinm r11,r10,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e92d4
	if (ctx.cr6.lt) goto loc_824E92D4;
	// beq cr6,0x824e92cc
	if (ctx.cr6.eq) goto loc_824E92CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e92c4
	if (ctx.cr6.lt) goto loc_824E92C4;
	// bne cr6,0x824e92d8
	if (!ctx.cr6.eq) goto loc_824E92D8;
	// ori r21,r21,1280
	ctx.r21.u64 = ctx.r21.u64 | 1280;
	// b 0x824e92d8
	goto loc_824E92D8;
loc_824E92C4:
	// ori r21,r21,1024
	ctx.r21.u64 = ctx.r21.u64 | 1024;
	// b 0x824e92d8
	goto loc_824E92D8;
loc_824E92CC:
	// ori r21,r21,512
	ctx.r21.u64 = ctx.r21.u64 | 512;
	// b 0x824e92d8
	goto loc_824E92D8;
loc_824E92D4:
	// ori r21,r21,1792
	ctx.r21.u64 = ctx.r21.u64 | 1792;
loc_824E92D8:
	// rlwinm r11,r10,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e930c
	if (ctx.cr6.lt) goto loc_824E930C;
	// beq cr6,0x824e9304
	if (ctx.cr6.eq) goto loc_824E9304;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e92fc
	if (ctx.cr6.lt) goto loc_824E92FC;
	// bne cr6,0x824e9318
	if (!ctx.cr6.eq) goto loc_824E9318;
	// ori r21,r21,20480
	ctx.r21.u64 = ctx.r21.u64 | 20480;
	// b 0x824e9318
	goto loc_824E9318;
loc_824E92FC:
	// ori r21,r21,16384
	ctx.r21.u64 = ctx.r21.u64 | 16384;
	// b 0x824e9318
	goto loc_824E9318;
loc_824E9304:
	// ori r21,r21,12288
	ctx.r21.u64 = ctx.r21.u64 | 12288;
	// b 0x824e9318
	goto loc_824E9318;
loc_824E930C:
	// ori r21,r21,28672
	ctx.r21.u64 = ctx.r21.u64 | 28672;
	// b 0x824e9318
	goto loc_824E9318;
loc_824E9314:
	// li r21,12816
	ctx.r21.s64 = 12816;
loc_824E9318:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9330
	if (ctx.cr0.eq) goto loc_824E9330;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// andi. r22,r11,1911
	ctx.r22.u64 = ctx.r11.u64 & 1911;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// b 0x824e9334
	goto loc_824E9334;
loc_824E9330:
	// li r22,528
	ctx.r22.s64 = 528;
loc_824E9334:
	// lhz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x824e9374
	if (!ctx.cr6.eq) goto loc_824E9374;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e936c
	if (ctx.cr0.eq) goto loc_824E936C;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r10,r11,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// rlwinm r11,r11,28,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x700;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r23,r11,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x824e9378
	goto loc_824E9378;
loc_824E936C:
	// li r23,819
	ctx.r23.s64 = 819;
	// b 0x824e9378
	goto loc_824E9378;
loc_824E9374:
	// lwz r23,80(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E9378:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,12996(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e939c
	if (ctx.cr6.eq) goto loc_824E939C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_824E939C:
	// addi r11,r28,1624
	ctx.r11.s64 = ctx.r28.s64 + 1624;
	// li r24,2
	ctx.r24.s64 = 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e940c
	if (ctx.cr6.eq) goto loc_824E940C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824e9404
	if (ctx.cr6.eq) goto loc_824E9404;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824e93dc
	if (ctx.cr6.eq) goto loc_824E93DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824e93fc
	if (ctx.cr6.eq) goto loc_824E93FC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824e93f0
	if (ctx.cr6.eq) goto loc_824E93F0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x824e93e4
	if (ctx.cr6.eq) goto loc_824E93E4;
loc_824E93DC:
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// b 0x824e9464
	goto loc_824E9464;
loc_824E93E4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x824e9464
	goto loc_824E9464;
loc_824E93F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x824e9418
	goto loc_824E9418;
loc_824E93FC:
	// stw r24,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// b 0x824e9464
	goto loc_824E9464;
loc_824E9404:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_824E940C:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824e9464
	if (!ctx.cr6.eq) goto loc_824E9464;
loc_824E9418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df730
	ctx.lr = 0x824E9420;
	sub_824DF730(ctx, base);
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,404(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5408
	ctx.lr = 0x824E9438;
	sub_824E5408(ctx, base);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// li r14,4
	ctx.r14.s64 = 4;
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,188(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x824e947c
	if (!ctx.cr6.eq) goto loc_824E947C;
loc_824E9464:
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_824E947C:
	// cmplwi cr6,r3,4140
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4140, ctx.xer);
	// bgt cr6,0x824e9690
	if (ctx.cr6.gt) goto loc_824E9690;
	// cmplwi cr6,r3,4139
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4139, ctx.xer);
	// bge cr6,0x824e94cc
	if (!ctx.cr6.lt) goto loc_824E94CC;
	// cmplwi cr6,r3,4128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4128, ctx.xer);
	// bgt cr6,0x824e9670
	if (ctx.cr6.gt) goto loc_824E9670;
	// cmplwi cr6,r3,4125
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4125, ctx.xer);
	// bge cr6,0x824e94cc
	if (!ctx.cr6.lt) goto loc_824E94CC;
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// blt cr6,0x824e94f4
	if (ctx.cr6.lt) goto loc_824E94F4;
	// cmplwi cr6,r3,4099
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4099, ctx.xer);
	// ble cr6,0x824e94cc
	if (!ctx.cr6.gt) goto loc_824E94CC;
	// cmplwi cr6,r3,4110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4110, ctx.xer);
	// ble cr6,0x824e94f4
	if (!ctx.cr6.gt) goto loc_824E94F4;
	// cmplwi cr6,r3,4117
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4117, ctx.xer);
	// ble cr6,0x824e94cc
	if (!ctx.cr6.gt) goto loc_824E94CC;
	// cmplwi cr6,r3,4121
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4121, ctx.xer);
	// beq cr6,0x824e94cc
	if (ctx.cr6.eq) goto loc_824E94CC;
	// cmplwi cr6,r3,4123
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4123, ctx.xer);
loc_824E94C8:
	// bne cr6,0x824e94f4
	if (!ctx.cr6.eq) goto loc_824E94F4;
loc_824E94CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,20292
	ctx.r5.s64 = ctx.r11.s64 + 20292;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9357
	ctx.r7.s64 = 9357;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E94E8;
	sub_82428090(ctx, base);
loc_824E94E8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824e94f8
	if (!ctx.cr6.eq) goto loc_824E94F8;
loc_824E94F4:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_824E94F8:
	// lhz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x824e9538
	if (!ctx.cr6.eq) goto loc_824E9538;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dfbe8
	ctx.lr = 0x824E9528;
	sub_824DFBE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
loc_824E9538:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dfbe8
	ctx.lr = 0x824E955C;
	sub_824DFBE8(ctx, base);
	// addi r29,r25,13152
	ctx.r29.s64 = ctx.r25.s64 + 13152;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df868
	ctx.lr = 0x824E9578;
	sub_824DF868(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// blt cr6,0x824e95a0
	if (ctx.cr6.lt) goto loc_824E95A0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x824e95a4
	if (!ctx.cr6.gt) goto loc_824E95A4;
loc_824E95A0:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E95A4:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x824e95bc
	if (ctx.cr6.lt) goto loc_824E95BC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x824e95bc
	if (ctx.cr6.gt) goto loc_824E95BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824E95BC:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x824e95d4
	if (ctx.cr6.lt) goto loc_824E95D4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x824e95d4
	if (ctx.cr6.gt) goto loc_824E95D4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824E95D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824e9648
	if (ctx.cr6.eq) goto loc_824E9648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df730
	ctx.lr = 0x824E95E4;
	sub_824DF730(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,404(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e59a0
	ctx.lr = 0x824E95FC;
	sub_824E59A0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// bl 0x824dfbe8
	ctx.lr = 0x824E9630;
	sub_824DFBE8(ctx, base);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824df868
	ctx.lr = 0x824E9648;
	sub_824DF868(ctx, base);
loc_824E9648:
	// lwz r11,1636(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stw r11,1636(r31)
	REX_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_824E9670:
	// cmplwi cr6,r3,4130
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4130, ctx.xer);
	// beq cr6,0x824e94cc
	if (ctx.cr6.eq) goto loc_824E94CC;
	// cmplwi cr6,r3,4131
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4131, ctx.xer);
	// ble cr6,0x824e94f4
	if (!ctx.cr6.gt) goto loc_824E94F4;
	// cmplwi cr6,r3,4133
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4133, ctx.xer);
	// ble cr6,0x824e94cc
	if (!ctx.cr6.gt) goto loc_824E94CC;
	// cmplwi cr6,r3,4137
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4137, ctx.xer);
	// b 0x824e94c8
	goto loc_824E94C8;
loc_824E9690:
	// cmplwi cr6,r3,4174
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4174, ctx.xer);
	// bgt cr6,0x824e9700
	if (ctx.cr6.gt) goto loc_824E9700;
	// cmplwi cr6,r3,4173
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4173, ctx.xer);
	// bge cr6,0x824e96e0
	if (!ctx.cr6.lt) goto loc_824E96E0;
	// cmplwi cr6,r3,4142
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4142, ctx.xer);
	// beq cr6,0x824e94cc
	if (ctx.cr6.eq) goto loc_824E94CC;
	// cmplwi cr6,r3,4144
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4144, ctx.xer);
	// beq cr6,0x824e94cc
	if (ctx.cr6.eq) goto loc_824E94CC;
	// cmplwi cr6,r3,4151
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4151, ctx.xer);
	// beq cr6,0x824e94cc
	if (ctx.cr6.eq) goto loc_824E94CC;
	// cmplwi cr6,r3,4155
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4155, ctx.xer);
	// bne cr6,0x824e94f4
	if (!ctx.cr6.eq) goto loc_824E94F4;
loc_824E96C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r11,20292
	ctx.r5.s64 = ctx.r11.s64 + 20292;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,9302
	ctx.r7.s64 = 9302;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E96DC;
	sub_82428090(ctx, base);
	// b 0x824e94f4
	goto loc_824E94F4;
loc_824E96E0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5708
	ctx.lr = 0x824E96F0;
	sub_824E5708(ctx, base);
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// addi r14,r14,3
	ctx.r14.s64 = ctx.r14.s64 + 3;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x824e94e8
	goto loc_824E94E8;
loc_824E9700:
	// cmplwi cr6,r3,4175
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4175, ctx.xer);
	// blt cr6,0x824e94f4
	if (ctx.cr6.lt) goto loc_824E94F4;
	// cmplwi cr6,r3,4185
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4185, ctx.xer);
	// ble cr6,0x824e94cc
	if (!ctx.cr6.gt) goto loc_824E94CC;
	// cmplwi cr6,r3,4187
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4187, ctx.xer);
	// ble cr6,0x824e96c0
	if (!ctx.cr6.gt) goto loc_824E96C0;
	// cmplwi cr6,r3,4196
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4196, ctx.xer);
	// ble cr6,0x824e94cc
	if (!ctx.cr6.gt) goto loc_824E94CC;
	// b 0x824e94f4
	goto loc_824E94F4;
}

DEFINE_REX_FUNC(sub_82502A00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82502A08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82502a48
	if (!ctx.cr6.eq) goto loc_82502A48;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-25856
	ctx.r6.s64 = ctx.r11.s64 + -25856;
	// addi r5,r10,-3200
	ctx.r5.s64 = ctx.r10.s64 + -3200;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// bl 0x82428090
	ctx.lr = 0x82502A48;
	sub_82428090(ctx, base);
loc_82502A48:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242d998
	ctx.lr = 0x82502A54;
	sub_8242D998(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82502abc
	if (!ctx.cr6.eq) goto loc_82502ABC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82502a78
	if (ctx.cr6.eq) goto loc_82502A78;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242e028
	ctx.lr = 0x82502A78;
	sub_8242E028(ctx, base);
loc_82502A78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82502ab4
	if (ctx.cr6.eq) goto loc_82502AB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82502ab4
	if (ctx.cr6.eq) goto loc_82502AB4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,1864
	ctx.r11.s64 = ctx.r11.s64 + 1864;
	// addi r4,r10,-25752
	ctx.r4.s64 = ctx.r10.s64 + -25752;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// bctrl 
	ctx.lr = 0x82502AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82502AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82502b18
	goto loc_82502B18;
loc_82502ABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82502ad8
	if (ctx.cr6.eq) goto loc_82502AD8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242e028
	ctx.lr = 0x82502AD8;
	sub_8242E028(ctx, base);
loc_82502AD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82502b14
	if (ctx.cr6.eq) goto loc_82502B14;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82502b14
	if (ctx.cr6.eq) goto loc_82502B14;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,1864
	ctx.r11.s64 = ctx.r11.s64 + 1864;
	// addi r4,r10,-25752
	ctx.r4.s64 = ctx.r10.s64 + -25752;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// bctrl 
	ctx.lr = 0x82502B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82502B14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82502B18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82506240) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82506318) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250635c
	if (!ctx.cr0.eq) goto loc_8250635C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-21512
	ctx.r6.s64 = ctx.r11.s64 + -21512;
	// addi r5,r10,-21536
	ctx.r5.s64 = ctx.r10.s64 + -21536;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8250635C;
	sub_82428090(ctx, base);
loc_8250635C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82509E10) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82509e9c
	if (!ctx.cr6.eq) goto loc_82509E9C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r31,1456(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82509E48;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x82509e68
	if (ctx.cr0.eq) goto loc_82509E68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82528a30
	ctx.lr = 0x82509E60;
	sub_82528A30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82509e6c
	goto loc_82509E6C;
loc_82509E68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82509E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x82528f48
	ctx.lr = 0x82509E78;
	sub_82528F48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82506758
	ctx.lr = 0x82509E88;
	sub_82506758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528b20
	ctx.lr = 0x82509E90;
	sub_82528B20(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x824ecb48
	ctx.lr = 0x82509E9C;
	sub_824ECB48(ctx, base);
loc_82509E9C:
	// lwz r3,152(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
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

DEFINE_REX_FUNC(sub_8250D250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8250d2ac
	if (ctx.cr6.eq) goto loc_8250D2AC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8250d2a4
	if (ctx.cr6.eq) goto loc_8250D2A4;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8250d2ac
	if (ctx.cr6.eq) goto loc_8250D2AC;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x8250d2a4
	if (ctx.cr6.eq) goto loc_8250D2A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8250D2A4:
	// lhz r3,10(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// blr 
	return;
loc_8250D2AC:
	// lhz r3,6(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250F740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x8250F748;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250f774
	if (ctx.cr6.eq) goto loc_8250F774;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,228(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250fe94
	if (!ctx.cr0.eq) goto loc_8250FE94;
loc_8250F774:
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r22,r10,-3532
	ctx.r22.s64 = ctx.r10.s64 + -3532;
	// addi r21,r9,-19872
	ctx.r21.s64 = ctx.r9.s64 + -19872;
	// beq 0x8250f880
	if (ctx.cr0.eq) goto loc_8250F880;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r10,-19612
	ctx.r28.s64 = ctx.r10.s64 + -19612;
	// addi r27,r11,16176
	ctx.r27.s64 = ctx.r11.s64 + 16176;
loc_8250F7B8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f880
	if (!ctx.cr0.eq) goto loc_8250F880;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250f868
	if (ctx.cr0.eq) goto loc_8250F868;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r18.u32);
	// beq 0x8250f824
	if (ctx.cr0.eq) goto loc_8250F824;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250F7E8;
	sub_82534850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250F7F4;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f824
	if (!ctx.cr0.eq) goto loc_8250F824;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// blt cr6,0x8250f81c
	if (ctx.cr6.lt) goto loc_8250F81C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,1171
	ctx.r7.s64 = 1171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8250F81C;
	sub_82428090(ctx, base);
loc_8250F81C:
	// stwu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_8250F824:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8250f858
	if (ctx.cr6.eq) goto loc_8250F858;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f858
	if (!ctx.cr0.eq) goto loc_8250F858;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8250f85c
	if (!ctx.cr0.eq) goto loc_8250F85C;
loc_8250F858:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8250F85C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f868
	if (ctx.cr0.eq) goto loc_8250F868;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8250F868:
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r8,r11,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x8250f7b8
	if (!ctx.cr6.eq) goto loc_8250F7B8;
loc_8250F880:
	// lwz r23,0(r20)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r27,4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x8250fe94
	if (ctx.cr6.eq) goto loc_8250FE94;
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x8250fa6c
	if (!ctx.cr6.eq) goto loc_8250FA6C;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8250f8fc
	if (!ctx.cr6.eq) goto loc_8250F8FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250F8BC;
	sub_82534850(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250F8C8;
	sub_825062B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8250F8D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8250f628
	ctx.lr = 0x8250F8DC;
	sub_8250F628(ctx, base);
loc_8250F8DC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8250F8E0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x82529490
	ctx.lr = 0x8250F8EC;
	sub_82529490(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x8250fe94
	goto loc_8250FE94;
loc_8250F8FC:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8250fd3c
	if (!ctx.cr6.eq) goto loc_8250FD3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250F914;
	sub_82534850(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250F920;
	sub_825062B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250F934;
	sub_82534850(ctx, base);
	// lwz r29,0(r20)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8250f984
	goto loc_8250F984;
loc_8250F948:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f994
	if (!ctx.cr0.eq) goto loc_8250F994;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f974
	if (ctx.cr0.eq) goto loc_8250F974;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250F96C;
	sub_82534850(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8250f990
	if (ctx.cr6.eq) goto loc_8250F990;
loc_8250F974:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8250F984:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8250f948
	if (!ctx.cr6.eq) goto loc_8250F948;
	// b 0x8250f994
	goto loc_8250F994;
loc_8250F990:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8250F994:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f9a8
	if (!ctx.cr0.eq) goto loc_8250F9A8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x8250f8d0
	goto loc_8250F8D0;
loc_8250F9A8:
	// lwz r29,0(r20)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8250fa10
	goto loc_8250FA10;
loc_8250F9B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fa20
	if (!ctx.cr0.eq) goto loc_8250FA20;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fa00
	if (ctx.cr0.eq) goto loc_8250FA00;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250efd8
	ctx.lr = 0x8250F9D8;
	sub_8250EFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fa1c
	if (!ctx.cr0.eq) goto loc_8250FA1C;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fa00
	if (ctx.cr0.eq) goto loc_8250FA00;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250F9F8;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fa1c
	if (!ctx.cr0.eq) goto loc_8250FA1C;
loc_8250FA00:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8250FA10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8250f9b8
	if (!ctx.cr6.eq) goto loc_8250F9B8;
	// b 0x8250fa20
	goto loc_8250FA20;
loc_8250FA1C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8250FA20:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fd3c
	if (!ctx.cr0.eq) goto loc_8250FD3C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FA3C;
	sub_8250F628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825294f0
	ctx.lr = 0x8250FA50;
	sub_825294F0(ctx, base);
loc_8250FA50:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82506318
	ctx.lr = 0x8250FA64;
	sub_82506318(ctx, base);
	// stw r29,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// b 0x8250fe94
	goto loc_8250FE94;
loc_8250FA6C:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x8250fd3c
	if (!ctx.cr6.eq) goto loc_8250FD3C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8250fd3c
	if (!ctx.cr6.eq) goto loc_8250FD3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250FA8C;
	sub_82534850(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250FA98;
	sub_825062B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250FAAC;
	sub_82534850(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250FAB8;
	sub_825062B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250FAC8;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fb34
	if (!ctx.cr0.eq) goto loc_8250FB34;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250FADC;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fb34
	if (!ctx.cr0.eq) goto loc_8250FB34;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FAF8;
	sub_8250F628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82529490
	ctx.lr = 0x8250FB0C;
	sub_82529490(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FB2C;
	sub_8250F628(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8250f8e0
	goto loc_8250F8E0;
loc_8250FB34:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8250fbf8
	if (!ctx.cr6.eq) goto loc_8250FBF8;
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,128(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 128);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8250FB50:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8250fb70
	if (ctx.cr6.eq) goto loc_8250FB70;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8250fbf0
	if (!ctx.cr6.eq) goto loc_8250FBF0;
loc_8250FB70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8250fb50
	if (ctx.cr6.lt) goto loc_8250FB50;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250FB80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fba4
	if (!ctx.cr0.eq) goto loc_8250FBA4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,-19628
	ctx.r5.s64 = ctx.r11.s64 + -19628;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8250FBA4;
	sub_82428090(ctx, base);
loc_8250FBA4:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8250FBB0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8250fbc8
	if (ctx.cr6.eq) goto loc_8250FBC8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8250FBC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8250fbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8250FBB0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FBE4;
	sub_8250F628(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x8250f8dc
	goto loc_8250F8DC;
loc_8250FBF0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8250fb80
	goto loc_8250FB80;
loc_8250FBF8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250FC04;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fc98
	if (ctx.cr0.eq) goto loc_8250FC98;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250efd8
	ctx.lr = 0x8250FC18;
	sub_8250EFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fc98
	if (!ctx.cr0.eq) goto loc_8250FC98;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250efd8
	ctx.lr = 0x8250FC2C;
	sub_8250EFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fc98
	if (!ctx.cr0.eq) goto loc_8250FC98;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FC48;
	sub_8250F628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825294f0
	ctx.lr = 0x8250FC5C;
	sub_825294F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82506318
	ctx.lr = 0x8250FC70;
	sub_82506318(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FC84;
	sub_8250F628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x82529490
	ctx.lr = 0x8250FC94;
	sub_82529490(ctx, base);
	// b 0x8250fa50
	goto loc_8250FA50;
loc_8250FC98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f6b0
	ctx.lr = 0x8250FCA4;
	sub_8250F6B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fd3c
	if (ctx.cr0.eq) goto loc_8250FD3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250efd8
	ctx.lr = 0x8250FCB8;
	sub_8250EFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fd3c
	if (!ctx.cr0.eq) goto loc_8250FD3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250efd8
	ctx.lr = 0x8250FCCC;
	sub_8250EFD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fd3c
	if (!ctx.cr0.eq) goto loc_8250FD3C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FCE8;
	sub_8250F628(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825294f0
	ctx.lr = 0x8250FCFC;
	sub_825294F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82506318
	ctx.lr = 0x8250FD10;
	sub_82506318(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FD24;
	sub_8250F628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x82529490
	ctx.lr = 0x8250FD34;
	sub_82529490(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8250fe80
	goto loc_8250FE80;
loc_8250FD3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250FD4C;
	sub_82534850(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250FD58;
	sub_825062B0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8250fd74
	if (!ctx.cr6.lt) goto loc_8250FD74;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82517c08
	ctx.lr = 0x8250FD70;
	sub_82517C08(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
loc_8250FD74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8250f5c8
	ctx.lr = 0x8250FD88;
	sub_8250F5C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825294f0
	ctx.lr = 0x8250FD9C;
	sub_825294F0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8250fe0c
	if (!ctx.cr6.eq) goto loc_8250FE0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x8250FDC0;
	sub_82534850(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825062b0
	ctx.lr = 0x8250FDCC;
	sub_825062B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8250f628
	ctx.lr = 0x8250FDE0;
	sub_8250F628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82529490
	ctx.lr = 0x8250FDF4;
	sub_82529490(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82506318
	ctx.lr = 0x8250FE08;
	sub_82506318(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8250FE0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82526390
	ctx.lr = 0x8250FE18;
	sub_82526390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82523bf8
	ctx.lr = 0x8250FE24;
	sub_82523BF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82523c38
	ctx.lr = 0x8250FE2C;
	sub_82523C38(ctx, base);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8250fe38
	if (!ctx.cr6.eq) goto loc_8250FE38;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8250FE38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8250fe54
	if (ctx.cr6.eq) goto loc_8250FE54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825274f0
	ctx.lr = 0x8250FE4C;
	sub_825274F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8250fe58
	goto loc_8250FE58;
loc_8250FE54:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8250FE58:
	// stw r25,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r18,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82506448
	ctx.lr = 0x8250FE70;
	sub_82506448(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82523c18
	ctx.lr = 0x8250FE7C;
	sub_82523C18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8250FE80:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82506318
	ctx.lr = 0x8250FE90;
	sub_82506318(ctx, base);
	// stw r26,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r26.u32);
loc_8250FE94:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252A5E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252AB48) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8252ab90
	if (ctx.cr6.lt) goto loc_8252AB90;
	// beq cr6,0x8252abac
	if (ctx.cr6.eq) goto loc_8252ABAC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8252aba4
	if (ctx.cr6.lt) goto loc_8252ABA4;
	// beq cr6,0x8252ab90
	if (ctx.cr6.eq) goto loc_8252AB90;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,13528
	ctx.r6.s64 = ctx.r11.s64 + 13528;
	// addi r5,r10,22544
	ctx.r5.s64 = ctx.r10.s64 + 22544;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,5448
	ctx.r7.s64 = 5448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8252AB90;
	sub_82428090(ctx, base);
loc_8252AB90:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8252AB94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8252ABA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252ab94
	goto loc_8252AB94;
loc_8252ABAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252ab94
	goto loc_8252AB94;
}

DEFINE_REX_FUNC(sub_82534260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82534268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1452(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1452);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82534288;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x825342ac
	if (ctx.cr0.eq) goto loc_825342AC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82525f98
	ctx.lr = 0x825342A8;
	sub_82525F98(ctx, base);
	// b 0x825342b0
	goto loc_825342B0;
loc_825342AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825342B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82535978) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825359a8
	if (!ctx.cr6.eq) goto loc_825359A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82535a28
	goto loc_82535A28;
loc_825359A8:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x825359c0
	if (!ctx.cr6.gt) goto loc_825359C0;
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
loc_825359C0:
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82535908
	ctx.lr = 0x825359C8;
	sub_82535908(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535a28
	if (ctx.cr0.eq) goto loc_82535A28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r31,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_825359F8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82535a40
	if (!ctx.cr6.eq) goto loc_82535A40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x825359f8
	if (ctx.cr6.lt) goto loc_825359F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82535A1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82535A28:
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
loc_82535A40:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82535a1c
	goto loc_82535A1C;
}

DEFINE_REX_FUNC(sub_825393A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x825393A8;
	__savegprlr_28(ctx, base);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82203a90
	ctx.lr = 0x825393E8;
	sub_82203A90(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82539408
	if (!ctx.cr6.eq) goto loc_82539408;
loc_825393F0:
	// bl 0x82205ec8
	ctx.lr = 0x825393F4;
	sub_82205EC8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82203c80
	ctx.lr = 0x82539400;
	sub_82203C80(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82539498
	goto loc_82539498;
loc_82539408:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82539418
	if (ctx.cr6.eq) goto loc_82539418;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825393f0
	if (ctx.cr6.eq) goto loc_825393F0;
loc_82539418:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bgt cr6,0x8253943c
	if (ctx.cr6.gt) goto loc_8253943C;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_8253943C:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82206078
	ctx.lr = 0x82539460;
	sub_82206078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82539494
	if (ctx.cr6.eq) goto loc_82539494;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82539488
	if (ctx.cr0.lt) goto loc_82539488;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x82539494
	goto loc_82539494;
loc_82539488:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82205c80
	ctx.lr = 0x82539494;
	sub_82205C80(ctx, base);
loc_82539494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82539498:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8254BB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8254BB70;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r20,50(r3)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,0(r7)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r26,348(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// srawi r25,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r20.s32 >> 1;
	// beq cr6,0x8254bbb4
	if (ctx.cr6.eq) goto loc_8254BBB4;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8254bbb8
	if (ctx.cr6.eq) goto loc_8254BBB8;
loc_8254BBB4:
	// li r17,1
	ctx.r17.s64 = 1;
loc_8254BBB8:
	// lwz r11,344(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 344);
	// lhz r23,62(r27)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r27.u32 + 62);
	// lhz r16,66(r27)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r27.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r22,64(r27)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r27.u32 + 64);
	// lhz r15,68(r27)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r27.u32 + 68);
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bne cr6,0x8254bbe8
	if (!ctx.cr6.eq) goto loc_8254BBE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8254bd14
	goto loc_8254BD14;
loc_8254BBE8:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8254bcd4
	if (ctx.cr6.lt) goto loc_8254BCD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8254bccc
	if (!ctx.cr6.lt) goto loc_8254BCCC;
loc_8254BC34:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8254bc60
	if (ctx.cr6.lt) goto loc_8254BC60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5000
	ctx.lr = 0x8254BC50;
	sub_822B5000(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8254bc34
	if (ctx.cr6.eq) goto loc_8254BC34;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8254bd14
	goto loc_8254BD14;
loc_8254BC60:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_8254BCCC:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8254bd14
	goto loc_8254BD14;
loc_8254BCD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b50c0
	ctx.lr = 0x8254BCDC;
	sub_822B50C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_8254BCE4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822b50c0
	ctx.lr = 0x8254BCFC;
	sub_822B50C0(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8254bce4
	if (ctx.cr6.lt) goto loc_8254BCE4;
loc_8254BD14:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254bd30
	if (ctx.cr6.eq) goto loc_8254BD30;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8254BD30:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254bd4c
	if (ctx.cr6.eq) goto loc_8254BD4C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 336);
	// bl 0x8254a288
	ctx.lr = 0x8254BD4C;
	sub_8254A288(ctx, base);
loc_8254BD4C:
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// beq cr6,0x8254bd88
	if (ctx.cr6.eq) goto loc_8254BD88;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254bd88
	if (ctx.cr6.eq) goto loc_8254BD88;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8254BD88:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8254be64
	if (!ctx.cr6.eq) goto loc_8254BE64;
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r20,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r20.u64;
	// add r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254bdf0
	if (ctx.cr6.eq) goto loc_8254BDF0;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8254bddc
	if (!ctx.cr6.lt) goto loc_8254BDDC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x8254bdf0
	goto loc_8254BDF0;
loc_8254BDDC:
	// subf r9,r20,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r20.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_8254BDF0:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8254be64
	if (ctx.cr6.eq) goto loc_8254BE64;
	// addi r9,r25,-1
	ctx.r9.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8254be10
	if (ctx.cr6.eq) goto loc_8254BE10;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x8254be18
	goto loc_8254BE18;
loc_8254BE10:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_8254BE18:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8254be64
	if (ctx.cr6.eq) goto loc_8254BE64;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8254be50
	if (!ctx.cr6.lt) goto loc_8254BE50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8254be64
	goto loc_8254BE64;
loc_8254BE50:
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8254BE64:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8254bf94
	if (!ctx.cr6.gt) goto loc_8254BF94;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8254BE88:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254bea8
	if (ctx.cr6.eq) goto loc_8254BEA8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x8254beb0
	goto loc_8254BEB0;
loc_8254BEA8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_8254BEB0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8254be88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8254BE88;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8254bf94
	if (!ctx.cr6.gt) goto loc_8254BF94;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8254bef0
	if (ctx.cr6.eq) goto loc_8254BEF0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8254bef0
	if (ctx.cr6.eq) goto loc_8254BEF0;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8254bee4
	if (ctx.cr6.lt) goto loc_8254BEE4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8254bf98
	goto loc_8254BF98;
loc_8254BEE4:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8254bf98
	goto loc_8254BF98;
loc_8254BEF0:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r6,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8254bf98
	goto loc_8254BF98;
loc_8254BF94:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
loc_8254BF98:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r6,r10,r22
	ctx.r6.u64 = ctx.r10.u64 + ctx.r22.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r6,r15
	ctx.r4.u64 = ctx.r6.u64 & ctx.r15.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// and r5,r7,r16
	ctx.r5.u64 = ctx.r7.u64 & ctx.r16.u64;
	// subf r10,r22,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x8254c000
	if (ctx.cr6.eq) goto loc_8254C000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 336);
	// bl 0x8254a288
	ctx.lr = 0x8254C000;
	sub_8254A288(ctx, base);
loc_8254C000:
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// beq cr6,0x8254c040
	if (ctx.cr6.eq) goto loc_8254C040;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c040
	if (ctx.cr6.eq) goto loc_8254C040;
	// add r11,r24,r20
	ctx.r11.u64 = ctx.r24.u64 + ctx.r20.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8254C040:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8254c0d4
	if (!ctx.cr6.eq) goto loc_8254C0D4;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r20,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r20.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8254c084
	if (ctx.cr6.eq) goto loc_8254C084;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8254C084:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8254c0d4
	if (ctx.cr6.eq) goto loc_8254C0D4;
	// addi r9,r25,-1
	ctx.r9.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8254c0a4
	if (ctx.cr6.eq) goto loc_8254C0A4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8254c0ac
	goto loc_8254C0AC;
loc_8254C0A4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_8254C0AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c0d4
	if (ctx.cr6.eq) goto loc_8254C0D4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8254C0D4:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8254c204
	if (!ctx.cr6.gt) goto loc_8254C204;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8254C0F8:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254c118
	if (ctx.cr6.eq) goto loc_8254C118;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8254c120
	goto loc_8254C120;
loc_8254C118:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8254C120:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8254c0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8254C0F8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8254c204
	if (!ctx.cr6.gt) goto loc_8254C204;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8254c160
	if (ctx.cr6.eq) goto loc_8254C160;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8254c160
	if (ctx.cr6.eq) goto loc_8254C160;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8254c154
	if (ctx.cr6.lt) goto loc_8254C154;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8254c208
	goto loc_8254C208;
loc_8254C154:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8254c208
	goto loc_8254C208;
loc_8254C160:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r30.u64;
	// subf r29,r6,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r28,r30,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r29.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// andc r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r28.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8254c208
	goto loc_8254C208;
loc_8254C204:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
loc_8254C208:
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r24,r20
	ctx.r11.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r7,r8,r15
	ctx.r7.u64 = ctx.r8.u64 & ctx.r15.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// and r10,r4,r16
	ctx.r10.u64 = ctx.r4.u64 & ctx.r16.u64;
	// subf r6,r22,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r22.u64;
	// subf r9,r23,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82569FF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8256A000;
	__savegprlr_29(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// li r31,16
	ctx.r31.s64 = 16;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	ctx.r30.s64 = 160;
	// li r11,112
	ctx.r11.s64 = 112;
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v3,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v31,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v29,v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vaddshs v23,v27,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus128 v58,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r31,-64(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-48(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r30,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r29,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r29.u32);
	// bne cr6,0x8256a114
	if (!ctx.cr6.eq) goto loc_8256A114;
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-52(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r30,-44(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r29,-36(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
loc_8256A114:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x8256a220
	if (!ctx.cr6.eq) goto loc_8256A220;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r31,256
	ctx.r31.s64 = 256;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,208
	ctx.r30.s64 = 208;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v10,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v57,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v11,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v30,v10,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vsldoi128 v29,v9,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// vaddshs v26,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// vaddshs v25,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v23,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus128 v52,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-44(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r30,-40(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r29,-36(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r9,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stwux r6,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stwx r30,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
loc_8256A220:
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82571C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82571C18;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r26,r25,30
	ctx.r26.u64 = ctx.r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r27,r3,232
	ctx.r27.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82571c90
	if (ctx.cr6.lt) goto loc_82571C90;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822dc648
	ctx.lr = 0x82571C88;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82571cf0
	goto loc_82571CF0;
loc_82571C90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82571cec
	if (!ctx.cr6.gt) goto loc_82571CEC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82571C9C:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x82571c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82571C9C;
loc_82571CEC:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82571CF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82571d5c
	if (!ctx.cr6.eq) goto loc_82571D5C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x82571d78
	goto loc_82571D78;
loc_82571D5C:
	// rlwinm r10,r26,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x8;
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x82571D78;
	sub_8255F9C0(ctx, base);
loc_82571D78:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r26,r9,30
	ctx.r26.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82571dd4
	if (ctx.cr6.lt) goto loc_82571DD4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dc648
	ctx.lr = 0x82571DCC;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82571e34
	goto loc_82571E34;
loc_82571DD4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82571e30
	if (!ctx.cr6.gt) goto loc_82571E30;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82571DE0:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r27,r3
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x82571de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82571DE0;
loc_82571E30:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82571E34:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// bne cr6,0x82571ea4
	if (!ctx.cr6.eq) goto loc_82571EA4;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r9,r26,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_82571EA4:
	// rlwinm r11,r26,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x82571EBC;
	sub_8255F9C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

