#include "mmpps_funcs.4.h"

DEFINE_REX_FUNC(sub_82100460) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82100468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,-30020(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -30020);
	// beq cr6,0x821005c8
	if (ctx.cr6.eq) goto loc_821005C8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82100588
	if (ctx.cr6.eq) goto loc_82100588;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x821004e0
	if (ctx.cr6.eq) goto loc_821004E0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x821005d0
	if (!ctx.cr6.eq) goto loc_821005D0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r10,1840
	ctx.r11.s64 = ctx.r10.s64 + 1840;
	// beq cr6,0x821004d8
	if (ctx.cr6.eq) goto loc_821004D8;
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
loc_821004C0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821005d0
	if (!ctx.cr6.eq) goto loc_821005D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x821005d4
	goto loc_821005D4;
loc_821004D8:
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821004c0
	goto loc_821004C0;
loc_821004E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,-32156
	ctx.r29.s64 = -2107375616;
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// bne cr6,0x82100518
	if (!ctx.cr6.eq) goto loc_82100518;
	// lwz r3,-30016(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -30016);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,31604
	ctx.r4.s64 = ctx.r11.s64 + 31604;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82100518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82100518:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt 0x821005d0
	if (ctx.cr0.gt) goto loc_821005D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,784(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82100548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821005d0
	if (ctx.cr0.eq) goto loc_821005D0;
	// lwz r3,-30016(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82100564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821005d0
	if (!ctx.cr0.eq) goto loc_821005D0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r9,r11,22064
	ctx.r9.s64 = ctx.r11.s64 + 22064;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,104(r9)
	REX_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// b 0x821005d0
	goto loc_821005D0;
loc_82100588:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r11,r11,-26840
	ctx.r11.s64 = ctx.r11.s64 + -26840;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821005d0
	if (ctx.cr6.eq) goto loc_821005D0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821005d0
	if (ctx.cr6.eq) goto loc_821005D0;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,22064
	ctx.r10.s64 = ctx.r10.s64 + 22064;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,104(r10)
	REX_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// b 0x821005d0
	goto loc_821005D0;
loc_821005C8:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821005D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821005D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82126470) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// addi r4,r10,1840
	ctx.r4.s64 = ctx.r10.s64 + 1840;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,23520(r11)
	REX_STORE_U32(ctx.r11.u32 + 23520, ctx.r10.u32);
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,23512(r11)
	REX_STORE_U32(ctx.r11.u32 + 23512, ctx.r3.u32);
	// stfs f0,23752(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 23752, temp.u32);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// stfs f0,23756(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 23756, temp.u32);
	// stw r9,23532(r11)
	REX_STORE_U32(ctx.r11.u32 + 23532, ctx.r9.u32);
	// stfs f13,23760(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 23760, temp.u32);
	// stw r8,23780(r11)
	REX_STORE_U32(ctx.r11.u32 + 23780, ctx.r8.u32);
	// stfs f13,23764(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 23764, temp.u32);
	// stw r7,23784(r11)
	REX_STORE_U32(ctx.r11.u32 + 23784, ctx.r7.u32);
	// stfs f0,23768(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 23768, temp.u32);
	// stw r6,23788(r11)
	REX_STORE_U32(ctx.r11.u32 + 23788, ctx.r6.u32);
	// stfs f0,23776(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 23776, temp.u32);
	// stfs f12,23772(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 23772, temp.u32);
	// beq cr6,0x821264f4
	if (ctx.cr6.eq) goto loc_821264F4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,-22328
	ctx.r10.s64 = ctx.r10.s64 + -22328;
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_821264F4:
	// lwz r10,23504(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23504);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,23488(r11)
	REX_STORE_U32(ctx.r11.u32 + 23488, ctx.r9.u32);
	// stw r8,23492(r11)
	REX_STORE_U32(ctx.r11.u32 + 23492, ctx.r8.u32);
	// stw r10,23504(r11)
	REX_STORE_U32(ctx.r11.u32 + 23504, ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1010
	ctx.r10.s64 = 1010;
	// stw r10,23488(r11)
	REX_STORE_U32(ctx.r11.u32 + 23488, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82132C50;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822044d0
	ctx.lr = 0x82132C58;
	__savefpr_14(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,868(r1)
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r3.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r31,r11,1840
	ctx.r31.s64 = ctx.r11.s64 + 1840;
	// lwz r11,23456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23456);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lfs f15,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f15.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82132cb0
	if (ctx.cr6.eq) goto loc_82132CB0;
	// cmpwi cr6,r11,900
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 900, ctx.xer);
	// bne cr6,0x82132cd8
	if (!ctx.cr6.eq) goto loc_82132CD8;
	// lfs f13,23460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 23460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,416(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,23460(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 23460, temp.u32);
	// fcmpu cr6,f0,f15
	ctx.cr6.compare(ctx.f0.f64, ctx.f15.f64);
	// bgt cr6,0x82132cd8
	if (ctx.cr6.gt) goto loc_82132CD8;
	// stfs f15,23460(r3)
	temp.f32 = float(ctx.f15.f64);
	REX_STORE_U32(ctx.r3.u32 + 23460, temp.u32);
	// stw r26,23456(r3)
	REX_STORE_U32(ctx.r3.u32 + 23456, ctx.r26.u32);
	// b 0x82132cd4
	goto loc_82132CD4;
loc_82132CB0:
	// lfs f13,23460(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 23460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,416(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,23460(r20)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r20.u32 + 23460, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82132cd8
	if (ctx.cr6.lt) goto loc_82132CD8;
	// li r11,50
	ctx.r11.s64 = 50;
	// stfs f30,23460(r20)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r20.u32 + 23460, temp.u32);
	// stw r11,23456(r20)
	REX_STORE_U32(ctx.r20.u32 + 23456, ctx.r11.u32);
loc_82132CD4:
	// stw r26,23464(r20)
	REX_STORE_U32(ctx.r20.u32 + 23464, ctx.r26.u32);
loc_82132CD8:
	// lfs f0,23460(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 23460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f15
	ctx.cr6.compare(ctx.f0.f64, ctx.f15.f64);
	// bne cr6,0x82132cec
	if (!ctx.cr6.eq) goto loc_82132CEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821351fc
	goto loc_821351FC;
loc_82132CEC:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lwz r29,-30020(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -30020);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r27,r11,-22328
	ctx.r27.s64 = ctx.r11.s64 + -22328;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,52(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// lfs f1,8096(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 8096);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// lwz r4,23452(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 23452);
	// addi r19,r11,30480
	ctx.r19.s64 = ctx.r11.s64 + 30480;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r19,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// beq cr6,0x821350d8
	if (ctx.cr6.eq) goto loc_821350D8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82110aa8
	ctx.lr = 0x82132DAC;
	sub_82110AA8(ctx, base);
	// lwz r11,23476(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23476);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132dcc
	if (ctx.cr6.eq) goto loc_82132DCC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,23476(r20)
	REX_STORE_U32(ctx.r20.u32 + 23476, ctx.r11.u32);
	// bge 0x82132dcc
	if (!ctx.cr0.lt) goto loc_82132DCC;
	// stw r26,23476(r20)
	REX_STORE_U32(ctx.r20.u32 + 23476, ctx.r26.u32);
loc_82132DCC:
	// lwz r11,23472(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23472);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82132df8
	if (ctx.cr6.eq) goto loc_82132DF8;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r10,23476(r20)
	REX_STORE_U32(ctx.r20.u32 + 23476, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82132df0
	if (ctx.cr6.lt) goto loc_82132DF0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82132DF0:
	// stw r11,23480(r20)
	REX_STORE_U32(ctx.r20.u32 + 23480, ctx.r11.u32);
	// stw r3,23472(r20)
	REX_STORE_U32(ctx.r20.u32 + 23472, ctx.r3.u32);
loc_82132DF8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82110b60
	ctx.lr = 0x82132E00;
	sub_82110B60(ctx, base);
	// lwz r10,23476(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 23476);
	// lwz r11,-30012(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mulli r10,r10,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(90));
	// stw r3,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// lwz r25,0(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82132E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-6017
	ctx.r11.s64 = -394330112;
	// lfs f0,936(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-16192
	ctx.r10.s64 = -16192;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// ori r9,r11,16448
	ctx.r9.u64 = ctx.r11.u64 | 16448;
	// lwz r8,23480(r20)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r20.u32 + 23480);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mulli r11,r28,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(20));
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f31,492(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f31.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,116
	ctx.r6.s64 = ctx.r11.s64 + 116;
	// li r5,688
	ctx.r5.s64 = 688;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821046e8
	ctx.lr = 0x82132EB4;
	sub_821046E8(ctx, base);
	// lis r30,-256
	ctx.r30.s64 = -16777216;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f29,904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r25,r11,29372
	ctx.r25.s64 = ctx.r11.s64 + 29372;
	// lfs f1,1156(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1156);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82103650
	ctx.lr = 0x82132EE4;
	sub_82103650(ctx, base);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f1,1160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1160);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82103650
	ctx.lr = 0x82132F04;
	sub_82103650(ctx, base);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lfs f28,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1164);
	ctx.f28.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,1168(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1168);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82132F28;
	sub_82103650(ctx, base);
	// lfs f2,1172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1172);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82103650
	ctx.lr = 0x82132F48;
	sub_82103650(ctx, base);
	// li r11,-16129
	ctx.r11.s64 = -16129;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82132F6C;
	sub_82103650(ctx, base);
	// stw r26,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821350d8
	if (!ctx.cr6.gt) goto loc_821350D8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r5,-32158
	ctx.r5.s64 = -2107506688;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r5,-16216
	ctx.r9.s64 = ctx.r5.s64 + -16216;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r4,-32158
	ctx.r4.s64 = -2107506688;
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// lis r3,-32158
	ctx.r3.s64 = -2107506688;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// addi r11,r4,-16360
	ctx.r11.s64 = ctx.r4.s64 + -16360;
	// addi r10,r3,-16296
	ctx.r10.s64 = ctx.r3.s64 + -16296;
	// addi r9,r30,26796
	ctx.r9.s64 = ctx.r30.s64 + 26796;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// addi r11,r29,30052
	ctx.r11.s64 = ctx.r29.s64 + 30052;
	// addi r10,r28,30028
	ctx.r10.s64 = ctx.r28.s64 + 30028;
	// addi r9,r27,30004
	ctx.r9.s64 = ctx.r27.s64 + 30004;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// stw r9,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// addi r11,r26,29976
	ctx.r11.s64 = ctx.r26.s64 + 29976;
	// addi r10,r25,29964
	ctx.r10.s64 = ctx.r25.s64 + 29964;
	// addi r9,r24,29944
	ctx.r9.s64 = ctx.r24.s64 + 29944;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// addi r11,r23,29928
	ctx.r11.s64 = ctx.r23.s64 + 29928;
	// addi r10,r22,29912
	ctx.r10.s64 = ctx.r22.s64 + 29912;
	// addi r9,r21,29892
	ctx.r9.s64 = ctx.r21.s64 + 29892;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// stw r10,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r9,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r23,144(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r20,26788
	ctx.r4.s64 = ctx.r20.s64 + 26788;
	// addi r20,r14,29860
	ctx.r20.s64 = ctx.r14.s64 + 29860;
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r23,r23,29808
	ctx.r23.s64 = ctx.r23.s64 + 29808;
	// lwz r21,152(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r28,r18,29876
	ctx.r28.s64 = ctx.r18.s64 + 29876;
	// lwz r18,160(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r24,r16,29868
	ctx.r24.s64 = ctx.r16.s64 + 29868;
	// addi r18,r18,29776
	ctx.r18.s64 = ctx.r18.s64 + 29776;
	// lwz r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r16,116(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r22,r15,29864
	ctx.r22.s64 = ctx.r15.s64 + 29864;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r5,r5,29856
	ctx.r5.s64 = ctx.r5.s64 + 29856;
	// addi r16,r16,29760
	ctx.r16.s64 = ctx.r16.s64 + 29760;
	// lwz r15,100(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r5.u32);
	// addi r26,r17,29872
	ctx.r26.s64 = ctx.r17.s64 + 29872;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r30,r19,26792
	ctx.r30.s64 = ctx.r19.s64 + 26792;
	// lwz r17,140(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r21,r21,29800
	ctx.r21.s64 = ctx.r21.s64 + 29800;
	// lwz r19,128(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f16,1240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1240);
	ctx.f16.f64 = double(temp.f32);
	// addi r17,r17,29768
	ctx.r17.s64 = ctx.r17.s64 + 29768;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,148(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r19,r19,29792
	ctx.r19.s64 = ctx.r19.s64 + 29792;
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r3,29840
	ctx.r3.s64 = ctx.r3.s64 + 29840;
	// lwz r25,136(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r29,r29,29832
	ctx.r29.s64 = ctx.r29.s64 + 29832;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r4,r15,29752
	ctx.r4.s64 = ctx.r15.s64 + 29752;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r27,r27,29824
	ctx.r27.s64 = ctx.r27.s64 + 29824;
	// addi r25,r25,29816
	ctx.r25.s64 = ctx.r25.s64 + 29816;
	// stw r28,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// addi r30,r14,29744
	ctx.r30.s64 = ctx.r14.s64 + 29744;
	// stw r24,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// addi r28,r23,29736
	ctx.r28.s64 = ctx.r23.s64 + 29736;
	// stw r22,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r22.u32);
	// stw r20,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r20.u32);
	// lfs f18,1228(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1228);
	ctx.f18.f64 = double(temp.f32);
	// stw r21,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r21.u32);
	// lfs f23,1224(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1224);
	ctx.f23.f64 = double(temp.f32);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r6,29728
	ctx.r6.s64 = ctx.r6.s64 + 29728;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r7,r7,29704
	ctx.r7.s64 = ctx.r7.s64 + 29704;
	// stw r19,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r19.u32);
	// addi r8,r8,29688
	ctx.r8.s64 = ctx.r8.s64 + 29688;
	// stw r26,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// addi r9,r9,29676
	ctx.r9.s64 = ctx.r9.s64 + 29676;
	// addi r10,r10,29664
	ctx.r10.s64 = ctx.r10.s64 + 29664;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r5,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r5.u32);
	// addi r11,r11,29652
	ctx.r11.s64 = ctx.r11.s64 + 29652;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// stw r27,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// stw r25,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r25.u32);
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// stw r5,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r5,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r30,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r5,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// addi r19,r19,29596
	ctx.r19.s64 = ctx.r19.s64 + 29596;
	// stw r28,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r20,r20,29588
	ctx.r20.s64 = ctx.r20.s64 + 29588;
	// stw r6,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addi r21,r21,29580
	ctx.r21.s64 = ctx.r21.s64 + 29580;
	// lwz r19,120(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r14,r18,29604
	ctx.r14.s64 = ctx.r18.s64 + 29604;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r25,r25,29532
	ctx.r25.s64 = ctx.r25.s64 + 29532;
	// stw r14,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r14.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lwz r21,124(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// addi r26,r26,29524
	ctx.r26.s64 = ctx.r26.s64 + 29524;
	// addi r29,r29,29476
	ctx.r29.s64 = ctx.r29.s64 + 29476;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r8,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lis r6,-32161
	ctx.r6.s64 = -2107703296;
	// lfs f27,1192(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f27.f64 = double(temp.f32);
	// lis r7,-32161
	ctx.r7.s64 = -2107703296;
	// lfs f24,1184(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f24.f64 = double(temp.f32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f17,1180(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1180);
	ctx.f17.f64 = double(temp.f32);
	// addi r22,r22,29572
	ctx.r22.s64 = ctx.r22.s64 + 29572;
	// lfs f22,1176(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1176);
	ctx.f22.f64 = double(temp.f32);
	// addi r23,r23,29564
	ctx.r23.s64 = ctx.r23.s64 + 29564;
	// lfs f19,680(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f19.f64 = double(temp.f32);
	// addi r24,r24,29552
	ctx.r24.s64 = ctx.r24.s64 + 29552;
	// lfs f28,512(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f28.f64 = double(temp.f32);
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r27,r27,29500
	ctx.r27.s64 = ctx.r27.s64 + 29500;
	// addi r28,r28,29484
	ctx.r28.s64 = ctx.r28.s64 + 29484;
	// lfs f26,508(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f26.f64 = double(temp.f32);
	// lfs f21,504(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f21.f64 = double(temp.f32);
	// lwz r18,156(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f20,160(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f20.f64 = double(temp.f32);
	// lwz r20,868(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 868);
	// lfs f25,112(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r14,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r14.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r14,120(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r26,112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,29468
	ctx.r30.s64 = ctx.r30.s64 + 29468;
	// stw r22,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r22.u32);
	// addi r3,r3,29460
	ctx.r3.s64 = ctx.r3.s64 + 29460;
	// stw r23,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// addi r4,r4,29452
	ctx.r4.s64 = ctx.r4.s64 + 29452;
	// stw r14,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r14.u32);
	// addi r5,r5,29432
	ctx.r5.s64 = ctx.r5.s64 + 29432;
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r6,-10712
	ctx.r6.s64 = ctx.r6.s64 + -10712;
	// stw r24,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// addi r7,r7,-10648
	ctx.r7.s64 = ctx.r7.s64 + -10648;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r8,r8,29416
	ctx.r8.s64 = ctx.r8.s64 + 29416;
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r14,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// lwz r14,124(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r14,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r14.u32);
	// lwz r14,100(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r14,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r9,29412
	ctx.r9.s64 = ctx.r9.s64 + 29412;
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r14.u32);
	// addi r10,r10,29408
	ctx.r10.s64 = ctx.r10.s64 + 29408;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r11,r11,29392
	ctx.r11.s64 = ctx.r11.s64 + 29392;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// lis r14,-32156
	ctx.r14.s64 = -2107375616;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// addi r15,r15,29636
	ctx.r15.s64 = ctx.r15.s64 + 29636;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r16,r16,29628
	ctx.r16.s64 = ctx.r16.s64 + 29628;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r17,r17,29612
	ctx.r17.s64 = ctx.r17.s64 + 29612;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82133398
	goto loc_82133398;
loc_82133390:
	// lwz r26,112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82133398:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,23452(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 23452);
	// bl 0x82110b08
	ctx.lr = 0x821333A4;
	sub_82110B08(ctx, base);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r23,108(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// beq 0x821333d0
	if (ctx.cr0.eq) goto loc_821333D0;
	// lis r27,-128
	ctx.r27.s64 = -8388608;
	// ori r27,r27,32896
	ctx.r27.u64 = ctx.r27.u64 | 32896;
loc_821333D0:
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82133564
	if (!ctx.cr6.eq) goto loc_82133564;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821333f0
	if (ctx.cr6.eq) goto loc_821333F0;
	// lis r27,-256
	ctx.r27.s64 = -16777216;
loc_821333F0:
	// lwz r11,23624(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23624);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// fmuls f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213344C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213347C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x82133494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821334AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,164(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 164));
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// std r11,384(r1)
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f13,384(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x821334E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213352C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-24321
	ctx.r11.s64 = -1593901056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133564:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133578
	if (ctx.cr6.eq) goto loc_82133578;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x8213357c
	goto loc_8213357C;
loc_82133578:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_8213357C:
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x821335d8
	if (!ctx.cr6.eq) goto loc_821335D8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821335A4;
	sub_82103650(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// beq cr6,0x821335cc
	if (ctx.cr6.eq) goto loc_821335CC;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_821335CC:
	// bl 0x82103650
	ctx.lr = 0x821335D0;
	sub_82103650(ctx, base);
	// lfs f0,616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_821335D8:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821335ec
	if (ctx.cr6.eq) goto loc_821335EC;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821335f0
	goto loc_821335F0;
loc_821335EC:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821335F0:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82133728
	if (!ctx.cr6.eq) goto loc_82133728;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133618;
	sub_82103650(ctx, base);
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82133630
	if (ctx.cr6.eq) goto loc_82133630;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82133630:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213364C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213367C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// bctrl 
	ctx.lr = 0x82133694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821336AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f0,616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821336D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821336F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f31,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
loc_82133728:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213373c
	if (ctx.cr6.eq) goto loc_8213373C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133740
	goto loc_82133740;
loc_8213373C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133740:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82133808
	if (!ctx.cr6.eq) goto loc_82133808;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133768;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82133790
	if (!ctx.cr6.eq) goto loc_82133790;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133790;
	sub_82103650(ctx, base);
loc_82133790:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x821337b8
	if (!ctx.cr6.eq) goto loc_821337B8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x821337B8;
	sub_82103650(ctx, base);
loc_821337B8:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x821337e0
	if (!ctx.cr6.eq) goto loc_821337E0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x821337E0;
	sub_82103650(ctx, base);
loc_821337E0:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x82133808
	if (!ctx.cr6.eq) goto loc_82133808;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133808;
	sub_82103650(ctx, base);
loc_82133808:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213381c
	if (ctx.cr6.eq) goto loc_8213381C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133820
	goto loc_82133820;
loc_8213381C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133820:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x82133864
	if (!ctx.cr6.eq) goto loc_82133864;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133848;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// bl 0x82103708
	ctx.lr = 0x82133864;
	sub_82103708(ctx, base);
loc_82133864:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133878
	if (ctx.cr6.eq) goto loc_82133878;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x8213387c
	goto loc_8213387C;
loc_82133878:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_8213387C:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x821338f0
	if (!ctx.cr6.eq) goto loc_821338F0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821338A4;
	sub_82103650(ctx, base);
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821338dc
	if (!ctx.cr6.eq) goto loc_821338DC;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bne cr6,0x821338dc
	if (!ctx.cr6.eq) goto loc_821338DC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1196(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1196);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82103650
	ctx.lr = 0x821338D8;
	sub_82103650(ctx, base);
	// b 0x821338f0
	goto loc_821338F0;
loc_821338DC:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// bl 0x82103708
	ctx.lr = 0x821338F0;
	sub_82103708(ctx, base);
loc_821338F0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133908
	goto loc_82133908;
loc_82133904:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133908:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82133948
	if (!ctx.cr6.eq) goto loc_82133948;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,352(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133930;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82103708
	ctx.lr = 0x82133948;
	sub_82103708(ctx, base);
loc_82133948:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213395c
	if (ctx.cr6.eq) goto loc_8213395C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133960
	goto loc_82133960;
loc_8213395C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133960:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x821339a0
	if (!ctx.cr6.eq) goto loc_821339A0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133988;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82103708
	ctx.lr = 0x821339A0;
	sub_82103708(ctx, base);
loc_821339A0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821339b4
	if (ctx.cr6.eq) goto loc_821339B4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821339b8
	goto loc_821339B8;
loc_821339B4:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821339B8:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x821339fc
	if (!ctx.cr6.eq) goto loc_821339FC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821339E0;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// bl 0x82103708
	ctx.lr = 0x821339FC;
	sub_82103708(ctx, base);
loc_821339FC:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133a10
	if (ctx.cr6.eq) goto loc_82133A10;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133a14
	goto loc_82133A14;
loc_82133A10:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133A14:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82133a58
	if (!ctx.cr6.eq) goto loc_82133A58;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133A3C;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// bl 0x82103708
	ctx.lr = 0x82133A58;
	sub_82103708(ctx, base);
loc_82133A58:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133a6c
	if (ctx.cr6.eq) goto loc_82133A6C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133a70
	goto loc_82133A70;
loc_82133A6C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133A70:
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x82133ac4
	if (!ctx.cr6.eq) goto loc_82133AC4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133A98;
	sub_82103650(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// lwz r3,196(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
loc_82133AC0:
	// bl 0x82103650
	ctx.lr = 0x82133AC4;
	sub_82103650(ctx, base);
loc_82133AC4:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133ad8
	if (ctx.cr6.eq) goto loc_82133AD8;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133adc
	goto loc_82133ADC;
loc_82133AD8:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133ADC:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82133b1c
	if (!ctx.cr6.eq) goto loc_82133B1C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,280(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133B04;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82103708
	ctx.lr = 0x82133B1C;
	sub_82103708(ctx, base);
loc_82133B1C:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133b30
	if (ctx.cr6.eq) goto loc_82133B30;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133b34
	goto loc_82133B34;
loc_82133B30:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133B34:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x82133bc0
	if (!ctx.cr6.eq) goto loc_82133BC0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133B5C;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82133b6c
	if (ctx.cr6.lt) goto loc_82133B6C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82133B6C:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x82133b78
	if (ctx.cr6.lt) goto loc_82133B78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133B78:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82133b84
	if (ctx.cr6.lt) goto loc_82133B84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133B84:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82133b90
	if (ctx.cr6.lt) goto loc_82133B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133B90:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,464(r1)
	REX_STORE_U64(ctx.r1.u32 + 464, ctx.r11.u64);
	// lfd f0,464(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x82133BC0;
	sub_82103708(ctx, base);
loc_82133BC0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133bd4
	if (ctx.cr6.eq) goto loc_82133BD4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133bd8
	goto loc_82133BD8;
loc_82133BD4:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133BD8:
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bne cr6,0x82133c64
	if (!ctx.cr6.eq) goto loc_82133C64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133C00;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82133c10
	if (ctx.cr6.lt) goto loc_82133C10;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82133C10:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x82133c1c
	if (ctx.cr6.lt) goto loc_82133C1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133C1C:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82133c28
	if (ctx.cr6.lt) goto loc_82133C28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133C28:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82133c34
	if (ctx.cr6.lt) goto loc_82133C34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133C34:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,400(r1)
	REX_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f0,400(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x82133C64;
	sub_82103708(ctx, base);
loc_82133C64:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133c78
	if (ctx.cr6.eq) goto loc_82133C78;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133c7c
	goto loc_82133C7C;
loc_82133C78:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133C7C:
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x82133d08
	if (!ctx.cr6.eq) goto loc_82133D08;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133CA4;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82133cb4
	if (ctx.cr6.lt) goto loc_82133CB4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82133CB4:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x82133cc0
	if (ctx.cr6.lt) goto loc_82133CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133CC0:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82133ccc
	if (ctx.cr6.lt) goto loc_82133CCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133CCC:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82133cd8
	if (ctx.cr6.lt) goto loc_82133CD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133CD8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,528(r1)
	REX_STORE_U64(ctx.r1.u32 + 528, ctx.r11.u64);
	// lfd f0,528(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 528);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x82133D08;
	sub_82103708(ctx, base);
loc_82133D08:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133d1c
	if (ctx.cr6.eq) goto loc_82133D1C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133d20
	goto loc_82133D20;
loc_82133D1C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133D20:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x82133d98
	if (!ctx.cr6.eq) goto loc_82133D98;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133D48;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82133d70
	if (!ctx.cr6.eq) goto loc_82133D70;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1200);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133D70;
	sub_82103650(ctx, base);
loc_82133D70:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x82133d98
	if (!ctx.cr6.eq) goto loc_82133D98;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,212(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133D98;
	sub_82103650(ctx, base);
loc_82133D98:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133dac
	if (ctx.cr6.eq) goto loc_82133DAC;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133db0
	goto loc_82133DB0;
loc_82133DAC:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133DB0:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x82133e3c
	if (!ctx.cr6.eq) goto loc_82133E3C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133DD8;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82133de8
	if (ctx.cr6.lt) goto loc_82133DE8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82133DE8:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x82133df4
	if (ctx.cr6.lt) goto loc_82133DF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133DF4:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82133e00
	if (ctx.cr6.lt) goto loc_82133E00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133E00:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82133e0c
	if (ctx.cr6.lt) goto loc_82133E0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82133E0C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,416(r1)
	REX_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f0,416(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x82133E3C;
	sub_82103708(ctx, base);
loc_82133E3C:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133e50
	if (ctx.cr6.eq) goto loc_82133E50;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133e54
	goto loc_82133E54;
loc_82133E50:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133E54:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82133f6c
	if (!ctx.cr6.eq) goto loc_82133F6C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133E7C;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82133ea4
	if (!ctx.cr6.eq) goto loc_82133EA4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1208);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133EA4;
	sub_82103650(ctx, base);
loc_82133EA4:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x82133ecc
	if (!ctx.cr6.eq) goto loc_82133ECC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1212);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,228(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133ECC;
	sub_82103650(ctx, base);
loc_82133ECC:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82133ef4
	if (!ctx.cr6.eq) goto loc_82133EF4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,312(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133EF4;
	sub_82103650(ctx, base);
loc_82133EF4:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x82133f1c
	if (!ctx.cr6.eq) goto loc_82133F1C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1208);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133F1C;
	sub_82103650(ctx, base);
loc_82133F1C:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bne cr6,0x82133f44
	if (!ctx.cr6.eq) goto loc_82133F44;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133F44;
	sub_82103650(ctx, base);
loc_82133F44:
	// cmpwi cr6,r23,5
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// bne cr6,0x82133f6c
	if (!ctx.cr6.eq) goto loc_82133F6C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82133F6C;
	sub_82103650(ctx, base);
loc_82133F6C:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133f80
	if (ctx.cr6.eq) goto loc_82133F80;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82133f84
	goto loc_82133F84;
loc_82133F80:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82133F84:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x8213409c
	if (!ctx.cr6.eq) goto loc_8213409C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,328(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82133FAC;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82133fd4
	if (!ctx.cr6.eq) goto loc_82133FD4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x82133FD4;
	sub_82103650(ctx, base);
loc_82133FD4:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x82133ffc
	if (!ctx.cr6.eq) goto loc_82133FFC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x82133FFC;
	sub_82103650(ctx, base);
loc_82133FFC:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82134024
	if (!ctx.cr6.eq) goto loc_82134024;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x82134024;
	sub_82103650(ctx, base);
loc_82134024:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x8213404c
	if (!ctx.cr6.eq) goto loc_8213404C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,344(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x8213404C;
	sub_82103650(ctx, base);
loc_8213404C:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bne cr6,0x82134074
	if (!ctx.cr6.eq) goto loc_82134074;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x82134074;
	sub_82103650(ctx, base);
loc_82134074:
	// cmpwi cr6,r23,5
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// bne cr6,0x8213409c
	if (!ctx.cr6.eq) goto loc_8213409C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82103650
	ctx.lr = 0x8213409C;
	sub_82103650(ctx, base);
loc_8213409C:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821340b0
	if (ctx.cr6.eq) goto loc_821340B0;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821340b4
	goto loc_821340B4;
loc_821340B0:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821340B4:
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x821341a4
	if (!ctx.cr6.eq) goto loc_821341A4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821340DC;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// bne cr6,0x82134104
	if (!ctx.cr6.eq) goto loc_82134104;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,360(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x82103650
	ctx.lr = 0x82134104;
	sub_82103650(ctx, base);
loc_82134104:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x8213412c
	if (!ctx.cr6.eq) goto loc_8213412C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x82103650
	ctx.lr = 0x8213412C;
	sub_82103650(ctx, base);
loc_8213412C:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82134154
	if (!ctx.cr6.eq) goto loc_82134154;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1232);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x82134154;
	sub_82103650(ctx, base);
loc_82134154:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8213417c
	if (!ctx.cr6.eq) goto loc_8213417C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1232);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x8213417C;
	sub_82103650(ctx, base);
loc_8213417C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x821341a4
	if (!ctx.cr6.eq) goto loc_821341A4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1232);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,356(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82103650
	ctx.lr = 0x821341A4;
	sub_82103650(ctx, base);
loc_821341A4:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821341b8
	if (ctx.cr6.eq) goto loc_821341B8;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821341bc
	goto loc_821341BC;
loc_821341B8:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821341BC:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82134218
	if (!ctx.cr6.eq) goto loc_82134218;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821341E4;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bne cr6,0x8213420c
	if (!ctx.cr6.eq) goto loc_8213420C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// b 0x82134214
	goto loc_82134214;
loc_8213420C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f17.f64;
loc_82134214:
	// bl 0x82103650
	ctx.lr = 0x82134218;
	sub_82103650(ctx, base);
loc_82134218:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213422c
	if (ctx.cr6.eq) goto loc_8213422C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134230
	goto loc_82134230;
loc_8213422C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134230:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x8213428c
	if (!ctx.cr6.eq) goto loc_8213428C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82134258;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bne cr6,0x82134280
	if (!ctx.cr6.eq) goto loc_82134280;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// b 0x82134288
	goto loc_82134288;
loc_82134280:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f17.f64;
loc_82134288:
	// bl 0x82103650
	ctx.lr = 0x8213428C;
	sub_82103650(ctx, base);
loc_8213428C:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821342a0
	if (ctx.cr6.eq) goto loc_821342A0;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821342a4
	goto loc_821342A4;
loc_821342A0:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821342A4:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x82134300
	if (!ctx.cr6.eq) goto loc_82134300;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821342CC;
	sub_82103650(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bne cr6,0x821342f4
	if (!ctx.cr6.eq) goto loc_821342F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// b 0x821342fc
	goto loc_821342FC;
loc_821342F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f17.f64;
loc_821342FC:
	// bl 0x82103650
	ctx.lr = 0x82134300;
	sub_82103650(ctx, base);
loc_82134300:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134314
	if (ctx.cr6.eq) goto loc_82134314;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134318
	goto loc_82134318;
loc_82134314:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134318:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x821343a4
	if (!ctx.cr6.eq) goto loc_821343A4;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82134340;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82134350
	if (ctx.cr6.lt) goto loc_82134350;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82134350:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x8213435c
	if (ctx.cr6.lt) goto loc_8213435C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8213435C:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82134368
	if (ctx.cr6.lt) goto loc_82134368;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82134368:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82134374
	if (ctx.cr6.lt) goto loc_82134374;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82134374:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,480(r1)
	REX_STORE_U64(ctx.r1.u32 + 480, ctx.r11.u64);
	// lfd f0,480(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x821343A4;
	sub_82103708(ctx, base);
loc_821343A4:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821343b8
	if (ctx.cr6.eq) goto loc_821343B8;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821343bc
	goto loc_821343BC;
loc_821343B8:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821343BC:
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bne cr6,0x821343fc
	if (!ctx.cr6.eq) goto loc_821343FC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821343E4;
	sub_82103650(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82103708
	ctx.lr = 0x821343FC;
	sub_82103708(ctx, base);
loc_821343FC:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134410
	if (ctx.cr6.eq) goto loc_82134410;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134414
	goto loc_82134414;
loc_82134410:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134414:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x821344a0
	if (!ctx.cr6.eq) goto loc_821344A0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x8213443C;
	sub_82103650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x8213444c
	if (ctx.cr6.lt) goto loc_8213444C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8213444C:
	// cmpwi cr6,r23,100
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 100, ctx.xer);
	// blt cr6,0x82134458
	if (ctx.cr6.lt) goto loc_82134458;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82134458:
	// cmpwi cr6,r23,1000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1000, ctx.xer);
	// blt cr6,0x82134464
	if (ctx.cr6.lt) goto loc_82134464;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82134464:
	// cmpwi cr6,r23,10000
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10000, ctx.xer);
	// blt cr6,0x82134470
	if (ctx.cr6.lt) goto loc_82134470;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82134470:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r23
	ctx.r3.s64 = ctx.r23.s32;
	// std r11,432(r1)
	REX_STORE_U64(ctx.r1.u32 + 432, ctx.r11.u64);
	// lfd f0,432(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// bl 0x82103708
	ctx.lr = 0x821344A0;
	sub_82103708(ctx, base);
loc_821344A0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821344b4
	if (ctx.cr6.eq) goto loc_821344B4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821344b8
	goto loc_821344B8;
loc_821344B4:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821344B8:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x821344e0
	if (!ctx.cr6.eq) goto loc_821344E0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,192(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821344E0;
	sub_82103650(ctx, base);
loc_821344E0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821344f4
	if (ctx.cr6.eq) goto loc_821344F4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821344f8
	goto loc_821344F8;
loc_821344F4:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821344F8:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x82134520
	if (!ctx.cr6.eq) goto loc_82134520;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82134520;
	sub_82103650(ctx, base);
loc_82134520:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134534
	if (ctx.cr6.eq) goto loc_82134534;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134538
	goto loc_82134538;
loc_82134534:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134538:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bne cr6,0x82134560
	if (!ctx.cr6.eq) goto loc_82134560;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x82134560;
	sub_82103650(ctx, base);
loc_82134560:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134574
	if (ctx.cr6.eq) goto loc_82134574;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134578
	goto loc_82134578;
loc_82134574:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134578:
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x821345a0
	if (!ctx.cr6.eq) goto loc_821345A0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821345A0;
	sub_82103650(ctx, base);
loc_821345A0:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821345b4
	if (ctx.cr6.eq) goto loc_821345B4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821345b8
	goto loc_821345B8;
loc_821345B4:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821345B8:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x821345e0
	if (!ctx.cr6.eq) goto loc_821345E0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82103650
	ctx.lr = 0x821345E0;
	sub_82103650(ctx, base);
loc_821345E0:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82134c14
	if (!ctx.cr6.eq) goto loc_82134C14;
	// lwz r11,23624(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23624);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,512(r1)
	REX_STORE_U64(ctx.r1.u32 + 512, ctx.r11.u64);
	// lfd f0,512(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 512);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// bctrl 
	ctx.lr = 0x82134620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,448(r1)
	REX_STORE_U64(ctx.r1.u32 + 448, ctx.r11.u64);
	// lfd f0,448(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
loc_82134658:
	// lwz r11,23624(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23624);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// mulli r11,r11,90
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(90));
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,496(r1)
	REX_STORE_U64(ctx.r1.u32 + 496, ctx.r11.u64);
	// lfd f0,496(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 496);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x821346A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821346B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r28,8
	ctx.r28.s64 = 8;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r26,r27,255
	ctx.xer.ca = ctx.r27.u32 <= 255;
	ctx.r26.u64 = static_cast<uint64_t>(255) - ctx.r27.u64;
loc_821346D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821346E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r25,0(r18)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// bctrl 
	ctx.lr = 0x82134768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// fmr f3,f15
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f15.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821347A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821347C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// divw r10,r27,r30
	ctx.r10.u64 = uint32_t((ctx.r30.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r27.s32 / ctx.r30.s32 : 0);
	// lfs f0,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r27,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// std r10,376(r1)
	REX_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f13,376(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// divw r10,r26,r30
	ctx.r10.u64 = uint32_t((ctx.r30.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r26.s32 / ctx.r30.s32 : 0);
	// rotlwi r11,r26,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// oris r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 16711680;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ori r10,r10,8320
	ctx.r10.u64 = ctx.r10.u64 | 8320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213488C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x821346d0
	if (!ctx.cr0.eq) goto loc_821346D0;
	// addi r24,r24,256
	ctx.r24.s64 = ctx.r24.s64 + 256;
	// cmpwi cr6,r24,1024
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1024, ctx.xer);
	// blt cr6,0x82134658
	if (ctx.cr6.lt) goto loc_82134658;
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821348b8
	if (ctx.cr6.eq) goto loc_821348B8;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x821348bc
	goto loc_821348BC;
loc_821348B8:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_821348BC:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82134b94
	if (!ctx.cr6.eq) goto loc_82134B94;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x821348dc
	if (ctx.cr6.eq) goto loc_821348DC;
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_821348DC:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821348F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bctrl 
	ctx.lr = 0x82134940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f3,f15
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f15.f64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,392(r1)
	REX_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f0,392(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821349BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821349D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821349E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bctrl 
	ctx.lr = 0x82134A80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f3,f15
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f15.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,23624(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 23624);
	// lis r30,-32156
	ctx.r30.s64 = -2107375616;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,408(r1)
	REX_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// lfd f0,408(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// bctrl 
	ctx.lr = 0x82134B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,-30012(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r11,r11,48
	ctx.xer.ca = ctx.r11.u32 <= 48;
	ctx.r11.u64 = static_cast<uint64_t>(48) - ctx.r11.u64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82134B94:
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82134c14
	if (ctx.cr0.eq) goto loc_82134C14;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82134c14
	if (!ctx.cr0.eq) goto loc_82134C14;
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82134bc4
	if (!ctx.cr6.gt) goto loc_82134BC4;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r11.u32);
loc_82134BC4:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 40);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// stw r10,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134bf0
	if (ctx.cr6.eq) goto loc_82134BF0;
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
	// bgt 0x82134bf0
	if (ctx.cr0.gt) goto loc_82134BF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
loc_82134BF0:
	// lwz r11,52(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134c78
	if (ctx.cr6.eq) goto loc_82134C78;
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r22)
	REX_STORE_U32(ctx.r22.u32 + 52, ctx.r11.u32);
	// bgt 0x82134c78
	if (ctx.cr0.gt) goto loc_82134C78;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r22)
	REX_STORE_U32(ctx.r22.u32 + 52, ctx.r11.u32);
	// b 0x82134c78
	goto loc_82134C78;
loc_82134C14:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134c3c
	if (ctx.cr6.eq) goto loc_82134C3C;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r11.u32);
	// bgt 0x82134c3c
	if (ctx.cr0.gt) goto loc_82134C3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r10.u32);
	// stw r10,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r10.u32);
	// b 0x82134c40
	goto loc_82134C40;
loc_82134C3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82134C40:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134c5c
	if (ctx.cr6.eq) goto loc_82134C5C;
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
	// bgt 0x82134c5c
	if (ctx.cr0.gt) goto loc_82134C5C;
	// stw r10,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r10.u32);
loc_82134C5C:
	// lwz r11,52(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134c78
	if (ctx.cr6.eq) goto loc_82134C78;
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r22)
	REX_STORE_U32(ctx.r22.u32 + 52, ctx.r11.u32);
	// bgt 0x82134c78
	if (ctx.cr0.gt) goto loc_82134C78;
	// stw r10,52(r22)
	REX_STORE_U32(ctx.r22.u32 + 52, ctx.r10.u32);
loc_82134C78:
	// lwz r26,44(r22)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// lis r28,-32156
	ctx.r28.s64 = -2107375616;
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 40);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,248(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r11,r11,3,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x70;
	// std r26,424(r1)
	REX_STORE_U64(ctx.r1.u32 + 424, ctx.r26.u64);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfd f13,424(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f16,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f16.f64, ctx.f0.f64)));
	// bctrl 
	ctx.lr = 0x82134CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// std r11,440(r1)
	REX_STORE_U64(ctx.r1.u32 + 440, ctx.r11.u64);
	// lfd f13,440(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f13,f16
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f16.f64));
	// bctrl 
	ctx.lr = 0x82134D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// li r25,64
	ctx.r25.s64 = 64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82134d4c
	if (ctx.cr6.eq) goto loc_82134D4C;
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134d50
	goto loc_82134D50;
loc_82134D4C:
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134D50:
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bne cr6,0x82134d5c
	if (!ctx.cr6.eq) goto loc_82134D5C;
	// li r25,88
	ctx.r25.s64 = 88;
loc_82134D5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134d6c
	if (ctx.cr6.eq) goto loc_82134D6C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// b 0x82134d70
	goto loc_82134D70;
loc_82134D6C:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_82134D70:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82134d7c
	if (!ctx.cr6.eq) goto loc_82134D7C;
	// li r25,88
	ctx.r25.s64 = 88;
loc_82134D7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,0(r18)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// bctrl 
	ctx.lr = 0x82134DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// clrldi r9,r23,32
	ctx.r9.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// fmr f3,f15
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f15.f64;
	// std r10,456(r1)
	REX_STORE_U64(ctx.r1.u32 + 456, ctx.r10.u64);
	// clrldi r10,r24,32
	ctx.r10.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// std r9,472(r1)
	REX_STORE_U64(ctx.r1.u32 + 472, ctx.r9.u64);
	// lfd f13,472(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 472);
	// std r10,488(r1)
	REX_STORE_U64(ctx.r1.u32 + 488, ctx.r10.u64);
	// lfd f12,488(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 488);
	// lfd f0,456(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// frsp f14,f0
	ctx.f14.f64 = double(float(ctx.f0.f64));
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,504(r1)
	REX_STORE_U64(ctx.r1.u32 + 504, ctx.r11.u64);
	// lfd f11,504(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 504);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// frsp f29,f12
	ctx.f29.f64 = double(float(ctx.f12.f64));
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fsubs f0,f24,f29
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f29.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f14.f64));
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x82134E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134EA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r26,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFF000000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// oris r27,r11,255
	ctx.r27.u64 = ctx.r11.u64 | 16711680;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ori r27,r27,65535
	ctx.r27.u64 = ctx.r27.u64 | 65535;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134EC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lfs f2,1244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1244);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 52);
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// std r11,520(r1)
	REX_STORE_U64(ctx.r1.u32 + 520, ctx.r11.u64);
	// lfd f0,520(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r26,0(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f0,f16
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f16.f64));
	// bctrl 
	ctx.lr = 0x82134F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r3,-30012(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r28,0(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// bctrl 
	ctx.lr = 0x82134FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r26,536(r1)
	REX_STORE_U64(ctx.r1.u32 + 536, ctx.r26.u64);
	// lfd f0,536(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 536);
	// lfs f15,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f15.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f2,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// fadds f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f14.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// bctrl 
	ctx.lr = 0x8213502C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f2,1244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1244);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821350A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821350B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// fadds f31,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// stw r18,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r18.u32);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82133390
	if (ctx.cr6.lt) goto loc_82133390;
	// lwz r27,272(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
loc_821350D8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,44(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821350F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213512C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213515C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,23460(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 23460);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// fsubs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// lfs f0,872(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,576(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,704(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f1,f11,f0,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f30.f64)));
	// fmadds f31,f11,f13,f12
	ctx.f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bctrl 
	ctx.lr = 0x821351AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1248);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821351CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821351E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821351F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821351FC:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8220451c
	ctx.lr = 0x82135208;
	__restfpr_14(ctx, base);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218EFCC) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218EFEC) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82190D38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821D2680) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x821D2688;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d26dc
	if (!ctx.cr6.eq) goto loc_821D26DC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d26cc
	if (ctx.cr0.eq) goto loc_821D26CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23636
	ctx.r4.s64 = ctx.r11.s64 + 23636;
	// b 0x821d26d4
	goto loc_821D26D4;
loc_821D26CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23644
	ctx.r4.s64 = ctx.r11.s64 + 23644;
loc_821D26D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D26DC;
	sub_821D44B0(ctx, base);
loc_821D26DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x821d2f20
	if (!ctx.cr6.eq) goto loc_821D2F20;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821d2f3c
	if (ctx.cr6.eq) goto loc_821D2F3C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821d2728
	if (ctx.cr6.eq) goto loc_821D2728;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x821d271c
	if (!ctx.cr6.gt) goto loc_821D271C;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// ble cr6,0x821d2728
	if (!ctx.cr6.gt) goto loc_821D2728;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x821d271c
	if (!ctx.cr6.gt) goto loc_821D271C;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// ble cr6,0x821d2728
	if (!ctx.cr6.gt) goto loc_821D2728;
loc_821D271C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23160
	ctx.r4.s64 = ctx.r11.s64 + 23160;
	// b 0x821d2f30
	goto loc_821D2F30;
loc_821D2728:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// addi r4,r11,22832
	ctx.r4.s64 = ctx.r11.s64 + 22832;
	// bgt cr6,0x821d27a4
	if (ctx.cr6.gt) goto loc_821D27A4;
	// beq cr6,0x821d2798
	if (ctx.cr6.eq) goto loc_821D2798;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x821d2780
	if (ctx.cr6.eq) goto loc_821D2780;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x821d2774
	if (ctx.cr6.eq) goto loc_821D2774;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x821d2768
	if (ctx.cr6.eq) goto loc_821D2768;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x821d27dc
	if (!ctx.cr6.eq) goto loc_821D27DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22848
	ctx.r4.s64 = ctx.r11.s64 + 22848;
	// b 0x821d27dc
	goto loc_821D27DC;
loc_821D2768:
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,-15568
	ctx.r10.s64 = ctx.r10.s64 + -15568;
	// b 0x821d2788
	goto loc_821D2788;
loc_821D2774:
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,-15584
	ctx.r10.s64 = ctx.r10.s64 + -15584;
	// b 0x821d2788
	goto loc_821D2788;
loc_821D2780:
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,-15600
	ctx.r10.s64 = ctx.r10.s64 + -15600;
loc_821D2788:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,20,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821d27dc
	goto loc_821D27DC;
loc_821D2798:
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,-15552
	ctx.r10.s64 = ctx.r10.s64 + -15552;
	// b 0x821d2788
	goto loc_821D2788;
loc_821D27A4:
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// beq cr6,0x821d27d4
	if (ctx.cr6.eq) goto loc_821D27D4;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// beq cr6,0x821d27c8
	if (ctx.cr6.eq) goto loc_821D27C8;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// bne cr6,0x821d27dc
	if (!ctx.cr6.eq) goto loc_821D27DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22892
	ctx.r4.s64 = ctx.r11.s64 + 22892;
	// b 0x821d27dc
	goto loc_821D27DC;
loc_821D27C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22876
	ctx.r4.s64 = ctx.r11.s64 + 22876;
	// b 0x821d27dc
	goto loc_821D27DC;
loc_821D27D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22864
	ctx.r4.s64 = ctx.r11.s64 + 22864;
loc_821D27DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4610
	ctx.lr = 0x821D27E8;
	sub_821D4610(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22316
	ctx.r4.s64 = ctx.r11.s64 + 22316;
	// bl 0x821d44b0
	ctx.lr = 0x821D27F8;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r11,22312
	ctx.r30.s64 = ctx.r11.s64 + 22312;
	// addi r28,r10,16536
	ctx.r28.s64 = ctx.r10.s64 + 16536;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r27,r9,22384
	ctx.r27.s64 = ctx.r9.s64 + 22384;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x821d2904
	if (ctx.cr6.gt) goto loc_821D2904;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821d283c
	if (ctx.cr0.eq) goto loc_821D283C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22508
	ctx.r4.s64 = ctx.r11.s64 + 22508;
	// b 0x821d2844
	goto loc_821D2844;
loc_821D283C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22520
	ctx.r4.s64 = ctx.r11.s64 + 22520;
loc_821D2844:
	// bl 0x821d44b0
	ctx.lr = 0x821D2848;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d2878
	if (!ctx.cr0.eq) goto loc_821D2878;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x821d2878
	if (!ctx.cr6.eq) goto loc_821D2878;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x821d2878
	if (!ctx.cr6.eq) goto loc_821D2878;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x821d28f4
	if (ctx.cr6.eq) goto loc_821D28F4;
loc_821D2878:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D2884;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D28A0;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D28BC;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D28D8;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D28F4;
	sub_821D44B0(ctx, base);
loc_821D28F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14232
	ctx.r4.s64 = ctx.r11.s64 + 14232;
	// bl 0x821d44b0
	ctx.lr = 0x821D2904;
	sub_821D44B0(ctx, base);
loc_821D2904:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1920
	ctx.lr = 0x821D2940;
	sub_821D1920(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D294C;
	sub_821D44B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821d29ac
	if (ctx.cr6.eq) goto loc_821D29AC;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// beq cr6,0x821d29f4
	if (ctx.cr6.eq) goto loc_821D29F4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x821d2a18
	if (ctx.cr6.eq) goto loc_821D2A18;
loc_821D2980:
	// bl 0x821d44b0
	ctx.lr = 0x821D2984;
	sub_821D44B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D29A0;
	sub_821D44B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// b 0x821d2a08
	goto loc_821D2A08;
loc_821D29AC:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821d2a04
	if (ctx.cr6.lt) goto loc_821D2A04;
	// beq cr6,0x821d29e0
	if (ctx.cr6.eq) goto loc_821D29E0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x821d2a1c
	if (!ctx.cr6.lt) goto loc_821D2A1C;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x821d2980
	goto loc_821D2980;
loc_821D29E0:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_821D29F4:
	// bl 0x821d44b0
	ctx.lr = 0x821D29F8;
	sub_821D44B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// b 0x821d2a08
	goto loc_821D2A08;
loc_821D2A04:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
loc_821D2A08:
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_821D2A18:
	// bl 0x821d44b0
	ctx.lr = 0x821D2A1C;
	sub_821D44B0(ctx, base);
loc_821D2A1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x821d2a40
	if (ctx.cr6.gt) goto loc_821D2A40;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// addi r4,r10,22908
	ctx.r4.s64 = ctx.r10.s64 + 22908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D2A40;
	sub_821D44B0(ctx, base);
loc_821D2A40:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,22916
	ctx.r4.s64 = ctx.r10.s64 + 22916;
	// rlwinm r5,r11,13,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2618
	ctx.lr = 0x821D2A5C;
	sub_821D2618(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,22560
	ctx.r27.s64 = ctx.r11.s64 + 22560;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d2a94
	if (ctx.cr0.eq) goto loc_821D2A94;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,22932
	ctx.r4.s64 = ctx.r10.s64 + 22932;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2618
	ctx.lr = 0x821D2A94;
	sub_821D2618(ctx, base);
loc_821D2A94:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,22536
	ctx.r30.s64 = ctx.r11.s64 + 22536;
	// lbzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2af0
	if (ctx.cr0.eq) goto loc_821D2AF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// bne 0x821d2ad0
	if (!ctx.cr0.eq) goto loc_821D2AD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d2af0
	if (ctx.cr6.eq) goto loc_821D2AF0;
loc_821D2AD0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,400
	ctx.r10.s64 = ctx.r28.s64 + 400;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,22960
	ctx.r5.s64 = ctx.r9.s64 + 22960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2AF0;
	sub_821D44B0(ctx, base);
loc_821D2AF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2b44
	if (ctx.cr0.eq) goto loc_821D2B44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// bne 0x821d2b24
	if (!ctx.cr0.eq) goto loc_821D2B24;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d2b44
	if (ctx.cr6.eq) goto loc_821D2B44;
loc_821D2B24:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,416
	ctx.r10.s64 = ctx.r28.s64 + 416;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,22972
	ctx.r5.s64 = ctx.r9.s64 + 22972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2B44;
	sub_821D44B0(ctx, base);
loc_821D2B44:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2b98
	if (ctx.cr0.eq) goto loc_821D2B98;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x821d2b78
	if (!ctx.cr0.eq) goto loc_821D2B78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d2b98
	if (ctx.cr6.eq) goto loc_821D2B98;
loc_821D2B78:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,432
	ctx.r10.s64 = ctx.r28.s64 + 432;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,22984
	ctx.r5.s64 = ctx.r9.s64 + 22984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2B98;
	sub_821D44B0(ctx, base);
loc_821D2B98:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2bec
	if (ctx.cr0.eq) goto loc_821D2BEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7;
	// bne 0x821d2bcc
	if (!ctx.cr0.eq) goto loc_821D2BCC;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821d2bec
	if (ctx.cr6.eq) goto loc_821D2BEC;
loc_821D2BCC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,448
	ctx.r10.s64 = ctx.r28.s64 + 448;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,22996
	ctx.r5.s64 = ctx.r9.s64 + 22996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2BEC;
	sub_821D44B0(ctx, base);
loc_821D2BEC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x821d2c50
	if (ctx.cr6.lt) goto loc_821D2C50;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2c50
	if (ctx.cr0.eq) goto loc_821D2C50;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x821d2c30
	if (!ctx.cr0.eq) goto loc_821D2C30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d2c50
	if (ctx.cr6.eq) goto loc_821D2C50;
loc_821D2C30:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,480
	ctx.r10.s64 = ctx.r28.s64 + 480;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,23008
	ctx.r5.s64 = ctx.r9.s64 + 23008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2C50;
	sub_821D44B0(ctx, base);
loc_821D2C50:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x821d2cb4
	if (ctx.cr6.lt) goto loc_821D2CB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2cb4
	if (ctx.cr0.eq) goto loc_821D2CB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3;
	// bne 0x821d2c94
	if (!ctx.cr0.eq) goto loc_821D2C94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d2cb4
	if (ctx.cr6.eq) goto loc_821D2CB4;
loc_821D2C94:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,496
	ctx.r10.s64 = ctx.r28.s64 + 496;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,23024
	ctx.r5.s64 = ctx.r9.s64 + 23024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2CB4;
	sub_821D44B0(ctx, base);
loc_821D2CB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2ce8
	if (ctx.cr0.eq) goto loc_821D2CE8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,23040
	ctx.r4.s64 = ctx.r10.s64 + 23040;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2618
	ctx.lr = 0x821D2CE8;
	sub_821D2618(ctx, base);
loc_821D2CE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2d1c
	if (ctx.cr0.eq) goto loc_821D2D1C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,23056
	ctx.r4.s64 = ctx.r10.s64 + 23056;
	// rlwinm r5,r11,3,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2618
	ctx.lr = 0x821D2D1C;
	sub_821D2618(ctx, base);
loc_821D2D1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2d4c
	if (ctx.cr0.eq) goto loc_821D2D4C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,23072
	ctx.r4.s64 = ctx.r10.s64 + 23072;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2618
	ctx.lr = 0x821D2D4C;
	sub_821D2618(ctx, base);
loc_821D2D4C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,1840
	ctx.r30.s64 = ctx.r11.s64 + 1840;
	// lbzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2dc4
	if (ctx.cr0.eq) goto loc_821D2DC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d2d84
	if (!ctx.cr0.eq) goto loc_821D2D84;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2dc4
	if (ctx.cr0.eq) goto loc_821D2DC4;
loc_821D2D84:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f0,308(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// addi r4,r10,23096
	ctx.r4.s64 = ctx.r10.s64 + 23096;
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2DC4;
	sub_821D44B0(ctx, base);
loc_821D2DC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2e34
	if (ctx.cr0.eq) goto loc_821D2E34;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d2df8
	if (!ctx.cr0.eq) goto loc_821D2DF8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2e34
	if (ctx.cr0.eq) goto loc_821D2E34;
loc_821D2DF8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r4,r10,23112
	ctx.r4.s64 = ctx.r10.s64 + 23112;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2E34;
	sub_821D44B0(ctx, base);
loc_821D2E34:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// blt cr6,0x821d2ea8
	if (ctx.cr6.lt) goto loc_821D2EA8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d2ea8
	if (ctx.cr0.eq) goto loc_821D2EA8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d2e70
	if (!ctx.cr0.eq) goto loc_821D2E70;
	// rlwinm. r10,r11,0,6,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d2ea8
	if (ctx.cr0.eq) goto loc_821D2EA8;
loc_821D2E70:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,23128
	ctx.r4.s64 = ctx.r10.s64 + 23128;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2EA8;
	sub_821D44B0(ctx, base);
loc_821D2EA8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x821d346c
	if (ctx.cr6.lt) goto loc_821D346C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d346c
	if (ctx.cr0.eq) goto loc_821D346C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d2ee4
	if (!ctx.cr0.eq) goto loc_821D2EE4;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d346c
	if (ctx.cr0.eq) goto loc_821D346C;
loc_821D2EE4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,23144
	ctx.r4.s64 = ctx.r10.s64 + 23144;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821d44b0
	ctx.lr = 0x821D2F1C;
	sub_821D44B0(ctx, base);
	// b 0x821d346c
	goto loc_821D346C;
loc_821D2F20:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821d2f3c
	if (ctx.cr6.eq) goto loc_821D2F3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22800
	ctx.r4.s64 = ctx.r11.s64 + 22800;
loc_821D2F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D2F38;
	sub_821D44B0(ctx, base);
	// b 0x821d346c
	goto loc_821D346C;
loc_821D2F3C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bne 0x821d2f98
	if (!ctx.cr0.eq) goto loc_821D2F98;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d2f98
	if (!ctx.cr0.eq) goto loc_821D2F98;
	// lwz r11,8224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2f98
	if (ctx.cr6.eq) goto loc_821D2F98;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,8228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8228);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x821D2F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d2f98
	if (!ctx.cr0.eq) goto loc_821D2F98;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821D2F98:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x821d2fac
	if (!ctx.cr6.eq) goto loc_821D2FAC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x821d2fb0
	if (ctx.cr0.eq) goto loc_821D2FB0;
loc_821D2FAC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821D2FB0:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821d2fc8
	if (ctx.cr6.eq) goto loc_821D2FC8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22588
	ctx.r4.s64 = ctx.r11.s64 + 22588;
	// b 0x821d2fe4
	goto loc_821D2FE4;
loc_821D2FC8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d2fdc
	if (ctx.cr0.eq) goto loc_821D2FDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22600
	ctx.r4.s64 = ctx.r11.s64 + 22600;
	// b 0x821d2fe4
	goto loc_821D2FE4;
loc_821D2FDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22608
	ctx.r4.s64 = ctx.r11.s64 + 22608;
loc_821D2FE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4610
	ctx.lr = 0x821D2FF0;
	sub_821D4610(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22316
	ctx.r4.s64 = ctx.r11.s64 + 22316;
	// bl 0x821d44b0
	ctx.lr = 0x821D3000;
	sub_821D44B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x821d3020
	if (ctx.cr0.eq) goto loc_821D3020;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22508
	ctx.r4.s64 = ctx.r11.s64 + 22508;
	// b 0x821d3028
	goto loc_821D3028;
loc_821D3020:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22520
	ctx.r4.s64 = ctx.r11.s64 + 22520;
loc_821D3028:
	// bl 0x821d44b0
	ctx.lr = 0x821D302C;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,16536
	ctx.r28.s64 = ctx.r10.s64 + 16536;
	// bne 0x821d3064
	if (!ctx.cr0.eq) goto loc_821D3064;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x821d3064
	if (!ctx.cr6.eq) goto loc_821D3064;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x821d3064
	if (!ctx.cr6.eq) goto loc_821D3064;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x821d30ec
	if (ctx.cr6.eq) goto loc_821D30EC;
loc_821D3064:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22384
	ctx.r4.s64 = ctx.r11.s64 + 22384;
	// bl 0x821d44b0
	ctx.lr = 0x821D3074;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,22312
	ctx.r24.s64 = ctx.r11.s64 + 22312;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D3098;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D30B4;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D30D0;
	sub_821D44B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D30EC;
	sub_821D44B0(ctx, base);
loc_821D30EC:
	// clrlwi. r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x821d30fc
	if (!ctx.cr0.eq) goto loc_821D30FC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3168
	if (ctx.cr0.eq) goto loc_821D3168;
loc_821D30FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14232
	ctx.r4.s64 = ctx.r11.s64 + 14232;
	// bl 0x821d44b0
	ctx.lr = 0x821D310C;
	sub_821D44B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x821d1920
	ctx.lr = 0x821D3148;
	sub_821D1920(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22620
	ctx.r4.s64 = ctx.r11.s64 + 22620;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d44b0
	ctx.lr = 0x821D3168;
	sub_821D44B0(ctx, base);
loc_821D3168:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821d3198
	if (ctx.cr6.eq) goto loc_821D3198;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.u64 = static_cast<uint64_t>(95) - ctx.r9.u64;
	// addi r4,r10,22624
	ctx.r4.s64 = ctx.r10.s64 + 22624;
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D3198;
	sub_821D44B0(ctx, base);
loc_821D3198:
	// clrlwi. r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x821d31e0
	if (ctx.cr0.eq) goto loc_821D31E0;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r28,800
	ctx.r10.s64 = ctx.r28.s64 + 800;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,22632
	ctx.r4.s64 = ctx.r9.s64 + 22632;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D31C4;
	sub_821D44B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d31e0
	if (ctx.cr6.eq) goto loc_821D31E0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-6884
	ctx.r4.s64 = ctx.r11.s64 + -6884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D31E0;
	sub_821D44B0(ctx, base);
loc_821D31E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r30,r11,22544
	ctx.r30.s64 = ctx.r11.s64 + 22544;
	// addi r27,r10,22552
	ctx.r27.s64 = ctx.r10.s64 + 22552;
	// bne cr6,0x821d3278
	if (!ctx.cr6.eq) goto loc_821D3278;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d320c
	if (!ctx.cr0.eq) goto loc_821D320C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x821d3234
	if (!ctx.cr6.eq) goto loc_821D3234;
loc_821D320C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3214;
	sub_821D25B0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x821d3224
	if (ctx.cr6.eq) goto loc_821D3224;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_821D3224:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22640
	ctx.r4.s64 = ctx.r11.s64 + 22640;
	// bl 0x821d44b0
	ctx.lr = 0x821D3234;
	sub_821D44B0(ctx, base);
loc_821D3234:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d324c
	if (!ctx.cr0.eq) goto loc_821D324C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3278
	if (ctx.cr0.eq) goto loc_821D3278;
loc_821D324C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3254;
	sub_821D25B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3268
	if (!ctx.cr0.eq) goto loc_821D3268;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_821D3268:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22660
	ctx.r4.s64 = ctx.r11.s64 + 22660;
	// bl 0x821d44b0
	ctx.lr = 0x821D3278;
	sub_821D44B0(ctx, base);
loc_821D3278:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3290
	if (!ctx.cr0.eq) goto loc_821D3290;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d32b4
	if (ctx.cr0.eq) goto loc_821D32B4;
loc_821D3290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3298;
	sub_821D25B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22676
	ctx.r4.s64 = ctx.r11.s64 + 22676;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 26;
	// bl 0x821d44b0
	ctx.lr = 0x821D32B4;
	sub_821D44B0(ctx, base);
loc_821D32B4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821d346c
	if (!ctx.cr6.eq) goto loc_821D346C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// bl 0x821d45b8
	ctx.lr = 0x821D32CC;
	sub_821D45B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d32e4
	if (!ctx.cr0.eq) goto loc_821D32E4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,1,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3308
	if (ctx.cr0.eq) goto loc_821D3308;
loc_821D32E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D32EC;
	sub_821D25B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22692
	ctx.r4.s64 = ctx.r11.s64 + 22692;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// bl 0x821d44b0
	ctx.lr = 0x821D3308;
	sub_821D44B0(ctx, base);
loc_821D3308:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3320
	if (!ctx.cr0.eq) goto loc_821D3320;
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3348
	if (ctx.cr0.eq) goto loc_821D3348;
loc_821D3320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3328;
	sub_821D25B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r28,528
	ctx.r11.s64 = ctx.r28.s64 + 528;
	// addi r4,r10,22704
	ctx.r4.s64 = ctx.r10.s64 + 22704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821d44b0
	ctx.lr = 0x821D3348;
	sub_821D44B0(ctx, base);
loc_821D3348:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821d3384
	if (ctx.cr6.eq) goto loc_821D3384;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3368
	if (!ctx.cr0.eq) goto loc_821D3368;
	// lbz r11,11(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d3384
	if (ctx.cr0.eq) goto loc_821D3384;
loc_821D3368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3370;
	sub_821D25B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,11(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 11);
	// addi r4,r11,22720
	ctx.r4.s64 = ctx.r11.s64 + 22720;
	// bl 0x821d44b0
	ctx.lr = 0x821D3384;
	sub_821D44B0(ctx, base);
loc_821D3384:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d339c
	if (!ctx.cr0.eq) goto loc_821D339C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d33c8
	if (ctx.cr0.eq) goto loc_821D33C8;
loc_821D339C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D33A4;
	sub_821D25B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d33b8
	if (!ctx.cr0.eq) goto loc_821D33B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_821D33B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22732
	ctx.r4.s64 = ctx.r11.s64 + 22732;
	// bl 0x821d44b0
	ctx.lr = 0x821D33C8;
	sub_821D44B0(ctx, base);
loc_821D33C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d33e0
	if (!ctx.cr0.eq) goto loc_821D33E0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3418
	if (ctx.cr0.eq) goto loc_821D3418;
loc_821D33E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D33E8;
	sub_821D25B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3400
	if (ctx.cr0.eq) goto loc_821D3400;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,22744
	ctx.r5.s64 = ctx.r11.s64 + 22744;
	// b 0x821d3408
	goto loc_821D3408;
loc_821D3400:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,22752
	ctx.r5.s64 = ctx.r11.s64 + 22752;
loc_821D3408:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22764
	ctx.r4.s64 = ctx.r11.s64 + 22764;
	// bl 0x821d44b0
	ctx.lr = 0x821D3418;
	sub_821D44B0(ctx, base);
loc_821D3418:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821d345c
	if (ctx.cr6.eq) goto loc_821D345C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3438
	if (!ctx.cr0.eq) goto loc_821D3438;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d345c
	if (ctx.cr0.eq) goto loc_821D345C;
loc_821D3438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25b0
	ctx.lr = 0x821D3440;
	sub_821D25B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22780
	ctx.r4.s64 = ctx.r11.s64 + 22780;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x821d44b0
	ctx.lr = 0x821D345C;
	sub_821D44B0(ctx, base);
loc_821D345C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23676
	ctx.r4.s64 = ctx.r11.s64 + 23676;
	// bl 0x821d45b8
	ctx.lr = 0x821D346C;
	sub_821D45B8(ctx, base);
loc_821D346C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F1844) {
	REX_FUNC_PROLOGUE();
	// li r11,16800
	ctx.r11.s64 = 16800;
	// b 0x821f19c4
	goto loc_821F19C4;
loc_821F19C4:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F1914) {
	REX_FUNC_PROLOGUE();
	// li r11,27600
	ctx.r11.s64 = 27600;
	// b 0x821f19c4
	goto loc_821F19C4;
loc_821F19C4:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208E68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-17424(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + -17424);
	// lwz r16,24376(r14)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + 24376);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82208d80
	ctx.lr = 0x82208E94;
	sub_82208D80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208ef4
	if (ctx.cr6.eq) goto loc_82208EF4;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r9,r11,14432
	ctx.r9.s64 = ctx.r11.s64 + 14432;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82208EB4:
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208ee4
	if (ctx.cr6.eq) goto loc_82208EE4;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82208ed8
	if (ctx.cr6.eq) goto loc_82208ED8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82208eb4
	goto loc_82208EB4;
loc_82208ED8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82205500
	ctx.lr = 0x82208EE4;
	sub_82205500(ctx, base);
loc_82208EE4:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82205500
	ctx.lr = 0x82208EEC;
	sub_82205500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82208EF4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82208f18
	ctx.lr = 0x82208F00;
	sub_82208F18(ctx, base);
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
}

DEFINE_REX_FUNC(sub_82219EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x82219EE8;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221a030
	if (ctx.cr0.eq) goto loc_8221A030;
loc_82219F20:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x82219f40
	goto loc_82219F40;
loc_82219F2C:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82219f48
	if (ctx.cr6.eq) goto loc_82219F48;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82219f48
	if (ctx.cr6.eq) goto loc_82219F48;
	// lbzu r11,1(r25)
	ea = 1 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r25.u32 = ea;
loc_82219F40:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82219f2c
	if (!ctx.cr0.eq) goto loc_82219F2C;
loc_82219F48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221a03c
	if (!ctx.cr6.eq) goto loc_8221A03C;
	// lwz r26,264(r21)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r21.u32 + 264);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// lwz r24,280(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 280);
	// li r20,0
	ctx.r20.s64 = 0;
loc_82219F60:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8221a00c
	if (!ctx.cr6.lt) goto loc_8221A00C;
	// subf r30,r27,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r27.u64;
loc_82219F78:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// subf r10,r26,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r4,r10,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82219fd8
	if (ctx.cr0.eq) goto loc_82219FD8;
	// add r8,r27,r30
	ctx.r8.u64 = ctx.r27.u64 + ctx.r30.u64;
loc_82219FB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82219fd8
	if (!ctx.cr0.eq) goto loc_82219FD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82219fb8
	if (!ctx.cr6.eq) goto loc_82219FB8;
loc_82219FD8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221a004
	if (ctx.cr0.eq) goto loc_8221A004;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82219ff4
	if (ctx.cr0.eq) goto loc_82219FF4;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
loc_82219FF4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82219f78
	if (ctx.cr6.lt) goto loc_82219F78;
loc_8221A004:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221a028
	if (ctx.cr6.lt) goto loc_8221A028;
loc_8221A00C:
	// lwz r11,268(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 268);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r24,284(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 284);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blt cr6,0x82219f60
	if (ctx.cr6.lt) goto loc_82219F60;
loc_8221A028:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221a120
	if (!ctx.cr6.eq) goto loc_8221A120;
loc_8221A030:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221A034:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
loc_8221A03C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8221a118
	if (!ctx.cr6.eq) goto loc_8221A118;
	// rlwinm. r29,r11,30,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x8221a0fc
	if (ctx.cr0.eq) goto loc_8221A0FC;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8221A064:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8221a0fc
	if (!ctx.cr6.lt) goto loc_8221A0FC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// subf r10,r26,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r4,r10,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r10,r27,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x8221a0cc
	if (ctx.cr0.eq) goto loc_8221A0CC;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
loc_8221A0AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221a0cc
	if (!ctx.cr0.eq) goto loc_8221A0CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221a0ac
	if (!ctx.cr6.eq) goto loc_8221A0AC;
loc_8221A0CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221a0fc
	if (ctx.cr0.eq) goto loc_8221A0FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8221a0ec
	if (ctx.cr0.eq) goto loc_8221A0EC;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
loc_8221A0EC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8221a064
	if (ctx.cr6.lt) goto loc_8221A064;
loc_8221A0FC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8221a030
	if (ctx.cr6.eq) goto loc_8221A030;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221a030
	if (!ctx.cr6.lt) goto loc_8221A030;
	// b 0x8221a120
	goto loc_8221A120;
loc_8221A118:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221a030
	if (!ctx.cr6.eq) goto loc_8221A030;
loc_8221A120:
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x8221a1d8
	if (!ctx.cr6.eq) goto loc_8221A1D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8221a030
	if (!ctx.cr6.eq) goto loc_8221A030;
	// addi r30,r25,1
	ctx.r30.s64 = ctx.r25.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220e3b0
	ctx.lr = 0x8221A148;
	sub_8220E3B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,30,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221a030
	if (!ctx.cr6.lt) goto loc_8221A030;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221a1a0
	if (ctx.cr6.eq) goto loc_8221A1A0;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8221A170:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221a1a0
	if (!ctx.cr6.lt) goto loc_8221A1A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8221a190
	if (ctx.cr0.eq) goto loc_8221A190;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
loc_8221A190:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8221a170
	if (ctx.cr6.lt) goto loc_8221A170;
loc_8221A1A0:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221a030
	if (!ctx.cr6.lt) goto loc_8221A030;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x8221a1c4
	goto loc_8221A1C4;
loc_8221A1BC:
	// beq cr6,0x8221a1d4
	if (ctx.cr6.eq) goto loc_8221A1D4;
	// lbzu r11,1(r25)
	ea = 1 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r25.u32 = ea;
loc_8221A1C4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// bne 0x8221a1bc
	if (!ctx.cr0.eq) goto loc_8221A1BC;
	// bne cr6,0x8221a1d8
	if (!ctx.cr6.eq) goto loc_8221A1D8;
loc_8221A1D4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221A1D8:
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x8221a1e8
	if (!ctx.cr6.eq) goto loc_8221A1E8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221A1E8:
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82219f20
	if (!ctx.cr0.eq) goto loc_82219F20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221a030
	if (ctx.cr6.eq) goto loc_8221A030;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a030
	if (!ctx.cr0.eq) goto loc_8221A030;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r20,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x80000000;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8221a034
	goto loc_8221A034;
}

DEFINE_REX_FUNC(sub_822274B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x822274B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r29.u32);
	// addi r31,r3,316
	ctx.r31.s64 = ctx.r3.s64 + 316;
	// stw r29,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r29.u32);
	// stw r29,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r29.u32);
	// lwz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82227500
	if (!ctx.cr6.gt) goto loc_82227500;
loc_822274E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 332);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822255b8
	ctx.lr = 0x822274F0;
	sub_822255B8(ctx, base);
	// lwz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 308);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822274e0
	if (ctx.cr6.lt) goto loc_822274E0;
loc_82227500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82227EE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82227EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,532(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227f8c
	if (ctx.cr6.eq) goto loc_82227F8C;
	// lwz r31,524(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227f28
	if (ctx.cr6.eq) goto loc_82227F28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82227f94
	if (ctx.cr6.eq) goto loc_82227F94;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82227f30
	goto loc_82227F30;
loc_82227F28:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82227F30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82227f94
	if (ctx.cr6.eq) goto loc_82227F94;
	// addi r29,r3,500
	ctx.r29.s64 = ctx.r3.s64 + 500;
	// addi r28,r3,140
	ctx.r28.s64 = ctx.r3.s64 + 140;
loc_82227F40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82227f5c
	if (ctx.cr6.eq) goto loc_82227F5C;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82227f60
	goto loc_82227F60;
loc_82227F5C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82227F60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82231d50
	ctx.lr = 0x82227F68;
	sub_82231D50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82223700
	ctx.lr = 0x82227F78;
	sub_82223700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822304f0
	ctx.lr = 0x82227F80;
	sub_822304F0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82227f40
	if (!ctx.cr6.eq) goto loc_82227F40;
	// b 0x82227f94
	goto loc_82227F94;
loc_82227F8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82227F94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222A330) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8222A338;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82232fd8
	ctx.lr = 0x8222A358;
	sub_82232FD8(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r27,1030(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 1030);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,1048(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1048);
	// beq 0x8222a3b0
	if (ctx.cr0.eq) goto loc_8222A3B0;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a380
	if (ctx.cr6.eq) goto loc_8222A380;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8222a384
	goto loc_8222A384;
loc_8222A380:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
loc_8222A384:
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a398
	if (ctx.cr6.eq) goto loc_8222A398;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8222a3ac
	goto loc_8222A3AC;
loc_8222A398:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A3AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A3AC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8222A3B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8222a420
	if (ctx.cr6.lt) goto loc_8222A420;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// lwz r28,68(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// bl 0x82229600
	ctx.lr = 0x8222A3C4;
	sub_82229600(ctx, base);
	// lhz r8,1042(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8222a088
	ctx.lr = 0x8222A3F0;
	sub_8222A088(ctx, base);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// addi r8,r26,140
	ctx.r8.s64 = ctx.r26.s64 + 140;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A41C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8222A420:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r23,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r23.u16);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// bl 0x82203a90
	ctx.lr = 0x8222A438;
	sub_82203A90(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8222a87c
	if (ctx.cr6.lt) goto loc_8222A87C;
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r3,140(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x8222a488
	if (ctx.cr6.eq) goto loc_8222A488;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82229ba8
	ctx.lr = 0x8222A488;
	sub_82229BA8(ctx, base);
loc_8222A488:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,375
	ctx.r10.s64 = 375;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,187
	ctx.r11.s64 = ctx.r11.s64 + 187;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,375
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(375));
	// lwz r9,100(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A4B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8222a874
	if (ctx.cr0.lt) goto loc_8222A874;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a4e4
	if (!ctx.cr6.eq) goto loc_8222A4E4;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a4e0
	if (ctx.cr6.eq) goto loc_8222A4E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222a4e4
	goto loc_8222A4E4;
loc_8222A4E0:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
loc_8222A4E4:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a4fc
	if (ctx.cr6.eq) goto loc_8222A4FC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x8222a534
	goto loc_8222A534;
loc_8222A4FC:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a510
	if (ctx.cr6.eq) goto loc_8222A510;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8222a530
	goto loc_8222A530;
loc_8222A510:
	// lwz r3,132(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222a530
	if (!ctx.cr6.eq) goto loc_8222A530;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A530:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8222A534:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82229600
	ctx.lr = 0x8222A53C;
	sub_82229600(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r24,r10,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8222a560
	if (ctx.cr6.eq) goto loc_8222A560;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8222a564
	goto loc_8222A564;
loc_8222A560:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
loc_8222A564:
	// lhz r9,130(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222a5a0
	if (!ctx.cr6.eq) goto loc_8222A5A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a580
	if (ctx.cr6.eq) goto loc_8222A580;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8222a594
	goto loc_8222A594;
loc_8222A580:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A594:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222a670
	if (ctx.cr6.eq) goto loc_8222A670;
loc_8222A5A0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8222a670
	if (!ctx.cr6.eq) goto loc_8222A670;
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,130(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,68(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82222a60
	ctx.lr = 0x8222A5C4;
	sub_82222A60(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8222a5d8
	if (!ctx.cr0.eq) goto loc_8222A5D8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x8222a8f8
	goto loc_8222A8F8;
loc_8222A5D8:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r28,4(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a600
	if (!ctx.cr6.eq) goto loc_8222A600;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a5fc
	if (ctx.cr6.eq) goto loc_8222A5FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222a600
	goto loc_8222A600;
loc_8222A5FC:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
loc_8222A600:
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222a648
	if (!ctx.cr6.eq) goto loc_8222A648;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a624
	if (ctx.cr6.eq) goto loc_8222A624;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8222a648
	goto loc_8222A648;
loc_8222A624:
	// lwz r7,132(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222a648
	if (!ctx.cr6.eq) goto loc_8222A648;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8222A648:
	// addi r10,r26,148
	ctx.r10.s64 = ctx.r26.s64 + 148;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82231ad0
	ctx.lr = 0x8222A668;
	sub_82231AD0(ctx, base);
	// lwz r27,148(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8222A670:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8222a87c
	if (ctx.cr6.lt) goto loc_8222A87C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// beq cr6,0x8222a76c
	if (ctx.cr6.eq) goto loc_8222A76C;
	// bl 0x82222de8
	ctx.lr = 0x8222A68C;
	sub_82222DE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8222a874
	if (ctx.cr0.lt) goto loc_8222A874;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r10,2864
	ctx.r4.s64 = ctx.r10.s64 + 2864;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A6E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A6F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,4(r25)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r28,176(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 176);
	// bne cr6,0x8222a748
	if (!ctx.cr6.eq) goto loc_8222A748;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a724
	if (ctx.cr6.eq) goto loc_8222A724;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8222a748
	goto loc_8222A748;
loc_8222A724:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a748
	if (!ctx.cr6.eq) goto loc_8222A748;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222A748:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,4919
	ctx.r9.s64 = 322371584;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r30,r9,61441
	ctx.r30.u64 = ctx.r9.u64 | 61441;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8222a79c
	goto loc_8222A79C;
loc_8222A76C:
	// bl 0x82222cc8
	ctx.lr = 0x8222A770;
	sub_82222CC8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8222a874
	if (ctx.cr0.lt) goto loc_8222A874;
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// lwz r6,4(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r30,r10,61441
	ctx.r30.u64 = ctx.r10.u64 | 61441;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222A79C:
	// addi r31,r26,144
	ctx.r31.s64 = ctx.r26.s64 + 144;
	// lwz r7,140(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8222A7B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8222a87c
	if (ctx.cr6.lt) goto loc_8222A87C;
	// lwz r11,148(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a800
	if (ctx.cr6.eq) goto loc_8222A800;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A7FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8222A800:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8222a87c
	if (ctx.cr6.lt) goto loc_8222A87C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8222a874
	if (ctx.cr0.lt) goto loc_8222A874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822314b8
	ctx.lr = 0x8222A834;
	sub_822314B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8222a874
	if (ctx.cr0.lt) goto loc_8222A874;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8222A874:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8222a8f8
	if (ctx.cr6.eq) goto loc_8222A8F8;
loc_8222A87C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8222a8f8
	if (ctx.cr6.eq) goto loc_8222A8F8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8222a8f8
	if (ctx.cr6.eq) goto loc_8222A8F8;
	// srawi r11,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x8222a8f8
	if (ctx.cr6.eq) goto loc_8222A8F8;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a8f0
	if (ctx.cr0.eq) goto loc_8222A8F0;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8222a8f0
	if (ctx.cr6.eq) goto loc_8222A8F0;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222a8f0
	if (ctx.cr6.eq) goto loc_8222A8F0;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222a8f8
	if (!ctx.cr6.eq) goto loc_8222A8F8;
	// lis r28,-30570
	ctx.r28.s64 = -2003435520;
	// ori r28,r28,3
	ctx.r28.u64 = ctx.r28.u64 | 3;
	// b 0x8222a8f8
	goto loc_8222A8F8;
loc_8222A8F0:
	// lis r28,-30570
	ctx.r28.s64 = -2003435520;
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
loc_8222A8F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223C0E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-17424(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + -17424);
	// lwz r16,24704(r14)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + 24704);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8223C0F0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x8258bb30
	ctx.lr = 0x8223C110;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// b 0x8223c13c
	sub_8223C13C(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224C280) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8224c28c
	if (!ctx.cr6.eq) goto loc_8224C28C;
	// b 0x82246dc0
	sub_82246DC0(ctx, base);
	return;
loc_8224C28C:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8224c298
	if (!ctx.cr6.eq) goto loc_8224C298;
	// b 0x82247378
	sub_82247378(ctx, base);
	return;
loc_8224C298:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8224c2a4
	if (!ctx.cr6.eq) goto loc_8224C2A4;
	// b 0x82247320
	sub_82247320(ctx, base);
	return;
loc_8224C2A4:
	// b 0x82247558
	sub_82247558(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224CFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8224CFE0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8224cca8
	ctx.lr = 0x8224CFF8;
	sub_8224CCA8(ctx, base);
	// addis r29,r30,6
	ctx.r29.s64 = ctx.r30.s64 + 393216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r29,-20252
	ctx.r29.s64 = ctx.r29.s64 + -20252;
	// li r9,103
	ctx.r9.s64 = 103;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f30,-28436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28436);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f29,-25184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25184);
	ctx.f29.f64 = double(temp.f32);
	// stfs f30,2060(r29)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r29.u32 + 2060, temp.u32);
	// stw r9,2056(r29)
	REX_STORE_U32(ctx.r29.u32 + 2056, ctx.r9.u32);
	// stfs f29,2064(r29)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r29.u32 + 2064, temp.u32);
	// bl 0x82203a90
	ctx.lr = 0x8224D030;
	sub_82203A90(ctx, base);
	// lwz r6,2056(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 2056);
	// addis r28,r30,6
	ctx.r28.s64 = ctx.r30.s64 + 393216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r28,r28,-18180
	ctx.r28.s64 = ctx.r28.s64 + -18180;
	// clrlwi r11,r3,23
	ctx.r11.u64 = ctx.r3.u32 & 0x1FF;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,97
	ctx.r7.s64 = 97;
	// lfs f31,2380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2380);
	ctx.f31.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,2068(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 2068, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2048(r29)
	REX_STORE_U32(ctx.r29.u32 + 2048, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2052(r29)
	REX_STORE_U32(ctx.r29.u32 + 2052, ctx.r11.u32);
	// stfs f30,2060(r28)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r28.u32 + 2060, temp.u32);
	// stw r7,2056(r28)
	REX_STORE_U32(ctx.r28.u32 + 2056, ctx.r7.u32);
	// stfs f29,2064(r28)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r28.u32 + 2064, temp.u32);
	// bl 0x82203a90
	ctx.lr = 0x8224D07C;
	sub_82203A90(ctx, base);
	// lwz r10,2056(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 2056);
	// addis r29,r30,6
	ctx.r29.s64 = ctx.r30.s64 + 393216;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r28.u32 + 2068, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,2048(r28)
	REX_STORE_U32(ctx.r28.u32 + 2048, ctx.r31.u32);
	// addi r29,r29,-16108
	ctx.r29.s64 = ctx.r29.s64 + -16108;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,2052(r28)
	REX_STORE_U32(ctx.r28.u32 + 2052, ctx.r8.u32);
	// bl 0x82203a90
	ctx.lr = 0x8224D0AC;
	sub_82203A90(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,40
	ctx.r11.s64 = 40;
	// stfs f31,2068(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 2068, temp.u32);
	// stfs f31,2072(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 2072, temp.u32);
	// stw r31,2048(r29)
	REX_STORE_U32(ctx.r29.u32 + 2048, ctx.r31.u32);
	// stfs f31,2076(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 2076, temp.u32);
	// stw r11,2052(r29)
	REX_STORE_U32(ctx.r29.u32 + 2052, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2056(r29)
	REX_STORE_U32(ctx.r29.u32 + 2056, ctx.r11.u32);
	// lfs f0,-25164(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -25164);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2060(r29)
	REX_STORE_U32(ctx.r29.u32 + 2060, ctx.r11.u32);
	// stfs f0,2064(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 2064, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82250BE0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,212(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r6,704(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 704);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82250c60
	if (ctx.cr6.eq) goto loc_82250C60;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_82250C60:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,12200
	ctx.r10.s64 = ctx.r11.s64 + 12200;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254880) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8225491c
	if (ctx.cr6.eq) goto loc_8225491C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822548e0
	if (ctx.cr6.eq) goto loc_822548E0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x822548c8
	if (ctx.cr6.eq) goto loc_822548C8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82254920
	goto loc_82254920;
loc_822548C8:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-20772
	ctx.r3.s64 = ctx.r10.s64 + -20772;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82254800
	ctx.lr = 0x822548DC;
	sub_82254800(ctx, base);
	// b 0x82254920
	goto loc_82254920;
loc_822548E0:
	// subfic r11,r6,24
	ctx.xer.ca = ctx.r6.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r6.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82254904
	if (ctx.cr6.lt) goto loc_82254904;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r9,-20772
	ctx.r3.s64 = ctx.r9.s64 + -20772;
	// bl 0x82254800
	ctx.lr = 0x82254900;
	sub_82254800(ctx, base);
	// b 0x82254920
	goto loc_82254920;
loc_82254904:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// sraw r4,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r4.s64 = ctx.r10.s32 >> temp.u32;
	// addi r3,r8,-20772
	ctx.r3.s64 = ctx.r8.s64 + -20772;
	// bl 0x82254800
	ctx.lr = 0x82254918;
	sub_82254800(ctx, base);
	// b 0x82254920
	goto loc_82254920;
loc_8225491C:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_82254920:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225492c
	if (ctx.cr6.eq) goto loc_8225492C;
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8225492C:
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

DEFINE_REX_FUNC(sub_82258150) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82258158;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8225817C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8225817c
	if (ctx.cr6.gt) goto loc_8225817C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82258248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82258248;
	// bdzf 4*cr6+eq,0x82258264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82258264;
	// bdzf 4*cr6+eq,0x82258280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82258280;
	// bdzf 4*cr6+eq,0x8225829c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8225829C;
	// bne cr6,0x822582bc
	if (!ctx.cr6.eq) goto loc_822582BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822590e0
	ctx.lr = 0x822581B4;
	sub_822590E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822581f0
	if (!ctx.cr6.eq) goto loc_822581F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82297058
	ctx.lr = 0x822581E0;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// stw r25,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// b 0x8225817c
	goto loc_8225817C;
loc_822581F0:
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82258214
	if (!ctx.cr6.eq) goto loc_82258214;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82297058
	ctx.lr = 0x82258204;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// stw r26,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// b 0x8225817c
	goto loc_8225817C;
loc_82258214:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x82258234
	if (!ctx.cr6.eq) goto loc_82258234;
	// bl 0x82297058
	ctx.lr = 0x82258224;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// b 0x8225817c
	goto loc_8225817C;
loc_82258234:
	// bl 0x82297058
	ctx.lr = 0x82258238;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// b 0x8225817c
	goto loc_8225817C;
loc_82258248:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250c70
	ctx.lr = 0x82258258;
	sub_82250C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// b 0x822582e8
	goto loc_822582E8;
loc_82258264:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250c70
	ctx.lr = 0x82258274;
	sub_82250C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// b 0x822582e8
	goto loc_822582E8;
loc_82258280:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250c70
	ctx.lr = 0x82258290;
	sub_82250C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// b 0x822582e8
	goto loc_822582E8;
loc_8225829C:
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250c70
	ctx.lr = 0x822582AC;
	sub_82250C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_822582BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250c70
	ctx.lr = 0x822582CC;
	sub_82250C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822582fc
	if (ctx.cr6.lt) goto loc_822582FC;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_822582E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_822582FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225B8E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8225B8E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b98c
	if (ctx.cr6.eq) goto loc_8225B98C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225b938
	if (ctx.cr0.eq) goto loc_8225B938;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225b938
	if (!ctx.cr6.eq) goto loc_8225B938;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8225b98c
	goto loc_8225B98C;
loc_8225B938:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r10,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x8225b964
	if (ctx.cr6.eq) goto loc_8225B964;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225B964:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225b97c
	if (ctx.cr6.eq) goto loc_8225B97C;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// b 0x8225b980
	goto loc_8225B980;
loc_8225B97C:
	// bl 0x822304f0
	ctx.lr = 0x8225B980;
	sub_822304F0(ctx, base);
loc_8225B980:
	// stw r28,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r28,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// stw r28,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
loc_8225B98C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b9f8
	if (ctx.cr6.eq) goto loc_8225B9F8;
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
loc_8225B99C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b3c0
	ctx.lr = 0x8225B9A4;
	sub_8225B3C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x8225b9d0
	if (ctx.cr6.eq) goto loc_8225B9D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B9D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225B9D0:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225b9e4
	if (ctx.cr6.eq) goto loc_8225B9E4;
	// stw r28,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// b 0x8225b9ec
	goto loc_8225B9EC;
loc_8225B9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822304f0
	ctx.lr = 0x8225B9EC;
	sub_822304F0(ctx, base);
loc_8225B9EC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b99c
	if (!ctx.cr6.eq) goto loc_8225B99C;
loc_8225B9F8:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225ba20
	if (!ctx.cr6.eq) goto loc_8225BA20;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ba20
	if (ctx.cr6.eq) goto loc_8225BA20;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225BA20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822652F0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22864
	ctx.r8.s64 = ctx.r10.s64 + 22864;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r5,r6,22912
	ctx.r5.s64 = ctx.r6.s64 + 22912;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r11,22912(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 22912);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82266E98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226cec8
	ctx.lr = 0x82266EB0;
	sub_8226CEC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,2380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82267BA0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFFFFF;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822684A8) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// b 0x821f4a68
	sub_821F4A68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822685B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x822685B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822685D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82268690
	if (ctx.cr6.lt) goto loc_82268690;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x821f4a68
	ctx.lr = 0x822685F0;
	sub_821F4A68(ctx, base);
	// stw r3,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82268608
	if (!ctx.cr6.eq) goto loc_82268608;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82268690
	goto loc_82268690;
loc_82268608:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r8.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82268638
	if (ctx.cr6.eq) goto loc_82268638;
	// stw r11,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
loc_82268638:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226865c
	if (ctx.cr6.eq) goto loc_8226865C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82268658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8226865C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82268690
	if (ctx.cr6.lt) goto loc_82268690;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268688
	if (ctx.cr6.eq) goto loc_82268688;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82268684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82268688:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822686a4
	if (!ctx.cr6.lt) goto loc_822686A4;
loc_82268690:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822686A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822686A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82269B74) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226B580) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226B9F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8226B9F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226BA2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ba74
	if (ctx.cr6.lt) goto loc_8226BA74;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// std r30,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// std r30,88(r31)
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r10,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r28,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r28.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,116(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8226BA74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226BA74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226E2FC) {
	REX_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x8226e290
	sub_8226e290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226E6DC) {
	REX_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226EBA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8226EBB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82277898
	ctx.lr = 0x8226EBE0;
	sub_82277898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82277898
	ctx.lr = 0x8226EBFC;
	sub_82277898(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226ec18
	if (ctx.cr6.eq) goto loc_8226EC18;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
loc_8226EC18:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ec70
	if (ctx.cr6.eq) goto loc_8226EC70;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82277898
	ctx.lr = 0x8226EC34;
	sub_82277898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ec60
	if (ctx.cr6.eq) goto loc_8226EC60;
	// bl 0x82277ab8
	ctx.lr = 0x8226EC44;
	sub_82277AB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82277818
	ctx.lr = 0x8226EC60;
	sub_82277818(ctx, base);
loc_8226EC60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82277818
	ctx.lr = 0x8226EC6C;
	sub_82277818(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_8226EC70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822777b0
	ctx.lr = 0x8226EC80;
	sub_822777B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// bl 0x82278950
	ctx.lr = 0x8226ECB0;
	sub_82278950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8226ed2c
	if (ctx.cr6.eq) goto loc_8226ED2C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r7,r9,26584
	ctx.r7.s64 = ctx.r9.s64 + 26584;
	// addi r8,r11,26568
	ctx.r8.s64 = ctx.r11.s64 + 26568;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8226ecfc
	if (!ctx.cr6.eq) goto loc_8226ECFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,26560
	ctx.r10.s64 = ctx.r11.s64 + 26560;
	// b 0x8226ed0c
	goto loc_8226ED0C;
loc_8226ECFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8226ed10
	if (!ctx.cr6.eq) goto loc_8226ED10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
loc_8226ED0C:
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_8226ED10:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822772a0
	ctx.lr = 0x8226ED20;
	sub_822772A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
loc_8226ED2C:
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x82278e78
	ctx.lr = 0x8226ED58;
	sub_82278E78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,-6088
	ctx.r4.s64 = ctx.r11.s64 + -6088;
	// bl 0x82276f80
	ctx.lr = 0x8226ED7C;
	sub_82276F80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r28.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// bl 0x8226e790
	ctx.lr = 0x8226EDB8;
	sub_8226E790(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82277148
	ctx.lr = 0x8226EDDC;
	sub_82277148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822777b0
	ctx.lr = 0x8226EDF8;
	sub_822777B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226ee40
	if (ctx.cr6.lt) goto loc_8226EE40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r29,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82277148
	ctx.lr = 0x8226EE34;
	sub_82277148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8226ee58
	if (!ctx.cr6.lt) goto loc_8226EE58;
loc_8226EE40:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ee58
	if (ctx.cr6.eq) goto loc_8226EE58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82277818
	ctx.lr = 0x8226EE58;
	sub_82277818(ctx, base);
loc_8226EE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82272538) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8227AF38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x8227AF40;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r18,0
	ctx.r18.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-24
	ctx.r22.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x8227b3d8
	if (!ctx.cr6.eq) goto loc_8227B3D8;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,8
	ctx.r3.s64 = 8;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821f4a68
	ctx.lr = 0x8227AF84;
	sub_821F4A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,208(r24)
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227af9c
	if (!ctx.cr6.eq) goto loc_8227AF9C;
loc_8227AF94:
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x8227b364
	goto loc_8227B364;
loc_8227AF9C:
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// stw r18,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r18.u32);
	// stw r18,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// ble cr6,0x8227afb8
	if (!ctx.cr6.gt) goto loc_8227AFB8;
loc_8227AFB0:
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x8227b364
	goto loc_8227B364;
loc_8227AFB8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8226a1c0
	ctx.lr = 0x8227AFCC;
	sub_8226A1C0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227b360
	if (!ctx.cr6.eq) goto loc_8227B360;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// rlwinm r31,r11,4,12,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4a68
	ctx.lr = 0x8227B010;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8227b024
	if (!ctx.cr6.eq) goto loc_8227B024;
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x8227b364
	goto loc_8227B364;
loc_8227B024:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82203a90
	ctx.lr = 0x8227B030;
	sub_82203A90(ctx, base);
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8227b3d8
	if (ctx.cr6.eq) goto loc_8227B3D8;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_8227B040:
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x8227afb0
	if (ctx.cr6.gt) goto loc_8227AFB0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8226a1c0
	ctx.lr = 0x8227B060;
	sub_8226A1C0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227b360
	if (!ctx.cr6.eq) goto loc_8227B360;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r7,r9,r28
	REX_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// bl 0x82279738
	ctx.lr = 0x8227B0B0;
	sub_82279738(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8227b364
	if (!ctx.cr6.eq) goto loc_8227B364;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b0f4
	if (ctx.cr6.eq) goto loc_8227B0F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8227B0E0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8227b0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B0E0;
loc_8227B0F4:
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x8227afb0
	if (ctx.cr6.gt) goto loc_8227AFB0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8226a1c0
	ctx.lr = 0x8227B114;
	sub_8226A1C0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8227b360
	if (!ctx.cr6.eq) goto loc_8227B360;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,10(r4)
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r11.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8227b20c
	if (!ctx.cr6.eq) goto loc_8227B20C;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82279738
	ctx.lr = 0x8227B1A4;
	sub_82279738(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8227b364
	if (!ctx.cr6.eq) goto loc_8227B364;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b1e8
	if (ctx.cr6.eq) goto loc_8227B1E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8227B1D4:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8227b1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227B1D4;
loc_8227B1E8:
	// ld r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_8227B1EC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8227b040
	if (ctx.cr6.lt) goto loc_8227B040;
	// std r22,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
loc_8227B20C:
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpld cr6,r8,r22
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x8227afb0
	if (ctx.cr6.gt) goto loc_8227AFB0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x821f4a68
	ctx.lr = 0x8227B22C;
	sub_821F4A68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227af94
	if (ctx.cr6.eq) goto loc_8227AF94;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227b2b4
	if (ctx.cr6.eq) goto loc_8227B2B4;
loc_8227B258:
	// subf r27,r31,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r31.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// ble cr6,0x8227b268
	if (!ctx.cr6.gt) goto loc_8227B268;
	// li r27,128
	ctx.r27.s64 = 128;
loc_8227B268:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8226a1c0
	ctx.lr = 0x8227B280;
	sub_8226A1C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8227b360
	if (!ctx.cr6.eq) goto loc_8227B360;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82203350
	ctx.lr = 0x8227B2A8;
	sub_82203350(ctx, base);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8227b258
	if (ctx.cr6.lt) goto loc_8227B258;
loc_8227B2B4:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8227b360
	if (!ctx.cr6.eq) goto loc_8227B360;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8227b1ec
	if (ctx.cr6.gt) goto loc_8227B1EC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8227b2f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B2F0;
	// bdzf 4*cr6+eq,0x8227b318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B318;
	// bne cr6,0x8227b348
	if (!ctx.cr6.eq) goto loc_8227B348;
loc_8227B2F0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x8227b1ec
	goto loc_8227B1EC;
loc_8227B318:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8227B328:
	// lbz r8,-1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r9)
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x8227b328
	if (ctx.cr6.lt) goto loc_8227B328;
	// b 0x8227b1ec
	goto loc_8227B1EC;
loc_8227B348:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x8227b1ec
	goto loc_8227B1EC;
loc_8227B360:
	// li r23,3
	ctx.r23.s64 = 3;
loc_8227B364:
	// lwz r30,208(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227b3d8
	if (ctx.cr6.eq) goto loc_8227B3D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b3c8
	if (ctx.cr6.eq) goto loc_8227B3C8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b3b8
	if (ctx.cr6.eq) goto loc_8227B3B8;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_8227B390:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821f4b88
	ctx.lr = 0x8227B3A4;
	sub_821F4B88(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227b390
	if (ctx.cr6.lt) goto loc_8227B390;
loc_8227B3B8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821f4b88
	ctx.lr = 0x8227B3C4;
	sub_821F4B88(ctx, base);
	// stw r18,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
loc_8227B3C8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// bl 0x821f4b88
	ctx.lr = 0x8227B3D4;
	sub_821F4B88(ctx, base);
	// stw r18,208(r24)
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r18.u32);
loc_8227B3D8:
	// std r22,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82290600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82290608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82290634
	if (!ctx.cr6.eq) goto loc_82290634;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_82290634:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82290710
	if (ctx.cr6.eq) goto loc_82290710;
loc_82290648:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290710
	if (ctx.cr6.eq) goto loc_82290710;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// bge cr6,0x82290710
	if (!ctx.cr6.lt) goto loc_82290710;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82290678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82290710
	if (ctx.cr6.lt) goto loc_82290710;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822906c0
	if (ctx.cr6.eq) goto loc_822906C0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x822906c8
	goto loc_822906C8;
loc_822906C0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822906C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x822906e4
	if (!ctx.cr0.eq) goto loc_822906E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_822906E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82277480
	ctx.lr = 0x822906F4;
	sub_82277480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82290710
	if (ctx.cr6.lt) goto loc_82290710;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82290648
	if (!ctx.cr6.eq) goto loc_82290648;
loc_82290710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82295558) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82295560;
	__savegprlr_29(ctx, base);
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8229588c
	if (!ctx.cr6.gt) goto loc_8229588C;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_82295578:
	// lwz r9,584(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,424(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 424);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x822957fc
	if (ctx.cr6.eq) goto loc_822957FC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82295720
	if (ctx.cr6.eq) goto loc_82295720;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82295664
	if (!ctx.cr6.gt) goto loc_82295664;
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
loc_822955D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8229563c
	if (!ctx.cr6.gt) goto loc_8229563C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822955E8:
	// addi r29,r11,158
	ctx.r29.s64 = ctx.r11.s64 + 158;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r3
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// ble cr6,0x82295610
	if (!ctx.cr6.gt) goto loc_82295610;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x82295620
	goto loc_82295620;
loc_82295610:
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r8,r8,117
	ctx.r8.s64 = ctx.r8.s64 + 117;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
loc_82295620:
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822955e8
	if (ctx.cr6.lt) goto loc_822955E8;
loc_8229563C:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822955d8
	if (ctx.cr6.lt) goto loc_822955D8;
loc_82295664:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x822956e8
	if (!ctx.cr6.lt) goto loc_822956E8;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_8229567C:
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822956c4
	if (!ctx.cr6.gt) goto loc_822956C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82295690:
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r29,r11,158
	ctx.r29.s64 = ctx.r11.s64 + 158;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r29,r29,r3
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x82295690
	if (ctx.cr6.lt) goto loc_82295690;
loc_822956C4:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// blt cr6,0x8229567c
	if (ctx.cr6.lt) goto loc_8229567C;
loc_822956E8:
	// lwz r10,648(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8229586c
	if (!ctx.cr6.gt) goto loc_8229586C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,464
	ctx.r9.s64 = ctx.r4.s64 + 464;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82295704:
	// lwzu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,648(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82295704
	if (ctx.cr6.lt) goto loc_82295704;
	// b 0x8229586c
	goto loc_8229586C;
loc_82295720:
	// lwz r10,632(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lwz r6,472(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 472);
	// lwz r11,636(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r11,r11,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,636(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r5,632(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r11,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// ble cr6,0x822957d8
	if (!ctx.cr6.gt) goto loc_822957D8;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229579C:
	// lwz r9,636(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r8,632(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8229579c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229579C;
loc_822957D8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// stw r6,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r6.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r5,472(r4)
	REX_STORE_U32(ctx.r4.u32 + 472, ctx.r5.u32);
	// b 0x8229586c
	goto loc_8229586C;
loc_822957FC:
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,468(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r9,582(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sraw r11,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// ble cr6,0x8229585c
	if (!ctx.cr6.gt) goto loc_8229585C;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82295834:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,632(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r10,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82295834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82295834;
loc_8229585C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r10.u32);
loc_8229586C:
	// lhz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82295578
	if (ctx.cr6.lt) goto loc_82295578;
loc_8229588C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A9A80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x822A9A88;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// slw r26,r10,r5
	ctx.r26.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// addi r27,r11,11584
	ctx.r27.s64 = ctx.r11.s64 + 11584;
	// bge cr6,0x822a9ae0
	if (!ctx.cr6.lt) goto loc_822A9AE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,10864
	ctx.r8.s64 = ctx.r11.s64 + 10864;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,10800
	ctx.r6.s64 = ctx.r10.s64 + 10800;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6496(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6496);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x822a9b2c
	goto loc_822A9B2C;
loc_822A9AE0:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lfd f13,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r27.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,2328(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 2328);
	// fdiv f30,f0,f12
	ctx.f30.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fmul f1,f30,f13
	ctx.f1.f64 = ctx.f30.f64 * ctx.f13.f64;
	// bl 0x822043e8
	ctx.lr = 0x822A9B08;
	sub_822043E8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfd f0,12568(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12568);
	// fmul f1,f30,f0
	ctx.f1.f64 = ctx.f30.f64 * ctx.f0.f64;
	// bl 0x82204308
	ctx.lr = 0x822A9B1C;
	sub_82204308(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,3040(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 3040);
	// fmul f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
loc_822A9B2C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x822a9b40
	if (!ctx.cr6.eq) goto loc_822A9B40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1960);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_822A9B40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,48
	ctx.r7.s64 = 48;
	// lfs f13,6428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6428);
	ctx.f13.f64 = double(temp.f32);
	// li r11,64
	ctx.r11.s64 = 64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// vspltw128 v2,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r27,r7
	ea = (ctx.r27.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v29,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v31,r27,r11
	ea = (ctx.r27.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lvx128 v0,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v30,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v28,r27,r9
	ea = (ctx.r27.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v1,v2,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvx128 v63,r27,r8
	ea = (ctx.r27.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822A9BB0:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bgt cr6,0x822a9bc8
	if (ctx.cr6.gt) goto loc_822A9BC8;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x822a9dbc
	if (!ctx.cr6.eq) goto loc_822A9DBC;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// ble cr6,0x822a9d60
	if (!ctx.cr6.gt) goto loc_822A9D60;
loc_822A9BC8:
	// vmaddfp v9,v2,v29,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// vmaddfp v5,v1,v30,v31
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vor v4,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vor v3,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// vmaddfp v2,v9,v28,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi128 v59,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v12,v31,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vxor128 v11,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v1,v2,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// ble cr6,0x822a9c4c
	if (!ctx.cr6.gt) goto loc_822A9C4C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_822A9C14:
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v57,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v58,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// vaddfp128 v56,v58,v57
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmaddfp v10,v12,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v13,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vmaddfp v13,v11,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x822a9c14
	if (ctx.cr6.lt) goto loc_822A9C14;
loc_822A9C4C:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x822a9d58
	if (!ctx.cr6.gt) goto loc_822A9D58;
loc_822A9C58:
	// vmaddfp v4,v1,v9,v4
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// add r10,r28,r5
	ctx.r10.u64 = ctx.r28.u64 + ctx.r5.u64;
	// vmaddfp v3,v2,v5,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// vmaddfp v9,v2,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v1,v3,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vsldoi128 v55,v3,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v11,v4,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// vxor128 v10,v55,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bgt cr6,0x822a9d0c
	if (ctx.cr6.gt) goto loc_822A9D0C;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_822A9C8C:
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lvx128 v54,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lvx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v53,v54
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v51,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v50,v53,v54
	simde_mm_store_ps(ctx.v50.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v12,v52,v51
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// vaddfp128 v49,v52,v51
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// vmaddfp v8,v11,v13,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v7,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v11,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v6,v12,78
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xB1));
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v10,v7,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v10,v6,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x822a9c8c
	if (!ctx.cr6.gt) goto loc_822A9C8C;
loc_822A9D0C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x822a9d4c
	if (ctx.cr6.gt) goto loc_822A9D4C;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v48,v47
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v46,v48,v47
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmaddfp v12,v11,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v13,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v10,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822A9D4C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822a9c58
	if (ctx.cr6.lt) goto loc_822A9C58;
loc_822A9D58:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x822a9bb0
	goto loc_822A9BB0;
loc_822A9D60:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x822a9e64
	if (!ctx.cr6.gt) goto loc_822A9E64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822a9e64
	if (!ctx.cr6.gt) goto loc_822A9E64;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A9D84:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfsu f7,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822a9d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A9D84;
	// b 0x822a9e64
	goto loc_822A9E64;
loc_822A9DBC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x822a9e64
	if (!ctx.cr6.gt) goto loc_822A9E64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822a9e64
	if (!ctx.cr6.gt) goto loc_822A9E64;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lvx128 v11,r27,r5
	ea = (ctx.r27.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,-16
	ctx.r6.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822A9E00:
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lvlx128 v44,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v43,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v0,v45,v44
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// lvlx128 v42,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v41,v45,v44
	simde_mm_store_ps(ctx.v41.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vsubfp128 v40,v43,v42
	simde_mm_store_ps(ctx.v40.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vaddfp128 v13,v43,v42
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vpermwi128 v10,v0,177
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x4E));
	// vpermwi128 v9,v41,238
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x11));
	// vpermwi128 v8,v41,17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xEE));
	// vpermwi128 v7,v13,177
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x4E));
	// vpermwi128 v5,v40,17
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xEE));
	// vmaddfp v0,v0,v12,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v6,v40,238
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x11));
	// vmaddfp v10,v9,v11,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v13,v12,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v9,v6,v11,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v10,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x822a9e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A9E00;
loc_822A9E64:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x822a9f6c
	if (!ctx.cr6.gt) goto loc_822A9F6C;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addi r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822a9f6c
	if (!ctx.cr6.gt) goto loc_822A9F6C;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_822A9E98:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a9f08
	if (!ctx.cr6.lt) goto loc_822A9F08;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r28,r6,1
	ctx.r28.s64 = ctx.r6.s64 + 1;
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f8,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f7,r6,r31
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r7,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfsx f10,r6,r31
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
loc_822A9F08:
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bgt cr6,0x822a9f54
	if (ctx.cr6.gt) goto loc_822A9F54;
loc_822A9F40:
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822a9f40
	if (!ctx.cr6.gt) goto loc_822A9F40;
loc_822A9F54:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822a9e98
	if (ctx.cr6.lt) goto loc_822A9E98;
loc_822A9F6C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x822aa028
	if (!ctx.cr6.eq) goto loc_822AA028;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// lfs f13,1952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x822a9fe4
	if (ctx.cr6.lt) goto loc_822A9FE4;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// addi r9,r29,-3
	ctx.r9.s64 = ctx.r29.s64 + -3;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_822A9FA8:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x822a9fa8
	if (ctx.cr6.lt) goto loc_822A9FA8;
loc_822A9FE4:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822aa028
	if (!ctx.cr6.lt) goto loc_822AA028;
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// subf r8,r10,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_822AA018:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822aa018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AA018;
loc_822AA028:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E2710) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x822E2718;
	__savegprlr_27(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3392(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// divwu r8,r8,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// lwz r31,136(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// divwu r4,r3,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r6,224(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// divwu r30,r31,r10
	ctx.r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r31.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3876(r11)
	REX_STORE_U32(ctx.r11.u32 + 3876, ctx.r5.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,3880(r11)
	REX_STORE_U32(ctx.r11.u32 + 3880, ctx.r9.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3884(r11)
	REX_STORE_U32(ctx.r11.u32 + 3884, ctx.r5.u32);
	// stw r8,3888(r11)
	REX_STORE_U32(ctx.r11.u32 + 3888, ctx.r8.u32);
	// stw r4,3868(r11)
	REX_STORE_U32(ctx.r11.u32 + 3868, ctx.r4.u32);
	// stw r30,3872(r11)
	REX_STORE_U32(ctx.r11.u32 + 3872, ctx.r30.u32);
	// stw r7,3892(r11)
	REX_STORE_U32(ctx.r11.u32 + 3892, ctx.r7.u32);
	// stw r6,3896(r11)
	REX_STORE_U32(ctx.r11.u32 + 3896, ctx.r6.u32);
	// blt cr6,0x822e2804
	if (ctx.cr6.lt) goto loc_822E2804;
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,208(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r27,r8,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,3912(r11)
	REX_STORE_U32(ctx.r11.u32 + 3912, ctx.r9.u32);
	// stw r8,3920(r11)
	REX_STORE_U32(ctx.r11.u32 + 3920, ctx.r8.u32);
	// stw r29,3916(r11)
	REX_STORE_U32(ctx.r11.u32 + 3916, ctx.r29.u32);
	// stw r27,3924(r11)
	REX_STORE_U32(ctx.r11.u32 + 3924, ctx.r27.u32);
	// stw r4,3900(r11)
	REX_STORE_U32(ctx.r11.u32 + 3900, ctx.r4.u32);
	// mullw r9,r28,r8
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,3928(r11)
	REX_STORE_U32(ctx.r11.u32 + 3928, ctx.r8.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r7,3932(r11)
	REX_STORE_U32(ctx.r11.u32 + 3932, ctx.r7.u32);
	// bne cr6,0x822e27dc
	if (!ctx.cr6.eq) goto loc_822E27DC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,3904(r11)
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r10.u32);
	// stw r9,3908(r11)
	REX_STORE_U32(ctx.r11.u32 + 3908, ctx.r9.u32);
	// b 0x822e27e4
	goto loc_822E27E4;
loc_822E27DC:
	// stw r3,3904(r11)
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r3.u32);
	// stw r31,3908(r11)
	REX_STORE_U32(ctx.r11.u32 + 3908, ctx.r31.u32);
loc_822E27E4:
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r9,208(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,15232(r11)
	REX_STORE_U32(ctx.r11.u32 + 15232, ctx.r6.u32);
	// stw r5,15236(r11)
	REX_STORE_U32(ctx.r11.u32 + 15236, ctx.r5.u32);
loc_822E2804:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E6A50) {
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
	// bne cr6,0x822e6a84
	if (!ctx.cr6.eq) goto loc_822E6A84;
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
loc_822E6A84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e66a8
	ctx.lr = 0x822E6A8C;
	sub_822E66A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba5c8
	ctx.lr = 0x822E6A94;
	sub_822BA5C8(ctx, base);
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

DEFINE_REX_FUNC(sub_822E70A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e70bc
	if (!ctx.cr6.eq) goto loc_822E70BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E70BC:
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7104
	if (ctx.cr6.eq) goto loc_822E7104;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7104
	if (ctx.cr6.eq) goto loc_822E7104;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,13392
	ctx.r9.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7104
	if (ctx.cr6.eq) goto loc_822E7104;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822E7104:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8C68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x822E8C70;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r3,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// beq cr6,0x822e925c
	if (ctx.cr6.eq) goto loc_822E925C;
	// addi r20,r4,8
	ctx.r20.s64 = ctx.r4.s64 + 8;
	// lwz r23,256(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r19,r20,-1
	ctx.r19.s64 = ctx.r20.s64 + -1;
	// addi r15,r20,1
	ctx.r15.s64 = ctx.r20.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r16,r19,-1
	ctx.r16.s64 = ctx.r19.s64 + -1;
	// addi r14,r15,1
	ctx.r14.s64 = ctx.r15.s64 + 1;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// addi r17,r16,-1
	ctx.r17.s64 = ctx.r16.s64 + -1;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// addi r18,r17,-1
	ctx.r18.s64 = ctx.r17.s64 + -1;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r18,-1
	ctx.r9.s64 = ctx.r18.s64 + -1;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_822E8CE0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r18)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// lbz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r17)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// lbz r29,0(r16)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r31,0(r19)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r30,0(r20)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r28,0(r15)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r26,0(r14)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r24,0(r8)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x822e8e94
	if (!ctx.cr6.eq) goto loc_822E8E94;
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r30,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r28,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r29,r27
	ctx.r16.u64 = ctx.r27.u64 - ctx.r29.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r6,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// subf r3,r31,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r4,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r5,r10,r5
	temp.u8 = (ctx.r10.u32 + ctx.r5.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r17.s32 >> 31;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// xor r17,r17,r7
	ctx.r17.u64 = ctx.r17.u64 ^ ctx.r7.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r7,r7,r17
	ctx.r7.u64 = ctx.r17.u64 - ctx.r7.u64;
	// subf r17,r27,r25
	ctx.r17.u64 = ctx.r25.u64 - ctx.r27.u64;
	// subfc r15,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r15.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// adde r8,r7,r4
	temp.u8 = (ctx.r7.u32 + ctx.r4.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfc r7,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r11,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r16.s32 >> 31;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r3,r16,r5
	ctx.r3.u64 = ctx.r16.u64 ^ ctx.r5.u64;
	// lwz r16,116(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r7,r25,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r11,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r17.s32 >> 31;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r6,r17,r4
	ctx.r6.u64 = ctx.r17.u64 ^ ctx.r4.u64;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfc r11,r5,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r4,r3
	temp.u8 = (ctx.r4.u32 + ctx.r3.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwz r17,112(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r14,124(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_822E8E94:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822e90bc
	if (ctx.cr6.lt) goto loc_822E90BC;
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82312c68
	ctx.lr = 0x822E8ED0;
	sub_82312C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e91ec
	if (ctx.cr6.eq) goto loc_822E91EC;
	// subf r10,r21,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r21.u64;
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e8ef8
	if (ctx.cr6.lt) goto loc_822E8EF8;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_822E8EF8:
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e8f14
	if (ctx.cr6.lt) goto loc_822E8F14;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_822E8F14:
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r9,r27,r21
	ctx.r9.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r5,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// srawi r7,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 4;
	// addi r6,r28,2
	ctx.r6.s64 = ctx.r28.s64 + 2;
	// stb r11,0(r18)
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lbzx r3,r7,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r3,0(r17)
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r3.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// add r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	// lbzx r8,r4,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r23.u32);
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stb r8,0(r16)
	REX_STORE_U8(ctx.r16.u32 + 0, ctx.r8.u8);
	// lbzx r3,r9,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r3,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r3.u8);
	// lbzx r11,r6,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// stb r11,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// lbzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stb r10,0(r15)
	REX_STORE_U8(ctx.r15.u32 + 0, ctx.r10.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r3,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	REX_STORE_U8(ctx.r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x822e91ec
	goto loc_822E91EC;
loc_822E90BC:
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822e91ec
	if (!ctx.cr6.lt) goto loc_822E91EC;
	// subf r10,r27,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e9164
	if (!ctx.cr6.lt) goto loc_822E9164;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E9164:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e91ec
	if (!ctx.cr6.lt) goto loc_822E91EC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x822e917c
	if (ctx.cr6.lt) goto loc_822E917C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E917C:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x822e91b8
	if (!ctx.cr0.gt) goto loc_822E91B8;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822e91d4
	if (!ctx.cr6.gt) goto loc_822E91D4;
	// b 0x822e91d0
	goto loc_822E91D0;
loc_822E91B8:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e91d4
	if (!ctx.cr6.lt) goto loc_822E91D4;
loc_822E91D0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E91D4:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r8,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
loc_822E91EC:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x822e8ce0
	if (ctx.cr6.lt) goto loc_822E8CE0;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_822E925C:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e9820
	if (ctx.cr6.eq) goto loc_822E9820;
	// addi r19,r4,-1
	ctx.r19.s64 = ctx.r4.s64 + -1;
	// lwz r23,256(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r15,r19,-1
	ctx.r15.s64 = ctx.r19.s64 + -1;
	// addi r14,r11,1
	ctx.r14.s64 = ctx.r11.s64 + 1;
	// addi r16,r15,-1
	ctx.r16.s64 = ctx.r15.s64 + -1;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r17,r16,-1
	ctx.r17.s64 = ctx.r16.s64 + -1;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r17,-1
	ctx.r9.s64 = ctx.r17.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r20,r19,1
	ctx.r20.s64 = ctx.r19.s64 + 1;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_822E92B4:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r17)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// lbz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r16)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r29,0(r15)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r31,0(r19)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r30,0(r20)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r28,1(r20)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// lbz r26,0(r14)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r24,0(r8)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x822e9464
	if (!ctx.cr6.eq) goto loc_822E9464;
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r18,r30,r31
	ctx.r18.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r8,r28,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subfc r6,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r31,r29
	ctx.r16.u64 = ctx.r29.u64 - ctx.r31.u64;
	// adde r5,r4,r5
	temp.u8 = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// xor r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r4,r6
	temp.u8 = (ctx.r4.u32 + ctx.r6.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r29,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r29.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r8,r5
	temp.u8 = (ctx.r8.u32 + ctx.r5.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 31;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r3.u64;
	// subf r18,r27,r25
	ctx.r18.u64 = ctx.r25.u64 - ctx.r27.u64;
	// subfc r15,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r15.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r7,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r16.s32 >> 31;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// xor r3,r16,r6
	ctx.r3.u64 = ctx.r16.u64 ^ ctx.r6.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r5,r25,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r10,r10,r3
	temp.u8 = (ctx.r10.u32 + ctx.r3.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r6,r18,r8
	ctx.r6.u64 = ctx.r18.u64 ^ ctx.r8.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r16,124(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_822E9464:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822e9688
	if (ctx.cr6.lt) goto loc_822E9688;
	// lwz r18,380(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82312c68
	ctx.lr = 0x822E94A0;
	sub_82312C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e97b8
	if (ctx.cr6.eq) goto loc_822E97B8;
	// subf r11,r21,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r21.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x822e94c4
	if (ctx.cr6.lt) goto loc_822E94C4;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_822E94C4:
	// subf r11,r22,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r22.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x822e94e0
	if (ctx.cr6.lt) goto loc_822E94E0;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_822E94E0:
	// rlwinm r10,r21,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// add r9,r21,r10
	ctx.r9.u64 = ctx.r21.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r21
	ctx.r10.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 2;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// lbzx r6,r8,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 2;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r6,0(r17)
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r6.u8);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r6,r9,r21
	ctx.r6.u64 = ctx.r9.u64 + ctx.r21.u64;
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r4,r8,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// stb r4,0(r16)
	REX_STORE_U8(ctx.r16.u32 + 0, ctx.r4.u8);
	// add r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	// lbzx r6,r5,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stb r6,0(r15)
	REX_STORE_U8(ctx.r15.u32 + 0, ctx.r6.u8);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lbzx r4,r10,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r4,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r4.u8);
	// lbzx r3,r8,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// stb r3,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r3.u8);
	// lbzx r11,r7,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// stb r11,1(r20)
	REX_STORE_U8(ctx.r20.u32 + 1, ctx.r11.u8);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r3,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	REX_STORE_U8(ctx.r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x822e97b8
	goto loc_822E97B8;
loc_822E9688:
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822e97b8
	if (!ctx.cr6.lt) goto loc_822E97B8;
	// subf r10,r27,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e9730
	if (!ctx.cr6.lt) goto loc_822E9730;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E9730:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e97b8
	if (!ctx.cr6.lt) goto loc_822E97B8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x822e9748
	if (ctx.cr6.lt) goto loc_822E9748;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E9748:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x822e9784
	if (!ctx.cr0.gt) goto loc_822E9784;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822e97a0
	if (!ctx.cr6.gt) goto loc_822E97A0;
	// b 0x822e979c
	goto loc_822E979C;
loc_822E9784:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e97a0
	if (!ctx.cr6.lt) goto loc_822E97A0;
loc_822E979C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E97A0:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r8,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
loc_822E97B8:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x822e92b4
	if (ctx.cr6.lt) goto loc_822E92B4;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_822E9820:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e9ca0
	if (ctx.cr6.eq) goto loc_822E9CA0;
	// addi r16,r4,16
	ctx.r16.s64 = ctx.r4.s64 + 16;
	// lwz r18,256(r3)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r22,r16,-1
	ctx.r22.s64 = ctx.r16.s64 + -1;
	// addi r15,r16,1
	ctx.r15.s64 = ctx.r16.s64 + 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r19,r22,-1
	ctx.r19.s64 = ctx.r22.s64 + -1;
	// addi r9,r15,1
	ctx.r9.s64 = ctx.r15.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r21,r20,-1
	ctx.r21.s64 = ctx.r20.s64 + -1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_822E9870:
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r23,0(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// lbz r24,0(r9)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r25,0(r15)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// lbz r28,0(r16)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// lbz r31,0(r19)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// lbz r26,0(r22)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// subf r7,r23,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r23.u64;
	// lbz r29,0(r20)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lbz r30,0(r21)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// subf r4,r24,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r24.u64;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r27,r25,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r25.u64;
	// adde r8,r6,r8
	temp.u8 = (ctx.r6.u32 + ctx.r8.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r17,r31,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subfc r9,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r7,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r26,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r26.u64;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r6,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r27,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r27.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r8,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subfc r4,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subf r3,r29,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r29.u64;
	// adde r9,r9,r6
	temp.u8 = (ctx.r9.u32 + ctx.r6.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r17.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r17,r8
	ctx.r6.u64 = ctx.r17.u64 ^ ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r9,r28,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r28.u64;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r8,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r10,r30,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r30.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r7,r11,r4
	temp.u8 = (ctx.r11.u32 + ctx.r4.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r5,r3,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// li r10,2
	ctx.r10.s64 = 2;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// adde r10,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x822e9b24
	if (ctx.cr6.lt) goto loc_822E9B24;
	// lwz r17,380(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// rlwinm r11,r17,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82312c68
	ctx.lr = 0x822E9A2C;
	sub_82312C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e9c44
	if (ctx.cr6.eq) goto loc_822E9C44;
	// subf r11,r27,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x822e9a50
	if (ctx.cr6.lt) goto loc_822E9A50;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_822E9A50:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// add r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// addi r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 2;
	// add r8,r29,r27
	ctx.r8.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbzx r5,r7,r18
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r18.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// stb r5,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r5.u8);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// lbzx r8,r3,r18
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r18.u32);
	// stb r8,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r8.u8);
	// lbzx r7,r10,r18
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// stb r7,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r18
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r18.u32);
	// stb r6,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r6.u8);
	// b 0x822e9c44
	goto loc_822E9C44;
loc_822E9B24:
	// subf r10,r25,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r25.u64;
	// lwz r8,380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822e9c44
	if (!ctx.cr6.lt) goto loc_822E9C44;
	// subf r10,r29,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r29.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// subf r8,r23,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r11,r25,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r25.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r3,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e9bc8
	if (!ctx.cr6.lt) goto loc_822E9BC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E9BC8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822e9c44
	if (!ctx.cr6.lt) goto loc_822E9C44;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// blt cr6,0x822e9be0
	if (ctx.cr6.lt) goto loc_822E9BE0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822E9BE0:
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// ble 0x822e9c1c
	if (!ctx.cr0.gt) goto loc_822E9C1C;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822e9c38
	if (!ctx.cr6.gt) goto loc_822E9C38;
	// b 0x822e9c34
	goto loc_822E9C34;
loc_822E9C1C:
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e9c38
	if (!ctx.cr6.lt) goto loc_822E9C38;
loc_822E9C34:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E9C38:
	// subf r11,r10,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r10.u64;
	// lbzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// stb r10,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r10.u8);
loc_822E9C44:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// bne 0x822e9870
	if (!ctx.cr0.eq) goto loc_822E9870;
loc_822E9CA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233F638) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204244
	ctx.lr = 0x8233F640;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,300(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 31;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// xor r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x8233f684
	if (ctx.cr6.eq) goto loc_8233F684;
	// srawi r30,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 1;
loc_8233F684:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// srawi r29,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 1;
	// srawi r31,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r24.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233f6c8
	if (!ctx.cr6.eq) goto loc_8233F6C8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8233f080
	ctx.lr = 0x8233F6AC;
	sub_8233F080(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8233f080
	ctx.lr = 0x8233F6C4;
	sub_8233F080(ctx, base);
	// b 0x8233f730
	goto loc_8233F730;
loc_8233F6C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8233f730
	if (!ctx.cr6.gt) goto loc_8233F730;
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r28,r7,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r7.u64;
loc_8233F6E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8233f720
	if (!ctx.cr6.gt) goto loc_8233F720;
	// add r6,r28,r7
	ctx.r6.u64 = ctx.r28.u64 + ctx.r7.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r3,r8,r27
	ctx.r3.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8233F700:
	// lbzx r20,r9,r4
	ctx.r20.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r19,r3,r11
	ctx.r19.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stbx r20,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r20.u8);
	// stbx r19,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r19.u8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bdnz 0x8233f700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233F700;
loc_8233F720:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x8233f6e0
	if (!ctx.cr0.eq) goto loc_8233F6E0;
loc_8233F730:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8233f080
	ctx.lr = 0x8233F74C;
	sub_8233F080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82341B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82341B40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// blt cr6,0x82341b68
	if (ctx.cr6.lt) goto loc_82341B68;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
loc_82341B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5c38
	ctx.lr = 0x82341B70;
	sub_821F5C38(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341bbc
	if (ctx.cr6.eq) goto loc_82341BBC;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341bbc
	if (ctx.cr6.eq) goto loc_82341BBC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82341be4
	if (!ctx.cr6.gt) goto loc_82341BE4;
loc_82341B94:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823167b8
	ctx.lr = 0x82341BA4;
	sub_823167B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82341b94
	if (!ctx.cr0.eq) goto loc_82341B94;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_82341BBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82341be4
	if (!ctx.cr6.gt) goto loc_82341BE4;
loc_82341BC4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316a88
	ctx.lr = 0x82341BD4;
	sub_82316A88(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82341bc4
	if (!ctx.cr0.eq) goto loc_82341BC4;
loc_82341BE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82345940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x82345948;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// vspltish v4,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x3)));
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r9,r11,-19856
	ctx.r9.s64 = ctx.r11.s64 + -19856;
	// li r10,-64
	ctx.r10.s64 = -64;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r6,-16
	ctx.r6.s64 = -16;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-32
	ctx.r7.s64 = -32;
	// lvx128 v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r24,r22,0,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFF0;
	// lvx128 v12,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	ctx.r30.s64 = 16;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stvx128 v11,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r5,r23
	ctx.r31.u64 = ctx.r5.u64 + ctx.r23.u64;
	// stvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82345a94
	if (!ctx.cr6.gt) goto loc_82345A94;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82345A08:
	// lvrx128 v63,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v9,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v22,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v21,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v20,v22,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvlx128 v59,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r9,r30
	ea = ctx.r9.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82345a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345A08;
loc_82345A94:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x82345aec
	if (!ctx.cr6.lt) goto loc_82345AEC;
	// subf r9,r11,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r11.u64;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82345AB4:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r10,25
	ctx.r6.u64 = ctx.r10.u32 & 0x7F;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stbx r4,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82345ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345AB4;
loc_82345AEC:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82345b14
	if (!ctx.cr6.lt) goto loc_82345B14;
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82345AFC:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82345afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345AFC;
loc_82345B14:
	// add r28,r3,r21
	ctx.r28.u64 = ctx.r3.u64 + ctx.r21.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82346170
	if (!ctx.cr6.gt) goto loc_82346170;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
loc_82345B28:
	// clrlwi r11,r20,30
	ctx.r11.u64 = ctx.r20.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82346160
	if (ctx.cr6.gt) goto loc_82346160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82345b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82345B84;
	// bdzf 4*cr6+eq,0x82345d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82345D7C;
	// bne cr6,0x82345f58
	if (!ctx.cr6.eq) goto loc_82345F58;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82203350
	ctx.lr = 0x82345B58;
	sub_82203350(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82346160
	goto loc_82346160;
loc_82345B84:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82345cb4
	if (!ctx.cr6.gt) goto loc_82345CB4;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82345BC0:
	// lvrx128 v58,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v14,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v6,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v6,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r11,r30
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vaddshs v5,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v4,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsrah v3,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v51,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x82345bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345BC0;
loc_82345CB4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x82345d0c
	if (!ctx.cr6.lt) goto loc_82345D0C;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345CD4:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82345cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345CD4;
loc_82345D0C:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82345d34
	if (!ctx.cr6.lt) goto loc_82345D34;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345D1C:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82345d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345D1C;
loc_82345D34:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8234614c
	if (!ctx.cr6.lt) goto loc_8234614C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
	// subf r7,r27,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r27.u64;
	// subf r6,r27,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345D50:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82345d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345D50;
	// b 0x8234614c
	goto loc_8234614C;
loc_82345D7C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82345e98
	if (!ctx.cr6.gt) goto loc_82345E98;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82345DB8:
	// lvrx128 v50,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v47,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v14,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v9,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsrah v8,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vsrah v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v44,r11,r30
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vpkshus128 v43,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v43,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x82345db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345DB8;
loc_82345E98:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x82345ef0
	if (!ctx.cr6.lt) goto loc_82345EF0;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345EB8:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82345eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345EB8;
loc_82345EF0:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82345f18
	if (!ctx.cr6.lt) goto loc_82345F18;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345F00:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82345f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345F00;
loc_82345F18:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8234614c
	if (!ctx.cr6.lt) goto loc_8234614C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + ctx.r27.u64;
	// subf r8,r27,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r27.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82345F34:
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82345f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345F34;
	// b 0x8234614c
	goto loc_8234614C;
loc_82345F58:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82346088
	if (!ctx.cr6.gt) goto loc_82346088;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82345F94:
	// lvrx128 v42,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lvlx128 v40,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v29,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v23,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v22,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vslh v21,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v19,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vslh v17,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v6,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v14,v17,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vslh v5,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v36,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// vsrah v31,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v36,r11,r30
	ea = ctx.r11.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvlx128 v35,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r4,r30
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x82345f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345F94;
loc_82346088:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823460e0
	if (!ctx.cr6.lt) goto loc_823460E0;
	// subf r10,r9,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823460A8:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823460a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823460A8;
loc_823460E0:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82346108
	if (!ctx.cr6.lt) goto loc_82346108;
	// subf r10,r9,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823460F0:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823460f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823460F0;
loc_82346108:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8234614c
	if (!ctx.cr6.lt) goto loc_8234614C;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r7,r31,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82346124:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82346124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82346124;
loc_8234614C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r26,r26,r21
	ctx.r26.u64 = ctx.r26.u64 + ctx.r21.u64;
loc_82346160:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82345b28
	if (ctx.cr6.lt) goto loc_82345B28;
loc_82346170:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82389E68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82389E70;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82389eac
	if (ctx.cr6.eq) goto loc_82389EAC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82389E90:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82389e90
	if (!ctx.cr6.eq) goto loc_82389E90;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82389EAC:
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389f8c
	if (ctx.cr6.eq) goto loc_82389F8C;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389f78
	if (ctx.cr6.eq) goto loc_82389F78;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82389EC8:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82389ec8
	if (!ctx.cr6.eq) goto loc_82389EC8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82389f78
	if (ctx.cr0.eq) goto loc_82389F78;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82389f78
	if (ctx.cr6.eq) goto loc_82389F78;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// bl 0x823a8ea0
	ctx.lr = 0x82389F04;
	sub_823A8EA0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82389f30
	if (!ctx.cr0.eq) goto loc_82389F30;
loc_82389F0C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,696
	ctx.r6.s64 = ctx.r11.s64 + 696;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82389d80
	ctx.lr = 0x82389F24;
	sub_82389D80(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82389fcc
	goto loc_82389FCC;
loc_82389F30:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82203350
	ctx.lr = 0x82389F44;
	sub_82203350(ctx, base);
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r11,58
	ctx.r11.s64 = 58;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// stb r11,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r11.u8);
	// bl 0x82203350
	ctx.lr = 0x82389F64;
	sub_82203350(ctx, base);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x82389f8c
	goto loc_82389F8C;
loc_82389F78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82389f8c
	if (ctx.cr6.eq) goto loc_82389F8C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82389f8c
	if (!ctx.cr6.eq) goto loc_82389F8C;
	// lwz r28,20(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_82389F8C:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82384480
	ctx.lr = 0x82389F94;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82389fb8
	if (ctx.cr0.eq) goto loc_82389FB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82384e30
	ctx.lr = 0x82389FB4;
	sub_82384E30(ctx, base);
	// b 0x82389fbc
	goto loc_82389FBC;
loc_82389FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82389FBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82389f0c
	if (ctx.cr6.eq) goto loc_82389F0C;
	// stw r3,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82389FCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82391F70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82391F78;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8239222c
	if (!ctx.cr6.eq) goto loc_8239222C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8239222c
	if (!ctx.cr6.eq) goto loc_8239222C;
	// li r3,88
	ctx.r3.s64 = 88;
	// addi r27,r5,48
	ctx.r27.s64 = ctx.r5.s64 + 48;
	// bl 0x82384480
	ctx.lr = 0x82391FBC;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82391fe8
	if (ctx.cr0.eq) goto loc_82391FE8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823871e0
	ctx.lr = 0x82391FE0;
	sub_823871E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82391fec
	goto loc_82391FEC;
loc_82391FE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82391FEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
	// lwz r31,16(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r29,16(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82392214
	if (ctx.cr6.eq) goto loc_82392214;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82392040
	if (!ctx.cr6.eq) goto loc_82392040;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392108
	if (ctx.cr6.eq) goto loc_82392108;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82392030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8239222c
	if (ctx.cr0.eq) goto loc_8239222C;
	// b 0x82392108
	goto loc_82392108;
loc_82392040:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82392214
	if (!ctx.cr6.eq) goto loc_82392214;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82392070
	if (!ctx.cr6.eq) goto loc_82392070;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82384480
	ctx.lr = 0x8239205C;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823920f8
	if (ctx.cr0.eq) goto loc_823920F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// b 0x823920dc
	goto loc_823920DC;
loc_82392070:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82392214
	if (!ctx.cr6.eq) goto loc_82392214;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823920a8
	if (!ctx.cr6.eq) goto loc_823920A8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82384480
	ctx.lr = 0x8239208C;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823920f8
	if (ctx.cr0.eq) goto loc_823920F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// b 0x823920e4
	goto loc_823920E4;
loc_823920A8:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82392214
	if (!ctx.cr6.eq) goto loc_82392214;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82392214
	if (ctx.cr0.eq) goto loc_82392214;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82384480
	ctx.lr = 0x823920C4;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823920f8
	if (ctx.cr0.eq) goto loc_823920F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,10,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFE00;
	// rlwinm r9,r9,0,22,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE003FF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
loc_823920DC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823920E4:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82385ed8
	ctx.lr = 0x823920F4;
	sub_82385ED8(ctx, base);
	// b 0x823920fc
	goto loc_823920FC;
loc_823920F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823920FC:
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
loc_82392108:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82392128
	if (ctx.cr6.eq) goto loc_82392128;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82392128
	if (!ctx.cr6.eq) goto loc_82392128;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392138
	if (ctx.cr6.eq) goto loc_82392138;
loc_82392128:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,3051
	ctx.r5.s64 = 3051;
	// addi r6,r11,30020
	ctx.r6.s64 = ctx.r11.s64 + 30020;
	// b 0x82392220
	goto loc_82392220;
loc_82392138:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239214C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8239222c
	if (ctx.cr0.eq) goto loc_8239222C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82384480
	ctx.lr = 0x82392160;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8239218c
	if (ctx.cr0.eq) goto loc_8239218C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82385ed8
	ctx.lr = 0x82392184;
	sub_82385ED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82392190
	goto loc_82392190;
loc_8239218C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82392190:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239222c
	if (ctx.cr6.eq) goto loc_8239222C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238d730
	ctx.lr = 0x823921AC;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne 0x823921d4
	if (!ctx.cr0.eq) goto loc_823921D4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8238db80
	ctx.lr = 0x823921D0;
	sub_8238DB80(ctx, base);
	// b 0x8239222c
	goto loc_8239222C;
loc_823921D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82391640
	ctx.lr = 0x823921F4;
	sub_82391640(ctx, base);
	// stw r3,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8239222c
	if (ctx.cr0.eq) goto loc_8239222C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238c400
	ctx.lr = 0x8239220C;
	sub_8238C400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82392230
	goto loc_82392230;
loc_82392214:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,3021
	ctx.r5.s64 = 3021;
	// addi r6,r11,30004
	ctx.r6.s64 = ctx.r11.s64 + 30004;
loc_82392220:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82389c88
	ctx.lr = 0x8239222C;
	sub_82389C88(ctx, base);
loc_8239222C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82392230:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A5618) {
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
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x823a5648
	goto loc_823A5648;
loc_823A563C:
	// lwz r31,36(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a566c
	if (ctx.cr6.eq) goto loc_823A566C;
loc_823A5648:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a3580
	ctx.lr = 0x823A5660;
	sub_823A3580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823a563c
	if (!ctx.cr0.lt) goto loc_823A563C;
	// b 0x823a5670
	goto loc_823A5670;
loc_823A566C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A5670:
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

DEFINE_REX_FUNC(sub_823A6AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,2380(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2380);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,1952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1952);
	ctx.f10.f64 = double(temp.f32);
loc_823A6AF4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x823a6b10
	if (!ctx.cr6.eq) goto loc_823A6B10;
	// stfs f9,-12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f9,-8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// b 0x823a6b70
	goto loc_823A6B70;
loc_823A6B10:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x823a6b70
	if (!ctx.cr6.lt) goto loc_823A6B70;
	// lfs f0,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823a6b30
	if (!ctx.cr6.lt) goto loc_823A6B30;
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x823a6b34
	goto loc_823A6B34;
loc_823A6B30:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_823A6B34:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823a6b4c
	if (!ctx.cr6.lt) goto loc_823A6B4C;
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x823a6b50
	goto loc_823A6B50;
loc_823A6B4C:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_823A6B50:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823a6b68
	if (!ctx.cr6.lt) goto loc_823A6B68;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x823a6b6c
	goto loc_823A6B6C;
loc_823A6B68:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_823A6B6C:
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_823A6B70:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823a6af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A6AF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A9CA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823A9CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823cc1c8
	ctx.lr = 0x823A9CC4;
	sub_823CC1C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823a9cec
	if (ctx.cr0.lt) goto loc_823A9CEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9CEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A9CEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AA060) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823AA0A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823AA488) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823c98a8
	ctx.lr = 0x823AA4A8;
	sub_823C98A8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-2784
	ctx.r10.s64 = ctx.r10.s64 + -2784;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,1532(r31)
	REX_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// stw r11,1536(r31)
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// stw r11,1676(r31)
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// stw r9,1816(r31)
	REX_STORE_U32(ctx.r31.u32 + 1816, ctx.r9.u32);
	// stw r11,1812(r31)
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// stw r11,1808(r31)
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// bl 0x8236c550
	ctx.lr = 0x823AA4EC;
	sub_8236C550(ctx, base);
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

DEFINE_REX_FUNC(sub_823AACB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x823AACC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823aade4
	if (ctx.cr6.eq) goto loc_823AADE4;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823aade4
	if (!ctx.cr6.gt) goto loc_823AADE4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r26,r8,16476
	ctx.r26.s64 = ctx.r8.s64 + 16476;
	// addi r28,r9,-1968
	ctx.r28.s64 = ctx.r9.s64 + -1968;
	// addi r29,r10,-6944
	ctx.r29.s64 = ctx.r10.s64 + -6944;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
loc_823AAD10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AAD18;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aade8
	if (ctx.cr0.lt) goto loc_823AADE8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AAD34;
	sub_821FCD80(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823AAD4C;
	sub_821FCD80(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x823aad64
	if (!ctx.cr6.eq) goto loc_823AAD64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_823AAD64:
	// bl 0x823aa558
	ctx.lr = 0x823AAD68;
	sub_823AA558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823aade8
	if (ctx.cr6.lt) goto loc_823AADE8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x823aad80
	if (!ctx.cr6.eq) goto loc_823AAD80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x823aad9c
	goto loc_823AAD9C;
loc_823AAD80:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821fcd80
	ctx.lr = 0x823AAD98;
	sub_821FCD80(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_823AAD9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AADB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aade8
	if (ctx.cr0.lt) goto loc_823AADE8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AADCC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823aade8
	if (ctx.cr0.lt) goto loc_823AADE8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823aad10
	if (ctx.cr6.lt) goto loc_823AAD10;
loc_823AADE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AADE8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AD828) {
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
	// neg r10,r5
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r9,-904
	ctx.r4.s64 = ctx.r9.s64 + -904;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AD854;
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

DEFINE_REX_FUNC(sub_823AEF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823af018
	if (!ctx.cr6.eq) goto loc_823AF018;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823af018
	if (!ctx.cr6.eq) goto loc_823AF018;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823af018
	if (!ctx.cr6.eq) goto loc_823AF018;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x823af004
	if (ctx.cr6.lt) goto loc_823AF004;
	// beq cr6,0x823aeff8
	if (ctx.cr6.eq) goto loc_823AEFF8;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x823aefec
	if (ctx.cr6.lt) goto loc_823AEFEC;
	// beq cr6,0x823aefe0
	if (ctx.cr6.eq) goto loc_823AEFE0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823af034
	goto loc_823AF034;
loc_823AEFE0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// b 0x823af00c
	goto loc_823AF00C;
loc_823AEFEC:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-148
	ctx.r4.s64 = ctx.r10.s64 + -148;
	// b 0x823af00c
	goto loc_823AF00C;
loc_823AEFF8:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-168
	ctx.r4.s64 = ctx.r10.s64 + -168;
	// b 0x823af00c
	goto loc_823AF00C;
loc_823AF004:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-188
	ctx.r4.s64 = ctx.r10.s64 + -188;
loc_823AF00C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AF014;
	sub_823AA558(ctx, base);
	// b 0x823af034
	goto loc_823AF034;
loc_823AF018:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-224
	ctx.r4.s64 = ctx.r10.s64 + -224;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AF034;
	sub_823AA558(ctx, base);
loc_823AF034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B3188) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r5,r11,-7428
	ctx.r5.s64 = ctx.r11.s64 + -7428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-23736
	ctx.r4.s64 = ctx.r10.s64 + -23736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B31B8;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8450
	ctx.lr = 0x823B31C0;
	sub_823C8450(ctx, base);
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

DEFINE_REX_FUNC(sub_823B33A0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2300
	ctx.r5.s64 = ctx.r11.s64 + 2300;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B33CC;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c96c8
	ctx.lr = 0x823B33D4;
	sub_823C96C8(ctx, base);
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

DEFINE_REX_FUNC(sub_823B3738) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r5,r11,2372
	ctx.r5.s64 = ctx.r11.s64 + 2372;
	// addi r4,r10,2360
	ctx.r4.s64 = ctx.r10.s64 + 2360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b3098
	ctx.lr = 0x823B3760;
	sub_823B3098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b3770
	if (ctx.cr0.lt) goto loc_823B3770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8b78
	ctx.lr = 0x823B3770;
	sub_823C8B78(ctx, base);
loc_823B3770:
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

DEFINE_REX_FUNC(sub_823B3C30) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2628
	ctx.r5.s64 = ctx.r11.s64 + 2628;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B3C5C;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8868
	ctx.lr = 0x823B3C64;
	sub_823C8868(ctx, base);
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

DEFINE_REX_FUNC(sub_823B5C98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823b5ce8
	if (!ctx.cr0.eq) goto loc_823B5CE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823B5CE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b5d30
	if (ctx.cr6.eq) goto loc_823B5D30;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B5CF8:
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// bdnz 0x823b5cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5CF8;
loc_823B5D30:
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BA130) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823ba1f0
	if (ctx.cr0.eq) goto loc_823BA1F0;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823BA16C:
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823ba268
	if (!ctx.cr6.eq) goto loc_823BA268;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,8(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823ba268
	if (!ctx.cr6.eq) goto loc_823BA268;
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,12(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823ba268
	if (!ctx.cr6.eq) goto loc_823BA268;
	// lwz r31,16(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,16(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823ba268
	if (!ctx.cr6.eq) goto loc_823BA268;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lis r31,8
	ctx.r31.s64 = 524288;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823ba268
	if (!ctx.cr6.eq) goto loc_823BA268;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823ba16c
	if (ctx.cr6.lt) goto loc_823BA16C;
loc_823BA1F0:
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwimi r10,r8,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beq cr6,0x823ba24c
	if (ctx.cr6.eq) goto loc_823BA24C;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ba24c
	if (ctx.cr0.eq) goto loc_823BA24C;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bl 0x82203350
	ctx.lr = 0x823BA24C;
	sub_82203350(ctx, base);
loc_823BA24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA250:
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
loc_823BA268:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ba250
	goto loc_823BA250;
}

DEFINE_REX_FUNC(sub_823BF7D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x823BF7E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r11,3600
	ctx.r31.s64 = ctx.r11.s64 + 3600;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// clrlwi r25,r10,12
	ctx.r25.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// bl 0x823b4100
	ctx.lr = 0x823BF850;
	sub_823B4100(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823bf884
	if (!ctx.cr6.eq) goto loc_823BF884;
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// lwz r4,260(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b4100
	ctx.lr = 0x823BF880;
	sub_823B4100(ctx, base);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_823BF884:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bfb0c
	if (!ctx.cr6.eq) goto loc_823BFB0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lfs f12,2380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
loc_823BF8A4:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bf944
	if (ctx.cr6.eq) goto loc_823BF944;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_823BF8C4:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823bf920
	if (ctx.cr0.eq) goto loc_823BF920;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823bf920
	if (!ctx.cr6.eq) goto loc_823BF920;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823bf910
	if (ctx.cr6.eq) goto loc_823BF910;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823bf914
	goto loc_823BF914;
loc_823BF910:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_823BF914:
	// lfd f11,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x823bf924
	if (ctx.cr6.eq) goto loc_823BF924;
loc_823BF920:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_823BF924:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x823bf8c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF8C4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823bf944
	if (ctx.cr6.eq) goto loc_823BF944;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x823bf8a4
	if (ctx.cr6.lt) goto loc_823BF8A4;
	// b 0x823bf950
	goto loc_823BF950;
loc_823BF944:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_823BF950:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bf9d4
	if (ctx.cr6.eq) goto loc_823BF9D4;
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r8,16(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_823BF96C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x823bf9bc
	if (ctx.cr0.eq) goto loc_823BF9BC;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x823bf9bc
	if (!ctx.cr6.eq) goto loc_823BF9BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823bf9ac
	if (ctx.cr6.eq) goto loc_823BF9AC;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x823bf9b0
	goto loc_823BF9B0;
loc_823BF9AC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_823BF9B0:
	// lfd f11,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x823bf9c0
	if (ctx.cr6.eq) goto loc_823BF9C0;
loc_823BF9BC:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_823BF9C0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823bf96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF96C;
	// addic r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
loc_823BF9D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823bf9e4
	if (!ctx.cr6.eq) goto loc_823BF9E4;
loc_823BF9DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823c05e8
	goto loc_823C05E8;
loc_823BF9E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bfa58
	if (ctx.cr6.eq) goto loc_823BFA58;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,20(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_823BFA00:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// beq cr6,0x823bfa3c
	if (ctx.cr6.eq) goto loc_823BFA3C;
	// lwz r7,72(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_823BFA20:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823bfa3c
	if (ctx.cr6.eq) goto loc_823BFA3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bfa20
	if (ctx.cr6.lt) goto loc_823BFA20;
loc_823BFA3C:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823bfa50
	if (!ctx.cr6.eq) goto loc_823BFA50;
	// lwz r11,72(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
loc_823BFA50:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823bfa00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BFA00;
loc_823BFA58:
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
loc_823BFA5C:
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823BFA60:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823c0268
	if (ctx.cr6.eq) goto loc_823C0268;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_823BFA70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823c038c
	if (ctx.cr6.eq) goto loc_823C038C;
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823c038c
	if (ctx.cr6.eq) goto loc_823C038C;
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bfaf0
	if (ctx.cr6.eq) goto loc_823BFAF0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_823BFAB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bfae4
	if (ctx.cr6.eq) goto loc_823BFAE4;
	// lwz r8,16(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BFACC:
	// lwzx r30,r11,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823bfadc
	if (!ctx.cr6.eq) goto loc_823BFADC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_823BFADC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823bfacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BFACC;
loc_823BFAE4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x823bfab4
	if (!ctx.cr0.eq) goto loc_823BFAB4;
loc_823BFAF0:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0264
	if (!ctx.cr6.eq) goto loc_823C0264;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bfa70
	if (ctx.cr6.lt) goto loc_823BFA70;
	// b 0x823c0268
	goto loc_823C0268;
loc_823BFB0C:
	// lwz r4,260(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// addi r5,r31,-160
	ctx.r5.s64 = ctx.r31.s64 + -160;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// clrlwi r25,r11,12
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x823b4100
	ctx.lr = 0x823BFB40;
	sub_823B4100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823bfb7c
	if (!ctx.cr6.eq) goto loc_823BFB7C;
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// lwz r4,260(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b4100
	ctx.lr = 0x823BFB74;
	sub_823B4100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_823BFB7C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823bfd1c
	if (!ctx.cr6.eq) goto loc_823BFD1C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bfd14
	if (ctx.cr6.eq) goto loc_823BFD14;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r4,20(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfd f0,2328(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 2328);
	// lfd f13,6880(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_823BFBB0:
	// lwz r11,-16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -16);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,64(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// lwzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r10,32(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,96(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r30,r30,0,23,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823bf9dc
	if (ctx.cr0.eq) goto loc_823BF9DC;
	// lwz r30,4(r5)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r30,r30,0,23,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823bf9dc
	if (ctx.cr0.eq) goto loc_823BF9DC;
	// lwz r30,4(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bf9dc
	if (ctx.cr0.eq) goto loc_823BF9DC;
	// lfd f12,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// lfd f12,32(r5)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lfd f12,32(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,136(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 136);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823bfcb8
	if (ctx.cr6.eq) goto loc_823BFCB8;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823BFCB8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823bfce8
	if (ctx.cr6.eq) goto loc_823BFCE8;
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_823BFCCC:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823bfce8
	if (ctx.cr6.eq) goto loc_823BFCE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bfccc
	if (ctx.cr6.lt) goto loc_823BFCCC;
loc_823BFCE8:
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823bfd04
	if (!ctx.cr6.eq) goto loc_823BFD04;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x823bfd04
	if (!ctx.cr6.eq) goto loc_823BFD04;
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
loc_823BFD04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823bfbb0
	if (ctx.cr6.lt) goto loc_823BFBB0;
loc_823BFD14:
	// addi r24,r1,240
	ctx.r24.s64 = ctx.r1.s64 + 240;
	// b 0x823bfa5c
	goto loc_823BFA5C;
loc_823BFD1C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x823c0250
	if (!ctx.cr6.eq) goto loc_823C0250;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b4100
	ctx.lr = 0x823BFD4C;
	sub_823B4100(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823c0000
	if (!ctx.cr0.eq) goto loc_823C0000;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bfa5c
	if (ctx.cr6.eq) goto loc_823BFA5C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lfd f12,6880(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 6880);
	// lfd f13,6896(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 6896);
	// lfd f0,2328(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 2328);
loc_823BFD84:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,-48(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + -48);
	// lwz r11,-16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r30,-32(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + -32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r9,64(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,16(r26)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r6,r6,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// bne cr6,0x823bfe24
	if (!ctx.cr6.eq) goto loc_823BFE24;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bfe24
	if (ctx.cr0.eq) goto loc_823BFE24;
	// lfd f11,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// beq cr6,0x823bfe44
	if (ctx.cr6.eq) goto loc_823BFE44;
loc_823BFE24:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823bfe48
	if (!ctx.cr6.eq) goto loc_823BFE48;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bfe48
	if (ctx.cr0.eq) goto loc_823BFE48;
	// lfd f11,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x823bfe48
	if (!ctx.cr6.eq) goto loc_823BFE48;
loc_823BFE44:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_823BFE48:
	// addi r24,r1,240
	ctx.r24.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823bff10
	if (!ctx.cr6.eq) goto loc_823BFF10;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// beq cr6,0x823bfe80
	if (ctx.cr6.eq) goto loc_823BFE80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823bfeb0
	if (ctx.cr6.eq) goto loc_823BFEB0;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bfeb0
	if (!ctx.cr6.eq) goto loc_823BFEB0;
loc_823BFE80:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r5,60(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bfeb0
	if (!ctx.cr6.eq) goto loc_823BFEB0;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bfeb0
	if (ctx.cr0.eq) goto loc_823BFEB0;
	// lfd f11,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x823bfeb0
	if (!ctx.cr6.eq) goto loc_823BFEB0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_823BFEB0:
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823bfed0
	if (ctx.cr6.eq) goto loc_823BFED0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823bff00
	if (ctx.cr6.eq) goto loc_823BFF00;
	// lwz r6,56(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bff00
	if (!ctx.cr6.eq) goto loc_823BFF00;
loc_823BFED0:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bff00
	if (!ctx.cr6.eq) goto loc_823BFF00;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bff00
	if (ctx.cr0.eq) goto loc_823BFF00;
	// lfd f11,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x823bff00
	if (!ctx.cr6.eq) goto loc_823BFF00;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_823BFF00:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823bf9dc
	if (ctx.cr6.eq) goto loc_823BF9DC;
	// addi r24,r1,224
	ctx.r24.s64 = ctx.r1.s64 + 224;
loc_823BFF10:
	// lwz r10,-64(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -64);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x823bff30
	if (!ctx.cr6.eq) goto loc_823BFF30;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BFF30:
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823bf9dc
	if (ctx.cr0.eq) goto loc_823BF9DC;
	// lfd f11,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bf9dc
	if (ctx.cr0.eq) goto loc_823BF9DC;
	// lfd f11,32(r9)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x823bf9dc
	if (!ctx.cr6.eq) goto loc_823BF9DC;
	// lwzx r10,r24,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwz r8,136(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 136);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823bffa0
	if (ctx.cr6.eq) goto loc_823BFFA0;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823BFFA0:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823bffd0
	if (ctx.cr6.eq) goto loc_823BFFD0;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_823BFFB4:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823bffd0
	if (ctx.cr6.eq) goto loc_823BFFD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bffb4
	if (ctx.cr6.lt) goto loc_823BFFB4;
loc_823BFFD0:
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823bffec
	if (!ctx.cr6.eq) goto loc_823BFFEC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x823bffec
	if (!ctx.cr6.eq) goto loc_823BFFEC;
	// lwz r11,72(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
loc_823BFFEC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823bfd84
	if (ctx.cr6.lt) goto loc_823BFD84;
	// b 0x823bfa5c
	goto loc_823BFA5C;
loc_823C0000:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823c005c
	if (ctx.cr0.eq) goto loc_823C005C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b5d48
	ctx.lr = 0x823C0028;
	sub_823B5D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823c004c
	if (ctx.cr0.eq) goto loc_823C004C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b63e0
	ctx.lr = 0x823C0044;
	sub_823B63E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823c005c
	if (!ctx.cr0.eq) goto loc_823C005C;
loc_823C004C:
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// b 0x823c006c
	goto loc_823C006C;
loc_823C005C:
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_823C006C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823c0234
	if (ctx.cr6.eq) goto loc_823C0234;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0234
	if (!ctx.cr6.eq) goto loc_823C0234;
	// clrlwi r25,r11,12
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// neg r31,r25
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r25.u64);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfd f0,2328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
loc_823C00A4:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c0168
	if (ctx.cr6.eq) goto loc_823C0168;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_823C00B8:
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r27,r5,r9
	ctx.r27.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r8,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r27,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// lwz r27,60(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r27,r27,0,12,12
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r27,0(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x823c00fc
	if (ctx.cr0.eq) goto loc_823C00FC;
	// rlwinm. r27,r27,0,28,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// b 0x823c0100
	goto loc_823C0100;
loc_823C00FC:
	// rlwinm. r27,r27,0,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
loc_823C0100:
	// beq 0x823c0168
	if (ctx.cr0.eq) goto loc_823C0168;
	// lwz r27,4(r8)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r24,16(r26)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r27,r24
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// lwz r27,4(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r27,r27,0,23,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x823c0168
	if (ctx.cr0.eq) goto loc_823C0168;
	// lfd f13,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823c0168
	if (!ctx.cr6.eq) goto loc_823C0168;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x823c0168
	if (!ctx.cr6.eq) goto loc_823C0168;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,136(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 136);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823c0158
	if (ctx.cr6.eq) goto loc_823C0158;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823C0158:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823c00b8
	if (ctx.cr6.lt) goto loc_823C00B8;
loc_823C0168:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823c0188
	if (ctx.cr6.eq) goto loc_823C0188;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x823c00a4
	if (ctx.cr6.lt) goto loc_823C00A4;
	// b 0x823c0224
	goto loc_823C0224;
loc_823C0188:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c0224
	if (ctx.cr6.eq) goto loc_823C0224;
	// mullw r9,r30,r25
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r25.s32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823C01B0:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823c0218
	if (!ctx.cr6.eq) goto loc_823C0218;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823c01f8
	if (ctx.cr6.eq) goto loc_823C01F8;
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_823C01DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823c01f8
	if (ctx.cr6.eq) goto loc_823C01F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823c01dc
	if (ctx.cr6.lt) goto loc_823C01DC;
loc_823C01F8:
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823c021c
	if (!ctx.cr6.eq) goto loc_823C021C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x823c021c
	if (!ctx.cr6.eq) goto loc_823C021C;
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// b 0x823c021c
	goto loc_823C021C;
loc_823C0218:
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823C021C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823c01b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C01B0;
loc_823C0224:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x823bf9dc
	if (ctx.cr6.eq) goto loc_823BF9DC;
	// addi r24,r1,128
	ctx.r24.s64 = ctx.r1.s64 + 128;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_823C0234:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823c0254
	if (ctx.cr6.eq) goto loc_823C0254;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82112fa8
	ctx.lr = 0x823C0244;
	sub_82112FA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ccf60
	ctx.lr = 0x823C024C;
	sub_823CCF60(ctx, base);
	// b 0x823c0254
	goto loc_823C0254;
loc_823C0250:
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823C0254:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823bfa60
	if (ctx.cr6.eq) goto loc_823BFA60;
loc_823C025C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823c05e8
	goto loc_823C05E8;
loc_823C0264:
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823C0268:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x823c038c
	if (!ctx.cr6.eq) goto loc_823C038C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c02c0
	if (ctx.cr6.eq) goto loc_823C02C0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_823C028C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,88(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c02a8
	if (!ctx.cr6.lt) goto loc_823C02A8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823C02A8:
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823c02b8
	if (!ctx.cr6.gt) goto loc_823C02B8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823C02B8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823c028c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C028C;
loc_823C02C0:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c04bc
	if (ctx.cr6.eq) goto loc_823C04BC;
	// lwz r4,24(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823C02D4:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c0378
	if (ctx.cr6.eq) goto loc_823C0378;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823c0310
	if (ctx.cr6.eq) goto loc_823C0310;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
loc_823C02F4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823c0310
	if (ctx.cr6.eq) goto loc_823C0310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823c02f4
	if (ctx.cr6.lt) goto loc_823C02F4;
loc_823C0310:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823c0378
	if (!ctx.cr6.eq) goto loc_823C0378;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c0378
	if (ctx.cr6.eq) goto loc_823C0378;
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_823C032C:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// beq cr6,0x823c036c
	if (ctx.cr6.eq) goto loc_823C036C;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_823C0348:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823c0360
	if (ctx.cr6.eq) goto loc_823C0360;
	// lwz r31,56(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823c0364
	if (!ctx.cr6.eq) goto loc_823C0364;
loc_823C0360:
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_823C0364:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823c0348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0348;
loc_823C036C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823c032c
	if (!ctx.cr0.eq) goto loc_823C032C;
loc_823C0378:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x823c02d4
	if (!ctx.cr0.eq) goto loc_823C02D4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823c04bc
	if (ctx.cr6.eq) goto loc_823C04BC;
loc_823C038C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x823ccf08
	ctx.lr = 0x823C0394;
	sub_823CCF08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823c03a8
	if (ctx.cr0.eq) goto loc_823C03A8;
	// bl 0x823cc810
	ctx.lr = 0x823C03A0;
	sub_823CC810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823c03ac
	goto loc_823C03AC;
loc_823C03A8:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_823C03AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823bf9dc
	if (ctx.cr6.eq) goto loc_823BF9DC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r21,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ccfa0
	ctx.lr = 0x823C03D0;
	sub_823CCFA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x823c03ec
	if (!ctx.cr0.lt) goto loc_823C03EC;
loc_823C03DC:
	// bl 0x82112fa8
	ctx.lr = 0x823C03E0;
	sub_82112FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ccf60
	ctx.lr = 0x823C03E8;
	sub_823CCF60(ctx, base);
	// b 0x823c025c
	goto loc_823C025C;
loc_823C03EC:
	// lwz r4,260(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// bl 0x823cc860
	ctx.lr = 0x823C03F4;
	sub_823CC860(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823c0404
	if (!ctx.cr0.lt) goto loc_823C0404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823c03dc
	goto loc_823C03DC;
loc_823C0404:
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82203350
	ctx.lr = 0x823C0418;
	sub_82203350(ctx, base);
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82203350
	ctx.lr = 0x823C042C;
	sub_82203350(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c0464
	if (ctx.cr6.eq) goto loc_823C0464;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_823C043C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// ori r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 512;
	// stw r9,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// bdnz 0x823c043c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C043C;
loc_823C0464:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823c0480
	if (ctx.cr6.eq) goto loc_823C0480;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_823C0474:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r22,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// bdnz 0x823c0474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0474;
loc_823C0480:
	// lwz r11,256(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 256);
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823c04a8
	if (ctx.cr6.eq) goto loc_823C04A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112fa8
	ctx.lr = 0x823C04A0;
	sub_82112FA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ccf60
	ctx.lr = 0x823C04A8;
	sub_823CCF60(ctx, base);
loc_823C04A8:
	// lwz r11,256(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 256);
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// b 0x823c05e4
	goto loc_823C05E4;
loc_823C04BC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823c05bc
	if (ctx.cr6.eq) goto loc_823C05BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_823C04CC:
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823c0588
	if (ctx.cr6.eq) goto loc_823C0588;
loc_823C04F0:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823c057c
	if (!ctx.cr6.gt) goto loc_823C057C;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_823C0508:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r30,r8,r24
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823c0568
	if (!ctx.cr6.eq) goto loc_823C0568;
	// lwz r9,260(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// lwz r30,16(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,20(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r30,60(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// ori r30,r30,512
	ctx.r30.u64 = ctx.r30.u64 | 512;
	// stw r30,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r30.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,20(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r7,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r7.u32);
loc_823C0568:
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823c0508
	if (ctx.cr6.lt) goto loc_823C0508;
loc_823C057C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823c04f0
	if (ctx.cr6.lt) goto loc_823C04F0;
loc_823C0588:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823c05b0
	if (ctx.cr6.eq) goto loc_823C05B0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_823C0598:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823c05a8
	if (!ctx.cr6.eq) goto loc_823C05A8;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_823C05A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c0598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0598;
loc_823C05B0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x823c04cc
	if (!ctx.cr0.eq) goto loc_823C04CC;
loc_823C05BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823c05e4
	if (ctx.cr6.eq) goto loc_823C05E4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_823C05CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c05dc
	if (ctx.cr6.eq) goto loc_823C05DC;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_823C05DC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c05cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C05CC;
loc_823C05E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C05E8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82409090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82409098;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// stw r11,308(r3)
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r10,14224
	ctx.r6.s64 = ctx.r10.s64 + 14224;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x824028a0
	ctx.lr = 0x824090CC;
	sub_824028A0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824076a0
	ctx.lr = 0x824090E0;
	sub_824076A0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82409128
	if (ctx.cr6.gt) goto loc_82409128;
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x8240911c
	if (ctx.cr6.eq) goto loc_8240911C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21916
	ctx.r4.s64 = ctx.r11.s64 + -21916;
	// bl 0x82403790
	ctx.lr = 0x82409110;
	sub_82403790(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82409190
	goto loc_82409190;
loc_8240911C:
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82409128:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82408130
	ctx.lr = 0x82409134;
	sub_82408130(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821b9368
	ctx.lr = 0x82409140;
	sub_821B9368(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409160
	if (ctx.cr6.eq) goto loc_82409160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b9520
	ctx.lr = 0x82409160;
	sub_821B9520(ctx, base);
loc_82409160:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240918c
	if (ctx.cr6.eq) goto loc_8240918C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,40(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241bfd8
	ctx.lr = 0x8240918C;
	sub_8241BFD8(ctx, base);
loc_8240918C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409190:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240C598) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240C5D0) {
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
	// b 0x8240c624
	goto loc_8240C624;
loc_8240C5EC:
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240c60c
	if (!ctx.cr0.eq) goto loc_8240C60C;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240c618
	if (!ctx.cr0.eq) goto loc_8240C618;
loc_8240C60C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821f4b88
	ctx.lr = 0x8240C618;
	sub_821F4B88(ctx, base);
loc_8240C618:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x8240C624;
	sub_821F4B88(ctx, base);
loc_8240C624:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240c5ec
	if (!ctx.cr6.eq) goto loc_8240C5EC;
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

DEFINE_REX_FUNC(sub_8240E510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8240E518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,76
	ctx.r5.s64 = ctx.r3.s64 + 76;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8240dbf0
	ctx.lr = 0x8240E52C;
	sub_8240DBF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,56(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240e56c
	if (ctx.cr6.eq) goto loc_8240E56C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8240E540:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8240e540
	if (ctx.cr6.lt) goto loc_8240E540;
loc_8240E56C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// bl 0x823ce810
	ctx.lr = 0x8240E580;
	sub_823CE810(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240e5c8
	if (!ctx.cr6.gt) goto loc_8240E5C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8240E594:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8240dd60
	ctx.lr = 0x8240E5A4;
	sub_8240DD60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240e5cc
	if (ctx.cr0.lt) goto loc_8240E5CC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240e5d4
	if (ctx.cr6.eq) goto loc_8240E5D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240e594
	if (ctx.cr6.lt) goto loc_8240E594;
loc_8240E5C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8240E5CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_8240E5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240e5cc
	goto loc_8240E5CC;
}

DEFINE_REX_FUNC(sub_82410E78) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82410cb8
	sub_82410CB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82410E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// addi r11,r11,6456
	ctx.r11.s64 = ctx.r11.s64 + 6456;
	// lfs f13,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82410ebc
	if (!ctx.cr6.gt) goto loc_82410EBC;
	// lfd f12,48(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82410eb0
	if (!ctx.cr6.gt) goto loc_82410EB0;
	// lfd f0,8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82410f4c
	goto loc_82410F4C;
loc_82410EB0:
	// li r10,2
	ctx.r10.s64 = 2;
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// b 0x82410ec0
	goto loc_82410EC0;
loc_82410EBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82410EC0:
	// lfd f12,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82410ee0
	if (!ctx.cr6.gt) goto loc_82410EE0;
	// lfd f12,40(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmsub f0,f12,f0,f13
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64);
	// fdiv f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 / ctx.f11.f64;
loc_82410EE0:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f12.f64);
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64);
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f9.f64);
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f8.f64);
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f7.f64);
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f6.f64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// ble cr6,0x82410f3c
	if (!ctx.cr6.gt) goto loc_82410F3C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82410F3C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_82410F4C:
	// ld r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_64) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// stvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_121) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_126) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82411918) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82411928:
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82411944
	if (ctx.cr0.eq) goto loc_82411944;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82411928
	if (!ctx.cr0.eq) goto loc_82411928;
loc_82411944:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82411968:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82411968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411968;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82412E04) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82208b00
	ctx.lr = 0x82412E18;
	sub_82208B00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82413320;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF000000;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1400(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1400);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241339c
	if (ctx.cr6.eq) goto loc_8241339C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82413398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824133a0
	goto loc_824133A0;
loc_8241339C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824133A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824133b0
	if (!ctx.cr6.gt) goto loc_824133B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241342c
	goto loc_8241342C;
loc_824133B0:
	// blt cr6,0x82413428
	if (ctx.cr6.lt) goto loc_82413428;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82411154
	ctx.lr = 0x824133C4;
	sub_82411154(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82203350
	ctx.lr = 0x824133F8;
	sub_82203350(ctx, base);
	// lwz r11,1400(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1400);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82413428
	if (ctx.cr6.eq) goto loc_82413428;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82413424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8241342c
	goto loc_8241342C;
loc_82413428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241342C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82417028) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x82417030;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82416148
	ctx.lr = 0x82417044;
	sub_82416148(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r20,r11,-5116
	ctx.r20.s64 = ctx.r11.s64 + -5116;
	// addi r21,r10,-5152
	ctx.r21.s64 = ctx.r10.s64 + -5152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x824160f0
	ctx.lr = 0x82417064;
	sub_824160F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416ea0
	ctx.lr = 0x8241706C;
	sub_82416EA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824171a4
	if (!ctx.cr6.lt) goto loc_824171A4;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r22,r5,14352
	ctx.r22.s64 = ctx.r5.s64 + 14352;
	// addi r27,r6,-5252
	ctx.r27.s64 = ctx.r6.s64 + -5252;
	// addi r26,r7,-5276
	ctx.r26.s64 = ctx.r7.s64 + -5276;
	// addi r25,r8,-5124
	ctx.r25.s64 = ctx.r8.s64 + -5124;
	// addi r24,r9,-5132
	ctx.r24.s64 = ctx.r9.s64 + -5132;
	// addi r23,r10,-5136
	ctx.r23.s64 = ctx.r10.s64 + -5136;
	// addi r29,r11,-5144
	ctx.r29.s64 = ctx.r11.s64 + -5144;
loc_824170C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416148
	ctx.lr = 0x824170CC;
	sub_82416148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824160f0
	ctx.lr = 0x824170DC;
	sub_824160F0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824160f0
	ctx.lr = 0x824170F0;
	sub_824160F0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416308
	ctx.lr = 0x82417100;
	sub_82416308(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x824160f0
	ctx.lr = 0x82417118;
	sub_824160F0(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417184
	if (ctx.cr6.eq) goto loc_82417184;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x824160f0
	ctx.lr = 0x82417130;
	sub_824160F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82417144:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417144
	if (!ctx.cr6.eq) goto loc_82417144;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82417174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416218
	ctx.lr = 0x82417180;
	sub_82416218(ctx, base);
	// b 0x82417188
	goto loc_82417188;
loc_82417184:
	// bl 0x82416e50
	ctx.lr = 0x82417188;
	sub_82416E50(ctx, base);
loc_82417188:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824170c4
	if (ctx.cr6.lt) goto loc_824170C4;
loc_824171A4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824161a8
	ctx.lr = 0x824171B0;
	sub_824161A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8241CCF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x8241cd40
	if (!ctx.cr6.eq) goto loc_8241CD40;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x8241cd0c
	if (!ctx.cr6.lt) goto loc_8241CD0C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8241CD0C:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241cd40
	if (ctx.cr6.eq) goto loc_8241CD40;
loc_8241CD20:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8241cd48
	if (ctx.cr6.eq) goto loc_8241CD48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8241cd20
	if (ctx.cr6.lt) goto loc_8241CD20;
loc_8241CD40:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8241CD48:
	// rlwinm r11,r9,24,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF0;
	// rlwinm r10,r9,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241EE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8241EE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ef28
	if (ctx.cr6.eq) goto loc_8241EF28;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8241eeb4
	if (!ctx.cr6.gt) goto loc_8241EEB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8241ef2c
	goto loc_8241EF2C;
loc_8241EEB4:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,16(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ef28
	if (ctx.cr6.eq) goto loc_8241EF28;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x8241ef28
	if (ctx.cr6.eq) goto loc_8241EF28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,13272
	ctx.r29.s64 = ctx.r11.s64 + 13272;
loc_8241EEE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bl 0x8241cd78
	ctx.lr = 0x8241EEFC;
	sub_8241CD78(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241eb88
	ctx.lr = 0x8241EF1C;
	sub_8241EB88(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x8241eee0
	if (!ctx.cr0.eq) goto loc_8241EEE0;
loc_8241EF28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241EF2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82422664) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82422A10) {
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
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422ab0
	if (ctx.cr0.eq) goto loc_82422AB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82422a68
	if (!ctx.cr6.eq) goto loc_82422A68;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2480(r11)
	REX_STORE_U32(ctx.r11.u32 + 2480, ctx.r10.u32);
	// b 0x82422ab0
	goto loc_82422AB0;
loc_82422A68:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,16389
	ctx.r4.u64 = ctx.r11.u64 | 16389;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82422590
	ctx.lr = 0x82422A88;
	sub_82422590(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8239cbd0
	ctx.lr = 0x82422A90;
	sub_8239CBD0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82422ad8
	goto loc_82422AD8;
loc_82422AB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,2480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2480);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82422ad4
	if (ctx.cr6.lt) goto loc_82422AD4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82422AD4:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82422AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82427860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82427868;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82427914
	if (ctx.cr6.lt) goto loc_82427914;
	// bl 0x82413700
	ctx.lr = 0x82427898;
	sub_82413700(ctx, base);
	// b 0x82427914
	goto loc_82427914;
loc_8242789C:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82427940
	if (!ctx.cr0.eq) goto loc_82427940;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x824278c4
	if (!ctx.cr6.eq) goto loc_824278C4;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82427900
	goto loc_82427900;
loc_824278C4:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x824278fc
	if (ctx.cr6.eq) goto loc_824278FC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824278fc
	if (ctx.cr6.eq) goto loc_824278FC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x824278e4
	if (!ctx.cr6.eq) goto loc_824278E4;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x82427900
	goto loc_82427900;
loc_824278E4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82427580
	ctx.lr = 0x824278F4;
	sub_82427580(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82427904
	goto loc_82427904;
loc_824278FC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82427900:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82427904:
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82427940
	if (ctx.cr6.gt) goto loc_82427940;
loc_82427914:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8242789c
	if (!ctx.cr6.eq) goto loc_8242789C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82427940
	if (!ctx.cr6.eq) goto loc_82427940;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82427938:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_82427940:
	// bl 0x82413700
	ctx.lr = 0x82427944;
	sub_82413700(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82427938
	goto loc_82427938;
}

DEFINE_REX_FUNC(sub_8242C4B0) {
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
	// bne cr6,0x8242c4ec
	if (!ctx.cr6.eq) goto loc_8242C4EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,11512
	ctx.r6.s64 = ctx.r11.s64 + 11512;
	// addi r5,r10,11956
	ctx.r5.s64 = ctx.r10.s64 + 11956;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x82428090
	ctx.lr = 0x8242C4EC;
	sub_82428090(ctx, base);
loc_8242C4EC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_8242CE40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8242CE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-3532
	ctx.r29.s64 = ctx.r11.s64 + -3532;
	// addi r28,r10,11512
	ctx.r28.s64 = ctx.r10.s64 + 11512;
	// bne cr6,0x8242ce88
	if (!ctx.cr6.eq) goto loc_8242CE88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,12116
	ctx.r5.s64 = ctx.r11.s64 + 12116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8242CE88;
	sub_82428090(ctx, base);
loc_8242CE88:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8242b4f0
	ctx.lr = 0x8242CE90;
	sub_8242B4F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8242ceb4
	if (!ctx.cr0.eq) goto loc_8242CEB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,11500
	ctx.r5.s64 = ctx.r11.s64 + 11500;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8242CEB4;
	sub_82428090(ctx, base);
loc_8242CEB4:
	// stw r27,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242cd78
	ctx.lr = 0x8242CEC4;
	sub_8242CD78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242E588) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8242E590;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242e5d0
	if (!ctx.cr6.eq) goto loc_8242E5D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,12336
	ctx.r6.s64 = ctx.r11.s64 + 12336;
	// addi r5,r10,11396
	ctx.r5.s64 = ctx.r10.s64 + 11396;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// bl 0x82428090
	ctx.lr = 0x8242E5D0;
	sub_82428090(ctx, base);
loc_8242E5D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8242ed18
	ctx.lr = 0x8242E5E4;
	sub_8242ED18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824312A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x824312A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r10,r4,21
	ctx.r10.u64 = ctx.r4.u32 & 0x7FF;
	// rlwimi r11,r4,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r25,r4,0,12,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824313f4
	if (ctx.cr6.eq) goto loc_824313F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824313bc
	if (ctx.cr6.eq) goto loc_824313BC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x824313a8
	if (ctx.cr6.eq) goto loc_824313A8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82431314
	if (ctx.cr6.eq) goto loc_82431314;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// bne cr6,0x824313fc
	if (!ctx.cr6.eq) goto loc_824313FC;
	// li r29,32
	ctx.r29.s64 = 32;
	// b 0x824313fc
	goto loc_824313FC;
loc_82431314:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x82431338
	if (!ctx.cr6.lt) goto loc_82431338;
	// lwz r11,1600(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1600);
	// li r30,17
	ctx.r30.s64 = 17;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824313fc
	if (!ctx.cr6.gt) goto loc_824313FC;
	// stw r10,1600(r27)
	REX_STORE_U32(ctx.r27.u32 + 1600, ctx.r10.u32);
	// b 0x824313fc
	goto loc_824313FC;
loc_82431338:
	// li r30,11
	ctx.r30.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r27,1604
	ctx.r9.s64 = ctx.r27.s64 + 1604;
loc_82431344:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82431368
	if (ctx.cr6.eq) goto loc_82431368;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82431344
	if (ctx.cr6.lt) goto loc_82431344;
	// b 0x82431374
	goto loc_82431374;
loc_82431368:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r29,1605(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1605);
loc_82431374:
	// rlwinm r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824313fc
	if (!ctx.cr6.eq) goto loc_824313FC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lis r22,128
	ctx.r22.s64 = 8388608;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824313a0
	if (ctx.cr6.eq) goto loc_824313A0;
	// bl 0x82413700
	ctx.lr = 0x8243139C;
	sub_82413700(ctx, base);
	// b 0x824313fc
	goto loc_824313FC;
loc_824313A0:
	// lis r23,1
	ctx.r23.s64 = 65536;
	// b 0x824313fc
	goto loc_824313FC;
loc_824313A8:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r30,r11,18
	ctx.r30.s64 = ctx.r11.s64 + 18;
	// b 0x824313f8
	goto loc_824313F8;
loc_824313BC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824313ec
	if (ctx.cr6.eq) goto loc_824313EC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824313d4
	if (ctx.cr6.eq) goto loc_824313D4;
	// li r30,14
	ctx.r30.s64 = 14;
	// b 0x824313f8
	goto loc_824313F8;
loc_824313D4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,50
	ctx.r29.s64 = 50;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x824313fc
	goto loc_824313FC;
loc_824313EC:
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x824313f8
	goto loc_824313F8;
loc_824313F4:
	// li r30,3
	ctx.r30.s64 = 3;
loc_824313F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_824313FC:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82431410
	if (!ctx.cr6.eq) goto loc_82431410;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x82431444
	goto loc_82431444;
loc_82431410:
	// rlwinm. r11,r25,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82431420
	if (ctx.cr0.eq) goto loc_82431420;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82431420:
	// rlwinm. r11,r25,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243142c
	if (ctx.cr0.eq) goto loc_8243142C;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_8243142C:
	// rlwinm. r11,r25,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82431438
	if (ctx.cr0.eq) goto loc_82431438;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_82431438:
	// rlwinm. r11,r25,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82431444
	if (ctx.cr0.eq) goto loc_82431444;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_82431444:
	// rlwinm r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100000;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8243145c
	if (!ctx.cr6.eq) goto loc_8243145C;
	// li r10,256
	ctx.r10.s64 = 256;
loc_8243145C:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// beq cr6,0x82431484
	if (ctx.cr6.eq) goto loc_82431484;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// beq cr6,0x824314e8
	if (ctx.cr6.eq) goto loc_824314E8;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// ble cr6,0x824314e0
	if (!ctx.cr6.gt) goto loc_824314E0;
	// cmplwi cr6,r30,19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 19, ctx.xer);
	// ble cr6,0x824314d0
	if (!ctx.cr6.gt) goto loc_824314D0;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// bne cr6,0x824314e0
	if (!ctx.cr6.eq) goto loc_824314E0;
loc_82431484:
	// li r9,169
	ctx.r9.s64 = 169;
	// ori r11,r10,169
	ctx.r11.u64 = ctx.r10.u64 | 169;
loc_8243148C:
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82431528
	if (!ctx.cr6.eq) goto loc_82431528;
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x824314f8
	if (!ctx.cr6.eq) goto loc_824314F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824314f8
	if (!ctx.cr6.eq) goto loc_824314F8;
	// rlwinm r11,r30,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r24,21
	ctx.r9.u64 = ctx.r24.u32 & 0x7FF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | ctx.r23.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// b 0x82431568
	goto loc_82431568;
loc_824314D0:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x824314e0
	if (!ctx.cr6.lt) goto loc_824314E0;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
loc_824314E0:
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8243148c
	goto loc_8243148C;
loc_824314E8:
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// b 0x8243148c
	goto loc_8243148C;
loc_824314F8:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// oris r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 12582912;
	// clrlwi r8,r24,21
	ctx.r8.u64 = ctx.r24.u32 & 0x7FF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r9,r8,r23
	ctx.r9.u64 = ctx.r8.u64 | ctx.r23.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82431570
	goto loc_82431570;
loc_82431528:
	// cmplwi cr6,r9,85
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x82431550
	if (!ctx.cr6.eq) goto loc_82431550;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82431550
	if (!ctx.cr6.eq) goto loc_82431550;
	// rlwimi r29,r30,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r29,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82431570
	goto loc_82431570;
loc_82431550:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
loc_82431568:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82431570:
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824437D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824437D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82443890
	if (ctx.cr0.eq) goto loc_82443890;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82443804:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244382c
	if (ctx.cr6.eq) goto loc_8244382C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443824
	if (ctx.cr6.eq) goto loc_82443824;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244382c
	if (!ctx.cr0.eq) goto loc_8244382C;
loc_82443824:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82443804
	goto loc_82443804;
loc_8244382C:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,20,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
loc_82443838:
	// lwz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
loc_8244383C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82443930
	if (ctx.cr6.eq) goto loc_82443930;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443888
	if (ctx.cr0.eq) goto loc_82443888;
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443888
	if (ctx.cr0.eq) goto loc_82443888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243f228
	ctx.lr = 0x82443868;
	sub_8243F228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824430a8
	ctx.lr = 0x82443878;
	sub_824430A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82441f98
	ctx.lr = 0x82443888;
	sub_82441F98(ctx, base);
loc_82443888:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8244383c
	goto loc_8244383C;
loc_82443890:
	// lwz r10,20(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r10,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824438b4
	if (ctx.cr0.eq) goto loc_824438B4;
	// clrlwi r19,r10,20
	ctx.r19.u64 = ctx.r10.u32 & 0xFFF;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x824429c0
	ctx.lr = 0x824438B0;
	sub_824429C0(ctx, base);
	// b 0x82443838
	goto loc_82443838;
loc_824438B4:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x82443838
	if (ctx.cr6.eq) goto loc_82443838;
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
loc_824438C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82443918
	if (ctx.cr6.eq) goto loc_82443918;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824438e4
	if (ctx.cr6.eq) goto loc_824438E4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824438ec
	if (!ctx.cr0.eq) goto loc_824438EC;
loc_824438E4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824438c4
	goto loc_824438C4;
loc_824438EC:
	// rlwimi r11,r9,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r19,r11,31,20,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82443108
	ctx.lr = 0x82443900;
	sub_82443108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82441f98
	ctx.lr = 0x82443910;
	sub_82441F98(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82443838
	if (!ctx.cr6.eq) goto loc_82443838;
loc_82443918:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443838
	if (ctx.cr0.eq) goto loc_82443838;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824222f0
	ctx.lr = 0x82443930;
	sub_824222F0(ctx, base);
loc_82443930:
	// lwz r18,0(r21)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8244393C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82443ee0
	if (ctx.cr6.eq) goto loc_82443EE0;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x82443960
	if (!ctx.cr0.eq) goto loc_82443960;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82443964
	if (ctx.cr0.eq) goto loc_82443964;
loc_82443960:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82443964:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82443ecc
	if (ctx.cr0.eq) goto loc_82443ECC;
	// lwz r24,12(r18)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443984
	if (ctx.cr6.eq) goto loc_82443984;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82443988
	if (ctx.cr0.eq) goto loc_82443988;
loc_82443984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82443988:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82443ecc
	if (!ctx.cr0.eq) goto loc_82443ECC;
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443ecc
	if (ctx.cr0.eq) goto loc_82443ECC;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm. r11,r11,0,15,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82443ecc
	if (!ctx.cr0.eq) goto loc_82443ECC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x824439c8
	if (!ctx.cr6.eq) goto loc_824439C8;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82434d80
	ctx.lr = 0x824439C0;
	sub_82434D80(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x824439d0
	goto loc_824439D0;
loc_824439C8:
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x82441de0
	ctx.lr = 0x824439D0;
	sub_82441DE0(ctx, base);
loc_824439D0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82443028
	ctx.lr = 0x824439DC;
	sub_82443028(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82443aa8
	if (!ctx.cr6.eq) goto loc_82443AA8;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
loc_824439F4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82443aa8
	if (ctx.cr6.eq) goto loc_82443AA8;
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443a18
	if (ctx.cr0.eq) goto loc_82443A18;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443a7c
	if (ctx.cr0.eq) goto loc_82443A7C;
loc_82443A18:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82443a70
	if (ctx.cr6.eq) goto loc_82443A70;
loc_82443A28:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82443a74
	if (ctx.cr6.eq) goto loc_82443A74;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82443a48
	if (!ctx.cr0.eq) goto loc_82443A48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82443a68
	if (!ctx.cr6.eq) goto loc_82443A68;
loc_82443A48:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443ed4
	if (ctx.cr0.eq) goto loc_82443ED4;
	// lwz r11,28(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_82443A68:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82443a28
	if (!ctx.cr6.eq) goto loc_82443A28;
loc_82443A70:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82443A74:
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x824439f4
	goto loc_824439F4;
loc_82443A7C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82443aa0
	if (ctx.cr6.eq) goto loc_82443AA0;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82443aa0
	if (!ctx.cr0.eq) goto loc_82443AA0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// b 0x82443aa4
	goto loc_82443AA4;
loc_82443AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82443AA4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82443AA8:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82443AB0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82443acc
	if (!ctx.cr0.eq) goto loc_82443ACC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82443b08
	if (!ctx.cr0.eq) goto loc_82443B08;
loc_82443ACC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82443bd4
	if (!ctx.cr0.eq) goto loc_82443BD4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82441cf8
	ctx.lr = 0x82443ADC;
	sub_82441CF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82443bd4
	if (!ctx.cr0.eq) goto loc_82443BD4;
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// li r29,1
	ctx.r29.s64 = 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443afc
	if (ctx.cr0.eq) goto loc_82443AFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82443b08
	goto loc_82443B08;
loc_82443AFC:
	// lwz r11,16(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_82443B08:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82443bd4
	if (ctx.cr6.eq) goto loc_82443BD4;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r8,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443b88
	if (ctx.cr0.eq) goto loc_82443B88;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82443B24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82443b4c
	if (ctx.cr6.eq) goto loc_82443B4C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r7,r9,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82443b40
	if (!ctx.cr0.eq) goto loc_82443B40;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82443b24
	goto loc_82443B24;
loc_82443B40:
	// rlwinm. r10,r9,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82443b50
	if (!ctx.cr0.eq) goto loc_82443B50;
loc_82443B4C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82443B50:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82443b88
	if (ctx.cr0.eq) goto loc_82443B88;
loc_82443B58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82443b74
	if (ctx.cr6.eq) goto loc_82443B74;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82443b74
	if (!ctx.cr0.eq) goto loc_82443B74;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82443b58
	goto loc_82443B58;
loc_82443B74:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r8,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFF;
	// bl 0x824430a8
	ctx.lr = 0x82443B88;
	sub_824430A8(ctx, base);
loc_82443B88:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_82443B8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82443bcc
	if (ctx.cr6.eq) goto loc_82443BCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443bc4
	if (ctx.cr0.eq) goto loc_82443BC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443bc4
	if (ctx.cr0.eq) goto loc_82443BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243f228
	ctx.lr = 0x82443BB8;
	sub_8243F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824430a8
	ctx.lr = 0x82443BC4;
	sub_824430A8(ctx, base);
loc_82443BC4:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82443b8c
	goto loc_82443B8C;
loc_82443BCC:
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82443ab0
	if (!ctx.cr6.eq) goto loc_82443AB0;
loc_82443BD4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x82443df4
	if (ctx.cr6.eq) goto loc_82443DF4;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,0(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r25,r11,18,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
loc_82443BF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82443c48
	if (ctx.cr6.eq) goto loc_82443C48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443c40
	if (ctx.cr0.eq) goto loc_82443C40;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443c40
	if (ctx.cr0.eq) goto loc_82443C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243f228
	ctx.lr = 0x82443C20;
	sub_8243F228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// rlwinm r4,r29,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x82441908
	ctx.lr = 0x82443C34;
	sub_82441908(ctx, base);
	// andc r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r3.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_82443C40:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82443bf4
	goto loc_82443BF4;
loc_82443C48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82443dc8
	if (ctx.cr6.eq) goto loc_82443DC8;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82443dc8
	if (ctx.cr6.lt) goto loc_82443DC8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82443ca0
	if (!ctx.cr6.eq) goto loc_82443CA0;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82434d80
	ctx.lr = 0x82443C98;
	sub_82434D80(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x82443ca8
	goto loc_82443CA8;
loc_82443CA0:
	// addi r3,r22,4
	ctx.r3.s64 = ctx.r22.s64 + 4;
	// bl 0x82441de0
	ctx.lr = 0x82443CA8;
	sub_82441DE0(ctx, base);
loc_82443CA8:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82442fb0
	ctx.lr = 0x82443CB4;
	sub_82442FB0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r26,r23,4
	ctx.r26.s64 = ctx.r23.s64 + 4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82443cd0
	if (!ctx.cr0.eq) goto loc_82443CD0;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82443cdc
	goto loc_82443CDC;
loc_82443CD0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_82443CDC:
	// addi r28,r22,4
	ctx.r28.s64 = ctx.r22.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824426d8
	ctx.lr = 0x82443CE8;
	sub_824426D8(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82443d04
	if (!ctx.cr0.eq) goto loc_82443D04;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82443d18
	goto loc_82443D18;
loc_82443D04:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x82443D18;
	sub_82203A90(ctx, base);
loc_82443D18:
	// lwz r27,0(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
loc_82443D1C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82443da8
	if (ctx.cr6.eq) goto loc_82443DA8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443da0
	if (ctx.cr0.eq) goto loc_82443DA0;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443da0
	if (ctx.cr0.eq) goto loc_82443DA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8243f228
	ctx.lr = 0x82443D48;
	sub_8243F228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r31,r30,30,2,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82441908
	ctx.lr = 0x82443D64;
	sub_82441908(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82441908
	ctx.lr = 0x82443D78;
	sub_82441908(ctx, base);
	// andc r11,r3,r14
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r14.u64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443da0
	if (ctx.cr0.eq) goto loc_82443DA0;
	// rlwimi r11,r30,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x82441a08
	ctx.lr = 0x82443DA0;
	sub_82441A08(ctx, base);
loc_82443DA0:
	// lwz r27,4(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x82443d1c
	goto loc_82443D1C;
loc_82443DA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82442880
	ctx.lr = 0x82443DB8;
	sub_82442880(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82443dc8
	if (ctx.cr6.eq) goto loc_82443DC8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82443ea4
	goto loc_82443EA4;
loc_82443DC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82442880
	ctx.lr = 0x82443DD8;
	sub_82442880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824426d8
	ctx.lr = 0x82443DF0;
	sub_824426D8(ctx, base);
	// b 0x82443ea4
	goto loc_82443EA4;
loc_82443DF4:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r30,r19,28
	ctx.r30.u64 = ctx.r19.u32 & 0xF;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82443e60
	if (ctx.cr0.eq) goto loc_82443E60;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r9,r21,44
	ctx.r9.s64 = ctx.r21.s64 + 44;
	// rlwinm r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_82443E1C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82443e50
	if (!ctx.cr6.eq) goto loc_82443E50;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// andc r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r11.u64;
loc_82443E50:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82443e1c
	if (ctx.cr6.lt) goto loc_82443E1C;
loc_82443E60:
	// rlwinm r4,r19,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x82441908
	ctx.lr = 0x82443E70;
	sub_82441908(ctx, base);
	// andc r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82443e9c
	if (ctx.cr6.eq) goto loc_82443E9C;
loc_82443E7C:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf. r31,r10,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// or r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 | ctx.r29.u64;
	// bne 0x82443e7c
	if (!ctx.cr0.eq) goto loc_82443E7C;
loc_82443E9C:
	// rlwimi r29,r19,0,0,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82443EA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82442810
	ctx.lr = 0x82443EB0;
	sub_82442810(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82441f98
	ctx.lr = 0x82443EC0;
	sub_82441F98(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwimi r11,r31,13,7,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x1FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFE001FFF);
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_82443ECC:
	// lwz r18,4(r18)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x8244393c
	goto loc_8244393C;
loc_82443ED4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824222f0
	ctx.lr = 0x82443EE0;
	sub_824222F0(ctx, base);
loc_82443EE0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82443f00
	if (ctx.cr6.eq) goto loc_82443F00;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x82441de0
	ctx.lr = 0x82443EF0;
	sub_82441DE0(ctx, base);
	// lwz r10,976(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 976);
	// addi r11,r17,972
	ctx.r11.s64 = ctx.r17.s64 + 972;
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r23,976(r17)
	REX_STORE_U32(ctx.r17.u32 + 976, ctx.r23.u32);
loc_82443F00:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82443f20
	if (ctx.cr6.eq) goto loc_82443F20;
	// addi r3,r22,4
	ctx.r3.s64 = ctx.r22.s64 + 4;
	// bl 0x82441de0
	ctx.lr = 0x82443F10;
	sub_82441DE0(ctx, base);
	// lwz r10,976(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 976);
	// addi r11,r17,972
	ctx.r11.s64 = ctx.r17.s64 + 972;
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stw r22,976(r17)
	REX_STORE_U32(ctx.r17.u32 + 976, ctx.r22.u32);
loc_82443F20:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8246E1B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82486810) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x824868b0
	if (ctx.cr6.gt) goto loc_824868B0;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bge cr6,0x8248688c
	if (!ctx.cr6.lt) goto loc_8248688C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x824868c8
	if (ctx.cr6.lt) goto loc_824868C8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x8248688c
	if (!ctx.cr6.gt) goto loc_8248688C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x824868c8
	if (!ctx.cr6.gt) goto loc_824868C8;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// ble cr6,0x8248688c
	if (!ctx.cr6.gt) goto loc_8248688C;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x824868c8
	if (!ctx.cr6.gt) goto loc_824868C8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bgt cr6,0x824868c8
	if (ctx.cr6.gt) goto loc_824868C8;
loc_82486858:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,18,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
loc_82486864:
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
loc_82486868:
	// lhz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 16);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// ble cr6,0x82486918
	if (!ctx.cr6.gt) goto loc_82486918;
	// li r4,3528
	ctx.r4.s64 = 3528;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_8248688C:
	// rlwinm r11,r10,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x824868a0
	if (!ctx.cr6.gt) goto loc_824868A0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_824868A0:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82486864
	goto loc_82486864;
loc_824868B0:
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82486858
	if (ctx.cr6.eq) goto loc_82486858;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82486910
	if (ctx.cr6.eq) goto loc_82486910;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x82486910
	if (ctx.cr6.eq) goto loc_82486910;
loc_824868C8:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x824868dc
	if (ctx.cr6.lt) goto loc_824868DC;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824868e0
	if (!ctx.cr6.gt) goto loc_824868E0;
loc_824868DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824868E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82486858
	if (!ctx.cr0.eq) goto loc_82486858;
	// rlwinm. r11,r10,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824868fc
	if (ctx.cr0.eq) goto loc_824868FC;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// b 0x82486900
	goto loc_82486900;
loc_824868FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82486900:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// b 0x82486868
	goto loc_82486868;
loc_82486910:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_82486918:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// sth r11,18(r4)
	REX_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8248D370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8248D37C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8248d394
	if (ctx.cr6.eq) goto loc_8248D394;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8248d37c
	if (!ctx.cr6.eq) goto loc_8248D37C;
loc_8248D394:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r8,32640
	ctx.r8.s64 = 2139095040;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f0,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// stfdx f13,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8248DDC8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824348c0
	ctx.lr = 0x8248DDF4;
	sub_824348C0(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8248EA38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8248EA40;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8248eb44
	if (!ctx.cr6.eq) goto loc_8248EB44;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8248eb44
	if (ctx.cr6.eq) goto loc_8248EB44;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8248eab0
	if (ctx.cr6.eq) goto loc_8248EAB0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8248eaa8
	if (ctx.cr6.eq) goto loc_8248EAA8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8248eaa0
	if (ctx.cr6.eq) goto loc_8248EAA0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8248eb44
	if (!ctx.cr6.eq) goto loc_8248EB44;
	// li r28,20
	ctx.r28.s64 = 20;
	// b 0x8248eab4
	goto loc_8248EAB4;
loc_8248EAA0:
	// li r28,18
	ctx.r28.s64 = 18;
	// b 0x8248eab4
	goto loc_8248EAB4;
loc_8248EAA8:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x8248eab4
	goto loc_8248EAB4;
loc_8248EAB0:
	// li r28,19
	ctx.r28.s64 = 19;
loc_8248EAB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824f39c8
	ctx.lr = 0x8248EAD8;
	sub_824F39C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824f39c8
	ctx.lr = 0x8248EAFC;
	sub_824F39C8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r31,144(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r30,148(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x8248e530
	ctx.lr = 0x8248EB40;
	sub_8248E530(ctx, base);
	// b 0x8248eb48
	goto loc_8248EB48;
loc_8248EB44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248EB48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82491CE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82491CE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x82491D14;
	sub_824F4E90(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82491d38
	if (ctx.cr6.eq) goto loc_82491D38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x82491D34;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82491D38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x82491D40;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d338
	ctx.lr = 0x82491D58;
	sub_8243D338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82492CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82492CF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x82492D2C;
	sub_824F4E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824484a0
	ctx.lr = 0x82492D3C;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x82492D48;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82492d6c
	if (ctx.cr6.eq) goto loc_82492D6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x82492D68;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82492D6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x82492D74;
	sub_82448668(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824484a0
	ctx.lr = 0x82492D84;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x82492D90;
	sub_82448668(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8243d338
	ctx.lr = 0x82492DC0;
	sub_8243D338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8249A588) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x8249A590;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82434d80
	ctx.lr = 0x8249A5A8;
	sub_82434D80(ctx, base);
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = ctx.r25.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8249a674
	if (!ctx.cr0.eq) goto loc_8249A674;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8249a674
	if (ctx.cr0.eq) goto loc_8249A674;
loc_8249A5EC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8249a658
	if (!ctx.cr6.eq) goto loc_8249A658;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
loc_8249A600:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8249a658
	if (ctx.cr6.eq) goto loc_8249A658;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8249a644
	if (ctx.cr6.eq) goto loc_8249A644;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8249a644
	if (!ctx.cr0.eq) goto loc_8249A644;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ff720
	ctx.lr = 0x8249A634;
	sub_824FF720(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8249A644:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8249a600
	if (!ctx.cr6.eq) goto loc_8249A600;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x8249a600
	goto loc_8249A600;
loc_8249A658:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8249a674
	if (!ctx.cr0.eq) goto loc_8249A674;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249a5ec
	if (!ctx.cr6.eq) goto loc_8249A5EC;
loc_8249A674:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8249a71c
	if (!ctx.cr0.eq) goto loc_8249A71C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8249a71c
	if (ctx.cr0.eq) goto loc_8249A71C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8249a6e8
	if (!ctx.cr0.eq) goto loc_8249A6E8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82422290
	ctx.lr = 0x8249A6E8;
	sub_82422290(ctx, base);
loc_8249A6E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ff720
	ctx.lr = 0x8249A708;
	sub_824FF720(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8249a674
	goto loc_8249A674;
loc_8249A71C:
	// clrlwi. r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8249a72c
	if (ctx.cr0.eq) goto loc_8249A72C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824bb7d8
	ctx.lr = 0x8249A72C;
	sub_824BB7D8(ctx, base);
loc_8249A72C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8249a7b8
	if (ctx.cr6.eq) goto loc_8249A7B8;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249a7b8
	if (ctx.cr0.eq) goto loc_8249A7B8;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8249a7ac
	if (!ctx.cr0.eq) goto loc_8249A7AC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249a7ac
	if (ctx.cr6.eq) goto loc_8249A7AC;
loc_8249A778:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249a794
	if (ctx.cr0.eq) goto loc_8249A794;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8248edf8
	ctx.lr = 0x8249A794;
	sub_8248EDF8(ctx, base);
loc_8249A794:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8249a7ac
	if (!ctx.cr0.eq) goto loc_8249A7AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8249a778
	if (!ctx.cr6.eq) goto loc_8249A778;
loc_8249A7AC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8249A7B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B8880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822089b8
	ctx.lr = 0x824B8898;
	sub_822089B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x824b88c0
	if (!ctx.cr0.gt) goto loc_824B88C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x824b88b8
	if (!ctx.cr6.gt) goto loc_824B88B8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x824b88b8
	if (ctx.cr6.eq) goto loc_824B88B8;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x824b88c0
	if (!ctx.cr6.eq) goto loc_824B88C0;
loc_824B88B8:
	// bl 0x824b7368
	ctx.lr = 0x824B88BC;
	sub_824B7368(ctx, base);
	// b 0x824b8908
	goto loc_824B8908;
loc_824B88C0:
	// frsp f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r7,r11,17624
	ctx.r7.s64 = ctx.r11.s64 + 17624;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r10,29296
	ctx.r11.s64 = ctx.r10.s64 + 29296;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r7,768
	ctx.r10.s64 = ctx.r7.s64 + 768;
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// addi r8,r7,256
	ctx.r8.s64 = ctx.r7.s64 + 256;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x824b84c0
	ctx.lr = 0x824B8900;
	sub_824B84C0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_824B8908:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BA5F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824BA5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ba644
	if (ctx.cr6.eq) goto loc_824BA644;
	// rlwinm. r30,r4,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r29,r4,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// beq 0x824ba624
	if (ctx.cr0.eq) goto loc_824BA624;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82203a90
	ctx.lr = 0x824BA624;
	sub_82203A90(ctx, base);
loc_824BA624:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x824ba644
	if (ctx.cr6.eq) goto loc_824BA644;
	// subf r11,r29,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r9,r28
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r11.u32);
loc_824BA644:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BB7D8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824354c8
	ctx.lr = 0x824BB7FC;
	sub_824354C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824bb850
	if (!ctx.cr0.eq) goto loc_824BB850;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824bb850
	if (ctx.cr0.eq) goto loc_824BB850;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824BB818:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// rlwinm r9,r9,2,11,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FFFFC;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824bb850
	if (!ctx.cr0.eq) goto loc_824BB850;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bb818
	if (!ctx.cr6.eq) goto loc_824BB818;
loc_824BB850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x824ba7e0
	ctx.lr = 0x824BB85C;
	sub_824BA7E0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8243d2e0
	ctx.lr = 0x824BB874;
	sub_8243D2E0(ctx, base);
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

DEFINE_REX_FUNC(sub_824BC8F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x824BC8F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bca28
	if (ctx.cr6.eq) goto loc_824BCA28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824bca28
	if (!ctx.cr6.eq) goto loc_824BCA28;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_824BC924:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824bca1c
	if (ctx.cr6.eq) goto loc_824BCA1C;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x824bca1c
	if (!ctx.cr6.eq) goto loc_824BCA1C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824bc9f8
	if (!ctx.cr6.eq) goto loc_824BC9F8;
	// lwz r11,568(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bc974
	if (ctx.cr6.eq) goto loc_824BC974;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_824BC958:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bc9f0
	if (ctx.cr6.eq) goto loc_824BC9F0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bc958
	if (!ctx.cr6.eq) goto loc_824BC958;
loc_824BC974:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824BC978:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824bc9b8
	if (ctx.cr6.eq) goto loc_824BC9B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x824bc248
	ctx.lr = 0x824BC994;
	sub_824BC248(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bc9b8
	if (ctx.cr0.eq) goto loc_824BC9B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x824bc9b0
	if (ctx.cr6.eq) goto loc_824BC9B0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x824bc9b8
	if (!ctx.cr6.gt) goto loc_824BC9B8;
loc_824BC9B0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_824BC9B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bc9d0
	if (ctx.cr6.eq) goto loc_824BC9D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824bca04
	if (!ctx.cr6.eq) goto loc_824BCA04;
loc_824BC9D0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bc924
	if (!ctx.cr6.eq) goto loc_824BC924;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824bca10
	if (!ctx.cr6.eq) goto loc_824BCA10;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824222f0
	ctx.lr = 0x824BC9F0;
	sub_824222F0(ctx, base);
loc_824BC9F0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x824bc978
	goto loc_824BC978;
loc_824BC9F8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824222f0
	ctx.lr = 0x824BCA04;
	sub_824222F0(ctx, base);
loc_824BCA04:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824222f0
	ctx.lr = 0x824BCA10;
	sub_824222F0(ctx, base);
loc_824BCA10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_824BCA1C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824222f0
	ctx.lr = 0x824BCA28;
	sub_824222F0(ctx, base);
loc_824BCA28:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824222f0
	ctx.lr = 0x824BCA34;
	sub_824222F0(ctx, base);
}

DEFINE_REX_FUNC(sub_824BE748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824BE750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824BE778;
	sub_824F4E90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824be79c
	if (ctx.cr6.eq) goto loc_824BE79C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824BE798;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824BE79C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BE7A4;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x824be7c8
	if (ctx.cr6.eq) goto loc_824BE7C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824BE7C4;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824BE7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BE7D0;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BFED0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824BFED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824BFF00;
	sub_824F4E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824484a0
	ctx.lr = 0x824BFF10;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BFF1C;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x824bff40
	if (ctx.cr6.eq) goto loc_824BFF40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824BFF3C;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824BFF40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BFF48;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C2308) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C2328;
	sub_824BE2B0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// rlwimi r10,r30,2,16,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r10,r11,0,30,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r10.u64 & 0x1FFFC);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824C37E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x824C37E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824C380C;
	sub_824F4E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c2810
	ctx.lr = 0x824C381C;
	sub_824C2810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82448668
	ctx.lr = 0x824C3828;
	sub_82448668(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C4AE0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4b0c
	if (ctx.cr0.eq) goto loc_824C4B0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824c4b18
	goto loc_824C4B18;
loc_824C4B0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_824C4B18:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne 0x824c4b78
	if (!ctx.cr0.eq) goto loc_824C4B78;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82422290
	ctx.lr = 0x824C4B78;
	sub_82422290(ctx, base);
loc_824C4B78:
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

DEFINE_REX_FUNC(sub_824C8608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x824C8610;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82434d80
	ctx.lr = 0x824C862C;
	sub_82434D80(ctx, base);
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = ctx.r27.u64 | 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x824c8924
	goto loc_824C8924;
loc_824C8648:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824c87f0
	if (ctx.cr6.eq) goto loc_824C87F0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x824c8720
	if (ctx.cr6.eq) goto loc_824C8720;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x824c86b8
	if (ctx.cr6.eq) goto loc_824C86B8;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x824c88b0
	if (!ctx.cr6.eq) goto loc_824C88B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824bcca0
	ctx.lr = 0x824C867C;
	sub_824BCCA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c86a8
	if (ctx.cr6.eq) goto loc_824C86A8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824c86a8
	if (ctx.cr6.eq) goto loc_824C86A8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x824c86a8
	if (ctx.cr6.eq) goto loc_824C86A8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x824c8938
	if (!ctx.cr6.gt) goto loc_824C8938;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x824c8938
	if (ctx.cr6.gt) goto loc_824C8938;
loc_824C86A8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c870c
	goto loc_824C870C;
loc_824C86B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824c88b0
	if (ctx.cr6.lt) goto loc_824C88B0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x824c8944
	if (!ctx.cr6.eq) goto loc_824C8944;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c88b0
	if (ctx.cr6.eq) goto loc_824C88B0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c8950
	if (ctx.cr6.eq) goto loc_824C8950;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x824c895c
	if (ctx.cr6.eq) goto loc_824C895C;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824C870C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x824c88b0
	goto loc_824C88B0;
loc_824C8720:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c8754
	if (ctx.cr6.eq) goto loc_824C8754;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x824c8968
	if (!ctx.cr6.gt) goto loc_824C8968;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x824c8754
	if (!ctx.cr6.gt) goto loc_824C8754;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x824c8968
	if (!ctx.cr6.gt) goto loc_824C8968;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// ble cr6,0x824c875c
	if (!ctx.cr6.gt) goto loc_824C875C;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x824c8968
	if (!ctx.cr6.eq) goto loc_824C8968;
loc_824C8754:
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x824c885c
	goto loc_824C885C;
loc_824C875C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c8790
	if (!ctx.cr0.eq) goto loc_824C8790;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c8790
	if (ctx.cr0.eq) goto loc_824C8790;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c879c
	if (!ctx.cr6.gt) goto loc_824C879C;
loc_824C8790:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82442788
	ctx.lr = 0x824C879C;
	sub_82442788(ctx, base);
loc_824C879C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,36(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bne 0x824c87e8
	if (!ctx.cr0.eq) goto loc_824C87E8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c87e8
	if (ctx.cr0.eq) goto loc_824C87E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c8898
	if (!ctx.cr6.gt) goto loc_824C8898;
loc_824C87E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x824c8890
	goto loc_824C8890;
loc_824C87F0:
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c8850
	if (ctx.cr6.eq) goto loc_824C8850;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c882c
	if (!ctx.cr0.eq) goto loc_824C882C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c882c
	if (ctx.cr0.eq) goto loc_824C882C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c8838
	if (!ctx.cr6.gt) goto loc_824C8838;
loc_824C882C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82442788
	ctx.lr = 0x824C8838;
	sub_82442788(ctx, base);
loc_824C8838:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
loc_824C8850:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c88b0
	if (ctx.cr6.eq) goto loc_824C88B0;
loc_824C885C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c888c
	if (!ctx.cr0.eq) goto loc_824C888C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c888c
	if (ctx.cr0.eq) goto loc_824C888C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c8898
	if (!ctx.cr6.gt) goto loc_824C8898;
loc_824C888C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_824C8890:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82442788
	ctx.lr = 0x824C8898;
	sub_82442788(ctx, base);
loc_824C8898:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_824C88B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824c8974
	if (!ctx.cr0.eq) goto loc_824C8974;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c8974
	if (ctx.cr0.eq) goto loc_824C8974;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x824c8924
	if (!ctx.cr0.eq) goto loc_824C8924;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82422290
	ctx.lr = 0x824C8924;
	sub_82422290(ctx, base);
loc_824C8924:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824c8648
	if (!ctx.cr6.eq) goto loc_824C8648;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C8938;
	sub_824222F0(ctx, base);
loc_824C8938:
	// li r4,3514
	ctx.r4.s64 = 3514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C8944;
	sub_824222F0(ctx, base);
loc_824C8944:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C8950;
	sub_824222F0(ctx, base);
loc_824C8950:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C895C;
	sub_824222F0(ctx, base);
loc_824C895C:
	// li r4,3514
	ctx.r4.s64 = 3514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C8968;
	sub_824222F0(ctx, base);
loc_824C8968:
	// li r4,3514
	ctx.r4.s64 = 3514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C8974;
	sub_824222F0(ctx, base);
loc_824C8974:
	// lwz r10,976(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 976);
	// addi r11,r29,972
	ctx.r11.s64 = ctx.r29.s64 + 972;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r28,976(r29)
	REX_STORE_U32(ctx.r29.u32 + 976, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E6500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x824E6508;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,81
	ctx.r11.s64 = 81;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// sth r11,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// clrlwi r27,r6,16
	ctx.r27.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r11,r26,17,3,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 17) & 0x1FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFE000FFFF);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// sth r27,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r27.u16);
	// rlwinm r28,r10,11,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r26,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824e65d0
	if (ctx.cr6.eq) goto loc_824E65D0;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x824e65c8
	if (ctx.cr6.eq) goto loc_824E65C8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// beq cr6,0x824e65c0
	if (ctx.cr6.eq) goto loc_824E65C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,26040
	ctx.r6.s64 = ctx.r11.s64 + 26040;
	// addi r5,r10,20292
	ctx.r5.s64 = ctx.r10.s64 + 20292;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,10629
	ctx.r7.s64 = 10629;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E65C0;
	sub_82428090(ctx, base);
loc_824E65C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824e65d4
	goto loc_824E65D4;
loc_824E65C8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824e65d4
	goto loc_824E65D4;
loc_824E65D0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824E65D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,73
	ctx.r8.s64 = 73;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r7,r11,4,25,27
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,24,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r7,r11,12,17,19
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF8FFF);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r7,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// sth r8,6(r29)
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x824e6670
	if (ctx.cr6.eq) goto loc_824E6670;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x824e6664
	if (ctx.cr6.eq) goto loc_824E6664;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// beq cr6,0x824e665c
	if (ctx.cr6.eq) goto loc_824E665C;
	// li r8,85
	ctx.r8.s64 = 85;
	// b 0x824e667c
	goto loc_824E667C;
loc_824E665C:
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_824E6664:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r26,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_824E6670:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,5
	ctx.r7.s64 = 5;
	// rlwimi r8,r7,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
loc_824E667C:
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r8,r7,0,0,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r7,r8,0,28,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r7.u64 & 0x70);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r8,r7,0,24,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r8.u64 & 0x700);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r7,r8,0,20,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r7.u64 & 0x7000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e670c
	if (ctx.cr0.eq) goto loc_824E670C;
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E670C:
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// li r8,65
	ctx.r8.s64 = 65;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r26,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x824e6760
	if (ctx.cr6.eq) goto loc_824E6760;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x824e6768
	if (ctx.cr6.eq) goto loc_824E6768;
	// b 0x824e6774
	goto loc_824E6774;
loc_824E6760:
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824E6768:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r26,6,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824E6774:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e6800
	if (ctx.cr0.eq) goto loc_824E6800;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E6800:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r9,0,16,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r10.u64 & 0x3F0000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e6888
	if (ctx.cr0.eq) goto loc_824E6888;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_824E6888:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F2228) {
	REX_FUNC_PROLOGUE();
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824F223C:
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x824f223c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F223C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F3EE8) {
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
	// b 0x824f3f14
	goto loc_824F3F14;
loc_824F3F08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448db0
	ctx.lr = 0x824F3F14;
	sub_82448DB0(ctx, base);
loc_824F3F14:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824f3f08
	if (!ctx.cr6.eq) goto loc_824F3F08;
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

DEFINE_REX_FUNC(sub_824F54C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x824F54D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,212(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// clrlwi r25,r28,27
	ctx.r25.u64 = ctx.r28.u32 & 0x1F;
	// std r5,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r24,r28,27,28,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xF;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// beq cr6,0x824f552c
	if (ctx.cr6.eq) goto loc_824F552C;
	// cmplwi cr6,r25,14
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 14, ctx.xer);
	// beq cr6,0x824f552c
	if (ctx.cr6.eq) goto loc_824F552C;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 15, ctx.xer);
	// beq cr6,0x824f552c
	if (ctx.cr6.eq) goto loc_824F552C;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 18, ctx.xer);
	// beq cr6,0x824f552c
	if (ctx.cr6.eq) goto loc_824F552C;
	// li r27,16
	ctx.r27.s64 = 16;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_824F552C:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// ble cr6,0x824f5540
	if (!ctx.cr6.gt) goto loc_824F5540;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824F5540;
	sub_824222F0(ctx, base);
loc_824F5540:
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824f55c8
	if (!ctx.cr6.gt) goto loc_824F55C8;
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
loc_824F5554:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824f557c
	if (ctx.cr6.eq) goto loc_824F557C;
	// lwz r9,536(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824f5554
	if (ctx.cr6.lt) goto loc_824F5554;
	// b 0x824f55c8
	goto loc_824F55C8;
loc_824F557C:
	// addi r10,r11,29
	ctx.r10.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm. r9,r9,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,352(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// beq 0x824f55c0
	if (ctx.cr0.eq) goto loc_824F55C0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824f55c0
	if (!ctx.cr6.gt) goto loc_824F55C0;
	// rlwimi r11,r29,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_824F55C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824f578c
	if (!ctx.cr6.eq) goto loc_824F578C;
loc_824F55C8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824348c0
	ctx.lr = 0x824F55DC;
	sub_824348C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x8243d038
	ctx.lr = 0x824F55EC;
	sub_8243D038(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r6,113
	ctx.r6.s64 = 113;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4810
	ctx.lr = 0x824F5618;
	sub_824F4810(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// andi. r9,r11,34952
	ctx.r9.u64 = ctx.r11.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r9,34952
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34952, ctx.xer);
	// beq cr6,0x824f5694
	if (ctx.cr6.eq) goto loc_824F5694;
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
	// sth r11,14(r30)
	REX_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
loc_824F5694:
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x824f56ac
	if (!ctx.cr6.eq) goto loc_824F56AC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824F56AC;
	sub_824222F0(ctx, base);
loc_824F56AC:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x824f56c8
	if (!ctx.cr6.eq) goto loc_824F56C8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x824f56c8
	if (ctx.cr6.eq) goto loc_824F56C8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824F56C8;
	sub_824222F0(ctx, base);
loc_824F56C8:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// stw r30,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r30.u32);
	// slw r11,r22,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r8,r27,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r8,r8,0,27,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r8,r10,9,19,22
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1E00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE1FF);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r28,r10,0,19,17
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF) | (ctx.r28.u64 & 0x2000);
	// stwx r28,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r10,r9,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x824f5778
	if (!ctx.cr6.eq) goto loc_824F5778;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r10,r10,17304
	ctx.r10.s64 = ctx.r10.s64 + 17304;
	// b 0x824f577c
	goto loc_824F577C;
loc_824F5778:
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
loc_824F577C:
	// stw r10,344(r11)
	REX_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_824F578C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f57ac
	if (!ctx.cr0.eq) goto loc_824F57AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f5898
	if (ctx.cr6.eq) goto loc_824F5898;
	// stw r22,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// b 0x824f5898
	goto loc_824F5898;
loc_824F57AC:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824348c0
	ctx.lr = 0x824F57C0;
	sub_824348C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x8243d038
	ctx.lr = 0x824F57D0;
	sub_8243D038(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r6,96
	ctx.r6.s64 = 96;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824f4810
	ctx.lr = 0x824F57FC;
	sub_824F4810(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824348c0
	ctx.lr = 0x824F5814;
	sub_824348C0(ctx, base);
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// rlwimi r24,r25,4,0,27
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r24.u64 & 0xFFFFFFFF0000000F);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r24,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r24.u8);
	// oris r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 524288;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x824484a0
	ctx.lr = 0x824F583C;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82448668
	ctx.lr = 0x824F5848;
	sub_82448668(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_824F5898:
	// cmplwi cr6,r25,14
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 14, ctx.xer);
	// beq cr6,0x824f58f0
	if (ctx.cr6.eq) goto loc_824F58F0;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 15, ctx.xer);
	// beq cr6,0x824f58cc
	if (ctx.cr6.eq) goto loc_824F58CC;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 18, ctx.xer);
	// bne cr6,0x824f5928
	if (!ctx.cr6.eq) goto loc_824F5928;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x824f5928
	if (ctx.cr6.eq) goto loc_824F5928;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// sth r11,14(r29)
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r11.u16);
	// b 0x824f5928
	goto loc_824F5928;
loc_824F58CC:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x824f58e4
	if (ctx.cr6.eq) goto loc_824F58E4;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// sth r11,14(r29)
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r11.u16);
loc_824F58E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f2,-32488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -32488);
	// b 0x824f5910
	goto loc_824F5910;
loc_824F58F0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 & 43690;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// beq cr6,0x824f5908
	if (ctx.cr6.eq) goto loc_824F5908;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// sth r11,14(r29)
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r11.u16);
loc_824F5908:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f2,2328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
loc_824F5910:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f1,6880(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 6880);
	// bl 0x824f3018
	ctx.lr = 0x824F5928;
	sub_824F3018(ctx, base);
loc_824F5928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82506150) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82506158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82506198
	if (!ctx.cr6.eq) goto loc_82506198;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-21688
	ctx.r6.s64 = ctx.r11.s64 + -21688;
	// addi r5,r10,-21716
	ctx.r5.s64 = ctx.r10.s64 + -21716;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,244
	ctx.r7.s64 = 244;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x82506198;
	sub_82428090(ctx, base);
loc_82506198:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82523c18
	ctx.lr = 0x825061A4;
	sub_82523C18(ctx, base);
	// stw r29,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82506F00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82506F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x82515cb0
	ctx.lr = 0x82506F20;
	sub_82515CB0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r31,1452(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// lwz r27,28(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,32(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x824ec9c0
	ctx.lr = 0x82506F44;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x82506f64
	if (ctx.cr0.eq) goto loc_82506F64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82527d18
	ctx.lr = 0x82506F5C;
	sub_82527D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82506f68
	goto loc_82506F68;
loc_82506F64:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82506F68:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825267c8
	ctx.lr = 0x82506F78;
	sub_825267C8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825267c8
	ctx.lr = 0x82506F88;
	sub_825267C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825267c8
	ctx.lr = 0x82506F98;
	sub_825267C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82506F9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82506FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82506f9c
	if (ctx.cr6.lt) goto loc_82506F9C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82524c40
	ctx.lr = 0x82506FD8;
	sub_82524C40(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82526c80
	ctx.lr = 0x82506FE0;
	sub_82526C80(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82506FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x82529400
	ctx.lr = 0x82507000;
	sub_82529400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825263f0
	ctx.lr = 0x82507008;
	sub_825263F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507034
	if (!ctx.cr0.eq) goto loc_82507034;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-21688
	ctx.r6.s64 = ctx.r11.s64 + -21688;
	// addi r5,r10,-21280
	ctx.r5.s64 = ctx.r10.s64 + -21280;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,1198
	ctx.r7.s64 = 1198;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x82507034;
	sub_82428090(ctx, base);
loc_82507034:
	// stw r31,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x82507044;
	sub_82523EF0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8250ED98) {
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
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x8250ee04
	if (ctx.cr6.gt) goto loc_8250EE04;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8250ee2c
	if (ctx.cr6.eq) goto loc_8250EE2C;
	// bdz 0x8250edec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EDEC;
	// bdz 0x8250edf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EDF4;
	// bdz 0x8250edfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EDFC;
	// bdz 0x8250ee28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EE28;
	// bdz 0x8250edd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EDD4;
	// bdz 0x8250eddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8250EDDC;
	// b 0x8250ede4
	goto loc_8250EDE4;
loc_8250EDD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EDDC:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EDE4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EDEC:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EDF4:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EDFC:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EE04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-19872
	ctx.r6.s64 = ctx.r11.s64 + -19872;
	// addi r5,r10,22544
	ctx.r5.s64 = ctx.r10.s64 + 22544;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8250EE28;
	sub_82428090(ctx, base);
loc_8250EE28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250EE2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825125B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x825125B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427ff0
	ctx.lr = 0x825125E4;
	sub_82427FF0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x82512600
	if (ctx.cr0.eq) goto loc_82512600;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82512614
	goto loc_82512614;
loc_82512600:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82512614:
	// bl 0x82427ff0
	ctx.lr = 0x82512618;
	sub_82427FF0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427ff0
	ctx.lr = 0x8251262C;
	sub_82427FF0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-4272
	ctx.r11.s64 = ctx.r11.s64 + -4272;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82427ff0
	ctx.lr = 0x82512648;
	sub_82427FF0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x82512654;
	sub_82523EF0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825151E0) {
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
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251520c
	if (!ctx.cr6.eq) goto loc_8251520C;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82536850
	ctx.lr = 0x82515208;
	sub_82536850(ctx, base);
	// b 0x82515230
	goto loc_82515230;
loc_8251520C:
	// lha r11,116(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 116));
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,840
	ctx.r10.s64 = ctx.r10.s64 + 840;
	// lha r6,118(r1)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 118));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r4,r8,-17736
	ctx.r4.s64 = ctx.r8.s64 + -17736;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82203b30
	ctx.lr = 0x82515230;
	sub_82203B30(ctx, base);
loc_82515230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825160F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82516100;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82516120;
	sub_824EC9C0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x82516148
	if (ctx.cr0.eq) goto loc_82516148;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x82506258
	ctx.lr = 0x8251613C;
	sub_82506258(ctx, base);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82516150
	goto loc_82516150;
loc_82516148:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_82516150:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// addi r4,r11,-17440
	ctx.r4.s64 = ctx.r11.s64 + -17440;
	// bl 0x82112fa8
	ctx.lr = 0x82516160;
	sub_82112FA8(ctx, base);
	// lwz r30,136(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// b 0x825161d4
	goto loc_825161D4;
loc_82516168:
	// lwz r31,28(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x825161c4
	goto loc_825161C4;
loc_82516170:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825161c0
	if (ctx.cr0.eq) goto loc_825161C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82516190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825161c0
	if (ctx.cr0.eq) goto loc_825161C0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825161c0
	if (ctx.cr0.eq) goto loc_825161C0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825161c0
	if (!ctx.cr6.eq) goto loc_825161C0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x825161BC;
	sub_82523EF0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825161C0:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_825161C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82516170
	if (!ctx.cr6.eq) goto loc_82516170;
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_825161D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82516168
	if (!ctx.cr6.eq) goto loc_82516168;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825178e0
	if (ctx.cr6.eq) goto loc_825178E0;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,22376
	ctx.r4.s64 = ctx.r11.s64 + 22376;
	// bl 0x82523d58
	ctx.lr = 0x825161FC;
	sub_82523D58(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,2136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r10,r10,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251774c
	if (ctx.cr0.eq) goto loc_8251774C;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x8251621C;
	sub_824EC9C0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82516240
	if (ctx.cr0.eq) goto loc_82516240;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x82506258
	ctx.lr = 0x82516238;
	sub_82506258(ctx, base);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// b 0x82516244
	goto loc_82516244;
loc_82516240:
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
loc_82516244:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251634c
	if (ctx.cr6.eq) goto loc_8251634C;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516270
	if (!ctx.cr6.lt) goto loc_82516270;
loc_82516264:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x8251627c
	goto loc_8251627C;
loc_82516270:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251627C;
	sub_82523EF0(ctx, base);
loc_8251627C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r29,r11,896
	ctx.r29.s64 = ctx.r11.s64 + 896;
	// addi r27,r11,928
	ctx.r27.s64 = ctx.r11.s64 + 928;
loc_8251628C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82516338
	if (ctx.cr6.eq) goto loc_82516338;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82516314
	if (ctx.cr6.eq) goto loc_82516314;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825162c0
	if (!ctx.cr6.lt) goto loc_825162C0;
loc_825162B4:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x825162cc
	goto loc_825162CC;
loc_825162C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825162CC;
	sub_82523EF0(ctx, base);
loc_825162CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825162f4
	if (!ctx.cr6.eq) goto loc_825162F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825162f8
	if (ctx.cr6.eq) goto loc_825162F8;
loc_825162F4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825162F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82516324
	if (!ctx.cr0.eq) goto loc_82516324;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825162b4
	if (ctx.cr6.lt) goto loc_825162B4;
loc_82516314:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,4(r18)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x82516320;
	sub_82523EF0(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_82516324:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8251628c
	if (ctx.cr6.lt) goto loc_8251628C;
loc_82516338:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82516264
	if (ctx.cr6.lt) goto loc_82516264;
loc_8251634C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r11,20816
	ctx.r4.s64 = ctx.r11.s64 + 20816;
	// bl 0x82523d58
	ctx.lr = 0x8251635C;
	sub_82523D58(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516370;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x8251638C;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x825163A8;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x825163C4;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x825163E0;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x825163FC;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516418;
	sub_824EC9C0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r20,r11,27,5,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// ble cr6,0x825164f0
	if (!ctx.cr6.gt) goto loc_825164F0;
	// rlwinm r30,r20,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// subf r27,r21,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r21.u64;
	// subf r26,r21,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r21.u64;
	// subf r29,r21,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r21.u64;
loc_82516450:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516460;
	sub_824EC9C0(ctx, base);
	// stwx r3,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516474;
	sub_824EC9C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516488;
	sub_824EC9C0(ctx, base);
	// stwx r3,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x8251649C;
	sub_824EC9C0(ctx, base);
	// stwx r3,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x825164dc
	if (!ctx.cr6.gt) goto loc_825164DC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825164B4:
	// lwzx r9,r10,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwzx r9,r10,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwzx r9,r10,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stwx r24,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825164b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825164B4;
loc_825164DC:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82516450
	if (ctx.cr6.lt) goto loc_82516450;
loc_825164F0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r24,4
	ctx.r24.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82516534
	if (!ctx.cr6.gt) goto loc_82516534;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r9,r16,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r16.u64;
	// subf r8,r16,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r16.u64;
loc_82516510:
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82516510
	if (ctx.cr6.lt) goto loc_82516510;
loc_82516534:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r31,r20,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516548;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x8251655C;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516570;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82516584;
	sub_824EC9C0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r15,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// beq cr6,0x8251669c
	if (ctx.cr6.eq) goto loc_8251669C;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// subf r26,r16,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r16.u64;
	// subf r25,r16,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r16.u64;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825165d0
	if (!ctx.cr6.lt) goto loc_825165D0;
loc_825165C4:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x825165dc
	goto loc_825165DC;
loc_825165D0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825165DC;
	sub_82523EF0(ctx, base);
loc_825165DC:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,928
	ctx.r11.s64 = 928;
loc_825165E8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82516604
	if (ctx.cr6.eq) goto loc_82516604;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,944
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 944, ctx.xer);
	// blt cr6,0x825165e8
	if (ctx.cr6.lt) goto loc_825165E8;
loc_82516604:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8251669c
	if (!ctx.cr6.eq) goto loc_8251669C;
	// clrlwi r11,r22,27
	ctx.r11.u64 = ctx.r22.u32 & 0x1F;
	// stwx r24,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r22,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r10,r25,r29
	REX_STORE_U32(ctx.r25.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r30,r22,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r28,r9,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r31,896
	ctx.r31.s64 = 896;
loc_82516630:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516648
	if (!ctx.cr6.lt) goto loc_82516648;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82516654
	goto loc_82516654;
loc_82516648:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516654;
	sub_82523EF0(ctx, base);
loc_82516654:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82516030
	ctx.lr = 0x82516664;
	sub_82516030(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 928, ctx.xer);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// blt cr6,0x82516630
	if (ctx.cr6.lt) goto loc_82516630;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825165c4
	if (ctx.cr6.lt) goto loc_825165C4;
loc_8251669C:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// li r19,-1
	ctx.r19.s64 = -1;
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82517124
	if (!ctx.cr6.lt) goto loc_82517124;
	// lwz r21,120(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,116(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,112(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_825166C4:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,928
	ctx.r11.s64 = 928;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825166DC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825166f8
	if (ctx.cr6.eq) goto loc_825166F8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,944
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 944, ctx.xer);
	// blt cr6,0x825166dc
	if (ctx.cr6.lt) goto loc_825166DC;
loc_825166F8:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82516710
	if (ctx.cr6.lt) goto loc_82516710;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516710;
	sub_82523EF0(ctx, base);
loc_82516710:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - ctx.r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r26,r11
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble cr6,0x82516764
	if (!ctx.cr6.gt) goto loc_82516764;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
loc_8251674C:
	// stwx r19,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r19.u32);
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// stwx r19,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r19.u32);
	// stwx r19,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r19.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8251674c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251674C;
loc_82516764:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// stwx r31,r26,r11
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r31.u32);
	// bne cr6,0x8251677c
	if (!ctx.cr6.eq) goto loc_8251677C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82516798
	if (ctx.cr6.eq) goto loc_82516798;
loc_8251677C:
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x8251679c
	if (!ctx.cr6.eq) goto loc_8251679C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8251679c
	if (!ctx.cr6.eq) goto loc_8251679C;
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// bne cr6,0x8251679c
	if (!ctx.cr6.eq) goto loc_8251679C;
loc_82516798:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
loc_8251679C:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82516934
	if (!ctx.cr6.gt) goto loc_82516934;
	// li r28,896
	ctx.r28.s64 = 896;
loc_825167AC:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825167c4
	if (!ctx.cr6.lt) goto loc_825167C4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x825167d0
	goto loc_825167D0;
loc_825167C4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825167D0;
	sub_82523EF0(ctx, base);
loc_825167D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82516030
	ctx.lr = 0x825167E0;
	sub_82516030(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516804
	if (!ctx.cr6.lt) goto loc_82516804;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516810
	goto loc_82516810;
loc_82516804:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516810;
	sub_82523EF0(ctx, base);
loc_82516810:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82516030
	ctx.lr = 0x82516820;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516844
	if (!ctx.cr6.lt) goto loc_82516844;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516850
	goto loc_82516850;
loc_82516844:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516850;
	sub_82523EF0(ctx, base);
loc_82516850:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82516030
	ctx.lr = 0x82516860;
	sub_82516030(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ble cr6,0x82516970
	if (!ctx.cr6.gt) goto loc_82516970;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r11,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r11.u64;
	// subf r7,r11,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_825168A8:
	// lwzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and. r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x825168c8
	if (ctx.cr0.eq) goto loc_825168C8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_825168C8:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bge cr6,0x825168e4
	if (!ctx.cr6.lt) goto loc_825168E4;
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and. r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq 0x825168e4
	if (ctx.cr0.eq) goto loc_825168E4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_825168E4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bge cr6,0x82516900
	if (!ctx.cr6.lt) goto loc_82516900;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// and. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq 0x82516900
	if (ctx.cr0.eq) goto loc_82516900;
	// li r21,1
	ctx.r21.s64 = 1;
loc_82516900:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825168a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825168A8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82516920
	if (!ctx.cr6.eq) goto loc_82516920;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82516920
	if (!ctx.cr6.eq) goto loc_82516920;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82516970
	if (ctx.cr6.eq) goto loc_82516970;
loc_82516920:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x825167ac
	if (ctx.cr6.lt) goto loc_825167AC;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82516934:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82516944
	if (ctx.cr6.eq) goto loc_82516944;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8251695c
	goto loc_8251695C;
loc_82516944:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82516954
	if (ctx.cr6.eq) goto loc_82516954;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8251695c
	goto loc_8251695C;
loc_82516954:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82516970
	if (ctx.cr6.eq) goto loc_82516970;
loc_8251695C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82515178
	ctx.lr = 0x82516964;
	sub_82515178(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r3,r26,r11
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x82517114
	goto loc_82517114;
loc_82516970:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82516c58
	if (!ctx.cr6.eq) goto loc_82516C58;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516990
	if (!ctx.cr6.lt) goto loc_82516990;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x8251699c
	goto loc_8251699C;
loc_82516990:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251699C;
	sub_82523EF0(ctx, base);
loc_8251699C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x82516030
	ctx.lr = 0x825169AC;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825169d0
	if (!ctx.cr6.lt) goto loc_825169D0;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x825169dc
	goto loc_825169DC;
loc_825169D0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825169DC;
	sub_82523EF0(ctx, base);
loc_825169DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x82516030
	ctx.lr = 0x825169EC;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516a10
	if (!ctx.cr6.lt) goto loc_82516A10;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516a1c
	goto loc_82516A1C;
loc_82516A10:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516A1C;
	sub_82523EF0(ctx, base);
loc_82516A1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,912(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 912);
	// bl 0x82516030
	ctx.lr = 0x82516A2C;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82516acc
	if (!ctx.cr6.gt) goto loc_82516ACC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r30.u64;
loc_82516A6C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r25,r7,r8
	ctx.r25.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// and r24,r5,r8
	ctx.r24.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// and r21,r5,r7
	ctx.r21.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// bne 0x82516ab8
	if (!ctx.cr0.eq) goto loc_82516AB8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82516ac0
	if (!ctx.cr6.eq) goto loc_82516AC0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82516ac8
	if (!ctx.cr6.eq) goto loc_82516AC8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82516a6c
	if (ctx.cr6.lt) goto loc_82516A6C;
	// b 0x82516acc
	goto loc_82516ACC;
loc_82516AB8:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82516acc
	goto loc_82516ACC;
loc_82516AC0:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82516acc
	goto loc_82516ACC;
loc_82516AC8:
	// li r29,2
	ctx.r29.s64 = 2;
loc_82516ACC:
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x8251708c
	if (ctx.cr6.eq) goto loc_8251708C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82515178
	ctx.lr = 0x82516AE8;
	sub_82515178(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bge cr6,0x82516b08
	if (!ctx.cr6.lt) goto loc_82516B08;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516b18
	goto loc_82516B18;
loc_82516B08:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516B14;
	sub_82523EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82516B18:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516b34
	if (!ctx.cr6.lt) goto loc_82516B34;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516b40
	goto loc_82516B40;
loc_82516B34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516B40;
	sub_82523EF0(ctx, base);
loc_82516B40:
	// subfic r9,r29,114
	ctx.xer.ca = ctx.r29.u32 <= 114;
	ctx.r9.u64 = static_cast<uint64_t>(114) - ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,920(r10)
	REX_STORE_U32(ctx.r10.u32 + 920, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,924(r10)
	REX_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516b80
	if (!ctx.cr6.lt) goto loc_82516B80;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516b8c
	goto loc_82516B8C;
loc_82516B80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516B8C;
	sub_82523EF0(ctx, base);
loc_82516B8C:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r7,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 5;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 5;
	// stw r10,940(r8)
	REX_STORE_U32(ctx.r8.u32 + 940, ctx.r10.u32);
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r27,112
	ctx.r7.s64 = ctx.r27.s64 + 112;
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// slw r28,r10,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r27,r7,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r31,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r31.u32);
loc_82516BE0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516bf8
	if (!ctx.cr6.lt) goto loc_82516BF8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516c04
	goto loc_82516C04;
loc_82516BF8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516C04;
	sub_82523EF0(ctx, base);
loc_82516C04:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82516030
	ctx.lr = 0x82516C14;
	sub_82516030(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82516c3c
	if (ctx.cr6.eq) goto loc_82516C3C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// andc r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r28.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82516C3C:
	// lwzx r11,r29,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 | ctx.r11.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stwx r11,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// blt cr6,0x82516be0
	if (ctx.cr6.lt) goto loc_82516BE0;
	// b 0x82517114
	goto loc_82517114;
loc_82516C58:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8251708c
	if (!ctx.cr6.eq) goto loc_8251708C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516c78
	if (!ctx.cr6.lt) goto loc_82516C78;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516c84
	goto loc_82516C84;
loc_82516C78:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516C84;
	sub_82523EF0(ctx, base);
loc_82516C84:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x82516030
	ctx.lr = 0x82516C94;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516cb8
	if (!ctx.cr6.lt) goto loc_82516CB8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516cc4
	goto loc_82516CC4;
loc_82516CB8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516CC4;
	sub_82523EF0(ctx, base);
loc_82516CC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x82516030
	ctx.lr = 0x82516CD4;
	sub_82516030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516cf8
	if (!ctx.cr6.lt) goto loc_82516CF8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516d04
	goto loc_82516D04;
loc_82516CF8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516D04;
	sub_82523EF0(ctx, base);
loc_82516D04:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x82516030
	ctx.lr = 0x82516D14;
	sub_82516030(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x82516d38
	if (!ctx.cr6.lt) goto loc_82516D38;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516d44
	goto loc_82516D44;
loc_82516D38:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516D44;
	sub_82523EF0(ctx, base);
loc_82516D44:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x82516030
	ctx.lr = 0x82516D54;
	sub_82516030(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// ble cr6,0x82516e0c
	if (!ctx.cr6.gt) goto loc_82516E0C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r8,r30,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r30.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r30.u64;
loc_82516D9C:
	// lwzx r25,r9,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r21,r8,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// bne cr6,0x82516df0
	if (!ctx.cr6.eq) goto loc_82516DF0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82516df8
	if (!ctx.cr6.eq) goto loc_82516DF8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82516e00
	if (!ctx.cr6.eq) goto loc_82516E00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82516e08
	if (!ctx.cr6.eq) goto loc_82516E08;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82516d9c
	if (ctx.cr6.lt) goto loc_82516D9C;
	// b 0x82516e0c
	goto loc_82516E0C;
loc_82516DF0:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82516e0c
	goto loc_82516E0C;
loc_82516DF8:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82516e0c
	goto loc_82516E0C;
loc_82516E00:
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82516e0c
	goto loc_82516E0C;
loc_82516E08:
	// li r27,3
	ctx.r27.s64 = 3;
loc_82516E0C:
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x8251708c
	if (ctx.cr6.eq) goto loc_8251708C;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82515178
	ctx.lr = 0x82516E28;
	sub_82515178(ctx, base);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// bge cr6,0x82516ee4
	if (!ctx.cr6.lt) goto loc_82516EE4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516e50
	if (!ctx.cr6.lt) goto loc_82516E50;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516e60
	goto loc_82516E60;
loc_82516E50:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516E5C;
	sub_82523EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82516E60:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516e7c
	if (!ctx.cr6.lt) goto loc_82516E7C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516e88
	goto loc_82516E88;
loc_82516E7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516E88;
	sub_82523EF0(ctx, base);
loc_82516E88:
	// subfic r9,r27,113
	ctx.xer.ca = ctx.r27.u32 <= 113;
	ctx.r9.u64 = static_cast<uint64_t>(113) - ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,920(r10)
	REX_STORE_U32(ctx.r10.u32 + 920, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,924(r10)
	REX_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516ec8
	if (!ctx.cr6.lt) goto loc_82516EC8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516ed4
	goto loc_82516ED4;
loc_82516EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516ED4;
	sub_82523EF0(ctx, base);
loc_82516ED4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,940(r11)
	REX_STORE_U32(ctx.r11.u32 + 940, ctx.r10.u32);
	// b 0x82516f88
	goto loc_82516F88;
loc_82516EE4:
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516ef8
	if (!ctx.cr6.lt) goto loc_82516EF8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516f08
	goto loc_82516F08;
loc_82516EF8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516F04;
	sub_82523EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82516F08:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516f24
	if (!ctx.cr6.lt) goto loc_82516F24;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516f30
	goto loc_82516F30;
loc_82516F24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516F30;
	sub_82523EF0(ctx, base);
loc_82516F30:
	// subfic r9,r27,115
	ctx.xer.ca = ctx.r27.u32 <= 115;
	ctx.r9.u64 = static_cast<uint64_t>(115) - ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,912(r10)
	REX_STORE_U32(ctx.r10.u32 + 912, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,916(r10)
	REX_STORE_U32(ctx.r10.u32 + 916, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516f70
	if (!ctx.cr6.lt) goto loc_82516F70;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82516f7c
	goto loc_82516F7C;
loc_82516F70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516F7C;
	sub_82523EF0(ctx, base);
loc_82516F7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,936(r11)
	REX_STORE_U32(ctx.r11.u32 + 936, ctx.r10.u32);
loc_82516F88:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,896
	ctx.r30.s64 = 896;
	// li r29,928
	ctx.r29.s64 = 928;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r31,r26,r8
	REX_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r31.u32);
loc_82516FAC:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516fc4
	if (!ctx.cr6.lt) goto loc_82516FC4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82516fd0
	goto loc_82516FD0;
loc_82516FC4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82516FD0;
	sub_82523EF0(ctx, base);
loc_82516FD0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82517114
	if (ctx.cr6.eq) goto loc_82517114;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516ff8
	if (!ctx.cr6.lt) goto loc_82516FF8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82517004
	goto loc_82517004;
loc_82516FF8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517004;
	sub_82523EF0(ctx, base);
loc_82517004:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82516030
	ctx.lr = 0x82517014;
	sub_82516030(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 5;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// ble cr6,0x82517040
	if (!ctx.cr6.gt) goto loc_82517040;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82517048
	goto loc_82517048;
loc_82517040:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82517048:
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r29,944
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 944, ctx.xer);
	// andc r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stwx r8,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// blt cr6,0x82516fac
	if (ctx.cr6.lt) goto loc_82516FAC;
	// b 0x82517114
	goto loc_82517114;
loc_8251708C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r22,r26,r11
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r22.u32);
	// ble cr6,0x82517114
	if (!ctx.cr6.gt) goto loc_82517114;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r22,27
	ctx.r9.u64 = ctx.r22.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r29,r22,29,3,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r28,r10,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r27,-4(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// li r30,896
	ctx.r30.s64 = 896;
loc_825170C0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825170d8
	if (!ctx.cr6.lt) goto loc_825170D8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x825170e4
	goto loc_825170E4;
loc_825170D8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825170E4;
	sub_82523EF0(ctx, base);
loc_825170E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82516030
	ctx.lr = 0x825170F4;
	sub_82516030(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// stwx r10,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bne 0x825170c0
	if (!ctx.cr0.eq) goto loc_825170C0;
loc_82517114:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825166c4
	if (ctx.cr6.lt) goto loc_825166C4;
loc_82517124:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// cmplw cr6,r15,r6
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82517338
	if (!ctx.cr6.lt) goto loc_82517338;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r18,r10,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82517144:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82517328
	if (!ctx.cr6.gt) goto loc_82517328;
	// lwzx r10,r18,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82517328
	if (!ctx.cr6.eq) goto loc_82517328;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8251716c
	if (!ctx.cr6.eq) goto loc_8251716C;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// b 0x8251717c
	goto loc_8251717C;
loc_8251716C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// beq cr6,0x8251717c
	if (ctx.cr6.eq) goto loc_8251717C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8251717C:
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82517328
	if (!ctx.cr6.lt) goto loc_82517328;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r21,r24,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r20,r10,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8251719C:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82517314
	if (!ctx.cr6.gt) goto loc_82517314;
	// lwzx r11,r20,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r22.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82517314
	if (!ctx.cr6.eq) goto loc_82517314;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82517314
	if (ctx.cr6.lt) goto loc_82517314;
	// stwx r24,r20,r22
	REX_STORE_U32(ctx.r20.u32 + ctx.r22.u32, ctx.r24.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82517304
	if (!ctx.cr6.lt) goto loc_82517304;
	// addi r10,r11,232
	ctx.r10.s64 = ctx.r11.s64 + 232;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,928
	ctx.r26.s64 = 928;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,896
	ctx.r29.s64 = 896;
loc_825171F0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82517208
	if (!ctx.cr6.lt) goto loc_82517208;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82517214
	goto loc_82517214;
loc_82517208:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517214;
	sub_82523EF0(ctx, base);
loc_82517214:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825172f4
	if (!ctx.cr6.eq) goto loc_825172F4;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251723c
	if (!ctx.cr6.lt) goto loc_8251723C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x8251724c
	goto loc_8251724C;
loc_8251723C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517248;
	sub_82523EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8251724C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82517264
	if (!ctx.cr6.lt) goto loc_82517264;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82517270
	goto loc_82517270;
loc_82517264:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517270;
	sub_82523EF0(ctx, base);
loc_82517270:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825172a8
	if (!ctx.cr6.lt) goto loc_825172A8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x825172b8
	goto loc_825172B8;
loc_825172A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825172B4;
	sub_82523EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825172B8:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825172d0
	if (!ctx.cr6.lt) goto loc_825172D0;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x825172dc
	goto loc_825172DC;
loc_825172D0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825172DC;
	sub_82523EF0(ctx, base);
loc_825172DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stwx r11,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r11.u32);
loc_825172F4:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,928
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 928, ctx.xer);
	// blt cr6,0x825171f0
	if (ctx.cr6.lt) goto loc_825171F0;
loc_82517304:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82517314:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8251719c
	if (ctx.cr6.lt) goto loc_8251719C;
loc_82517328:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplw cr6,r24,r6
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82517144
	if (ctx.cr6.lt) goto loc_82517144;
loc_82517338:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82517610
	if (ctx.cr6.eq) goto loc_82517610;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r18,11
	ctx.r18.s64 = 11;
	// addi r20,r7,14300
	ctx.r20.s64 = ctx.r7.s64 + 14300;
	// addi r24,r8,-17444
	ctx.r24.s64 = ctx.r8.s64 + -17444;
	// addi r21,r9,-17476
	ctx.r21.s64 = ctx.r9.s64 + -17476;
	// addi r19,r10,-17484
	ctx.r19.s64 = ctx.r10.s64 + -17484;
	// addi r22,r11,-17496
	ctx.r22.s64 = ctx.r11.s64 + -17496;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82517388
	if (!ctx.cr6.lt) goto loc_82517388;
loc_8251737C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82517394
	goto loc_82517394;
loc_82517388:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517394;
	sub_82523EF0(ctx, base);
loc_82517394:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82112fa8
	ctx.lr = 0x825173AC;
	sub_82112FA8(ctx, base);
	// li r29,928
	ctx.r29.s64 = 928;
	// li r31,896
	ctx.r31.s64 = 896;
loc_825173B4:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825173cc
	if (!ctx.cr6.lt) goto loc_825173CC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x825173d8
	goto loc_825173D8;
loc_825173CC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825173D8;
	sub_82523EF0(ctx, base);
loc_825173D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ldx r30,r31,r11
	ctx.r30.u64 = REX_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// bge cr6,0x825173f8
	if (!ctx.cr6.lt) goto loc_825173F8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82517404
	goto loc_82517404;
loc_825173F8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517404;
	sub_82523EF0(ctx, base);
loc_82517404:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82517440
	if (ctx.cr6.eq) goto loc_82517440;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825151e0
	ctx.lr = 0x82517420;
	sub_825151E0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82112fa8
	ctx.lr = 0x82517430;
	sub_82112FA8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 928, ctx.xer);
	// blt cr6,0x825173b4
	if (ctx.cr6.lt) goto loc_825173B4;
loc_82517440:
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8251757c
	if (ctx.cr6.eq) goto loc_8251757C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82112fa8
	ctx.lr = 0x8251745C;
	sub_82112FA8(ctx, base);
	// lwzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251747c
	if (!ctx.cr6.lt) goto loc_8251747C;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82517484
	goto loc_82517484;
loc_8251747C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517484;
	sub_82523EF0(ctx, base);
loc_82517484:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825174a0
	if (!ctx.cr6.lt) goto loc_825174A0;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x825174ac
	goto loc_825174AC;
loc_825174A0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825174AC;
	sub_82523EF0(ctx, base);
loc_825174AC:
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,896
	ctx.r28.s64 = ctx.r31.s64 + 896;
	// addi r29,r31,928
	ctx.r29.s64 = ctx.r31.s64 + 928;
loc_825174BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251756c
	if (ctx.cr6.eq) goto loc_8251756C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r11,r27,896
	ctx.r11.s64 = ctx.r27.s64 + 896;
	// addi r8,r27,928
	ctx.r8.s64 = ctx.r27.s64 + 928;
loc_825174DC:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82517538
	if (ctx.cr6.eq) goto loc_82517538;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8251750c
	if (!ctx.cr6.eq) goto loc_8251750C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82517510
	if (ctx.cr6.eq) goto loc_82517510;
loc_8251750C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82517510:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82517530
	if (!ctx.cr0.eq) goto loc_82517530;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x825174dc
	if (ctx.cr6.lt) goto loc_825174DC;
	// b 0x82517538
	goto loc_82517538;
loc_82517530:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r10,944(r11)
	REX_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
loc_82517538:
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r18,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r18.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lbz r5,944(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 944);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82112fa8
	ctx.lr = 0x82517558;
	sub_82112FA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x825174bc
	if (ctx.cr6.lt) goto loc_825174BC;
loc_8251756C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82112fa8
	ctx.lr = 0x82517578;
	sub_82112FA8(ctx, base);
	// b 0x825175fc
	goto loc_825175FC;
loc_8251757C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82112fa8
	ctx.lr = 0x82517584;
	sub_82112FA8(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251759c
	if (!ctx.cr6.lt) goto loc_8251759C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x825175a8
	goto loc_825175A8;
loc_8251759C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825175A8;
	sub_82523EF0(ctx, base);
loc_825175A8:
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82515310
	ctx.lr = 0x825175B4;
	sub_82515310(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r18,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r18.u32);
	// addi r29,r31,896
	ctx.r29.s64 = ctx.r31.s64 + 896;
	// addi r28,r31,928
	ctx.r28.s64 = ctx.r31.s64 + 928;
loc_825175C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825175fc
	if (ctx.cr6.eq) goto loc_825175FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x824ed240
	ctx.lr = 0x825175E8;
	sub_824ED240(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x825175c8
	if (ctx.cr6.lt) goto loc_825175C8;
loc_825175FC:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8251737c
	if (ctx.cr6.lt) goto loc_8251737C;
loc_82517610:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517620;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517630;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517640;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517650;
	sub_824ECB48(ctx, base);
	// lwz r25,132(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,88(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825176d8
	if (!ctx.cr6.gt) goto loc_825176D8;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r29,r26,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r26.u64;
	// subf r28,r26,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r26.u64;
	// subf r27,r26,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r26.u64;
loc_82517684:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517694;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x825176A4;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r4,r28,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x825176B4;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r4,r27,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x825176C4;
	sub_824ECB48(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82517684
	if (ctx.cr6.lt) goto loc_82517684;
loc_825176D8:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x825176E8;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x825176F8;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517708;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517718;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517728;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517738;
	sub_824ECB48(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x824ecb48
	ctx.lr = 0x82517748;
	sub_824ECB48(ctx, base);
	// b 0x825178e0
	goto loc_825178E0;
loc_8251774C:
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825178e0
	if (ctx.cr6.eq) goto loc_825178E0;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r18,11
	ctx.r18.s64 = 11;
	// addi r22,r9,14300
	ctx.r22.s64 = ctx.r9.s64 + 14300;
	// addi r24,r10,-17484
	ctx.r24.s64 = ctx.r10.s64 + -17484;
	// addi r25,r11,-17496
	ctx.r25.s64 = ctx.r11.s64 + -17496;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82517790
	if (!ctx.cr6.lt) goto loc_82517790;
loc_82517784:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x8251779c
	goto loc_8251779C;
loc_82517790:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251779C;
	sub_82523EF0(ctx, base);
loc_8251779C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82112fa8
	ctx.lr = 0x825177B4;
	sub_82112FA8(ctx, base);
	// li r29,928
	ctx.r29.s64 = 928;
	// li r31,896
	ctx.r31.s64 = 896;
loc_825177BC:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825177d4
	if (!ctx.cr6.lt) goto loc_825177D4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x825177e0
	goto loc_825177E0;
loc_825177D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825177E0;
	sub_82523EF0(ctx, base);
loc_825177E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ldx r30,r11,r31
	ctx.r30.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bge cr6,0x82517800
	if (!ctx.cr6.lt) goto loc_82517800;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x8251780c
	goto loc_8251780C;
loc_82517800:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251780C;
	sub_82523EF0(ctx, base);
loc_8251780C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82517848
	if (ctx.cr6.eq) goto loc_82517848;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825151e0
	ctx.lr = 0x82517828;
	sub_825151E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82112fa8
	ctx.lr = 0x82517838;
	sub_82112FA8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 928, ctx.xer);
	// blt cr6,0x825177bc
	if (ctx.cr6.lt) goto loc_825177BC;
loc_82517848:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82112fa8
	ctx.lr = 0x82517854;
	sub_82112FA8(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251786c
	if (!ctx.cr6.lt) goto loc_8251786C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82517878
	goto loc_82517878;
loc_8251786C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82523ef0
	ctx.lr = 0x82517878;
	sub_82523EF0(ctx, base);
loc_82517878:
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82515310
	ctx.lr = 0x82517884;
	sub_82515310(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r18,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r18.u32);
	// addi r29,r31,896
	ctx.r29.s64 = ctx.r31.s64 + 896;
	// addi r28,r31,928
	ctx.r28.s64 = ctx.r31.s64 + 928;
loc_82517898:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825178cc
	if (ctx.cr6.eq) goto loc_825178CC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x824ed240
	ctx.lr = 0x825178B8;
	sub_824ED240(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82517898
	if (ctx.cr6.lt) goto loc_82517898;
loc_825178CC:
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82517784
	if (ctx.cr6.lt) goto loc_82517784;
loc_825178E0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825230F8) {
	REX_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x8252323c
	goto loc_8252323C;
loc_8252323C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

