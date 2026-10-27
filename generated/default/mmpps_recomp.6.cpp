#include "mmpps_funcs.6.h"

DEFINE_REX_FUNC(sub_82100680) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,22064
	ctx.r31.s64 = ctx.r11.s64 + 22064;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8210074c
	if (ctx.cr6.lt) goto loc_8210074C;
	// beq cr6,0x821007cc
	if (ctx.cr6.eq) goto loc_821007CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821006fc
	if (ctx.cr6.lt) goto loc_821006FC;
	// bne cr6,0x82100808
	if (!ctx.cr6.eq) goto loc_82100808;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// lwz r10,23708(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23708);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82100808
	if (!ctx.cr6.eq) goto loc_82100808;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821006f4
	if (!ctx.cr6.eq) goto loc_821006F4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821006f0
	if (!ctx.cr6.eq) goto loc_821006F0;
	// bl 0x821075f8
	ctx.lr = 0x821006EC;
	sub_821075F8(ctx, base);
	// b 0x821006f4
	goto loc_821006F4;
loc_821006F0:
	// bl 0x82107590
	ctx.lr = 0x821006F4;
	sub_82107590(ctx, base);
loc_821006F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8210080c
	goto loc_8210080C;
loc_821006FC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r31,r11,22064
	ctx.r31.s64 = ctx.r11.s64 + 22064;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82100730
	if (ctx.cr6.lt) goto loc_82100730;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,-30020(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30020);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82100730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82100730:
	// li r11,900
	ctx.r11.s64 = 900;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,23688(r31)
	REX_STORE_U32(ctx.r31.u32 + 23688, ctx.r11.u32);
	// stw r10,23708(r31)
	REX_STORE_U32(ctx.r31.u32 + 23708, ctx.r10.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x82100808
	goto loc_82100808;
loc_8210074C:
	// lwz r11,23708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23708);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82100808
	if (ctx.cr6.eq) goto loc_82100808;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821007c4
	if (ctx.cr6.lt) goto loc_821007C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r7,-32158
	ctx.r7.s64 = -2107506688;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r8,r10,1840
	ctx.r8.s64 = ctx.r10.s64 + 1840;
	// lfs f1,1840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r7,-20080
	ctx.r5.s64 = ctx.r7.s64 + -20080;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,-30020(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30020);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f2,56(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x821007b8
	if (!ctx.cr6.eq) goto loc_821007B8;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// addi r6,r9,-21016
	ctx.r6.s64 = ctx.r9.s64 + -21016;
	// b 0x821007c0
	goto loc_821007C0;
loc_821007B8:
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// addi r6,r9,-21120
	ctx.r6.s64 = ctx.r9.s64 + -21120;
loc_821007C0:
	// bctrl 
	ctx.lr = 0x821007C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821007C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_821007CC:
	// lwz r11,23708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100800
	if (ctx.cr6.eq) goto loc_82100800;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821007ec
	if (!ctx.cr6.eq) goto loc_821007EC;
	// lwz r5,23484(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 23484);
loc_821007EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82104350
	ctx.lr = 0x821007F8;
	sub_82104350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82100808
	if (ctx.cr0.eq) goto loc_82100808;
loc_82100800:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82100808:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8210080C:
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

DEFINE_REX_FUNC(sub_82129B20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204234
	ctx.lr = 0x82129B28;
	__savegprlr_15(ctx, base);
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,1840
	ctx.r27.s64 = ctx.r11.s64 + 1840;
	// lwz r11,23488(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23488);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lfs f30,56(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,52(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82129c34
	if (ctx.cr6.eq) goto loc_82129C34;
	// cmpwi cr6,r11,900
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 900, ctx.xer);
	// beq cr6,0x82129c14
	if (ctx.cr6.eq) goto loc_82129C14;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// beq cr6,0x82129bec
	if (ctx.cr6.eq) goto loc_82129BEC;
	// cmpwi cr6,r11,1010
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1010, ctx.xer);
	// beq cr6,0x82129bc8
	if (ctx.cr6.eq) goto loc_82129BC8;
	// cmpwi cr6,r11,1100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1100, ctx.xer);
	// beq cr6,0x82129ba8
	if (ctx.cr6.eq) goto loc_82129BA8;
	// cmpwi cr6,r11,1110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1110, ctx.xer);
	// bne cr6,0x82129c5c
	if (!ctx.cr6.eq) goto loc_82129C5C;
	// lfs f0,23500(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 23500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1288(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,23500(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 23500, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82129c5c
	if (ctx.cr6.gt) goto loc_82129C5C;
	// stfs f0,23500(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 23500, temp.u32);
loc_82129BA0:
	// stw r25,23488(r31)
	REX_STORE_U32(ctx.r31.u32 + 23488, ctx.r25.u32);
	// b 0x82129c58
	goto loc_82129C58;
loc_82129BA8:
	// lfs f13,23500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1288(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,23500(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82129c5c
	if (ctx.cr6.gt) goto loc_82129C5C;
	// stfs f30,23500(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// b 0x82129ba0
	goto loc_82129BA0;
loc_82129BC8:
	// lfs f13,23500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1288(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,23500(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82129c5c
	if (ctx.cr6.lt) goto loc_82129C5C;
	// stfs f31,23500(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// li r11,1050
	ctx.r11.s64 = 1050;
	// b 0x82129c54
	goto loc_82129C54;
loc_82129BEC:
	// lfs f0,23500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1288(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,23500(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82129c5c
	if (ctx.cr6.lt) goto loc_82129C5C;
	// stfs f0,23500(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 23500, temp.u32);
	// li r11,1050
	ctx.r11.s64 = 1050;
	// b 0x82129c54
	goto loc_82129C54;
loc_82129C14:
	// lfs f13,23496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,276(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,23496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 23496, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82129c5c
	if (ctx.cr6.gt) goto loc_82129C5C;
	// stfs f30,23496(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 23496, temp.u32);
	// b 0x82129ba0
	goto loc_82129BA0;
loc_82129C34:
	// lfs f13,23496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,276(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,23496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 23496, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82129c5c
	if (ctx.cr6.lt) goto loc_82129C5C;
	// stfs f31,23496(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 23496, temp.u32);
	// li r11,50
	ctx.r11.s64 = 50;
loc_82129C54:
	// stw r11,23488(r31)
	REX_STORE_U32(ctx.r31.u32 + 23488, ctx.r11.u32);
loc_82129C58:
	// stw r25,23492(r31)
	REX_STORE_U32(ctx.r31.u32 + 23492, ctx.r25.u32);
loc_82129C5C:
	// lfs f0,23496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82129c70
	if (!ctx.cr6.eq) goto loc_82129C70;
loc_82129C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212a28c
	goto loc_8212A28C;
loc_82129C70:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129c68
	if (!ctx.cr6.eq) goto loc_82129C68;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lwz r23,-30020(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -30020);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r22,r11,-22328
	ctx.r22.s64 = ctx.r11.s64 + -22328;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,76(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129CB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129CE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r28,160
	ctx.r28.s64 = 160;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82129d04
	if (!ctx.cr6.eq) goto loc_82129D04;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129d08
	if (ctx.cr6.eq) goto loc_82129D08;
loc_82129D04:
	// li r28,144
	ctx.r28.s64 = 144;
loc_82129D08:
	// lwz r3,76(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 76);
	// addi r10,r3,-256
	ctx.r10.s64 = ctx.r3.s64 + -256;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r26,-32156
	ctx.r26.s64 = -2107375616;
	// lfs f1,8096(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	ctx.f1.f64 = double(temp.f32);
	// subf r11,r28,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r3,-30012(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -30012);
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30012(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -30012);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82129D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-8128
	ctx.r10.s64 = -532676608;
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// ori r9,r10,16511
	ctx.r9.u64 = ctx.r10.u64 | 16511;
	// ori r11,r11,49407
	ctx.r11.u64 = ctx.r11.u64 | 49407;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821046e8
	ctx.lr = 0x82129DB8;
	sub_821046E8(ctx, base);
	// lwz r6,23508(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 23508);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212a0e0
	if (ctx.cr6.eq) goto loc_8212A0E0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82110b60
	ctx.lr = 0x82129DCC;
	sub_82110B60(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f3,428(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 428);
	ctx.f3.f64 = double(temp.f32);
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bl 0x82110aa8
	ctx.lr = 0x82129DE4;
	sub_82110AA8(ctx, base);
	// mulli r11,r3,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(20));
	// lfs f0,936(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x821146b8
	ctx.lr = 0x82129E30;
	sub_821146B8(ctx, base);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8212a0e0
	if (ctx.cr6.eq) goto loc_8212A0E0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r21,r11,27264
	ctx.r21.s64 = ctx.r11.s64 + 27264;
	// addi r20,r10,27272
	ctx.r20.s64 = ctx.r10.s64 + 27272;
	// addi r19,r9,27280
	ctx.r19.s64 = ctx.r9.s64 + 27280;
	// addi r18,r8,28788
	ctx.r18.s64 = ctx.r8.s64 + 28788;
	// addi r17,r7,28780
	ctx.r17.s64 = ctx.r7.s64 + 28780;
	// addi r16,r6,28772
	ctx.r16.s64 = ctx.r6.s64 + 28772;
loc_82129E68:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,23508(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 23508);
	// bl 0x82110b08
	ctx.lr = 0x82129E74;
	sub_82110B08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82129e90
	if (ctx.cr0.eq) goto loc_82129E90;
	// lis r28,-128
	ctx.r28.s64 = -8388608;
	// ori r28,r28,32896
	ctx.r28.u64 = ctx.r28.u64 | 32896;
loc_82129E90:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129ea4
	if (ctx.cr6.eq) goto loc_82129EA4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82129ea8
	goto loc_82129EA8;
loc_82129EA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82129EA8:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82129ef0
	if (!ctx.cr6.eq) goto loc_82129EF0;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x82129EF0;
	sub_82103650(ctx, base);
loc_82129EF0:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129f04
	if (ctx.cr6.eq) goto loc_82129F04;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82129f08
	goto loc_82129F08;
loc_82129F04:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82129F08:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82129f50
	if (!ctx.cr6.eq) goto loc_82129F50;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x82129F50;
	sub_82103650(ctx, base);
loc_82129F50:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129f64
	if (ctx.cr6.eq) goto loc_82129F64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82129f68
	goto loc_82129F68;
loc_82129F64:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82129F68:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82129fb0
	if (!ctx.cr6.eq) goto loc_82129FB0;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x82129FB0;
	sub_82103650(ctx, base);
loc_82129FB0:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129fc4
	if (ctx.cr6.eq) goto loc_82129FC4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82129fc8
	goto loc_82129FC8;
loc_82129FC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82129FC8:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8212a010
	if (!ctx.cr6.eq) goto loc_8212A010;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x8212A010;
	sub_82103650(ctx, base);
loc_8212A010:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a024
	if (ctx.cr6.eq) goto loc_8212A024;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x8212a028
	goto loc_8212A028;
loc_8212A024:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8212A028:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8212a070
	if (!ctx.cr6.eq) goto loc_8212A070;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// std r10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x8212A070;
	sub_82103650(ctx, base);
loc_8212A070:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a084
	if (ctx.cr6.eq) goto loc_8212A084;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x8212a088
	goto loc_8212A088;
loc_8212A084:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8212A088:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x8212a0d0
	if (!ctx.cr6.eq) goto loc_8212A0D0;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfd f0,168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f13,176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82103650
	ctx.lr = 0x8212A0D0;
	sub_82103650(ctx, base);
loc_8212A0D0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82129e68
	if (ctx.cr6.lt) goto loc_82129E68;
loc_8212A0E0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,44(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A0F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,30480
	ctx.r4.s64 = ctx.r11.s64 + 30480;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,76(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 76);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,1196(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,704(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,23500(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f2,268(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A1C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,23500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,868(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 868);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,23496(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23496);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x8212A1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f11,23500(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23500);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,23612(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 23612);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lfs f12,1336(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1332(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1332);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f0,420(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f13.u64);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f0.u64);
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8212A274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212A288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8212A28C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821564C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r11,464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82156788) {
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
	// li r11,10000
	ctx.r11.s64 = 10000;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,4348
	ctx.r9.s64 = ctx.r10.s64 + 4348;
	// addis r10,r3,295
	ctx.r10.s64 = ctx.r3.s64 + 19333120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,28856
	ctx.r10.s64 = ctx.r10.s64 + 28856;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4232
	ctx.r11.s64 = ctx.r11.s64 + 4232;
loc_821567C0:
	// stwu r11,-1936(r10)
	ea = -1936 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821567c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821567C0;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq 0x821567dc
	if (ctx.cr0.eq) goto loc_821567DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822031b0
	ctx.lr = 0x821567DC;
	sub_822031B0(ctx, base);
loc_821567DC:
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

DEFINE_REX_FUNC(sub_82157160) {
	REX_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157180) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157490) {
	REX_FUNC_PROLOGUE();
	// stw r4,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821574E0) {
	REX_FUNC_PROLOGUE();
	// stw r4,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157858) {
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
	// bl 0x82156c00
	ctx.lr = 0x82157878;
	sub_82156C00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82157FD8) {
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
	// bl 0x82157f10
	ctx.lr = 0x82157FF8;
	sub_82157F10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158008
	if (ctx.cr0.eq) goto loc_82158008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822031b0
	ctx.lr = 0x82158008;
	sub_822031B0(ctx, base);
loc_82158008:
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

DEFINE_REX_FUNC(sub_821588F8) {
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
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220f308
	ctx.lr = 0x82158920;
	sub_8220F308(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82159CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82159CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,308(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,288(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 288);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,308(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 308);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbzx r31,r30,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x82159D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215A498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8215A4A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32156
	ctx.r26.s64 = -2107375616;
	// lwz r3,-29940(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -29940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215a544
	if (!ctx.cr6.eq) goto loc_8215A544;
	// lis r3,150
	ctx.r3.s64 = 9830400;
	// ori r3,r3,10616
	ctx.r3.u64 = ctx.r3.u64 | 10616;
	// bl 0x821f9368
	ctx.lr = 0x8215A4C0;
	sub_821F9368(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8215a53c
	if (ctx.cr0.eq) goto loc_8215A53C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,6340
	ctx.r10.s64 = ctx.r10.s64 + 6340;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,6216
	ctx.r28.s64 = ctx.r11.s64 + 6216;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r31,r30,1008
	ctx.r31.s64 = ctx.r30.s64 + 1008;
	// stw r27,996(r30)
	REX_STORE_U32(ctx.r30.u32 + 996, ctx.r27.u32);
	// stw r28,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// li r29,9999
	ctx.r29.s64 = 9999;
loc_8215A4F0:
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,12200
	ctx.r6.s64 = ctx.r11.s64 + 12200;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82100000
	ctx.lr = 0x8215A50C;
	sub_82100000(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r6,r11,29056
	ctx.r6.s64 = ctx.r11.s64 + 29056;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82100000
	ctx.lr = 0x8215A524;
	sub_82100000(ctx, base);
	// stw r27,972(r31)
	REX_STORE_U32(ctx.r31.u32 + 972, ctx.r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,984
	ctx.r31.s64 = ctx.r31.s64 + 984;
	// bge 0x8215a4f0
	if (!ctx.cr0.lt) goto loc_8215A4F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8215a540
	goto loc_8215A540;
loc_8215A53C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215A540:
	// stw r3,-29940(r26)
	REX_STORE_U32(ctx.r26.u32 + -29940, ctx.r3.u32);
loc_8215A544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215E538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8215E540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,-29640
	ctx.r27.s64 = ctx.r27.s64 + -29640;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215e564
	if (!ctx.cr6.eq) goto loc_8215E564;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e5e0
	goto loc_8215E5E0;
loc_8215E564:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-29632
	ctx.r29.s64 = ctx.r29.s64 + -29632;
	// ori r30,r11,35908
	ctx.r30.u64 = ctx.r11.u64 | 35908;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215e5a4
	if (ctx.cr6.eq) goto loc_8215E5A4;
	// bl 0x821566d0
	ctx.lr = 0x8215E588;
	sub_821566D0(ctx, base);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lwzx r4,r31,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215E5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8215E5A4:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-29636
	ctx.r29.s64 = ctx.r29.s64 + -29636;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215e5d8
	if (ctx.cr6.eq) goto loc_8215E5D8;
	// bl 0x82157b40
	ctx.lr = 0x8215E5BC;
	sub_82157B40(ctx, base);
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// lwzx r4,r31,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215E5D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8215E5D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_8215E5E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215FA18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8215FA20;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8215fa5c
	if (!ctx.cr6.eq) goto loc_8215FA5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215fa8c
	goto loc_8215FA8C;
loc_8215FA5C:
	// bl 0x8215ad80
	ctx.lr = 0x8215FA60;
	sub_8215AD80(ctx, base);
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x8215a9d8
	ctx.lr = 0x8215FA8C;
	sub_8215A9D8(ctx, base);
loc_8215FA8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821608B8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82160934
	if (ctx.cr6.lt) goto loc_82160934;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82160934
	if (!ctx.cr6.lt) goto loc_82160934;
	// mulli r11,r4,1272
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1272));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28072(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28072);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160934
	if (ctx.cr6.eq) goto loc_82160934;
	// lwz r10,27976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 27976);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160934
	if (ctx.cr6.eq) goto loc_82160934;
	// lwz r10,27952(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 27952);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160934
	if (ctx.cr6.eq) goto loc_82160934;
	// mulli r9,r4,532
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(532));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,536(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 536);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82160934
	if (ctx.cr6.eq) goto loc_82160934;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216092c
	if (ctx.cr6.eq) goto loc_8216092C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r11,27960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27960);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
loc_8216092C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82160934:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82162F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82162F68;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// b 0x82162f90
	goto loc_82162F90;
loc_82162F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f3b80
	ctx.lr = 0x82162F90;
	sub_821F3B80(ctx, base);
loc_82162F90:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82162f88
	if (!ctx.cr6.eq) goto loc_82162F88;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi. r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82162fb8
	if (ctx.cr0.eq) goto loc_82162FB8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82162FB8:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82162fc8
	if (ctx.cr6.lt) goto loc_82162FC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82163000
	goto loc_82163000;
loc_82162FC8:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// extsb r7,r28
	ctx.r7.s64 = ctx.r28.s8;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82163000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82165A78) {
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
	// addis r10,r3,295
	ctx.r10.s64 = ctx.r3.s64 + 19333120;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,28856
	ctx.r10.s64 = ctx.r10.s64 + 28856;
loc_82165A98:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r8,r11,1936
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1936));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,10000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10000, ctx.xer);
	// addi r31,r8,1976
	ctx.r31.s64 = ctx.r8.s64 + 1976;
	// blt cr6,0x82165ac0
	if (ctx.cr6.lt) goto loc_82165AC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82165AC0:
	// lwz r11,1900(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82165af0
	if (ctx.cr6.eq) goto loc_82165AF0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,10000
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10000, ctx.xer);
	// blt cr6,0x82165a98
	if (ctx.cr6.lt) goto loc_82165A98;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
loc_82165ADC:
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
loc_82165AF0:
	// lis r11,295
	ctx.r11.s64 = 19333120;
	// ld r4,16(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,28860
	ctx.r11.u64 = ctx.r11.u64 | 28860;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x821650b8
	ctx.lr = 0x82165B08;
	sub_821650B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82165adc
	goto loc_82165ADC;
}

DEFINE_REX_FUNC(sub_82168C88) {
	REX_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82168C98) {
	REX_FUNC_PROLOGUE();
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82168CB0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,316(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82168CE0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,360(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82168DB8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,280(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82168EA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82168EB0;
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
	// b 0x82168ecc
	goto loc_82168ECC;
loc_82168EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f3b80
	ctx.lr = 0x82168ECC;
	sub_821F3B80(ctx, base);
loc_82168ECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82168ec4
	if (!ctx.cr6.eq) goto loc_82168EC4;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168eec
	if (!ctx.cr6.eq) goto loc_82168EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82168ef8
	goto loc_82168EF8;
loc_82168EEC:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82168EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216BA28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8216BA30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BA50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216bae8
	if (!ctx.cr6.gt) goto loc_8216BAE8;
loc_8216BA74:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r28,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bab4
	if (ctx.cr6.eq) goto loc_8216BAB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216BAB4:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bad4
	if (ctx.cr6.eq) goto loc_8216BAD4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BAD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216BAD4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216ba74
	if (ctx.cr6.lt) goto loc_8216BA74;
loc_8216BAE8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BAFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216F458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170288) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,440(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821702c4
	if (!ctx.cr6.eq) goto loc_821702C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82170478
	goto loc_82170478;
loc_821702C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 20);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x8216fe80
	ctx.lr = 0x821702E8;
	sub_8216FE80(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x8217030C;
	sub_8216FE80(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 20);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 44);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170330;
	sub_8216FE80(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 44);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170354;
	sub_8216FE80(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 68);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170378;
	sub_8216FE80(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x8217039C;
	sub_8216FE80(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 68);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 92);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x821703C0;
	sub_8216FE80(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 92);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x821703E4;
	sub_8216FE80(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170408;
	sub_8216FE80(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// bl 0x8216fe80
	ctx.lr = 0x8217042C;
	sub_8216FE80(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 20);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 68);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170450;
	sub_8216FE80(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 44);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 92);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8216fe80
	ctx.lr = 0x82170474;
	sub_8216FE80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82170478:
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

DEFINE_REX_FUNC(sub_8217C0A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217C4D8) {
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
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// bl 0x8217c280
	ctx.lr = 0x8217C4F8;
	sub_8217C280(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x8217c280
	ctx.lr = 0x8217C500;
	sub_8217C280(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8217c280
	ctx.lr = 0x8217C508;
	sub_8217C280(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x8217c280
	ctx.lr = 0x8217C510;
	sub_8217C280(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x8217c280
	ctx.lr = 0x8217C518;
	sub_8217C280(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c54c
	if (ctx.cr6.eq) goto loc_8217C54C;
	// bl 0x82203c68
	ctx.lr = 0x8217C52C;
	sub_82203C68(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82203c68
	ctx.lr = 0x8217C534;
	sub_82203C68(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82203c68
	ctx.lr = 0x8217C53C;
	sub_82203C68(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8217C54C:
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c57c
	if (ctx.cr6.eq) goto loc_8217C57C;
	// bl 0x82203c68
	ctx.lr = 0x8217C55C;
	sub_82203C68(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82203c68
	ctx.lr = 0x8217C564;
	sub_82203C68(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82203c68
	ctx.lr = 0x8217C56C;
	sub_82203C68(ctx, base);
	// stw r30,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_8217C57C:
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c5ac
	if (ctx.cr6.eq) goto loc_8217C5AC;
	// bl 0x82203c68
	ctx.lr = 0x8217C58C;
	sub_82203C68(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82203c68
	ctx.lr = 0x8217C594;
	sub_82203C68(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82203c68
	ctx.lr = 0x8217C59C;
	sub_82203C68(ctx, base);
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_8217C5AC:
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c5dc
	if (ctx.cr6.eq) goto loc_8217C5DC;
	// bl 0x82203c68
	ctx.lr = 0x8217C5BC;
	sub_82203C68(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82203c68
	ctx.lr = 0x8217C5C4;
	sub_82203C68(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82203c68
	ctx.lr = 0x8217C5CC;
	sub_82203C68(ctx, base);
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_8217C5DC:
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

DEFINE_REX_FUNC(sub_82181BF8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82181C40) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82181CE8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82182170) {
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
	// bl 0x821595e8
	ctx.lr = 0x82182180;
	sub_821595E8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,488(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218219c
	if (ctx.cr6.eq) goto loc_8218219C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821f4948
	ctx.lr = 0x82182198;
	sub_821F4948(ctx, base);
	// ld r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_8218219C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82182778) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x82182798
	if (ctx.cr6.gt) goto loc_82182798;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82182798
	if (ctx.cr6.lt) goto loc_82182798;
	// sth r4,16400(r3)
	REX_STORE_U16(ctx.r3.u32 + 16400, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82182798:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82182A20) {
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
	// lhz r10,16400(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16400);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82182a50
	if (ctx.cr6.lt) goto loc_82182A50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82182a90
	goto loc_82182A90;
loc_82182A50:
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,9232
	ctx.r31.s64 = ctx.r11.s64 + 9232;
	// lwz r11,9248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82182a70
	if (!ctx.cr6.eq) goto loc_82182A70;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x82182a88
	goto loc_82182A88;
loc_82182A70:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182A88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182A88:
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82182A90:
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

DEFINE_REX_FUNC(sub_82186270) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// beq cr6,0x821862a0
	if (ctx.cr6.eq) goto loc_821862A0;
loc_82186298:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82186524
	goto loc_82186524;
loc_821862A0:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bne cr6,0x82186298
	if (!ctx.cr6.eq) goto loc_82186298;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x82186298
	if (!ctx.cr6.eq) goto loc_82186298;
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lis r8,1092
	ctx.r8.s64 = 71565312;
	// lbz r9,36(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 36);
	// addi r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 + 40;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwinm r6,r10,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r8,17476
	ctx.r10.u64 = ctx.r8.u64 | 17476;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lbz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r8,24(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lbz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 28);
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lbz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 32);
	// lwz r8,32(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// rlwinm r11,r8,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lbz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 40);
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mullw r11,r6,r30
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,60
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// ble cr6,0x82186394
	if (!ctx.cr6.gt) goto loc_82186394;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82186394:
	// bl 0x821f90f0
	ctx.lr = 0x82186398;
	sub_821F90F0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82186520
	if (!ctx.cr6.gt) goto loc_82186520;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_821863B8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82186510
	if (ctx.cr6.eq) goto loc_82186510;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821863C8:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r7,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,7(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// stb r6,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stb r8,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// stb r7,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lbz r8,11(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r6,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// lbz r6,9(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stb r6,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r8,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r7,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lbz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r6,15(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r8,13(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// stb r5,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r5.u8);
	// stb r8,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r7,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r7.u8);
	// stb r6,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r6.u8);
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lbzu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// stb r5,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r5.u8);
	// stb r7,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// stb r6,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,7(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r5,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r5.u8);
	// stb r8,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r8.u8);
	// stb r7,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// stb r6,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lbz r8,9(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,11(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r5,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r5.u8);
	// stb r8,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// stb r7,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r7.u8);
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lbz r8,13(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r6,15(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r5,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r5.u8);
	// stb r8,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r8.u8);
	// stb r7,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
	// stb r6,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r6.u8);
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,60(r10)
	ea = 60 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821863c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821863C8;
loc_82186510:
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821863b8
	if (ctx.cr6.lt) goto loc_821863B8;
loc_82186520:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82186524:
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

DEFINE_REX_FUNC(sub_8218EEA4) {
	REX_FUNC_PROLOGUE();
	// lwz r16,-4356(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4356);
	// lwz r16,-4340(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4340);
	// lwz r16,-4324(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4324);
	// lwz r16,-4308(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4308);
	// lwz r16,-4292(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4292);
	// lwz r16,-4276(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4276);
	// lwz r16,-4260(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4260);
	// lwz r16,-4244(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4244);
	// lwz r16,-4228(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4228);
	// lwz r16,-4212(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4212);
	// lwz r16,-4196(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4196);
	// lwz r16,-4180(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4180);
	// lwz r16,-4164(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4164);
	// lwz r16,-4148(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4148);
	// lwz r16,-4140(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4140);
	// lwz r16,-4132(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4132);
	// lwz r16,-4124(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4124);
	// lwz r16,-4116(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4116);
	// lwz r16,-4108(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4108);
	// lwz r16,-4100(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4100);
	// lwz r16,-4092(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4092);
	// lwz r16,-4084(r24)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r24.u32 + -4084);
	// li r11,20
	ctx.r11.s64 = 20;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82190C70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82190C7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82190c98
	if (ctx.cr6.eq) goto loc_82190C98;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190c7c
	if (!ctx.cr6.eq) goto loc_82190C7C;
	// blr 
	return;
loc_82190C98:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82196638
	sub_82196638(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82191658) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219167C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821916a8
	if (ctx.cr6.eq) goto loc_821916A8;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8219c4d0
	ctx.lr = 0x82191690;
	sub_8219C4D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821916a8
	if (ctx.cr6.eq) goto loc_821916A8;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821916a8
	if (ctx.cr6.eq) goto loc_821916A8;
	// bl 0x8219d5b8
	ctx.lr = 0x821916A8;
	sub_8219D5B8(ctx, base);
loc_821916A8:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821916b8
	if (ctx.cr6.eq) goto loc_821916B8;
	// bl 0x8219ce90
	ctx.lr = 0x821916B8;
	sub_8219CE90(ctx, base);
loc_821916B8:
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

DEFINE_REX_FUNC(sub_82192F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82192F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82192F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82192F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// lwz r9,33(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 33);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82194178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82194180;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r25,r11,204
	ctx.r25.s64 = ctx.r11.s64 + 204;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8258bb00
	ctx.lr = 0x821941A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8218a558
	ctx.lr = 0x821941AC;
	sub_8218A558(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82194304
	if (ctx.cr6.lt) goto loc_82194304;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x821941cc
	if (!ctx.cr6.lt) goto loc_821941CC;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x82194208
	goto loc_82194208;
loc_821941CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821941e0
	if (!ctx.cr6.eq) goto loc_821941E0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x82194208
	goto loc_82194208;
loc_821941E0:
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x82194200
	if (ctx.cr6.eq) goto loc_82194200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82193d10
	ctx.lr = 0x821941F4;
	sub_82193D10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82194208
	if (ctx.cr6.lt) goto loc_82194208;
loc_82194200:
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,12
	ctx.r28.u64 = ctx.r28.u64 | 12;
loc_82194208:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82194304
	if (ctx.cr6.lt) goto loc_82194304;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82194228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82194274
	if (ctx.cr6.eq) goto loc_82194274;
	// li r3,460
	ctx.r3.s64 = 460;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x821f4a68
	ctx.lr = 0x8219424C;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219426c
	if (ctx.cr6.eq) goto loc_8219426C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821a0480
	ctx.lr = 0x82194268;
	sub_821A0480(ctx, base);
	// b 0x821942d0
	goto loc_821942D0;
loc_8219426C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821942dc
	goto loc_821942DC;
loc_82194274:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r3,368
	ctx.r3.s64 = 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821942ac
	if (ctx.cr6.eq) goto loc_821942AC;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x821f4a68
	ctx.lr = 0x8219428C;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219426c
	if (ctx.cr6.eq) goto loc_8219426C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82193a98
	ctx.lr = 0x821942A8;
	sub_82193A98(ctx, base);
	// b 0x821942d0
	goto loc_821942D0;
loc_821942AC:
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// bl 0x821f4a68
	ctx.lr = 0x821942B4;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219426c
	if (ctx.cr6.eq) goto loc_8219426C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82193990
	ctx.lr = 0x821942D0;
	sub_82193990(ctx, base);
loc_821942D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82194318
	if (!ctx.cr6.eq) goto loc_82194318;
loc_821942DC:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
loc_821942E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82194304
	if (ctx.cr6.eq) goto loc_82194304;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82194304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82194304:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8258baf0
	ctx.lr = 0x8219430C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_82194318:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82194330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821942e4
	if (ctx.cr6.lt) goto loc_821942E4;
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// bl 0x8258baf0
	ctx.lr = 0x8219436C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219AA80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8219AA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,204
	ctx.r29.s64 = ctx.r11.s64 + 204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258bb00
	ctx.lr = 0x8219AAA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8219aacc
	if (!ctx.cr6.eq) goto loc_8219AACC;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// bl 0x8258baf0
	ctx.lr = 0x8219AAC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_8219AACC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// bl 0x8219b798
	ctx.lr = 0x8219AADC;
	sub_8219B798(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// bl 0x8258baf0
	ctx.lr = 0x8219AAF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219CB28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8219CB30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8219cc2c
	if (!ctx.cr6.eq) goto loc_8219CC2C;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219CB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219cbdc
	if (!ctx.cr6.eq) goto loc_8219CBDC;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219CB78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8219cba0
	if (!ctx.cr6.eq) goto loc_8219CBA0;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,184(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219cb9c
	if (ctx.cr6.eq) goto loc_8219CB9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218e4a0
	ctx.lr = 0x8219CB98;
	sub_8218E4A0(ctx, base);
	// b 0x8219cba0
	goto loc_8219CBA0;
loc_8219CB9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219CBA0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8219cbbc
	if (ctx.cr6.eq) goto loc_8219CBBC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8219cbdc
	if (!ctx.cr6.eq) goto loc_8219CBDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_8219CBBC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219d3f0
	ctx.lr = 0x8219CBCC;
	sub_8219D3F0(ctx, base);
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_8219CBDC:
	// lwz r31,48(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
loc_8219CBE4:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219cc08
	if (ctx.cr6.eq) goto loc_8219CC08;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8219ba30
	ctx.lr = 0x8219CBF4;
	sub_8219BA30(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8219cbe4
	if (!ctx.cr6.lt) goto loc_8219CBE4;
	// b 0x8219cc4c
	goto loc_8219CC4C;
loc_8219CC08:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8219cc4c
	if (ctx.cr6.lt) goto loc_8219CC4C;
	// bl 0x8218a4d8
	ctx.lr = 0x8219CC14;
	sub_8218A4D8(ctx, base);
	// stw r3,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219d3f0
	ctx.lr = 0x8219CC28;
	sub_8219D3F0(ctx, base);
	// b 0x8219cc4c
	goto loc_8219CC4C;
loc_8219CC2C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8219cc44
	if (!ctx.cr6.lt) goto loc_8219CC44;
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 60);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stb r10,60(r30)
	REX_STORE_U8(ctx.r30.u32 + 60, ctx.r10.u8);
	// b 0x8219cc4c
	goto loc_8219CC4C;
loc_8219CC44:
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,6
	ctx.r28.u64 = ctx.r28.u64 | 6;
loc_8219CC4C:
	// lwz r31,36(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258bb00
	ctx.lr = 0x8219CC5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219CC78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258baf0
	ctx.lr = 0x8219CC80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A20C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a217c
	if (ctx.cr6.eq) goto loc_821A217C;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a2174
	if (!ctx.cr6.eq) goto loc_821A2174;
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_821A2108:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a217c
	if (!ctx.cr6.lt) goto loc_821A217C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,6
	ctx.r10.s64 = 6;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r1,-17
	ctx.r8.s64 = ctx.r1.s64 + -17;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
loc_821A213C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x821a213c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A213C;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821a215c
	if (!ctx.cr6.eq) goto loc_821A215C;
	// lbz r31,-11(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -11);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_821A215C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821a2108
	if (ctx.cr6.eq) goto loc_821A2108;
	// b 0x821a217c
	goto loc_821A217C;
loc_821A2174:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,255
	ctx.r31.s64 = 255;
loc_821A217C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// sth r6,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r31.u8);
	// addi r9,r11,1840
	ctx.r9.s64 = ctx.r11.s64 + 1840;
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lfs f0,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6220) {
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
	// beq cr6,0x821a625c
	if (ctx.cr6.eq) goto loc_821A625C;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x821f4b88
	ctx.lr = 0x821A6258;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A625C:
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

DEFINE_REX_FUNC(sub_821A77D8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 68);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7810) {
	REX_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7880) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r10,1840
	ctx.r9.s64 = ctx.r10.s64 + 1840;
	// lhz r7,11(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 11);
	// lfd f0,1136(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 1136);
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A8558) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821a8584
	if (!ctx.cr6.eq) goto loc_821A8584;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8584;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A8584:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a85b0
	if (ctx.cr6.eq) goto loc_821A85B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,56(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A85B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A85B0:
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

DEFINE_REX_FUNC(sub_821A9758) {
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
	// beq cr6,0x821a9794
	if (ctx.cr6.eq) goto loc_821A9794;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x821f4b88
	ctx.lr = 0x821A9790;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A9794:
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

DEFINE_REX_FUNC(sub_821AC318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821AC320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821f4a68
	ctx.lr = 0x821AC338;
	sub_821F4A68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821ac348
	if (!ctx.cr0.eq) goto loc_821AC348;
loc_821AC340:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ac3d8
	goto loc_821AC3D8;
loc_821AC348:
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// beq 0x821ac368
	if (ctx.cr0.eq) goto loc_821AC368;
	// lis r30,48
	ctx.r30.s64 = 3145728;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_821AC368:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ac374
	if (ctx.cr0.eq) goto loc_821AC374;
	// oris r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 4194304;
loc_821AC374:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x821f4a68
	ctx.lr = 0x821AC384;
	sub_821F4A68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821ac39c
	if (!ctx.cr0.eq) goto loc_821AC39C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x821AC398;
	sub_821F4B88(ctx, base);
	// b 0x821ac340
	goto loc_821AC340;
loc_821AC39C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_821AC3D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AE060) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE130) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE208) {
	REX_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	REX_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE558) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12172);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE730) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE990) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AEBA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12696);
	// stw r4,12288(r3)
	REX_STORE_U32(ctx.r3.u32 + 12288, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821aebd8
	if (ctx.cr6.eq) goto loc_821AEBD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821aebd8
	if (ctx.cr6.eq) goto loc_821AEBD8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x821aebd8
	if (ctx.cr6.eq) goto loc_821AEBD8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821AEBD8:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	REX_STORE_U32(ctx.r3.u32 + 10384, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B24E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821B24F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821b2418
	ctx.lr = 0x821B251C;
	sub_821B2418(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b2564
	if (ctx.cr6.eq) goto loc_821B2564;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,13144
	ctx.r11.s64 = ctx.r11.s64 + 13144;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x821b2568
	goto loc_821B2568;
loc_821B2564:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_821B2568:
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B4BE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x821B4BF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82203a90
	ctx.lr = 0x821B4C08;
	sub_82203A90(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4cd8
	if (ctx.cr0.eq) goto loc_821B4CD8;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// addi r27,r31,896
	ctx.r27.s64 = ctx.r31.s64 + 896;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_821B4C4C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = ctx.r11.s64 + 872;
	// lwz r8,896(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 896);
	// lwz r7,872(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// lwz r11,900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 900);
	// add r26,r9,r7
	ctx.r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x821b4cc0
	if (ctx.cr6.eq) goto loc_821B4CC0;
	// addi r30,r25,28
	ctx.r30.s64 = ctx.r25.s64 + 28;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_821B4C8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821b4cb0
	if (ctx.cr6.eq) goto loc_821B4CB0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203350
	ctx.lr = 0x821B4CB0;
	sub_82203350(ctx, base);
loc_821B4CB0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821b4c8c
	if (!ctx.cr0.eq) goto loc_821B4C8C;
loc_821B4CC0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r25,r25,416
	ctx.r25.s64 = ctx.r25.s64 + 416;
	// bne 0x821b4c4c
	if (!ctx.cr0.eq) goto loc_821B4C4C;
loc_821B4CD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B9100) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r4,63
	ctx.xer.ca = ctx.r4.u32 <= 63;
	ctx.r10.u64 = static_cast<uint64_t>(63) - ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// sld r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// ld r6,9496(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 9496);
	// addi r4,r4,2248
	ctx.r4.s64 = ctx.r4.s64 + 2248;
	// stw r9,9932(r11)
	REX_STORE_U32(ctx.r11.u32 + 9932, ctx.r9.u32);
	// addi r10,r11,368
	ctx.r10.s64 = ctx.r11.s64 + 368;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,9496(r11)
	REX_STORE_U64(ctx.r11.u32 + 9496, ctx.r9.u64);
	// addi r11,r10,9208
	ctx.r11.s64 = ctx.r10.s64 + 9208;
	// rlwinm r9,r7,27,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFC;
	// rlwinm r6,r7,30,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1F;
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lbz r11,7(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r9,3(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r8,11(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 11);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BB228) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10376(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bb270
	if (!ctx.cr0.eq) goto loc_821BB270;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// lfs f0,1512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,1516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// b 0x821bb2d8
	goto loc_821BB2D8;
loc_821BB270:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bb288
	if (ctx.cr0.eq) goto loc_821BB288;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821bb2cc
	goto loc_821BB2CC;
loc_821BB288:
	// rlwinm r11,r10,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// blt cr6,0x821bb2a8
	if (ctx.cr6.lt) goto loc_821BB2A8;
	// rlwinm r11,r10,0,5,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x821bb2cc
	goto loc_821BB2CC;
loc_821BB2A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,113
	ctx.xer.ca = ctx.r11.u32 <= 113;
	ctx.r11.u64 = static_cast<uint64_t>(113) - ctx.r11.u64;
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_821BB2CC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r11,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
loc_821BB2D8:
	// lbz r9,10562(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 10562);
	// stw r11,10796(r3)
	REX_STORE_U32(ctx.r3.u32 + 10796, ctx.r11.u32);
	// subf r11,r9,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lwz r9,10560(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,6,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x800;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10792(r3)
	REX_STORE_U32(ctx.r3.u32 + 10792, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C3110) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821c2eb0
	ctx.lr = 0x821C3134;
	sub_821C2EB0(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r31,1022
	ctx.r10.s64 = ctx.r31.s64 + 1022;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C3148:
	// lhz r9,-1022(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -1022);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-512(r11)
	REX_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// lhzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,512(r11)
	REX_STORE_U16(ctx.r11.u32 + 512, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x821c3148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C3148;
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

DEFINE_REX_FUNC(sub_821C5FE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x821C5FE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11069(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c600c
	if (!ctx.cr0.eq) goto loc_821C600C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821bd500
	ctx.lr = 0x821C600C;
	sub_821BD500(ctx, base);
loc_821C600C:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,148
	ctx.r4.s64 = 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcd40
	ctx.lr = 0x821C601C;
	sub_821BCD40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcd40
	ctx.lr = 0x821C6030;
	sub_821BCD40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bcd40
	ctx.lr = 0x821C6044;
	sub_821BCD40(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 11069);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r7,13472(r31)
	REX_STORE_U32(ctx.r31.u32 + 13472, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r7,13476(r31)
	REX_STORE_U32(ctx.r31.u32 + 13476, ctx.r7.u32);
	// beq 0x821c60ac
	if (ctx.cr0.eq) goto loc_821C60AC;
	// lwz r10,13680(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 13680);
	// andi. r9,r11,223
	ctx.r9.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r11,r31,13680
	ctx.r11.s64 = ctx.r31.s64 + 13680;
	// lwz r11,13684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13684);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,13688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13688);
	// stw r11,15204(r31)
	REX_STORE_U32(ctx.r31.u32 + 15204, ctx.r11.u32);
	// lwz r11,13692(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13692);
	// stw r11,15200(r31)
	REX_STORE_U32(ctx.r31.u32 + 15200, ctx.r11.u32);
	// lwz r11,13696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13696);
	// stw r11,15192(r31)
	REX_STORE_U32(ctx.r31.u32 + 15192, ctx.r11.u32);
	// lwz r11,13700(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13700);
	// stw r11,15196(r31)
	REX_STORE_U32(ctx.r31.u32 + 15196, ctx.r11.u32);
	// lwz r11,13684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13684);
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// stb r9,11069(r31)
	REX_STORE_U8(ctx.r31.u32 + 11069, ctx.r9.u8);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x821c61dc
	goto loc_821C61DC;
loc_821C60AC:
	// addi r25,r31,13632
	ctx.r25.s64 = ctx.r31.s64 + 13632;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60B8;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13488
	ctx.r3.s64 = ctx.r31.s64 + 13488;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60C0;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13608
	ctx.r3.s64 = ctx.r31.s64 + 13608;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60C8;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13512
	ctx.r3.s64 = ctx.r31.s64 + 13512;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60D0;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13536
	ctx.r3.s64 = ctx.r31.s64 + 13536;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60D8;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13560
	ctx.r3.s64 = ctx.r31.s64 + 13560;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60E0;
	sub_821BC7C8(ctx, base);
	// addi r3,r31,13584
	ctx.r3.s64 = ctx.r31.s64 + 13584;
	// bl 0x821bc7c8
	ctx.lr = 0x821C60E8;
	sub_821BC7C8(ctx, base);
	// lwz r11,13632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13632);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c6110
	if (ctx.cr6.eq) goto loc_821C6110;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r7,r11,-16384
	ctx.r7.s64 = ctx.r11.s64 + -1073741824;
loc_821C6110:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// ori r5,r27,1
	ctx.r5.u64 = ctx.r27.u64 | 1;
	// addi r6,r11,23896
	ctx.r6.s64 = ctx.r11.s64 + 23896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdd10
	ctx.lr = 0x821C6124;
	sub_821BDD10(ctx, base);
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd6f8
	ctx.lr = 0x821C6134;
	sub_821BD6F8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821c6160
	if (ctx.cr6.eq) goto loc_821C6160;
	// addi r8,r31,13656
	ctx.r8.s64 = ctx.r31.s64 + 13656;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd9c0
	ctx.lr = 0x821C615C;
	sub_821BD9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821C6160:
	// lwz r11,21812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c6178
	if (!ctx.cr6.eq) goto loc_821C6178;
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c61ac
	if (!ctx.cr0.eq) goto loc_821C61AC;
loc_821C6178:
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r28,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r28.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r31,13656
	ctx.r8.s64 = ctx.r31.s64 + 13656;
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd9c0
	ctx.lr = 0x821C61A8;
	sub_821BD9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821C61AC:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd9c0
	ctx.lr = 0x821C61DC;
	sub_821BD9C0(ctx, base);
loc_821C61DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CFD30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x821CFD38;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x821cf8e0
	ctx.lr = 0x821CFD80;
	sub_821CF8E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cfec0
	if (ctx.cr6.eq) goto loc_821CFEC0;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821CFD9C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821cfd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CFD9C;
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r31,60
	ctx.r24.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r22,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r22.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne cr6,0x821cfdc8
	if (!ctx.cr6.eq) goto loc_821CFDC8;
	// stw r23,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r23.u32);
	// b 0x821cfdf0
	goto loc_821CFDF0;
loc_821CFDC8:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
loc_821CFDF0:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// bge cr6,0x821cfe00
	if (!ctx.cr6.lt) goto loc_821CFE00;
	// li r27,16
	ctx.r27.s64 = 16;
	// b 0x821cfe10
	goto loc_821CFE10;
loc_821CFE00:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cfe10
	if (!ctx.cr6.gt) goto loc_821CFE10;
	// lis r27,256
	ctx.r27.s64 = 16777216;
loc_821CFE10:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821cfe98
	if (ctx.cr6.lt) goto loc_821CFE98;
	// lis r28,2047
	ctx.r28.s64 = 134152192;
	// ori r28,r28,65534
	ctx.r28.u64 = ctx.r28.u64 | 65534;
loc_821CFE28:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x821cfe34
	if (!ctx.cr6.gt) goto loc_821CFE34;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_821CFE34:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r27,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r28,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x821cfecc
	if (ctx.cr6.eq) goto loc_821CFECC;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82413578
	ctx.lr = 0x821CFE60;
	sub_82413578(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cfecc
	if (!ctx.cr6.eq) goto loc_821CFECC;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cfeac
	if (ctx.cr6.eq) goto loc_821CFEAC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821CFE8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821CFE98:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x821cfe28
	if (ctx.cr6.gt) goto loc_821CFE28;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// b 0x821cfe34
	goto loc_821CFE34;
loc_821CFEAC:
	// bl 0x821f90c0
	ctx.lr = 0x821CFEB0;
	sub_821F90C0(ctx, base);
	// bl 0x821f90c0
	ctx.lr = 0x821CFEB4;
	sub_821F90C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x821f84e8
	ctx.lr = 0x821CFEC0;
	sub_821F84E8(ctx, base);
loc_821CFEC0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821CFECC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821cff34
	if (ctx.cr6.eq) goto loc_821CFF34;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82413578
	ctx.lr = 0x821CFEEC;
	sub_82413578(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cff34
	if (!ctx.cr6.eq) goto loc_821CFF34;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cff08
	if (ctx.cr6.eq) goto loc_821CFF08;
	// bl 0x821f4760
	ctx.lr = 0x821CFF08;
	sub_821F4760(ctx, base);
loc_821CFF08:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cfeac
	if (ctx.cr6.eq) goto loc_821CFEAC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821CFF28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821CFF34:
	// lwz r28,48(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_821CFF38:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821cff94
	if (ctx.cr6.lt) goto loc_821CFF94;
	// beq cr6,0x821d00cc
	if (ctx.cr6.eq) goto loc_821D00CC;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821cff54
	if (!ctx.cr6.gt) goto loc_821CFF54;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_821CFF54:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_821CFF5C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r29
	ea = ctx.r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821cff80
	if (!ctx.cr6.eq) goto loc_821CFF80;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821cff5c
	if (!ctx.cr0.eq) goto loc_821CFF5C;
	// b 0x821cff88
	goto loc_821CFF88;
loc_821CFF80:
	// stwcx. r9,0,r29
	ea = ctx.r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_821CFF88:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821cff38
	if (!ctx.cr6.eq) goto loc_821CFF38;
loc_821CFF94:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x821cf9a0
	ctx.lr = 0x821CFFAC;
	sub_821CF9A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cffbc
	if (!ctx.cr6.eq) goto loc_821CFFBC;
	// stw r23,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x821d00cc
	goto loc_821D00CC;
loc_821CFFBC:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_821CFFC0:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821cffc0
	if (!ctx.cr0.eq) goto loc_821CFFC0;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821d0058
	if (ctx.cr6.eq) goto loc_821D0058;
loc_821CFFF0:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_821CFFF8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_821D0018:
	// mfmsr r3
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r3.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r4,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x821d003c
	if (!ctx.cr6.eq) goto loc_821D003C;
	// stdcx. r10,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821d0018
	if (!ctx.cr0.eq) goto loc_821D0018;
	// b 0x821d0044
	goto loc_821D0044;
loc_821D003C:
	// stdcx. r4,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_821D0044:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x821cfff8
	if (!ctx.cr6.eq) goto loc_821CFFF8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821cfff0
	if (!ctx.cr0.eq) goto loc_821CFFF0;
loc_821D0058:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d00c4
	if (ctx.cr6.eq) goto loc_821D00C4;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_821D006C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821d006c
	if (!ctx.cr0.eq) goto loc_821D006C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x821d00c4
	if (!ctx.cr6.lt) goto loc_821D00C4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821d00c4
	if (!ctx.cr6.gt) goto loc_821D00C4;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x821d00ac
	if (!ctx.cr6.gt) goto loc_821D00AC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_821D00AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82413610
	ctx.lr = 0x821D00B8;
	sub_82413610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d00c4
	if (!ctx.cr6.eq) goto loc_821D00C4;
	// bl 0x821f4680
	ctx.lr = 0x821D00C4;
	sub_821F4680(ctx, base);
loc_821D00C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d0118
	if (!ctx.cr6.eq) goto loc_821D0118;
loc_821D00CC:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d00dc
	if (ctx.cr6.eq) goto loc_821D00DC;
	// bl 0x821f4760
	ctx.lr = 0x821D00DC;
	sub_821F4760(ctx, base);
loc_821D00DC:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d00ec
	if (ctx.cr6.eq) goto loc_821D00EC;
	// bl 0x821f4760
	ctx.lr = 0x821D00EC;
	sub_821F4760(ctx, base);
loc_821D00EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cfeac
	if (ctx.cr6.eq) goto loc_821CFEAC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D010C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_821D0118:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d0130
	if (ctx.cr6.eq) goto loc_821D0130;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821D0130:
	// stw r23,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r23,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r23,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r23,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D3768) {
	REX_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d406c
	if (ctx.cr0.eq) goto loc_821D406C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23220
	ctx.r4.s64 = ctx.r11.s64 + 23220;
	// bl 0x821d44b0
	ctx.lr = 0x821D3784;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23268
	ctx.r4.s64 = ctx.r11.s64 + 23268;
	// bl 0x821d4680
	ctx.lr = 0x821D3794;
	sub_821D4680(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22316
	ctx.r4.s64 = ctx.r11.s64 + 22316;
	// bl 0x821d44b0
	ctx.lr = 0x821D37A4;
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
	ctx.lr = 0x821D37BC;
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
	ctx.lr = 0x821D37D4;
	sub_821D44B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x821d37f0
	if (!ctx.cr0.eq) goto loc_821D37F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d381c
	if (ctx.cr6.eq) goto loc_821D381C;
loc_821D37F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3804
	if (ctx.cr6.eq) goto loc_821D3804;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,22552
	ctx.r5.s64 = ctx.r11.s64 + 22552;
	// b 0x821d380c
	goto loc_821D380C;
loc_821D3804:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,22544
	ctx.r5.s64 = ctx.r11.s64 + 22544;
loc_821D380C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23284
	ctx.r4.s64 = ctx.r11.s64 + 23284;
	// bl 0x821d44b0
	ctx.lr = 0x821D381C;
	sub_821D44B0(ctx, base);
loc_821D381C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821d406c
	if (ctx.cr0.eq) goto loc_821D406C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23296
	ctx.r4.s64 = ctx.r11.s64 + 23296;
	// b 0x821d3d40
	goto loc_821D3D40;
loc_821D3D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d44b0
	ctx.lr = 0x821D3D48;
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

DEFINE_REX_FUNC(sub_821E05F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821E0600;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e0660
	if (ctx.cr6.eq) goto loc_821E0660;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_821E0624:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821dfd78
	ctx.lr = 0x821E0630;
	sub_821DFD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e0660
	if (ctx.cr0.eq) goto loc_821E0660;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E0648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821e0660
	if (ctx.cr0.lt) goto loc_821E0660;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x821e0624
	if (ctx.cr6.lt) goto loc_821E0624;
loc_821E0660:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E1F88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821E1F90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,240
	ctx.r28.s64 = ctx.r3.s64 + 240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8258bb00
	ctx.lr = 0x821E1FB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e15f0
	ctx.lr = 0x821E1FBC;
	sub_821E15F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821e1fd0
	if (!ctx.cr0.eq) goto loc_821E1FD0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x821e1fe0
	goto loc_821E1FE0;
loc_821E1FD0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e0670
	ctx.lr = 0x821E1FDC;
	sub_821E0670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821E1FE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258baf0
	ctx.lr = 0x821E1FE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E3900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821E3908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// bl 0x821e2c60
	ctx.lr = 0x821E3924;
	sub_821E2C60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e394c
	if (ctx.cr0.eq) goto loc_821E394C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E3948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821E394C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E47F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// beq cr6,0x821e4804
	if (ctx.cr6.eq) goto loc_821E4804;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E4804:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4E10) {
	REX_FUNC_PROLOGUE();
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4E30) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r4,76(r10)
	REX_STORE_U16(ctx.r10.u32 + 76, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r10,78
	ctx.r4.s64 = ctx.r10.s64 + 78;
	// lhz r4,78(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r4,r3,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// sth r4,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r10,78
	ctx.r4.s64 = ctx.r10.s64 + 78;
	// lhz r4,78(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r4,r5,14,17,17
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// sth r4,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r10,78
	ctx.r5.s64 = ctx.r10.s64 + 78;
	// lhz r5,78(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r5,r6,13,18,18
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x2000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFDFFF);
	// sth r5,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r5.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r10,78
	ctx.r6.s64 = ctx.r10.s64 + 78;
	// lhz r6,78(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r6,r7,12,19,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// sth r6,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r6.u16);
	// lhz r3,328(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,328(r11)
	REX_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// beq cr6,0x821e4efc
	if (ctx.cr6.eq) goto loc_821E4EFC;
	// lbz r10,338(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 338);
	// stb r31,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// b 0x821e4f08
	goto loc_821E4F08;
loc_821E4EFC:
	// lbz r10,339(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 339);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
loc_821E4F08:
	// lbz r10,338(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 338);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lbz r11,339(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 339);
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9748) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
loc_821E9770:
	// lhz r7,6(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r31,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r31,r31,29
	ctx.r31.u64 = ctx.r31.u32 & 0x7;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// slw r31,r6,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r31.u8 & 0x3F));
	// lbz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// and. r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821e97ac
	if (ctx.cr0.eq) goto loc_821E97AC;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// slw r7,r6,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
loc_821E97AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x821e97cc
	if (ctx.cr6.eq) goto loc_821E97CC;
	// lhz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821e97f4
	if (!ctx.cr6.eq) goto loc_821E97F4;
loc_821E97CC:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821e97fc
	if (ctx.cr6.eq) goto loc_821E97FC;
	// lhz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e97fc
	if (ctx.cr6.eq) goto loc_821E97FC;
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_821E97F4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x821e9770
	goto loc_821E9770;
loc_821E97FC:
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwimi r8,r6,7,0,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF2E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r8,r11,-15256
	ctx.r8.s64 = ctx.r11.s64 + -15256;
loc_821EF2F0:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x821ef2f0
	if (!ctx.cr0.eq) goto loc_821EF2F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F22F0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x821F22F8;
	__savegprlr_26(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821f235c
	if (ctx.cr6.lt) goto loc_821F235C;
	// beq cr6,0x821f233c
	if (ctx.cr6.eq) goto loc_821F233C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x821f2334
	if (ctx.cr6.lt) goto loc_821F2334;
	// beq cr6,0x821f2318
	if (ctx.cr6.eq) goto loc_821F2318;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821f2398
	goto loc_821F2398;
loc_821F2318:
	// li r31,6
	ctx.r31.s64 = 6;
loc_821F231C:
	// li r11,640
	ctx.r11.s64 = 640;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r26,33
	ctx.r26.s64 = 33;
	// b 0x821f2374
	goto loc_821F2374;
loc_821F2334:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821f231c
	goto loc_821F231C;
loc_821F233C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r27,-2
	ctx.r27.s64 = -2;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x821f2378
	goto loc_821F2378;
loc_821F235C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,22
	ctx.r26.s64 = 22;
loc_821F2374:
	// li r27,7
	ctx.r27.s64 = 7;
loc_821F2378:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
loc_821F2398:
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4928) {
	REX_FUNC_PROLOGUE();
	// b 0x8258ba70
	__imp__XamContentClose(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4940) {
	REX_FUNC_PROLOGUE();
	// b 0x8258baa0
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4A10) {
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
	// bl 0x8258bac0
	ctx.lr = 0x821F4A20;
	__imp__XamUserGetSigninInfo(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f4a30
	if (ctx.cr0.lt) goto loc_821F4A30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f4a48
	goto loc_821F4A48;
loc_821F4A30:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821f4a48
	if (ctx.cr6.eq) goto loc_821F4A48;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_821F4A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F59F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5a08
	if (!ctx.cr6.eq) goto loc_821F5A08;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_821F5A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F5D80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// lwz r11,1336(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1336);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5dfc
	if (ctx.cr0.eq) goto loc_821F5DFC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F5DB8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821f5db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F5DB8;
	// lwz r3,-16252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -16252);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f5e00
	if (!ctx.cr6.eq) goto loc_821F5E00;
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
	// bl 0x821f7620
	ctx.lr = 0x821F5DF4;
	sub_821F7620(ctx, base);
	// stw r3,-16252(r31)
	REX_STORE_U32(ctx.r31.u32 + -16252, ctx.r3.u32);
	// b 0x821f5e00
	goto loc_821F5E00;
loc_821F5DFC:
	// lwz r3,-16252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -16252);
loc_821F5E00:
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

DEFINE_REX_FUNC(sub_821F9D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821F9DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8258bed0
	ctx.lr = 0x821F9DB8;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821f9e34
	if (!ctx.cr0.eq) goto loc_821F9E34;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8258b880
	ctx.lr = 0x821F9DF8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821f9e08
	if (!ctx.cr0.lt) goto loc_821F9E08;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x821f9e2c
	goto loc_821F9E2C;
loc_821F9E08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821f9e28
	if (!ctx.cr6.eq) goto loc_821F9E28;
	// bl 0x821f59f0
	ctx.lr = 0x821F9E14;
	sub_821F59F0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x821f9e2c
	goto loc_821F9E2C;
loc_821F9E28:
	// li r31,997
	ctx.r31.s64 = 997;
loc_821F9E2C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8258bd10
	ctx.lr = 0x821F9E34;
	__imp__ObDereferenceObject(ctx, base);
loc_821F9E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FC798) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x821fc7b0
	if (ctx.cr6.lt) goto loc_821FC7B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_821FC7B0:
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bne cr6,0x821fc7c0
	if (!ctx.cr6.eq) goto loc_821FC7C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821FC7C0:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821fc7e8
	if (ctx.cr0.eq) goto loc_821FC7E8;
	// rlwinm. r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821fc7e8
	if (ctx.cr0.eq) goto loc_821FC7E8;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_821FC7E8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x82200710;
	__savegprlr_22(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,24(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r28,28(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r22,32(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8220073c
	if (ctx.cr6.eq) goto loc_8220073C;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8220073C:
	// lwz r24,12(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82200818
	if (!ctx.cr6.eq) goto loc_82200818;
	// divwu. r10,r10,r26
	ctx.r10.u64 = uint32_t(ctx.r26.u32 ? ctx.r10.u32 / ctx.r26.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82200918
	if (ctx.cr0.eq) goto loc_82200918;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r30,8(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,6500(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6500);
	ctx.f12.f64 = double(temp.f32);
loc_82200764:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82200804
	if (ctx.cr6.eq) goto loc_82200804;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// std r9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r9.u64);
	// lfd f0,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r31,r6,108
	ctx.r31.s64 = ctx.r6.s64 + 108;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
loc_82200794:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// ble cr6,0x822007dc
	if (!ctx.cr6.gt) goto loc_822007DC;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822007B8:
	// lhau r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r9.u32 = ea;
	// lfsu f13,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// std r7,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r7.u64);
	// lfd f10,-104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x822007b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822007B8;
loc_822007DC:
	// dcbt r0,r3
	// dcbt r0,r31
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x822007f4
	if (ctx.cr6.eq) goto loc_822007F4;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_822007F4:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82200794
	if (!ctx.cr0.eq) goto loc_82200794;
loc_82200804:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// bne 0x82200764
	if (!ctx.cr0.eq) goto loc_82200764;
	// b 0x82200918
	goto loc_82200918;
loc_82200818:
	// divwu. r23,r10,r26
	ctx.r23.u64 = uint32_t(ctx.r26.u32 ? ctx.r10.u32 / ctx.r26.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x82200918
	if (ctx.cr0.eq) goto loc_82200918;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r29,8(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r28,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,6500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6500);
	ctx.f10.f64 = double(temp.f32);
loc_82200838:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82200904
	if (ctx.cr6.eq) goto loc_82200904;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// std r10,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// addi r30,r6,108
	ctx.r30.s64 = ctx.r6.s64 + 108;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r24,-4
	ctx.r10.s64 = ctx.r24.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// lfd f0,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfd f0,-112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
loc_82200880:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// ble cr6,0x822008dc
	if (!ctx.cr6.gt) goto loc_822008DC;
	// addi r5,r26,-1
	ctx.r5.s64 = ctx.r26.s64 + -1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822008B0:
	// lhau r5,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r8.u32 = ea;
	// lfsu f12,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// std r5,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r5.u64);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f11,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f12.f64)));
	// lfd f12,-96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// bdnz 0x822008b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822008B0;
loc_822008DC:
	// dcbt r0,r31
	// dcbt r0,r30
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x822008f4
	if (ctx.cr6.eq) goto loc_822008F4;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_822008F4:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82200880
	if (!ctx.cr0.eq) goto loc_82200880;
loc_82200904:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 + ctx.r6.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82200838
	if (ctx.cr6.lt) goto loc_82200838;
loc_82200918:
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208C38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-17424(r24)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r24.u32 + -17424);
	// lwz r16,24328(r14)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + 24328);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82208C48;
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
	// bl 0x821f90c0
	ctx.lr = 0x82208C60;
	sub_821F90C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82208c7c
	if (!ctx.cr0.eq) goto loc_82208C7C;
	// bl 0x82205a78
	ctx.lr = 0x82208C6C;
	sub_82205A78(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82205a48
	ctx.lr = 0x82208C74;
	sub_82205A48(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82204ca8
	ctx.lr = 0x82208C7C;
	sub_82204CA8(ctx, base);
loc_82208C7C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-21592
	ctx.r30.s64 = ctx.r11.s64 + -21592;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208c9c
	if (ctx.cr6.eq) goto loc_82208C9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82208d2c
	goto loc_82208D2C;
loc_82208C9C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82205438
	ctx.lr = 0x82208CA4;
	sub_82205438(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82208cc4
	if (!ctx.cr0.eq) goto loc_82208CC4;
	// bl 0x82205ec8
	ctx.lr = 0x82208CB0;
	sub_82205EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82208d2c
	goto loc_82208D2C;
loc_82208CC4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82208d80
	ctx.lr = 0x82208CCC;
	sub_82208D80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82208d18
	if (!ctx.cr6.eq) goto loc_82208D18;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82208b20
	ctx.lr = 0x82208CE8;
	sub_82208B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82208d10
	if (!ctx.cr0.eq) goto loc_82208D10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82205500
	ctx.lr = 0x82208CF8;
	sub_82205500(ctx, base);
	// bl 0x82205ec8
	ctx.lr = 0x82208CFC;
	sub_82205EC8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82208d1c
	goto loc_82208D1C;
loc_82208D10:
	// stwx r28,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x82208d1c
	goto loc_82208D1C;
loc_82208D18:
	// bl 0x82205500
	ctx.lr = 0x82208D1C;
	sub_82205500(ctx, base);
loc_82208D1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82208d50
	ctx.lr = 0x82208D28;
	sub_82208D50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_82208D2C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208E64) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208F18) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82208b00
	ctx.lr = 0x82208F2C;
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

DEFINE_REX_FUNC(sub_82209B08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82209B18) {
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
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// lwz r3,1608(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82209b44
	if (!ctx.cr6.eq) goto loc_82209B44;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82209b50
	goto loc_82209B50;
loc_82209B44:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82209b54
	if (!ctx.cr6.lt) goto loc_82209B54;
	// li r3,20
	ctx.r3.s64 = 20;
loc_82209B50:
	// stw r3,1608(r31)
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
loc_82209B54:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82205c18
	ctx.lr = 0x82209B5C;
	sub_82205C18(ctx, base);
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1604(r30)
	REX_STORE_U32(ctx.r30.u32 + 1604, ctx.r3.u32);
	// bne 0x82209b94
	if (!ctx.cr0.eq) goto loc_82209B94;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,1608(r31)
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// bl 0x82205c18
	ctx.lr = 0x82209B80;
	sub_82205C18(ctx, base);
	// stw r3,1604(r30)
	REX_STORE_U32(ctx.r30.u32 + 1604, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82209b94
	if (!ctx.cr0.eq) goto loc_82209B94;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82209c24
	goto loc_82209C24;
loc_82209B94:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,-21224
	ctx.r8.s64 = ctx.r11.s64 + -21224;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82209bb4
	goto loc_82209BB4;
loc_82209BB0:
	// lwz r3,1604(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1604);
loc_82209BB4:
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82209bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82209BB0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r8,r10,1632
	ctx.r8.s64 = ctx.r10.s64 + 1632;
loc_82209BDC:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r7,72
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82209c0c
	if (ctx.cr6.eq) goto loc_82209C0C;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82209c0c
	if (ctx.cr6.eq) goto loc_82209C0C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82209c14
	if (!ctx.cr6.eq) goto loc_82209C14;
loc_82209C0C:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82209C14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82209bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82209BDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209C24:
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

DEFINE_REX_FUNC(sub_8220ECF8) {
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
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,-4872
	ctx.r9.s64 = ctx.r9.s64 + -4872;
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
	// beq cr6,0x8220ed5c
	if (ctx.cr6.eq) goto loc_8220ED5C;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x8220ed3c
	if (!ctx.cr6.gt) goto loc_8220ED3C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8220ED3C:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ed60
	if (ctx.cr6.eq) goto loc_8220ED60;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822037d8
	ctx.lr = 0x8220ED58;
	sub_822037D8(ctx, base);
	// b 0x8220ed60
	goto loc_8220ED60;
loc_8220ED5C:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8220ED60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bea0
	ctx.lr = 0x8220ED68;
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

DEFINE_REX_FUNC(sub_82210810) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220423c
	ctx.lr = 0x82210818;
	__savegprlr_17(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,300(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// lwz r24,700(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 700);
	// lwz r23,536(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm. r8,r11,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r25,296(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r20,0(r10)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r17,256(r3)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r22,264(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r18,0(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq 0x82210a20
	if (ctx.cr0.eq) goto loc_82210A20;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210930
	if (ctx.cr0.eq) goto loc_82210930;
	// lwz r11,532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822108c0
	if (!ctx.cr6.gt) goto loc_822108C0;
loc_82210874:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// lwz r8,64(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822108AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210874
	if (ctx.cr6.lt) goto loc_82210874;
loc_822108C0:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82210930
	if (!ctx.cr6.gt) goto loc_82210930;
loc_822108D0:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,64(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bctrl 
	ctx.lr = 0x8221091C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822108d0
	if (ctx.cr6.lt) goto loc_822108D0;
loc_82210930:
	// lwz r11,692(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 692);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210a20
	if (ctx.cr0.eq) goto loc_82210A20;
	// lwz r11,532(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 532);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,16(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r31,r29,140
	ctx.r31.s64 = ctx.r29.s64 + 140;
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822109a8
	if (!ctx.cr6.gt) goto loc_822109A8;
loc_82210958:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// lwz r8,468(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82210994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210958
	if (ctx.cr6.lt) goto loc_82210958;
loc_822109A8:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82210a20
	if (!ctx.cr6.gt) goto loc_82210A20;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_822109BC:
	// lwz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lhz r4,-2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r8,r24
	ctx.r9.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,468(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 468);
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bctrl 
	ctx.lr = 0x82210A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822109bc
	if (ctx.cr6.lt) goto loc_822109BC;
loc_82210A20:
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// rldicr r19,r10,63,63
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210b3c
	if (ctx.cr6.eq) goto loc_82210B3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210A40:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ldx r9,r5,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r21.u32);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r5.u32);
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// b 0x82210b1c
	goto loc_82210B1C;
loc_82210A5C:
	// cntlzd r10,r6
	ctx.r10.u64 = ctx.r6.u64 == 0 ? 64 : __builtin_clzll(ctx.r6.u64);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r9.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cntlzd r10,r8
	ctx.r10.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82210A88:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF8;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82210ABC:
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,22,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82210abc
	if (!ctx.cr6.gt) goto loc_82210ABC;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r24.u32 + 0);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// rlwinm r9,r8,22,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r10,r19,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r19.s64 < 0) & (((ctx.r19.s64 >> temp.u64) << temp.u64) != ctx.r19.s64);
	ctx.r10.s64 = ctx.r19.s64 >> temp.u64;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r10,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// blt cr6,0x82210a88
	if (ctx.cr6.lt) goto loc_82210A88;
loc_82210B1C:
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82210a5c
	if (!ctx.cr6.eq) goto loc_82210A5C;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210a40
	if (ctx.cr6.lt) goto loc_82210A40;
loc_82210B3C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210c4c
	if (ctx.cr6.eq) goto loc_82210C4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210B50:
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// ldx r9,r5,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r21.u32);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r10.u32);
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// b 0x82210c2c
	goto loc_82210C2C;
loc_82210B6C:
	// cntlzd r10,r6
	ctx.r10.u64 = ctx.r6.u64 == 0 ? 64 : __builtin_clzll(ctx.r6.u64);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r9.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cntlzd r10,r8
	ctx.r10.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82210B98:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF8;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r9,r9,376
	ctx.r9.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82210BCC:
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,22,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82210bcc
	if (!ctx.cr6.gt) goto loc_82210BCC;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,8(r24)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r24.u32 + 8);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// rlwinm r9,r8,22,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r10,r19,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r19.s64 < 0) & (((ctx.r19.s64 >> temp.u64) << temp.u64) != ctx.r19.s64);
	ctx.r10.s64 = ctx.r19.s64 >> temp.u64;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r10,8(r24)
	REX_STORE_U64(ctx.r24.u32 + 8, ctx.r10.u64);
	// blt cr6,0x82210b98
	if (ctx.cr6.lt) goto loc_82210B98;
loc_82210C2C:
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82210b6c
	if (!ctx.cr6.eq) goto loc_82210B6C;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210b50
	if (ctx.cr6.lt) goto loc_82210B50;
loc_82210C4C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210d38
	if (ctx.cr6.eq) goto loc_82210D38;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82210C60:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82210d18
	goto loc_82210D18;
loc_82210C7C:
	// cntlzd r11,r29
	ctx.r11.u64 = ctx.r29.u64 == 0 ? 64 : __builtin_clzll(ctx.r29.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r29,r10,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82210CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r9,13(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// lwz r10,80(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 80);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v62,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r4,r10,20,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b47c8
	ctx.lr = 0x82210D0C;
	sub_821B47C8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82210ca8
	if (ctx.cr6.lt) goto loc_82210CA8;
loc_82210D18:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// bne cr6,0x82210c7c
	if (!ctx.cr6.eq) goto loc_82210C7C;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210c60
	if (ctx.cr6.lt) goto loc_82210C60;
loc_82210D38:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210e24
	if (ctx.cr6.eq) goto loc_82210E24;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82210D4C:
	// lwz r10,12(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82210e04
	goto loc_82210E04;
loc_82210D68:
	// cntlzd r11,r29
	ctx.r11.u64 = ctx.r29.u64 == 0 ? 64 : __builtin_clzll(ctx.r29.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r29,r10,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82210D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// lwz r10,80(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 80);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v62,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r4,r10,20,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b4820
	ctx.lr = 0x82210DF8;
	sub_821B4820(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82210d94
	if (ctx.cr6.lt) goto loc_82210D94;
loc_82210E04:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// bne cr6,0x82210d68
	if (!ctx.cr6.eq) goto loc_82210D68;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210d4c
	if (ctx.cr6.lt) goto loc_82210D4C;
loc_82210E24:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210ef0
	if (ctx.cr6.eq) goto loc_82210EF0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82210E38:
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82210ed0
	goto loc_82210ED0;
loc_82210E54:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82210E80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r4,15(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b4708
	ctx.lr = 0x82210EC4;
	sub_821B4708(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82210e80
	if (ctx.cr6.lt) goto loc_82210E80;
loc_82210ED0:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82210e54
	if (!ctx.cr6.eq) goto loc_82210E54;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210e38
	if (ctx.cr6.lt) goto loc_82210E38;
loc_82210EF0:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210fbc
	if (ctx.cr6.eq) goto loc_82210FBC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82210F04:
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82210f9c
	goto loc_82210F9C;
loc_82210F20:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82210F4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// bl 0x821b4768
	ctx.lr = 0x82210F90;
	sub_821B4768(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82210f4c
	if (ctx.cr6.lt) goto loc_82210F4C;
loc_82210F9C:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82210f20
	if (!ctx.cr6.eq) goto loc_82210F20;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210f04
	if (ctx.cr6.lt) goto loc_82210F04;
loc_82210FBC:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211078
	if (ctx.cr6.eq) goto loc_82211078;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82210FD0:
	// lwz r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82211058
	goto loc_82211058;
loc_82210FEC:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82211018:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// rlwinm r4,r10,10,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFF;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srd r6,r19,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r19.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// lwzx r5,r11,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x821b2f90
	ctx.lr = 0x8221104C;
	sub_821B2F90(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82211018
	if (ctx.cr6.lt) goto loc_82211018;
loc_82211058:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82210fec
	if (!ctx.cr6.eq) goto loc_82210FEC;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210fd0
	if (ctx.cr6.lt) goto loc_82210FD0;
loc_82211078:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211134
	if (ctx.cr6.eq) goto loc_82211134;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221108C:
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// ldx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r21.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82211114
	goto loc_82211114;
loc_822110A8:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822110D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// rlwinm r4,r10,10,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFF;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srd r6,r19,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r19.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// lwzx r5,r11,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x821b2f90
	ctx.lr = 0x82211108;
	sub_821B2F90(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822110d4
	if (ctx.cr6.lt) goto loc_822110D4;
loc_82211114:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x822110a8
	if (!ctx.cr6.eq) goto loc_822110A8;
	// lwz r11,288(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 288);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221108c
	if (ctx.cr6.lt) goto loc_8221108C;
loc_82211134:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,696(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 696);
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-18632(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -18632);
	// lwz r9,16260(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// andc r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 & ~ctx.r10.u64;
	// add r25,r10,r9
	ctx.r25.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x8221127c
	if (ctx.cr6.eq) goto loc_8221127C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82211180:
	// lwz r10,32(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// ldx r9,r5,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r17.u32);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// ldx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r10.u32);
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// b 0x8221125c
	goto loc_8221125C;
loc_8221119C:
	// cntlzd r10,r6
	ctx.r10.u64 = ctx.r6.u64 == 0 ? 64 : __builtin_clzll(ctx.r6.u64);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r9.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cntlzd r10,r8
	ctx.r10.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822111C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF8;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// add r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_822111FC:
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,22,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822111fc
	if (!ctx.cr6.gt) goto loc_822111FC;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r24.u32 + 0);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// rlwinm r9,r8,22,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r10,r19,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r19.s64 < 0) & (((ctx.r19.s64 >> temp.u64) << temp.u64) != ctx.r19.s64);
	ctx.r10.s64 = ctx.r19.s64 >> temp.u64;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r10,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// blt cr6,0x822111c8
	if (ctx.cr6.lt) goto loc_822111C8;
loc_8221125C:
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x8221119c
	if (!ctx.cr6.eq) goto loc_8221119C;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82211180
	if (ctx.cr6.lt) goto loc_82211180;
loc_8221127C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221138c
	if (ctx.cr6.eq) goto loc_8221138C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82211290:
	// lwz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// ldx r9,r5,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r17.u32);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// ldx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r10.u32);
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// b 0x8221136c
	goto loc_8221136C;
loc_822112AC:
	// cntlzd r10,r6
	ctx.r10.u64 = ctx.r6.u64 == 0 ? 64 : __builtin_clzll(ctx.r6.u64);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r9.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cntlzd r10,r8
	ctx.r10.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822112D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF8;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// addi r9,r9,376
	ctx.r9.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// add r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8221130C:
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,22,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221130c
	if (!ctx.cr6.gt) goto loc_8221130C;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,8(r24)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r24.u32 + 8);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// rlwinm r9,r8,22,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r10,r19,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r19.s64 < 0) & (((ctx.r19.s64 >> temp.u64) << temp.u64) != ctx.r19.s64);
	ctx.r10.s64 = ctx.r19.s64 >> temp.u64;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r10,8(r24)
	REX_STORE_U64(ctx.r24.u32 + 8, ctx.r10.u64);
	// blt cr6,0x822112d8
	if (ctx.cr6.lt) goto loc_822112D8;
loc_8221136C:
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x822112ac
	if (!ctx.cr6.eq) goto loc_822112AC;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82211290
	if (ctx.cr6.lt) goto loc_82211290;
loc_8221138C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211478
	if (ctx.cr6.eq) goto loc_82211478;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822113A0:
	// lwz r10,40(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// and r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82211458
	goto loc_82211458;
loc_822113BC:
	// cntlzd r11,r29
	ctx.r11.u64 = ctx.r29.u64 == 0 ? 64 : __builtin_clzll(ctx.r29.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r29,r10,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822113E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r10,13(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// lwz r9,80(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 80);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v62,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r4,r10,20,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b47c8
	ctx.lr = 0x8221144C;
	sub_821B47C8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822113e8
	if (ctx.cr6.lt) goto loc_822113E8;
loc_82211458:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// bne cr6,0x822113bc
	if (!ctx.cr6.eq) goto loc_822113BC;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822113a0
	if (ctx.cr6.lt) goto loc_822113A0;
loc_82211478:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211564
	if (ctx.cr6.eq) goto loc_82211564;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221148C:
	// lwz r10,44(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82211544
	goto loc_82211544;
loc_822114A8:
	// cntlzd r11,r29
	ctx.r11.u64 = ctx.r29.u64 == 0 ? 64 : __builtin_clzll(ctx.r29.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r29,r10,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822114D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// lwz r9,80(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 80);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v62,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r4,r10,20,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b4820
	ctx.lr = 0x82211538;
	sub_821B4820(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822114d4
	if (ctx.cr6.lt) goto loc_822114D4;
loc_82211544:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// bne cr6,0x822114a8
	if (!ctx.cr6.eq) goto loc_822114A8;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221148c
	if (ctx.cr6.lt) goto loc_8221148C;
loc_82211564:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211630
	if (ctx.cr6.eq) goto loc_82211630;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82211578:
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82211610
	goto loc_82211610;
loc_82211594:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822115C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r4,15(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821b4708
	ctx.lr = 0x82211604;
	sub_821B4708(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822115c0
	if (ctx.cr6.lt) goto loc_822115C0;
loc_82211610:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82211594
	if (!ctx.cr6.eq) goto loc_82211594;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82211578
	if (ctx.cr6.lt) goto loc_82211578;
loc_82211630:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822116fc
	if (ctx.cr6.eq) goto loc_822116FC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82211644:
	// lwz r10,52(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 52);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x822116dc
	goto loc_822116DC;
loc_82211660:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8221168C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// bl 0x821b4768
	ctx.lr = 0x822116D0;
	sub_821B4768(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221168c
	if (ctx.cr6.lt) goto loc_8221168C;
loc_822116DC:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82211660
	if (!ctx.cr6.eq) goto loc_82211660;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82211644
	if (ctx.cr6.lt) goto loc_82211644;
loc_822116FC:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822117b8
	if (ctx.cr6.eq) goto loc_822117B8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82211710:
	// lwz r10,56(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82211798
	goto loc_82211798;
loc_8221172C:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82211758:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// rlwinm r4,r10,10,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srd r6,r19,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r19.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// lwzx r5,r11,r20
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// bl 0x821b2f90
	ctx.lr = 0x8221178C;
	sub_821B2F90(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82211758
	if (ctx.cr6.lt) goto loc_82211758;
loc_82211798:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x8221172c
	if (!ctx.cr6.eq) goto loc_8221172C;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82211710
	if (ctx.cr6.lt) goto loc_82211710;
loc_822117B8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211874
	if (ctx.cr6.eq) goto loc_82211874;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822117CC:
	// lwz r10,60(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// ldx r9,r28,r17
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r17.u32);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ldx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + ctx.r10.u32);
	// and r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82211854
	goto loc_82211854;
loc_822117E8:
	// cntlzd r11,r30
	ctx.r11.u64 = ctx.r30.u64 == 0 ? 64 : __builtin_clzll(ctx.r30.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r10.u8 & 0x7F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cntlzd r11,r9
	ctx.r11.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82211814:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,17,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF8;
	// rlwinm r4,r10,10,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srd r6,r19,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r19.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r11,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// lwzx r5,r11,r20
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// bl 0x821b2f90
	ctx.lr = 0x82211848;
	sub_821B2F90(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82211814
	if (ctx.cr6.lt) goto loc_82211814;
loc_82211854:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x822117e8
	if (!ctx.cr6.eq) goto loc_822117E8;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 292);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822117cc
	if (ctx.cr6.lt) goto loc_822117CC;
loc_82211874:
	// dcbzl r0,r21
	ea = (ctx.r21.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// lwz r11,256(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 256);
	// dcbzl r0,r11
	ea = (ctx.r11.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8220428c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82269604) {
	REX_FUNC_PROLOGUE();
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16389
	ctx.r19.u64 = ctx.r19.u64 | 16389;
	// stw r19,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r19.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226E2F0) {
	REX_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8226e290
	sub_8226e290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226E6D4) {
	REX_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82272C88) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82272CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82273E48) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82273e78
	if (ctx.cr6.eq) goto loc_82273E78;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82273E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273E78:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82273E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82273ea8
	if (ctx.cr6.eq) goto loc_82273EA8;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8220ee28
	ctx.lr = 0x82273EA0;
	sub_8220EE28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82273EA8:
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

DEFINE_REX_FUNC(sub_82276BC0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// b 0x821f4a68
	sub_821F4A68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82276CD0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276CE8) {
	REX_FUNC_PROLOGUE();
	// std r4,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276CF0) {
	REX_FUNC_PROLOGUE();
	// ld r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276D00) {
	REX_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276F80) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82276F8C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82276fb8
	if (ctx.cr6.eq) goto loc_82276FB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// blt cr6,0x82276f8c
	if (ctx.cr6.lt) goto loc_82276F8C;
loc_82276FB8:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x82276fcc
	if (ctx.cr6.lt) goto loc_82276FCC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,181
	ctx.r3.u64 = ctx.r3.u64 | 181;
	// blr 
	return;
loc_82276FCC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82279358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82279360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822792d0
	ctx.lr = 0x8227937C;
	sub_822792D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822793a0
	if (ctx.cr6.eq) goto loc_822793A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82277480
	ctx.lr = 0x82279398;
	sub_82277480(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_822793A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227D650) {
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
	// beq cr6,0x8227d68c
	if (ctx.cr6.eq) goto loc_8227D68C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82112fa8
	ctx.lr = 0x8227D67C;
	sub_82112FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d458
	ctx.lr = 0x8227D684;
	sub_8227D458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224d398
	ctx.lr = 0x8227D68C;
	sub_8224D398(ctx, base);
loc_8227D68C:
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

DEFINE_REX_FUNC(sub_8227E9D0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8227e9f4
	if (ctx.cr6.eq) goto loc_8227E9F4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8227e9f4
	if (!ctx.cr6.gt) goto loc_8227E9F4;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_8227E9F4:
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r10,r6,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82282188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82282190;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r28,360(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82282228
	if (ctx.cr6.eq) goto loc_82282228;
	// lhz r11,110(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r25,r11,-16
	ctx.r25.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x82282228
	if (!ctx.cr6.gt) goto loc_82282228;
	// rlwinm r23,r28,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_822821C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82282210
	if (!ctx.cr6.gt) goto loc_82282210;
	// addi r29,r24,-2
	ctx.r29.s64 = ctx.r24.s64 + -2;
loc_822821D8:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822821F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sraw r10,r3,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// sthu r9,2(r29)
	ea = 2 + ctx.r29.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r29.u32 = ea;
	// blt cr6,0x822821d8
	if (ctx.cr6.lt) goto loc_822821D8;
loc_82282210:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r24,r23,r24
	ctx.r24.u64 = ctx.r23.u64 + ctx.r24.u64;
	// mullw r11,r28,r11
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x822821c8
	if (!ctx.cr0.eq) goto loc_822821C8;
loc_82282228:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822851D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x822851D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r24,28(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r25,r4,-24
	ctx.r25.s64 = ctx.r4.s64 + -24;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82285210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822855e0
	if (ctx.cr6.lt) goto loc_822855E0;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lhz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82285244
	if (!ctx.cr6.gt) goto loc_82285244;
loc_82285230:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_82285244:
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82285288
	if (!ctx.cr6.eq) goto loc_82285288;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82277428
	ctx.lr = 0x82285264;
	sub_82277428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822855e0
	if (ctx.cr6.lt) goto loc_822855E0;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
loc_82285288:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r30,120(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82285230
	if (!ctx.cr6.eq) goto loc_82285230;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82277428
	ctx.lr = 0x822852B0;
	sub_82277428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822855e0
	if (ctx.cr6.lt) goto loc_822855E0;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822852D0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822852d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822852D0;
	// lwz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x8228557c
	if (ctx.cr6.lt) goto loc_8228557C;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284890
	ctx.lr = 0x82285300;
	sub_82284890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82285384
	if (ctx.cr6.eq) goto loc_82285384;
	// addi r30,r27,20
	ctx.r30.s64 = ctx.r27.s64 + 20;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82277428
	ctx.lr = 0x82285330;
	sub_82277428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82203a90
	ctx.lr = 0x8228534C;
	sub_82203A90(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8228557c
	if (ctx.cr6.gt) goto loc_8228557C;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284da8
	ctx.lr = 0x82285374;
	sub_82284DA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82285384:
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8228557c
	if (ctx.cr6.gt) goto loc_8228557C;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284890
	ctx.lr = 0x822853A8;
	sub_82284890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82285424
	if (ctx.cr6.eq) goto loc_82285424;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82277428
	ctx.lr = 0x822853D4;
	sub_82277428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82203a90
	ctx.lr = 0x822853F0;
	sub_82203A90(ctx, base);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8228557c
	if (ctx.cr6.gt) goto loc_8228557C;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284da8
	ctx.lr = 0x82285418;
	sub_82284DA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
loc_82285424:
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8228557c
	if (ctx.cr6.gt) goto loc_8228557C;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284890
	ctx.lr = 0x8228544C;
	sub_82284890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822854d0
	if (ctx.cr6.eq) goto loc_822854D0;
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82277428
	ctx.lr = 0x8228547C;
	sub_82277428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82203a90
	ctx.lr = 0x82285498;
	sub_82203A90(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r29,r28,r5
	ctx.r29.u64 = ctx.r28.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8228557c
	if (ctx.cr6.gt) goto loc_8228557C;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82284da8
	ctx.lr = 0x822854C0;
	sub_82284DA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_822854D0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228551c
	if (ctx.cr6.eq) goto loc_8228551C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,28184
	ctx.r10.s64 = ctx.r10.s64 + 28184;
loc_822854E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x82285508
	if (ctx.cr6.eq) goto loc_82285508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822854e4
	if (ctx.cr6.eq) goto loc_822854E4;
loc_82285508:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8228551c
	if (!ctx.cr6.eq) goto loc_8228551C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_8228551C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subf. r30,r28,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82285560
	if (ctx.cr0.eq) goto loc_82285560;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82285544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82285584
	if (ctx.cr6.lt) goto loc_82285584;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(ctx.r24.u32 + 8, ctx.r11.u64);
loc_82285560:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,60(r11)
	REX_STORE_U16(ctx.r11.u32 + 60, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_8228557C:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
loc_82285584:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822855e0
	if (ctx.cr6.eq) goto loc_822855E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r27,4
	ctx.r5.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822855a8
	if (ctx.cr6.eq) goto loc_822855A8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// bl 0x82277480
	ctx.lr = 0x822855A8;
	sub_82277480(ctx, base);
loc_822855A8:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822855c4
	if (ctx.cr6.eq) goto loc_822855C4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// bl 0x82277480
	ctx.lr = 0x822855C4;
	sub_82277480(ctx, base);
loc_822855C4:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r27,20
	ctx.r5.s64 = ctx.r27.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822855e0
	if (ctx.cr6.eq) goto loc_822855E0;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 224);
	// bl 0x82277480
	ctx.lr = 0x822855E0;
	sub_82277480(ctx, base);
loc_822855E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82293AA8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x8224efa0
	ctx.lr = 0x82293ABC;
	sub_8224EFA0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lhz r7,110(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 110);
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r9,r11,-32768
	ctx.r9.s64 = ctx.r11.s64 + -32768;
	// addi r8,r10,31576
	ctx.r8.s64 = ctx.r10.s64 + 31576;
	// stw r9,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r9.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// stw r8,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r8.u32);
	// bgt cr6,0x82293b04
	if (ctx.cr6.gt) goto loc_82293B04;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// addi r7,r11,18080
	ctx.r7.s64 = ctx.r11.s64 + 18080;
	// addi r5,r10,19144
	ctx.r5.s64 = ctx.r10.s64 + 19144;
	// addi r4,r9,21072
	ctx.r4.s64 = ctx.r9.s64 + 21072;
	// addi r3,r8,22056
	ctx.r3.s64 = ctx.r8.s64 + 22056;
	// b 0x82293b24
	goto loc_82293B24;
loc_82293B04:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// addi r7,r11,18624
	ctx.r7.s64 = ctx.r11.s64 + 18624;
	// addi r5,r10,19896
	ctx.r5.s64 = ctx.r10.s64 + 19896;
	// addi r4,r9,22544
	ctx.r4.s64 = ctx.r9.s64 + 22544;
	// addi r3,r8,23480
	ctx.r3.s64 = ctx.r8.s64 + 23480;
loc_82293B24:
	// lwz r11,280(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 280);
	// stw r3,512(r6)
	REX_STORE_U32(ctx.r6.u32 + 512, ctx.r3.u32);
	// stw r4,508(r6)
	REX_STORE_U32(ctx.r6.u32 + 508, ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r5,504(r6)
	REX_STORE_U32(ctx.r6.u32 + 504, ctx.r5.u32);
	// stw r7,500(r6)
	REX_STORE_U32(ctx.r6.u32 + 500, ctx.r7.u32);
	// bne cr6,0x82293b60
	if (!ctx.cr6.eq) goto loc_82293B60;
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82293b54
	if (!ctx.cr6.eq) goto loc_82293B54;
	// stw r11,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r11.u32);
	// b 0x82293b6c
	goto loc_82293B6C;
loc_82293B54:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r10,r11,26264
	ctx.r10.s64 = ctx.r11.s64 + 26264;
	// b 0x82293b68
	goto loc_82293B68;
loc_82293B60:
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r10,r11,-23440
	ctx.r10.s64 = ctx.r11.s64 + -23440;
loc_82293B68:
	// stw r10,476(r6)
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r10.u32);
loc_82293B6C:
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// addi r9,r11,-25984
	ctx.r9.s64 = ctx.r11.s64 + -25984;
	// addi r8,r10,-24520
	ctx.r8.s64 = ctx.r10.s64 + -24520;
	// stw r9,516(r6)
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,496(r6)
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229C868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8229C870;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,424(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,56(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lhz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,118(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// beq cr6,0x8229c8d8
	if (ctx.cr6.eq) goto loc_8229C8D8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8229c8e0
	if (ctx.cr6.eq) goto loc_8229C8E0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_8229C8D8:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,72(r28)
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
loc_8229C8E0:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8229c904
	if (ctx.cr6.lt) goto loc_8229C904;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_8229C904:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8229c9a8
	if (!ctx.cr6.lt) goto loc_8229C9A8;
	// addi r26,r28,224
	ctx.r26.s64 = ctx.r28.s64 + 224;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8229C91C:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bl 0x82296d68
	ctx.lr = 0x8229C938;
	sub_82296D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8229c9b0
	if (ctx.cr6.lt) goto loc_8229C9B0;
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// lhz r10,110(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// slw r10,r27,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8229c974
	if (ctx.cr6.eq) goto loc_8229C974;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8229C974:
	// lhz r10,202(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r29
	REX_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u32);
	// lhz r7,202(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r31)
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r5.u16);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8229c91c
	if (ctx.cr6.lt) goto loc_8229C91C;
loc_8229C9A8:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,72(r28)
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
loc_8229C9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A2D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x822A2D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,516
	ctx.r31.s64 = ctx.r3.s64 + 516;
	// lwz r11,816(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a2de8
	if (!ctx.cr6.eq) goto loc_822A2DE8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x82296d68
	ctx.lr = 0x822A2D88;
	sub_82296D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822a2e44
	if (ctx.cr6.lt) goto loc_822A2E44;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a2dbc
	if (!ctx.cr6.eq) goto loc_822A2DBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,15968
	ctx.r8.s64 = ctx.r11.s64 + 15968;
	// addi r7,r10,17984
	ctx.r7.s64 = ctx.r10.s64 + 17984;
	// addi r6,r9,18472
	ctx.r6.s64 = ctx.r9.s64 + 18472;
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x822a2dd8
	goto loc_822A2DD8;
loc_822A2DBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,16920
	ctx.r8.s64 = ctx.r11.s64 + 16920;
	// addi r7,r10,18960
	ctx.r7.s64 = ctx.r10.s64 + 18960;
	// addi r6,r9,19504
	ctx.r6.s64 = ctx.r9.s64 + 19504;
	// li r5,28
	ctx.r5.s64 = 28;
loc_822A2DD8:
	// stw r8,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// stw r7,28(r29)
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// stw r6,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
	// sth r5,314(r30)
	REX_STORE_U16(ctx.r30.u32 + 314, ctx.r5.u16);
loc_822A2DE8:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_822A2E18:
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822a2e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2E18;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,10184
	ctx.r10.s64 = ctx.r11.s64 + 10184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,484(r28)
	REX_STORE_U32(ctx.r28.u32 + 484, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A2E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A37E0) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32672
	ctx.r3.s64 = -2141192192;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A5628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x822A5630;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,40(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,36(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf. r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822a56a4
	if (!ctx.cr0.gt) goto loc_822A56A4;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a56f8
	if (!ctx.cr6.gt) goto loc_822A56F8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_822A5668:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a5668
	if (ctx.cr6.lt) goto loc_822A5668;
	// b 0x822a56f8
	goto loc_822A56F8;
loc_822A56A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822a56f8
	if (!ctx.cr6.lt) goto loc_822A56F8;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a56f8
	if (!ctx.cr6.gt) goto loc_822A56F8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_822A56C0:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r9,r3,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r3.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822a56c0
	if (ctx.cr6.lt) goto loc_822A56C0;
loc_822A56F8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a573c
	if (!ctx.cr6.eq) goto loc_822A573C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r29
	ctx.r3.u64 = ctx.r5.u64 + ctx.r29.u64;
	// bl 0x82203350
	ctx.lr = 0x822A5718;
	sub_82203350(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// bl 0x82203350
	ctx.lr = 0x822A572C;
	sub_82203350(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// b 0x822a5744
	goto loc_822A5744;
loc_822A573C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_822A5744:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822a5760
	if (!ctx.cr6.gt) goto loc_822A5760;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r8,r29
	REX_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u16);
	// b 0x822a5788
	goto loc_822A5788;
loc_822A5760:
	// lwz r11,724(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 724);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a577c
	if (!ctx.cr6.lt) goto loc_822A577C;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r8,r29
	REX_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u16);
	// b 0x822a5788
	goto loc_822A5788;
loc_822A577C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r9,r29
	REX_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u16);
loc_822A5788:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822a5798
	if (!ctx.cr6.gt) goto loc_822A5798;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 30);
	// b 0x822a57bc
	goto loc_822A57BC;
loc_822A5798:
	// bge cr6,0x822a57b8
	if (!ctx.cr6.lt) goto loc_822A57B8;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 30);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// sthx r7,r8,r30
	REX_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u16);
	// b 0x822a57c8
	goto loc_822A57C8;
loc_822A57B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822A57BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	REX_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
loc_822A57C8:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// sthx r8,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B04B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x822B04C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,6553
	ctx.r11.s64 = 429457408;
	// lis r10,6550
	ctx.r10.s64 = 429260800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,4643
	ctx.r9.u64 = ctx.r11.u64 | 4643;
	// ori r8,r10,276
	ctx.r8.u64 = ctx.r10.u64 | 276;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r9,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r7,240(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 240);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r7,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// bl 0x822bd030
	ctx.lr = 0x822B0500;
	sub_822BD030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b0514
	if (ctx.cr6.eq) goto loc_822B0514;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_822B0514:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b02f8
	ctx.lr = 0x822B0524;
	sub_822B02F8(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B5418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x822B5420;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r9,24688(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r4,2600(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r29,r11,31848
	ctx.r29.s64 = ctx.r11.s64 + 31848;
	// addi r28,r10,31680
	ctx.r28.s64 = ctx.r10.s64 + 31680;
	// addi r11,r7,26840
	ctx.r11.s64 = ctx.r7.s64 + 26840;
	// stw r29,2592(r31)
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r29.u32);
	// addi r10,r6,26868
	ctx.r10.s64 = ctx.r6.s64 + 26868;
	// stw r28,2596(r31)
	REX_STORE_U32(ctx.r31.u32 + 2596, ctx.r28.u32);
	// addi r7,r5,26908
	ctx.r7.s64 = ctx.r5.s64 + 26908;
	// stw r11,2576(r31)
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// addi r6,r3,26932
	ctx.r6.s64 = ctx.r3.s64 + 26932;
	// stw r10,2580(r31)
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r10.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r7,2584(r31)
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r7.u32);
	// addi r5,r31,2184
	ctx.r5.s64 = ctx.r31.s64 + 2184;
	// stw r6,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r6.u32);
	// li r3,98
	ctx.r3.s64 = 98;
	// stw r8,2568(r31)
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r8.u32);
	// addi r20,r31,2564
	ctx.r20.s64 = ctx.r31.s64 + 2564;
	// stw r5,2564(r31)
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r5.u32);
	// stw r3,2572(r31)
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r3.u32);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// stw r8,2604(r31)
	REX_STORE_U32(ctx.r31.u32 + 2604, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b54ac
	if (ctx.cr6.eq) goto loc_822B54AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B54AC;
	sub_822BD008(ctx, base);
loc_822B54AC:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r25,2600(r31)
	REX_STORE_U32(ctx.r31.u32 + 2600, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,168
	ctx.r6.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B54CC;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,2644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2644);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r29,r11,32208
	ctx.r29.s64 = ctx.r11.s64 + 32208;
	// addi r28,r10,32016
	ctx.r28.s64 = ctx.r10.s64 + 32016;
	// addi r3,r8,26612
	ctx.r3.s64 = ctx.r8.s64 + 26612;
	// stw r29,2636(r31)
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r29.u32);
	// addi r11,r7,26792
	ctx.r11.s64 = ctx.r7.s64 + 26792;
	// stw r28,2640(r31)
	REX_STORE_U32(ctx.r31.u32 + 2640, ctx.r28.u32);
	// addi r10,r6,26644
	ctx.r10.s64 = ctx.r6.s64 + 26644;
	// stw r3,2620(r31)
	REX_STORE_U32(ctx.r31.u32 + 2620, ctx.r3.u32);
	// li r9,185
	ctx.r9.s64 = 185;
	// stw r11,2624(r31)
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r11.u32);
	// addi r8,r5,26832
	ctx.r8.s64 = ctx.r5.s64 + 26832;
	// stw r10,2628(r31)
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r10.u32);
	// addi r7,r31,2196
	ctx.r7.s64 = ctx.r31.s64 + 2196;
	// stw r9,2612(r31)
	REX_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// li r6,118
	ctx.r6.s64 = 118;
	// stw r8,2632(r31)
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r8.u32);
	// addi r21,r31,2608
	ctx.r21.s64 = ctx.r31.s64 + 2608;
	// stw r7,2608(r31)
	REX_STORE_U32(ctx.r31.u32 + 2608, ctx.r7.u32);
	// stw r6,2616(r31)
	REX_STORE_U32(ctx.r31.u32 + 2616, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2648(r31)
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r9.u32);
	// beq cr6,0x822b5550
	if (ctx.cr6.eq) goto loc_822B5550;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B5550;
	sub_822BD008(ctx, base);
loc_822B5550:
	// stw r25,2644(r31)
	REX_STORE_U32(ctx.r31.u32 + 2644, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,185
	ctx.r6.s64 = 185;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B556C;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,2688(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2688);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r29,r11,32552
	ctx.r29.s64 = ctx.r11.s64 + 32552;
	// addi r28,r10,32400
	ctx.r28.s64 = ctx.r10.s64 + 32400;
	// addi r3,r8,27024
	ctx.r3.s64 = ctx.r8.s64 + 27024;
	// stw r29,2680(r31)
	REX_STORE_U32(ctx.r31.u32 + 2680, ctx.r29.u32);
	// addi r11,r7,27056
	ctx.r11.s64 = ctx.r7.s64 + 27056;
	// stw r28,2684(r31)
	REX_STORE_U32(ctx.r31.u32 + 2684, ctx.r28.u32);
	// addi r10,r6,27100
	ctx.r10.s64 = ctx.r6.s64 + 27100;
	// stw r3,2664(r31)
	REX_STORE_U32(ctx.r31.u32 + 2664, ctx.r3.u32);
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r11,2668(r31)
	REX_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// addi r8,r5,27116
	ctx.r8.s64 = ctx.r5.s64 + 27116;
	// stw r10,2672(r31)
	REX_STORE_U32(ctx.r31.u32 + 2672, ctx.r10.u32);
	// addi r7,r31,2208
	ctx.r7.s64 = ctx.r31.s64 + 2208;
	// stw r9,2656(r31)
	REX_STORE_U32(ctx.r31.u32 + 2656, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r8,2676(r31)
	REX_STORE_U32(ctx.r31.u32 + 2676, ctx.r8.u32);
	// addi r22,r31,2652
	ctx.r22.s64 = ctx.r31.s64 + 2652;
	// stw r7,2652(r31)
	REX_STORE_U32(ctx.r31.u32 + 2652, ctx.r7.u32);
	// stw r6,2660(r31)
	REX_STORE_U32(ctx.r31.u32 + 2660, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2692(r31)
	REX_STORE_U32(ctx.r31.u32 + 2692, ctx.r9.u32);
	// beq cr6,0x822b55f0
	if (ctx.cr6.eq) goto loc_822B55F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B55F0;
	sub_822BD008(ctx, base);
loc_822B55F0:
	// stw r25,2688(r31)
	REX_STORE_U32(ctx.r31.u32 + 2688, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,148
	ctx.r6.s64 = 148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B560C;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2732(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2732);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r29,r11,-32696
	ctx.r29.s64 = ctx.r11.s64 + -32696;
	// addi r28,r10,32704
	ctx.r28.s64 = ctx.r10.s64 + 32704;
	// addi r3,r8,26944
	ctx.r3.s64 = ctx.r8.s64 + 26944;
	// stw r29,2724(r31)
	REX_STORE_U32(ctx.r31.u32 + 2724, ctx.r29.u32);
	// addi r11,r7,26968
	ctx.r11.s64 = ctx.r7.s64 + 26968;
	// stw r28,2728(r31)
	REX_STORE_U32(ctx.r31.u32 + 2728, ctx.r28.u32);
	// addi r10,r6,26996
	ctx.r10.s64 = ctx.r6.s64 + 26996;
	// stw r3,2708(r31)
	REX_STORE_U32(ctx.r31.u32 + 2708, ctx.r3.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,2712(r31)
	REX_STORE_U32(ctx.r31.u32 + 2712, ctx.r11.u32);
	// addi r8,r5,27016
	ctx.r8.s64 = ctx.r5.s64 + 27016;
	// stw r10,2716(r31)
	REX_STORE_U32(ctx.r31.u32 + 2716, ctx.r10.u32);
	// addi r7,r31,2220
	ctx.r7.s64 = ctx.r31.s64 + 2220;
	// stw r9,2700(r31)
	REX_STORE_U32(ctx.r31.u32 + 2700, ctx.r9.u32);
	// li r6,84
	ctx.r6.s64 = 84;
	// stw r8,2720(r31)
	REX_STORE_U32(ctx.r31.u32 + 2720, ctx.r8.u32);
	// addi r23,r31,2696
	ctx.r23.s64 = ctx.r31.s64 + 2696;
	// stw r7,2696(r31)
	REX_STORE_U32(ctx.r31.u32 + 2696, ctx.r7.u32);
	// stw r6,2704(r31)
	REX_STORE_U32(ctx.r31.u32 + 2704, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2736(r31)
	REX_STORE_U32(ctx.r31.u32 + 2736, ctx.r9.u32);
	// beq cr6,0x822b5690
	if (ctx.cr6.eq) goto loc_822B5690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B5690;
	sub_822BD008(ctx, base);
loc_822B5690:
	// stw r25,2732(r31)
	REX_STORE_U32(ctx.r31.u32 + 2732, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,132
	ctx.r6.s64 = 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B56AC;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2776);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r28,r11,-31872
	ctx.r28.s64 = ctx.r11.s64 + -31872;
	// addi r27,r10,-31768
	ctx.r27.s64 = ctx.r10.s64 + -31768;
	// addi r5,r9,27204
	ctx.r5.s64 = ctx.r9.s64 + 27204;
	// stw r28,2768(r31)
	REX_STORE_U32(ctx.r31.u32 + 2768, ctx.r28.u32);
	// addi r3,r8,27232
	ctx.r3.s64 = ctx.r8.s64 + 27232;
	// stw r27,2772(r31)
	REX_STORE_U32(ctx.r31.u32 + 2772, ctx.r27.u32);
	// li r29,102
	ctx.r29.s64 = 102;
	// stw r5,2752(r31)
	REX_STORE_U32(ctx.r31.u32 + 2752, ctx.r5.u32);
	// addi r11,r7,27276
	ctx.r11.s64 = ctx.r7.s64 + 27276;
	// stw r3,2756(r31)
	REX_STORE_U32(ctx.r31.u32 + 2756, ctx.r3.u32);
	// addi r10,r6,27292
	ctx.r10.s64 = ctx.r6.s64 + 27292;
	// stw r29,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r29.u32);
	// addi r9,r31,2232
	ctx.r9.s64 = ctx.r31.s64 + 2232;
	// stw r11,2760(r31)
	REX_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,2764(r31)
	REX_STORE_U32(ctx.r31.u32 + 2764, ctx.r10.u32);
	// addi r24,r31,2740
	ctx.r24.s64 = ctx.r31.s64 + 2740;
	// stw r9,2740(r31)
	REX_STORE_U32(ctx.r31.u32 + 2740, ctx.r9.u32);
	// stw r8,2748(r31)
	REX_STORE_U32(ctx.r31.u32 + 2748, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,2780(r31)
	REX_STORE_U32(ctx.r31.u32 + 2780, ctx.r29.u32);
	// beq cr6,0x822b5730
	if (ctx.cr6.eq) goto loc_822B5730;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B5730;
	sub_822BD008(ctx, base);
loc_822B5730:
	// stw r25,2776(r31)
	REX_STORE_U32(ctx.r31.u32 + 2776, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B574C;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2820(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2820);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r29,2788(r31)
	REX_STORE_U32(ctx.r31.u32 + 2788, ctx.r29.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r29,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r29.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r28,r11,-31664
	ctx.r28.s64 = ctx.r11.s64 + -31664;
	// addi r27,r10,-31560
	ctx.r27.s64 = ctx.r10.s64 + -31560;
	// addi r5,r9,27124
	ctx.r5.s64 = ctx.r9.s64 + 27124;
	// stw r28,2812(r31)
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r28.u32);
	// addi r3,r8,27140
	ctx.r3.s64 = ctx.r8.s64 + 27140;
	// stw r27,2816(r31)
	REX_STORE_U32(ctx.r31.u32 + 2816, ctx.r27.u32);
	// addi r11,r7,27164
	ctx.r11.s64 = ctx.r7.s64 + 27164;
	// stw r5,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r5.u32);
	// addi r10,r6,27192
	ctx.r10.s64 = ctx.r6.s64 + 27192;
	// stw r3,2800(r31)
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r3.u32);
	// addi r9,r31,2244
	ctx.r9.s64 = ctx.r31.s64 + 2244;
	// stw r11,2804(r31)
	REX_STORE_U32(ctx.r31.u32 + 2804, ctx.r11.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,2808(r31)
	REX_STORE_U32(ctx.r31.u32 + 2808, ctx.r10.u32);
	// addi r26,r31,2784
	ctx.r26.s64 = ctx.r31.s64 + 2784;
	// stw r9,2784(r31)
	REX_STORE_U32(ctx.r31.u32 + 2784, ctx.r9.u32);
	// stw r8,2792(r31)
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b57cc
	if (ctx.cr6.eq) goto loc_822B57CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B57CC;
	sub_822BD008(ctx, base);
loc_822B57CC:
	// stw r25,2820(r31)
	REX_STORE_U32(ctx.r31.u32 + 2820, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B57E8;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2908(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2908);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r28,r11,-32384
	ctx.r28.s64 = ctx.r11.s64 + -32384;
	// addi r27,r10,-32560
	ctx.r27.s64 = ctx.r10.s64 + -32560;
	// addi r3,r8,27400
	ctx.r3.s64 = ctx.r8.s64 + 27400;
	// stw r28,2900(r31)
	REX_STORE_U32(ctx.r31.u32 + 2900, ctx.r28.u32);
	// addi r11,r7,27428
	ctx.r11.s64 = ctx.r7.s64 + 27428;
	// stw r27,2904(r31)
	REX_STORE_U32(ctx.r31.u32 + 2904, ctx.r27.u32);
	// addi r10,r6,27460
	ctx.r10.s64 = ctx.r6.s64 + 27460;
	// stw r3,2884(r31)
	REX_STORE_U32(ctx.r31.u32 + 2884, ctx.r3.u32);
	// li r9,174
	ctx.r9.s64 = 174;
	// stw r11,2888(r31)
	REX_STORE_U32(ctx.r31.u32 + 2888, ctx.r11.u32);
	// addi r8,r5,27496
	ctx.r8.s64 = ctx.r5.s64 + 27496;
	// stw r10,2892(r31)
	REX_STORE_U32(ctx.r31.u32 + 2892, ctx.r10.u32);
	// addi r7,r31,2432
	ctx.r7.s64 = ctx.r31.s64 + 2432;
	// stw r9,2876(r31)
	REX_STORE_U32(ctx.r31.u32 + 2876, ctx.r9.u32);
	// li r6,108
	ctx.r6.s64 = 108;
	// stw r8,2896(r31)
	REX_STORE_U32(ctx.r31.u32 + 2896, ctx.r8.u32);
	// addi r29,r31,2872
	ctx.r29.s64 = ctx.r31.s64 + 2872;
	// stw r7,2872(r31)
	REX_STORE_U32(ctx.r31.u32 + 2872, ctx.r7.u32);
	// stw r6,2880(r31)
	REX_STORE_U32(ctx.r31.u32 + 2880, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2912(r31)
	REX_STORE_U32(ctx.r31.u32 + 2912, ctx.r9.u32);
	// beq cr6,0x822b586c
	if (ctx.cr6.eq) goto loc_822B586C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B586C;
	sub_822BD008(ctx, base);
loc_822B586C:
	// stw r25,2908(r31)
	REX_STORE_U32(ctx.r31.u32 + 2908, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,174
	ctx.r6.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B5888;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2864(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2864);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r28,r11,-32040
	ctx.r28.s64 = ctx.r11.s64 + -32040;
	// addi r27,r10,-32208
	ctx.r27.s64 = ctx.r10.s64 + -32208;
	// addi r3,r8,27296
	ctx.r3.s64 = ctx.r8.s64 + 27296;
	// stw r28,2856(r31)
	REX_STORE_U32(ctx.r31.u32 + 2856, ctx.r28.u32);
	// addi r11,r7,27312
	ctx.r11.s64 = ctx.r7.s64 + 27312;
	// stw r27,2860(r31)
	REX_STORE_U32(ctx.r31.u32 + 2860, ctx.r27.u32);
	// addi r10,r6,27332
	ctx.r10.s64 = ctx.r6.s64 + 27332;
	// stw r3,2840(r31)
	REX_STORE_U32(ctx.r31.u32 + 2840, ctx.r3.u32);
	// li r9,162
	ctx.r9.s64 = 162;
	// stw r11,2844(r31)
	REX_STORE_U32(ctx.r31.u32 + 2844, ctx.r11.u32);
	// addi r8,r5,27392
	ctx.r8.s64 = ctx.r5.s64 + 27392;
	// stw r10,2848(r31)
	REX_STORE_U32(ctx.r31.u32 + 2848, ctx.r10.u32);
	// addi r7,r31,2256
	ctx.r7.s64 = ctx.r31.s64 + 2256;
	// stw r9,2832(r31)
	REX_STORE_U32(ctx.r31.u32 + 2832, ctx.r9.u32);
	// li r6,125
	ctx.r6.s64 = 125;
	// stw r8,2852(r31)
	REX_STORE_U32(ctx.r31.u32 + 2852, ctx.r8.u32);
	// addi r29,r31,2828
	ctx.r29.s64 = ctx.r31.s64 + 2828;
	// stw r7,2828(r31)
	REX_STORE_U32(ctx.r31.u32 + 2828, ctx.r7.u32);
	// stw r6,2836(r31)
	REX_STORE_U32(ctx.r31.u32 + 2836, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2868(r31)
	REX_STORE_U32(ctx.r31.u32 + 2868, ctx.r9.u32);
	// beq cr6,0x822b590c
	if (ctx.cr6.eq) goto loc_822B590C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd008
	ctx.lr = 0x822B590C;
	sub_822BD008(ctx, base);
loc_822B590C:
	// stw r25,2864(r31)
	REX_STORE_U32(ctx.r31.u32 + 2864, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,162
	ctx.r6.s64 = 162;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b5380
	ctx.lr = 0x822B5928;
	sub_822B5380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b59ac
	if (!ctx.cr6.eq) goto loc_822B59AC;
	// addi r11,r31,2044
	ctx.r11.s64 = ctx.r31.s64 + 2044;
	// stw r22,2940(r31)
	REX_STORE_U32(ctx.r31.u32 + 2940, ctx.r22.u32);
	// addi r10,r31,2056
	ctx.r10.s64 = ctx.r31.s64 + 2056;
	// stw r20,2944(r31)
	REX_STORE_U32(ctx.r31.u32 + 2944, ctx.r20.u32);
	// addi r9,r31,2068
	ctx.r9.s64 = ctx.r31.s64 + 2068;
	// stw r11,2104(r31)
	REX_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// stw r24,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r24.u32);
	// addi r8,r31,2080
	ctx.r8.s64 = ctx.r31.s64 + 2080;
	// stw r23,2952(r31)
	REX_STORE_U32(ctx.r31.u32 + 2952, ctx.r23.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r21,2956(r31)
	REX_STORE_U32(ctx.r31.u32 + 2956, ctx.r21.u32);
	// addi r6,r31,1992
	ctx.r6.s64 = ctx.r31.s64 + 1992;
	// stw r26,2960(r31)
	REX_STORE_U32(ctx.r31.u32 + 2960, ctx.r26.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r10,2108(r31)
	REX_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r9,2112(r31)
	REX_STORE_U32(ctx.r31.u32 + 2112, ctx.r9.u32);
	// addi r4,r31,2004
	ctx.r4.s64 = ctx.r31.s64 + 2004;
	// stw r8,2116(r31)
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r8.u32);
	// addi r11,r7,-29248
	ctx.r11.s64 = ctx.r7.s64 + -29248;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r6,2016(r31)
	REX_STORE_U32(ctx.r31.u32 + 2016, ctx.r6.u32);
	// addi r9,r5,-28144
	ctx.r9.s64 = ctx.r5.s64 + -28144;
	// stw r4,2020(r31)
	REX_STORE_U32(ctx.r31.u32 + 2020, ctx.r4.u32);
	// addi r8,r3,-31456
	ctx.r8.s64 = ctx.r3.s64 + -31456;
	// stw r11,2024(r31)
	REX_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// addi r7,r10,-30352
	ctx.r7.s64 = ctx.r10.s64 + -30352;
	// stw r9,2028(r31)
	REX_STORE_U32(ctx.r31.u32 + 2028, ctx.r9.u32);
	// stw r8,2032(r31)
	REX_STORE_U32(ctx.r31.u32 + 2032, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,2036(r31)
	REX_STORE_U32(ctx.r31.u32 + 2036, ctx.r7.u32);
loc_822B59AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DB930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x822DB938;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3760(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// lwz r30,616(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 616);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r6,3832(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// add r26,r6,r10
	ctx.r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r30,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r30.u32);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,15964(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// add r28,r4,r11
	ctx.r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822db9fc
	if (ctx.cr6.eq) goto loc_822DB9FC;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822db9fc
	if (!ctx.cr6.eq) goto loc_822DB9FC;
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_822DB9FC:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822dba8c
	if (!ctx.cr6.gt) goto loc_822DBA8C;
loc_822DBA0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203350
	ctx.lr = 0x822DBA1C;
	sub_82203350(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82203350
	ctx.lr = 0x822DBA38;
	sub_82203350(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82203350
	ctx.lr = 0x822DBA54;
	sub_82203350(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82203350
	ctx.lr = 0x822DBA70;
	sub_82203350(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822dba0c
	if (ctx.cr6.lt) goto loc_822DBA0C;
loc_822DBA8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DFC00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x822DFC08;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,3812(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3812);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfc34
	if (ctx.cr6.eq) goto loc_822DFC34;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dfc38
	goto loc_822DFC38;
loc_822DFC34:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_822DFC38:
	// lwz r11,3796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfc50
	if (ctx.cr6.eq) goto loc_822DFC50;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dfc54
	goto loc_822DFC54;
loc_822DFC50:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_822DFC54:
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// lwz r26,3828(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfc70
	if (ctx.cr6.eq) goto loc_822DFC70;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dfc74
	goto loc_822DFC74;
loc_822DFC70:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_822DFC74:
	// lwz r11,3824(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfc8c
	if (ctx.cr6.eq) goto loc_822DFC8C;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dfc90
	goto loc_822DFC90;
loc_822DFC8C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_822DFC90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df4f0
	ctx.lr = 0x822DFC9C;
	sub_822DF4F0(ctx, base);
	// lwz r6,364(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// addi r8,r31,2940
	ctx.r8.s64 = ctx.r31.s64 + 2940;
	// addi r7,r31,2952
	ctx.r7.s64 = ctx.r31.s64 + 2952;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// lwz r9,368(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r11,20688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r11,20688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// mulli r10,r10,504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(504));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// stb r5,24(r30)
	REX_STORE_U8(ctx.r30.u32 + 24, ctx.r5.u8);
	// lwz r3,352(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// stb r3,25(r30)
	REX_STORE_U8(ctx.r30.u32 + 25, ctx.r3.u8);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stb r10,26(r30)
	REX_STORE_U8(ctx.r30.u32 + 26, ctx.r10.u8);
	// lwz r6,2380(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// stw r6,336(r30)
	REX_STORE_U32(ctx.r30.u32 + 336, ctx.r6.u32);
	// lwz r5,20968(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20968);
	// stw r5,340(r30)
	REX_STORE_U32(ctx.r30.u32 + 340, ctx.r5.u32);
	// lwz r4,20988(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20988);
	// stw r4,344(r30)
	REX_STORE_U32(ctx.r30.u32 + 344, ctx.r4.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// stb r3,27(r30)
	REX_STORE_U8(ctx.r30.u32 + 27, ctx.r3.u8);
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// stb r10,28(r30)
	REX_STORE_U8(ctx.r30.u32 + 28, ctx.r10.u8);
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// stb r6,29(r30)
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r6.u8);
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stb r5,30(r30)
	REX_STORE_U8(ctx.r30.u32 + 30, ctx.r5.u8);
	// lwz r4,2144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// stw r4,356(r30)
	REX_STORE_U32(ctx.r30.u32 + 356, ctx.r4.u32);
	// lwz r3,2520(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// stw r3,360(r30)
	REX_STORE_U32(ctx.r30.u32 + 360, ctx.r3.u32);
	// sth r23,46(r30)
	REX_STORE_U16(ctx.r30.u32 + 46, ctx.r23.u16);
	// sth r23,44(r30)
	REX_STORE_U16(ctx.r30.u32 + 44, ctx.r23.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// sth r11,62(r30)
	REX_STORE_U16(ctx.r30.u32 + 62, ctx.r11.u16);
	// lwz r9,424(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// sth r9,64(r30)
	REX_STORE_U16(ctx.r30.u32 + 64, ctx.r9.u16);
	// lwz r5,428(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// sth r5,66(r30)
	REX_STORE_U16(ctx.r30.u32 + 66, ctx.r5.u16);
	// lwz r3,432(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// sth r3,68(r30)
	REX_STORE_U16(ctx.r30.u32 + 68, ctx.r3.u16);
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// sth r10,70(r30)
	REX_STORE_U16(ctx.r30.u32 + 70, ctx.r10.u16);
	// lwz r6,416(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// sth r6,72(r30)
	REX_STORE_U16(ctx.r30.u32 + 72, ctx.r6.u16);
	// lwz r4,14836(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// stb r4,32(r30)
	REX_STORE_U8(ctx.r30.u32 + 32, ctx.r4.u8);
	// lwz r11,1796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1796);
	// stb r11,31(r30)
	REX_STORE_U8(ctx.r30.u32 + 31, ctx.r11.u8);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stb r9,34(r30)
	REX_STORE_U8(ctx.r30.u32 + 34, ctx.r9.u8);
	// lwz r5,6608(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// stw r5,388(r30)
	REX_STORE_U32(ctx.r30.u32 + 388, ctx.r5.u32);
	// lwz r4,14816(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14816);
	// stw r7,400(r30)
	REX_STORE_U32(ctx.r30.u32 + 400, ctx.r7.u32);
	// stw r4,392(r30)
	REX_STORE_U32(ctx.r30.u32 + 392, ctx.r4.u32);
	// stw r8,396(r30)
	REX_STORE_U32(ctx.r30.u32 + 396, ctx.r8.u32);
	// lwz r3,2916(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2916);
	// stw r3,404(r30)
	REX_STORE_U32(ctx.r30.u32 + 404, ctx.r3.u32);
	// lwz r11,2920(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2920);
	// stw r11,408(r30)
	REX_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// lwz r10,2924(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2924);
	// stw r10,412(r30)
	REX_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// lwz r9,2928(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2928);
	// stw r9,416(r30)
	REX_STORE_U32(ctx.r30.u32 + 416, ctx.r9.u32);
	// lwz r8,2932(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// stw r8,420(r30)
	REX_STORE_U32(ctx.r30.u32 + 420, ctx.r8.u32);
	// lwz r7,2936(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2936);
	// stw r7,424(r30)
	REX_STORE_U32(ctx.r30.u32 + 424, ctx.r7.u32);
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// stw r6,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r6.u32);
	// lwz r5,3004(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// stb r5,33(r30)
	REX_STORE_U8(ctx.r30.u32 + 33, ctx.r5.u8);
	// lwz r3,1836(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r3,444(r30)
	REX_STORE_U32(ctx.r30.u32 + 444, ctx.r3.u32);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// stb r11,48(r30)
	REX_STORE_U8(ctx.r30.u32 + 48, ctx.r11.u8);
	// stb r23,49(r30)
	REX_STORE_U8(ctx.r30.u32 + 49, ctx.r23.u8);
	// lwz r9,3960(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// stb r9,35(r30)
	REX_STORE_U8(ctx.r30.u32 + 35, ctx.r9.u8);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mulli r6,r7,-6
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(-6));
	// sth r6,368(r30)
	REX_STORE_U16(ctx.r30.u32 + 368, ctx.r6.u16);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,370(r30)
	REX_STORE_U16(ctx.r30.u32 + 370, ctx.r3.u16);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r9,372(r30)
	REX_STORE_U16(ctx.r30.u32 + 372, ctx.r9.u16);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,374(r30)
	REX_STORE_U16(ctx.r30.u32 + 374, ctx.r6.u16);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// sth r3,364(r30)
	REX_STORE_U16(ctx.r30.u32 + 364, ctx.r3.u16);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// sth r10,366(r30)
	REX_STORE_U16(ctx.r30.u32 + 366, ctx.r10.u16);
	// beq cr6,0x822dfeac
	if (ctx.cr6.eq) goto loc_822DFEAC;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x822dfeb0
	goto loc_822DFEB0;
loc_822DFEAC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFEB0:
	// stw r11,464(r30)
	REX_STORE_U32(ctx.r30.u32 + 464, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822dfec4
	if (!ctx.cr6.eq) goto loc_822DFEC4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822DFEC4:
	// stw r10,468(r30)
	REX_STORE_U32(ctx.r30.u32 + 468, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfee0
	if (ctx.cr6.eq) goto loc_822DFEE0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dfee4
	goto loc_822DFEE4;
loc_822DFEE0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822DFEE4:
	// stw r10,472(r30)
	REX_STORE_U32(ctx.r30.u32 + 472, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dff04
	if (ctx.cr6.eq) goto loc_822DFF04;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dff08
	goto loc_822DFF08;
loc_822DFF04:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFF08:
	// stw r11,476(r30)
	REX_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822dff2c
	if (ctx.cr6.eq) goto loc_822DFF2C;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x822dff30
	goto loc_822DFF30;
loc_822DFF2C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFF30:
	// stw r11,480(r30)
	REX_STORE_U32(ctx.r30.u32 + 480, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822dff54
	if (ctx.cr6.eq) goto loc_822DFF54;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x822dff58
	goto loc_822DFF58;
loc_822DFF54:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFF58:
	// stw r11,484(r30)
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822dff7c
	if (ctx.cr6.eq) goto loc_822DFF7C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x822dff80
	goto loc_822DFF80;
loc_822DFF7C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFF80:
	// stw r11,512(r30)
	REX_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822dff94
	if (!ctx.cr6.eq) goto loc_822DFF94;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822DFF94:
	// stw r10,516(r30)
	REX_STORE_U32(ctx.r30.u32 + 516, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dffb0
	if (ctx.cr6.eq) goto loc_822DFFB0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dffb4
	goto loc_822DFFB4;
loc_822DFFB0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822DFFB4:
	// stw r10,520(r30)
	REX_STORE_U32(ctx.r30.u32 + 520, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dffd4
	if (ctx.cr6.eq) goto loc_822DFFD4;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822dffd8
	goto loc_822DFFD8;
loc_822DFFD4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822DFFD8:
	// stw r11,524(r30)
	REX_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822dfffc
	if (ctx.cr6.eq) goto loc_822DFFFC;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x822e0000
	goto loc_822E0000;
loc_822DFFFC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E0000:
	// stw r11,528(r30)
	REX_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822e0024
	if (ctx.cr6.eq) goto loc_822E0024;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x822e0028
	goto loc_822E0028;
loc_822E0024:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E0028:
	// stw r11,532(r30)
	REX_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// lwz r11,21704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e0108
	if (!ctx.cr6.eq) goto loc_822E0108;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e0058
	if (ctx.cr6.eq) goto loc_822E0058;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x822e005c
	goto loc_822E005C;
loc_822E0058:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E005C:
	// stw r11,488(r30)
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822e0070
	if (!ctx.cr6.eq) goto loc_822E0070;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E0070:
	// stw r10,492(r30)
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e008c
	if (ctx.cr6.eq) goto loc_822E008C;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e0090
	goto loc_822E0090;
loc_822E008C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E0090:
	// stw r10,496(r30)
	REX_STORE_U32(ctx.r30.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e00b0
	if (ctx.cr6.eq) goto loc_822E00B0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e00b4
	goto loc_822E00B4;
loc_822E00B0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E00B4:
	// stw r11,500(r30)
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e00dc
	if (ctx.cr6.eq) goto loc_822E00DC;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x822e00e0
	goto loc_822E00E0;
loc_822E00DC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E00E0:
	// stw r11,504(r30)
	REX_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822e0260
	if (ctx.cr6.eq) goto loc_822E0260;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x822e0264
	goto loc_822E0264;
loc_822E0108:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822e016c
	if (!ctx.cr6.eq) goto loc_822E016C;
	// lwz r11,20728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e016c
	if (ctx.cr6.eq) goto loc_822E016C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e0138
	if (ctx.cr6.eq) goto loc_822E0138;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x822e013c
	goto loc_822E013C;
loc_822E0138:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E013C:
	// stw r11,488(r30)
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822e0150
	if (!ctx.cr6.eq) goto loc_822E0150;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E0150:
	// stw r10,492(r30)
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e008c
	if (ctx.cr6.eq) goto loc_822E008C;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e0090
	goto loc_822E0090;
loc_822E016C:
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e0198
	if (ctx.cr6.eq) goto loc_822E0198;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x822e019c
	goto loc_822E019C;
loc_822E0198:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E019C:
	// stw r11,488(r30)
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822e01b0
	if (!ctx.cr6.eq) goto loc_822E01B0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E01B0:
	// stw r10,492(r30)
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e01cc
	if (ctx.cr6.eq) goto loc_822E01CC;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e01d0
	goto loc_822E01D0;
loc_822E01CC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E01D0:
	// stw r10,496(r30)
	REX_STORE_U32(ctx.r30.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e01f0
	if (ctx.cr6.eq) goto loc_822E01F0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e01f4
	goto loc_822E01F4;
loc_822E01F0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E01F4:
	// stw r11,500(r30)
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// lwz r11,3780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0228
	if (ctx.cr6.eq) goto loc_822E0228;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,20688(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e022c
	goto loc_822E022C;
loc_822E0228:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E022C:
	// stw r11,504(r30)
	REX_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// lwz r11,3784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0260
	if (ctx.cr6.eq) goto loc_822E0260;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,20688(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e0264
	goto loc_822E0264;
loc_822E0260:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E0264:
	// stw r11,508(r30)
	REX_STORE_U32(ctx.r30.u32 + 508, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822e0288
	if (ctx.cr6.eq) goto loc_822E0288;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x822e028c
	goto loc_822E028C;
loc_822E0288:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E028C:
	// stw r11,536(r30)
	REX_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822e02a0
	if (!ctx.cr6.eq) goto loc_822E02A0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E02A0:
	// stw r10,540(r30)
	REX_STORE_U32(ctx.r30.u32 + 540, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e02bc
	if (ctx.cr6.eq) goto loc_822E02BC;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e02c0
	goto loc_822E02C0;
loc_822E02BC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E02C0:
	// stw r10,544(r30)
	REX_STORE_U32(ctx.r30.u32 + 544, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e02e0
	if (ctx.cr6.eq) goto loc_822E02E0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e02e4
	goto loc_822E02E4;
loc_822E02E0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E02E4:
	// stw r11,548(r30)
	REX_STORE_U32(ctx.r30.u32 + 548, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822e030c
	if (ctx.cr6.eq) goto loc_822E030C;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x822e0310
	goto loc_822E0310;
loc_822E030C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E0310:
	// stw r11,552(r30)
	REX_STORE_U32(ctx.r30.u32 + 552, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822e0338
	if (ctx.cr6.eq) goto loc_822E0338;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x822e033c
	goto loc_822E033C;
loc_822E0338:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E033C:
	// stw r11,556(r30)
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r10,1176(r30)
	REX_STORE_U16(ctx.r30.u32 + 1176, ctx.r10.u16);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r30,1190
	ctx.r8.s64 = ctx.r30.s64 + 1190;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// sth r6,1178(r30)
	REX_STORE_U16(ctx.r30.u32 + 1178, ctx.r6.u16);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// sth r11,1180(r30)
	REX_STORE_U16(ctx.r30.u32 + 1180, ctx.r11.u16);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1182(r30)
	REX_STORE_U16(ctx.r30.u32 + 1182, ctx.r5.u16);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// sth r9,1184(r30)
	REX_STORE_U16(ctx.r30.u32 + 1184, ctx.r9.u16);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// srawi r4,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// sth r4,1186(r30)
	REX_STORE_U16(ctx.r30.u32 + 1186, ctx.r4.u16);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// sth r7,1188(r30)
	REX_STORE_U16(ctx.r30.u32 + 1188, ctx.r7.u16);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mulli r11,r5,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1190(r30)
	REX_STORE_U16(ctx.r30.u32 + 1190, ctx.r3.u16);
loc_822E03FC:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x822e03fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E03FC;
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e0448
	if (ctx.cr6.eq) goto loc_822E0448;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x822e044c
	goto loc_822E044C;
loc_822E0448:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E044C:
	// stw r11,560(r30)
	REX_STORE_U32(ctx.r30.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x822e0460
	if (!ctx.cr6.eq) goto loc_822E0460;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E0460:
	// stw r10,564(r30)
	REX_STORE_U32(ctx.r30.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e047c
	if (ctx.cr6.eq) goto loc_822E047C;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e0480
	goto loc_822E0480;
loc_822E047C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822E0480:
	// stw r10,568(r30)
	REX_STORE_U32(ctx.r30.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e04a0
	if (ctx.cr6.eq) goto loc_822E04A0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e04a4
	goto loc_822E04A4;
loc_822E04A0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E04A4:
	// stw r11,572(r30)
	REX_STORE_U32(ctx.r30.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e04d4
	if (ctx.cr6.eq) goto loc_822E04D4;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,20688(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e04d8
	goto loc_822E04D8;
loc_822E04D4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E04D8:
	// stw r11,576(r30)
	REX_STORE_U32(ctx.r30.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0508
	if (ctx.cr6.eq) goto loc_822E0508;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,20688(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e050c
	goto loc_822E050C;
loc_822E0508:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822E050C:
	// stw r11,580(r30)
	REX_STORE_U32(ctx.r30.u32 + 580, ctx.r11.u32);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r10,3016(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// stw r10,588(r30)
	REX_STORE_U32(ctx.r30.u32 + 588, ctx.r10.u32);
	// ori r5,r9,64
	ctx.r5.u64 = ctx.r9.u64 | 64;
	// stw r10,584(r30)
	REX_STORE_U32(ctx.r30.u32 + 584, ctx.r10.u32);
	// ori r4,r8,8
	ctx.r4.u64 = ctx.r8.u64 | 8;
	// lwz r26,3024(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// stw r26,596(r30)
	REX_STORE_U32(ctx.r30.u32 + 596, ctx.r26.u32);
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// stw r26,592(r30)
	REX_STORE_U32(ctx.r30.u32 + 592, ctx.r26.u32);
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// lwz r26,3028(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// addi r11,r30,1120
	ctx.r11.s64 = ctx.r30.s64 + 1120;
	// stw r26,600(r30)
	REX_STORE_U32(ctx.r30.u32 + 600, ctx.r26.u32);
	// addi r29,r31,23984
	ctx.r29.s64 = ctx.r31.s64 + 23984;
	// lwz r26,3036(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// addi r28,r31,2120
	ctx.r28.s64 = ctx.r31.s64 + 2120;
	// stw r26,604(r30)
	REX_STORE_U32(ctx.r30.u32 + 604, ctx.r26.u32);
	// addi r27,r31,24240
	ctx.r27.s64 = ctx.r31.s64 + 24240;
	// lwz r26,2560(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// stw r26,608(r30)
	REX_STORE_U32(ctx.r30.u32 + 608, ctx.r26.u32);
	// lwz r26,2480(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// stw r26,612(r30)
	REX_STORE_U32(ctx.r30.u32 + 612, ctx.r26.u32);
	// lwz r26,1856(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lbz r6,35(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 35);
	// addis r3,r6,31
	ctx.r3.s64 = ctx.r6.s64 + 2031616;
	// addis r10,r6,15
	ctx.r10.s64 = ctx.r6.s64 + 983040;
	// stw r26,620(r30)
	REX_STORE_U32(ctx.r30.u32 + 620, ctx.r26.u32);
	// addis r9,r6,7
	ctx.r9.s64 = ctx.r6.s64 + 458752;
	// lwz r26,1860(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// addis r8,r6,3
	ctx.r8.s64 = ctx.r6.s64 + 196608;
	// stw r26,624(r30)
	REX_STORE_U32(ctx.r30.u32 + 624, ctx.r26.u32);
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lwz r26,1864(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// addi r3,r3,31
	ctx.r3.s64 = ctx.r3.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// stw r5,1156(r30)
	REX_STORE_U32(ctx.r30.u32 + 1156, ctx.r5.u32);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// stw r3,1136(r30)
	REX_STORE_U32(ctx.r30.u32 + 1136, ctx.r3.u32);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stw r10,1140(r30)
	REX_STORE_U32(ctx.r30.u32 + 1140, ctx.r10.u32);
	// stw r9,1144(r30)
	REX_STORE_U32(ctx.r30.u32 + 1144, ctx.r9.u32);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r8,1148(r30)
	REX_STORE_U32(ctx.r30.u32 + 1148, ctx.r8.u32);
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r26,632(r30)
	REX_STORE_U32(ctx.r30.u32 + 632, ctx.r26.u32);
	// li r6,1104
	ctx.r6.s64 = 1104;
	// stw r7,1152(r30)
	REX_STORE_U32(ctx.r30.u32 + 1152, ctx.r7.u32);
	// stw r4,1160(r30)
	REX_STORE_U32(ctx.r30.u32 + 1160, ctx.r4.u32);
	// lbz r5,35(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 35);
	// sth r5,1134(r30)
	REX_STORE_U16(ctx.r30.u32 + 1134, ctx.r5.u16);
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,2096(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// stw r4,1224(r30)
	REX_STORE_U32(ctx.r30.u32 + 1224, ctx.r4.u32);
	// lwz r3,2100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// stw r3,1228(r30)
	REX_STORE_U32(ctx.r30.u32 + 1228, ctx.r3.u32);
	// lwz r11,21712(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21712);
	// stw r11,1236(r30)
	REX_STORE_U32(ctx.r30.u32 + 1236, ctx.r11.u32);
	// lwz r10,21716(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21716);
	// stw r10,1240(r30)
	REX_STORE_U32(ctx.r30.u32 + 1240, ctx.r10.u32);
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stb r9,1244(r30)
	REX_STORE_U8(ctx.r30.u32 + 1244, ctx.r9.u8);
	// lwz r7,4036(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4036);
	// stb r7,1245(r30)
	REX_STORE_U8(ctx.r30.u32 + 1245, ctx.r7.u8);
	// lwz r5,4044(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4044);
	// stb r5,1246(r30)
	REX_STORE_U8(ctx.r30.u32 + 1246, ctx.r5.u8);
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// stb r3,1249(r30)
	REX_STORE_U8(ctx.r30.u32 + 1249, ctx.r3.u8);
	// lwz r10,476(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// stb r10,1250(r30)
	REX_STORE_U8(ctx.r30.u32 + 1250, ctx.r10.u8);
	// lwz r8,21968(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// stw r8,1304(r30)
	REX_STORE_U32(ctx.r30.u32 + 1304, ctx.r8.u32);
	// lwz r7,288(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// stw r7,1308(r30)
	REX_STORE_U32(ctx.r30.u32 + 1308, ctx.r7.u32);
	// lwz r6,1952(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1952);
	// stb r6,1247(r30)
	REX_STORE_U8(ctx.r30.u32 + 1247, ctx.r6.u8);
	// lwz r4,1956(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1956);
	// stb r4,1248(r30)
	REX_STORE_U8(ctx.r30.u32 + 1248, ctx.r4.u8);
	// lwz r11,1948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1948);
	// stb r11,1251(r30)
	REX_STORE_U8(ctx.r30.u32 + 1251, ctx.r11.u8);
	// stw r29,1260(r30)
	REX_STORE_U32(ctx.r30.u32 + 1260, ctx.r29.u32);
	// stw r28,1232(r30)
	REX_STORE_U32(ctx.r30.u32 + 1232, ctx.r28.u32);
	// lwz r9,20708(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20708);
	// stb r9,1254(r30)
	REX_STORE_U8(ctx.r30.u32 + 1254, ctx.r9.u8);
	// lwz r7,21644(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21644);
	// stb r7,1255(r30)
	REX_STORE_U8(ctx.r30.u32 + 1255, ctx.r7.u8);
	// stw r27,1264(r30)
	REX_STORE_U32(ctx.r30.u32 + 1264, ctx.r27.u32);
	// lwz r5,20680(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822e06b8
	if (ctx.cr6.eq) goto loc_822E06B8;
	// lwz r11,20684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e06b8
	if (!ctx.cr6.eq) goto loc_822E06B8;
	// lwz r11,1836(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r11,1268(r30)
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,20752(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20752);
	// stw r10,1272(r30)
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,20756(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20756);
	// stw r9,1300(r30)
	REX_STORE_U32(ctx.r30.u32 + 1300, ctx.r9.u32);
	// b 0x822e0738
	goto loc_822E0738;
loc_822E06B8:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822e0708
	if (!ctx.cr6.eq) goto loc_822E0708;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r11,1268(r30)
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,1816(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r10,1272(r30)
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,1824(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r9,1276(r30)
	REX_STORE_U32(ctx.r30.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r8,1280(r30)
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r8.u32);
	// lwz r7,1824(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r7,1284(r30)
	REX_STORE_U32(ctx.r30.u32 + 1284, ctx.r7.u32);
	// lwz r6,1820(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r6,1288(r30)
	REX_STORE_U32(ctx.r30.u32 + 1288, ctx.r6.u32);
	// lwz r5,1824(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r5,1292(r30)
	REX_STORE_U32(ctx.r30.u32 + 1292, ctx.r5.u32);
	// lwz r4,1820(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r4,1296(r30)
	REX_STORE_U32(ctx.r30.u32 + 1296, ctx.r4.u32);
	// b 0x822e0738
	goto loc_822E0738;
loc_822E0708:
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// stw r11,1268(r30)
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,1824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r10,1272(r30)
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,1808(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r9,1276(r30)
	REX_STORE_U32(ctx.r30.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r8,1280(r30)
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r8.u32);
	// lwz r7,1804(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1804);
	// stw r7,1284(r30)
	REX_STORE_U32(ctx.r30.u32 + 1284, ctx.r7.u32);
	// lwz r6,1816(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r6,1288(r30)
	REX_STORE_U32(ctx.r30.u32 + 1288, ctx.r6.u32);
loc_822E0738:
	// sth r23,1256(r30)
	REX_STORE_U16(ctx.r30.u32 + 1256, ctx.r23.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r7,1800(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// addi r9,r31,24304
	ctx.r9.s64 = ctx.r31.s64 + 24304;
	// stb r7,1252(r30)
	REX_STORE_U8(ctx.r30.u32 + 1252, ctx.r7.u8);
	// addi r8,r31,24496
	ctx.r8.s64 = ctx.r31.s64 + 24496;
	// lwz r5,1940(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1940);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,1253(r30)
	REX_STORE_U8(ctx.r30.u32 + 1253, ctx.r5.u8);
	// lwz r11,22284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22284);
	// stw r11,1312(r30)
	REX_STORE_U32(ctx.r30.u32 + 1312, ctx.r11.u32);
	// lwz r7,3972(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// stw r7,1316(r30)
	REX_STORE_U32(ctx.r30.u32 + 1316, ctx.r7.u32);
	// lwz r6,3976(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// stw r6,1320(r30)
	REX_STORE_U32(ctx.r30.u32 + 1320, ctx.r6.u32);
	// lwz r5,20692(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20692);
	// stw r5,1380(r30)
	REX_STORE_U32(ctx.r30.u32 + 1380, ctx.r5.u32);
	// lwz r4,15284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15284);
	// stw r4,1384(r30)
	REX_STORE_U32(ctx.r30.u32 + 1384, ctx.r4.u32);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stb r4,1324(r30)
	REX_STORE_U8(ctx.r30.u32 + 1324, ctx.r4.u8);
	// lwz r11,3016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// stw r11,1328(r30)
	REX_STORE_U32(ctx.r30.u32 + 1328, ctx.r11.u32);
	// lwz r10,3020(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3020);
	// stw r10,1332(r30)
	REX_STORE_U32(ctx.r30.u32 + 1332, ctx.r10.u32);
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// stw r7,1336(r30)
	REX_STORE_U32(ctx.r30.u32 + 1336, ctx.r7.u32);
	// lwz r6,3028(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// stw r6,1340(r30)
	REX_STORE_U32(ctx.r30.u32 + 1340, ctx.r6.u32);
	// lwz r5,3032(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// stw r5,1344(r30)
	REX_STORE_U32(ctx.r30.u32 + 1344, ctx.r5.u32);
	// lwz r4,3036(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// stw r4,1348(r30)
	REX_STORE_U32(ctx.r30.u32 + 1348, ctx.r4.u32);
	// lwz r11,3040(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3040);
	// stw r11,1352(r30)
	REX_STORE_U32(ctx.r30.u32 + 1352, ctx.r11.u32);
	// stw r9,1356(r30)
	REX_STORE_U32(ctx.r30.u32 + 1356, ctx.r9.u32);
	// stw r8,1360(r30)
	REX_STORE_U32(ctx.r30.u32 + 1360, ctx.r8.u32);
	// lwz r10,20768(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20768);
	// stw r10,1388(r30)
	REX_STORE_U32(ctx.r30.u32 + 1388, ctx.r10.u32);
	// lwz r9,4016(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// stw r9,1392(r30)
	REX_STORE_U32(ctx.r30.u32 + 1392, ctx.r9.u32);
	// bl 0x822d01e8
	ctx.lr = 0x822E07F0;
	sub_822D01E8(ctx, base);
	// stw r3,380(r30)
	REX_STORE_U32(ctx.r30.u32 + 380, ctx.r3.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lhz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r6,r7,r3
	ctx.r6.u64 = uint32_t((ctx.r3.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r7.s32 / ctx.r3.s32 : 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r6,384(r30)
	REX_STORE_U32(ctx.r30.u32 + 384, ctx.r6.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r3,14840(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14840);
	// lwz r11,3428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stw r10,1596(r30)
	REX_STORE_U32(ctx.r30.u32 + 1596, ctx.r10.u32);
	// lwz r9,15340(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// stw r9,1696(r30)
	REX_STORE_U32(ctx.r30.u32 + 1696, ctx.r9.u32);
	// lwz r8,15344(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15344);
	// stw r8,1700(r30)
	REX_STORE_U32(ctx.r30.u32 + 1700, ctx.r8.u32);
	// lwz r7,15348(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// stw r7,1704(r30)
	REX_STORE_U32(ctx.r30.u32 + 1704, ctx.r7.u32);
	// lwz r6,15352(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15352);
	// stw r6,1708(r30)
	REX_STORE_U32(ctx.r30.u32 + 1708, ctx.r6.u32);
	// lwz r5,20900(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20900);
	// stw r5,1404(r30)
	REX_STORE_U32(ctx.r30.u32 + 1404, ctx.r5.u32);
	// lwz r4,21700(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21700);
	// stw r4,1396(r30)
	REX_STORE_U32(ctx.r30.u32 + 1396, ctx.r4.u32);
	// lwz r3,21696(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21696);
	// stw r3,1400(r30)
	REX_STORE_U32(ctx.r30.u32 + 1400, ctx.r3.u32);
	// lwz r11,4020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4020);
	// stw r11,1560(r30)
	REX_STORE_U32(ctx.r30.u32 + 1560, ctx.r11.u32);
	// lwz r10,20728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20728);
	// stw r10,1564(r30)
	REX_STORE_U32(ctx.r30.u32 + 1564, ctx.r10.u32);
	// lwz r9,20732(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20732);
	// stw r9,1568(r30)
	REX_STORE_U32(ctx.r30.u32 + 1568, ctx.r9.u32);
	// lwz r8,20736(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20736);
	// stw r8,1572(r30)
	REX_STORE_U32(ctx.r30.u32 + 1572, ctx.r8.u32);
	// lwz r7,20740(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20740);
	// stw r7,1576(r30)
	REX_STORE_U32(ctx.r30.u32 + 1576, ctx.r7.u32);
	// lwz r6,20744(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20744);
	// stw r6,1580(r30)
	REX_STORE_U32(ctx.r30.u32 + 1580, ctx.r6.u32);
	// lwz r5,20748(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20748);
	// stw r5,1584(r30)
	REX_STORE_U32(ctx.r30.u32 + 1584, ctx.r5.u32);
	// lwz r4,20688(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// stw r4,1368(r30)
	REX_STORE_U32(ctx.r30.u32 + 1368, ctx.r4.u32);
	// lwz r3,21704(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// stw r3,1372(r30)
	REX_STORE_U32(ctx.r30.u32 + 1372, ctx.r3.u32);
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// stw r11,1588(r30)
	REX_STORE_U32(ctx.r30.u32 + 1588, ctx.r11.u32);
	// lwz r10,22140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822e08f4
	if (!ctx.cr6.eq) goto loc_822E08F4;
	// lwz r11,21816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21816);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,45788
	ctx.r8.u64 = ctx.r10.u64 | 45788;
	// ori r7,r9,45792
	ctx.r7.u64 = ctx.r9.u64 | 45792;
	// stw r11,1456(r30)
	REX_STORE_U32(ctx.r30.u32 + 1456, ctx.r11.u32);
	// lwz r6,22172(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 22172);
	// stw r6,1460(r30)
	REX_STORE_U32(ctx.r30.u32 + 1460, ctx.r6.u32);
	// lwz r5,21844(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21844);
	// stw r5,1464(r30)
	REX_STORE_U32(ctx.r30.u32 + 1464, ctx.r5.u32);
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r4,1484(r30)
	REX_STORE_U32(ctx.r30.u32 + 1484, ctx.r4.u32);
	// lwzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stw r3,1480(r30)
	REX_STORE_U32(ctx.r30.u32 + 1480, ctx.r3.u32);
loc_822E08F4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822e091c
	if (!ctx.cr6.eq) goto loc_822E091C;
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e091c
	if (!ctx.cr6.eq) goto loc_822E091C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x822e0924
	goto loc_822E0924;
loc_822E091C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
loc_822E0924:
	// stw r11,1364(r30)
	REX_STORE_U32(ctx.r30.u32 + 1364, ctx.r11.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r8,24720
	ctx.r6.s64 = ctx.r8.s64 + 24720;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r11,1356(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1356);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E094C:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e098c
	if (ctx.cr6.eq) goto loc_822E098C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_822E098C:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r4.u8);
	// stw r3,15(r11)
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e09cc
	if (ctx.cr6.eq) goto loc_822E09CC;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// stw r3,19(r11)
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r3.u32);
loc_822E09CC:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r4.u8);
	// stw r3,27(r11)
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e0a0c
	if (ctx.cr6.eq) goto loc_822E0A0C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r4.u8);
	// stw r3,31(r11)
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r3.u32);
loc_822E0A0C:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// stw r3,39(r11)
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e0a4c
	if (ctx.cr6.eq) goto loc_822E0A4C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r4.u8);
	// stw r3,43(r11)
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r3.u32);
loc_822E0A4C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x822e094c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E094C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,1360(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1360);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E0A70:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// stw r4,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0ab0
	if (ctx.cr6.eq) goto loc_822E0AB0;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stw r4,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r4.u32);
loc_822E0AB0:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r5.u8);
	// stw r4,15(r11)
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0af0
	if (ctx.cr6.eq) goto loc_822E0AF0;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// stw r4,19(r11)
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r4.u32);
loc_822E0AF0:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r5.u8);
	// stw r4,27(r11)
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0b30
	if (ctx.cr6.eq) goto loc_822E0B30;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r5.u8);
	// stw r4,31(r11)
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r4.u32);
loc_822E0B30:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r5.u8);
	// stw r4,39(r11)
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0b70
	if (ctx.cr6.eq) goto loc_822E0B70;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r5.u8);
	// stw r4,43(r11)
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r4.u32);
loc_822E0B70:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x822e0a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0A70;
	// lwz r11,1600(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0e14
	if (ctx.cr6.eq) goto loc_822E0E14;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822e0e14
	if (!ctx.cr6.eq) goto loc_822E0E14;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,620(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 620);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19972
	ctx.r9.s64 = ctx.r9.s64 + -19972;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1604(r30)
	REX_STORE_U32(ctx.r30.u32 + 1604, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_822E0BCC:
	// lbzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r9,r29
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e0bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0BCC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,624(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 624);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19940
	ctx.r9.s64 = ctx.r9.s64 + -19940;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1608(r30)
	REX_STORE_U32(ctx.r30.u32 + 1608, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_822E0C70:
	// lbzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xF8;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,26,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3E;
	// stbx r28,r9,r29
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e0c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0C70;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,632(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 632);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19908
	ctx.r9.s64 = ctx.r9.s64 + -19908;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1616(r30)
	REX_STORE_U32(ctx.r30.u32 + 1616, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_822E0D14:
	// lbzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0x18;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r9,r29
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e0d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0D14;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-20036
	ctx.r9.s64 = ctx.r9.s64 + -20036;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1620(r30)
	REX_STORE_U32(ctx.r30.u32 + 1620, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_822E0DB8:
	// lbzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stbx r30,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822e0db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0DB8;
loc_822E0E14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233AAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8233AAF8;
	__savegprlr_28(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8233ab84
	if (!ctx.cr6.gt) goto loc_8233AB84;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8233ab84
	if (!ctx.cr6.gt) goto loc_8233AB84;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8233ab2c
	if (ctx.cr6.eq) goto loc_8233AB2C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8233ab40
	if (!ctx.cr6.eq) goto loc_8233AB40;
loc_8233AB2C:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ace4
	if (ctx.cr6.eq) goto loc_8233ACE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8233ace4
	if (ctx.cr6.eq) goto loc_8233ACE4;
loc_8233AB40:
	// lwz r11,14580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ab8c
	if (ctx.cr6.eq) goto loc_8233AB8C;
	// lwz r11,14572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14572);
	// lwz r9,14564(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
	// lwz r31,8(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,14576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14576);
	// srawi r9,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 31;
	// lwz r7,14568(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// xor r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8233abbc
	if (ctx.cr6.eq) goto loc_8233ABBC;
loc_8233AB84:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_8233AB8C:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,8(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r31,r7
	ctx.r5.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
loc_8233ABBC:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233abe0
	if (!ctx.cr6.eq) goto loc_8233ABE0;
	// srawi r9,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 2;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8233ab84
	if (!ctx.cr0.eq) goto loc_8233AB84;
loc_8233ABE0:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233ac00
	if (!ctx.cr6.eq) goto loc_8233AC00;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r7,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8233ab84
	if (!ctx.cr0.eq) goto loc_8233AB84;
loc_8233AC00:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r9,22870
	ctx.r9.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r7,21849
	ctx.r7.s64 = 1431896064;
	// lis r6,22101
	ctx.r6.s64 = 1448411136;
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// ori r9,r9,22869
	ctx.r9.u64 = ctx.r9.u64 | 22869;
	// ori r7,r7,22105
	ctx.r7.u64 = ctx.r7.u64 | 22105;
	// ori r6,r6,22857
	ctx.r6.u64 = ctx.r6.u64 | 22857;
	// ori r5,r5,13385
	ctx.r5.u64 = ctx.r5.u64 | 13385;
	// ori r4,r4,13392
	ctx.r4.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8233ac60
	if (ctx.cr6.eq) goto loc_8233AC60;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8233ac60
	if (ctx.cr6.eq) goto loc_8233AC60;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8233ac60
	if (ctx.cr6.eq) goto loc_8233AC60;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8233ac60
	if (ctx.cr6.eq) goto loc_8233AC60;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8233ac60
	if (ctx.cr6.eq) goto loc_8233AC60;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8233ac6c
	if (!ctx.cr6.eq) goto loc_8233AC6C;
loc_8233AC60:
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
loc_8233AC6C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8233ac9c
	if (ctx.cr6.eq) goto loc_8233AC9C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8233ac9c
	if (ctx.cr6.eq) goto loc_8233AC9C;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8233ac9c
	if (ctx.cr6.eq) goto loc_8233AC9C;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8233ac9c
	if (ctx.cr6.eq) goto loc_8233AC9C;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8233ac9c
	if (ctx.cr6.eq) goto loc_8233AC9C;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8233aca8
	if (!ctx.cr6.eq) goto loc_8233ACA8;
loc_8233AC9C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
loc_8233ACA8:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8233acb8
	if (ctx.cr6.eq) goto loc_8233ACB8;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8233acc8
	if (!ctx.cr6.eq) goto loc_8233ACC8;
loc_8233ACB8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
loc_8233ACC8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8233acd8
	if (ctx.cr6.eq) goto loc_8233ACD8;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8233ace4
	if (!ctx.cr6.eq) goto loc_8233ACE4;
loc_8233ACD8:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233ab84
	if (!ctx.cr6.eq) goto loc_8233AB84;
loc_8233ACE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233F568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x8233F570;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,308(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r31,332(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// srawi r25,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r18.s32 >> 1;
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// srawi. r23,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble 0x8233f5d0
	if (!ctx.cr0.gt) goto loc_8233F5D0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8233F5B0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412fb8
	ctx.lr = 0x8233F5C0;
	sub_82412FB8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x8233f5b0
	if (!ctx.cr0.eq) goto loc_8233F5B0;
loc_8233F5D0:
	// lwz r30,340(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8233f600
	if (!ctx.cr6.gt) goto loc_8233F600;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8233F5E0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412fb8
	ctx.lr = 0x8233F5F0;
	sub_82412FB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bne 0x8233f5e0
	if (!ctx.cr0.eq) goto loc_8233F5E0;
loc_8233F600:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8233f630
	if (!ctx.cr6.gt) goto loc_8233F630;
loc_8233F610:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412fb8
	ctx.lr = 0x8233F620;
	sub_82412FB8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// bne 0x8233f610
	if (!ctx.cr0.eq) goto loc_8233F610;
loc_8233F630:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82341268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82341270;
	__savegprlr_14(ctx, base);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r29,r7,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// subf r26,r7,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// divw r28,r29,r27
	ctx.r28.u64 = uint32_t((ctx.r27.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r29.s32 / ctx.r27.s32 : 0);
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
	// srawi r7,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 4;
	// divw r10,r26,r25
	ctx.r10.u64 = uint32_t((ctx.r25.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r26.s32 / ctx.r25.s32 : 0);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// stw r10,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// srawi r29,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 4;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// rotlwi r31,r26,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// addze r7,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r7.s64 = temp.s64;
	// lis r23,0
	ctx.r23.s64 = 0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r14,r3,-2
	ctx.r14.s64 = ctx.r3.s64 + -2;
	// ori r19,r23,32768
	ctx.r19.u64 = ctx.r23.u64 | 32768;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// andc r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 & ~ctx.r31.u64;
	// andc r8,r27,r24
	ctx.r8.u64 = ctx.r27.u64 & ~ctx.r24.u64;
	// clrlwi r31,r14,30
	ctx.r31.u64 = ctx.r14.u32 & 0x3;
	// subf r30,r19,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r19.u64;
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r30,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r22,r19,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r19.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// bne cr6,0x823413f4
	if (!ctx.cr6.eq) goto loc_823413F4;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x823414f4
	if (ctx.cr6.lt) goto loc_823414F4;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r10,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r17,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_82341320:
	// srawi r8,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 16;
	// add r11,r18,r10
	ctx.r11.u64 = ctx.r18.u64 + ctx.r10.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpw cr6,r22,r19
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x823413e0
	if (ctx.cr6.lt) goto loc_823413E0;
	// lwz r30,76(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r24,r3,r30
	ctx.r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r23,r24,r6
	ctx.r23.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r21,r17,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82341364:
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r25,r24,r3
	ctx.r25.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lbzx r27,r30,r8
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// lbzx r26,r29,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r23,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// rotlwi r27,r27,24
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 24);
	// rotlwi r26,r26,24
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 24);
	// lbzx r31,r25,r5
	ctx.r31.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbzx r25,r30,r8
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r8,r29,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rotlwi r25,r25,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 8);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// add r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lwz r27,-172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r26,r3
	ctx.r3.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// or r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 | ctx.r8.u64;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stwx r3,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// ble cr6,0x82341364
	if (!ctx.cr6.gt) goto loc_82341364;
	// lwz r30,-176(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_823413E0:
	// add r18,r16,r18
	ctx.r18.u64 = ctx.r16.u64 + ctx.r18.u64;
	// add r14,r15,r14
	ctx.r14.u64 = ctx.r15.u64 + ctx.r14.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82341320
	if (!ctx.cr6.gt) goto loc_82341320;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_823413F4:
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x823414f4
	if (ctx.cr6.lt) goto loc_823414F4;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r10,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r17,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_82341408:
	// srawi r7,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 16;
	// add r11,r18,r10
	ctx.r11.u64 = ctx.r18.u64 + ctx.r10.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmpw cr6,r22,r19
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x823414e4
	if (ctx.cr6.lt) goto loc_823414E4;
	// lwz r10,76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r27,r17,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r3,r10
	ctx.r23.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r23,r6
	ctx.r21.u64 = ctx.r23.u64 + ctx.r6.u64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r29,r7,r4
	ctx.r29.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_8234144C:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r26,r23,r3
	ctx.r26.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lbzx r25,r30,r7
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// add r8,r20,r8
	ctx.r8.u64 = ctx.r20.u64 + ctx.r8.u64;
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// rotlwi r24,r25,8
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r25.u32, 8);
	// lbzx r3,r21,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// stw r7,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// srawi r7,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r25,r10,8,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzx r10,r26,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// lbzx r26,r30,r7
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stw r31,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// rotlwi r26,r26,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r31,-172(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r3,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sthx r7,r27,r11
	REX_STORE_U16(ctx.r27.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// ble cr6,0x8234144c
	if (!ctx.cr6.gt) goto loc_8234144C;
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r30,-176(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_823414E4:
	// add r18,r16,r18
	ctx.r18.u64 = ctx.r16.u64 + ctx.r18.u64;
	// add r14,r15,r14
	ctx.r14.u64 = ctx.r15.u64 + ctx.r14.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82341408
	if (!ctx.cr6.gt) goto loc_82341408;
loc_823414F4:
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234BE10) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beq cr6,0x8234be3c
	if (ctx.cr6.eq) goto loc_8234BE3C;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8234be3c
	if (!ctx.cr6.eq) goto loc_8234BE3C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234be48
	if (!ctx.cr6.eq) goto loc_8234BE48;
loc_8234BE3C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_8234BE48:
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234C1F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8234c250
	if (ctx.cr6.lt) goto loc_8234C250;
	// beq cr6,0x8234c240
	if (ctx.cr6.eq) goto loc_8234C240;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8234c230
	if (ctx.cr6.lt) goto loc_8234C230;
	// beq cr6,0x8234c228
	if (ctx.cr6.eq) goto loc_8234C228;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_8234C228:
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x8234c26c
	goto loc_8234C26C;
loc_8234C230:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8234c268
	goto loc_8234C268;
loc_8234C240:
	// lwa r11,24(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 24));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8234c268
	goto loc_8234C268;
loc_8234C250:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8234C268:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8234C26C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D8A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234d8b8
	if (ctx.cr6.eq) goto loc_8234D8B8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234d924
	if (ctx.cr6.eq) goto loc_8234D924;
loc_8234D8B8:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8234d924
	if (!ctx.cr6.eq) goto loc_8234D924;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,2468(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2468);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8234d924
	if (ctx.cr6.gt) goto loc_8234D924;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234d924
	if (ctx.cr6.eq) goto loc_8234D924;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8234d924
	if (!ctx.cr6.eq) goto loc_8234D924;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8234d91c
	if (ctx.cr6.eq) goto loc_8234D91C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8234d924
	if (!ctx.cr6.eq) goto loc_8234D924;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8234c688
	sub_8234C688(ctx, base);
	return;
loc_8234D91C:
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8234c900
	sub_8234C900(ctx, base);
	return;
loc_8234D924:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234E778) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234e880
	if (ctx.cr6.eq) goto loc_8234E880;
	// not r8,r4
	ctx.r8.u64 = ~ctx.r4.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8234e880
	if (!ctx.cr6.eq) goto loc_8234E880;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,2468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2468);
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8234e880
	if (!ctx.cr6.lt) goto loc_8234E880;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234e7dc
	if (ctx.cr6.eq) goto loc_8234E7DC;
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8234e7e0
	if (ctx.cr6.eq) goto loc_8234E7E0;
loc_8234E7DC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8234E7E0:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234e7fc
	if (ctx.cr6.lt) goto loc_8234E7FC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8234E7FC:
	// lwz r8,28(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lfd f0,6880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_8234E818:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8234e858
	if (ctx.cr6.lt) goto loc_8234E858;
	// beq cr6,0x8234e858
	if (ctx.cr6.eq) goto loc_8234E858;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8234e858
	if (ctx.cr6.lt) goto loc_8234E858;
	// bne cr6,0x8234e880
	if (!ctx.cr6.eq) goto loc_8234E880;
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8234e864
	if (!ctx.cr6.eq) goto loc_8234E864;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8234e864
	goto loc_8234E864;
loc_8234E858:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8234E864:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8234e818
	if (ctx.cr6.lt) goto loc_8234E818;
	// blr 
	return;
loc_8234E880:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82352CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82352CB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82352d58
	if (!ctx.cr6.eq) goto loc_82352D58;
	// lwz r31,2484(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 2484);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82352d48
	if (ctx.cr6.eq) goto loc_82352D48;
loc_82352CD8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,2468(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2468);
	// lwz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352d2c
	if (ctx.cr6.eq) goto loc_82352D2C;
	// lwz r11,2468(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2468);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82352d2c
	if (ctx.cr0.eq) goto loc_82352D2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82352d34
	if (ctx.cr6.eq) goto loc_82352D34;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82204c50
	ctx.lr = 0x82352D20;
	sub_82204C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82352d40
	if (ctx.cr0.eq) goto loc_82352D40;
	// b 0x82352d34
	goto loc_82352D34;
loc_82352D2C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82352d40
	if (ctx.cr6.eq) goto loc_82352D40;
loc_82352D34:
	// lwz r31,52(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82352cd8
	if (!ctx.cr6.eq) goto loc_82352CD8;
loc_82352D40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82352d50
	if (!ctx.cr6.eq) goto loc_82352D50;
loc_82352D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82352e68
	goto loc_82352E68;
loc_82352D50:
	// not r3,r31
	ctx.r3.u64 = ~ctx.r31.u64;
	// b 0x82352e68
	goto loc_82352E68;
loc_82352D58:
	// not r31,r4
	ctx.r31.u64 = ~ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82352d48
	if (!ctx.cr6.eq) goto loc_82352D48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,2468(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2468);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82352d48
	if (!ctx.cr6.eq) goto loc_82352D48;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82352da4
	if (!ctx.cr6.eq) goto loc_82352DA4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352d48
	if (!ctx.cr6.eq) goto loc_82352D48;
loc_82352DA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352dcc
	if (!ctx.cr6.eq) goto loc_82352DCC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352a38
	ctx.lr = 0x82352DC4;
	sub_82352A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82352d48
	if (ctx.cr0.lt) goto loc_82352D48;
loc_82352DCC:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82352e50
	if (ctx.cr6.eq) goto loc_82352E50;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82352DDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2468(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2468);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352e38
	if (ctx.cr6.eq) goto loc_82352E38;
	// lwz r10,2468(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2468);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82352e38
	if (ctx.cr0.eq) goto loc_82352E38;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82352e40
	if (ctx.cr6.eq) goto loc_82352E40;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82204c50
	ctx.lr = 0x82352E2C;
	sub_82204C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82352e50
	if (ctx.cr0.eq) goto loc_82352E50;
	// b 0x82352e40
	goto loc_82352E40;
loc_82352E38:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82352e50
	if (ctx.cr6.eq) goto loc_82352E50;
loc_82352E40:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82352ddc
	if (ctx.cr6.lt) goto loc_82352DDC;
loc_82352E50:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82352d48
	if (ctx.cr6.eq) goto loc_82352D48;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
loc_82352E68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235AA08) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-4456
	ctx.r11.s64 = ctx.r11.s64 + -4456;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821f4b88
	ctx.lr = 0x8235AA34;
	sub_821F4B88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x821f4b88
	ctx.lr = 0x8235AA40;
	sub_821F4B88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x821f4b88
	ctx.lr = 0x8235AA4C;
	sub_821F4B88(ctx, base);
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

DEFINE_REX_FUNC(sub_8235BC90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8235BC98;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bcd0
	if (ctx.cr6.eq) goto loc_8235BCD0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8235a0e8
	ctx.lr = 0x8235BCCC;
	sub_8235A0E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8235BCD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235bcec
	if (ctx.cr6.eq) goto loc_8235BCEC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ae10
	ctx.lr = 0x8235BCE8;
	sub_8235AE10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8235BCEC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x18;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// lfs f31,2380(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 2380);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	ctx.r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8235bd58
	if (!ctx.cr0.eq) goto loc_8235BD58;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8235bd60
	goto loc_8235BD60;
loc_8235BD58:
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8235BD60:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bd78
	if (ctx.cr6.eq) goto loc_8235BD78;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b3b8
	ctx.lr = 0x8235BD78;
	sub_8235B3B8(ctx, base);
loc_8235BD78:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235c050
	if (!ctx.cr6.gt) goto loc_8235C050;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,-20584(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -20584);
	// subf r30,r25,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r25.u64;
	// lfs f5,-4420(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4420);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r28,-32249
	ctx.r28.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f12,-25028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -25028);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-4436(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4440(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4440);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,-4424(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + -4424);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
	// lfs f4,-4428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4428);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,-4432(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4432);
	ctx.f6.f64 = double(temp.f32);
loc_8235BDEC:
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8235bf9c
	if (ctx.cr6.eq) goto loc_8235BF9C;
	// extsw r28,r6
	ctx.r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// extsw r28,r5
	ctx.r28.s64 = ctx.r5.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// lfd f31,112(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(ctx.f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// frsp f30,f2
	ctx.f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	ctx.f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f3
	ctx.f29.f64 = double(float(ctx.f3.f64));
loc_8235BF9C:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8235bfac
	if (ctx.cr6.lt) goto loc_8235BFAC;
	// li r11,31
	ctx.r11.s64 = 31;
loc_8235BFAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235bfc4
	if (!ctx.cr6.gt) goto loc_8235BFC4;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x8235bfc8
	if (ctx.cr6.lt) goto loc_8235BFC8;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8235bfc8
	goto loc_8235BFC8;
loc_8235BFC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8235BFC8:
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8235bfd8
	if (ctx.cr6.lt) goto loc_8235BFD8;
	// li r11,63
	ctx.r11.s64 = 63;
loc_8235BFD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235bff0
	if (!ctx.cr6.gt) goto loc_8235BFF0;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// blt cr6,0x8235bff4
	if (ctx.cr6.lt) goto loc_8235BFF4;
	// li r5,63
	ctx.r5.s64 = 63;
	// b 0x8235bff4
	goto loc_8235BFF4;
loc_8235BFF0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8235BFF4:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8235c004
	if (ctx.cr6.lt) goto loc_8235C004;
	// li r11,31
	ctx.r11.s64 = 31;
loc_8235C004:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235c01c
	if (!ctx.cr6.gt) goto loc_8235C01C;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x8235c020
	if (ctx.cr6.lt) goto loc_8235C020;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x8235c020
	goto loc_8235C020;
loc_8235C01C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8235C020:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = ctx.r30.u32 + ctx.r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235bdec
	if (ctx.cr6.lt) goto loc_8235BDEC;
loc_8235C050:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82365D20) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82365d30
	if (ctx.cr6.eq) goto loc_82365D30;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82365D30:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82365d3c
	if (ctx.cr6.eq) goto loc_82365D3C;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82365D3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82365d50
	if (!ctx.cr6.eq) goto loc_82365D50;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_82365D50:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	ctx.r11.s64 = 271187968;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365d70
	if (!ctx.cr6.eq) goto loc_82365D70;
loc_82365D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82365D70:
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365dc8
	if (ctx.cr6.eq) goto loc_82365DC8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_82365DC8:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82365DCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82365e30
	if (!ctx.cr0.eq) goto loc_82365E30;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82365d68
	if (ctx.cr6.eq) goto loc_82365D68;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82365e10
	if (!ctx.cr6.eq) goto loc_82365E10;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82365e04
	if (!ctx.cr6.gt) goto loc_82365E04;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82365e38
	if (ctx.cr6.eq) goto loc_82365E38;
loc_82365E04:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82365E08:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82365e30
	goto loc_82365E30;
loc_82365E10:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x82365e24
	if (ctx.cr6.lt) goto loc_82365E24;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x82365e08
	goto loc_82365E08;
loc_82365E24:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x82365e30
	if (!ctx.cr6.eq) goto loc_82365E30;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_82365E30:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82365dcc
	goto loc_82365DCC;
loc_82365E38:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82365e48
	if (ctx.cr6.eq) goto loc_82365E48;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82365E48:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82365e5c
	if (ctx.cr6.eq) goto loc_82365E5C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82365E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236BEE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8236BEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236bf3c
	if (!ctx.cr6.lt) goto loc_8236BF3C;
loc_8236BF04:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8220a3f8
	ctx.lr = 0x8236BF0C;
	sub_8220A3F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8236bf2c
	if (!ctx.cr0.eq) goto loc_8236BF2C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8236bf2c
	if (ctx.cr6.eq) goto loc_8236BF2C;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x8236bf3c
	if (!ctx.cr6.eq) goto loc_8236BF3C;
loc_8236BF2C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236bf04
	if (ctx.cr6.lt) goto loc_8236BF04;
loc_8236BF3C:
	// subf r3,r30,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D620) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236d6dc
	if (!ctx.cr6.lt) goto loc_8236D6DC;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8236d6dc
	if (!ctx.cr6.eq) goto loc_8236D6DC;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8236d6a0
	goto loc_8236D6A0;
loc_8236D664:
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// blt cr6,0x8236d6a8
	if (ctx.cr6.lt) goto loc_8236D6A8;
	// cmpwi cr6,r9,55
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 55, ctx.xer);
	// bgt cr6,0x8236d6a8
	if (ctx.cr6.gt) goto loc_8236D6A8;
	// rlwinm r6,r11,0,0,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// beq cr6,0x8236d68c
	if (ctx.cr6.eq) goto loc_8236D68C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8236D68C:
	// addi r6,r9,-48
	ctx.r6.s64 = ctx.r9.s64 + -48;
	// rldicr r9,r11,3,60
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8236D6A0:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8236d664
	if (ctx.cr6.lt) goto loc_8236D664;
loc_8236D6A8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236d6b4
	if (ctx.cr6.eq) goto loc_8236D6B4;
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_8236D6B4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236d6d4
	if (ctx.cr6.eq) goto loc_8236D6D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,64(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// li r5,1003
	ctx.r5.s64 = 1003;
	// addi r6,r11,1660
	ctx.r6.s64 = ctx.r11.s64 + 1660;
	// addi r4,r7,16
	ctx.r4.s64 = ctx.r7.s64 + 16;
	// bl 0x8236cff0
	ctx.lr = 0x8236D6D4;
	sub_8236CFF0(ctx, base);
loc_8236D6D4:
	// subf r3,r30,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r30.u64;
	// b 0x8236d6e0
	goto loc_8236D6E0;
loc_8236D6DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D6E0:
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

DEFINE_REX_FUNC(sub_82370368) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1880
	ctx.r11.s64 = ctx.r11.s64 + 1880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x823aa398
	ctx.lr = 0x82370394;
	sub_823AA398(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823703a8
	if (ctx.cr0.eq) goto loc_823703A8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4b88
	ctx.lr = 0x823703A8;
	sub_821F4B88(ctx, base);
loc_823703A8:
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

DEFINE_REX_FUNC(sub_82371760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82371768;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823717a4
	if (!ctx.cr6.eq) goto loc_823717A4;
	// addi r28,r1,168
	ctx.r28.s64 = ctx.r1.s64 + 168;
loc_823717A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82371a48
	if (ctx.cr6.eq) goto loc_82371A48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823719c8
	if (ctx.cr6.eq) goto loc_823719C8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82371998
	if (ctx.cr6.eq) goto loc_82371998;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823718c4
	if (ctx.cr6.eq) goto loc_823718C4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82371834
	if (ctx.cr6.eq) goto loc_82371834;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x823717f4
	if (ctx.cr6.eq) goto loc_823717F4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,3684
	ctx.r6.s64 = ctx.r11.s64 + 3684;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823708c8
	ctx.lr = 0x823717F0;
	sub_823708C8(ctx, base);
	// b 0x82371a48
	goto loc_82371A48;
loc_823717F4:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374530
	ctx.lr = 0x82371830;
	sub_82374530(ctx, base);
	// b 0x823718b8
	goto loc_823718B8;
loc_82371834:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82371888
	if (!ctx.cr6.eq) goto loc_82371888;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8237186c
	if (!ctx.cr6.eq) goto loc_8237186C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,-7444
	ctx.r4.s64 = ctx.r11.s64 + -7444;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x823cdaf8
	ctx.lr = 0x82371864;
	sub_823CDAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82371888
	goto loc_82371888;
loc_8237186C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82371888:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8236e590
	ctx.lr = 0x823718B8;
	sub_8236E590(ctx, base);
loc_823718B8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82371a48
	if (!ctx.cr0.lt) goto loc_82371A48;
	// b 0x82371a60
	goto loc_82371A60;
loc_823718C4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8237192c
	if (!ctx.cr6.eq) goto loc_8237192C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823718D0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x823718e8
	if (!ctx.cr6.eq) goto loc_823718E8;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823718d0
	if (!ctx.cr6.eq) goto loc_823718D0;
loc_823718E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237192c
	if (ctx.cr6.eq) goto loc_8237192C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8237192c
	if (!ctx.cr6.eq) goto loc_8237192C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8237192c
	if (!ctx.cr6.eq) goto loc_8237192C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,-7444
	ctx.r4.s64 = ctx.r11.s64 + -7444;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x823cdaf8
	ctx.lr = 0x82371924;
	sub_823CDAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8237192C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82371a48
	if (!ctx.cr6.gt) goto loc_82371A48;
loc_82371938:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371760
	ctx.lr = 0x8237196C;
	sub_82371760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82371a60
	if (ctx.cr0.lt) goto loc_82371A60;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// blt cr6,0x82371938
	if (ctx.cr6.lt) goto loc_82371938;
	// b 0x82371a48
	goto loc_82371A48;
loc_82371998:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371760
	ctx.lr = 0x823719C4;
	sub_82371760(ctx, base);
	// b 0x823718b8
	goto loc_823718B8;
loc_823719C8:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371760
	ctx.lr = 0x823719F4;
	sub_82371760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82371a60
	if (ctx.cr0.lt) goto loc_82371A60;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371760
	ctx.lr = 0x82371A30;
	sub_82371760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82371a60
	if (ctx.cr0.lt) goto loc_82371A60;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82371A48:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371a5c
	if (ctx.cr6.eq) goto loc_82371A5C;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82371A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82371A60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82388C18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82388c6c
	if (ctx.cr6.lt) goto loc_82388C6C;
	// beq cr6,0x82388c5c
	if (ctx.cr6.eq) goto loc_82388C5C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82388c48
	if (ctx.cr6.lt) goto loc_82388C48;
	// beq cr6,0x82388c40
	if (ctx.cr6.eq) goto loc_82388C40;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82388C40:
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// b 0x82388c8c
	goto loc_82388C8C;
loc_82388C48:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_82388C54:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x82388c8c
	goto loc_82388C8C;
loc_82388C5C:
	// lwa r11,8(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 8));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82388c54
	goto loc_82388C54;
loc_82388C6C:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82388c84
	if (ctx.cr6.eq) goto loc_82388C84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,2328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
	// b 0x82388c8c
	goto loc_82388C8C;
loc_82388C84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,6880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_82388C8C:
	// stfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82389D08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82389D10;
	__savegprlr_29(ctx, base);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fc9f8
	ctx.lr = 0x82389D54;
	sub_821FC9F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r10,9192
	ctx.r6.s64 = ctx.r10.s64 + 9192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8236d1b8
	ctx.lr = 0x82389D74;
	sub_8236D1B8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238C488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8238C490;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238c5c4
	if (ctx.cr6.eq) goto loc_8238C5C4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238c5c4
	if (!ctx.cr6.eq) goto loc_8238C5C4;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8238c4c8
	if (ctx.cr6.eq) goto loc_8238C4C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238c5c4
	if (!ctx.cr6.eq) goto loc_8238C5C4;
loc_8238C4C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238c5c4
	if (ctx.cr6.eq) goto loc_8238C5C4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238c5c4
	if (!ctx.cr6.eq) goto loc_8238C5C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8238c5c4
	if (!ctx.cr6.eq) goto loc_8238C5C4;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82384480
	ctx.lr = 0x8238C4F4;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8238c50c
	if (ctx.cr0.eq) goto loc_8238C50C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82384aa8
	ctx.lr = 0x8238C504;
	sub_82384AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8238c510
	goto loc_8238C510;
loc_8238C50C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8238C510:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238c5c4
	if (ctx.cr6.eq) goto loc_8238C5C4;
	// lwz r28,24(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r30,24(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r5,r11,-10664
	ctx.r5.s64 = ctx.r11.s64 + -10664;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fcd80
	ctx.lr = 0x8238C538;
	sub_821FCD80(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8238C540:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238c540
	if (!ctx.cr6.eq) goto loc_8238C540;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8238C560:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238c560
	if (!ctx.cr6.eq) goto loc_8238C560;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a8ea0
	ctx.lr = 0x8238C594;
	sub_823A8EA0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8238c5c4
	if (ctx.cr0.eq) goto loc_8238C5C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,28380
	ctx.r5.s64 = ctx.r11.s64 + 28380;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fcd80
	ctx.lr = 0x8238C5B8;
	sub_821FCD80(ctx, base);
	// stw r31,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8238c5c8
	goto loc_8238C5C8;
loc_8238C5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238C5C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823974B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204238
	ctx.lr = 0x823974B8;
	__savegprlr_16(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82397ab8
	if (!ctx.cr6.eq) goto loc_82397AB8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82397ab8
	if (!ctx.cr6.eq) goto loc_82397AB8;
	// lwz r29,16(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r20,r5,16
	ctx.r20.s64 = ctx.r5.s64 + 16;
	// stw r17,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r17,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x823975c4
	if (ctx.cr6.gt) goto loc_823975C4;
	// beq cr6,0x823975b0
	if (ctx.cr6.eq) goto loc_823975B0;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x8239759c
	if (ctx.cr6.eq) goto loc_8239759C;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82397588
	if (ctx.cr6.eq) goto loc_82397588;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x82397574
	if (ctx.cr6.eq) goto loc_82397574;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x82397560
	if (ctx.cr6.eq) goto loc_82397560;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x82397630
	if (!ctx.cr6.eq) goto loc_82397630;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,15048
	ctx.r31.s64 = ctx.r11.s64 + 15048;
	// b 0x82397630
	goto loc_82397630;
loc_82397560:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,11856
	ctx.r31.s64 = ctx.r11.s64 + 11856;
	// b 0x82397630
	goto loc_82397630;
loc_82397574:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,18
	ctx.r30.s64 = 18;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,7752
	ctx.r31.s64 = ctx.r11.s64 + 7752;
	// b 0x82397630
	goto loc_82397630;
loc_82397588:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,4560
	ctx.r31.s64 = ctx.r11.s64 + 4560;
	// b 0x82397630
	goto loc_82397630;
loc_8239759C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,18
	ctx.r30.s64 = 18;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,456
	ctx.r31.s64 = ctx.r11.s64 + 456;
	// b 0x82397630
	goto loc_82397630;
loc_823975B0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,18240
	ctx.r31.s64 = ctx.r11.s64 + 18240;
	// b 0x82397630
	goto loc_82397630;
loc_823975C4:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82397620
	if (ctx.cr6.eq) goto loc_82397620;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82397610
	if (ctx.cr6.eq) goto loc_82397610;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x823975fc
	if (ctx.cr6.eq) goto loc_823975FC;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// ble cr6,0x82397630
	if (!ctx.cr6.gt) goto loc_82397630;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bgt cr6,0x82397630
	if (ctx.cr6.gt) goto loc_82397630;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,30080
	ctx.r31.s64 = ctx.r11.s64 + 30080;
	// b 0x82397630
	goto loc_82397630;
loc_823975FC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,20976
	ctx.r31.s64 = ctx.r11.s64 + 20976;
	// b 0x82397630
	goto loc_82397630;
loc_82397610:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,22120
	ctx.r31.s64 = ctx.r11.s64 + 22120;
	// b 0x8239762c
	goto loc_8239762C;
loc_82397620:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r31,r11,21208
	ctx.r31.s64 = ctx.r11.s64 + 21208;
loc_8239762C:
	// li r30,4
	ctx.r30.s64 = 4;
loc_82397630:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8238a8a0
	ctx.lr = 0x82397644;
	sub_8238A8A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bne cr6,0x82397660
	if (!ctx.cr6.eq) goto loc_82397660;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,3087
	ctx.r5.s64 = 3087;
	// addi r6,r11,-31744
	ctx.r6.s64 = ctx.r11.s64 + -31744;
	// b 0x823976e8
	goto loc_823976E8;
loc_82397660:
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238c7a0
	ctx.lr = 0x82397680;
	sub_8238C7A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82397ab8
	if (ctx.cr0.lt) goto loc_82397AB8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823976fc
	if (ctx.cr6.eq) goto loc_823976FC;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8238c7a0
	ctx.lr = 0x823976B4;
	sub_8238C7A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82397ab8
	if (ctx.cr0.lt) goto loc_82397AB8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,3088
	ctx.r5.s64 = 3088;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bne cr6,0x823976e0
	if (!ctx.cr6.eq) goto loc_823976E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r20)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r6,r11,-31800
	ctx.r6.s64 = ctx.r11.s64 + -31800;
	// b 0x823976f0
	goto loc_823976F0;
loc_823976E0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r6,r11,-31836
	ctx.r6.s64 = ctx.r11.s64 + -31836;
loc_823976E8:
	// lwz r8,8(r20)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
loc_823976F0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82389c88
	ctx.lr = 0x823976F8;
	sub_82389C88(ctx, base);
	// b 0x82397ab8
	goto loc_82397AB8;
loc_823976FC:
	// lwz r21,144(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r1,152
	ctx.r25.s64 = ctx.r1.s64 + 152;
	// addi r24,r1,156
	ctx.r24.s64 = ctx.r1.s64 + 156;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// lwz r26,44(r21)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r21.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823978f0
	if (ctx.cr6.eq) goto loc_823978F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r23,r11,-31912
	ctx.r23.s64 = ctx.r11.s64 + -31912;
	// addi r22,r10,-31920
	ctx.r22.s64 = ctx.r10.s64 + -31920;
loc_82397728:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r27,8(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397754
	if (ctx.cr6.eq) goto loc_82397754;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x82397754
	if (!ctx.cr6.eq) goto loc_82397754;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82397754:
	// lwz r29,24(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823978dc
	if (ctx.cr6.eq) goto loc_823978DC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r30,48(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397778
	if (ctx.cr6.eq) goto loc_82397778;
	// lwz r31,16(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8239777c
	goto loc_8239777C;
loc_82397778:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_8239777C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82384480
	ctx.lr = 0x82397784;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823977a0
	if (ctx.cr0.eq) goto loc_823977A0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x8239779C;
	sub_82384648(ctx, base);
	// b 0x823977a4
	goto loc_823977A4;
loc_823977A0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_823977A4:
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82384480
	ctx.lr = 0x823977B8;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823977d4
	if (ctx.cr0.eq) goto loc_823977D4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x823977D0;
	sub_82384648(ctx, base);
	// b 0x823977d8
	goto loc_823977D8;
loc_823977D4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_823977D8:
	// stw r3,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239782c
	if (ctx.cr0.eq) goto loc_8239782C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8238d730
	ctx.lr = 0x82397804;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// beq 0x82397934
	if (ctx.cr0.eq) goto loc_82397934;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82391640
	ctx.lr = 0x82397824;
	sub_82391640(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_8239782C:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823978c4
	if (ctx.cr0.eq) goto loc_823978C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8238a618
	ctx.lr = 0x82397844;
	sub_8238A618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82397940
	if (!ctx.cr0.eq) goto loc_82397940;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8238d730
	ctx.lr = 0x82397860;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82397940
	if (ctx.cr0.eq) goto loc_82397940;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823913f8
	ctx.lr = 0x82397878;
	sub_823913F8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82397ab8
	if (ctx.cr0.eq) goto loc_82397AB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82391640
	ctx.lr = 0x82397894;
	sub_82391640(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82397ab8
	if (ctx.cr0.eq) goto loc_82397AB8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82392238
	ctx.lr = 0x823978B4;
	sub_82392238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82397ab8
	if (ctx.cr0.eq) goto loc_82397AB8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_823978C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r24,r10,12
	ctx.r24.s64 = ctx.r10.s64 + 12;
	// b 0x823978e4
	goto loc_823978E4;
loc_823978DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823978f8
	if (ctx.cr6.eq) goto loc_823978F8;
loc_823978E4:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82397728
	if (!ctx.cr6.eq) goto loc_82397728;
loc_823978F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82397a60
	if (!ctx.cr6.eq) goto loc_82397A60;
loc_823978F8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82397a60
	if (!ctx.cr6.eq) goto loc_82397A60;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82384480
	ctx.lr = 0x82397908;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82397960
	if (ctx.cr0.eq) goto loc_82397960;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823871e0
	ctx.lr = 0x8239792C;
	sub_823871E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82397964
	goto loc_82397964;
loc_82397934:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x8239794c
	goto loc_8239794C;
loc_82397940:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8239794C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r5,8(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8238db80
	ctx.lr = 0x8239795C;
	sub_8238DB80(ctx, base);
	// b 0x82397ab8
	goto loc_82397AB8;
loc_82397960:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_82397964:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397998
	if (ctx.cr6.eq) goto loc_82397998;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8239798C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82397ab8
	if (ctx.cr0.eq) goto loc_82397AB8;
loc_82397998:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823979AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82397ab8
	if (ctx.cr0.eq) goto loc_82397AB8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82384480
	ctx.lr = 0x823979C0;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823979e4
	if (ctx.cr0.eq) goto loc_823979E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-31932
	ctx.r6.s64 = ctx.r11.s64 + -31932;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x823979DC;
	sub_82384648(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823979e8
	goto loc_823979E8;
loc_823979E4:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823979E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82384480
	ctx.lr = 0x82397A08;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82397a2c
	if (ctx.cr0.eq) goto loc_82397A2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-31860
	ctx.r6.s64 = ctx.r11.s64 + -31860;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x82397A24;
	sub_82384648(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82397a30
	goto loc_82397A30;
loc_82397A2C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82397A30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82397ab8
	if (ctx.cr6.eq) goto loc_82397AB8;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// bl 0x8238c400
	ctx.lr = 0x82397A58;
	sub_8238C400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82397abc
	goto loc_82397ABC;
loc_82397A60:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82397a88
	if (ctx.cr6.eq) goto loc_82397A88;
loc_82397A70:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397a70
	if (!ctx.cr6.eq) goto loc_82397A70;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82397a94
	if (ctx.cr6.eq) goto loc_82397A94;
loc_82397A88:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r9,r11,-7444
	ctx.r9.s64 = ctx.r11.s64 + -7444;
	// b 0x82397a9c
	goto loc_82397A9C;
loc_82397A94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,13272
	ctx.r9.s64 = ctx.r11.s64 + 13272;
loc_82397A9C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r20)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// li r5,3013
	ctx.r5.s64 = 3013;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82389c88
	ctx.lr = 0x82397AB8;
	sub_82389C88(ctx, base);
loc_82397AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82397ABC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AD4F8) {
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
	// addi r4,r10,-1420
	ctx.r4.s64 = ctx.r10.s64 + -1420;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AD51C;
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

DEFINE_REX_FUNC(sub_823AD970) {
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
	// addi r4,r10,-788
	ctx.r4.s64 = ctx.r10.s64 + -788;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AD994;
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

DEFINE_REX_FUNC(sub_823AF128) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x823aa558
	ctx.lr = 0x823AF140;
	sub_823AA558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AF3A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823AF3A8;
	__savegprlr_29(ctx, base);
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
	// bl 0x823aa630
	ctx.lr = 0x823AF3BC;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823af3dc
	if (ctx.cr0.lt) goto loc_823AF3DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AF3DC;
	sub_823AA558(ctx, base);
loc_823AF3DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B24D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x823B24E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823B251C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B254C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r29,15
	ctx.r29.s64 = 983040;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823b2584
	if (!ctx.cr6.eq) goto loc_823B2584;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b2584
	if (!ctx.cr6.eq) goto loc_823B2584;
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b2588
	if (!ctx.cr6.gt) goto loc_823B2588;
loc_823B2584:
	// li r28,1
	ctx.r28.s64 = 1;
loc_823B2588:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa7d8
	ctx.lr = 0x823B25A0;
	sub_823AA7D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r23,38
	ctx.r23.s64 = 38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r11,16476
	ctx.r25.s64 = ctx.r11.s64 + 16476;
	// addi r26,r10,-6944
	ctx.r26.s64 = ctx.r10.s64 + -6944;
	// addi r27,r9,-1792
	ctx.r27.s64 = ctx.r9.s64 + -1792;
	// beq cr6,0x823b2670
	if (ctx.cr6.eq) goto loc_823B2670;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b2670
	if (!ctx.cr6.gt) goto loc_823B2670;
loc_823B25D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B25DC;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x821fcd80
	ctx.lr = 0x823B25FC;
	sub_821FCD80(ctx, base);
	// stb r23,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B2614;
	sub_821FCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2624;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2658;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b25d4
	if (ctx.cr6.lt) goto loc_823B25D4;
loc_823B2670:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823B26A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r5,r9,12
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B26D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0a20
	ctx.lr = 0x823B2718;
	sub_823B0A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823b273c
	if (ctx.cr6.eq) goto loc_823B273C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa8d0
	ctx.lr = 0x823B2734;
	sub_823AA8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
loc_823B273C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r11,-1992
	ctx.r29.s64 = ctx.r11.s64 + -1992;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b27ec
	if (ctx.cr6.eq) goto loc_823B27EC;
loc_823B2754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B275C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821fcd80
	ctx.lr = 0x823B277C;
	sub_821FCD80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B2790;
	sub_821FCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B27A0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B27C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B27D4;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b2754
	if (ctx.cr6.lt) goto loc_823B2754;
loc_823B27EC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b287c
	if (ctx.cr6.eq) goto loc_823B287C;
loc_823B27F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B2800;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B281C;
	sub_821FCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B282C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2864;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b27f8
	if (ctx.cr6.lt) goto loc_823B27F8;
loc_823B287C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823b29d0
	if (ctx.cr6.eq) goto loc_823B29D0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2920
	if (ctx.cr6.eq) goto loc_823B2920;
loc_823B2890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B2898;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B28B4;
	sub_821FCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B28C4;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x823b28e8
	if (!ctx.cr0.eq) goto loc_823B28E8;
	// lwz r11,428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x823b28ec
	goto loc_823B28EC;
loc_823B28E8:
	// lwz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
loc_823B28EC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B28F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823b2afc
	if (ctx.cr6.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2908;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b2890
	if (ctx.cr6.lt) goto loc_823B2890;
loc_823B2920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa978
	ctx.lr = 0x823B2928;
	sub_823AA978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8236c550
	ctx.lr = 0x823B2940;
	sub_8236C550(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aacb8
	ctx.lr = 0x823B2958;
	sub_823AACB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aadf0
	ctx.lr = 0x823B2974;
	sub_823AADF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823b29d0
	if (ctx.cr6.eq) goto loc_823B29D0;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823b29b0
	if (ctx.cr0.eq) goto loc_823B29B0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aaa38
	ctx.lr = 0x823B29A4;
	sub_823AAA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_823B29B0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aab38
	ctx.lr = 0x823B29C8;
	sub_823AAB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
loc_823B29D0:
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2a64
	if (ctx.cr6.eq) goto loc_823B2A64;
loc_823B29E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B29E8;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B2A04;
	sub_821FCD80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2A14;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2A38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2A4C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b29e0
	if (ctx.cr6.lt) goto loc_823B29E0;
loc_823B2A64:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2af8
	if (ctx.cr6.eq) goto loc_823B2AF8;
loc_823B2A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823B2A78;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x821fcd80
	ctx.lr = 0x823B2A98;
	sub_821FCD80(ctx, base);
	// stb r23,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fcd80
	ctx.lr = 0x823B2AB0;
	sub_821FCD80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823B2AE0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823b2afc
	if (ctx.cr0.lt) goto loc_823B2AFC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b2a70
	if (ctx.cr6.lt) goto loc_823B2A70;
loc_823B2AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2AFC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823C9318) {
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
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c6570
	ctx.lr = 0x823C9334;
	sub_823C6570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-4096
	ctx.r4.s64 = -268435456;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// ori r4,r4,2048
	ctx.r4.u64 = ctx.r4.u64 | 2048;
	// lwz r11,316(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C9368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823C93A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C93CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C93E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bdd88
	ctx.lr = 0x823C93F8;
	sub_823BDD88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c9404
	if (ctx.cr0.lt) goto loc_823C9404;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C9404:
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

DEFINE_REX_FUNC(sub_823CCA20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823cca70
	if (ctx.cr6.gt) goto loc_823CCA70;
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,20528
	ctx.r10.s64 = 1345323008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28688
	ctx.r10.s64 = 1880096768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// b 0x823cca98
	goto loc_823CCA98;
loc_823CCA70:
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28880
	ctx.r10.s64 = 1892679680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lis r10,28928
	ctx.r10.s64 = 1895825408;
loc_823CCA98:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823CCAA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CDD58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823CDD60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823cd698
	ctx.lr = 0x823CDD74;
	sub_823CD698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823cdd88
	if (ctx.cr0.eq) goto loc_823CDD88;
	// bl 0x82112fa8
	ctx.lr = 0x823CDD80;
	sub_82112FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823cdd8c
	goto loc_823CDD8C;
loc_823CDD88:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823CDD8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823cdd9c
	if (!ctx.cr6.eq) goto loc_823CDD9C;
loc_823CDD94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823cddd0
	goto loc_823CDDD0;
loc_823CDD9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd518
	ctx.lr = 0x823CDDA8;
	sub_823CD518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823cddc4
	if (!ctx.cr0.lt) goto loc_823CDDC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112fa8
	ctx.lr = 0x823CDDB8;
	sub_82112FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd6f0
	ctx.lr = 0x823CDDC0;
	sub_823CD6F0(ctx, base);
	// b 0x823cdd94
	goto loc_823CDD94;
loc_823CDDC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cd870
	ctx.lr = 0x823CDDD0;
	sub_823CD870(ctx, base);
loc_823CDDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CFA30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x823CFA38;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi. r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// beq 0x823d0024
	if (ctx.cr0.eq) goto loc_823D0024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r14,-1
	ctx.r14.s64 = -1;
	// lfd f31,6880(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_823CFA70:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 4, ctx.xer);
	// ble cr6,0x823cfc38
	if (!ctx.cr6.gt) goto loc_823CFC38;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cfc3c
	if (ctx.cr6.eq) goto loc_823CFC3C;
	// lwz r29,8(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,4
	ctx.r31.s64 = 4;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,-4
	ctx.r26.s64 = ctx.r29.s64 + -4;
loc_823CFAB8:
	// lwzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823cfc1c
	if (ctx.cr6.eq) goto loc_823CFC1C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bge cr6,0x823cfbe8
	if (!ctx.cr6.lt) goto loc_823CFBE8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
loc_823CFB00:
	// lwzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823cfbc8
	if (ctx.cr6.eq) goto loc_823CFBC8;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r15,4(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r14,r9,r6
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwzx r9,r14,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r8,r14,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	// lwz r14,4(r9)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r15,8(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r14,8(r9)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r15,12(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,12(r9)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r15,72(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r15,r9
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r15,4(r8)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r15,8(r8)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r15,12(r8)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823cfbc0
	if (!ctx.cr6.eq) goto loc_823CFBC0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x823cfbe0
	if (ctx.cr6.eq) goto loc_823CFBE0;
loc_823CFBC0:
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r14,-1
	ctx.r14.s64 = -1;
loc_823CFBC8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823cfb00
	if (ctx.cr6.lt) goto loc_823CFB00;
	// b 0x823cfbe8
	goto loc_823CFBE8;
loc_823CFBE0:
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r14,-1
	ctx.r14.s64 = -1;
loc_823CFBE8:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x823cfc14
	if (!ctx.cr6.gt) goto loc_823CFC14;
	// lwz r23,4(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r22,4(r10)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r21,8(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r20,8(r10)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r19,12(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r18,12(r10)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r17,72(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r16,72(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
loc_823CFC14:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// beq cr6,0x823cfc3c
	if (ctx.cr6.eq) goto loc_823CFC3C;
loc_823CFC1C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823cfab8
	if (ctx.cr6.lt) goto loc_823CFAB8;
	// b 0x823cfc3c
	goto loc_823CFC3C;
loc_823CFC38:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
loc_823CFC3C:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823cdc38
	ctx.lr = 0x823CFC58;
	sub_823CDC38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cfe78
	if (ctx.cr6.eq) goto loc_823CFE78;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc860
	ctx.lr = 0x823CFC78;
	sub_823CC860(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cfd88
	if (ctx.cr6.eq) goto loc_823CFD88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r24,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_823CFC98:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823cfd88
	if (!ctx.cr6.lt) goto loc_823CFD88;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823cfd74
	if (ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 4, ctx.xer);
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// ble cr6,0x823cfd38
	if (!ctx.cr6.gt) goto loc_823CFD38;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r20,r9
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r18,r9
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r16,r9
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cfd74
	if (!ctx.cr6.eq) goto loc_823CFD74;
loc_823CFD38:
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r9,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// stwx r14,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r14.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// stwx r14,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r14.u32);
loc_823CFD74:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823cfc98
	if (ctx.cr6.lt) goto loc_823CFC98;
loc_823CFD88:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// ble cr6,0x823cfe1c
	if (!ctx.cr6.gt) goto loc_823CFE1C;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 136);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823cdb98
	ctx.lr = 0x823CFDA8;
	sub_823CDB98(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823cfe78
	if (ctx.cr6.eq) goto loc_823CFE78;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x823cfe2c
	goto loc_823CFE2C;
loc_823CFE1C:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823CFE2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r15,r24,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x823cfa70
	if (!ctx.cr0.eq) goto loc_823CFA70;
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x823d0024
	if (!ctx.cr6.gt) goto loc_823D0024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfd f1,2328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
	// bl 0x823cdb98
	ctx.lr = 0x823CFE6C;
	sub_823CDB98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823cfe88
	if (!ctx.cr6.eq) goto loc_823CFE88;
loc_823CFE78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d0028
	goto loc_823D0028;
loc_823CFE84:
	// lwz r24,80(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823CFE88:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// subf r29,r24,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r24.u64;
	// beq cr6,0x823d0018
	if (ctx.cr6.eq) goto loc_823D0018;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CFEA0:
	// subf r30,r11,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r11.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x823cfeb0
	if (!ctx.cr6.gt) goto loc_823CFEB0;
	// li r30,4
	ctx.r30.s64 = 4;
loc_823CFEB0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x823cfec4
	if (!ctx.cr6.eq) goto loc_823CFEC4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
loc_823CFEBC:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823cfee0
	goto loc_823CFEE0;
loc_823CFEC4:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x823cfed4
	if (!ctx.cr6.eq) goto loc_823CFED4;
	// lis r4,8256
	ctx.r4.s64 = 541065216;
	// b 0x823cfebc
	goto loc_823CFEBC;
loc_823CFED4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_823CFEE0:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823cdc38
	ctx.lr = 0x823CFEF0;
	sub_823CDC38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cfe78
	if (ctx.cr6.eq) goto loc_823CFE78;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc860
	ctx.lr = 0x823CFF10;
	sub_823CC860(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823cff60
	if (ctx.cr6.eq) goto loc_823CFF60;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_823CFF28:
	// lwz r8,24(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// ble cr6,0x823cff50
	if (!ctx.cr6.gt) goto loc_823CFF50;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r26,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u32);
loc_823CFF50:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823cff28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CFF28;
loc_823CFF60:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// ble cr6,0x823cfff4
	if (!ctx.cr6.gt) goto loc_823CFFF4;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 136);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823cdb98
	ctx.lr = 0x823CFF80;
	sub_823CDB98(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823cfe78
	if (ctx.cr6.eq) goto loc_823CFE78;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x823d0004
	goto loc_823D0004;
loc_823CFFF4:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823D0004:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823cfea0
	if (ctx.cr6.lt) goto loc_823CFEA0;
loc_823D0018:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bgt cr6,0x823cfe84
	if (ctx.cr6.gt) goto loc_823CFE84;
loc_823D0024:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D0028:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F2D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x823F2D28;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,564(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r22,18
	ctx.r22.s64 = 18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F2D44:
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f2d6c
	if (ctx.cr6.eq) goto loc_823F2D6C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,4352
	ctx.r8.s64 = 285212672;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823f2d6c
	if (ctx.cr6.eq) goto loc_823F2D6C;
	// addi r22,r22,-3
	ctx.r22.s64 = ctx.r22.s64 + -3;
loc_823F2D6C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f2d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2D44;
	// lwz r11,548(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 548);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f2e80
	if (ctx.cr6.eq) goto loc_823F2E80;
	// lwz r25,560(r4)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 560);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_823F2D8C:
	// lwz r27,0(r25)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823f2e68
	if (ctx.cr6.eq) goto loc_823F2E68;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f2e68
	if (ctx.cr6.eq) goto loc_823F2E68;
	// lwz r28,12(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_823F2DB0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823f2e50
	if (ctx.cr6.eq) goto loc_823F2E50;
	// lwz r29,24(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_823F2DC0:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823f2e40
	if (ctx.cr6.eq) goto loc_823F2E40;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// bl 0x823ec640
	ctx.lr = 0x823F2DDC;
	sub_823EC640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823f2e40
	if (!ctx.cr0.eq) goto loc_823F2E40;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f2e38
	if (ctx.cr6.eq) goto loc_823F2E38;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,20(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
loc_823F2E08:
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f2e38
	if (ctx.cr6.eq) goto loc_823F2E38;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f2e38
	if (ctx.cr6.eq) goto loc_823F2E38;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823f2e08
	if (ctx.cr6.lt) goto loc_823F2E08;
loc_823F2E38:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823f2e50
	if (!ctx.cr6.eq) goto loc_823F2E50;
loc_823F2E40:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823f2dc0
	if (ctx.cr6.lt) goto loc_823F2DC0;
loc_823F2E50:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823f2e5c
	if (ctx.cr6.eq) goto loc_823F2E5C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_823F2E5C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823f2db0
	if (!ctx.cr0.eq) goto loc_823F2DB0;
loc_823F2E68:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x823f2d8c
	if (!ctx.cr0.eq) goto loc_823F2D8C;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x823f2e84
	if (ctx.cr6.gt) goto loc_823F2E84;
loc_823F2E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F2E84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FA6A8) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fa718
	if (ctx.cr6.eq) goto loc_823FA718;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,136(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_823FA6CC:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823fa708
	if (!ctx.cr6.eq) goto loc_823FA708;
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823fa708
	if (!ctx.cr6.lt) goto loc_823FA708;
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823fa724
	if (!ctx.cr0.eq) goto loc_823FA724;
loc_823FA708:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823fa6cc
	if (ctx.cr6.lt) goto loc_823FA6CC;
loc_823FA718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823FA71C:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823FA724:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823fa71c
	goto loc_823FA71C;
}

DEFINE_REX_FUNC(sub_823FC588) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823FC590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FC5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x823fc5e8
	if (!ctx.cr6.eq) goto loc_823FC5E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FC5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x823fc5f8
	goto loc_823FC5F8;
loc_823FC5E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_823FC5F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FEE68) {
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
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x823feee4
	if (!ctx.cr6.lt) goto loc_823FEEE4;
	// lwz r8,260(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823feee4
	if (ctx.cr0.eq) goto loc_823FEEE4;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823feee4
	if (ctx.cr6.eq) goto loc_823FEEE4;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823FEEA8:
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x823feed8
	if (!ctx.cr6.eq) goto loc_823FEED8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823feea8
	if (ctx.cr6.lt) goto loc_823FEEA8;
	// b 0x823feee4
	goto loc_823FEEE4;
loc_823FEED8:
	// bl 0x823fdcc0
	ctx.lr = 0x823FEEDC;
	sub_823FDCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823feee8
	if (ctx.cr0.lt) goto loc_823FEEE8;
loc_823FEEE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823FEEE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401408) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82401434
	if (ctx.cr6.eq) goto loc_82401434;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x8240142c
	if (ctx.cr6.eq) goto loc_8240142C;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x824014ec
	if (!ctx.cr6.eq) goto loc_824014EC;
loc_8240142C:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x824014b8
	if (!ctx.cr6.eq) goto loc_824014B8;
loc_82401434:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
loc_82401440:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82401464
	if (ctx.cr0.eq) goto loc_82401464;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82401440
	if (ctx.cr6.eq) goto loc_82401440;
loc_82401464:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82401514
	if (ctx.cr0.eq) goto loc_82401514;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-30972
	ctx.r10.s64 = ctx.r10.s64 + -30972;
loc_82401478:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x8240149c
	if (ctx.cr0.eq) goto loc_8240149C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82401478
	if (ctx.cr6.eq) goto loc_82401478;
loc_8240149C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82401514
	if (ctx.cr0.eq) goto loc_82401514;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82401508
	if (!ctx.cr6.eq) goto loc_82401508;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82401508
	goto loc_82401508;
loc_824014B8:
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82401508
	if (!ctx.cr6.eq) goto loc_82401508;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x824014e4
	if (!ctx.cr6.eq) goto loc_824014E4;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_824014E4:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82401508
	if (ctx.cr6.eq) goto loc_82401508;
loc_824014EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824014F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x824014ec
	if (ctx.cr6.lt) goto loc_824014EC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x824014ec
	if (ctx.cr6.gt) goto loc_824014EC;
loc_82401508:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824014f4
	if (!ctx.cr0.eq) goto loc_824014F4;
loc_82401514:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82403600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x82403608;
	__savegprlr_20(ctx, base);
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// sth r7,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// bne cr6,0x82403674
	if (!ctx.cr6.eq) goto loc_82403674;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82403678
	if (!ctx.cr6.eq) goto loc_82403678;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82403678
	if (ctx.cr6.eq) goto loc_82403678;
loc_82403674:
	// lwz r31,60(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
loc_82403678:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82403690
	if (!ctx.cr6.eq) goto loc_82403690;
	// sth r11,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82403724
	goto loc_82403724;
loc_82403690:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// sth r20,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r20.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8240370c
	if (!ctx.cr6.gt) goto loc_8240370C;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
loc_824036B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824030c8
	ctx.lr = 0x824036CC;
	sub_824030C8(ctx, base);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r3,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82403600
	ctx.lr = 0x824036F8;
	sub_82403600(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824036b4
	if (ctx.cr6.lt) goto loc_824036B4;
loc_8240370C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82401b08
	ctx.lr = 0x82403720;
	sub_82401B08(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82403724:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82401bc8
	ctx.lr = 0x82403734;
	sub_82401BC8(ctx, base);
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240B300) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x8240B308;
	__savegprlr_25(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82366e90
	ctx.lr = 0x8240B334;
	sub_82366E90(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240b340
	if (!ctx.cr6.eq) goto loc_8240B340;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8240B340:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r30,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r26,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r26.u32);
	// bl 0x82402e70
	ctx.lr = 0x8240B380;
	sub_82402E70(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq 0x8240b39c
	if (ctx.cr0.eq) goto loc_8240B39C;
	// stw r26,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// stw r26,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// b 0x8240b3a4
	goto loc_8240B3A4;
loc_8240B39C:
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_8240B3A4:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b3b4
	if (ctx.cr0.eq) goto loc_8240B3B4;
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// b 0x8240b3b8
	goto loc_8240B3B8;
loc_8240B3B4:
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8240B3B8:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240b3e0
	if (!ctx.cr6.eq) goto loc_8240B3E0;
	// bl 0x821b9ca8
	ctx.lr = 0x8240B3C8;
	sub_821B9CA8(ctx, base);
	// stw r3,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240b3e0
	if (!ctx.cr0.eq) goto loc_8240B3E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8240b4f4
	goto loc_8240B4F4;
loc_8240B3E0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// beq cr6,0x8240b400
	if (ctx.cr6.eq) goto loc_8240B400;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8240B400:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8240b418
	if (ctx.cr6.eq) goto loc_8240B418;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne 0x8240b41c
	if (!ctx.cr0.eq) goto loc_8240B41C;
loc_8240B418:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8240B41C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r30,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// beq cr6,0x8240b47c
	if (ctx.cr6.eq) goto loc_8240B47C;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240b47c
	if (!ctx.cr6.eq) goto loc_8240B47C;
	// lwz r3,20(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// bne cr6,0x8240b450
	if (!ctx.cr6.eq) goto loc_8240B450;
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// b 0x8240b47c
	goto loc_8240B47C;
loc_8240B450:
	// bl 0x824167a8
	ctx.lr = 0x8240B454;
	sub_824167A8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r26,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8240b46c
	if (ctx.cr6.eq) goto loc_8240B46C;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_8240B46C:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241bfd0
	ctx.lr = 0x8240B47C;
	sub_8241BFD0(ctx, base);
loc_8240B47C:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82203a90
	ctx.lr = 0x8240B48C;
	sub_82203A90(ctx, base);
	// stw r31,3160(r1)
	REX_STORE_U32(ctx.r1.u32 + 3160, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240ab28
	ctx.lr = 0x8240B498;
	sub_8240AB28(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236bb80
	ctx.lr = 0x8240B4A0;
	sub_8236BB80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240b4d0
	if (!ctx.cr0.eq) goto loc_8240B4D0;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240b4d0
	if (!ctx.cr6.eq) goto loc_8240B4D0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240b4d0
	if (!ctx.cr6.eq) goto loc_8240B4D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// bl 0x82403790
	ctx.lr = 0x8240B4D0;
	sub_82403790(ctx, base);
loc_8240B4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82409278
	ctx.lr = 0x8240B4D8;
	sub_82409278(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236bb80
	ctx.lr = 0x8240B4E0;
	sub_8236BB80(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lis r10,-30602
	ctx.r10.s64 = -2005532672;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,2905
	ctx.r10.u64 = ctx.r10.u64 | 2905;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8240B4F4:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82411258) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,6640
	ctx.r30.s64 = ctx.r11.s64 + 6640;
	// lfd f0,32(r30)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r30.u32 + 32);
	// fmul f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
	// bl 0x82412c00
	ctx.lr = 0x82411290;
	sub_82412C00(ctx, base);
	// lfd f0,40(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsub f0,f0,f1,f31
	ctx.f0.f64 = -std::fma(ctx.f0.f64, ctx.f1.f64, -ctx.f31.f64);
	// lfd f13,48(r30)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r30.u32 + 48);
	// lfd f11,64(r30)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r30.u32 + 64);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f12,72(r30)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r30.u32 + 72);
	// lfd f10,96(r30)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r30.u32 + 96);
	// lfd f9,88(r30)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r30.u32 + 88);
	// lfd f8,56(r30)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r30.u32 + 56);
	// lfd f7,80(r30)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r30.u32 + 80);
	// lfd f6,3024(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 3024);
	// fnmsub f0,f13,f1,f0
	ctx.f0.f64 = -std::fma(ctx.f13.f64, ctx.f1.f64, -ctx.f0.f64);
	// fmul f13,f0,f0
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmadd f12,f12,f13,f11
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64);
	// fmadd f11,f10,f13,f9
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64);
	// fmadd f12,f12,f13,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f8.f64);
	// fmadd f13,f11,f13,f7
	ctx.f13.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f7.f64);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f31,f0,f6
	ctx.f31.f64 = ctx.f0.f64 + ctx.f6.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82208558
	ctx.lr = 0x824112F0;
	sub_82208558(ctx, base);
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_69) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_109) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82412E54) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82209d80
	ctx.lr = 0x82412E84;
	sub_82209D80(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r30,r10,1604
	ctx.r30.s64 = ctx.r10.s64 + 1604;
	// addi r10,r11,1608
	ctx.r10.s64 = ctx.r11.s64 + 1608;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824138E0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bc30
	ctx.lr = 0x824138F8;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258bda0
	ctx.lr = 0x8241391C;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241392c
	if (ctx.cr0.lt) goto loc_8241392C;
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x82413934
	goto loc_82413934;
loc_8241392C:
	// bl 0x821f59b8
	ctx.lr = 0x82413930;
	sub_821F59B8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82413934:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416148) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82416150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241619c
	if (ctx.cr6.eq) goto loc_8241619C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// ble cr6,0x8241619c
	if (!ctx.cr6.gt) goto loc_8241619C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,22316
	ctx.r29.s64 = ctx.r11.s64 + 22316;
loc_82416180:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824160f0
	ctx.lr = 0x8241618C;
	sub_824160F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82416180
	if (ctx.cr6.lt) goto loc_82416180;
loc_8241619C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82416DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82416DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82416e44
	if (!ctx.cr6.gt) goto loc_82416E44;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82416df0
	if (!ctx.cr6.lt) goto loc_82416DF0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82416DF0:
	// mulli r4,r30,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(40));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423208
	ctx.lr = 0x82416DFC;
	sub_82423208(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82416e14
	if (!ctx.cr0.eq) goto loc_82416E14;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82416e44
	goto loc_82416E44;
loc_82416E14:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82416e40
	if (ctx.cr6.eq) goto loc_82416E40;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x82203350
	ctx.lr = 0x82416E34;
	sub_82203350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82423218
	ctx.lr = 0x82416E40;
	sub_82423218(ctx, base);
loc_82416E40:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82416E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82419A10) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419a5c
	if (ctx.cr6.eq) goto loc_82419A5C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-4432
	ctx.r4.s64 = ctx.r11.s64 + -4432;
	// bl 0x82204c50
	ctx.lr = 0x82419A3C;
	sub_82204C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82419a5c
	if (ctx.cr0.eq) goto loc_82419A5C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419a5c
	if (ctx.cr6.eq) goto loc_82419A5C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,256(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 256);
	// b 0x82419a64
	goto loc_82419A64;
loc_82419A5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82419A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824187d0
	ctx.lr = 0x82419A6C;
	sub_824187D0(ctx, base);
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

DEFINE_REX_FUNC(sub_8241AA50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8241AA58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241ab00
	if (ctx.cr6.lt) goto loc_8241AB00;
	// lwz r31,120(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8241aab8
	if (ctx.cr6.gt) goto loc_8241AAB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8241aaa8
	if (!ctx.cr6.gt) goto loc_8241AAA8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824168b8
	ctx.lr = 0x8241AAA8;
	sub_824168B8(ctx, base);
loc_8241AAA8:
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241ab00
	if (ctx.cr6.lt) goto loc_8241AB00;
loc_8241AAB8:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8241aafc
	if (ctx.cr6.gt) goto loc_8241AAFC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241aaf8
	if (!ctx.cr6.gt) goto loc_8241AAF8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416828
	ctx.lr = 0x8241AAF8;
	sub_82416828(ctx, base);
loc_8241AAF8:
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_8241AAFC:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
loc_8241AB00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8241DBA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x8241DBB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r3,r4
	ctx.r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8241dc98
	if (!ctx.cr6.lt) goto loc_8241DC98;
loc_8241DBE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r9,16,16,31
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r21,r9,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r22,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82427f98
	ctx.lr = 0x8241DC5C;
	sub_82427F98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8241dc6c
	if (!ctx.cr0.gt) goto loc_8241DC6C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8241dce8
	if (!ctx.cr6.gt) goto loc_8241DCE8;
loc_8241DC6C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x82427f98
	ctx.lr = 0x8241DC7C;
	sub_82427F98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8241dc8c
	if (!ctx.cr0.gt) goto loc_8241DC8C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8241dcfc
	if (!ctx.cr6.gt) goto loc_8241DCFC;
loc_8241DC8C:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8241dbe0
	if (ctx.cr6.lt) goto loc_8241DBE0;
loc_8241DC98:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r30,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r30.u32 / ctx.r11.u32 : 0);
loc_8241DCA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r10,-9696
	ctx.r5.s64 = ctx.r10.s64 + -9696;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241d168
	ctx.lr = 0x8241DCE0;
	sub_8241D168(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
loc_8241DCE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8241DCEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82427f98
	ctx.lr = 0x8241DCF8;
	sub_82427F98(ctx, base);
	// b 0x8241dca0
	goto loc_8241DCA0;
loc_8241DCFC:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x8241dcec
	goto loc_8241DCEC;
}

DEFINE_REX_FUNC(sub_824260C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204238
	ctx.lr = 0x824260D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824260f4
	if (!ctx.cr6.eq) goto loc_824260F4;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x82426100
	goto loc_82426100;
loc_824260F4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82426100:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82426114
	if (ctx.cr6.lt) goto loc_82426114;
	// bl 0x82413700
	ctx.lr = 0x82426114;
	sub_82413700(ctx, base);
loc_82426114:
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r9,0(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lhz r25,2(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x82426138
	if (ctx.cr6.eq) goto loc_82426138;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x8242613c
	if (!ctx.cr6.eq) goto loc_8242613C;
loc_82426138:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8242613C:
	// lwz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// lwzu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r26.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r22,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r22,21
	ctx.r27.u64 = ctx.r22.u32 & 0x7FF;
	// rlwinm r24,r8,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x82426170
	if (ctx.cr6.eq) goto loc_82426170;
	// bl 0x82413700
	ctx.lr = 0x82426170;
	sub_82413700(ctx, base);
loc_82426170:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82423378
	ctx.lr = 0x82426184;
	sub_82423378(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x82426198
	if (ctx.cr6.eq) goto loc_82426198;
	// bl 0x82413700
	ctx.lr = 0x82426198;
	sub_82413700(ctx, base);
loc_82426198:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r23,r29,16
	ctx.r23.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r31,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r20,r31,26
	ctx.r20.u64 = ctx.r31.u32 & 0x3F;
	// or r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 | ctx.r23.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x824261dc
	if (ctx.cr6.eq) goto loc_824261DC;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x824261d4
	if (ctx.cr6.eq) goto loc_824261D4;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x824261d4
	if (ctx.cr6.eq) goto loc_824261D4;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x824261e0
	goto loc_824261E0;
loc_824261D4:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x824261e0
	goto loc_824261E0;
loc_824261DC:
	// li r10,228
	ctx.r10.s64 = 228;
loc_824261E0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82423b48
	ctx.lr = 0x82426214;
	sub_82423B48(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r26,93
	ctx.r26.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x824262ac
	if (ctx.cr6.eq) goto loc_824262AC;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x824262ac
	if (ctx.cr6.eq) goto loc_824262AC;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x82426278
	if (ctx.cr6.eq) goto loc_82426278;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x824262f4
	if (!ctx.cr6.eq) goto loc_824262F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,88
	ctx.r8.s64 = 5767168;
	// stw r10,156(r21)
	REX_STORE_U32(ctx.r21.u32 + 156, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r10,257
	ctx.r10.s64 = 257;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r9,r7,12816
	ctx.r9.u64 = ctx.r7.u64 | 12816;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x8242646c
	goto loc_8242646C;
loc_82426278:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82426304
	goto loc_82426304;
loc_824262AC:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwimi r10,r19,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82423a28
	ctx.lr = 0x824262E0;
	sub_82423A28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 | ctx.r23.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824262F4:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x82426304
	if (ctx.cr6.eq) goto loc_82426304;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x82426470
	if (!ctx.cr6.eq) goto loc_82426470;
loc_82426304:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82426320
	if (ctx.cr6.eq) goto loc_82426320;
	// bl 0x82413700
	ctx.lr = 0x82426320;
	sub_82413700(ctx, base);
loc_82426320:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x82426348
	if (!ctx.cr6.eq) goto loc_82426348;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r11,r11,47768
	ctx.r11.u64 = ctx.r11.u64 | 47768;
	// b 0x82426428
	goto loc_82426428;
loc_82426348:
	// lwz r29,0(r18)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824263ac
	if (ctx.cr6.eq) goto loc_824263AC;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,10216
	ctx.r9.s64 = ctx.r9.s64 + 10216;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824263b0
	goto loc_824263B0;
loc_824263AC:
	// li r28,12816
	ctx.r28.s64 = 12816;
loc_824263B0:
	// rlwinm r3,r29,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// bl 0x82423228
	ctx.lr = 0x824263B8;
	sub_82423228(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x824263d4
	if (!ctx.cr6.eq) goto loc_824263D4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r30,r3,r12
	ctx.r30.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x824263d8
	goto loc_824263D8;
loc_824263D4:
	// ori r30,r3,34952
	ctx.r30.u64 = ctx.r3.u64 | 34952;
loc_824263D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824238a8
	ctx.lr = 0x824263E8;
	sub_824238A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8242640c
	if (!ctx.cr6.eq) goto loc_8242640C;
	// cmplwi cr6,r28,12816
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12816, ctx.xer);
	// bne cr6,0x8242640c
	if (!ctx.cr6.eq) goto loc_8242640C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8242642c
	goto loc_8242642C;
loc_8242640C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 | ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82426428:
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
loc_8242642C:
	// rlwimi r27,r19,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,23
	ctx.r9.u64 = ctx.r27.u32 & 0x1FF;
	// or r31,r10,r23
	ctx.r31.u64 = ctx.r10.u64 | ctx.r23.u64;
	// rlwimi r26,r9,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82423a28
	ctx.lr = 0x82426464;
	sub_82423A28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8242646C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82426470:
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82434918) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243C078) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// blt cr6,0x8243c0b0
	if (ctx.cr6.lt) goto loc_8243C0B0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x8243c0bc
	if (!ctx.cr6.gt) goto loc_8243C0BC;
loc_8243C0B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8243C0BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8243c168
	if (ctx.cr6.eq) goto loc_8243C168;
loc_8243C0D0:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243c0b0
	if (!ctx.cr6.gt) goto loc_8243C0B0;
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm r5,r9,1,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FFE;
	// cmpld cr6,r5,r11
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8243c0b0
	if (!ctx.cr6.lt) goto loc_8243C0B0;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8243c0b0
	if (ctx.cr6.eq) goto loc_8243C0B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8243c0b0
	if (ctx.cr6.eq) goto loc_8243C0B0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243c0b0
	if (!ctx.cr0.eq) goto loc_8243C0B0;
	// rlwinm r11,r9,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243c140
	if (!ctx.cr6.eq) goto loc_8243C140;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8243c0b0
	if (!ctx.cr6.eq) goto loc_8243C0B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8243c154
	goto loc_8243C154;
loc_8243C140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243c154
	if (ctx.cr6.eq) goto loc_8243C154;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8243c0b0
	if (ctx.cr6.eq) goto loc_8243C0B0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8243C154:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8243c0d0
	if (ctx.cr6.lt) goto loc_8243C0D0;
loc_8243C168:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82440C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82440d04
	if (!ctx.cr0.eq) goto loc_82440D04;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82440d04
	if (ctx.cr0.eq) goto loc_82440D04;
loc_82440C6C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440c84
	if (ctx.cr0.eq) goto loc_82440C84;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// b 0x82440c8c
	goto loc_82440C8C;
loc_82440C84:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_82440C8C:
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82440cec
	if (ctx.cr6.eq) goto loc_82440CEC;
loc_82440CA4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440cc8
	if (!ctx.cr0.eq) goto loc_82440CC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440ca4
	if (!ctx.cr6.eq) goto loc_82440CA4;
loc_82440CC8:
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82440cec
	if (ctx.cr6.eq) goto loc_82440CEC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440cec
	if (!ctx.cr0.eq) goto loc_82440CEC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82440ca4
	if (!ctx.cr0.eq) goto loc_82440CA4;
loc_82440CEC:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82440d04
	if (!ctx.cr0.eq) goto loc_82440D04;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82440c6c
	if (!ctx.cr6.eq) goto loc_82440C6C;
loc_82440D04:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440ec4
	if (!ctx.cr0.eq) goto loc_82440EC4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82440ec4
	if (ctx.cr0.eq) goto loc_82440EC4;
loc_82440D1C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440ea8
	if (!ctx.cr0.eq) goto loc_82440EA8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82440ea8
	if (ctx.cr0.eq) goto loc_82440EA8;
loc_82440D34:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x82440e70
	if (ctx.cr6.eq) goto loc_82440E70;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x82440d58
	if (ctx.cr6.lt) goto loc_82440D58;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82440d5c
	if (!ctx.cr6.gt) goto loc_82440D5C;
loc_82440D58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82440D5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82440e70
	if (!ctx.cr0.eq) goto loc_82440E70;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440e8c
	if (ctx.cr0.eq) goto loc_82440E8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82440D70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82440d8c
	if (ctx.cr6.eq) goto loc_82440D8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82440d8c
	if (!ctx.cr0.eq) goto loc_82440D8C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82440d70
	goto loc_82440D70;
loc_82440D8C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82440e8c
	if (ctx.cr6.lt) goto loc_82440E8C;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// ble cr6,0x82440db4
	if (!ctx.cr6.gt) goto loc_82440DB4;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// ble cr6,0x82440e8c
	if (!ctx.cr6.gt) goto loc_82440E8C;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82440e8c
	if (ctx.cr6.gt) goto loc_82440E8C;
loc_82440DB4:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824fca30
	ctx.lr = 0x82440DD0;
	sub_824FCA30(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_82440DD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82440e18
	if (ctx.cr6.eq) goto loc_82440E18;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440df4
	if (!ctx.cr0.eq) goto loc_82440DF4;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82440df8
	if (ctx.cr0.eq) goto loc_82440DF8;
loc_82440DF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82440DF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82440e10
	if (!ctx.cr0.eq) goto loc_82440E10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824fe260
	ctx.lr = 0x82440E10;
	sub_824FE260(ctx, base);
loc_82440E10:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82440dd4
	goto loc_82440DD4;
loc_82440E18:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82440E1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82440e8c
	if (ctx.cr6.eq) goto loc_82440E8C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82440e68
	if (ctx.cr6.eq) goto loc_82440E68;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440e50
	if (ctx.cr0.eq) goto loc_82440E50;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82440e54
	if (!ctx.cr0.eq) goto loc_82440E54;
loc_82440E50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82440E54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440e68
	if (ctx.cr0.eq) goto loc_82440E68;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82440E68:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82440e1c
	goto loc_82440E1C;
loc_82440E70:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824fca30
	ctx.lr = 0x82440E8C;
	sub_824FCA30(ctx, base);
loc_82440E8C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440ea8
	if (!ctx.cr0.eq) goto loc_82440EA8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440d34
	if (!ctx.cr6.eq) goto loc_82440D34;
loc_82440EA8:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82440ec4
	if (!ctx.cr0.eq) goto loc_82440EC4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440d1c
	if (!ctx.cr6.eq) goto loc_82440D1C;
loc_82440EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82455E58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x82455E60;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// bne 0x82455ea4
	if (!ctx.cr0.eq) goto loc_82455EA4;
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r24.u64);
	// std r24,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r24.u64);
	// std r24,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r24.u64);
	// std r24,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r24.u64);
	// b 0x82455f90
	goto loc_82455F90;
loc_82455EA4:
	// ld r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// addi r9,r30,40
	ctx.r9.s64 = ctx.r30.s64 + 40;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r10,8(r27)
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// ld r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 48);
	// std r10,16(r27)
	REX_STORE_U64(ctx.r27.u32 + 16, ctx.r10.u64);
	// ld r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 56);
	// std r10,24(r27)
	REX_STORE_U64(ctx.r27.u32 + 24, ctx.r10.u64);
	// ld r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 64);
	// std r10,32(r27)
	REX_STORE_U64(ctx.r27.u32 + 32, ctx.r10.u64);
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82455f2c
	if (!ctx.cr6.gt) goto loc_82455F2C;
	// li r6,10
	ctx.r6.s64 = 10;
loc_82455EE4:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82455EF4:
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r30.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82455ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82455EF4;
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82455ee4
	if (ctx.cr6.lt) goto loc_82455EE4;
loc_82455F2C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82455f90
	if (ctx.cr6.eq) goto loc_82455F90;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82455f90
	if (ctx.cr0.eq) goto loc_82455F90;
	// li r7,5
	ctx.r7.s64 = 5;
loc_82455F48:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82455F58:
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r25.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82455f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82455F58;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82455f48
	if (ctx.cr6.lt) goto loc_82455F48;
loc_82455F90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x8245600c
	goto loc_8245600C;
loc_82455FA0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82455aa8
	ctx.lr = 0x82455FC4;
	sub_82455AA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8245602c
	if (!ctx.cr0.eq) goto loc_8245602C;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82456004
	if (ctx.cr0.eq) goto loc_82456004;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// slw r4,r11,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// rlwimi r4,r28,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8243fb30
	ctx.lr = 0x82455FF0;
	sub_8243FB30(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82456008
	if (!ctx.cr6.gt) goto loc_82456008;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82456004:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82456008:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8245600C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82446d68
	ctx.lr = 0x8245601C;
	sub_82446D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82455fa0
	if (!ctx.cr6.eq) goto loc_82455FA0;
	// b 0x8245603c
	goto loc_8245603C;
loc_8245602C:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r3,r11,22,28,31
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8245603C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824615F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x824615F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8246161C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8246165c
	if (ctx.cr6.eq) goto loc_8246165C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82461654
	if (!ctx.cr0.eq) goto loc_82461654;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82461648
	if (ctx.cr0.eq) goto loc_82461648;
	// rlwinm. r11,r11,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82461648
	if (!ctx.cr0.eq) goto loc_82461648;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82461654
	goto loc_82461654;
loc_82461648:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82448668
	ctx.lr = 0x82461654;
	sub_82448668(ctx, base);
loc_82461654:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8246161c
	goto loc_8246161C;
loc_8246165C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82461698
	if (ctx.cr6.eq) goto loc_82461698;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
loc_82461668:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82461698
	if (ctx.cr6.eq) goto loc_82461698;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82461684
	if (ctx.cr0.eq) goto loc_82461684;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8246168c
	if (!ctx.cr0.eq) goto loc_8246168C;
loc_82461684:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82461668
	goto loc_82461668;
loc_8246168C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82448668
	ctx.lr = 0x82461698;
	sub_82448668(ctx, base);
loc_82461698:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// bge cr6,0x824616e4
	if (!ctx.cr6.lt) goto loc_824616E4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824616b8
	if (ctx.cr0.eq) goto loc_824616B8;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_824616B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824616ec
	if (ctx.cr6.eq) goto loc_824616EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824484a0
	ctx.lr = 0x824616CC;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82448668
	ctx.lr = 0x824616D8;
	sub_82448668(ctx, base);
	// addi r11,r25,11
	ctx.r11.s64 = ctx.r25.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
loc_824616E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_824616EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824616e4
	if (ctx.cr0.eq) goto loc_824616E4;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r10,17
	ctx.r10.s64 = 17;
	// rlwimi r11,r10,1,26,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC1);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_8246170C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82461734
	if (ctx.cr6.eq) goto loc_82461734;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246172c
	if (ctx.cr6.eq) goto loc_8246172C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82461734
	if (!ctx.cr0.eq) goto loc_82461734;
loc_8246172C:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8246170c
	goto loc_8246170C;
loc_82461734:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82441580
	ctx.lr = 0x82461744;
	sub_82441580(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r10,r11,57
	ctx.r10.u64 = ctx.r11.u64 | 57;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r10,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r10,7,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r10,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// rlwinm r9,r9,19,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xF;
loc_82461774:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824617b0
	if (ctx.cr6.eq) goto loc_824617B0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// andc r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// andc r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r7,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.u64 = static_cast<uint64_t>(31) - ctx.r7.u64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x824617b0
	if (ctx.cr6.eq) goto loc_824617B0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// andc r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// b 0x82461774
	goto loc_82461774;
loc_824617B0:
	// rlwimi r11,r8,13,15,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1E000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE1FFF);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82448668
	ctx.lr = 0x824617C0;
	sub_82448668(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
loc_824617C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82461804
	if (ctx.cr6.eq) goto loc_82461804;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824617e4
	if (!ctx.cr0.eq) goto loc_824617E4;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824617e8
	if (ctx.cr0.eq) goto loc_824617E8;
loc_824617E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824617E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824617fc
	if (ctx.cr0.eq) goto loc_824617FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82448668
	ctx.lr = 0x824617FC;
	sub_82448668(ctx, base);
loc_824617FC:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x824617c4
	goto loc_824617C4;
loc_82461804:
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_82461808:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824616e4
	if (ctx.cr6.eq) goto loc_824616E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82461848
	if (ctx.cr6.eq) goto loc_82461848;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82461834
	if (!ctx.cr0.eq) goto loc_82461834;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82461838
	if (ctx.cr0.eq) goto loc_82461838;
loc_82461834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82461838:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82461848
	if (ctx.cr0.eq) goto loc_82461848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x82461848;
	sub_82448668(ctx, base);
loc_82461848:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82461808
	goto loc_82461808;
}

DEFINE_REX_FUNC(sub_824762E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824762F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// clrlwi. r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r29,r9,18,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// beq 0x824763d0
	if (ctx.cr0.eq) goto loc_824763D0;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r9,27
	ctx.r3.u64 = ctx.r9.u32 & 0x1F;
loc_82476348:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// rlwinm r5,r11,29,3,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r7,r5,r28
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r28.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r5,r11,58
	ctx.r5.u64 = ctx.r11.u64 & 0x3F;
	// li r28,-1
	ctx.r28.s64 = -1;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// sld r7,r28,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r28.u64 << (ctx.r5.u8 & 0x7F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// srd r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r5.u8 & 0x7F));
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// bne cr6,0x824763a0
	if (!ctx.cr6.eq) goto loc_824763A0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_824763A0:
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r25,r5
	ctx.r28.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r5.u8 & 0x3F));
	// andc r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r28.u64;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// or r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82476348
	if (ctx.cr6.lt) goto loc_82476348;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_824763D0:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r28,0
	ctx.r28.s64 = 0;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r24,r11,r29
	ctx.r24.u64 = ctx.r29.u64 - ctx.r11.u64;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// beq cr6,0x82476420
	if (ctx.cr6.eq) goto loc_82476420;
	// lwz r14,0(r27)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82476424
	goto loc_82476424;
loc_82476420:
	// li r14,228
	ctx.r14.s64 = 228;
loc_82476424:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824764a8
	if (ctx.cr6.eq) goto loc_824764A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247643C:
	// slw r11,r26,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476488
	if (ctx.cr0.eq) goto loc_82476488;
	// srw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82476464
	if (!ctx.cr6.eq) goto loc_82476464;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82476464:
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r6,r14,r11
	ctx.r6.u64 = ctx.r14.u64 & ~ctx.r11.u64;
	// and r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 & ctx.r14.u64;
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// or r14,r11,r7
	ctx.r14.u64 = ctx.r11.u64 | ctx.r7.u64;
	// b 0x8247649c
	goto loc_8247649C;
loc_82476488:
	// slw r11,r25,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_8247649C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8247643c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247643C;
loc_824764A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824764b4
	if (ctx.cr6.eq) goto loc_824764B4;
	// stw r14,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r14.u32);
loc_824764B4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x824764c4
	if (!ctx.cr6.eq) goto loc_824764C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82476ae4
	goto loc_82476AE4;
loc_824764C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82476524
	if (!ctx.cr6.eq) goto loc_82476524;
	// addi r30,r15,4
	ctx.r30.s64 = ctx.r15.s64 + 4;
loc_824764D0:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82476524
	if (ctx.cr6.eq) goto loc_82476524;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82476510
	if (ctx.cr6.eq) goto loc_82476510;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476510
	if (ctx.cr0.eq) goto loc_82476510;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82476510
	if (!ctx.cr6.eq) goto loc_82476510;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,660(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 660);
	// bl 0x8248ccc0
	ctx.lr = 0x82476510;
	sub_8248CCC0(ctx, base);
loc_82476510:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824764d0
	if (!ctx.cr6.eq) goto loc_824764D0;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// b 0x824764d0
	goto loc_824764D0;
loc_82476524:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// rlwinm r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824f4e90
	ctx.lr = 0x82476544;
	sub_824F4E90(ctx, base);
	// lhz r11,14(r15)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 14);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82476598
	if (ctx.cr0.eq) goto loc_82476598;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82476598
	if (ctx.cr6.eq) goto loc_82476598;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82476564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8248d3d0
	ctx.lr = 0x82476570;
	sub_8248D3D0(ctx, base);
	// srw r11,r14,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r30.u8 & 0x3F));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8248d3e8
	ctx.lr = 0x82476588;
	sub_8248D3E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82476564
	if (ctx.cr6.lt) goto loc_82476564;
loc_82476598:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r21,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r11,20(r21)
	REX_STORE_U32(ctx.r21.u32 + 20, ctx.r11.u32);
	// stw r10,16(r21)
	REX_STORE_U32(ctx.r21.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476600
	if (ctx.cr0.eq) goto loc_82476600;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
loc_82476600:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r21,44
	ctx.r31.s64 = ctx.r21.s64 + 44;
	// subf r29,r21,r15
	ctx.r29.u64 = ctx.r15.u64 - ctx.r21.u64;
loc_8247660C:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82476690
	if (!ctx.cr6.lt) goto loc_82476690;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82448668
	ctx.lr = 0x82476628;
	sub_82448668(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r5,r5,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xFF;
	// rlwinm r11,r28,27,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x6;
	// rlwinm r10,r24,14,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 14) & 0x1C000;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r9,r28,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x6;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r28,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x6;
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r6,r28,1,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x6;
	// srw r10,r5,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r11,r5,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r11,r10,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r7,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8247660c
	goto loc_8247660C;
loc_82476690:
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
loc_82476694:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824766f4
	if (ctx.cr6.eq) goto loc_824766F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824766e0
	if (!ctx.cr0.eq) goto loc_824766E0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x824766c0
	goto loc_824766C0;
loc_824766B8:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_824766C0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824766b8
	if (!ctx.cr6.eq) goto loc_824766B8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r21.u32);
loc_824766E0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82476694
	if (!ctx.cr6.eq) goto loc_82476694;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82476694
	goto loc_82476694;
loc_824766F4:
	// addi r16,r15,4
	ctx.r16.s64 = ctx.r15.s64 + 4;
loc_824766F8:
	// lwz r17,0(r16)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82476a20
	if (ctx.cr6.eq) goto loc_82476A20;
	// lwz r27,16(r17)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82476a0c
	if (ctx.cr6.eq) goto loc_82476A0C;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824769d4
	if (!ctx.cr6.eq) goto loc_824769D4;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824769d4
	if (ctx.cr0.eq) goto loc_824769D4;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82476994
	if (!ctx.cr6.eq) goto loc_82476994;
	// rlwinm r9,r11,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82476994
	if (ctx.cr0.eq) goto loc_82476994;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x824f4ff8
	ctx.lr = 0x8247676C;
	sub_824F4FF8(ctx, base);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476918
	if (ctx.cr0.eq) goto loc_82476918;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r19,r3,44
	ctx.r19.s64 = ctx.r3.s64 + 44;
	// addi r18,r27,44
	ctx.r18.s64 = ctx.r27.s64 + 44;
loc_824767D8:
	// lwz r31,0(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r11,27,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82476824
	if (!ctx.cr6.eq) goto loc_82476824;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r9,r11,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82476824
	if (ctx.cr0.eq) goto loc_82476824;
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// andc r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 & ~ctx.r10.u64;
	// slw r9,r29,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// or r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 | ctx.r20.u64;
	// or r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x824768fc
	goto loc_824768FC;
loc_82476824:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r28,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// andc r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82448668
	ctx.lr = 0x82476844;
	sub_82448668(ctx, base);
	// stw r3,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x824768d0
	if (!ctx.cr6.eq) goto loc_824768D0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r9,r9,0,27,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r8,r10,5,22,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3E0;
	// rlwinm r9,r9,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r8,r8,7296
	ctx.r8.u64 = ctx.r8.u64 | 7296;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r25,r8
	ctx.r9.u64 = ctx.r25.u64 & ~ctx.r8.u64;
	// or r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824768ac
	goto loc_824768AC;
loc_824768A4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_824768AC:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824768a4
	if (!ctx.cr6.eq) goto loc_824768A4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// stw r21,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r21.u32);
	// b 0x824768f4
	goto loc_824768F4;
loc_824768D0:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x824768f4
	if (!ctx.cr6.eq) goto loc_824768F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 & ~ctx.r10.u64;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_824768F4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
loc_824768FC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824767d8
	if (ctx.cr6.lt) goto loc_824767D8;
loc_82476918:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8247691C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82476974
	if (ctx.cr6.eq) goto loc_82476974;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x6;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r14,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r8,r8,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x6;
	// andc r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 & ~ctx.r9.u64;
	// srw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8247691c
	goto loc_8247691C;
loc_82476974:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82474fc8
	ctx.lr = 0x82476990;
	sub_82474FC8(ctx, base);
	// b 0x82476a0c
	goto loc_82476A0C;
loc_82476994:
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r11,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r14,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
loc_824769D4:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824769ec
	goto loc_824769EC;
loc_824769E4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_824769EC:
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x824769e4
	if (!ctx.cr6.eq) goto loc_824769E4;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,8(r17)
	REX_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// stw r17,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r17.u32);
	// stw r21,12(r17)
	REX_STORE_U32(ctx.r17.u32 + 12, ctx.r21.u32);
loc_82476A0C:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x824766f8
	if (!ctx.cr6.eq) goto loc_824766F8;
	// addi r16,r17,8
	ctx.r16.s64 = ctx.r17.s64 + 8;
	// b 0x824766f8
	goto loc_824766F8;
loc_82476A20:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82476ac8
	if (ctx.cr0.eq) goto loc_82476AC8;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r11,8(r21)
	REX_STORE_U32(ctx.r21.u32 + 8, ctx.r11.u32);
	// bl 0x82453d88
	ctx.lr = 0x82476A64;
	sub_82453D88(ctx, base);
	// lwz r31,276(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r3,18(r21)
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82476aa0
	if (!ctx.cr0.eq) goto loc_82476AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476aa0
	if (ctx.cr0.eq) goto loc_82476AA0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82476aac
	if (!ctx.cr6.gt) goto loc_82476AAC;
loc_82476AA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82442788
	ctx.lr = 0x82476AA8;
	sub_82442788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82476AAC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r21,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r21.u32);
	// b 0x82476acc
	goto loc_82476ACC;
loc_82476AC8:
	// lwz r31,276(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82476ACC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb8c0
	ctx.lr = 0x82476AE0;
	sub_824FB8C0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82476AE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BA740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824BA778:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824ba778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824BA778;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BC0C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824bc0e4
	if (ctx.cr6.eq) goto loc_824BC0E4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x824bc0e4
	if (!ctx.cr6.eq) goto loc_824BC0E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_824BC0E4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BC150) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824bc19c
	if (ctx.cr6.eq) goto loc_824BC19C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x824bc19c
	if (!ctx.cr6.eq) goto loc_824BC19C;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x824bc178
	if (ctx.cr6.eq) goto loc_824BC178;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_824BC178:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824bc194
	if (ctx.cr6.eq) goto loc_824BC194;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_824BC194:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_824BC19C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BC7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x824BC7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824bc810
	if (!ctx.cr6.eq) goto loc_824BC810;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824222f0
	ctx.lr = 0x824BC810;
	sub_824222F0(ctx, base);
loc_824BC810:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824bc860
	if (!ctx.cr6.eq) goto loc_824BC860;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bc830
	if (!ctx.cr6.eq) goto loc_824BC830;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824222f0
	ctx.lr = 0x824BC830;
	sub_824222F0(ctx, base);
loc_824BC830:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824bc530
	ctx.lr = 0x824BC838;
	sub_824BC530(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x824bc84c
	if (!ctx.cr0.eq) goto loc_824BC84C;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824222f0
	ctx.lr = 0x824BC84C;
	sub_824222F0(ctx, base);
loc_824BC84C:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x824bc760
	ctx.lr = 0x824BC854;
	sub_824BC760(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_824BC860:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824222f0
	ctx.lr = 0x824BC868;
	sub_824222F0(ctx, base);
}

DEFINE_REX_FUNC(sub_824BD3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x824BD3C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8243d038
	ctx.lr = 0x824BD3E8;
	sub_8243D038(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823850c0
	ctx.lr = 0x824BD3F4;
	sub_823850C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x824bd348
	ctx.lr = 0x824BD414;
	sub_824BD348(ctx, base);
	// stw r3,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r3.u32);
	// stw r28,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BDCB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x824BDCC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,16
	ctx.r29.s64 = ctx.r4.s64 + 16;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824BDCE8;
	sub_824F4E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824BDD08;
	sub_824F4E90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x824486c8
	ctx.lr = 0x824BDD2C;
	sub_824486C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824348c0
	ctx.lr = 0x824BDD40;
	sub_824348C0(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// rlwimi r9,r10,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BEBF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824BEC00;
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
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824BEC28;
	sub_824F4E90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bec4c
	if (ctx.cr6.eq) goto loc_824BEC4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824BEC48;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824BEC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BEC54;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x824bec78
	if (ctx.cr6.eq) goto loc_824BEC78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824BEC74;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824BEC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824BEC80;
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

DEFINE_REX_FUNC(sub_824C05F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824C05F8;
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
	ctx.lr = 0x824C0620;
	sub_824F4E90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c0644
	if (ctx.cr6.eq) goto loc_824C0644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824C0640;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824C0644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824C064C;
	sub_82448668(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824484a0
	ctx.lr = 0x824C065C;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82448668
	ctx.lr = 0x824C0668;
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

DEFINE_REX_FUNC(sub_824C29B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204244
	ctx.lr = 0x824C29B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,4(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r21,8(r4)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824c2aa4
	if (ctx.cr6.eq) goto loc_824C2AA4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_824C29F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C29F8;
	sub_824BE2B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824c2a70
	if (ctx.cr6.eq) goto loc_824C2A70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c2710
	ctx.lr = 0x824C2A10;
	sub_824C2710(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c2710
	ctx.lr = 0x824C2A20;
	sub_824C2710(ctx, base);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824c2aa4
	if (!ctx.cr6.eq) goto loc_824C2AA4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x824c2a44
	if (ctx.cr6.lt) goto loc_824C2A44;
	// beq cr6,0x824c2b58
	if (ctx.cr6.eq) goto loc_824C2B58;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x824c2b78
	if (!ctx.cr6.lt) goto loc_824C2B78;
loc_824C2A44:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824C2A48:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x824c2a64
	if (ctx.cr6.lt) goto loc_824C2A64;
	// beq cr6,0x824c2b68
	if (ctx.cr6.eq) goto loc_824C2B68;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x824c2b84
	if (!ctx.cr6.lt) goto loc_824C2B84;
loc_824C2A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C2A68:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c2aa4
	if (!ctx.cr6.eq) goto loc_824C2AA4;
loc_824C2A70:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824bdfa0
	ctx.lr = 0x824C2A7C;
	sub_824BDFA0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r3,r25
	ctx.r10.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r25.u8 & 0x3F));
	// slw r11,r11,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r25.u8 & 0x3F));
	// andc r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 & ~ctx.r11.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// or r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x824c29f0
	if (ctx.cr6.lt) goto loc_824C29F0;
loc_824C2AA4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c2b90
	if (ctx.cr0.eq) goto loc_824C2B90;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x824c2b90
	if (!ctx.cr6.lt) goto loc_824C2B90;
	// stw r22,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r21,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x824f4ff8
	ctx.lr = 0x824C2AD0;
	sub_824F4FF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824c2b0c
	if (ctx.cr6.eq) goto loc_824C2B0C;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
loc_824C2AE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824be2b0
	ctx.lr = 0x824C2AE8;
	sub_824BE2B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c2810
	ctx.lr = 0x824C2AF4;
	sub_824C2810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82448668
	ctx.lr = 0x824C2B00;
	sub_82448668(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// bne 0x824c2ae0
	if (!ctx.cr0.eq) goto loc_824C2AE0;
loc_824C2B0C:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x824484a0
	ctx.lr = 0x824C2B54;
	sub_824484A0(ctx, base);
	// b 0x824c2bc0
	goto loc_824C2BC0;
loc_824C2B58:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// b 0x824c2a48
	goto loc_824C2A48;
loc_824C2B68:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x824c2a68
	goto loc_824C2A68;
loc_824C2B78:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C2B84;
	sub_824222F0(ctx, base);
loc_824C2B84:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824C2B90;
	sub_824222F0(ctx, base);
loc_824C2B90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c2810
	ctx.lr = 0x824C2B9C;
	sub_824C2810(ctx, base);
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// rlwinm r11,r28,20,9,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x700000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_824C2BC0:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c2bd0
	if (ctx.cr0.eq) goto loc_824C2BD0;
	// stw r22,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
	// stw r21,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r21.u32);
loc_824C2BD0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DA010) {
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
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r31,-32166
	ctx.r31.s64 = -2108030976;
	// addi r11,r11,25056
	ctx.r11.s64 = ctx.r11.s64 + 25056;
	// addi r10,r10,25304
	ctx.r10.s64 = ctx.r10.s64 + 25304;
	// stw r11,13020(r9)
	REX_STORE_U32(ctx.r9.u32 + 13020, ctx.r11.u32);
	// stw r10,13024(r31)
	REX_STORE_U32(ctx.r31.u32 + 13024, ctx.r10.u32);
	// bl 0x823562d8
	ctx.lr = 0x824DA044;
	sub_823562D8(ctx, base);
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

DEFINE_REX_FUNC(sub_824DA4E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x824DA4F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,-3532
	ctx.r30.s64 = ctx.r11.s64 + -3532;
	// addi r29,r10,21304
	ctx.r29.s64 = ctx.r10.s64 + 21304;
	// bne cr6,0x824da538
	if (!ctx.cr6.eq) goto loc_824DA538;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11808
	ctx.r5.s64 = ctx.r11.s64 + 11808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,105
	ctx.r7.s64 = 105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824DA538;
	sub_82428090(ctx, base);
loc_824DA538:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x824da55c
	if (!ctx.cr6.eq) goto loc_824DA55C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11796
	ctx.r5.s64 = ctx.r11.s64 + 11796;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,106
	ctx.r7.s64 = 106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824DA55C;
	sub_82428090(ctx, base);
loc_824DA55C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x824da580
	if (!ctx.cr6.eq) goto loc_824DA580;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21284
	ctx.r5.s64 = ctx.r11.s64 + 21284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,107
	ctx.r7.s64 = 107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824DA580;
	sub_82428090(ctx, base);
loc_824DA580:
	// li r4,56
	ctx.r4.s64 = 56;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x824DA590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x824da5b8
	if (!ctx.cr0.eq) goto loc_824DA5B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21280
	ctx.r5.s64 = ctx.r11.s64 + 21280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,113
	ctx.r7.s64 = 113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824DA5B4;
	sub_82428090(ctx, base);
	// b 0x824da630
	goto loc_824DA630;
loc_824DA5B8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r28,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// stw r25,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
	// addi r11,r11,13032
	ctx.r11.s64 = ctx.r11.s64 + 13032;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// li r29,12
	ctx.r29.s64 = 12;
loc_824DA5D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bctrl 
	ctx.lr = 0x824DA5F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x824da5d8
	if (!ctx.cr0.eq) goto loc_824DA5D8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21248
	ctx.r4.s64 = ctx.r11.s64 + 21248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x824DA620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824da630
	if (!ctx.cr6.eq) goto loc_824DA630;
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_824DA630:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x824DD550;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824dd580
	if (!ctx.cr6.eq) goto loc_824DD580;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,24104
	ctx.r6.s64 = ctx.r11.s64 + 24104;
	// addi r5,r10,24096
	ctx.r5.s64 = ctx.r10.s64 + 24096;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,285
	ctx.r7.s64 = 285;
	// bl 0x82428090
	ctx.lr = 0x824DD580;
	sub_82428090(ctx, base);
loc_824DD580:
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dd608
	if (ctx.cr6.eq) goto loc_824DD608;
	// b 0x824dd5f4
	goto loc_824DD5F4;
loc_824DD590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242d280
	ctx.lr = 0x824DD598;
	sub_8242D280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x824dd5d0
	goto loc_824DD5D0;
loc_824DD5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242d280
	ctx.lr = 0x824DD5A8;
	sub_8242D280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8242d6a0
	ctx.lr = 0x824DD5B4;
	sub_8242D6A0(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8242d6a0
	ctx.lr = 0x824DD5BC;
	sub_8242D6A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x824dbf18
	ctx.lr = 0x824DD5C8;
	sub_824DBF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242d248
	ctx.lr = 0x824DD5D0;
	sub_8242D248(ctx, base);
loc_824DD5D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8242cf70
	ctx.lr = 0x824DD5D8;
	sub_8242CF70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824dd5a0
	if (!ctx.cr0.eq) goto loc_824DD5A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8242cab8
	ctx.lr = 0x824DD5E8;
	sub_8242CAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242d248
	ctx.lr = 0x824DD5F0;
	sub_8242D248(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
loc_824DD5F4:
	// bl 0x8242cf70
	ctx.lr = 0x824DD5F8;
	sub_8242CF70(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824dd590
	if (!ctx.cr0.eq) goto loc_824DD590;
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x8242cab8
	ctx.lr = 0x824DD608;
	sub_8242CAB8(ctx, base);
loc_824DD608:
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dd618
	if (ctx.cr6.eq) goto loc_824DD618;
	// bl 0x825056b0
	ctx.lr = 0x824DD618;
	sub_825056B0(ctx, base);
loc_824DD618:
	// lwz r3,28(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dd628
	if (ctx.cr6.eq) goto loc_824DD628;
	// bl 0x824dbdb0
	ctx.lr = 0x824DD628;
	sub_824DBDB0(ctx, base);
loc_824DD628:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DD63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DFF70) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824dffac
	if (ctx.cr6.lt) goto loc_824DFFAC;
	// beq cr6,0x824dffb4
	if (ctx.cr6.eq) goto loc_824DFFB4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824dffa0
	if (ctx.cr6.lt) goto loc_824DFFA0;
	// bne cr6,0x824dffb4
	if (!ctx.cr6.eq) goto loc_824DFFB4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// b 0x824dffb4
	goto loc_824DFFB4;
loc_824DFFA0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,4
	ctx.r3.u64 = ctx.r11.u64 | 4;
	// b 0x824dffb4
	goto loc_824DFFB4;
loc_824DFFAC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,12
	ctx.r3.u64 = ctx.r11.u64 | 12;
loc_824DFFB4:
	// rlwinm r11,r10,24,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824dffe4
	if (ctx.cr6.lt) goto loc_824DFFE4;
	// beq cr6,0x824dffd8
	if (ctx.cr6.eq) goto loc_824DFFD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824dffec
	if (!ctx.cr6.eq) goto loc_824DFFEC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// b 0x824dffec
	goto loc_824DFFEC;
loc_824DFFD8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,48
	ctx.r3.u64 = ctx.r11.u64 | 48;
	// b 0x824dffec
	goto loc_824DFFEC;
loc_824DFFE4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
loc_824DFFEC:
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e001c
	if (ctx.cr6.lt) goto loc_824E001C;
	// beq cr6,0x824e0010
	if (ctx.cr6.eq) goto loc_824E0010;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,192
	ctx.r3.u64 = ctx.r11.u64 | 192;
	// blr 
	return;
loc_824E0010:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,128
	ctx.r3.u64 = ctx.r11.u64 | 128;
	// blr 
	return;
loc_824E001C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 | 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E6138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// sth r10,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r6,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,65
	ctx.r8.s64 = 65;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,4369
	ctx.r10.u64 = ctx.r10.u64 | 4369;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r10,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r10,r8,64
	ctx.r10.u64 = ctx.r8.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r8,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r8,r10,0,28,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r8.u64 & 0x70);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r8,r10,0,24,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r8.u64 & 0x700);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r8,r10,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r10,0,29,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r8.u64 & 0x8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r10,0,25,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r8.u64 & 0x80);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r10,0,21,19
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r8.u64 & 0x800);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// rlwimi r8,r10,0,17,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r8.u64 & 0x8000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E9A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824E9A60;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,28(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,2080
	ctx.r11.s64 = 2080;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r6,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824E9A98:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824e9a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E9A98;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x824e9ac0
	if (ctx.cr6.eq) goto loc_824E9AC0;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x824e9ac8
	if (!ctx.cr6.eq) goto loc_824E9AC8;
loc_824E9AC0:
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_824E9AC8:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-584
	ctx.r11.s64 = ctx.r10.s64 + -584;
	// addi r25,r4,4
	ctx.r25.s64 = ctx.r4.s64 + 4;
	// addi r10,r11,456
	ctx.r10.s64 = ctx.r11.s64 + 456;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r21,r9,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e9b94
	if (ctx.cr6.eq) goto loc_824E9B94;
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// lwz r30,0(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9b50
	if (ctx.cr0.eq) goto loc_824E9B50;
	// rlwinm r6,r30,16,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0x3F;
	// cmplwi cr6,r6,23
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 23, ctx.xer);
	// bne cr6,0x824e9b2c
	if (!ctx.cr6.eq) goto loc_824E9B2C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_824E9B2C:
	// addi r4,r24,16768
	ctx.r4.s64 = ctx.r24.s64 + 16768;
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824df7b8
	ctx.lr = 0x824E9B3C;
	sub_824DF7B8(ctx, base);
	// andis. r11,r30,65476
	ctx.r11.u64 = ctx.r30.u64 & 4291035136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r30,r11,4
	ctx.r30.u64 = ctx.r11.u64 | 262144;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_824E9B50:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9b68
	if (ctx.cr0.eq) goto loc_824E9B68;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// b 0x824e9b6c
	goto loc_824E9B6C;
loc_824E9B68:
	// li r11,85
	ctx.r11.s64 = 85;
loc_824E9B6C:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9b8c
	if (ctx.cr0.eq) goto loc_824E9B8C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x824e9b98
	goto loc_824E9B98;
loc_824E9B8C:
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// b 0x824e9b98
	goto loc_824E9B98;
loc_824E9B94:
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_824E9B98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r17,12816
	ctx.r17.s64 = 12816;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r16,r11,-3532
	ctx.r16.s64 = ctx.r11.s64 + -3532;
	// addi r14,r10,20292
	ctx.r14.s64 = ctx.r10.s64 + 20292;
	// addi r15,r9,26040
	ctx.r15.s64 = ctx.r9.s64 + 26040;
	// beq cr6,0x824e9cb8
	if (ctx.cr6.eq) goto loc_824E9CB8;
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_824E9BD0:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// lwzx r9,r28,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x824e9c54
	if (ctx.cr0.eq) goto loc_824E9C54;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,16768(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 16768);
	// rlwinm r10,r9,16,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x824e9c20
	goto loc_824E9C20;
loc_824E9C04:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824e9c1c
	if (!ctx.cr6.eq) goto loc_824E9C1C;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e9c70
	if (ctx.cr6.eq) goto loc_824E9C70;
loc_824E9C1C:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_824E9C20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824e9c04
	if (!ctx.cr6.eq) goto loc_824E9C04;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,1074
	ctx.r7.s64 = 1074;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E9C40;
	sub_82428090(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824E9C44:
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r22,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_824E9C54:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9c78
	if (ctx.cr0.eq) goto loc_824E9C78;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x824e9c7c
	goto loc_824E9C7C;
loc_824E9C70:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824e9c44
	goto loc_824E9C44;
loc_824E9C78:
	// stw r17,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r17.u32);
loc_824E9C7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9c98
	if (ctx.cr0.eq) goto loc_824E9C98;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x824e9c9c
	goto loc_824E9C9C;
loc_824E9C98:
	// stw r23,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r23.u32);
loc_824E9C9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x824e9bd0
	if (ctx.cr6.lt) goto loc_824E9BD0;
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
loc_824E9CB8:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// lwz r29,112(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bne cr6,0x824e9ce4
	if (!ctx.cr6.eq) goto loc_824E9CE4;
	// rlwinm r11,r29,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3F0000;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824e9ce4
	if (!ctx.cr6.eq) goto loc_824E9CE4;
	// li r11,9
	ctx.r11.s64 = 9;
	// rlwimi r26,r11,3,16,31
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF0000);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_824E9CE4:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// lwzx r11,r28,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9d24
	if (ctx.cr0.eq) goto loc_824E9D24;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r24,23224
	ctx.r5.s64 = ctx.r24.s64 + 23224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e6e40
	ctx.lr = 0x824E9D18;
	sub_824E6E40(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_824E9D24:
	// lwzx r11,r28,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// li r19,65
	ctx.r19.s64 = 65;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ea2ac
	if (ctx.cr0.eq) goto loc_824EA2AC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x824ea3d4
	if (ctx.cr6.eq) goto loc_824EA3D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r1,124
	ctx.r30.s64 = ctx.r1.s64 + 124;
	// addi r28,r11,23212
	ctx.r28.s64 = ctx.r11.s64 + 23212;
	// subfic r25,r11,-23212
	ctx.xer.ca = ctx.r11.u32 <= 4294944084;
	ctx.r25.u64 = static_cast<uint64_t>(-23212) - ctx.r11.u64;
loc_824E9D4C:
	// lwz r11,-12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// addi r29,r30,-12
	ctx.r29.s64 = ctx.r30.s64 + -12;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ea298
	if (ctx.cr0.eq) goto loc_824EA298;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x824e9d90
	if (!ctx.cr6.lt) goto loc_824E9D90;
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x824e9d90
	if (!ctx.cr6.lt) goto loc_824E9D90;
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x824e9d90
	if (!ctx.cr6.lt) goto loc_824E9D90;
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x824e9ddc
	if (ctx.cr6.lt) goto loc_824E9DDC;
loc_824E9D90:
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e5dc0
	ctx.lr = 0x824E9DA8;
	sub_824E5DC0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,-22(r5)
	REX_STORE_U16(ctx.r5.u32 + -22, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824E9DDC:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824e9e38
	if (!ctx.cr6.eq) goto loc_824E9E38;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e6138
	ctx.lr = 0x824E9E04;
	sub_824E6138(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,-22(r5)
	REX_STORE_U16(ctx.r5.u32 + -22, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824E9E38:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824e9f34
	if (!ctx.cr6.eq) goto loc_824E9F34;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// rlwinm. r10,r8,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r12,30583
	ctx.r12.s64 = 30583;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r22,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,0,16,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF) | (ctx.r9.u64 & 0xFF0000);
	// rlwimi r9,r8,0,9,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000) | (ctx.r9.u64 & 0xFFFFFFFFFFBFFFFF);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// and r9,r8,r12
	ctx.r9.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824e9ed8
	if (ctx.cr0.eq) goto loc_824E9ED8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E9ED8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,21845
	ctx.r9.s64 = 21845;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r10,r9,1,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// sth r11,-10(r30)
	REX_STORE_U16(ctx.r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824E9F34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824ea034
	if (!ctx.cr6.eq) goto loc_824EA034;
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// andi. r7,r7,30583
	ctx.r7.u64 = ctx.r7.u64 & 30583;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r22,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824e9fd8
	if (ctx.cr0.eq) goto loc_824E9FD8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E9FD8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// sth r11,-10(r30)
	REX_STORE_U16(ctx.r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA034:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824ea098
	if (!ctx.cr6.eq) goto loc_824EA098;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e6280
	ctx.lr = 0x824EA064;
	sub_824E6280(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,-10(r30)
	REX_STORE_U16(ctx.r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA098:
	// lwz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r27,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 11) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ea154
	if (ctx.cr0.eq) goto loc_824EA154;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x824ea0d8
	if (ctx.cr6.eq) goto loc_824EA0D8;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x824ea0d8
	if (ctx.cr6.eq) goto loc_824EA0D8;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// beq cr6,0x824ea0d8
	if (ctx.cr6.eq) goto loc_824EA0D8;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x824ea0d8
	if (ctx.cr6.eq) goto loc_824EA0D8;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x824ea0d8
	if (ctx.cr6.eq) goto loc_824EA0D8;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x824ea0fc
	if (!ctx.cr6.eq) goto loc_824EA0FC;
loc_824EA0D8:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x824ea0fc
	if (!ctx.cr6.eq) goto loc_824EA0FC;
	// rlwinm r5,r26,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xF;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8242dcc8
	ctx.lr = 0x824EA0F0;
	sub_8242DCC8(ctx, base);
	// rlwimi r27,r3,21,8,10
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xE00000) | (ctx.r27.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r27,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA0FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,8,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ea154
	if (ctx.cr0.eq) goto loc_824EA154;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e6500
	ctx.lr = 0x824EA120;
	sub_824E6500(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,-10(r30)
	REX_STORE_U16(ctx.r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA154:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824ea244
	if (!ctx.cr6.eq) goto loc_824EA244;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r19,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r19.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// add r8,r25,r28
	ctx.r8.u64 = ctx.r25.u64 + ctx.r28.u64;
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_824EA19C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r6,r4,0,16,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF) | (ctx.r6.u64 & 0xFF0000);
	// rlwimi r6,r4,0,9,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400000) | (ctx.r6.u64 & 0xFFFFFFFFFFBFFFFF);
	// oris r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 4194304;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwimi r11,r6,0,0,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// rlwimi r11,r6,0,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r5,r11,0,24,20
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r5.u64 & 0x700);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// rlwimi r11,r7,0,17,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x824ea1fc
	if (!ctx.cr6.eq) goto loc_824EA1FC;
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824EA1FC:
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// beq 0x824ea218
	if (ctx.cr0.eq) goto loc_824EA218;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EA218:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x824ea19c
	if (ctx.cr6.lt) goto loc_824EA19C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sth r11,-10(r30)
	REX_STORE_U16(ctx.r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r17,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r17.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA244:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x824ea278
	if (ctx.cr6.eq) goto loc_824EA278;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x824ea278
	if (ctx.cr6.eq) goto loc_824EA278;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// beq cr6,0x824ea278
	if (ctx.cr6.eq) goto loc_824EA278;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x824ea298
	if (!ctx.cr6.eq) goto loc_824EA298;
loc_824EA278:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e6890
	ctx.lr = 0x824EA290;
	sub_824E6890(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824EA298:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x824e9d4c
	if (!ctx.cr0.eq) goto loc_824E9D4C;
	// b 0x824ea3c8
	goto loc_824EA3C8;
loc_824EA2AC:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ea3d4
	if (ctx.cr0.eq) goto loc_824EA3D4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x824ea3d4
	if (ctx.cr6.eq) goto loc_824EA3D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,23212
	ctx.r29.s64 = ctx.r11.s64 + 23212;
	// subfic r24,r11,-23212
	ctx.xer.ca = ctx.r11.u32 <= 4294944084;
	ctx.r24.u64 = static_cast<uint64_t>(-23212) - ctx.r11.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r20,r11,27368
	ctx.r20.s64 = ctx.r11.s64 + 27368;
loc_824EA2D4:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824ea3b4
	if (!ctx.cr6.eq) goto loc_824EA3B4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r29,r24
	ctx.r28.u64 = ctx.r29.u64 + ctx.r24.u64;
	// sth r19,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r19.u16);
	// rlwinm r25,r9,9,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_824EA320:
	// lwz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r10,r27,0,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3F0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824ea34c
	if (ctx.cr6.eq) goto loc_824EA34C;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,9724
	ctx.r7.s64 = 9724;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824EA34C;
	sub_82428090(ctx, base);
loc_824EA34C:
	// sth r27,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// rlwinm. r10,r27,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r27,0,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// beq 0x824ea378
	if (ctx.cr0.eq) goto loc_824EA378;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EA378:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824ea390
	if (ctx.cr6.eq) goto loc_824EA390;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EA390:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x824ea320
	if (!ctx.cr0.eq) goto loc_824EA320;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r17,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r17.u32);
loc_824EA3B4:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x824ea2d4
	if (!ctx.cr0.eq) goto loc_824EA2D4;
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824EA3C8:
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,112(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_824EA3D4:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bgt cr6,0x824eaaa4
	if (ctx.cr6.gt) goto loc_824EAAA4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,26360
	ctx.r12.s64 = ctx.r12.s64 + 26360;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// addi r12,r12,-23540
	ctx.r12.s64 = ctx.r12.s64 + -23540;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_824EA5FC;
	case 1:
		goto loc_824EAAA4;
	case 2:
		goto loc_824EAAA4;
	case 3:
		goto loc_824EAAA4;
	case 4:
		goto loc_824EAAA4;
	case 5:
		goto loc_824EA570;
	case 6:
		goto loc_824EA578;
	case 7:
		goto loc_824EAAA4;
	case 8:
		goto loc_824EAAA4;
	case 9:
		goto loc_824EA40C;
	case 10:
		goto loc_824EAAA4;
	case 11:
		goto loc_824EAAA4;
	case 12:
		goto loc_824EA60C;
	case 13:
		goto loc_824EA620;
	case 14:
		goto loc_824EAAA4;
	case 15:
		goto loc_824EAAA4;
	case 16:
		goto loc_824EAAA4;
	case 17:
		goto loc_824EAAA4;
	case 18:
		goto loc_824EA640;
	case 19:
		goto loc_824EAAA4;
	case 20:
		goto loc_824EAAA4;
	case 21:
		goto loc_824EA5AC;
	case 22:
		goto loc_824EAAA4;
	case 23:
		goto loc_824EAAA4;
	case 24:
		goto loc_824EAAA4;
	case 25:
		goto loc_824EAAA4;
	case 26:
		goto loc_824EAAA4;
	case 27:
		goto loc_824EAAA4;
	case 28:
		goto loc_824EAAA4;
	case 29:
		goto loc_824EAAA4;
	case 30:
		goto loc_824EAAA4;
	case 31:
		goto loc_824EA654;
	case 32:
		goto loc_824EAAA4;
	case 33:
		goto loc_824EAAA4;
	case 34:
		goto loc_824EAAA4;
	case 35:
		goto loc_824EAAA4;
	case 36:
		goto loc_824EA40C;
	case 37:
		goto loc_824EA40C;
	case 38:
		goto loc_824EA444;
	case 39:
		goto loc_824EA868;
	case 40:
		goto loc_824EA490;
	case 41:
		goto loc_824EA594;
	case 42:
		goto loc_824EAAA4;
	case 43:
		goto loc_824EA40C;
	case 44:
		goto loc_824EAAA4;
	case 45:
		goto loc_824EA668;
	case 46:
		goto loc_824EAAA4;
	case 47:
		goto loc_824EAAA4;
	case 48:
		goto loc_824EAAA4;
	case 49:
		goto loc_824EAAA4;
	case 50:
		goto loc_824EAAA4;
	case 51:
		goto loc_824EA428;
	case 52:
		goto loc_824EAAA4;
	case 53:
		goto loc_824EA67C;
	case 54:
		goto loc_824EAAA4;
	case 55:
		goto loc_824EAAA4;
	case 56:
		goto loc_824EA738;
	case 57:
		goto loc_824EAAA4;
	case 58:
		goto loc_824EAAA4;
	case 59:
		goto loc_824EAAA4;
	case 60:
		goto loc_824EA71C;
	case 61:
		goto loc_824EA498;
	case 62:
		goto loc_824EA76C;
	case 63:
		goto loc_824EAAA4;
	case 64:
		goto loc_824EAAA4;
	case 65:
		goto loc_824EA5E4;
	case 66:
		goto loc_824EAAA4;
	case 67:
		goto loc_824EAAA4;
	case 68:
		goto loc_824EA788;
	case 69:
		goto loc_824EA7C4;
	case 70:
		goto loc_824EA67C;
	case 71:
		goto loc_824EA7E0;
	case 72:
		goto loc_824EAAA4;
	case 73:
		goto loc_824EAAA4;
	case 74:
		goto loc_824EAAA4;
	case 75:
		goto loc_824EA7F8;
	case 76:
		goto loc_824EAAA4;
	case 77:
		goto loc_824EA80C;
	case 78:
		goto loc_824EAAA4;
	case 79:
		goto loc_824EAAA4;
	case 80:
		goto loc_824EAAA4;
	case 81:
		goto loc_824EAAA4;
	case 82:
		goto loc_824EAAA4;
	case 83:
		goto loc_824EAAA4;
	case 84:
		goto loc_824EAAA4;
	case 85:
		goto loc_824EA820;
	case 86:
		goto loc_824EA830;
	case 87:
		goto loc_824EAAA4;
	case 88:
		goto loc_824EA844;
	case 89:
		goto loc_824EAAA4;
	case 90:
		goto loc_824EA858;
	case 91:
		goto loc_824EAAA4;
	case 92:
		goto loc_824EA5CC;
	case 93:
		goto loc_824EA5CC;
	case 94:
		goto loc_824EA40C;
	case 95:
		goto loc_824EA40C;
	case 96:
		goto loc_824EA40C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_824EA40C:
	// li r7,13303
	ctx.r7.s64 = 13303;
loc_824EA410:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824EA424;
	sub_82428090(ctx, base);
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA428:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e4e60
	ctx.lr = 0x824EA438;
	sub_824E4E60(ctx, base);
loc_824EA438:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824EA43C:
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA444:
	// li r10,110
	ctx.r10.s64 = 110;
loc_824EA448:
	// lwz r9,28(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,23360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,23360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r10,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x824eab38
	goto loc_824EAB38;
loc_824EA490:
	// li r10,111
	ctx.r10.s64 = 111;
	// b 0x824ea448
	goto loc_824EA448;
loc_824EA498:
	// lwz r29,28(r18)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r18.u32 + 28);
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r19,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r19.u16);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r26,16,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x1FFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r8,23364(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 23364);
	// sth r8,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// beq cr6,0x824ea534
	if (ctx.cr6.eq) goto loc_824EA534;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824ea528
	if (ctx.cr6.eq) goto loc_824EA528;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ea520
	if (ctx.cr6.eq) goto loc_824EA520;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824ea518
	if (ctx.cr6.eq) goto loc_824EA518;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,8003
	ctx.r7.s64 = 8003;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824EA50C;
	sub_82428090(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r22,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x824ea52c
	goto loc_824EA52C;
loc_824EA518:
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x824ea52c
	goto loc_824EA52C;
loc_824EA520:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x824ea52c
	goto loc_824EA52C;
loc_824EA528:
	// li r11,4
	ctx.r11.s64 = 4;
loc_824EA52C:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x824ea538
	goto loc_824EA538;
loc_824EA534:
	// stw r22,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_824EA538:
	// lwz r10,23360(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 23360);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,23360(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 23360);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
loc_824EA564:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824eab38
	goto loc_824EAB38;
loc_824EA570:
	// li r10,112
	ctx.r10.s64 = 112;
	// b 0x824ea448
	goto loc_824EA448;
loc_824EA578:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e5060
	ctx.lr = 0x824EA588;
	sub_824E5060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824EA58C:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA594:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e52f0
	ctx.lr = 0x824EA5A4;
	sub_824E52F0(ctx, base);
loc_824EA5A4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824eab38
	goto loc_824EAB38;
loc_824EA5AC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e7210
	ctx.lr = 0x824EA5C0;
	sub_824E7210(ctx, base);
loc_824EA5C0:
	// lwz r23,80(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA5CC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e8fa0
	ctx.lr = 0x824EA5E0;
	sub_824E8FA0(ctx, base);
	// b 0x824ea5c0
	goto loc_824EA5C0;
loc_824EA5E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e5bc0
	ctx.lr = 0x824EA5F8;
	sub_824E5BC0(ctx, base);
	// b 0x824ea5c0
	goto loc_824EA5C0;
loc_824EA5FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824e0ba0
	ctx.lr = 0x824EA608;
	sub_824E0BA0(ctx, base);
	// b 0x824ea5a4
	goto loc_824EA5A4;
loc_824EA60C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e0d40
	ctx.lr = 0x824EA61C;
	sub_824E0D40(ctx, base);
	// b 0x824ea438
	goto loc_824EA438;
loc_824EA620:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e8bb0
	ctx.lr = 0x824EA634;
	sub_824E8BB0(ctx, base);
loc_824EA634:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r23,5
	ctx.r23.s64 = ctx.r23.s64 + 5;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA640:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e10f0
	ctx.lr = 0x824EA650;
	sub_824E10F0(ctx, base);
	// b 0x824ea438
	goto loc_824EA438;
loc_824EA654:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e14c0
	ctx.lr = 0x824EA664;
	sub_824E14C0(ctx, base);
	// b 0x824ea634
	goto loc_824EA634;
loc_824EA668:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e1918
	ctx.lr = 0x824EA678;
	sub_824E1918(ctx, base);
	// b 0x824ea634
	goto loc_824EA634;
loc_824EA67C:
	// rlwimi r26,r19,0,16,31
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF0000);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// rlwinm. r9,r30,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824ea6ac
	if (ctx.cr0.eq) goto loc_824EA6AC;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824EA6AC:
	// rlwinm. r10,r30,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ea6c0
	if (ctx.cr0.eq) goto loc_824EA6C0;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824EA6C0:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm. r10,r29,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ea6dc
	if (ctx.cr0.eq) goto loc_824EA6DC;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824EA6DC:
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm. r9,r29,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824ea6f0
	if (ctx.cr0.eq) goto loc_824EA6F0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824EA6F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x824ea708
	if (ctx.cr6.eq) goto loc_824EA708;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EA708:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824eab38
	if (ctx.cr6.eq) goto loc_824EAB38;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x824eab38
	goto loc_824EAB38;
loc_824EA71C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e27a0
	ctx.lr = 0x824EA72C;
	sub_824E27A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r23,6
	ctx.r23.s64 = ctx.r23.s64 + 6;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA738:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e1e30
	ctx.lr = 0x824EA748;
	sub_824E1E30(ctx, base);
	// lwz r11,28(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824ea764
	if (ctx.cr6.eq) goto loc_824EA764;
	// addi r23,r23,10
	ctx.r23.s64 = ctx.r23.s64 + 10;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA764:
	// addi r23,r23,9
	ctx.r23.s64 = ctx.r23.s64 + 9;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA76C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e2bd0
	ctx.lr = 0x824EA77C;
	sub_824E2BD0(ctx, base);
loc_824EA77C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824EA780:
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA788:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824e2ec8
	ctx.lr = 0x824EA794;
	sub_824E2EC8(ctx, base);
	// rlwinm r11,r26,16,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x1FFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824ea58c
	if (ctx.cr6.lt) goto loc_824EA58C;
	// beq cr6,0x824ea780
	if (ctx.cr6.eq) goto loc_824EA780;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824ea58c
	if (ctx.cr6.lt) goto loc_824EA58C;
	// beq cr6,0x824ea780
	if (ctx.cr6.eq) goto loc_824EA780;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x824ea43c
	if (ctx.cr6.lt) goto loc_824EA43C;
	// li r7,13445
	ctx.r7.s64 = 13445;
	// b 0x824ea410
	goto loc_824EA410;
loc_824EA7C4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e3348
	ctx.lr = 0x824EA7D4;
	sub_824E3348(ctx, base);
loc_824EA7D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA7E0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r5,r11,23224
	ctx.r5.s64 = ctx.r11.s64 + 23224;
	// bl 0x824e6bc0
	ctx.lr = 0x824EA7F4;
	sub_824E6BC0(ctx, base);
	// b 0x824eab3c
	goto loc_824EAB3C;
loc_824EA7F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e38a0
	ctx.lr = 0x824EA808;
	sub_824E38A0(ctx, base);
	// b 0x824ea77c
	goto loc_824EA77C;
loc_824EA80C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e3c98
	ctx.lr = 0x824EA81C;
	sub_824E3C98(ctx, base);
	// b 0x824ea77c
	goto loc_824EA77C;
loc_824EA820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824e3ec8
	ctx.lr = 0x824EA82C;
	sub_824E3EC8(ctx, base);
	// b 0x824ea5a4
	goto loc_824EA5A4;
loc_824EA830:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e4118
	ctx.lr = 0x824EA840;
	sub_824E4118(ctx, base);
	// b 0x824ea77c
	goto loc_824EA77C;
loc_824EA844:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e43f0
	ctx.lr = 0x824EA854;
	sub_824E43F0(ctx, base);
	// b 0x824ea7d4
	goto loc_824EA7D4;
loc_824EA858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824e4cf8
	ctx.lr = 0x824EA864;
	sub_824E4CF8(ctx, base);
	// b 0x824ea5a4
	goto loc_824EA5A4;
loc_824EA868:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824ea92c
	if (!ctx.cr6.eq) goto loc_824EA92C;
	// li r4,163
	ctx.r4.s64 = 163;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// bl 0x8242d998
	ctx.lr = 0x824EA888;
	sub_8242D998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824ea92c
	if (ctx.cr0.eq) goto loc_824EA92C;
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20896(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20896);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824ea930
	if (ctx.cr6.eq) goto loc_824EA930;
	// li r4,165
	ctx.r4.s64 = 165;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// bl 0x8242d998
	ctx.lr = 0x824EA8AC;
	sub_8242D998(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,169
	ctx.r4.s64 = 169;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8242d998
	ctx.lr = 0x824EA8C0;
	sub_8242D998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824ea8e8
	if (ctx.cr6.eq) goto loc_824EA8E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r11,28316
	ctx.r5.s64 = ctx.r11.s64 + 28316;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,13526
	ctx.r7.s64 = 13526;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824EA8E8;
	sub_82428090(ctx, base);
loc_824EA8E8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x824ea8f8
	if (ctx.cr6.eq) goto loc_824EA8F8;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x824ea914
	if (!ctx.cr6.eq) goto loc_824EA914;
loc_824EA8F8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r11,28232
	ctx.r5.s64 = ctx.r11.s64 + 28232;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,13527
	ctx.r7.s64 = 13527;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824EA914;
	sub_82428090(ctx, base);
loc_824EA914:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824e9728
	ctx.lr = 0x824EA920;
	sub_824E9728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,3
	ctx.r23.s64 = 3;
	// b 0x824ea930
	goto loc_824EA930;
loc_824EA92C:
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824EA930:
	// lwz r11,16776(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824eaa04
	if (ctx.cr6.eq) goto loc_824EAA04;
	// addi r30,r29,16768
	ctx.r30.s64 = ctx.r29.s64 + 16768;
loc_824EA940:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ea98c
	if (ctx.cr6.eq) goto loc_824EA98C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r3,0(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EA98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EA98C:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// rlwimi r6,r19,0,3,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1FFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFE0000000);
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwimi r7,r10,16,10,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r7.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// andis. r7,r7,65471
	ctx.r7.u64 = ctx.r7.u64 & 4290707456;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// andis. r10,r10,65284
	ctx.r10.u64 = ctx.r10.u64 & 4278452224;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r6,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// rlwinm r8,r8,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,16776(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ea940
	if (!ctx.cr6.eq) goto loc_824EA940;
loc_824EAA04:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824eab3c
	if (ctx.cr6.eq) goto loc_824EAB3C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20384(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20384);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824eaa28
	if (!ctx.cr6.eq) goto loc_824EAA28;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,20384(r11)
	REX_STORE_U32(ctx.r11.u32 + 20384, ctx.r10.u32);
loc_824EAA28:
	// sth r19,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r19.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r9,17,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r22,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r22.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r22,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,13107
	ctx.r10.u64 = ctx.r10.u64 | 13107;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r22,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r22.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,13107
	ctx.r10.u64 = ctx.r10.u64 | 13107;
	// b 0x824ea564
	goto loc_824EA564;
loc_824EAAA4:
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r10,456
	ctx.r10.s64 = ctx.r10.s64 + 456;
	// rlwinm. r8,r30,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// beq 0x824eaad8
	if (ctx.cr0.eq) goto loc_824EAAD8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EAAD8:
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824eaaec
	if (ctx.cr0.eq) goto loc_824EAAEC;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EAAEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824eab38
	if (ctx.cr6.eq) goto loc_824EAB38;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824EAAFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// beq 0x824eab1c
	if (ctx.cr0.eq) goto loc_824EAB1C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EAB1C:
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824eab30
	if (ctx.cr0.eq) goto loc_824EAB30;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824EAB30:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824eaafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824EAAFC;
loc_824EAB38:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_824EAB3C:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824eab68
	if (ctx.cr0.eq) goto loc_824EAB68;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x824e6a00
	ctx.lr = 0x824EAB64;
	sub_824E6A00(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_824EAB68:
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,412(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252308C) {
	REX_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82543338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82543340;
	__savegprlr_28(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,2208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2208));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,15984
	ctx.r30.s64 = ctx.r11.s64 + 15984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82540670
	ctx.lr = 0x82543360;
	sub_82540670(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,180(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 180);
	// bl 0x82543c98
	ctx.lr = 0x82543374;
	sub_82543C98(ctx, base);
	// lhz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8253d8b0
	ctx.lr = 0x82543398;
	sub_8253D8B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82543448
	if (!ctx.cr6.eq) goto loc_82543448;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fc80
	ctx.lr = 0x825433C0;
	sub_8253FC80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82543448
	if (!ctx.cr6.eq) goto loc_82543448;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82543430
	if (ctx.cr6.eq) goto loc_82543430;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r30,1368(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 1368);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcce0
	ctx.lr = 0x82543430;
	sub_822DCCE0(ctx, base);
loc_82543430:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82543fe0
	ctx.lr = 0x82543444;
	sub_82543FE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82543448:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8255DFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8255DFE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r8,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r5,3784(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r10,3792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r8,3780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r9,3796(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 3796);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r31,272(r19)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r19.u32 + 272);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r28,1312(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,3812(r19)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r19.u32 + 3812);
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r20,r25,20
	ctx.r20.s64 = ctx.r25.s64 + 20;
	// bne cr6,0x8255e068
	if (!ctx.cr6.eq) goto loc_8255E068;
	// lwz r11,22264(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 22264);
	// stw r11,20(r25)
	REX_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// lwz r10,22276(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 22276);
	// stw r10,24(r25)
	REX_STORE_U32(ctx.r25.u32 + 24, ctx.r10.u32);
	// lwz r9,22268(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 22268);
	// stw r9,28(r25)
	REX_STORE_U32(ctx.r25.u32 + 28, ctx.r9.u32);
	// lwz r8,22280(r19)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r19.u32 + 22280);
	// stw r8,32(r25)
	REX_STORE_U32(ctx.r25.u32 + 32, ctx.r8.u32);
	// b 0x8255e094
	goto loc_8255E094;
loc_8255E068:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r9,20(r25)
	REX_STORE_U32(ctx.r25.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,24(r25)
	REX_STORE_U32(ctx.r25.u32 + 24, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,28(r25)
	REX_STORE_U32(ctx.r25.u32 + 28, ctx.r6.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,32(r25)
	REX_STORE_U32(ctx.r25.u32 + 32, ctx.r11.u32);
loc_8255E094:
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r11,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r11.u32);
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// stw r10,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r10.u32);
	// lwz r9,1164(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1164);
	// stw r9,44(r25)
	REX_STORE_U32(ctx.r25.u32 + 44, ctx.r9.u32);
	// lhz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// lhz r9,74(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 74);
	// lhz r6,50(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 50);
	// rlwinm r21,r6,31,1,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r21,r7
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r6,r9,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r23,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x8255e618
	if (!ctx.cr6.lt) goto loc_8255E618;
	// li r15,16
	ctx.r15.s64 = 16;
	// li r14,32
	ctx.r14.s64 = 32;
	// li r16,96
	ctx.r16.s64 = 96;
	// li r17,112
	ctx.r17.s64 = 112;
loc_8255E13C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,92(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x8255e5a4
	if (ctx.cr6.eq) goto loc_8255E5A4;
loc_8255E16C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r6,0,21,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// beq cr6,0x8255e55c
	if (ctx.cr6.eq) goto loc_8255E55C;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// rldicl r9,r11,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// rlwinm r6,r6,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r27,8
	ctx.r8.s64 = ctx.r27.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// clrlwi r21,r9,26
	ctx.r21.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r10,74(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8255e1ec
	if (ctx.cr6.eq) goto loc_8255E1EC;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// b 0x8255e1f4
	goto loc_8255E1F4;
loc_8255E1EC:
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
loc_8255E1F4:
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// lis r7,-32157
	ctx.r7.s64 = -2107441152;
	// lwz r8,-8812(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -8812);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x8255e354
	if (ctx.cr6.gt) goto loc_8255E354;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7636
	ctx.r12.s64 = ctx.r12.s64 + -7636;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_8255E254;
	case 1:
		goto loc_8255E2A8;
	case 2:
		goto loc_8255E2FC;
	case 3:
		goto loc_8255E304;
	case 4:
		goto loc_8255E354;
	case 5:
		goto loc_8255E354;
	case 6:
		goto loc_8255E354;
	case 7:
		goto loc_8255E354;
	case 8:
		goto loc_8255E254;
	case 9:
		goto loc_8255E2A8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8255E254:
	// addi r11,r27,128
	ctx.r11.s64 = ctx.r27.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x8255e354
	goto loc_8255E354;
loc_8255E2A8:
	// addi r11,r9,128
	ctx.r11.s64 = ctx.r9.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x8255e354
	goto loc_8255E354;
loc_8255E2FC:
	// addi r10,r23,128
	ctx.r10.s64 = ctx.r23.s64 + 128;
	// b 0x8255e308
	goto loc_8255E308;
loc_8255E304:
	// addi r10,r22,128
	ctx.r10.s64 = ctx.r22.s64 + 128;
loc_8255E308:
	// dcbt r0,r10
	// dcbt r11,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r10
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_8255E354:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,-8812(r7)
	REX_STORE_U32(ctx.r7.u32 + -8812, ctx.r11.u32);
loc_8255E370:
	// clrlwi r10,r21,31
	ctx.r10.u64 = ctx.r21.u32 & 0x1;
	// rldicl r9,r26,20,44
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 20) & 0xFFFFF;
	// srawi r24,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r28.s32 >> 2;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255e540
	if (ctx.cr6.eq) goto loc_8255E540;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255e4d4
	if (!ctx.cr6.eq) goto loc_8255E4D4;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// lwz r4,444(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// stw r3,24(r25)
	REX_STORE_U32(ctx.r25.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8255e3e4
	if (ctx.cr6.lt) goto loc_8255E3E4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc648
	ctx.lr = 0x8255E3DC;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8255e44c
	goto loc_8255E44C;
loc_8255E3E4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8255e448
	if (!ctx.cr6.gt) goto loc_8255E448;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8255E3F0:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r15,r3,24,8,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r15,r7
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r15,r10,r4
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r14,r15,r5
	ctx.r14.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r5.u32);
	// rotlwi r15,r15,1
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// or r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 | ctx.r9.u64;
	// sthx r8,r15,r31
	REX_STORE_U16(ctx.r15.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x8255e3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255E3F0;
	// li r14,32
	ctx.r14.s64 = 32;
	// li r15,16
	ctx.r15.s64 = 16;
loc_8255E448:
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8255E44C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8255e4c4
	if (!ctx.cr6.eq) goto loc_8255E4C4;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r15
	ea = (ctx.r31.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r14
	ea = (ctx.r31.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (ctx.r31.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (ctx.r31.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8255e518
	goto loc_8255E518;
loc_8255E4C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f0f0
	ctx.lr = 0x8255E4D0;
	sub_8255F0F0(ctx, base);
	// b 0x8255e518
	goto loc_8255E518;
loc_8255E4D4:
	// rldicl r10,r26,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8255E518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255E518:
	// lwz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 960);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x8255E540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255E540:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r21,r21,31,1,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r26,r26,8,55
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x8255e370
	if (ctx.cr6.lt) goto loc_8255E370;
	// lwz r21,128(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8255E55C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// cmplw cr6,r18,r21
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8255e16c
	if (ctx.cr6.lt) goto loc_8255E16C;
loc_8255E5A4:
	// lwz r11,232(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 232);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,228(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 228);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// blt cr6,0x8255e13c
	if (ctx.cr6.lt) goto loc_8255E13C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8255E618:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82569D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82569D40;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-64
	ctx.r28.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v8,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r30,r10,r6
	ctx.r30.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v6,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v7,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v5,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v4,v8,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vslh v26,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v3,v7,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v21,v25,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v20,v24,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v19,v23,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v15,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v7,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vpkshus128 v54,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r29,-80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-64(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r27,-56(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r28,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r27,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u32);
	// bne cr6,0x82569ea4
	if (!ctx.cr6.eq) goto loc_82569EA4;
	// lwz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-68(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r28,-60(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r27,-52(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82569EA4:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82569ff4
	if (!ctx.cr6.eq) goto loc_82569FF4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v47,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v46,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v7,v10,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v6,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v5,v0,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vslh v26,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v4,v8,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vslh v24,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v21,v25,v6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v24,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v19,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v16,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v12,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v10,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v8,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v7,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v45,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// stvx128 v44,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r4,-76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-64(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r3,r5,r31
	ea = ctx.r5.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// lwz r3,-52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r8,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r9,-72(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stwux r7,r10,r31
	ea = ctx.r10.u32 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stwx r9,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82569FF4:
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258B0B0) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,640
	ctx.r31.s64 = ctx.r11.s64 + 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82203a90
	ctx.lr = 0x8258B0D8;
	sub_82203A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2888
	ctx.r4.s64 = ctx.r11.s64 + 2888;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82203350
	ctx.lr = 0x8258B0EC;
	sub_82203350(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82203a90
	ctx.lr = 0x8258B0FC;
	sub_82203A90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r10,1044(r31)
	REX_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8258B398) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-13288
	ctx.r31.s64 = ctx.r11.s64 + -13288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82203a90
	ctx.lr = 0x8258B3C0;
	sub_82203A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2888
	ctx.r4.s64 = ctx.r11.s64 + 2888;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82203350
	ctx.lr = 0x8258B3D4;
	sub_82203350(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82203a90
	ctx.lr = 0x8258B3E4;
	sub_82203A90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	REX_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

