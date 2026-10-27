#include "mmpps_funcs.16.h"

DEFINE_REX_FUNC(sub_82102970) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22064
	ctx.r9.s64 = ctx.r10.s64 + 22064;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,716(r9)
	REX_STORE_U32(ctx.r9.u32 + 716, ctx.r10.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210A868) {
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
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210a8a4
	if (ctx.cr6.eq) goto loc_8210A8A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210A89C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8210A8A4:
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

DEFINE_REX_FUNC(sub_8210D7A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8210d7d0
	if (!ctx.cr6.eq) goto loc_8210D7D0;
	// bl 0x82135d68
	ctx.lr = 0x8210D7D0;
	sub_82135D68(ctx, base);
loc_8210D7D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x8210d870
	if (ctx.cr6.eq) goto loc_8210D870;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x8210d858
	if (ctx.cr6.eq) goto loc_8210D858;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x8210d844
	if (ctx.cr6.eq) goto loc_8210D844;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8210d82c
	if (ctx.cr6.eq) goto loc_8210D82C;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x8210d814
	if (ctx.cr6.eq) goto loc_8210D814;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x8210d87c
	if (!ctx.cr6.eq) goto loc_8210D87C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
	// b 0x8210d834
	goto loc_8210D834;
loc_8210D814:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,19304
	ctx.r11.s64 = ctx.r11.s64 + 19304;
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8210d87c
	goto loc_8210D87C;
loc_8210D82C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19376
	ctx.r11.s64 = ctx.r11.s64 + 19376;
loc_8210D834:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x8210d87c
	goto loc_8210D87C;
loc_8210D844:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19256
	ctx.r11.s64 = ctx.r11.s64 + 19256;
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8210d87c
	goto loc_8210D87C;
loc_8210D858:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x8210d87c
	goto loc_8210D87C;
loc_8210D870:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19448
	ctx.r11.s64 = ctx.r11.s64 + 19448;
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
loc_8210D87C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82124510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82124518;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r10,1840
	ctx.r28.s64 = ctx.r10.s64 + 1840;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,6008(r3)
	REX_STORE_U32(ctx.r3.u32 + 6008, ctx.r30.u32);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r30,6012(r31)
	REX_STORE_U32(ctx.r31.u32 + 6012, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,56(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,6016(r31)
	REX_STORE_U32(ctx.r31.u32 + 6016, ctx.r10.u32);
	// stfs f31,6024(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6024, temp.u32);
	// stw r30,6020(r31)
	REX_STORE_U32(ctx.r31.u32 + 6020, ctx.r30.u32);
	// lwz r3,-30020(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30020);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212456C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,6004(r31)
	REX_STORE_U32(ctx.r31.u32 + 6004, ctx.r3.u32);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lfs f1,364(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-30012(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30012);
	// lwz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82124594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821245A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// lfs f30,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821245C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,796(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 796);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821245E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82124618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212463C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82124654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6004(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6004);
	// lfs f1,696(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 696);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212466C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f30,6028(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 6028, temp.u32);
	// addi r10,r31,5988
	ctx.r10.s64 = ctx.r31.s64 + 5988;
	// stfs f31,6032(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6032, temp.u32);
	// stfs f31,6036(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6036, temp.u32);
	// stfs f31,6040(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6040, temp.u32);
	// stfs f31,6044(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6044, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f30,6048(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 6048, temp.u32);
	// stfs f31,6052(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6052, temp.u32);
	// stfs f31,6056(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6056, temp.u32);
	// stfs f31,6060(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6060, temp.u32);
	// stfs f31,6064(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6064, temp.u32);
	// stfs f30,6068(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 6068, temp.u32);
	// stfs f31,6072(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6072, temp.u32);
	// stfs f31,6076(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6076, temp.u32);
	// stfs f31,6080(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6080, temp.u32);
	// stfs f31,6084(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6084, temp.u32);
	// stfs f30,6088(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 6088, temp.u32);
loc_821246B8:
	// stwu r30,124(r10)
	ea = 124 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821246b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821246B8;
	// li r11,20
	ctx.r11.s64 = 20;
	// stfs f31,6104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 6104, temp.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// stw r30,6092(r31)
	REX_STORE_U32(ctx.r31.u32 + 6092, ctx.r30.u32);
	// stw r11,6096(r31)
	REX_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// stw r30,6100(r31)
	REX_STORE_U32(ctx.r31.u32 + 6100, ctx.r30.u32);
	// stw r10,6108(r31)
	REX_STORE_U32(ctx.r31.u32 + 6108, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82139A88) {
	REX_FUNC_PROLOGUE();
	// stb r4,69(r3)
	REX_STORE_U8(ctx.r3.u32 + 69, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139AA8) {
	REX_FUNC_PROLOGUE();
	// stb r4,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139AC8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139AE8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,69(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 69);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139B10) {
	REX_FUNC_PROLOGUE();
	// lbz r3,74(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 74);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139CC0) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139cec
	if (!ctx.cr6.eq) goto loc_82139CEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82139d4c
	goto loc_82139D4C;
loc_82139CEC:
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 544);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82139d48
	if (!ctx.cr6.eq) goto loc_82139D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139D10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139d34
	if (ctx.cr6.eq) goto loc_82139D34;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r10,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82139D34:
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82139D48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82139D4C:
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

DEFINE_REX_FUNC(sub_8213BDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8213BDC0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BDDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r28,-32156
	ctx.r28.s64 = -2107375616;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-30012(r9)
	REX_STORE_U32(ctx.r9.u32 + -30012, ctx.r11.u32);
	// stw r30,-30020(r28)
	REX_STORE_U32(ctx.r28.u32 + -30020, ctx.r30.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BE04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r8,r11,21804
	ctx.r8.s64 = ctx.r11.s64 + 21804;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-30008(r9)
	REX_STORE_U32(ctx.r9.u32 + -30008, ctx.r11.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x8213e498
	ctx.lr = 0x8213BE28;
	sub_8213E498(ctx, base);
	// lis r31,-32156
	ctx.r31.s64 = -2107375616;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30016(r31)
	REX_STORE_U32(ctx.r31.u32 + -30016, ctx.r3.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BE48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BE60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BE78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BEC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,-20080
	ctx.r4.s64 = ctx.r11.s64 + -20080;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r26,r11,1840
	ctx.r26.s64 = ctx.r11.s64 + 1840;
	// addi r4,r10,-20704
	ctx.r4.s64 = ctx.r10.s64 + -20704;
	// lfs f31,1840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-20912
	ctx.r4.s64 = ctx.r11.s64 + -20912;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-20808
	ctx.r4.s64 = ctx.r11.s64 + -20808;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r24,-32156
	ctx.r24.s64 = -2107375616;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r27,r11,-19872
	ctx.r27.s64 = ctx.r11.s64 + -19872;
	// addi r29,r10,-22328
	ctx.r29.s64 = ctx.r10.s64 + -22328;
	// lwz r11,-30004(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -30004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213c0ec
	if (!ctx.cr6.eq) goto loc_8213C0EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213ba80
	ctx.lr = 0x8213BFB0;
	sub_8213BA80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82136200
	ctx.lr = 0x8213BFBC;
	sub_82136200(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82136410
	ctx.lr = 0x8213BFC4;
	sub_82136410(ctx, base);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213BFE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r25,r9,31604
	ctx.r25.s64 = ctx.r9.s64 + 31604;
	// stw r10,31604(r9)
	REX_STORE_U32(ctx.r9.u32 + 31604, ctx.r10.u32);
	// addi r4,r8,-392
	ctx.r4.s64 = ctx.r8.s64 + -392;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r3,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-372
	ctx.r4.s64 = ctx.r10.s64 + -372;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r3,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-352
	ctx.r4.s64 = ctx.r10.s64 + -352;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r3,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-332
	ctx.r4.s64 = ctx.r10.s64 + -332;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C07C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r3.u32);
	// bl 0x8213b1e0
	ctx.lr = 0x8213C084;
	sub_8213B1E0(ctx, base);
	// lwz r3,-30020(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30020);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-6832
	ctx.r6.s64 = ctx.r11.s64 + -6832;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,768(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 768);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r11,-11696
	ctx.r23.s64 = ctx.r11.s64 + -11696;
loc_8213C0B8:
	// lwz r3,-30020(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30020);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r6,732
	ctx.r6.s64 = 732;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8213c0b8
	if (ctx.cr6.lt) goto loc_8213C0B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-30004(r24)
	REX_STORE_U32(ctx.r24.u32 + -30004, ctx.r11.u32);
loc_8213C0EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82135c68
	ctx.lr = 0x8213C10C;
	sub_82135C68(ctx, base);
	// lwz r3,-30016(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// stw r3,100(r29)
	REX_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,104(r29)
	REX_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// stfs f0,108(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 108, temp.u32);
	// stw r11,96(r29)
	REX_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// stfs f0,112(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// stfs f0,116(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// stfs f13,92(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// bl 0x8213d7b8
	ctx.lr = 0x8213C164;
	sub_8213D7B8(ctx, base);
	// lwz r11,-30016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -30016);
	// stw r3,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821515E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821515F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151658
	if (!ctx.cr6.eq) goto loc_82151658;
	// lwz r11,8784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151640
	if (ctx.cr6.eq) goto loc_82151640;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,8784(r3)
	REX_STORE_U32(ctx.r3.u32 + 8784, ctx.r29.u32);
	// stw r9,8780(r3)
	REX_STORE_U32(ctx.r3.u32 + 8780, ctx.r9.u32);
loc_82151620:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r10,r11,-17864
	ctx.r10.s64 = ctx.r11.s64 + -17864;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r31,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r31.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r29,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r29.u32);
	// b 0x821517b8
	goto loc_821517B8;
loc_82151640:
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821517d0
	if (ctx.cr6.eq) goto loc_821517D0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// b 0x82151620
	goto loc_82151620;
loc_82151658:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821516ec
	if (!ctx.cr6.eq) goto loc_821516EC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r27,r31,564
	ctx.r27.s64 = ctx.r31.s64 + 564;
	// addi r30,r11,-17864
	ctx.r30.s64 = ctx.r11.s64 + -17864;
loc_8215167C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821516d8
	if (!ctx.cr6.eq) goto loc_821516D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821516d8
	if (ctx.cr6.eq) goto loc_821516D8;
	// stw r29,8784(r31)
	REX_STORE_U32(ctx.r31.u32 + 8784, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,8780(r31)
	REX_STORE_U32(ctx.r31.u32 + 8780, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r28,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// lwz r3,9116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 9116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821516D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821516D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,288
	ctx.r27.s64 = ctx.r27.s64 + 288;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8215167c
	if (ctx.cr6.lt) goto loc_8215167C;
	// b 0x821517d0
	goto loc_821517D0;
loc_821516EC:
	// lwz r3,344(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r28,288
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(288));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151720
	if (!ctx.cr6.eq) goto loc_82151720;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82151720:
	// lwz r3,344(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// addi r11,r30,544
	ctx.r11.s64 = ctx.r30.s64 + 544;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82151748
	if (ctx.cr6.eq) goto loc_82151748;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82151748:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r11,-17864
	ctx.r30.s64 = ctx.r11.s64 + -17864;
	// beq cr6,0x8215178c
	if (ctx.cr6.eq) goto loc_8215178C;
	// stw r29,8784(r31)
	REX_STORE_U32(ctx.r31.u32 + 8784, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,8780(r31)
	REX_STORE_U32(ctx.r31.u32 + 8780, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// stw r29,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// lwz r3,9116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 9116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215178C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215178C:
	// lwz r11,8784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821517d0
	if (ctx.cr6.eq) goto loc_821517D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,8784(r31)
	REX_STORE_U32(ctx.r31.u32 + 8784, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8780(r31)
	REX_STORE_U32(ctx.r31.u32 + 8780, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r29,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
loc_821517B8:
	// lwz r3,9116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 9116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821517D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821517D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82156DB0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82156DC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,440(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r10,436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157008) {
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
	// addi r11,r11,4704
	ctx.r11.s64 = ctx.r11.s64 + 4704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,148(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215703c
	if (ctx.cr6.eq) goto loc_8215703C;
	// bl 0x822031b0
	ctx.lr = 0x8215703C;
	sub_822031B0(ctx, base);
loc_8215703C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215705c
	if (ctx.cr6.eq) goto loc_8215705C;
	// bl 0x822031b0
	ctx.lr = 0x8215705C;
	sub_822031B0(ctx, base);
loc_8215705C:
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_82157F68) {
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
	// lis r31,-32156
	ctx.r31.s64 = -2107375616;
	// lwz r3,-29964(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -29964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82157fc0
	if (!ctx.cr6.eq) goto loc_82157FC0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x821f9368
	ctx.lr = 0x82157F90;
	sub_821F9368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157fb8
	if (ctx.cr0.eq) goto loc_82157FB8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,5020
	ctx.r10.s64 = ctx.r10.s64 + 5020;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82157fbc
	goto loc_82157FBC;
loc_82157FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82157FBC:
	// stw r3,-29964(r31)
	REX_STORE_U32(ctx.r31.u32 + -29964, ctx.r3.u32);
loc_82157FC0:
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

DEFINE_REX_FUNC(sub_82158CE0) {
	REX_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,35800
	ctx.r10.u64 = ctx.r10.u64 | 35800;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82158F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
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

DEFINE_REX_FUNC(sub_82159D68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82159D70;
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
	ctx.lr = 0x82159D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,308(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 308);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r31,r30,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x82159DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215A5D0) {
	REX_FUNC_PROLOGUE();
	// stw r4,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215A608) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215AB90) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215abb8
	if (!ctx.cr6.eq) goto loc_8215ABB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215abe8
	goto loc_8215ABE8;
loc_8215ABB8:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215ABCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,28(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bctrl 
	ctx.lr = 0x8215ABE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215ABE8:
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

DEFINE_REX_FUNC(sub_8215DF98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215dfb0
	if (ctx.cr6.eq) goto loc_8215DFB0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,35316
	ctx.r11.u64 = ctx.r11.u64 | 35316;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8215DFB0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,35320
	ctx.r11.u64 = ctx.r11.u64 | 35320;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215E5E8) {
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
	// bl 0x821566d0
	ctx.lr = 0x8215E5F8;
	sub_821566D0(ctx, base);
	// lwz r3,1968(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1968);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215EAC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82157b40
	ctx.lr = 0x8215EAE0;
	sub_82157B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215EAF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8215F440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8215F448;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8215ad80
	ctx.lr = 0x8215F458;
	sub_8215AD80(ctx, base);
	// addi r30,r3,172
	ctx.r30.s64 = ctx.r3.s64 + 172;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215F470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x8215f4a8
	if (ctx.cr6.gt) goto loc_8215F4A8;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82161750
	ctx.lr = 0x8215F4A8;
	sub_82161750(ctx, base);
loc_8215F4A8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215F4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82160238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82160240;
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
	// bne cr6,0x8216027c
	if (!ctx.cr6.eq) goto loc_8216027C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821602ac
	goto loc_821602AC;
loc_8216027C:
	// bl 0x8215ad80
	ctx.lr = 0x82160280;
	sub_8215AD80(ctx, base);
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// li r4,5
	ctx.r4.s64 = 5;
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
	ctx.lr = 0x821602AC;
	sub_8215A9D8(ctx, base);
loc_821602AC:
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

DEFINE_REX_FUNC(sub_821624D0) {
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
	// addi r11,r11,6812
	ctx.r11.s64 = ctx.r11.s64 + 6812;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821624fc
	if (ctx.cr0.eq) goto loc_821624FC;
	// bl 0x822031b0
	ctx.lr = 0x821624FC;
	sub_822031B0(ctx, base);
loc_821624FC:
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

DEFINE_REX_FUNC(sub_82163010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82163018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x82163030
	goto loc_82163030;
loc_82163028:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f3b80
	ctx.lr = 0x82163030;
	sub_821F3B80(ctx, base);
loc_82163030:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82163028
	if (!ctx.cr6.eq) goto loc_82163028;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// clrlwi. r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82163058
	if (ctx.cr0.eq) goto loc_82163058;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82163058:
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82163068
	if (ctx.cr6.lt) goto loc_82163068;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821630a0
	goto loc_821630A0;
loc_82163068:
	// subf r10,r11,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stb r8,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821f3b60
	ctx.lr = 0x8216308C;
	sub_821F3B60(ctx, base);
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
loc_821630A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82165298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// stfs f1,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stw r9,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f3,112(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f4,116(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165F50) {
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
	// bl 0x82203880
	ctx.lr = 0x82165F60;
	sub_82203880(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r10,1840
	ctx.r11.s64 = ctx.r10.s64 + 1840;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821678C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x821678D0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82204504
	ctx.lr = 0x821678D8;
	__savefpr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f28,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lfs f27,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfs f8,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82167940
	if (!ctx.cr6.eq) goto loc_82167940;
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bne cr6,0x82167938
	if (!ctx.cr6.eq) goto loc_82167938;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8216795c
	goto loc_8216795C;
loc_82167938:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8216795c
	goto loc_8216795C;
loc_82167940:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bne cr6,0x82167950
	if (!ctx.cr6.eq) goto loc_82167950;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8216795c
	goto loc_8216795C;
loc_82167950:
	// fcmpu cr6,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f29.f64);
	// bne cr6,0x82167e00
	if (!ctx.cr6.eq) goto loc_82167E00;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8216795C:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,-21708(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -21708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82167974
	if (!ctx.cr0.eq) goto loc_82167974;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_82167974:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82167984
	if (!ctx.cr0.eq) goto loc_82167984;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_82167984:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82167994
	if (!ctx.cr0.eq) goto loc_82167994;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_82167994:
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821679a4
	if (!ctx.cr0.eq) goto loc_821679A4;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_821679A4:
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821679b4
	if (!ctx.cr0.eq) goto loc_821679B4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_821679B4:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821679c4
	if (!ctx.cr0.eq) goto loc_821679C4;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_821679C4:
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821679d4
	if (!ctx.cr0.eq) goto loc_821679D4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_821679D4:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821679e4
	if (!ctx.cr0.eq) goto loc_821679E4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,-21708(r10)
	REX_STORE_U32(ctx.r10.u32 + -21708, ctx.r11.u32);
loc_821679E4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// addi r31,r11,1840
	ctx.r31.s64 = ctx.r11.s64 + 1840;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r3,-32155
	ctx.r3.s64 = -2107310080;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// lfs f31,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// stfs f13,-21740(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -21740, temp.u32);
	// addi r28,r11,-21740
	ctx.r28.s64 = ctx.r11.s64 + -21740;
	// stfs f31,-21724(r4)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r4.u32 + -21724, temp.u32);
	// addi r11,r4,-21724
	ctx.r11.s64 = ctx.r4.s64 + -21724;
	// lfs f11,172(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r10,-21772
	ctx.r27.s64 = ctx.r10.s64 + -21772;
	// lfs f0,208(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r9,-21788
	ctx.r26.s64 = ctx.r9.s64 + -21788;
	// lfs f7,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r8,-21804
	ctx.r25.s64 = ctx.r8.s64 + -21804;
	// stfs f0,-21756(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + -21756, temp.u32);
	// addi r30,r7,-21820
	ctx.r30.s64 = ctx.r7.s64 + -21820;
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r29,r6,-21836
	ctx.r29.s64 = ctx.r6.s64 + -21836;
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r4,r3,-21756
	ctx.r4.s64 = ctx.r3.s64 + -21756;
	// stfs f11,12(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfs f13,-21772(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -21772, temp.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f13,8(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,4(r4)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f31,8(r4)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,12(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// stfs f11,-21788(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + -21788, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f11,8(r26)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f11,12(r26)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// stfs f13,-21804(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + -21804, temp.u32);
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f11,12(r25)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// stfs f31,-21820(r7)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r7.u32 + -21820, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f7,12(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f7,-21836(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + -21836, temp.u32);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f31,12(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// blt cr6,0x82167b40
	if (ctx.cr6.lt) goto loc_82167B40;
	// beq cr6,0x82167b04
	if (ctx.cr6.eq) goto loc_82167B04;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82167af0
	if (ctx.cr6.lt) goto loc_82167AF0;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f12,12(r22)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r22.u32 + 12, temp.u32);
	// stfs f0,8(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// fneg f13,f9
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// b 0x821680f0
	goto loc_821680F0;
loc_82167AF0:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82167b80
	goto loc_82167B80;
loc_82167B04:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x82167B24;
	sub_82348B90(ctx, base);
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// lfs f12,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// lfs f10,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82167b78
	goto loc_82167B78;
loc_82167B40:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x82167B60;
	sub_82348B90(ctx, base);
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// lfs f12,236(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f10,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
loc_82167B78:
	// stfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82167B80:
	// fneg f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fneg f13,f10
	ctx.f13.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// li r11,3
	ctx.r11.s64 = 3;
	// fneg f11,f9
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmul f9,f12,f12
	ctx.f9.f64 = ctx.f12.f64 * ctx.f12.f64;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfd f30,216(r31)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmul f8,f13,f12
	ctx.f8.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmul f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmadd f10,f10,f10,f9
	ctx.f10.f64 = std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64);
	// fmadd f11,f0,f11,f8
	ctx.f11.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f8.f64);
	// stfd f11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f11.u64);
	// fmsub f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64);
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lfd f13,176(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 176);
	// fsub f0,f10,f30
	ctx.f0.f64 = ctx.f10.f64 - ctx.f30.f64;
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
loc_82167BF0:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82167c04
	if (ctx.cr6.lt) goto loc_82167C04;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82167C04:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c18
	if (ctx.cr6.eq) goto loc_82167C18;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
loc_82167C18:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82167bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167BF0;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82167c40
	if (!ctx.cr6.gt) goto loc_82167C40;
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82167c4c
	goto loc_82167C4C;
loc_82167C40:
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// li r24,1
	ctx.r24.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
loc_82167C4C:
	// bgt cr6,0x82167c54
	if (ctx.cr6.gt) goto loc_82167C54;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82167C54:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x82167cf8
	if (ctx.cr6.lt) goto loc_82167CF8;
	// beq cr6,0x82167cb0
	if (ctx.cr6.eq) goto loc_82167CB0;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bge cr6,0x82167d38
	if (!ctx.cr6.lt) goto loc_82167D38;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c88
	if (ctx.cr6.eq) goto loc_82167C88;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82167c98
	goto loc_82167C98;
loc_82167C88:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r25)
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r25)
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r25)
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82167C98:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82167d2c
	goto loc_82167D2C;
loc_82167CB0:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167cd0
	if (ctx.cr6.eq) goto loc_82167CD0;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82167ce0
	goto loc_82167CE0;
loc_82167CD0:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82167CE0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x82167d2c
	goto loc_82167D2C;
loc_82167CF8:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167d18
	if (ctx.cr6.eq) goto loc_82167D18;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82167d28
	goto loc_82167D28;
loc_82167D18:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82167D28:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82167D2C:
	// stfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82167D38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82348b90
	ctx.lr = 0x82167D48;
	sub_82348B90(ctx, base);
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfd f0,192(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 192);
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lfs f11,268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfdx f13,r11,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fadd f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 + ctx.f30.f64;
	// fsqrt f13,f13
	ctx.f13.f64 = sqrt(ctx.f13.f64);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmul f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,252(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x82167DA0;
	sub_82348B90(ctx, base);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,220(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x82167DEC;
	sub_82348B90(ctx, base);
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821680d8
	goto loc_821680D8;
loc_82167E00:
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r7,r10,1840
	ctx.r7.s64 = ctx.r10.s64 + 1840;
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// stw r24,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r24.u32);
	// stw r24,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r24.u32);
	// lfs f13,56(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
loc_82167E44:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82167e5c
	if (ctx.cr6.lt) goto loc_82167E5C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82167E5C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// beq cr6,0x82167e74
	if (ctx.cr6.eq) goto loc_82167E74;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82167E74:
	// xor r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82167e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167E44;
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lfs f8,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x82167e98
	if (ctx.cr6.gt) goto loc_82167E98;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82167E98:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82167eb0
	if (ctx.cr6.gt) goto loc_82167EB0;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82167EB0:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfsx f12,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfsx f11,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82167f00
	if (!ctx.cr6.gt) goto loc_82167F00;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r5,r8
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82167ef0
	if (!ctx.cr6.gt) goto loc_82167EF0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82167f14
	goto loc_82167F14;
loc_82167EF0:
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// b 0x82167f18
	goto loc_82167F18;
loc_82167F00:
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82167f18
	if (!ctx.cr6.gt) goto loc_82167F18;
loc_82167F14:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82167F18:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfd f12,224(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 224);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f11,216(r7)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 216);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfsx f7,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fmul f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82167fd4
	if (!ctx.cr6.gt) goto loc_82167FD4;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82168094
	if (!ctx.cr6.gt) goto loc_82168094;
	// li r11,4
	ctx.r11.s64 = 4;
	// lfd f13,232(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 232);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82167F74:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167f8c
	if (ctx.cr6.eq) goto loc_82167F8C;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82167f90
	goto loc_82167F90;
loc_82167F8C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82167F90:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82167f74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167F74;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82167fc0
	if (ctx.cr6.eq) goto loc_82167FC0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x821680bc
	goto loc_821680BC;
loc_82167FC0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x821680bc
	goto loc_821680BC;
loc_82167FD4:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82168094
	if (!ctx.cr6.gt) goto loc_82168094;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfd f13,240(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 240);
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82167ff8
	if (ctx.cr6.eq) goto loc_82167FF8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82167ffc
	goto loc_82167FFC;
loc_82167FF8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82167FFC:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r9,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8216801c
	if (ctx.cr6.eq) goto loc_8216801C;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_8216801C:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// frsp f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// ble cr6,0x8216803c
	if (!ctx.cr6.gt) goto loc_8216803C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_8216803C:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8216805c
	if (!ctx.cr6.eq) goto loc_8216805C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,7076
	ctx.r10.s64 = ctx.r10.s64 + 7076;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subfic r9,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.u64 = static_cast<uint64_t>(3) - ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8216805C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f29,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// b 0x821680bc
	goto loc_821680BC;
loc_82168094:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821680ac
	if (ctx.cr6.eq) goto loc_821680AC;
	// lfd f0,184(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 184);
	// b 0x821680b0
	goto loc_821680B0;
loc_821680AC:
	// lfd f0,192(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 192);
loc_821680B0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
loc_821680BC:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_821680D8:
	// stfs f28,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f27,4(r23)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stfs f29,8(r23)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f12,8(r22)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// stfs f11,12(r22)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r22.u32 + 12, temp.u32);
loc_821680F0:
	// stfs f13,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82204550
	ctx.lr = 0x82168104;
	__restfpr_27(ctx, base);
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82193068) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82193084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r3,r9,29,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82193A98) {
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
	// bl 0x82190e10
	ctx.lr = 0x82193AB0;
	sub_82190E10(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r6,r11,10520
	ctx.r6.s64 = ctx.r11.s64 + 10520;
	// addi r3,r8,10672
	ctx.r3.s64 = ctx.r8.s64 + 10672;
	// addi r5,r10,10112
	ctx.r5.s64 = ctx.r10.s64 + 10112;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,10496
	ctx.r4.s64 = ctx.r9.s64 + 10496;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,10676
	ctx.r11.s64 = ctx.r7.s64 + 10676;
	// stw r5,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82195318) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r11,10696
	ctx.r7.s64 = ctx.r11.s64 + 10696;
	// addi r6,r10,10324
	ctx.r6.s64 = ctx.r10.s64 + 10324;
	// addi r5,r9,10332
	ctx.r5.s64 = ctx.r9.s64 + 10332;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,10788
	ctx.r4.s64 = ctx.r8.s64 + 10788;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// bl 0x82193fa8
	ctx.lr = 0x82195364;
	sub_82193FA8(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82195390
	if (ctx.cr6.eq) goto loc_82195390;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,260(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82195388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82195390;
	sub_821F4B88(ctx, base);
loc_82195390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82193ea8
	ctx.lr = 0x82195398;
	sub_82193EA8(ctx, base);
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

DEFINE_REX_FUNC(sub_82196AD8) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,248(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 248);
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82196B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82196b48
	if (!ctx.cr6.eq) goto loc_82196B48;
	// bl 0x821f4680
	ctx.lr = 0x82196B1C;
	sub_821F4680(ctx, base);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x82196b48
	if (ctx.cr6.eq) goto loc_82196B48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82196b4c
	if (!ctx.cr6.gt) goto loc_82196B4C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
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
loc_82196B48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82196B4C:
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

DEFINE_REX_FUNC(sub_82198AC0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r5,4
	ctx.r6.s64 = ctx.r5.s64 + 4;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82198ae4
	if (!ctx.cr6.eq) goto loc_82198AE4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82198b1c
	goto loc_82198B1C;
loc_82198AE4:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82198af4
	if (!ctx.cr6.eq) goto loc_82198AF4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82198b1c
	goto loc_82198B1C;
loc_82198AF4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82198b04
	if (!ctx.cr6.eq) goto loc_82198B04;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82198b1c
	goto loc_82198B1C;
loc_82198B04:
	// rlwinm r11,r9,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x82198b18
	if (ctx.cr6.eq) goto loc_82198B18;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82198B18:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82198B1C:
	// rlwinm r11,r11,0,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198ba4
	if (ctx.cr6.eq) goto loc_82198BA4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82198b44
	if (!ctx.cr6.eq) goto loc_82198B44;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82198ba8
	goto loc_82198BA8;
loc_82198B44:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82198b60
	if (!ctx.cr6.eq) goto loc_82198B60;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82198ba8
	goto loc_82198BA8;
loc_82198B60:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82198b7c
	if (!ctx.cr6.eq) goto loc_82198B7C;
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82198ba8
	goto loc_82198BA8;
loc_82198B7C:
	// rlwinm r11,r9,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x82198b90
	if (ctx.cr6.eq) goto loc_82198B90;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82198B90:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82198ba8
	goto loc_82198BA8;
loc_82198BA4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82198BA8:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82198c0c
	if (ctx.cr6.lt) goto loc_82198C0C;
loc_82198BC0:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82198c0c
	if (ctx.cr6.gt) goto loc_82198C0C;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82198bf0
	if (ctx.cr6.lt) goto loc_82198BF0;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82198c0c
	if (ctx.cr6.lt) goto loc_82198C0C;
loc_82198BF0:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82198c04
	if (!ctx.cr6.lt) goto loc_82198C04;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x82198bc0
	goto loc_82198BC0;
loc_82198C04:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// b 0x82198bc0
	goto loc_82198BC0;
loc_82198C0C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E398) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E3F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E410) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,11996
	ctx.r9.s64 = ctx.r11.s64 + 11996;
	// addi r8,r10,12024
	ctx.r8.s64 = ctx.r10.s64 + 12024;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8219c9e0
	ctx.lr = 0x8219E448;
	sub_8219C9E0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8219e468
	if (ctx.cr6.eq) goto loc_8219E468;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32793
	ctx.r4.u64 = ctx.r4.u64 | 32793;
	// bl 0x821f4b88
	ctx.lr = 0x8219E464;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8219E468:
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

DEFINE_REX_FUNC(sub_821A0440) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821a0458
	if (!ctx.cr6.eq) goto loc_821A0458;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821A0458:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0F18) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a0fa8
	if (!ctx.cr6.eq) goto loc_821A0FA8;
	// lwz r10,448(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// sth r9,440(r3)
	REX_STORE_U16(ctx.r3.u32 + 440, ctx.r9.u16);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// bne cr6,0x821a1014
	if (!ctx.cr6.eq) goto loc_821A1014;
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a1014
	if (!ctx.cr6.eq) goto loc_821A1014;
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// lhz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r10,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821a0f80
	if (ctx.cr6.eq) goto loc_821A0F80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821a1014
	if (!ctx.cr6.eq) goto loc_821A1014;
loc_821A0F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0370
	ctx.lr = 0x821A0F88;
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
loc_821A0FA8:
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a0fd8
	if (!ctx.cr6.eq) goto loc_821A0FD8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,442(r31)
	REX_STORE_U16(ctx.r31.u32 + 442, ctx.r11.u16);
	// stw r10,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
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
loc_821A0FD8:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a1000
	if (!ctx.cr6.eq) goto loc_821A1000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
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
loc_821A1000:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a1014
	if (!ctx.cr6.eq) goto loc_821A1014;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
loc_821A1014:
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

DEFINE_REX_FUNC(sub_821A5048) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821A5050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x821a5714
	if (ctx.cr6.gt) goto loc_821A5714;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20624
	ctx.r12.s64 = ctx.r12.s64 + 20624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821A50E4;
	case 1:
		goto loc_821A5168;
	case 2:
		goto loc_821A51E0;
	case 3:
		goto loc_821A525C;
	case 4:
		goto loc_821A5168;
	case 5:
		goto loc_821A51E0;
	case 6:
		goto loc_821A525C;
	case 7:
		goto loc_821A5498;
	case 8:
		goto loc_821A54D0;
	case 9:
		goto loc_821A5508;
	case 10:
		goto loc_821A5300;
	case 11:
		goto loc_821A5364;
	case 12:
		goto loc_821A53CC;
	case 13:
		goto loc_821A542C;
	case 14:
		goto loc_821A557C;
	case 15:
		goto loc_821A55D8;
	case 16:
		goto loc_821A5610;
	case 17:
		goto loc_821A5648;
	case 18:
		goto loc_821A5680;
	case 19:
		goto loc_821A529C;
	case 20:
		goto loc_821A5148;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821A50E4:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,48
	ctx.r3.s64 = 48;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x821f4a68
	ctx.lr = 0x821A50F4;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12608
	ctx.r9.s64 = ctx.r10.s64 + 12608;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A5140:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821A5144:
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_821A5148:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// ori r7,r10,14
	ctx.r7.u64 = ctx.r10.u64 | 14;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_821A5168:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,72
	ctx.r3.s64 = 72;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x821f4a68
	ctx.lr = 0x821A5178;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12384
	ctx.r9.s64 = ctx.r10.s64 + 12384;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r8,11(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// stb r8,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r8.u8);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A51E0:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,72
	ctx.r3.s64 = 72;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x821f4a68
	ctx.lr = 0x821A51F0;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r8,r10,12384
	ctx.r8.s64 = ctx.r10.s64 + 12384;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// lbz r7,11(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// stb r7,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r7.u8);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A525C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,188
	ctx.r3.s64 = 188;
	// ori r4,r4,32786
	ctx.r4.u64 = ctx.r4.u64 | 32786;
	// bl 0x821f4a68
	ctx.lr = 0x821A526C;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a78d0
	ctx.lr = 0x821A5288;
	sub_821A78D0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A5290:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A529C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,56
	ctx.r3.s64 = 56;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x821f4a68
	ctx.lr = 0x821A52AC;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12888
	ctx.r9.s64 = ctx.r10.s64 + 12888;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A5300:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,56
	ctx.r3.s64 = 56;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x821f4a68
	ctx.lr = 0x821A5310;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12552
	ctx.r9.s64 = ctx.r10.s64 + 12552;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A5364:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,56
	ctx.r3.s64 = 56;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x821f4a68
	ctx.lr = 0x821A5374;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12552
	ctx.r9.s64 = ctx.r10.s64 + 12552;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A53CC:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,52
	ctx.r3.s64 = 52;
	// ori r4,r4,32792
	ctx.r4.u64 = ctx.r4.u64 | 32792;
	// bl 0x821f4a68
	ctx.lr = 0x821A53DC;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12840
	ctx.r9.s64 = ctx.r10.s64 + 12840;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A542C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,64
	ctx.r3.s64 = 64;
	// ori r4,r4,32789
	ctx.r4.u64 = ctx.r4.u64 | 32789;
	// bl 0x821f4a68
	ctx.lr = 0x821A543C;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12864
	ctx.r9.s64 = ctx.r10.s64 + 12864;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// sth r11,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r11.u16);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// sth r11,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A5498:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32788
	ctx.r4.u64 = ctx.r4.u64 | 32788;
	// bl 0x821f4a68
	ctx.lr = 0x821A54A8;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9108
	ctx.lr = 0x821A54C8;
	sub_821A9108(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A54D0:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// bl 0x821f4a68
	ctx.lr = 0x821A54E0;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a70d0
	ctx.lr = 0x821A5500;
	sub_821A70D0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A5508:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,72
	ctx.r3.s64 = 72;
	// ori r4,r4,32783
	ctx.r4.u64 = ctx.r4.u64 | 32783;
	// bl 0x821f4a68
	ctx.lr = 0x821A5518;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,12816
	ctx.r9.s64 = ctx.r10.s64 + 12816;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// sth r11,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r11.u16);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// sth r11,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A557C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,48
	ctx.r3.s64 = 48;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x821f4a68
	ctx.lr = 0x821A558C;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,13060
	ctx.r9.s64 = ctx.r10.s64 + 13060;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A55D8:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,64
	ctx.r3.s64 = 64;
	// ori r4,r4,32789
	ctx.r4.u64 = ctx.r4.u64 | 32789;
	// bl 0x821f4a68
	ctx.lr = 0x821A55E8;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// addi r8,r31,18
	ctx.r8.s64 = ctx.r31.s64 + 18;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a8b38
	ctx.lr = 0x821A5608;
	sub_821A8B38(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A5610:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32788
	ctx.r4.u64 = ctx.r4.u64 | 32788;
	// bl 0x821f4a68
	ctx.lr = 0x821A5620;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// addi r8,r31,22
	ctx.r8.s64 = ctx.r31.s64 + 22;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9108
	ctx.lr = 0x821A5640;
	sub_821A9108(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A5648:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// bl 0x821f4a68
	ctx.lr = 0x821A5658;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5290
	if (ctx.cr6.eq) goto loc_821A5290;
	// addi r8,r31,22
	ctx.r8.s64 = ctx.r31.s64 + 22;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a70d0
	ctx.lr = 0x821A5678;
	sub_821A70D0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x821a5148
	goto loc_821A5148;
loc_821A5680:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r3,72
	ctx.r3.s64 = 72;
	// ori r4,r4,32783
	ctx.r4.u64 = ctx.r4.u64 | 32783;
	// bl 0x821f4a68
	ctx.lr = 0x821A5690;
	sub_821F4A68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5140
	if (ctx.cr6.eq) goto loc_821A5140;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addic. r10,r31,11
	ctx.xer.ca = ctx.r31.u32 > 4294967284;
	ctx.r10.s64 = ctx.r31.s64 + 11;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r8,r9,13088
	ctx.r8.s64 = ctx.r9.s64 + 13088;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r11,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r11.u16);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// beq 0x821a56ec
	if (ctx.cr0.eq) goto loc_821A56EC;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// b 0x821a56f0
	goto loc_821A56F0;
loc_821A56EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A56F0:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// sth r10,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r10.u16);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r9,12816
	ctx.r7.s64 = ctx.r9.s64 + 12816;
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// b 0x821a5144
	goto loc_821A5144;
loc_821A5714:
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BE6E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x821BE6E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8258bc50
	ctx.lr = 0x821BE6F4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821be708
	if (!ctx.cr6.eq) goto loc_821BE708;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1744(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1744);
	// b 0x821be710
	goto loc_821BE710;
loc_821BE708:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1740);
loc_821BE710:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r31,16992
	ctx.r26.s64 = ctx.r31.s64 + 16992;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8258bb70
	ctx.lr = 0x821BE720;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16844(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16844);
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21836);
	// rlwinm r29,r30,24,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,16844(r31)
	REX_STORE_U32(ctx.r31.u32 + 16844, ctx.r10.u32);
	// rlwinm r30,r30,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x821be750
	if (!ctx.cr6.eq) goto loc_821BE750;
	// li r28,60
	ctx.r28.s64 = 60;
loc_821BE750:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,16828(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16828);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r24,r10,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x8258c190
	ctx.lr = 0x821BE764;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(100));
	// divwu r11,r11,r28
	ctx.r11.u64 = uint32_t(ctx.r28.u32 ? ctx.r11.u32 / ctx.r28.u32 : 0);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,100
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 100, ctx.xer);
	// ble cr6,0x821be78c
	if (!ctx.cr6.gt) goto loc_821BE78C;
	// li r7,100
	ctx.r7.s64 = 100;
loc_821BE78C:
	// lwz r8,16832(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16832);
	// lwz r10,16824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16824);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821be7b8
	if (ctx.cr6.gt) goto loc_821BE7B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821be7b8
	if (ctx.cr6.eq) goto loc_821BE7B8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x821be7b8
	if (!ctx.cr6.gt) goto loc_821BE7B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821BE7B8:
	// lwz r9,16816(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16816);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821be7f8
	if (ctx.cr6.eq) goto loc_821BE7F8;
	// lwz r6,16844(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16844);
	// addic r5,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r11,r5,r30
	temp.u8 = (~ctx.r5.u32 + ctx.r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x821BE7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_821BE7F8:
	// lwz r10,16824(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16824);
	// stw r11,16832(r31)
	REX_STORE_U32(ctx.r31.u32 + 16832, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821be83c
	if (ctx.cr6.eq) goto loc_821BE83C;
	// lwz r10,16844(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16844);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821be83c
	if (ctx.cr6.eq) goto loc_821BE83C;
	// lwz r10,16984(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16984);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,16852
	ctx.r9.s64 = ctx.r10.s64 + 16852;
	// stw r11,16856(r10)
	REX_STORE_U32(ctx.r10.u32 + 16856, ctx.r11.u32);
	// stw r30,16852(r10)
	REX_STORE_U32(ctx.r10.u32 + 16852, ctx.r30.u32);
	// lwz r11,16984(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16984);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16984(r31)
	REX_STORE_U32(ctx.r31.u32 + 16984, ctx.r11.u32);
	// b 0x821be878
	goto loc_821BE878;
loc_821BE83C:
	// lwz r11,16848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16848);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16848(r31)
	REX_STORE_U32(ctx.r31.u32 + 16848, ctx.r11.u32);
	// beq cr6,0x821be864
	if (ctx.cr6.eq) goto loc_821BE864;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r30,24848(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 24848, ctx.r30.u32);
	// eieio 
	// sync 
	// b 0x821be870
	goto loc_821BE870;
loc_821BE864:
	// lwz r11,11028(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821BE870:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,23660(r31)
	REX_STORE_U32(ctx.r31.u32 + 23660, ctx.r11.u32);
loc_821BE878:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8258bb60
	ctx.lr = 0x821BE884;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C8F48) {
	REX_FUNC_PROLOGUE();
	// b 0x821bdff8
	sub_821BDFF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C90B8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c90dc
	if (!ctx.cr6.eq) goto loc_821C90DC;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x821c9148
	goto loc_821C9148;
loc_821C90DC:
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x821c9128
	if (ctx.cr6.gt) goto loc_821C9128;
	// beq cr6,0x821c9114
	if (ctx.cr6.eq) goto loc_821C9114;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x821c9114
	if (ctx.cr6.eq) goto loc_821C9114;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// ble cr6,0x821c9144
	if (!ctx.cr6.gt) goto loc_821C9144;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x821c9114
	if (!ctx.cr6.gt) goto loc_821C9114;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// ble cr6,0x821c9144
	if (!ctx.cr6.gt) goto loc_821C9144;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x821c9144
	if (ctx.cr6.gt) goto loc_821C9144;
loc_821C9114:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,19456
	ctx.r4.s64 = ctx.r11.s64 + 19456;
	// bl 0x8258c1e0
	ctx.lr = 0x821C9124;
	__imp__sprintf(ctx, base);
	// b 0x821c9144
	goto loc_821C9144;
loc_821C9128:
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x821c913c
	if (ctx.cr6.eq) goto loc_821C913C;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x821c9144
	if (!ctx.cr6.eq) goto loc_821C9144;
	// b 0x821c9114
	goto loc_821C9114;
loc_821C913C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821cd6e8
	ctx.lr = 0x821C9144;
	sub_821CD6E8(ctx, base);
loc_821C9144:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_821C9148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CBB20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// addi r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 + 208;
	// lfs f0,520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r7,r7,224
	ctx.r7.s64 = ctx.r7.s64 + 224;
	// lfs f12,524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 528);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r6,240
	ctx.r11.s64 = ctx.r6.s64 + 240;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v59,v59,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v58,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmsum4fp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v58,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v62,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmsum4fp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3CE0) {
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
	ctx.lr = 0x821D3CFC;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23460
	ctx.r4.s64 = ctx.r11.s64 + 23460;
	// b 0x821d35dc
	sub_821d35dc(ctx, base);
	return;
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

DEFINE_REX_FUNC(sub_821D43B0) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4494
	if (ctx.cr6.eq) goto loc_821D4494;
	// lwz r11,8236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821d4494
	if (ctx.cr6.lt) goto loc_821D4494;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258c200
	ctx.lr = 0x821D43F0;
	__imp___vsnprintf(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x821d4494
	if (!ctx.cr0.gt) goto loc_821D4494;
	// lbz r11,8233(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 8233);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d4470
	if (ctx.cr0.eq) goto loc_821D4470;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,8233(r31)
	REX_STORE_U8(ctx.r31.u32 + 8233, ctx.r10.u8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x821d443c
	if (ctx.cr6.eq) goto loc_821D443C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x821d443c
	if (ctx.cr6.eq) goto loc_821D443C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x821d4434
	if (ctx.cr6.lt) goto loc_821D4434;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x821d443c
	if (!ctx.cr6.gt) goto loc_821D443C;
loc_821D4434:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821d4440
	goto loc_821D4440;
loc_821D443C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D4440:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d4470
	if (!ctx.cr0.eq) goto loc_821D4470;
	// lwz r11,8216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8220(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8220);
	// addi r4,r10,22316
	ctx.r4.s64 = ctx.r10.s64 + 22316;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d4470
	if (!ctx.cr0.lt) goto loc_821D4470;
	// stw r3,8236(r31)
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_821D4470:
	// lwz r11,8216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8220(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d4494
	if (!ctx.cr0.lt) goto loc_821D4494;
	// stw r3,8236(r31)
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_821D4494:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

DEFINE_REX_FUNC(sub_821D6088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821D6090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15444
	ctx.r31.s64 = ctx.r11.s64 + -15444;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-15444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -15444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d60c8
	if (!ctx.cr6.eq) goto loc_821D60C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,794
	ctx.r3.s64 = 794;
	// bl 0x821d5fb8
	ctx.lr = 0x821D60BC;
	sub_821D5FB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d60e0
	if (ctx.cr6.eq) goto loc_821D60E0;
loc_821D60C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D60DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d60e8
	goto loc_821D60E8;
loc_821D60E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821D60E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D6B08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821D6B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,248
	ctx.r29.s64 = ctx.r3.s64 + 248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8258bb00
	ctx.lr = 0x821D6B28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r31,176
	ctx.r28.s64 = ctx.r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258bb00
	ctx.lr = 0x821D6B34;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821dd788
	ctx.lr = 0x821D6B3C;
	sub_821DD788(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// ld r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r30.u32 + 152);
	// bl 0x821d6730
	ctx.lr = 0x821D6B48;
	sub_821D6730(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lwz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d6b8c
	if (ctx.cr6.eq) goto loc_821D6B8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x821dd1b0
	ctx.lr = 0x821D6B8C;
	sub_821DD1B0(ctx, base);
loc_821D6B8C:
	// lwz r10,176(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// addi r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 + 176;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d6bc8
	if (ctx.cr6.eq) goto loc_821D6BC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x821db2d0
	ctx.lr = 0x821D6BC8;
	sub_821DB2D0(ctx, base);
loc_821D6BC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258baf0
	ctx.lr = 0x821D6BD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258baf0
	ctx.lr = 0x821D6BD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d6318
	ctx.lr = 0x821D6BE0;
	sub_821D6318(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D9008) {
	REX_FUNC_PROLOGUE();
	// lwz r10,572(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d9028
	if (!ctx.cr6.eq) goto loc_821D9028;
	// lwz r10,568(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// cmplwi cr6,r10,1184
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1184, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821D9028:
	// lhz r10,1084(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 1084);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821d9044
	if (!ctx.cr0.eq) goto loc_821D9044;
	// lwz r10,1240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1240);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1240(r11)
	REX_STORE_U32(ctx.r11.u32 + 1240, ctx.r10.u32);
	// blr 
	return;
loc_821D9044:
	// ld r10,1064(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 1064);
	// lhz r9,1088(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 1088);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r8,1092(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 1092);
	// lhz r7,1098(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 1098);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821d9088
	if (ctx.cr6.lt) goto loc_821D9088;
	// lwz r10,1244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1244(r11)
	REX_STORE_U32(ctx.r11.u32 + 1244, ctx.r10.u32);
	// blr 
	return;
loc_821D9088:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x821d909c
	if (!ctx.cr6.eq) goto loc_821D909C;
	// lhz r11,1014(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1014);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_821D909C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DB1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821DB1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2188
	ctx.r11.s64 = ctx.r11.s64 + 2188;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,548(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821db228
	if (ctx.cr6.eq) goto loc_821DB228;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821e3f80
	ctx.lr = 0x821DB224;
	sub_821E3F80(ctx, base);
	// stw r30,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
loc_821DB228:
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// bl 0x821e59f0
	ctx.lr = 0x821DB230;
	sub_821E59F0(ctx, base);
	// lwz r4,620(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821db248
	if (ctx.cr6.eq) goto loc_821DB248;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821e3f80
	ctx.lr = 0x821DB244;
	sub_821E3F80(ctx, base);
	// stw r30,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
loc_821DB248:
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x821e5de8
	ctx.lr = 0x821DB250;
	sub_821E5DE8(ctx, base);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6030
	ctx.lr = 0x821DB25C;
	sub_821E6030(ctx, base);
	// addi r29,r31,252
	ctx.r29.s64 = ctx.r31.s64 + 252;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6030
	ctx.lr = 0x821DB268;
	sub_821E6030(ctx, base);
	// addi r28,r31,312
	ctx.r28.s64 = ctx.r31.s64 + 312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e6030
	ctx.lr = 0x821DB274;
	sub_821E6030(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821d6318
	ctx.lr = 0x821DB27C;
	sub_821D6318(ctx, base);
	// addi r11,r31,372
	ctx.r11.s64 = ctx.r31.s64 + 372;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82112fa8
	ctx.lr = 0x821DB288;
	sub_82112FA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// addi r28,r11,10144
	ctx.r28.s64 = ctx.r11.s64 + 10144;
	// stw r28,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// bl 0x82112fa8
	ctx.lr = 0x821DB29C;
	sub_82112FA8(ctx, base);
	// stw r28,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82112fa8
	ctx.lr = 0x821DB2A8;
	sub_82112FA8(ctx, base);
	// stw r28,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82112fa8
	ctx.lr = 0x821DB2B4;
	sub_82112FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// addi r11,r11,2068
	ctx.r11.s64 = ctx.r11.s64 + 2068;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DF190) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// ld r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// srawi r8,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821df1f4
	if (!ctx.cr6.eq) goto loc_821DF1F4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_821DF1F4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_821DF20C:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821df224
	if (ctx.cr6.eq) goto loc_821DF224;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x821df228
	goto loc_821DF228;
loc_821DF224:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_821DF228:
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821df248
	if (!ctx.cr6.eq) goto loc_821DF248;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_821DF248:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x821df20c
	if (!ctx.cr6.eq) goto loc_821DF20C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2220) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821E2228;
	__savegprlr_28(ctx, base);
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8258bb00
	ctx.lr = 0x821E2244;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e2284
	if (ctx.cr6.eq) goto loc_821E2284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c10
	ctx.lr = 0x821E2260;
	sub_821E2C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e2280
	if (ctx.cr0.eq) goto loc_821E2280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c18
	ctx.lr = 0x821E2270;
	sub_821E2C18(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e2284
	if (ctx.cr6.eq) goto loc_821E2284;
loc_821E2280:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821E2284:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258baf0
	ctx.lr = 0x821E228C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E3FC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,15(r3)
	REX_STORE_U32(ctx.r3.u32 + 15, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E40F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821E40F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r11,r5,252
	ctx.r11.u64 = ctx.r5.u64 | 252;
	// rlwinm r5,r7,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x3;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// rlwimi r5,r11,5,24,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// andi. r11,r5,227
	ctx.r11.u64 = ctx.r5.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// clrlwi r9,r7,22
	ctx.r9.u64 = ctx.r7.u32 & 0x3FF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821e4130
	if (ctx.cr6.eq) goto loc_821E4130;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
loc_821E4130:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821e4150
	if (ctx.cr6.eq) goto loc_821E4150;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_821E4150:
	// lhz r11,38(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e4168
	if (ctx.cr0.eq) goto loc_821E4168;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_821E4168:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r9,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r6,r6,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwimi r9,r8,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// beq 0x821e41b0
	if (ctx.cr0.eq) goto loc_821E41B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821e9c20
	ctx.lr = 0x821E41AC;
	sub_821E9C20(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_821E41B0:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e41d0
	if (ctx.cr0.eq) goto loc_821E41D0;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e9748
	ctx.lr = 0x821E41CC;
	sub_821E9748(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_821E41D0:
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E7E50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,524
	ctx.r9.s64 = ctx.r11.s64 + 524;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,528(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,528(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E98F8) {
	REX_FUNC_PROLOGUE();
	// mulli r10,r6,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(7));
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r8,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_821E992C:
	// lhz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// sth r11,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e992c
	if (ctx.cr0.eq) goto loc_821E992C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EBC68) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ef8e0
	ctx.lr = 0x821EBC84;
	sub_821EF8E0(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x821ef898
	ctx.lr = 0x821EBC8C;
	sub_821EF898(ctx, base);
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

DEFINE_REX_FUNC(sub_821EE950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821EE958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ee988
	if (!ctx.cr6.eq) goto loc_821EE988;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_821EE988:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ee9c4
	if (ctx.cr6.eq) goto loc_821EE9C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ee9c4
	if (ctx.cr0.eq) goto loc_821EE9C4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258b950
	ctx.lr = 0x821EE9C4;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_821EE9C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ee9dc
	if (ctx.cr6.eq) goto loc_821EE9DC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821ee9f0
	if (!ctx.cr6.lt) goto loc_821EE9F0;
loc_821EE9DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821EE9F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// stw r10,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eea10
	if (ctx.cr6.eq) goto loc_821EEA10;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x821eea14
	goto loc_821EEA14;
loc_821EEA10:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_821EEA14:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F17CC) {
	REX_FUNC_PROLOGUE();
	// li r11,10400
	ctx.r11.s64 = 10400;
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

DEFINE_REX_FUNC(sub_821F189C) {
	REX_FUNC_PROLOGUE();
	// li r11,21200
	ctx.r11.s64 = 21200;
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

DEFINE_REX_FUNC(sub_821F196C) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x821f19b8
	if (ctx.cr6.eq) goto loc_821F19B8;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x821f19b0
	if (ctx.cr6.eq) goto loc_821F19B0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x821f19a8
	if (!ctx.cr6.eq) goto loc_821F19A8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// b 0x821f19c4
	goto loc_821F19C4;
loc_821F19A8:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_821F19B0:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x821f19c4
	goto loc_821F19C4;
loc_821F19B8:
	// li r11,24000
	ctx.r11.s64 = 24000;
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

DEFINE_REX_FUNC(sub_821F4738) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258b940
	ctx.lr = 0x821F474C;
	__imp__XMsgCancelIORequest(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4920) {
	REX_FUNC_PROLOGUE();
	// b 0x8258ba60
	__imp__XamContentDelete(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4938) {
	REX_FUNC_PROLOGUE();
	// b 0x8258ba90
	__imp__XamContentGetLicenseMask(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4950) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	ctx.r11.s64 = ctx.r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	ctx.r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821f4990
	if (!ctx.cr6.gt) goto loc_821F4990;
	// addi r10,r11,169
	ctx.r10.s64 = ctx.r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// b 0x821f4994
	goto loc_821F4994;
loc_821F4990:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F4994:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x821f49a8
	if (!ctx.cr6.gt) goto loc_821F49A8;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// b 0x821f49ac
	goto loc_821F49AC;
loc_821F49A8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F49AC:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821F7080;
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
loc_821F70AC:
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
	// beq cr6,0x821f7130
	if (ctx.cr6.eq) goto loc_821F7130;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821f7140
	if (ctx.cr6.gt) goto loc_821F7140;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821f7140
	if (ctx.cr6.gt) goto loc_821F7140;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6118
	ctx.lr = 0x821F70F0;
	sub_821F6118(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821f7140
	if (ctx.cr0.eq) goto loc_821F7140;
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
	// bl 0x821f63a8
	ctx.lr = 0x821F7114;
	sub_821F63A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f67b0
	ctx.lr = 0x821F7128;
	sub_821F67B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821f72ac
	goto loc_821F72AC;
loc_821F7130:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x821f7140
	if (!ctx.cr6.eq) goto loc_821F7140;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_821F7140:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x821f70ac
	if (ctx.cr6.lt) goto loc_821F70AC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x821f72a8
	if (ctx.cr6.eq) goto loc_821F72A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f72a8
	if (ctx.cr0.eq) goto loc_821F72A8;
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
	// bgt cr6,0x821f718c
	if (ctx.cr6.gt) goto loc_821F718C;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821F718C:
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
	// bl 0x8258be40
	ctx.lr = 0x821F71A8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821f71fc
	if (!ctx.cr0.lt) goto loc_821F71FC;
loc_821F71B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821f71f4
	if (ctx.cr6.eq) goto loc_821F71F4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821f71d0
	if (!ctx.cr6.lt) goto loc_821F71D0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_821F71D0:
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
	// bl 0x8258be40
	ctx.lr = 0x821F71EC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f71b0
	if (ctx.cr0.lt) goto loc_821F71B0;
loc_821F71F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821f72a8
	if (ctx.cr6.lt) goto loc_821F72A8;
loc_821F71FC:
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
	// bgt cr6,0x821f7220
	if (ctx.cr6.gt) goto loc_821F7220;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_821F7220:
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
	// bl 0x8258be40
	ctx.lr = 0x821F723C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821f7290
	if (ctx.cr0.lt) goto loc_821F7290;
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
	// bl 0x821f6f10
	ctx.lr = 0x821F726C;
	sub_821F6F10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821f727c
	if (!ctx.cr0.eq) goto loc_821F727C;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_821F727C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821f7290
	if (ctx.cr6.lt) goto loc_821F7290;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x821f72ac
	goto loc_821F72AC;
loc_821F7290:
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
	// bl 0x8258be70
	ctx.lr = 0x821F72A8;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_821F72A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F72AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82203CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82203CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82203cdc
	if (ctx.cr6.eq) goto loc_82203CDC;
	// bl 0x82207788
	ctx.lr = 0x82203CDC;
	sub_82207788(ctx, base);
loc_82203CDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82203a90
	ctx.lr = 0x82203CF4;
	sub_82203A90(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82203a90
	ctx.lr = 0x82203D14;
	sub_82203A90(ctx, base);
	// lwz r11,2824(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x821f5400
	ctx.lr = 0x82203D2C;
	sub_821F5400(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f54d0
	ctx.lr = 0x82203D34;
	sub_821F54D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82203d4c
	if (!ctx.cr0.eq) goto loc_82203D4C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82203d4c
	if (ctx.cr6.eq) goto loc_82203D4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207788
	ctx.lr = 0x82203D4C;
	sub_82207788(ctx, base);
loc_82203D4C:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
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

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_30) {
	REX_FUNC_PROLOGUE();
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204CC0) {
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
	// bl 0x82205560
	ctx.lr = 0x82204CD4;
	sub_82205560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82203c70
	ctx.lr = 0x82204CDC;
	sub_82203C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82205ac0
	ctx.lr = 0x82204CE4;
	sub_82205AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82208e40
	ctx.lr = 0x82204CEC;
	sub_82208E40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205990) {
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
	// bl 0x82208f40
	ctx.lr = 0x822059A0;
	sub_82208F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822059b0
	if (ctx.cr0.eq) goto loc_822059B0;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82208f58
	ctx.lr = 0x822059B0;
	sub_82208F58(ctx, base);
loc_822059B0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,-22640(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -22640);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822059d4
	if (ctx.cr0.eq) goto loc_822059D4;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82203cb8
	ctx.lr = 0x822059D4;
	sub_82203CB8(ctx, base);
loc_822059D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82204f28
	ctx.lr = 0x822059DC;
	sub_82204F28(ctx, base);
}

DEFINE_REX_FUNC(sub_82207970) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82207798
	sub_82207798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82207CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82207CC8;
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
	// bne cr6,0x82207d0c
	if (!ctx.cr6.eq) goto loc_82207D0C;
	// bl 0x82205ec8
	ctx.lr = 0x82207CF8;
	sub_82205EC8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82203c80
	ctx.lr = 0x82207D04;
	sub_82203C80(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822080c8
	goto loc_822080C8;
loc_82207D0C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82207d2c
	if (!ctx.cr6.eq) goto loc_82207D2C;
	// bl 0x82205ec8
	ctx.lr = 0x82207D18;
	sub_82205EC8(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82207D1C:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82203c80
	ctx.lr = 0x82207D24;
	sub_82203C80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822080c8
	goto loc_822080C8;
loc_82207D2C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82207d4c
	if (ctx.cr6.gt) goto loc_82207D4C;
	// bl 0x82205ec8
	ctx.lr = 0x82207D44;
	sub_82205EC8(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82207d1c
	goto loc_82207D1C;
loc_82207D4C:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2047, ctx.xer);
	// bne cr6,0x82207df0
	if (!ctx.cr6.eq) goto loc_82207DF0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82207d6c
	if (!ctx.cr6.eq) goto loc_82207D6C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82207d70
	goto loc_82207D70;
loc_82207D6C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_82207D70:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82207bd0
	ctx.lr = 0x82207D84;
	sub_82207BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82207d94
	if (ctx.cr0.eq) goto loc_82207D94;
	// stb r26,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x822080c8
	goto loc_822080C8;
loc_82207D94:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82207da8
	if (!ctx.cr6.eq) goto loc_82207DA8;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82207DA8:
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
	// bl 0x8220a320
	ctx.lr = 0x82207DCC;
	sub_8220A320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822080c4
	if (ctx.cr0.eq) goto loc_822080C4;
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
	// b 0x822080c4
	goto loc_822080C4;
loc_82207DF0:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82207e08
	if (ctx.cr6.eq) goto loc_82207E08;
	// stb r27,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82207E08:
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
	// bne cr6,0x82207e74
	if (!ctx.cr6.eq) goto loc_82207E74;
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
	// bne cr6,0x82207e6c
	if (!ctx.cr6.eq) goto loc_82207E6C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82207e80
	goto loc_82207E80;
loc_82207E6C:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x82207e80
	goto loc_82207E80;
loc_82207E74:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82207E80:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82207e98
	if (!ctx.cr6.eq) goto loc_82207E98;
	// stb r26,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x82207eb0
	goto loc_82207EB0;
loc_82207E98:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,-21640(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21640);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_82207EB0:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82207fa0
	if (!ctx.cr6.gt) goto loc_82207FA0;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_82207EC8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82207f28
	if (!ctx.cr6.gt) goto loc_82207F28;
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
	// ble cr6,0x82207f04
	if (!ctx.cr6.gt) goto loc_82207F04;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82207F04:
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
	// bge 0x82207ec8
	if (!ctx.cr0.lt) goto loc_82207EC8;
loc_82207F28:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82207fa0
	if (ctx.cr0.lt) goto loc_82207FA0;
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
	// ble cr6,0x82207fa0
	if (!ctx.cr6.gt) goto loc_82207FA0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_82207F54:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x82207f6c
	if (ctx.cr6.eq) goto loc_82207F6C;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x82207f78
	if (!ctx.cr6.eq) goto loc_82207F78;
loc_82207F6C:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82207f54
	goto loc_82207F54;
loc_82207F78:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82207f94
	if (ctx.cr6.eq) goto loc_82207F94;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x82207f98
	if (!ctx.cr6.eq) goto loc_82207F98;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// b 0x82207f9c
	goto loc_82207F9C;
loc_82207F94:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_82207F98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82207F9C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82207FA0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82207fc8
	if (!ctx.cr6.gt) goto loc_82207FC8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82207fc4
	if (ctx.cr0.eq) goto loc_82207FC4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82207FBC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82207fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207FBC;
loc_82207FC4:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82207FC8:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82207fd8
	if (!ctx.cr0.eq) goto loc_82207FD8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82207FD8:
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
	// blt cr6,0x82208010
	if (ctx.cr6.lt) goto loc_82208010;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82208018
	goto loc_82208018;
loc_82208010:
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82208018:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x82208058
	if (ctx.cr6.lt) goto loc_82208058;
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
	// bne cr6,0x82208060
	if (!ctx.cr6.eq) goto loc_82208060;
loc_82208058:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x82208084
	if (ctx.cr6.lt) goto loc_82208084;
loc_82208060:
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
loc_82208084:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82208094
	if (!ctx.cr6.eq) goto loc_82208094;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x822080b8
	if (ctx.cr6.lt) goto loc_822080B8;
loc_82208094:
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
loc_822080B8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_822080C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822080C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221FDF8) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// lwz r30,132(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x8221fe14
	goto loc_8221FE14;
loc_8221FE14:
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

DEFINE_REX_FUNC(sub_82221578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82221580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822215A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82221654
	if (ctx.cr6.lt) goto loc_82221654;
	// beq cr6,0x822215f0
	if (ctx.cr6.eq) goto loc_822215F0;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bge cr6,0x822216bc
	if (!ctx.cr6.lt) goto loc_822216BC;
	// lwz r11,432(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 432);
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// b 0x822215d4
	goto loc_822215D4;
loc_822215C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822215dc
	if (ctx.cr6.eq) goto loc_822215DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822215D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822215c4
	if (!ctx.cr6.eq) goto loc_822215C4;
loc_822215DC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82231d50
	ctx.lr = 0x822215E4;
	sub_82231D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,580(r30)
	REX_STORE_U32(ctx.r30.u32 + 580, ctx.r11.u32);
	// b 0x822216bc
	goto loc_822216BC;
loc_822215F0:
	// lwz r9,472(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822216bc
	if (ctx.cr6.eq) goto loc_822216BC;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
loc_82221600:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x8222161c
	goto loc_8222161C;
loc_8222160C:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82221624
	if (ctx.cr6.eq) goto loc_82221624;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8222161C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222160c
	if (!ctx.cr6.eq) goto loc_8222160C;
loc_82221624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221644
	if (!ctx.cr6.eq) goto loc_82221644;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822216bc
	if (ctx.cr6.eq) goto loc_822216BC;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82221600
	if (!ctx.cr6.eq) goto loc_82221600;
	// b 0x822216bc
	goto loc_822216BC;
loc_82221644:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82231d50
	ctx.lr = 0x82221650;
	sub_82231D50(ctx, base);
	// b 0x822216bc
	goto loc_822216BC;
loc_82221654:
	// lwz r11,392(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 392);
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// b 0x82221674
	goto loc_82221674;
loc_82221664:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222167c
	if (ctx.cr6.eq) goto loc_8222167C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82221674:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221664
	if (!ctx.cr6.eq) goto loc_82221664;
loc_8222167C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8222b518
	ctx.lr = 0x82221684;
	sub_8222B518(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822216bc
	if (ctx.cr0.eq) goto loc_822216BC;
	// lwz r11,512(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 512);
	// addi r3,r30,488
	ctx.r3.s64 = ctx.r30.s64 + 488;
	// b 0x822216ac
	goto loc_822216AC;
loc_8222169C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822216b4
	if (ctx.cr6.eq) goto loc_822216B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822216AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222169c
	if (!ctx.cr6.eq) goto loc_8222169C;
loc_822216B4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82231d50
	ctx.lr = 0x822216BC;
	sub_82231D50(ctx, base);
loc_822216BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82224450) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82224388
	sub_82224388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82225410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8222544c
	if (!ctx.cr0.gt) goto loc_8222544C;
loc_82225438:
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// dcbz r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82225438
	if (ctx.cr6.lt) goto loc_82225438;
loc_8222544C:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225464
	if (ctx.cr6.eq) goto loc_82225464;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82225464:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225478
	if (ctx.cr6.eq) goto loc_82225478;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82225478:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82225490
	if (ctx.cr0.eq) goto loc_82225490;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82225490:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822254a8
	if (ctx.cr0.eq) goto loc_822254A8;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822254A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r9,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822254c0
	if (ctx.cr0.eq) goto loc_822254C0;
	// rlwinm r9,r9,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822254C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r7,r9,6
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822254d8
	if (ctx.cr0.eq) goto loc_822254D8;
	// rlwinm r9,r9,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC000000;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_822254D8:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r7,r9,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822254f0
	if (ctx.cr0.eq) goto loc_822254F0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_822254F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// rlwinm. r7,r9,0,0,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// beq 0x82225514
	if (ctx.cr0.eq) goto loc_82225514;
	// clrlwi r9,r9,5
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82225514:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8222552c
	if (ctx.cr0.eq) goto loc_8222552C;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
loc_8222552C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// rlwinm r6,r9,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8222554c
	if (ctx.cr6.eq) goto loc_8222554C;
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8222554C:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r8,82(r11)
	REX_STORE_U16(ctx.r11.u32 + 82, ctx.r8.u16);
	// rlwinm. r8,r9,0,1,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82225568
	if (ctx.cr0.eq) goto loc_82225568;
	// rlwinm r9,r9,0,6,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82225568:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82225580
	if (ctx.cr0.eq) goto loc_82225580;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82225580:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r8,r9,0,1,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82225598
	if (ctx.cr0.eq) goto loc_82225598;
	// rlwinm r9,r9,0,6,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82225598:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822255b0
	if (ctx.cr0.eq) goto loc_822255B0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_822255B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AE68) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222BF68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8222BF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,18452
	ctx.r11.s64 = ctx.r11.s64 + 18452;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r9,20000
	ctx.r11.s64 = ctx.r9.s64 + 20000;
	// addi r10,r10,19920
	ctx.r10.s64 = ctx.r10.s64 + 19920;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// addi r9,r8,19912
	ctx.r9.s64 = ctx.r8.s64 + 19912;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r7,19896
	ctx.r10.s64 = ctx.r7.s64 + 19896;
	// addi r11,r6,19880
	ctx.r11.s64 = ctx.r6.s64 + 19880;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r9,r5,18428
	ctx.r9.s64 = ctx.r5.s64 + 18428;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r30,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// bl 0x8222b3d0
	ctx.lr = 0x8222C004;
	sub_8222B3D0(ctx, base);
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r30,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// addi r3,r10,16272
	ctx.r3.s64 = ctx.r10.s64 + 16272;
	// stw r11,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r30,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r29,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// stw r30,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r29,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// stw r30,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// bl 0x8221fb90
	ctx.lr = 0x8222C050;
	sub_8221FB90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222FA98) {
	REX_FUNC_PROLOGUE();
	// lhz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 40);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222fac4
	if (!ctx.cr6.gt) goto loc_8222FAC4;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lhz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lhz r3,38(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82244140
	sub_82244140(ctx, base);
	return;
loc_8222FAC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82230858) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,20468
	ctx.r11.s64 = ctx.r11.s64 + 20468;
	// addi r10,r10,20448
	ctx.r10.s64 = ctx.r10.s64 + 20448;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x82230798
	ctx.lr = 0x82230888;
	sub_82230798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fcbd8
	ctx.lr = 0x82230890;
	sub_821FCBD8(ctx, base);
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

DEFINE_REX_FUNC(sub_822315F8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82231630
	if (!ctx.cr6.eq) goto loc_82231630;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231628
	if (ctx.cr6.eq) goto loc_82231628;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82231628:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82231630:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
loc_82231640:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231658
	if (ctx.cr6.eq) goto loc_82231658;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223165c
	goto loc_8223165C;
loc_82231658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223165C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82231674
	if (ctx.cr6.eq) goto loc_82231674;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82231640
	if (!ctx.cr6.eq) goto loc_82231640;
	// blr 
	return;
loc_82231674:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82233D60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x82233d88
	if (!ctx.cr6.eq) goto loc_82233D88;
loc_82233D78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_82233D88:
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82233d78
	if (ctx.cr6.eq) goto loc_82233D78;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82233da4
	if (ctx.cr6.gt) goto loc_82233DA4;
	// li r25,4
	ctx.r25.s64 = 4;
loc_82233DA4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82234024
	if (ctx.cr6.eq) goto loc_82234024;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// bne cr6,0x822340c0
	if (!ctx.cr6.eq) goto loc_822340C0;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82233e40
	if (!ctx.cr6.eq) goto loc_82233E40;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82233e40
	if (ctx.cr6.gt) goto loc_82233E40;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82233df8
	if (!ctx.cr6.lt) goto loc_82233DF8;
	// stw r26,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82233DF8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82233e10
	if (ctx.cr0.eq) goto loc_82233E10;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82250ad8
	ctx.lr = 0x82233E10;
	sub_82250AD8(ctx, base);
loc_82233E10:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82233e38
	if (!ctx.cr6.eq) goto loc_82233E38;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82250a80
	ctx.lr = 0x82233E28;
	sub_82250A80(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_82233E38:
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82233fd0
	goto loc_82233FD0;
loc_82233E40:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_82233E44:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82233ea4
	if (!ctx.cr6.eq) goto loc_82233EA4;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_82233E54:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82233e8c
	if (!ctx.cr6.eq) goto loc_82233E8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82250a80
	ctx.lr = 0x82233E68;
	sub_82250A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822333e0
	ctx.lr = 0x82233E70;
	sub_822333E0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296bd8
	ctx.lr = 0x82233E80;
	sub_82296BD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822340c4
	if (ctx.cr6.lt) goto loc_822340C4;
	// b 0x82233e98
	goto loc_82233E98;
loc_82233E8C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82233E98:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233e54
	if (ctx.cr6.eq) goto loc_82233E54;
loc_82233EA4:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// ble cr6,0x82233f90
	if (!ctx.cr6.gt) goto loc_82233F90;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82233f0c
	if (!ctx.cr6.eq) goto loc_82233F0C;
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82233f28
	if (ctx.cr6.lt) goto loc_82233F28;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_82233F0C:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
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
	// sth r3,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
loc_82233F28:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82233f48
	if (!ctx.cr6.eq) goto loc_82233F48;
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82233f70
	if (!ctx.cr6.eq) goto loc_82233F70;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x82233e44
	goto loc_82233E44;
loc_82233F48:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82233f70
	if (!ctx.cr6.eq) goto loc_82233F70;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82233f70
	if (!ctx.cr6.eq) goto loc_82233F70;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x82250a80
	ctx.lr = 0x82233F68;
	sub_82250A80(ctx, base);
	// stw r27,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// b 0x82233e44
	goto loc_82233E44;
loc_82233F70:
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82233fbc
	if (ctx.cr6.lt) goto loc_82233FBC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82233f88
	if (!ctx.cr6.eq) goto loc_82233F88;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_82233F88:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x82233e44
	goto loc_82233E44;
loc_82233F90:
	// subfic r10,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82233FBC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82233fcc
	if (!ctx.cr6.eq) goto loc_82233FCC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82250ad8
	ctx.lr = 0x82233FCC;
	sub_82250AD8(ctx, base);
loc_82233FCC:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
loc_82233FD0:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82234018
	if (!ctx.cr6.eq) goto loc_82234018;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822340cc
	if (!ctx.cr6.eq) goto loc_822340CC;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// mulld r6,r8,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// divd r5,r6,r7
	ctx.r5.s64 = (ctx.r7.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r6.s64 / ctx.r7.s64 : 0;
	// std r5,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r5.u64);
loc_8223400C:
	// sth r26,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r26.u16);
	// stw r26,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
loc_82234014:
	// stw r27,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_82234018:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822340c0
	if (ctx.cr6.eq) goto loc_822340C0;
loc_82234024:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x82234064
	if (!ctx.cr6.gt) goto loc_82234064;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_82234038:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82297058
	ctx.lr = 0x82234044;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822340c4
	if (ctx.cr6.lt) goto loc_822340C4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x82234038
	if (ctx.cr6.gt) goto loc_82234038;
loc_82234064:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82297058
	ctx.lr = 0x82234070;
	sub_82297058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822340c4
	if (ctx.cr6.lt) goto loc_822340C4;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822340b4
	if (ctx.cr6.eq) goto loc_822340B4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_8223408C:
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r7,34(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8223408c
	if (ctx.cr6.lt) goto loc_8223408C;
loc_822340B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_822340C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822340C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_822340CC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223400c
	if (!ctx.cr6.eq) goto loc_8223400C;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ld r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 176);
	// ori r6,r10,38528
	ctx.r6.u64 = ctx.r10.u64 | 38528;
	// sth r27,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// mulld r5,r8,r9
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,168(r31)
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r4.u64);
	// b 0x82234014
	goto loc_82234014;
}

DEFINE_REX_FUNC(sub_8224E1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e234
	if (ctx.cr6.eq) goto loc_8224E234;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r7,256(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// sraw r5,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stw r6,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// stw r5,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8224e22c
	if (!ctx.cr6.lt) goto loc_8224E22C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8224E22C:
	// stw r11,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
loc_8224E234:
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e268
	if (ctx.cr6.eq) goto loc_8224E268;
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,268(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r7.u32);
	// stw r6,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r6.u32);
	// stw r8,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r8.u32);
	// blr 
	return;
loc_8224E268:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r10,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// stw r9,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82250768) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x82250770;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250988
	if (ctx.cr6.eq) goto loc_82250988;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82250988
	if (ctx.cr6.eq) goto loc_82250988;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82250988
	if (ctx.cr6.eq) goto loc_82250988;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x82250988
	if (ctx.cr6.lt) goto loc_82250988;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82250988
	if (ctx.cr6.gt) goto loc_82250988;
	// mullw r22,r5,r5
	ctx.r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82203a90
	ctx.lr = 0x822507CC;
	sub_82203A90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82250808
	if (!ctx.cr6.gt) goto loc_82250808;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_822507E4:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// beq cr6,0x822507f8
	if (ctx.cr6.eq) goto loc_822507F8;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
loc_822507F8:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stwx r10,r8,r26
	REX_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822507e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822507E4;
loc_82250808:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82250854
	if (!ctx.cr6.gt) goto loc_82250854;
loc_82250818:
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x82250600
	ctx.lr = 0x82250838;
	sub_82250600(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8225097c
	if (ctx.cr6.lt) goto loc_8225097C;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82250818
	if (ctx.cr6.lt) goto loc_82250818;
loc_82250854:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82250894
	if (!ctx.cr6.gt) goto loc_82250894;
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_82250870:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82250884
	if (ctx.cr6.lt) goto loc_82250884;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82250888
	goto loc_82250888;
loc_82250884:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82250888:
	// rlwinm r11,r11,0,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC00000;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82250870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250870;
loc_82250894:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// lfs f0,-25024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25024);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8225093c
	if (ctx.cr6.lt) goto loc_8225093C;
	// addi r9,r22,-3
	ctx.r9.s64 = ctx.r22.s64 + -3;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
loc_822508B0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x822508b0
	if (ctx.cr6.lt) goto loc_822508B0;
loc_8225093C:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8225097c
	if (!ctx.cr6.lt) goto loc_8225097C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82250958:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82250958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250958;
loc_8225097C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_82250988:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225A218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8225A220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225A240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225A260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225a2b0
	if (ctx.cr0.lt) goto loc_8225A2B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225a2b0
	if (ctx.cr6.eq) goto loc_8225A2B0;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8225a298
	if (!ctx.cr6.gt) goto loc_8225A298;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8225a2ac
	goto loc_8225A2AC;
loc_8225A298:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8225a2b0
	if (ctx.cr6.gt) goto loc_8225A2B0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8225A2AC:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225A2B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225AED0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225af50
	if (!ctx.cr6.eq) goto loc_8225AF50;
	// addi r9,r3,240
	ctx.r9.s64 = ctx.r3.s64 + 240;
loc_8225AEE0:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8225AF00:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8225af24
	if (!ctx.cr6.eq) goto loc_8225AF24;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8225af00
	if (!ctx.cr0.eq) goto loc_8225AF00;
	// b 0x8225af2c
	goto loc_8225AF2C;
loc_8225AF24:
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8225AF2C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8225af44
	if (!ctx.cr6.eq) goto loc_8225AF44;
	// db16cyc 
	// b 0x8225aee0
	goto loc_8225AEE0;
loc_8225AF44:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
loc_8225AF50:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// stw r10,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225FAD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8225FAE0;
	__savegprlr_23(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225fc90
	if (ctx.cr6.eq) goto loc_8225FC90;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225fc90
	if (ctx.cr6.eq) goto loc_8225FC90;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// blt cr6,0x8225fc88
	if (ctx.cr6.lt) goto loc_8225FC88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// clrlwi r24,r7,16
	ctx.r24.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r25,r11,7432
	ctx.r25.s64 = ctx.r11.s64 + 7432;
	// addi r27,r10,7404
	ctx.r27.s64 = ctx.r10.s64 + 7404;
	// addi r26,r9,7376
	ctx.r26.s64 = ctx.r9.s64 + 7376;
loc_8225FB18:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8225fb28
	if (ctx.cr6.lt) goto loc_8225FB28;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8225FB28:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r8,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r8.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r31,r9,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lwzx r29,r31,r26
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzx r28,r31,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r11,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r31,r6
	ctx.r10.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// sthu r10,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x8225fc80
	if (ctx.cr0.eq) goto loc_8225FC80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8225FB94:
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mullw r7,r10,r29
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8225fbd8
	if (!ctx.cr6.gt) goto loc_8225FBD8;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8225fbe4
	goto loc_8225FBE4;
loc_8225FBD8:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8225fbe4
	if (!ctx.cr6.lt) goto loc_8225FBE4;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_8225FBE4:
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r7,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8225fc00
	if (!ctx.cr6.lt) goto loc_8225FC00;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8225FC00:
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8225fc48
	if (!ctx.cr6.gt) goto loc_8225FC48;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x8225fc54
	goto loc_8225FC54;
loc_8225FC48:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x8225fc54
	if (!ctx.cr6.lt) goto loc_8225FC54;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_8225FC54:
	// rlwinm r9,r8,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r8,r9,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8225fc70
	if (!ctx.cr6.lt) goto loc_8225FC70;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8225FC70:
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// sth r8,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r8.u16);
	// bdnz 0x8225fb94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225FB94;
loc_8225FC80:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bge cr6,0x8225fb18
	if (!ctx.cr6.lt) goto loc_8225FB18;
loc_8225FC88:
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r23.u64;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_8225FC90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82267C78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_82267C7C:
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
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// bne 0x82267c7c
	if (!ctx.cr0.eq) goto loc_82267C7C;
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82268E20) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822690CC) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82269240) {
	REX_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82269628) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8226966C;
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

DEFINE_REX_FUNC(sub_82269FCC) {
	REX_FUNC_PROLOGUE();
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// ori r17,r17,16389
	ctx.r17.u64 = ctx.r17.u64 | 16389;
	// stw r17,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r17.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226AB50) {
	REX_FUNC_PROLOGUE();
	// ld r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226AC90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8226AC98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226acdc
	if (ctx.cr6.eq) goto loc_8226ACDC;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226acd4
	if (ctx.cr6.eq) goto loc_8226ACD4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226ACD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226ACD4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8226ACDC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226ad0c
	if (ctx.cr6.eq) goto loc_8226AD0C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ad04
	if (ctx.cr6.eq) goto loc_8226AD04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226AD04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226AD04:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8226AD0C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8226ad3c
	if (ctx.cr6.eq) goto loc_8226AD3C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ad34
	if (ctx.cr6.eq) goto loc_8226AD34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226AD34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226AD34:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8226AD3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226CF98) {
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
	// bl 0x822701d0
	ctx.lr = 0x8226CFB0;
	sub_822701D0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226CFC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	REX_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_8226E480) {
	REX_FUNC_PROLOGUE();
	// lwz r17,-6984(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6984);
	// lwz r17,-6976(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6976);
	// lwz r17,-6968(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6968);
	// lwz r17,-6960(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6960);
	// lwz r17,-6952(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6952);
	// lwz r17,-6944(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6944);
	// lwz r17,-6936(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6936);
	// lwz r17,-6928(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6928);
	// lwz r17,-6920(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6920);
	// lwz r17,-6912(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6912);
	// lwz r17,-6904(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6904);
	// lwz r17,-6896(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6896);
	// lwz r17,-6888(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6888);
	// lwz r17,-6880(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + -6880);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270018) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227006c
	if (ctx.cr6.eq) goto loc_8227006C;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8227006c
	if (ctx.cr6.lt) goto loc_8227006C;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x8227006c
	if (ctx.cr6.gt) goto loc_8227006C;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227006c
	if (ctx.cr6.eq) goto loc_8227006C;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x8226dd40
	ctx.lr = 0x82270058;
	sub_8226DD40(ctx, base);
	// bl 0x8226e530
	ctx.lr = 0x8227005C;
	sub_8226E530(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8227006C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822715C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204238
	ctx.lr = 0x822715C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r27,0(r4)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,0(r5)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// beq cr6,0x822718d4
	if (ctx.cr6.eq) goto loc_822718D4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822718d4
	if (ctx.cr6.eq) goto loc_822718D4;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822718d4
	if (ctx.cr6.eq) goto loc_822718D4;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r21,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r21.u32);
	// beq cr6,0x82271678
	if (ctx.cr6.eq) goto loc_82271678;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271678
	if (ctx.cr6.eq) goto loc_82271678;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822718d4
	if (ctx.cr6.gt) goto loc_822718D4;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// divwu. r24,r11,r10
	ctx.r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x8227171c
	if (ctx.cr0.eq) goto loc_8227171C;
	// divwu r29,r27,r24
	ctx.r29.u64 = uint32_t(ctx.r24.u32 ? ctx.r27.u32 / ctx.r24.u32 : 0);
	// twllei r24,0
	if (ctx.r24.s32 == 0 || ctx.r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271678
	if (ctx.cr6.eq) goto loc_82271678;
loc_82271668:
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82271678
	if (!ctx.cr6.eq) goto loc_82271678;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82271678:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82271688
	if (ctx.cr6.lt) goto loc_82271688;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_82271688:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// bl 0x8227c758
	ctx.lr = 0x822716A8;
	sub_8227C758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82271850
	if (!ctx.cr6.eq) goto loc_82271850;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822716c8
	if (ctx.cr6.eq) goto loc_822716C8;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82271850
	if (!ctx.cr6.eq) goto loc_82271850;
loc_822716C8:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 492);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r21,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82271738
	if (!ctx.cr6.gt) goto loc_82271738;
loc_822716DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227cd80
	ctx.lr = 0x822716E4;
	sub_8227CD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82271850
	if (!ctx.cr6.eq) goto loc_82271850;
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82271724
	if (ctx.cr6.eq) goto loc_82271724;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 492);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822716dc
	if (ctx.cr6.lt) goto loc_822716DC;
	// b 0x82271738
	goto loc_82271738;
loc_8227171C:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82271668
	goto loc_82271668;
loc_82271724:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_82271738:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271808
	if (ctx.cr6.eq) goto loc_82271808;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// beq cr6,0x8227185c
	if (ctx.cr6.eq) goto loc_8227185C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227176c
	if (!ctx.cr6.eq) goto loc_8227176C;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227176c
	if (!ctx.cr6.eq) goto loc_8227176C;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8227176C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82271788
	if (!ctx.cr6.gt) goto loc_82271788;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x82271794
	goto loc_82271794;
loc_82271788:
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82271794:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x822717bc
	if (!ctx.cr6.eq) goto loc_822717BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271878
	if (ctx.cr6.eq) goto loc_82271878;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82271878
	if (ctx.cr6.eq) goto loc_82271878;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271878
	if (ctx.cr6.eq) goto loc_82271878;
	// b 0x822717f4
	goto loc_822717F4;
loc_822717BC:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822717d4
	if (!ctx.cr6.lt) goto loc_822717D4;
	// li r20,1
	ctx.r20.s64 = 1;
loc_822717D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271878
	if (ctx.cr6.eq) goto loc_82271878;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822717f4
	if (ctx.cr6.eq) goto loc_822717F4;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82271878
	if (!ctx.cr6.eq) goto loc_82271878;
loc_822717F4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227183c
	if (!ctx.cr6.eq) goto loc_8227183C;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x82271840
	goto loc_82271840;
loc_82271808:
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 & ctx.r28.u64;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8227183c
	if (!ctx.cr6.eq) goto loc_8227183C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271834
	if (ctx.cr6.eq) goto loc_82271834;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x82271840
	goto loc_82271840;
loc_82271834:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8227183C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82271840:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82271688
	if (ctx.cr6.lt) goto loc_82271688;
	// b 0x82271860
	goto loc_82271860;
loc_82271850:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
loc_8227185C:
	// li r20,1
	ctx.r20.s64 = 1;
loc_82271860:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82271878
	if (ctx.cr6.eq) goto loc_82271878;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82271878:
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x82233bf8
	ctx.lr = 0x82271880;
	sub_82233BF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// beq cr6,0x8227189c
	if (ctx.cr6.eq) goto loc_8227189C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
loc_8227189C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// stw r9,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r6,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r6.u32);
	// stw r29,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
loc_822718D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822827D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x822827D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82282804
	if (ctx.cr6.eq) goto loc_82282804;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82282810
	if (!ctx.cr6.eq) goto loc_82282810;
loc_82282804:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82282950
	goto loc_82282950;
loc_82282810:
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// lhz r29,0(r27)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82282964
	if (ctx.cr6.gt) goto loc_82282964;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82282964
	if (ctx.cr6.gt) goto loc_82282964;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822828bc
	if (!ctx.cr6.eq) goto loc_822828BC;
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82282864
	if (ctx.cr6.eq) goto loc_82282864;
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82282890
	if (!ctx.cr6.eq) goto loc_82282890;
loc_82282864:
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82282884
	if (!ctx.cr6.eq) goto loc_82282884;
	// bl 0x82235608
	ctx.lr = 0x82282880;
	sub_82235608(ctx, base);
	// b 0x82282888
	goto loc_82282888;
loc_82282884:
	// bl 0x82234fb8
	ctx.lr = 0x82282888;
	sub_82234FB8(ctx, base);
loc_82282888:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82282950
	if (ctx.cr6.lt) goto loc_82282950;
loc_82282890:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822828bc
	if (!ctx.cr6.eq) goto loc_822828BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f000
	ctx.lr = 0x822828B0;
	sub_8227F000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228294c
	if (ctx.cr6.lt) goto loc_8228294C;
	// lhz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_822828BC:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822828f4
	if (ctx.cr6.eq) goto loc_822828F4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822828f4
	if (ctx.cr6.eq) goto loc_822828F4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ea40
	ctx.lr = 0x822828E8;
	sub_8227EA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228294c
	if (ctx.cr6.lt) goto loc_8228294C;
	// lhz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_822828F4:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228292c
	if (ctx.cr6.eq) goto loc_8228292C;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228292c
	if (ctx.cr6.eq) goto loc_8228292C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ec10
	ctx.lr = 0x82282920;
	sub_8227EC10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228294c
	if (ctx.cr6.lt) goto loc_8228294C;
	// lhz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8228292C:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82282950
	if (!ctx.cr6.eq) goto loc_82282950;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282188
	ctx.lr = 0x82282948;
	sub_82282188(ctx, base);
	// b 0x82282950
	goto loc_82282950;
loc_8228294C:
	// lhz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_82282950:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8228296c
	if (ctx.cr6.eq) goto loc_8228296C;
	// sth r29,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_82282964:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8228296C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228A848) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228A898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284bf8
	ctx.lr = 0x8228A8B8;
	sub_82284BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284a28
	ctx.lr = 0x8228A8D8;
	sub_82284A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284890
	ctx.lr = 0x8228A8F8;
	sub_82284890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284600
	ctx.lr = 0x8228A918;
	sub_82284600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284600
	ctx.lr = 0x8228A938;
	sub_82284600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228a9a8
	if (ctx.cr6.lt) goto loc_8228A9A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,27352
	ctx.r11.s64 = ctx.r11.s64 + 27352;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8228A950:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228a970
	if (!ctx.cr0.eq) goto loc_8228A970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8228a950
	if (!ctx.cr6.eq) goto loc_8228A950;
loc_8228A970:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8228a990
	if (!ctx.cr6.eq) goto loc_8228A990;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8228a990
	if (!ctx.cr6.eq) goto loc_8228A990;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8228a99c
	if (ctx.cr6.eq) goto loc_8228A99C;
loc_8228A990:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x8228a9a8
	goto loc_8228A9A8;
loc_8228A99C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8228A9A8:
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

DEFINE_REX_FUNC(sub_8228F2A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8228F2B0;
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
	// bne cr6,0x8228f2dc
	if (!ctx.cr6.eq) goto loc_8228F2DC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_8228F2DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8228f3b8
	if (ctx.cr6.eq) goto loc_8228F3B8;
loc_8228F2F0:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x8228f3b8
	if (ctx.cr6.lt) goto loc_8228F3B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228f3a8
	if (!ctx.cr6.eq) goto loc_8228F3A8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8228F324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228f3b8
	if (ctx.cr6.lt) goto loc_8228F3B8;
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
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8228f36c
	if (ctx.cr6.eq) goto loc_8228F36C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x8228f374
	goto loc_8228F374;
loc_8228F36C:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8228F374:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x8228f390
	if (!ctx.cr0.eq) goto loc_8228F390;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_8228F390:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82277480
	ctx.lr = 0x8228F3A0;
	sub_82277480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228f3b8
	if (ctx.cr6.lt) goto loc_8228F3B8;
loc_8228F3A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8228f2f0
	if (!ctx.cr6.eq) goto loc_8228F2F0;
loc_8228F3B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822922A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204244
	ctx.lr = 0x822922A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r22,32767
	ctx.r22.s64 = 32767;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822922d0
	if (!ctx.cr6.eq) goto loc_822922D0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82252200
	ctx.lr = 0x822922D0;
	sub_82252200(ctx, base);
loc_822922D0:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822924b0
	if (ctx.cr6.eq) goto loc_822924B0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_822922E8:
	// lwz r10,356(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 356);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// add r29,r24,r11
	ctx.r29.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwzx r9,r25,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x822923fc
	if (ctx.cr6.eq) goto loc_822923FC;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8229230C:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r19,0(r11)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,-2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x82251c80
	ctx.lr = 0x82292338;
	sub_82251C80(ctx, base);
	// lwz r10,424(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// extsh r28,r19
	ctx.r28.s64 = ctx.r19.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// bl 0x82251d50
	ctx.lr = 0x82292368;
	sub_82251D50(ctx, base);
	// lwz r5,60(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x82292394
	if (ctx.cr6.gt) goto loc_82292394;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x822923bc
	goto loc_822923BC;
loc_82292394:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 424);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r8,-2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
loc_822923BC:
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 256);
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229230c
	if (ctx.cr6.lt) goto loc_8229230C;
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82292484
	if (!ctx.cr6.gt) goto loc_82292484;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822923f0
	if (!ctx.cr6.lt) goto loc_822923F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822923F0:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82292484
	goto loc_82292484;
loc_822923FC:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82292438
	if (!ctx.cr6.eq) goto loc_82292438;
	// lhz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x82292438
	if (ctx.cr6.eq) goto loc_82292438;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82292504
	if (ctx.cr6.gt) goto loc_82292504;
	// lhz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 132);
	// lhz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 128);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
loc_82292438:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82292478
	if (!ctx.cr6.gt) goto loc_82292478;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x8229245c
	if (ctx.cr6.lt) goto loc_8229245C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8229245C:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 360);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r7,r25,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r6.u32);
loc_82292478:
	// lwz r11,356(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 356);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stwx r10,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82292484:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82292498
	if (!ctx.cr6.lt) goto loc_82292498;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_82292498:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,1776
	ctx.r24.s64 = ctx.r24.s64 + 1776;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822922e8
	if (ctx.cr6.lt) goto loc_822922E8;
loc_822924B0:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292538
	if (ctx.cr6.eq) goto loc_82292538;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x822924cc
	if (ctx.cr6.eq) goto loc_822924CC;
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 256);
	// clrlwi r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
loc_822924CC:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822924e0
	if (!ctx.cr6.lt) goto loc_822924E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822924E0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8229252c
	if (!ctx.cr6.eq) goto loc_8229252C;
	// lhz r10,210(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 210);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sth r8,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r8.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
loc_82292504:
	// lhz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 124);
	// lhz r9,122(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 122);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x82292438
	goto loc_82292438;
loc_8229252C:
	// sth r11,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
loc_82292538:
	// sth r22,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r22.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A3730) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r3,-10428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10428);
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822A3810) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32672
	ctx.r3.s64 = -2141192192;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3C68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x822A3C70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x822a3ca8
	if (!ctx.cr6.gt) goto loc_822A3CA8;
loc_822A3C98:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_822A3CA8:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a3c98
	if (!ctx.cr6.eq) goto loc_822A3C98;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r26,r8,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bl 0x822b4250
	ctx.lr = 0x822A3CF4;
	sub_822B4250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a3d14
	if (ctx.cr6.eq) goto loc_822A3D14;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822a3d24
	if (!ctx.cr6.eq) goto loc_822A3D24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x822a3d24
	goto loc_822A3D24;
loc_822A3D14:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_822A3D24:
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// std r11,0(r27)
	REX_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// beq cr6,0x822a3d3c
	if (ctx.cr6.eq) goto loc_822A3D3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_822A3D3C:
	// bl 0x822a3760
	ctx.lr = 0x822A3D40;
	sub_822A3760(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A7A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x822A7A18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r3,664
	ctx.r4.s64 = ctx.r3.s64 + 664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a44f0
	ctx.lr = 0x822A7A2C;
	sub_822A44F0(ctx, base);
	// lhz r11,580(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a7b4c
	if (!ctx.cr6.gt) goto loc_822A7B4C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_822A7A4C:
	// lwz r10,584(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// bl 0x82203a90
	ctx.lr = 0x822A7A70;
	sub_82203A90(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// stw r28,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stw r28,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r28.u32);
	// stw r28,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822a7ac4
	if (!ctx.cr6.gt) goto loc_822A7AC4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822A7A94:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x822a5da0
	ctx.lr = 0x822A7AA8;
	sub_822A5DA0(ctx, base);
	// lhz r9,182(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a7a94
	if (ctx.cr6.lt) goto loc_822A7A94;
loc_822A7AC4:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// stw r28,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// stw r28,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r25,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r25.u32);
	// stw r28,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r28.u32);
	// stw r28,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// bne cr6,0x822a7b2c
	if (!ctx.cr6.eq) goto loc_822A7B2C;
	// lhz r11,182(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// stw r28,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a7b2c
	if (!ctx.cr6.gt) goto loc_822A7B2C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822A7AFC:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a5e88
	ctx.lr = 0x822A7B14;
	sub_822A5E88(ctx, base);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a7afc
	if (ctx.cr6.lt) goto loc_822A7AFC;
loc_822A7B2C:
	// lhz r10,580(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x822a7a4c
	if (ctx.cr6.lt) goto loc_822A7A4C;
loc_822A7B4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AEC88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822aec98
	if (!ctx.cr6.eq) goto loc_822AEC98;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_822AEC98:
	// lwz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822aecc8
	if (ctx.cr6.eq) goto loc_822AECC8;
	// lwz r10,15364(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822aecc8
	if (!ctx.cr6.eq) goto loc_822AECC8;
	// lwz r10,15432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822aecc8
	if (!ctx.cr6.eq) goto loc_822AECC8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_822AECC8:
	// lwz r10,15536(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x822aecec
	if (!ctx.cr6.lt) goto loc_822AECEC;
	// lwz r10,14888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822aed1c
	if (ctx.cr6.eq) goto loc_822AED1C;
	// lwz r10,14912(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// lwz r11,14916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// b 0x822aed24
	goto loc_822AED24;
loc_822AECEC:
	// lwz r10,21888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822aed1c
	if (!ctx.cr6.eq) goto loc_822AED1C;
	// lwz r10,14836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822aed1c
	if (!ctx.cr6.gt) goto loc_822AED1C;
	// ld r10,3632(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// ble cr6,0x822aed1c
	if (!ctx.cr6.gt) goto loc_822AED1C;
	// lwz r10,22084(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22084);
	// lwz r11,22088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// b 0x822aed24
	goto loc_822AED24;
loc_822AED1C:
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
loc_822AED24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822aed30
	if (ctx.cr6.eq) goto loc_822AED30;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_822AED30:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822aed3c
	if (ctx.cr6.eq) goto loc_822AED3C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_822AED3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B4A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x822B4A90;
	__savegprlr_27(ctx, base);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r28,0(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r30,22024(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 22024);
	// bne cr6,0x822b4ab8
	if (!ctx.cr6.eq) goto loc_822B4AB8;
	// li r10,-256
	ctx.r10.s64 = -256;
	// b 0x822b4ac8
	goto loc_822B4AC8;
loc_822B4AB8:
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_822B4AC8:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b4b20
	if (ctx.cr6.eq) goto loc_822B4B20;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822b4b20
	if (!ctx.cr6.gt) goto loc_822B4B20;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4afc
	if (!ctx.cr6.eq) goto loc_822B4AFC;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822b4b08
	if (ctx.cr6.eq) goto loc_822B4B08;
loc_822B4AFC:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r10,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822B4B08:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_822B4B20:
	// addi r31,r28,-1
	ctx.r31.s64 = ctx.r28.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x822b4bcc
	if (!ctx.cr6.lt) goto loc_822B4BCC;
	// subf r11,r7,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B4B4C:
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822b4bac
	if (!ctx.cr6.eq) goto loc_822B4BAC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4b88
	if (!ctx.cr6.eq) goto loc_822B4B88;
	// rlwinm r27,r11,0,16,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r27,768
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 768, ctx.xer);
	// bne cr6,0x822b4b88
	if (!ctx.cr6.eq) goto loc_822B4B88;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r8,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822b4bbc
	goto loc_822B4BBC;
loc_822B4B88:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4bac
	if (!ctx.cr6.eq) goto loc_822B4BAC;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x822b4bac
	if (!ctx.cr6.eq) goto loc_822B4BAC;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r8,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822b4bbc
	goto loc_822B4BBC;
loc_822B4BAC:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_822B4BBC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x822b4b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B4B4C;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
loc_822B4BCC:
	// bne cr6,0x822b4c94
	if (!ctx.cr6.eq) goto loc_822B4C94;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4c5c
	if (!ctx.cr6.eq) goto loc_822B4C5C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822b4bf4
	if (ctx.cr6.eq) goto loc_822B4BF4;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822B4BF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4d18
	if (!ctx.cr6.eq) goto loc_822B4D18;
	// add. r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x822b4d18
	if (!ctx.cr0.gt) goto loc_822B4D18;
	// add r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
loc_822B4C18:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822b4c2c
	if (!ctx.cr6.lt) goto loc_822B4C2C;
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822b4d18
	if (!ctx.cr6.eq) goto loc_822B4D18;
loc_822B4C2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhw r8,r9,r11
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt cr6,0x822b4c18
	if (ctx.cr6.lt) goto loc_822B4C18;
	// b 0x822b4d18
	goto loc_822B4D18;
loc_822B4C5C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	// b 0x822b4d18
	goto loc_822B4D18;
loc_822B4C88:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x822b4d18
	goto loc_822B4D18;
loc_822B4C94:
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822b4d18
	if (!ctx.cr6.eq) goto loc_822B4D18;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4d0c
	if (!ctx.cr6.eq) goto loc_822B4D0C;
	// add. r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x822b4d18
	if (!ctx.cr0.gt) goto loc_822B4D18;
	// add r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
loc_822B4CC8:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822b4cdc
	if (!ctx.cr6.lt) goto loc_822B4CDC;
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822b4d18
	if (!ctx.cr6.eq) goto loc_822B4D18;
loc_822B4CDC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhw r8,r9,r11
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt cr6,0x822b4cc8
	if (ctx.cr6.lt) goto loc_822B4CC8;
	// b 0x822b4d18
	goto loc_822B4D18;
loc_822B4D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822B4D18:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,22024(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22024);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// lwz r11,22024(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22024);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CF9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204238
	ctx.lr = 0x822CF9D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,364(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r18,356(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cfa44
	if (ctx.cr6.eq) goto loc_822CFA44;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,738
	ctx.r9.s64 = ctx.r11.s64 + 738;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// b 0x822cfa54
	goto loc_822CFA54;
loc_822CFA44:
	// lwz r11,2916(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2916);
	// lwz r10,2928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2928);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_822CFA54:
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// addi r23,r11,31128
	ctx.r23.s64 = ctx.r11.s64 + 31128;
	// addi r27,r10,31400
	ctx.r27.s64 = ctx.r10.s64 + 31400;
	// addi r25,r9,14248
	ctx.r25.s64 = ctx.r9.s64 + 14248;
loc_822CFA78:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822cfaa0
	if (ctx.cr6.lt) goto loc_822CFAA0;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2096(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x82325388
	ctx.lr = 0x822CFA9C;
	sub_82325388(ctx, base);
	// b 0x822cfac8
	goto loc_822CFAC8;
loc_822CFAA0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822cfabc
	if (!ctx.cr6.eq) goto loc_822CFABC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x822cba60
	ctx.lr = 0x822CFAB8;
	sub_822CBA60(ctx, base);
	// b 0x822cfac8
	goto loc_822CFAC8;
loc_822CFABC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// bl 0x822ccf88
	ctx.lr = 0x822CFAC8;
	sub_822CCF88(ctx, base);
loc_822CFAC8:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfec0
	if (!ctx.cr6.eq) goto loc_822CFEC0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823171c8
	ctx.lr = 0x822CFAF8;
	sub_823171C8(ctx, base);
	// lwz r9,15536(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// beq cr6,0x822cfb38
	if (ctx.cr6.eq) goto loc_822CFB38;
	// lwz r11,1764(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r5,1764(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x822cfb88
	goto loc_822CFB88;
loc_822CFB38:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + ctx.r20.u64;
	// srawi r9,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 18;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_822CFB88:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316d00
	ctx.lr = 0x822CFBB4;
	sub_82316D00(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfec0
	if (!ctx.cr6.eq) goto loc_822CFEC0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x822cfbd0
	if (!ctx.cr6.eq) goto loc_822CFBD0;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
loc_822CFBD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x822cfa78
	if (ctx.cr6.lt) goto loc_822CFA78;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r28,r10,14504
	ctx.r28.s64 = ctx.r10.s64 + 14504;
	// addi r27,r9,-30040
	ctx.r27.s64 = ctx.r9.s64 + -30040;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x822cfc20
	if (ctx.cr6.lt) goto loc_822CFC20;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2100(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// bl 0x82325388
	ctx.lr = 0x822CFC1C;
	sub_82325388(ctx, base);
	// b 0x822cfc48
	goto loc_822CFC48;
loc_822CFC20:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822cfc3c
	if (!ctx.cr6.eq) goto loc_822CFC3C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x822cba60
	ctx.lr = 0x822CFC38;
	sub_822CBA60(ctx, base);
	// b 0x822cfc48
	goto loc_822CFC48;
loc_822CFC3C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x822ccf88
	ctx.lr = 0x822CFC48;
	sub_822CCF88(ctx, base);
loc_822CFC48:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfec0
	if (!ctx.cr6.eq) goto loc_822CFEC0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823171c8
	ctx.lr = 0x822CFC70;
	sub_823171C8(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cfcb0
	if (ctx.cr6.eq) goto loc_822CFCB0;
	// lwz r9,1764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,304(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r4,1764(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mullw r11,r6,r3
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x822cfd04
	goto loc_822CFD04;
loc_822CFCB0:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + ctx.r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_822CFD04:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r8,4
	ctx.r8.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822cfd40
	if (ctx.cr6.eq) goto loc_822CFD40;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82316d00
	ctx.lr = 0x822CFD3C;
	sub_82316D00(ctx, base);
	// b 0x822cfd50
	goto loc_822CFD50;
loc_822CFD40:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82316d00
	ctx.lr = 0x822CFD50;
	sub_82316D00(ctx, base);
loc_822CFD50:
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfec0
	if (!ctx.cr6.eq) goto loc_822CFEC0;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x822cfd8c
	if (ctx.cr6.lt) goto loc_822CFD8C;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2100(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// bl 0x82325388
	ctx.lr = 0x822CFD88;
	sub_82325388(ctx, base);
	// b 0x822cfdb4
	goto loc_822CFDB4;
loc_822CFD8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822cfda8
	if (!ctx.cr6.eq) goto loc_822CFDA8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x822cba60
	ctx.lr = 0x822CFDA4;
	sub_822CBA60(ctx, base);
	// b 0x822cfdb4
	goto loc_822CFDB4;
loc_822CFDA8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x822ccf88
	ctx.lr = 0x822CFDB4;
	sub_822CCF88(ctx, base);
loc_822CFDB4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822cfec0
	if (!ctx.cr6.eq) goto loc_822CFEC0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823171c8
	ctx.lr = 0x822CFDDC;
	sub_823171C8(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cfe1c
	if (ctx.cr6.eq) goto loc_822CFE1C;
	// lwz r9,1764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822cfe70
	goto loc_822CFE70;
loc_822CFE1C:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwz r7,1764(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + ctx.r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,304(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1764(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_822CFE70:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r8,5
	ctx.r8.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822cfeb0
	if (ctx.cr6.eq) goto loc_822CFEB0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82316d00
	ctx.lr = 0x822CFEA8;
	sub_82316D00(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
loc_822CFEB0:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82316d00
	ctx.lr = 0x822CFEC0;
	sub_82316D00(ctx, base);
loc_822CFEC0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204288
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E2128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x822E2130;
	__savegprlr_20(ctx, base);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E214C:
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r5,r4,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r3,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mulli r3,r3,1892
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r4,r4,784
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(784));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r3,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// srawi r7,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 7;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r6,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r5,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x822e214c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E214C;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r26,r11,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r25,r11,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r24,r11,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r23,r11,r7
	ctx.r23.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r22,r11,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_822E222C:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r6,r22,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r5,r24,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r4,r25,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r3,r23,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r31,r26,r11
	ctx.r31.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// lhzx r29,r9,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r6,3406
	ctx.r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,2276
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(2276));
	// mulli r6,r28,2408
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mulli r6,r5,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r5,r4,4017
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(4017));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// srawi r6,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 3;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(1108));
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r21,r3,3784
	ctx.r21.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r3,r31,1568
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1568));
	// subf r27,r4,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r28,r5,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// subf r21,r21,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r21.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r20,r27,r28
	ctx.r20.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r30,r31,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 3;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 3;
	// subf r28,r27,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r21,r20,181
	ctx.r21.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(181));
	// subf r29,r29,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r30,r31,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r31.u64;
	// mulli r28,r28,181
	ctx.r28.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(181));
	// addi r27,r21,128
	ctx.r27.s64 = ctx.r21.s64 + 128;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 8;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r3,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 8;
	// srawi r28,r27,14
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 14;
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// sthx r28,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u16);
	// srawi r29,r29,14
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 14;
	// add r28,r30,r6
	ctx.r28.u64 = ctx.r30.u64 + ctx.r6.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// srawi r27,r27,14
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 14;
	// srawi r31,r28,14
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 14;
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r4,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 14;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r5,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 14;
	// sthx r27,r26,r11
	REX_STORE_U16(ctx.r26.u32 + ctx.r11.u32, ctx.r27.u16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sthx r31,r25,r11
	REX_STORE_U16(ctx.r25.u32 + ctx.r11.u32, ctx.r31.u16);
	// srawi r4,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 14;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sthx r6,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sthx r3,r24,r11
	REX_STORE_U16(ctx.r24.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r8,r23,r11
	REX_STORE_U16(ctx.r23.u32 + ctx.r11.u32, ctx.r8.u16);
	// sthx r7,r22,r11
	REX_STORE_U16(ctx.r22.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x822e222c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E222C;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EFF28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x822EFF30;
	__savegprlr_21(ctx, base);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r8,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// sth r6,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lbz r5,-1(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lbz r4,1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r4,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// lbz r3,-2(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lbz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r6,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r6.u16);
	// lbz r5,-3(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -3);
	// sth r5,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r4.u16);
	// lbz r3,-4(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -4);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lbz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// sth r6,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// lbz r5,-5(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -5);
	// sth r5,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// sth r4,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
	// lbz r3,-6(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -6);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// sth r6,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r6.u16);
	// lbz r5,-7(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + -7);
	// sth r5,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// sth r4,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r4.u16);
	// lbz r3,-8(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + -8);
	// sth r3,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r3.u16);
	// lbzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// sth r6,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r6.u16);
	// sth r8,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// sth r5,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r5.u16);
	// sth r8,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// sth r4,46(r11)
	REX_STORE_U16(ctx.r11.u32 + 46, ctx.r4.u16);
	// sth r8,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r8.u16);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,32(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r3.u32);
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// stw r9,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzu r6,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// srawi r30,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 1;
	// lwz r25,-8(r10)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r7,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 1;
	// lwz r24,-12(r10)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r28,44(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r23,40(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r4,r26,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,4(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// stw r9,-124(r1)
	REX_STORE_U32(ctx.r1.u32 + -124, ctx.r9.u32);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// lwz r22,12(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r25,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,36(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// stw r29,-120(r1)
	REX_STORE_U32(ctx.r1.u32 + -120, ctx.r29.u32);
	// rlwinm r4,r3,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// stw r7,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r23,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r26,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// add r8,r5,r28
	ctx.r8.u64 = ctx.r5.u64 + ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r5,r21,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r4,r24,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,-116(r1)
	REX_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// rlwinm r26,r22,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// rlwinm r31,r25,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// stw r6,-140(r1)
	REX_STORE_U32(ctx.r1.u32 + -140, ctx.r6.u32);
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// stw r8,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r8.u32);
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// stw r5,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stw r4,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r4.u32);
	// li r28,10
	ctx.r28.s64 = 10;
loc_822F0180:
	// clrlwi r27,r28,31
	ctx.r27.u64 = ctx.r28.u32 & 0x1;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822f0194
	if (!ctx.cr6.eq) goto loc_822F0194;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_822F0194:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r26,r28,-1
	ctx.r26.s64 = ctx.r28.s64 + -1;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// clrlwi r29,r26,31
	ctx.r29.u64 = ctx.r26.u32 & 0x1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x822f0234
	if (!ctx.cr6.eq) goto loc_822F0234;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_822F0234:
	// lhz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x822f02cc
	if (!ctx.cr6.eq) goto loc_822F02CC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_822F02CC:
	// lhz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r26
	ctx.r30.s64 = ctx.r26.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x822f0364
	if (!ctx.cr6.eq) goto loc_822F0364;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_822F0364:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// bne cr6,0x822f03fc
	if (!ctx.cr6.eq) goto loc_822F03FC;
	// addi r5,r1,-204
	ctx.r5.s64 = ctx.r1.s64 + -204;
loc_822F03FC:
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r28,r28,-5
	ctx.r28.s64 = ctx.r28.s64 + -5;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r3,r31,181
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(181));
	// mulli r4,r4,181
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(181));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// srawi r31,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// extsh r30,r29
	ctx.r30.s64 = ctx.r29.s16;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// bdnz 0x822f0180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0180;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82308B68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204244
	ctx.lr = 0x82308B70;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// addi r24,r5,-5
	ctx.r24.s64 = ctx.r5.s64 + -5;
	// addi r25,r6,-5
	ctx.r25.s64 = ctx.r6.s64 + -5;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82308c14
	if (!ctx.cr6.gt) goto loc_82308C14;
	// addi r10,r8,31
	ctx.r10.s64 = ctx.r8.s64 + 31;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// srawi r26,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 5;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
loc_82308BAC:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82308c08
	if (!ctx.cr6.gt) goto loc_82308C08;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82308BC0:
	// lbzu r28,1(r27)
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82304c98
	ctx.lr = 0x82308BD8;
	sub_82304C98(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82304c98
	ctx.lr = 0x82308BF4;
	sub_82304C98(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82308bc0
	if (!ctx.cr0.eq) goto loc_82308BC0;
loc_82308C08:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// bne 0x82308bac
	if (!ctx.cr0.eq) goto loc_82308BAC;
loc_82308C14:
	// srawi. r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x82308c98
	if (!ctx.cr0.gt) goto loc_82308C98;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r20,-1
	ctx.r27.s64 = ctx.r20.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 5;
loc_82308C30:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82308c8c
	if (!ctx.cr6.gt) goto loc_82308C8C;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82308C44:
	// lbzu r28,1(r27)
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82304c98
	ctx.lr = 0x82308C5C;
	sub_82304C98(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82304c98
	ctx.lr = 0x82308C78;
	sub_82304C98(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82308c44
	if (!ctx.cr0.eq) goto loc_82308C44;
loc_82308C8C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bne 0x82308c30
	if (!ctx.cr0.eq) goto loc_82308C30;
loc_82308C98:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82308d20
	if (!ctx.cr6.gt) goto loc_82308D20;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 5;
loc_82308CB8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82308d14
	if (!ctx.cr6.gt) goto loc_82308D14;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82308CCC:
	// lbzu r28,1(r27)
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82304c98
	ctx.lr = 0x82308CE4;
	sub_82304C98(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82304c98
	ctx.lr = 0x82308D00;
	sub_82304C98(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82308ccc
	if (!ctx.cr0.eq) goto loc_82308CCC;
loc_82308D14:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x82308cb8
	if (!ctx.cr0.eq) goto loc_82308CB8;
loc_82308D20:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82204294
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230FBF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8230FBF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230fc94
	if (!ctx.cr6.gt) goto loc_8230FC94;
	// lwz r27,260(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r30,r11,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8230FC30:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fc54
	if (!ctx.cr6.gt) goto loc_8230FC54;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8230FC44:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8230fc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FC44;
loc_8230FC54:
	// bl 0x8230f848
	ctx.lr = 0x8230FC58;
	sub_8230F848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fc88
	if (!ctx.cr6.gt) goto loc_8230FC88;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_8230FC70:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x8230fc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FC70;
loc_8230FC88:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8230fc30
	if (!ctx.cr0.eq) goto loc_8230FC30;
loc_8230FC94:
	// lwz r29,252(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r27,268(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8230fd18
	if (!ctx.cr6.gt) goto loc_8230FD18;
	// subf r30,r28,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r28.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8230FCB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fcd8
	if (!ctx.cr6.gt) goto loc_8230FCD8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8230FCC8:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8230fcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FCC8;
loc_8230FCD8:
	// bl 0x8230f848
	ctx.lr = 0x8230FCDC;
	sub_8230F848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fd0c
	if (!ctx.cr6.gt) goto loc_8230FD0C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_8230FCF4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x8230fcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FCF4;
loc_8230FD0C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8230fcb4
	if (!ctx.cr0.eq) goto loc_8230FCB4;
loc_8230FD18:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8230fd8c
	if (!ctx.cr6.gt) goto loc_8230FD8C;
	// subf r30,r25,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_8230FD28:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fd4c
	if (!ctx.cr6.gt) goto loc_8230FD4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8230FD3C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8230fd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FD3C;
loc_8230FD4C:
	// bl 0x8230f848
	ctx.lr = 0x8230FD50;
	sub_8230F848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230fd80
	if (!ctx.cr6.gt) goto loc_8230FD80;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_8230FD68:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x8230fd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FD68;
loc_8230FD80:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8230fd28
	if (!ctx.cr0.eq) goto loc_8230FD28;
loc_8230FD8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82312890) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823128d4
	if (ctx.cr6.eq) goto loc_823128D4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823128d4
	if (ctx.cr6.gt) goto loc_823128D4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x823128c4
	if (!ctx.cr6.lt) goto loc_823128C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823128d0
	if (!ctx.cr6.eq) goto loc_823128D0;
loc_823128C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823128D0:
	// b 0x82312648
	sub_82312648(ctx, base);
	return;
loc_823128D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82312E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82312E10;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r8,r5,10
	ctx.r8.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 3;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// subf r7,r7,r22
	ctx.r7.u64 = ctx.r22.u64 - ctx.r7.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// subf r18,r4,r22
	ctx.r18.u64 = ctx.r22.u64 - ctx.r4.u64;
	// subf r16,r9,r22
	ctx.r16.u64 = ctx.r22.u64 - ctx.r9.u64;
	// add r17,r11,r22
	ctx.r17.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r15,r11,r22
	ctx.r15.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r14,r6,r22
	ctx.r14.u64 = ctx.r22.u64 - ctx.r6.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x82312e80
	goto loc_82312E80;
loc_82312E78:
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82312E80:
	// lbz r4,0(r15)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// add r21,r22,r20
	ctx.r21.u64 = ctx.r22.u64 + ctx.r20.u64;
	// lbz r24,0(r14)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r25,0(r16)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// subf r11,r4,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r4.u64;
	// lbz r6,0(r18)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// subf r10,r25,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r25.u64;
	// lbz r27,0(r22)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r23,0(r17)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r26,r22,r20
	ctx.r26.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// subfc r11,r5,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// lbzx r30,r21,r20
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r20.u32);
	// subf r10,r6,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r6.u64;
	// subfze r9,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r9.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r8,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r8.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r8.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r19,r27,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r27.u64;
	// subfze r10,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r10.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r5,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// add r5,r19,r31
	ctx.r5.u64 = ctx.r19.u64 + ctx.r31.u64;
	// subfze r8,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r8.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfc r11,r5,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfze r11,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r11.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312f68
	if (ctx.cr0.eq) goto loc_82312F68;
	// lbzx r10,r17,r20
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r20.u32);
	// subf r8,r23,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lbz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf r10,r10,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r9,r24,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r24.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// subfc r10,r5,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r29.u64 - ctx.r5.u64;
	// subfze r9,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r9.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r30,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r30.u64;
	// subfze r5,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r5.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subfc r10,r7,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r29.u64 - ctx.r7.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// subf r8,r26,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r26.u64;
	// subfze r7,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r7.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subfc r10,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subfze r8,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r8.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subfc r10,r5,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r29.u64 - ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r10,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ~ctx.r28.u32;
	ctx.r10.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82312F68:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82313030
	if (ctx.cr6.lt) goto loc_82313030;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82312c68
	ctx.lr = 0x82312F94;
	sub_82312C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82313030
	if (ctx.cr6.eq) goto loc_82313030;
	// add r10,r4,r25
	ctx.r10.u64 = ctx.r4.u64 + ctx.r25.u64;
	// lwz r25,108(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r30,r26
	ctx.r9.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r27,r5
	ctx.r6.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// subf r3,r25,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r25.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r6.u8);
	// stb r5,0(r18)
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r5.u8);
	// stb r4,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r4.u8);
	// b 0x82313120
	goto loc_82313120;
loc_82313030:
	// subf r10,r26,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r26.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r19,r11
	ctx.r7.u64 = ctx.r19.u64 + ctx.r11.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82313120
	if (!ctx.cr6.lt) goto loc_82313120;
	// subf r8,r6,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r6.u64;
	// subf r10,r4,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r4.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// subf r9,r23,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r23.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,2
	ctx.r30.s64 = ctx.r9.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823130c8
	if (!ctx.cr6.lt) goto loc_823130C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823130C8:
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82313120
	if (!ctx.cr0.gt) goto loc_82313120;
	// xor r10,r5,r19
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82313120
	if (!ctx.cr6.lt) goto loc_82313120;
	// srawi r10,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 31;
	// srawi r8,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r19.s32 >> 31;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r19,r8
	ctx.r7.u64 = ctx.r19.u64 ^ ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82313108
	if (!ctx.cr6.gt) goto loc_82313108;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82313108:
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r10,0(r18)
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r10.u8);
	// stb r9,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r9.u8);
loc_82313120:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// bne 0x82312e78
	if (!ctx.cr0.eq) goto loc_82312E78;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82328808) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x82328824
	if (!ctx.cr6.gt) goto loc_82328824;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82328824:
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,-2856
	ctx.r11.s64 = ctx.r11.s64 + -2856;
	// bne cr6,0x823288a8
	if (!ctx.cr6.eq) goto loc_823288A8;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,-112
	ctx.r7.s64 = ctx.r11.s64 + -112;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r5.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// lwzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r6,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r10.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x823288f8
	goto loc_823288F8;
loc_823288A8:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_823288F8:
	// stw r11,21844(r3)
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r11.u32);
	// bl 0x82328180
	ctx.lr = 0x82328900;
	sub_82328180(ctx, base);
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

DEFINE_REX_FUNC(sub_8232DB28) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8232d878
	sub_8232D878(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232DB58) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8232d878
	sub_8232D878(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232DB88) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DC58) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DC78) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232dcc0
	if (ctx.cr6.eq) goto loc_8232DCC0;
	// bl 0x822ba5c8
	ctx.lr = 0x8232DC9C;
	sub_822BA5C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
loc_8232DCC0:
	// li r11,1
	ctx.r11.s64 = 1;
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

DEFINE_REX_FUNC(sub_823308F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x823308F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82330920
	if (!ctx.cr6.lt) goto loc_82330920;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_82330920:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82330c20
	if (ctx.cr6.lt) goto loc_82330C20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// ori r27,r9,22857
	ctx.r27.u64 = ctx.r9.u64 | 22857;
	// ori r3,r5,13385
	ctx.r3.u64 = ctx.r5.u64 | 13385;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823309a4
	if (ctx.cr6.eq) goto loc_823309A4;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823309a4
	if (ctx.cr6.eq) goto loc_823309A4;
	// lis r9,12593
	ctx.r9.s64 = 825294848;
	// ori r5,r9,13392
	ctx.r5.u64 = ctx.r9.u64 | 13392;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823309a4
	if (ctx.cr6.eq) goto loc_823309A4;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823309c0
	goto loc_823309C0;
loc_823309A4:
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// srawi r5,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
loc_823309C0:
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82330c20
	if (!ctx.cr6.eq) goto loc_82330C20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// lwz r29,60(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82330c20
	if (ctx.cr6.eq) goto loc_82330C20;
	// lwz r28,32(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82330c20
	if (!ctx.cr6.eq) goto loc_82330C20;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82330c20
	if (!ctx.cr6.eq) goto loc_82330C20;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330c20
	if (!ctx.cr6.eq) goto loc_82330C20;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330c20
	if (!ctx.cr6.eq) goto loc_82330C20;
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82330aac
	if (ctx.cr6.eq) goto loc_82330AAC;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r7,r8,21849
	ctx.r7.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82330a70
	if (!ctx.cr6.eq) goto loc_82330A70;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82330a5c
	if (ctx.cr6.eq) goto loc_82330A5C;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// addi r8,r8,-7536
	ctx.r8.s64 = ctx.r8.s64 + -7536;
	// addi r7,r7,-6832
	ctx.r7.s64 = ctx.r7.s64 + -6832;
	// b 0x82330aa4
	goto loc_82330AA4;
loc_82330A5C:
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// addi r8,r8,-8752
	ctx.r8.s64 = ctx.r8.s64 + -8752;
	// addi r7,r7,-8056
	ctx.r7.s64 = ctx.r7.s64 + -8056;
	// b 0x82330aa4
	goto loc_82330AA4;
loc_82330A70:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82330aac
	if (ctx.cr6.eq) goto loc_82330AAC;
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ori r7,r8,13392
	ctx.r7.u64 = ctx.r8.u64 | 13392;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82330a94
	if (!ctx.cr6.eq) goto loc_82330A94;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
loc_82330A94:
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// addi r8,r8,-5416
	ctx.r8.s64 = ctx.r8.s64 + -5416;
	// addi r7,r7,-4208
	ctx.r7.s64 = ctx.r7.s64 + -4208;
loc_82330AA4:
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_82330AAC:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82330af4
	if (!ctx.cr6.eq) goto loc_82330AF4;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330af4
	if (!ctx.cr6.eq) goto loc_82330AF4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82203350
	ctx.lr = 0x82330AE8;
	sub_82203350(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_82330AF4:
	// lwz r30,28(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82330b3c
	if (!ctx.cr6.eq) goto loc_82330B3C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82330b24
	if (!ctx.cr6.eq) goto loc_82330B24;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x82330b34
	if (!ctx.cr6.lt) goto loc_82330B34;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x82330b34
	if (ctx.cr6.eq) goto loc_82330B34;
	// b 0x82330b3c
	goto loc_82330B3C;
loc_82330B24:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82330b34
	if (ctx.cr6.eq) goto loc_82330B34;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82330b3c
	if (!ctx.cr6.eq) goto loc_82330B3C;
loc_82330B34:
	// stw r6,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_82330B3C:
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82330b60
	if (!ctx.cr6.eq) goto loc_82330B60;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82330b9c
	if (!ctx.cr6.eq) goto loc_82330B9C;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x82330bac
	if (!ctx.cr6.lt) goto loc_82330BAC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82330bac
	if (ctx.cr6.eq) goto loc_82330BAC;
loc_82330B60:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82330c14
	if (!ctx.cr6.eq) goto loc_82330C14;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330bf0
	if (!ctx.cr6.eq) goto loc_82330BF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330bd0
	if (ctx.cr6.eq) goto loc_82330BD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f6a0
	ctx.lr = 0x82330B90;
	sub_8232F6A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_82330B9C:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82330bac
	if (ctx.cr6.eq) goto loc_82330BAC;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82330b60
	if (!ctx.cr6.eq) goto loc_82330B60;
loc_82330BAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330c14
	if (ctx.cr6.eq) goto loc_82330C14;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82330c14
	if (!ctx.cr6.eq) goto loc_82330C14;
	// b 0x82330c00
	goto loc_82330C00;
loc_82330BD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330bf0
	if (!ctx.cr6.eq) goto loc_82330BF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330BF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330c14
	if (ctx.cr6.eq) goto loc_82330C14;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
loc_82330C00:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_82330C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233EB20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8233EB28;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,372(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// xor r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8233eb74
	if (!ctx.cr6.eq) goto loc_8233EB74;
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// b 0x8233eb7c
	goto loc_8233EB7C;
loc_8233EB74:
	// srawi r11,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8233EB7C:
	// lwz r28,380(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8233eb9c
	if (ctx.cr6.eq) goto loc_8233EB9C;
	// srawi r6,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 1;
loc_8233EB9C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r16,356(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,364(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r21,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF0000;
	// lwz r26,396(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r9,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r31,r16,-1
	ctx.r31.s64 = ctx.r16.s64 + -1;
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r25,0
	ctx.r25.s64 = 0;
	// clrlwi r24,r27,30
	ctx.r24.u64 = ctx.r27.u32 & 0x3;
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// andc r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// ori r27,r25,32768
	ctx.r27.u64 = ctx.r25.u64 | 32768;
	// divw r25,r7,r31
	ctx.r25.u64 = uint32_t((ctx.r31.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r7.s32 / ctx.r31.s32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r3,r30
	ctx.r15.u64 = uint32_t((ctx.r30.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r3.s32 / ctx.r30.s32 : 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8233ec84
	if (!ctx.cr6.eq) goto loc_8233EC84;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8233ec84
	if (!ctx.cr6.eq) goto loc_8233EC84;
	// srawi r11,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 1;
	// li r30,17
	ctx.r30.s64 = 17;
	// rlwinm r24,r15,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r25,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r3,r26,-3
	ctx.r3.s64 = ctx.r26.s64 + -3;
	// bl 0x8233da88
	ctx.lr = 0x8233EC54;
	sub_8233DA88(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// bl 0x8233da88
	ctx.lr = 0x8233EC7C;
	sub_8233DA88(ctx, base);
	// lwz r17,116(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8233ed40
	goto loc_8233ED40;
loc_8233EC84:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r18,r27,r8
	ctx.r18.u64 = ctx.r8.u64 - ctx.r27.u64;
	// cmpw cr6,r18,r27
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8233ed40
	if (ctx.cr6.lt) goto loc_8233ED40;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// lwz r23,404(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r27,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_8233ECC4:
	// srawi r9,r24,17
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8233ed20
	if (ctx.cr6.lt) goto loc_8233ED20;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r31,r3,r20
	ctx.r31.u64 = ctx.r3.u64 + ctx.r20.u64;
	// add r30,r7,r23
	ctx.r30.u64 = ctx.r7.u64 + ctx.r23.u64;
	// rlwinm r29,r25,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_8233ECEC:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r14,r3,r9
	ctx.r14.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r26
	REX_STORE_U8(ctx.r8.u32 + ctx.r26.u32, ctx.r14.u8);
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x8233ecec
	if (!ctx.cr6.gt) goto loc_8233ECEC;
	// lwz r29,364(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r14,292(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_8233ED20:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x8233ecc4
	if (!ctx.cr6.gt) goto loc_8233ECC4;
	// lwz r19,300(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r23,372(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,380(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_8233ED40:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233ed98
	if (!ctx.cr6.eq) goto loc_8233ED98;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233ed98
	if (!ctx.cr6.eq) goto loc_8233ED98;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,340(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r14,-3
	ctx.r3.s64 = ctx.r14.s64 + -3;
	// bl 0x8233da88
	ctx.lr = 0x8233ED90;
	sub_8233DA88(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8233ED98:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r27,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r27.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8233ee40
	if (ctx.cr6.lt) goto loc_8233EE40;
	// srawi r11,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r27.u64;
loc_8233EDD4:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + ctx.r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8233ee30
	if (ctx.cr6.lt) goto loc_8233EE30;
	// lwz r7,340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r6,r26
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + ctx.r19.u64;
	// add r6,r9,r19
	ctx.r6.u64 = ctx.r9.u64 + ctx.r19.u64;
loc_8233EE0C:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r26,r7,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r26,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u8);
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x8233ee0c
	if (!ctx.cr6.gt) goto loc_8233EE0C;
loc_8233EE30:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8233edd4
	if (!ctx.cr6.gt) goto loc_8233EDD4;
loc_8233EE40:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234A7E8) {
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
	// b 0x8234a828
	goto loc_8234A828;
loc_8234A804:
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8234a7e8
	ctx.lr = 0x8234A820;
	sub_8234A7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239cbd0
	ctx.lr = 0x8234A828;
	sub_8239CBD0(ctx, base);
loc_8234A828:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a804
	if (!ctx.cr6.eq) goto loc_8234A804;
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

DEFINE_REX_FUNC(sub_8234B550) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8234B558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8234b794
	if (ctx.cr6.gt) goto loc_8234B794;
	// beq cr6,0x8234b738
	if (ctx.cr6.eq) goto loc_8234B738;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234b884
	if (!ctx.cr6.gt) goto loc_8234B884;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8234b70c
	if (!ctx.cr6.gt) goto loc_8234B70C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8234b604
	if (ctx.cr6.eq) goto loc_8234B604;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8234b884
	if (!ctx.cr6.eq) goto loc_8234B884;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b5ec
	if (!ctx.cr6.eq) goto loc_8234B5EC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234b5ec
	if (!ctx.cr6.eq) goto loc_8234B5EC;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B5EC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12160
	ctx.r6.s64 = ctx.r11.s64 + -12160;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B5F8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12240
	ctx.r6.s64 = ctx.r11.s64 + -12240;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B604:
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8234b654
	if (ctx.cr6.gt) goto loc_8234B654;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8234b70c
	if (!ctx.cr6.lt) goto loc_8234B70C;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234b66c
	if (ctx.cr6.lt) goto loc_8234B66C;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8234b70c
	if (!ctx.cr6.gt) goto loc_8234B70C;
	// lis r10,3073
	ctx.r10.s64 = 201392128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234b70c
	if (ctx.cr6.eq) goto loc_8234B70C;
	// lis r10,3074
	ctx.r10.s64 = 201457664;
	// b 0x8234b664
	goto loc_8234B664;
loc_8234B654:
	// lis r10,3329
	ctx.r10.s64 = 218169344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234b70c
	if (ctx.cr6.eq) goto loc_8234B70C;
	// lis r10,3330
	ctx.r10.s64 = 218234880;
loc_8234B664:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234b70c
	if (ctx.cr6.eq) goto loc_8234B70C;
loc_8234B66C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8234b70c
	if (!ctx.cr6.eq) goto loc_8234B70C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8234b6e0
	if (ctx.cr6.eq) goto loc_8234B6E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8234b70c
	if (!ctx.cr6.gt) goto loc_8234B70C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8234b70c
	if (ctx.cr6.gt) goto loc_8234B70C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234b6bc
	if (!ctx.cr6.eq) goto loc_8234B6BC;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// beq cr6,0x8234b6ac
	if (ctx.cr6.eq) goto loc_8234B6AC;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8234b6bc
	if (!ctx.cr6.eq) goto loc_8234B6BC;
loc_8234B6AC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b6bc
	if (!ctx.cr6.eq) goto loc_8234B6BC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234b714
	if (ctx.cr6.eq) goto loc_8234B714;
loc_8234B6BC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8234b6d4
	if (!ctx.cr6.eq) goto loc_8234B6D4;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b6d4
	if (!ctx.cr6.eq) goto loc_8234B6D4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8234b70c
	if (ctx.cr6.eq) goto loc_8234B70C;
loc_8234B6D4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12336
	ctx.r6.s64 = ctx.r11.s64 + -12336;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B6E0:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b700
	if (!ctx.cr6.eq) goto loc_8234B700;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234b700
	if (!ctx.cr6.eq) goto loc_8234B700;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b700
	if (!ctx.cr6.eq) goto loc_8234B700;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234b714
	if (ctx.cr6.eq) goto loc_8234B714;
loc_8234B700:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12396
	ctx.r6.s64 = ctx.r11.s64 + -12396;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B70C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b8a4
	if (!ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B714:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12464
	ctx.r6.s64 = ctx.r11.s64 + -12464;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B738:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b788
	if (!ctx.cr6.eq) goto loc_8234B788;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234b788
	if (!ctx.cr6.eq) goto loc_8234B788;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,13
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 13, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 14, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B788:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12528
	ctx.r6.s64 = ctx.r11.s64 + -12528;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B794:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x8234b884
	if (ctx.cr6.lt) goto loc_8234B884;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x8234b838
	if (!ctx.cr6.gt) goto loc_8234B838;
	// lis r10,242
	ctx.r10.s64 = 15859712;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8234b7f8
	if (ctx.cr6.eq) goto loc_8234B7F8;
	// lis r31,243
	ctx.r31.s64 = 15925248;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8234b884
	if (!ctx.cr6.eq) goto loc_8234B884;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b7ec
	if (!ctx.cr6.eq) goto loc_8234B7EC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234b7ec
	if (!ctx.cr6.eq) goto loc_8234B7EC;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B7EC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12600
	ctx.r6.s64 = ctx.r11.s64 + -12600;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B7F8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8234b80c
	if (!ctx.cr6.eq) goto loc_8234B80C;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8234b81c
	if (!ctx.cr6.eq) goto loc_8234B81C;
	// b 0x8234b824
	goto loc_8234B824;
loc_8234B80C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8234b81c
	if (ctx.cr6.eq) goto loc_8234B81C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8234b82c
	if (!ctx.cr6.eq) goto loc_8234B82C;
loc_8234B81C:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b82c
	if (!ctx.cr6.eq) goto loc_8234B82C;
loc_8234B824:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B82C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12688
	ctx.r6.s64 = ctx.r11.s64 + -12688;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B838:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b5f8
	if (!ctx.cr6.eq) goto loc_8234B5F8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8234b860
	if (!ctx.cr6.eq) goto loc_8234B860;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b860
	if (!ctx.cr6.eq) goto loc_8234B860;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B860:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8234b878
	if (!ctx.cr6.eq) goto loc_8234B878;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8234b878
	if (!ctx.cr6.eq) goto loc_8234B878;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8234b8a4
	if (ctx.cr6.eq) goto loc_8234B8A4;
loc_8234B878:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12760
	ctx.r6.s64 = ctx.r11.s64 + -12760;
	// b 0x8234b88c
	goto loc_8234B88C;
loc_8234B884:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-12840
	ctx.r6.s64 = ctx.r11.s64 + -12840;
loc_8234B88C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x8236cff0
	ctx.lr = 0x8234B89C;
	sub_8236CFF0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8234B8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82356028) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82356448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82356450;
	__savegprlr_25(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,32(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r27,r10,r6
	ctx.r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x82356534
	goto loc_82356534;
loc_82356474:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82356518
	if (!ctx.cr6.lt) goto loc_82356518;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r28,-2
	ctx.r7.s64 = ctx.r28.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823564B0:
	// lhz r26,6(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// andi. r4,r26,63519
	ctx.r4.u64 = ctx.r26.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// andi. r29,r9,63519
	ctx.r29.u64 = ctx.r9.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// andi. r31,r25,63519
	ctx.r31.u64 = ctx.r25.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r30,r8,63519
	ctx.r30.u64 = ctx.r8.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r5,r8,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E0;
	// rlwinm r9,r9,0,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E0;
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r25,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x7E0;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r5,r26,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x7E0;
	// addi r8,r8,4098
	ctx.r8.s64 = ctx.r8.s64 + 4098;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r8,r8,30,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFFF;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// rlwinm r8,r8,0,27,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF81F;
	// rlwinm r9,r9,30,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7E0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x823564b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823564B0;
loc_82356518:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82356534:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82356474
	if (ctx.cr6.lt) goto loc_82356474;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235AB18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x821f4a68
	ctx.lr = 0x8235AB40;
	sub_821F4A68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne 0x8235ab58
	if (!ctx.cr0.eq) goto loc_8235AB58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8235ac7c
	goto loc_8235AC7C;
loc_8235AB58:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8235ac34
	if (ctx.cr6.eq) goto loc_8235AC34;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-4464(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4464);
	ctx.f0.f64 = double(temp.f32);
loc_8235AB7C:
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,3(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x8235ab7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AB7C;
	// b 0x8235ac78
	goto loc_8235AC78;
loc_8235AC34:
	// li r10,256
	ctx.r10.s64 = 256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1952);
	ctx.f0.f64 = double(temp.f32);
loc_8235AC44:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8235ac44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AC44;
loc_8235AC78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235AC7C:
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

DEFINE_REX_FUNC(sub_82360F78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82360F80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360fa8
	if (ctx.cr6.eq) goto loc_82360FA8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8235ae10
	ctx.lr = 0x82360FA4;
	sub_8235AE10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82360FA8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82361000
	if (!ctx.cr6.gt) goto loc_82361000;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_82360FD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347f78
	ctx.lr = 0x82360FE8;
	sub_82347F78(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82360fd8
	if (ctx.cr6.lt) goto loc_82360FD8;
loc_82361000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82361998) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82361a6c
	if (!ctx.cr6.lt) goto loc_82361A6C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,-4464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4464);
	ctx.f0.f64 = double(temp.f32);
loc_823619F4:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823619f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823619F4;
loc_82361A6C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361a88
	if (ctx.cr6.eq) goto loc_82361A88;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x8235ad80
	ctx.lr = 0x82361A88;
	sub_8235AD80(ctx, base);
loc_82361A88:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361aa4
	if (ctx.cr6.eq) goto loc_82361AA4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x8235b150
	ctx.lr = 0x82361AA4;
	sub_8235B150(ctx, base);
loc_82361AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82362AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82362ba8
	if (!ctx.cr6.lt) goto loc_82362BA8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,-4392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4392);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
loc_82362B2C:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82362b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362B2C;
loc_82362BA8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82362bc4
	if (ctx.cr6.eq) goto loc_82362BC4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x8235ad80
	ctx.lr = 0x82362BC4;
	sub_8235AD80(ctx, base);
loc_82362BC4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82362be0
	if (ctx.cr6.eq) goto loc_82362BE0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x8235b150
	ctx.lr = 0x82362BE0;
	sub_8235B150(ctx, base);
loc_82362BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82365FA8) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365fec
	if (ctx.cr6.eq) goto loc_82365FEC;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365fec
	if (ctx.cr6.eq) goto loc_82365FEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82365FEC:
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

DEFINE_REX_FUNC(sub_82366E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82366EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// bl 0x82366b88
	ctx.lr = 0x82366EB0;
	sub_82366B88(ctx, base);
	// addi r11,r3,421
	ctx.r11.s64 = ctx.r3.s64 + 421;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x82366f00
	goto loc_82366F00;
loc_82366EC0:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82366EC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82366eec
	if (ctx.cr0.eq) goto loc_82366EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366ec8
	if (ctx.cr6.eq) goto loc_82366EC8;
loc_82366EEC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82366f08
	if (ctx.cr0.lt) goto loc_82366F08;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366f10
	if (ctx.cr6.eq) goto loc_82366F10;
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_82366F00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82366ec0
	if (!ctx.cr6.eq) goto loc_82366EC0;
loc_82366F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82366f74
	goto loc_82366F74;
loc_82366F10:
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82366f24
	if (ctx.cr0.eq) goto loc_82366F24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82366f74
	goto loc_82366F74;
loc_82366F24:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stb r11,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// b 0x82366f58
	goto loc_82366F58;
loc_82366F34:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82366f54
	if (!ctx.cr6.eq) goto loc_82366F54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82366e98
	ctx.lr = 0x82366F4C;
	sub_82366E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82366f60
	if (!ctx.cr0.eq) goto loc_82366F60;
loc_82366F54:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_82366F58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82366f34
	if (!ctx.cr6.eq) goto loc_82366F34;
loc_82366F60:
	// addi r11,r31,0
	ctx.r11.s64 = ctx.r31.s64 + 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stb r10,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r10.u8);
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82366F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236C410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8236C418;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236c4fc
	if (!ctx.cr6.lt) goto loc_8236C4FC;
loc_8236C444:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236c474
	if (!ctx.cr0.eq) goto loc_8236C474;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236c474
	if (!ctx.cr0.eq) goto loc_8236C474;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8220a418
	ctx.lr = 0x8236C460;
	sub_8220A418(ctx, base);
	// cmpwi cr6,r3,117
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 117, ctx.xer);
	// bne cr6,0x8236c474
	if (!ctx.cr6.eq) goto loc_8236C474;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8236C46C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8236c4f0
	goto loc_8236C4F0;
loc_8236C474:
	// clrlwi. r30,r25,24
	ctx.r30.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8236c4a0
	if (!ctx.cr0.eq) goto loc_8236C4A0;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236c4a0
	if (!ctx.cr0.eq) goto loc_8236C4A0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8220a418
	ctx.lr = 0x8236C490;
	sub_8220A418(ctx, base);
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// bne cr6,0x8236c4a0
	if (!ctx.cr6.eq) goto loc_8236C4A0;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8236c46c
	goto loc_8236C46C;
loc_8236C4A0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c4fc
	if (ctx.cr0.eq) goto loc_8236C4FC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8220a418
	ctx.lr = 0x8236C4C8;
	sub_8220A418(ctx, base);
	// cmpwi cr6,r3,105
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 105, ctx.xer);
	// bne cr6,0x8236c4fc
	if (!ctx.cr6.eq) goto loc_8236C4FC;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x8236c4fc
	if (!ctx.cr6.eq) goto loc_8236C4FC;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x8236c4fc
	if (!ctx.cr6.eq) goto loc_8236C4FC;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_8236C4F0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236c444
	if (ctx.cr6.lt) goto loc_8236C444;
loc_8236C4FC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8236c544
	if (ctx.cr6.eq) goto loc_8236C544;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c524
	if (ctx.cr0.eq) goto loc_8236C524;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8236c540
	goto loc_8236C540;
loc_8236C524:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c534
	if (ctx.cr0.eq) goto loc_8236C534;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8236c540
	goto loc_8236C540;
loc_8236C534:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c544
	if (ctx.cr0.eq) goto loc_8236C544;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8236C540:
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8236C544:
	// subf r3,r26,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823705C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823705D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82370634
	if (!ctx.cr6.gt) goto loc_82370634;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823705fc
	if (!ctx.cr6.eq) goto loc_823705FC;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x823705fc
	goto loc_823705FC;
loc_823705F8:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_823705FC:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823705f8
	if (ctx.cr6.lt) goto loc_823705F8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821f4a68
	ctx.lr = 0x82370610;
	sub_821F4A68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82370620
	if (!ctx.cr0.eq) goto loc_82370620;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82370638
	goto loc_82370638;
loc_82370620:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x821f4b88
	ctx.lr = 0x8237062C;
	sub_821F4B88(ctx, base);
	// stw r30,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r30.u32);
	// stw r31,156(r29)
	REX_STORE_U32(ctx.r29.u32 + 156, ctx.r31.u32);
loc_82370634:
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
loc_82370638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374990) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x82374998;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82374a68
	if (ctx.cr6.eq) goto loc_82374A68;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_823749C0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x82374a28
	goto loc_82374A28;
loc_823749DC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82374a30
	if (!ctx.cr6.eq) goto loc_82374A30;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,96(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82374a18
	if (!ctx.cr6.eq) goto loc_82374A18;
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r7.u32);
	// lwz r7,100(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r7,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r7.u32);
loc_82374A18:
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
loc_82374A28:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823749dc
	if (!ctx.cr6.eq) goto loc_823749DC;
loc_82374A30:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82374a5c
	if (ctx.cr0.eq) goto loc_82374A5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82374a60
	if (ctx.cr6.eq) goto loc_82374A60;
loc_82374A5C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82374A60:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823749c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823749C0;
loc_82374A68:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82374b1c
	if (ctx.cr6.eq) goto loc_82374B1C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82374b1c
	if (ctx.cr6.eq) goto loc_82374B1C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82374aec
	if (ctx.cr6.eq) goto loc_82374AEC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82374A88:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r30.u32 + 32);
	// bl 0x823cdb98
	ctx.lr = 0x82374AB0;
	sub_823CDB98(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82374b28
	if (ctx.cr6.eq) goto loc_82374B28;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blt cr6,0x82374a88
	if (ctx.cr6.lt) goto loc_82374A88;
loc_82374AEC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,120(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82374840
	ctx.lr = 0x82374B14;
	sub_82374840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82374b20
	if (ctx.cr0.lt) goto loc_82374B20;
loc_82374B1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374B20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
loc_82374B28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82374b20
	goto loc_82374B20;
}

DEFINE_REX_FUNC(sub_82386708) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823869a8
	if (!ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,48(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823867f0
	if (ctx.cr6.eq) goto loc_823867F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823867EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823867fc
	goto loc_823867FC;
loc_823867F0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823867FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386828
	if (ctx.cr6.eq) goto loc_82386828;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82386834
	goto loc_82386834;
loc_82386828:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82386834:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386860
	if (ctx.cr6.eq) goto loc_82386860;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238685C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8238686c
	goto loc_8238686C;
loc_82386860:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8238686C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386898
	if (ctx.cr6.eq) goto loc_82386898;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823868a4
	goto loc_823868A4;
loc_82386898:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823868A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823868d0
	if (ctx.cr6.eq) goto loc_823868D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823868CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823868dc
	goto loc_823868DC;
loc_823868D0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823868DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386908
	if (ctx.cr6.eq) goto loc_82386908;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82386914
	goto loc_82386914;
loc_82386908:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82386914:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386940
	if (ctx.cr6.eq) goto loc_82386940;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238693C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8238694c
	goto loc_8238694C;
loc_82386940:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8238694C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823869a0
	if (ctx.cr6.eq) goto loc_823869A0;
	// rlwinm. r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82386998
	if (ctx.cr0.eq) goto loc_82386998;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82386978:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82386998
	if (!ctx.cr0.eq) goto loc_82386998;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82386978
	if (!ctx.cr6.eq) goto loc_82386978;
loc_82386998:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823869a8
	if (!ctx.cr0.eq) goto loc_823869A8;
loc_823869A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823869ac
	goto loc_823869AC;
loc_823869A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823869AC:
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

DEFINE_REX_FUNC(sub_82388670) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x82388578
	if (ctx.cr6.eq) {
		sub_82388578(ctx, base);
		return;
	}
	// cmpwi cr6,r5,13
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 13, ctx.xer);
	// b 0x82388610
	sub_82388610(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82396788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220423c
	ctx.lr = 0x82396790;
	__savegprlr_17(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// beq cr6,0x823967c4
	if (ctx.cr6.eq) goto loc_823967C4;
	// lwz r28,8(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823967C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82386698
	ctx.lr = 0x823967CC;
	sub_82386698(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// addi r21,r17,16
	ctx.r21.s64 = ctx.r17.s64 + 16;
	// lwz r27,24(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239680c
	if (ctx.cr0.eq) goto loc_8239680C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3047
	ctx.r5.s64 = 3047;
	// addi r6,r11,-32080
	ctx.r6.s64 = ctx.r11.s64 + -32080;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82389c88
	ctx.lr = 0x8239680C;
	sub_82389C88(ctx, base);
loc_8239680C:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82396834
	if (ctx.cr0.eq) goto loc_82396834;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3006
	ctx.r5.s64 = 3006;
	// addi r6,r11,-32124
	ctx.r6.s64 = ctx.r11.s64 + -32124;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82389c88
	ctx.lr = 0x82396834;
	sub_82389C88(ctx, base);
loc_82396834:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8238a6e8
	ctx.lr = 0x82396840;
	sub_8238A6E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82396864
	if (!ctx.cr0.eq) goto loc_82396864;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3038
	ctx.r5.s64 = 3038;
	// addi r6,r11,-32168
	ctx.r6.s64 = ctx.r11.s64 + -32168;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82389c88
	ctx.lr = 0x82396864;
	sub_82389C88(ctx, base);
loc_82396864:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823968f0
	if (ctx.cr6.eq) goto loc_823968F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-32216
	ctx.r29.s64 = ctx.r11.s64 + -32216;
loc_8239687C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823968e4
	if (ctx.cr6.eq) goto loc_823968E4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823968e4
	if (!ctx.cr6.eq) goto loc_823968E4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823968bc
	if (ctx.cr6.eq) goto loc_823968BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x823968bc
	if (!ctx.cr6.eq) goto loc_823968BC;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x823968e4
	goto loc_823968E4;
loc_823968BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823968e4
	if (ctx.cr6.eq) goto loc_823968E4;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3044
	ctx.r5.s64 = 3044;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82389c88
	ctx.lr = 0x823968E4;
	sub_82389C88(ctx, base);
loc_823968E4:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239687c
	if (!ctx.cr6.eq) goto loc_8239687C;
loc_823968F0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82384480
	ctx.lr = 0x823968F8;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8239691c
	if (ctx.cr0.eq) goto loc_8239691C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,4348
	ctx.r6.s64 = ctx.r11.s64 + 4348;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x82396914;
	sub_82384648(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x82396920
	goto loc_82396920;
loc_8239691C:
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
loc_82396920:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82384480
	ctx.lr = 0x82396930;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396958
	if (ctx.cr0.eq) goto loc_82396958;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82385110
	ctx.lr = 0x82396950;
	sub_82385110(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8239695c
	goto loc_8239695C;
loc_82396958:
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
loc_8239695C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// stw r22,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r22.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823845c0
	ctx.lr = 0x82396970;
	sub_823845C0(ctx, base);
	// stw r3,20(r22)
	REX_STORE_U32(ctx.r22.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82384480
	ctx.lr = 0x82396984;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396998
	if (ctx.cr0.eq) goto loc_82396998;
	// bl 0x823860e0
	ctx.lr = 0x82396990;
	sub_823860E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239699c
	goto loc_8239699C;
loc_82396998:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_8239699C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// stw r31,24(r22)
	REX_STORE_U32(ctx.r22.u32 + 24, ctx.r31.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823969cc
	if (ctx.cr6.eq) goto loc_823969CC;
	// bl 0x823845c0
	ctx.lr = 0x823969C0;
	sub_823845C0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_823969CC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823969e8
	if (ctx.cr6.eq) goto loc_823969E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823845c0
	ctx.lr = 0x823969DC;
	sub_823845C0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_823969E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82396a04
	if (ctx.cr6.eq) goto loc_82396A04;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823845c0
	ctx.lr = 0x823969F8;
	sub_823845C0(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_82396A04:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8238a530
	ctx.lr = 0x82396A14;
	sub_8238A530(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82396a98
	if (ctx.cr6.eq) goto loc_82396A98;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396a48
	if (!ctx.cr6.eq) goto loc_82396A48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3076
	ctx.r5.s64 = 3076;
	// addi r6,r11,-32260
	ctx.r6.s64 = ctx.r11.s64 + -32260;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82389c88
	ctx.lr = 0x82396A44;
	sub_82389C88(ctx, base);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
loc_82396A48:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82396a98
	if (ctx.cr6.eq) goto loc_82396A98;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823845c0
	ctx.lr = 0x82396A58;
	sub_823845C0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_82396A64:
	// lwz r3,8(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396a8c
	if (ctx.cr6.eq) goto loc_82396A8C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82396a8c
	if (!ctx.cr6.eq) goto loc_82396A8C;
	// bl 0x823845c0
	ctx.lr = 0x82396A80;
	sub_823845C0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_82396A8C:
	// lwz r19,12(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82396a64
	if (!ctx.cr6.eq) goto loc_82396A64;
loc_82396A98:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823845c0
	ctx.lr = 0x82396AB4;
	sub_823845C0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
loc_82396AC0:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82390440
	ctx.lr = 0x82396AF0;
	sub_82390440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82396b08
	if (!ctx.cr0.lt) goto loc_82396B08;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,3003
	ctx.r5.s64 = 3003;
	// addi r6,r11,27788
	ctx.r6.s64 = ctx.r11.s64 + 27788;
	// b 0x82396b38
	goto loc_82396B38;
loc_82396B08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r23,132(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x82396d68
	if (!ctx.cr6.eq) goto loc_82396D68;
	// lwz r5,40(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 40);
	// bl 0x823886e0
	ctx.lr = 0x82396B24;
	sub_823886E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82396b54
	if (!ctx.cr0.eq) goto loc_82396B54;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// addi r6,r11,-32312
	ctx.r6.s64 = ctx.r11.s64 + -32312;
loc_82396B38:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82389c88
	ctx.lr = 0x82396B48;
	sub_82389C88(ctx, base);
loc_82396B48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82396B4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8220428c
	__restgprlr_17(ctx, base);
	return;
loc_82396B54:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r11.u32);
	// lwz r29,44(r23)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// lwz r30,44(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// b 0x82396cf4
	goto loc_82396CF4;
loc_82396B88:
	// lwz r27,8(r29)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82396d5c
	if (ctx.cr6.eq) goto loc_82396D5C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82396c34
	if (!ctx.cr6.eq) goto loc_82396C34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82396bc0
	if (ctx.cr6.eq) goto loc_82396BC0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396bc0
	if (ctx.cr6.eq) goto loc_82396BC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82396c14
	if (ctx.cr6.eq) goto loc_82396C14;
loc_82396BC0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82396BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82384480
	ctx.lr = 0x82396BE4;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396c00
	if (ctx.cr0.eq) goto loc_82396C00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82384648
	ctx.lr = 0x82396BFC;
	sub_82384648(ctx, base);
	// b 0x82396c04
	goto loc_82396C04;
loc_82396C00:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82396C04:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// stw r3,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82396C14:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,36(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82384598
	ctx.lr = 0x82396C2C;
	sub_82384598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82396d00
	if (ctx.cr0.eq) goto loc_82396D00;
loc_82396C34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// lwz r28,8(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// bne cr6,0x82396c8c
	if (!ctx.cr6.eq) goto loc_82396C8C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82396cec
	if (ctx.cr6.eq) goto loc_82396CEC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82396cec
	goto loc_82396CEC;
loc_82396C8C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82388500
	ctx.lr = 0x82396C9C;
	sub_82388500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82396CEC:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_82396CF4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82396b88
	if (!ctx.cr6.eq) goto loc_82396B88;
	// b 0x82396d5c
	goto loc_82396D5C;
loc_82396D00:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r6,r10,-32376
	ctx.r6.s64 = ctx.r10.s64 + -32376;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82389c88
	ctx.lr = 0x82396D28;
	sub_82389C88(ctx, base);
	// b 0x82396b48
	goto loc_82396B48;
loc_82396D2C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396d84
	if (ctx.cr6.eq) goto loc_82396D84;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_82396D5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82396d2c
	if (!ctx.cr6.eq) goto loc_82396D2C;
	// b 0x82396d84
	goto loc_82396D84;
loc_82396D68:
	// lwz r11,112(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8238a7b8
	ctx.lr = 0x82396D74;
	sub_8238A7B8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,112(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,112(r24)
	REX_STORE_U32(ctx.r24.u32 + 112, ctx.r11.u32);
loc_82396D84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r18,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x823845c0
	ctx.lr = 0x82396DA8;
	sub_823845C0(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823845c0
	ctx.lr = 0x82396DB4;
	sub_823845C0(ctx, base);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// beq cr6,0x82396dd0
	if (ctx.cr6.eq) goto loc_82396DD0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
loc_82396DD0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82396de0
	if (ctx.cr6.eq) goto loc_82396DE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396b48
	if (ctx.cr6.eq) goto loc_82396B48;
loc_82396DE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8238a530
	ctx.lr = 0x82396DEC;
	sub_8238A530(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823913f8
	ctx.lr = 0x82396DFC;
	sub_823913F8(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82396b48
	if (ctx.cr0.eq) goto loc_82396B48;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82396e44
	if (!ctx.cr6.eq) goto loc_82396E44;
	// lwz r30,20(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// bl 0x8238a0d0
	ctx.lr = 0x82396E2C;
	sub_8238A0D0(ctx, base);
	// stw r30,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82396b48
	if (ctx.cr0.lt) goto loc_82396B48;
	// lwz r11,108(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r24)
	REX_STORE_U32(ctx.r24.u32 + 108, ctx.r11.u32);
loc_82396E44:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r31,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r31.u32);
	// b 0x82396b4c
	goto loc_82396B4C;
}

DEFINE_REX_FUNC(sub_823A9EB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r6,r10,-2812
	ctx.r6.s64 = ctx.r10.s64 + -2812;
	// addi r5,r9,-2832
	ctx.r5.s64 = ctx.r9.s64 + -2832;
	// lwz r11,536(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,-2848
	ctx.r4.s64 = ctx.r8.s64 + -2848;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823B3278) {
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
	// addi r5,r11,2276
	ctx.r5.s64 = ctx.r11.s64 + 2276;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B32A4;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9650
	ctx.lr = 0x823B32AC;
	sub_823C9650(ctx, base);
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

DEFINE_REX_FUNC(sub_823B3570) {
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
	// addi r5,r11,2360
	ctx.r5.s64 = ctx.r11.s64 + 2360;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B359C;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9738
	ctx.lr = 0x823B35A4;
	sub_823C9738(ctx, base);
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

DEFINE_REX_FUNC(sub_823B38A8) {
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
	// addi r5,r11,2456
	ctx.r5.s64 = ctx.r11.s64 + 2456;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b2f68
	ctx.lr = 0x823B38D4;
	sub_823B2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8608
	ctx.lr = 0x823B38DC;
	sub_823C8608(ctx, base);
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

DEFINE_REX_FUNC(sub_823B3E70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B4C60) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r10,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r10,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// bl 0x823d64f8
	ctx.lr = 0x823B4C98;
	sub_823D64F8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B7440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x823B7448;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,5616
	ctx.r29.s64 = ctx.r11.s64 + 5616;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x823b4100
	ctx.lr = 0x823B74AC;
	sub_823B4100(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823b74e0
	if (!ctx.cr6.eq) goto loc_823B74E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x823b4100
	ctx.lr = 0x823B74E0;
	sub_823B4100(ctx, base);
loc_823B74E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b75d4
	if (!ctx.cr6.eq) goto loc_823B75D4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b7574
	if (ctx.cr6.eq) goto loc_823B7574;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,6880(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 6880);
loc_823B7504:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823b7590
	if (!ctx.cr6.eq) goto loc_823B7590;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823b7590
	if (ctx.cr0.eq) goto loc_823B7590;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823b7590
	if (!ctx.cr6.eq) goto loc_823B7590;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823b7590
	if (!ctx.cr6.eq) goto loc_823B7590;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823b7504
	if (ctx.cr6.lt) goto loc_823B7504;
loc_823B7574:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x823b7598
	if (ctx.cr6.eq) goto loc_823B7598;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x823b75a0
	goto loc_823B75A0;
loc_823B7590:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b75d4
	goto loc_823B75D4;
loc_823B7598:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_823B75A0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b75d0
	if (ctx.cr6.eq) goto loc_823B75D0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_823B75B4:
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823b75b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B75B4;
loc_823B75D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B75D4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BDB38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823BDB40;
	__savegprlr_29(ctx, base);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,20(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r31,r30,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bdb7c
	if (ctx.cr0.eq) goto loc_823BDB7C;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x823bdce0
	goto loc_823BDCE0;
loc_823BDB7C:
	// rlwinm. r10,r6,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bdb90
	if (ctx.cr0.eq) goto loc_823BDB90;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
loc_823BDB90:
	// rlwinm. r10,r6,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bdbac
	if (ctx.cr0.eq) goto loc_823BDBAC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
loc_823BDBAC:
	// rlwinm. r10,r6,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bdbc8
	if (ctx.cr0.eq) goto loc_823BDBC8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
loc_823BDBC8:
	// rlwinm. r10,r6,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823bdbe4
	if (ctx.cr0.eq) goto loc_823BDBE4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
loc_823BDBE4:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823bdbf0
	if (!ctx.cr6.gt) goto loc_823BDBF0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823BDBF0:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823bdc5c
	if (ctx.cr6.eq) goto loc_823BDC5C;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_823BDC0C:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823bdc34
	if (!ctx.cr6.eq) goto loc_823BDC34;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823bdc0c
	if (ctx.cr6.lt) goto loc_823BDC0C;
loc_823BDC34:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823bdc5c
	if (!ctx.cr6.lt) goto loc_823BDC5C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,-52
	ctx.r9.s64 = ctx.r1.s64 + -52;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BDC4C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823bdc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BDC4C;
	// b 0x823bdc74
	goto loc_823BDC74;
loc_823BDC5C:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r1,-52
	ctx.r10.s64 = ctx.r1.s64 + -52;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823BDC6C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bdc6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BDC6C;
loc_823BDC74:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823bdcb4
	if (ctx.cr6.eq) goto loc_823BDCB4;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_823BDC8C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// bdnz 0x823bdc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BDC8C;
loc_823BDCB4:
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r1,-52
	ctx.r9.s64 = ctx.r1.s64 + -52;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BDCC8:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823bdcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BDCC8;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_823BDCE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823C71E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823C71E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,12(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x823cc888
	ctx.lr = 0x823C720C;
	sub_823CC888(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823cc888
	ctx.lr = 0x823C721C;
	sub_823CC888(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x823cc888
	ctx.lr = 0x823C722C;
	sub_823CC888(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x823cc888
	ctx.lr = 0x823C723C;
	sub_823CC888(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x823c7590
	if (ctx.cr6.eq) goto loc_823C7590;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7590
	if (ctx.cr6.eq) goto loc_823C7590;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7590
	if (ctx.cr6.eq) goto loc_823C7590;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7590
	if (ctx.cr6.eq) goto loc_823C7590;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C728C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c6570
	ctx.lr = 0x823C7298;
	sub_823C6570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C72D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C72FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C7324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
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
	ctx.lr = 0x823C735C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C7388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C73B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
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
	ctx.lr = 0x823C73E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C7414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C743C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
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
	ctx.lr = 0x823C7474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C74A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C74C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
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
	ctx.lr = 0x823C7500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C752C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C7554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C7570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bdd88
	ctx.lr = 0x823C7580;
	sub_823BDD88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823c7598
	if (ctx.cr0.lt) goto loc_823C7598;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823c7598
	goto loc_823C7598;
loc_823C7590:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823C7598:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D5A88) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x823D5A90;
	__savegprlr_27(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d5bec
	if (ctx.cr0.eq) goto loc_823D5BEC;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r11,r10,r5
	ctx.r11.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x823d5bec
	if (ctx.cr0.eq) goto loc_823D5BEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823D5ABC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d5b64
	if (ctx.cr6.eq) goto loc_823D5B64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823D5AD0:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823d5b58
	if (ctx.cr6.eq) goto loc_823D5B58;
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x823d5b58
	if (!ctx.cr6.eq) goto loc_823D5B58;
	// lwz r29,24(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r27,4400
	ctx.r27.s64 = 288358400;
	// rlwinm r28,r28,0,0,11
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFF00000;
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823d5b40
	if (!ctx.cr6.eq) goto loc_823D5B40;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// b 0x823d5b58
	goto loc_823D5B58;
loc_823D5B40:
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r29,64(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r30,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r30.u32);
loc_823D5B58:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823d5ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5AD0;
loc_823D5B64:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d5be0
	if (ctx.cr6.eq) goto loc_823D5BE0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823D5B74:
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823d5bd8
	if (ctx.cr6.eq) goto loc_823D5BD8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823d5bd8
	if (!ctx.cr6.eq) goto loc_823D5BD8;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d5bd8
	if (ctx.cr6.eq) goto loc_823D5BD8;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_823D5BD8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823d5b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5B74;
loc_823D5BE0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// bne 0x823d5abc
	if (!ctx.cr0.eq) goto loc_823D5ABC;
loc_823D5BEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E3FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204248
	ctx.lr = 0x823E3FF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823e4024
	if (ctx.cr6.eq) goto loc_823E4024;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_823E4024:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r20,-1
	ctx.r20.s64 = -1;
	// lwzx r21,r10,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823e43a8
	if (!ctx.cr6.eq) goto loc_823E43A8;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823e43a8
	if (!ctx.cr6.eq) goto loc_823E43A8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e407c
	if (!ctx.cr6.lt) goto loc_823E407C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e43a8
	if (ctx.cr6.lt) goto loc_823E43A8;
loc_823E407C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x823e41e8
	if (!ctx.cr6.eq) goto loc_823E41E8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e4220
	if (!ctx.cr6.gt) goto loc_823E4220;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823E40A0:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r28,r5
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x823e4108
	if (ctx.cr6.eq) goto loc_823E4108;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
loc_823E40DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823e4100
	if (ctx.cr6.eq) goto loc_823E4100;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e40dc
	if (ctx.cr6.lt) goto loc_823E40DC;
loc_823E4100:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e41d0
	if (ctx.cr6.lt) goto loc_823E41D0;
loc_823E4108:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823e4170
	if (ctx.cr6.eq) goto loc_823E4170;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x823e4170
	if (ctx.cr6.eq) goto loc_823E4170;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
loc_823E4144:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823e4168
	if (ctx.cr6.eq) goto loc_823E4168;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e4144
	if (ctx.cr6.lt) goto loc_823E4144;
loc_823E4168:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e41d0
	if (ctx.cr6.lt) goto loc_823E41D0;
loc_823E4170:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823d5e58
	ctx.lr = 0x823E4190;
	sub_823D5E58(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823e41d0
	if (!ctx.cr6.lt) goto loc_823E41D0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x823e4218
	if (ctx.cr6.eq) goto loc_823E4218;
loc_823E41D0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e40a0
	if (ctx.cr6.lt) goto loc_823E40A0;
	// b 0x823e4218
	goto loc_823E4218;
loc_823E41E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r26,r10,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x823d5e58
	ctx.lr = 0x823E4214;
	sub_823D5E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823E4218:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x823e4254
	if (!ctx.cr6.eq) goto loc_823E4254;
loc_823E4220:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e4248
	if (ctx.cr0.eq) goto loc_823E4248;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r5,4004
	ctx.r5.s64 = 4004;
	// addi r6,r10,15040
	ctx.r6.s64 = ctx.r10.s64 + 15040;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823df090
	ctx.lr = 0x823E4248;
	sub_823DF090(ctx, base);
loc_823E4248:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e43d8
	goto loc_823E43D8;
loc_823E4254:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,204(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e42ec
	if (ctx.cr0.eq) goto loc_823E42EC;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823e42ec
	if (!ctx.cr6.lt) goto loc_823E42EC;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823e42a8
	if (ctx.cr6.eq) goto loc_823E42A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E4294:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823e4294
	if (!ctx.cr6.eq) goto loc_823E4294;
loc_823E42A8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823e42dc
	if (!ctx.cr6.lt) goto loc_823E42DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E42B8:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e42b8
	if (ctx.cr6.lt) goto loc_823E42B8;
loc_823E42DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r26.u32);
loc_823E42EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
loc_823E42F4:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x823e4398
	if (ctx.cr6.eq) goto loc_823E4398;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823e4380
	if (ctx.cr6.eq) goto loc_823E4380;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E4344:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,20(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r4,88(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r5,88(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x823e4380
	if (!ctx.cr6.gt) goto loc_823E4380;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823e4344
	if (!ctx.cr6.eq) goto loc_823E4344;
loc_823E4380:
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r5,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_823E4398:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x823e42f4
	if (ctx.cr6.lt) goto loc_823E42F4;
loc_823E43A8:
	// lwz r5,8(r21)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x823e43d4
	if (ctx.cr6.eq) goto loc_823E43D4;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823e3fe8
	ctx.lr = 0x823E43CC;
	sub_823E3FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e43d8
	if (ctx.cr0.lt) goto loc_823E43D8;
loc_823E43D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E43D8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F4268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x823F4270;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, ctx.r4.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r5,804(r1)
	REX_STORE_U32(ctx.r1.u32 + 804, ctx.r5.u32);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x82203a90
	ctx.lr = 0x823F42A8;
	sub_82203A90(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r20,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// std r20,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r20.u64);
	// std r20,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r20.u64);
	// bl 0x82203a90
	ctx.lr = 0x823F42C8;
	sub_82203A90(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// std r20,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r20.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r20,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r20.u64);
	// std r20,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r20.u64);
	// std r20,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r20.u64);
	// std r20,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r20.u64);
	// std r20,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r20.u64);
	// std r20,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r20.u64);
	// std r20,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r20.u64);
	// std r20,16(r7)
	REX_STORE_U64(ctx.r7.u32 + 16, ctx.r20.u64);
	// ble cr6,0x823f4340
	if (!ctx.cr6.gt) goto loc_823F4340;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823F4310:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f432c
	if (!ctx.cr6.eq) goto loc_823F432C;
	// stw r17,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r17.u32);
loc_823F432C:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f4310
	if (ctx.cr6.lt) goto loc_823F4310;
loc_823F4340:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4914
	if (ctx.cr6.eq) goto loc_823F4914;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f4914
	if (ctx.cr6.eq) goto loc_823F4914;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_823F4364:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f4900
	if (ctx.cr6.eq) goto loc_823F4900;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4900
	if (ctx.cr0.eq) goto loc_823F4900;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f4900
	if (ctx.cr6.eq) goto loc_823F4900;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f46fc
	if (ctx.cr6.eq) goto loc_823F46FC;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f4454
	if (ctx.cr6.eq) goto loc_823F4454;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823F4404:
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823f4428
	if (!ctx.cr6.eq) goto loc_823F4428;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// b 0x823f442c
	goto loc_823F442C;
loc_823F4428:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_823F442C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f4404
	if (ctx.cr6.lt) goto loc_823F4404;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823f4454
	if (ctx.cr6.eq) goto loc_823F4454;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823f4900
	if (ctx.cr6.eq) goto loc_823F4900;
	// li r5,4808
	ctx.r5.s64 = 4808;
	// b 0x823f4bb8
	goto loc_823F4BB8;
loc_823F4454:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r22,r21,1
	ctx.r22.s64 = ctx.r21.s64 + 1;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r23,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3070
	ctx.lr = 0x823F4480;
	sub_823F3070(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3070
	ctx.lr = 0x823F44AC;
	sub_823F3070(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823F44B0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x823f2f10
	ctx.lr = 0x823F44CC;
	sub_823F2F10(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x823f2f10
	ctx.lr = 0x823F44E4;
	sub_823F2F10(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823f44b0
	if (!ctx.cr6.eq) goto loc_823F44B0;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823f4534
	if (!ctx.cr6.eq) goto loc_823F4534;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_823F4534:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823F453C:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r5,564(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3b00
	ctx.lr = 0x823F4560;
	sub_823F3B00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f555c
	if (ctx.cr0.lt) goto loc_823F555C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823f45c4
	if (ctx.cr6.eq) goto loc_823F45C4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f45b4
	if (ctx.cr6.eq) goto loc_823F45B4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823F457C:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x823f45a4
	if (!ctx.cr6.gt) goto loc_823F45A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823f457c
	if (ctx.cr6.lt) goto loc_823F457C;
	// b 0x823f45a8
	goto loc_823F45A8;
loc_823F45A4:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_823F45A8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f45d4
	if (!ctx.cr6.eq) goto loc_823F45D4;
	// b 0x823f45c4
	goto loc_823F45C4;
loc_823F45B4:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x823f45e0
	if (!ctx.cr6.gt) goto loc_823F45E0;
loc_823F45C4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// blt cr6,0x823f453c
	if (ctx.cr6.lt) goto loc_823F453C;
loc_823F45D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f45e0
	if (ctx.cr6.eq) goto loc_823F45E0;
	// stw r27,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
loc_823F45E0:
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// beq cr6,0x823f4b64
	if (ctx.cr6.eq) goto loc_823F4B64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823f46dc
	if (ctx.cr6.eq) goto loc_823F46DC;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
loc_823F4608:
	// lwz r14,0(r30)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r25.u32);
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x823f10a0
	ctx.lr = 0x823F4638;
	sub_823F10A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f10a0
	ctx.lr = 0x823F4654;
	sub_823F10A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f4660
	if (!ctx.cr6.gt) goto loc_823F4660;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823F4660:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f4680
	if (ctx.cr6.lt) goto loc_823F4680;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f4680
	if (!ctx.cr6.eq) goto loc_823F4680;
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stwx r18,r27,r11
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r18.u32);
loc_823F4680:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f4694
	if (ctx.cr6.eq) goto loc_823F4694;
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// stwx r18,r27,r10
	REX_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r18.u32);
loc_823F4694:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823f46a4
	if (!ctx.cr6.eq) goto loc_823F46A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f46a8
	if (ctx.cr6.eq) goto loc_823F46A8;
loc_823F46A4:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_823F46A8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x823f46b4
	if (!ctx.cr6.gt) goto loc_823F46B4;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_823F46B4:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r3,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// bne 0x823f4608
	if (!ctx.cr0.eq) goto loc_823F4608;
loc_823F46DC:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r24,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u32);
	// stwx r26,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u32);
	// bl 0x823f3228
	ctx.lr = 0x823F46F8;
	sub_823F3228(ctx, base);
	// b 0x823f4900
	goto loc_823F4900;
loc_823F46FC:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3070
	ctx.lr = 0x823F4734;
	sub_823F3070(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823F4738:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x823f2f10
	ctx.lr = 0x823F4754;
	sub_823F2F10(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x823f2f10
	ctx.lr = 0x823F476C;
	sub_823F2F10(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x823f4738
	if (!ctx.cr6.eq) goto loc_823F4738;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823f4870
	if (!ctx.cr6.gt) goto loc_823F4870;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r27,r21,1
	ctx.r27.s64 = ctx.r21.s64 + 1;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823F47A0:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r21,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r21.u32);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r11,r23,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r4.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823f10a0
	ctx.lr = 0x823F47E4;
	sub_823F10A0(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823f10a0
	ctx.lr = 0x823F4810;
	sub_823F10A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f481c
	if (!ctx.cr6.gt) goto loc_823F481C;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823F481C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f482c
	if (ctx.cr6.eq) goto loc_823F482C;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_823F482C:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823f4838
	if (!ctx.cr6.gt) goto loc_823F4838;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_823F4838:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f47a0
	if (ctx.cr6.lt) goto loc_823F47A0;
loc_823F4870:
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
	// stwx r26,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u32);
	// beq cr6,0x823f48f4
	if (ctx.cr6.eq) goto loc_823F48F4;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_823F489C:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r21,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r21.u32);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x823f10a0
	ctx.lr = 0x823F48C8;
	sub_823F10A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f48d4
	if (!ctx.cr6.gt) goto loc_823F48D4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823F48D4:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x823f489c
	if (!ctx.cr0.eq) goto loc_823F489C;
loc_823F48F4:
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_823F4900:
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplw cr6,r21,r6
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823f4364
	if (ctx.cr6.lt) goto loc_823F4364;
loc_823F4914:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5528
	if (ctx.cr6.eq) goto loc_823F5528;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f5528
	if (ctx.cr6.eq) goto loc_823F5528;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,6880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_823F4938:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// rlwinm r15,r14,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r15
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f5514
	if (ctx.cr6.eq) goto loc_823F5514;
	// rotlwi r23,r10,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f5514
	if (ctx.cr0.eq) goto loc_823F5514;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5514
	if (ctx.cr6.eq) goto loc_823F5514;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29232
	ctx.r10.s64 = 1915748352;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29264
	ctx.r10.s64 = 1917845504;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29280
	ctx.r10.s64 = 1918894080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29296
	ctx.r10.s64 = 1919942656;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29312
	ctx.r10.s64 = 1920991232;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29344
	ctx.r10.s64 = 1923088384;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29328
	ctx.r10.s64 = 1922039808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29360
	ctx.r10.s64 = 1924136960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5360
	if (ctx.cr6.eq) goto loc_823F5360;
	// lis r10,29216
	ctx.r10.s64 = 1914699776;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5514
	if (ctx.cr6.eq) goto loc_823F5514;
	// lis r10,29248
	ctx.r10.s64 = 1916796928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f5514
	if (ctx.cr6.eq) goto loc_823F5514;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x823f4b20
	if (!ctx.cr6.eq) goto loc_823F4B20;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// divwu. r28,r8,r11
	ctx.r28.u64 = uint32_t(ctx.r11.u32 ? ctx.r8.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x823f4b20
	if (ctx.cr0.eq) goto loc_823F4B20;
	// lwz r30,8(r23)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4A78:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// beq cr6,0x823f4ae0
	if (ctx.cr6.eq) goto loc_823F4AE0;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823F4A98:
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r26,4(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823f4ad0
	if (!ctx.cr6.eq) goto loc_823F4AD0;
	// lwz r26,8(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r25,8(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823f4ad0
	if (!ctx.cr6.eq) goto loc_823F4AD0;
	// lwz r26,12(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f4ae0
	if (ctx.cr6.eq) goto loc_823F4AE0;
loc_823F4AD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f4a98
	if (ctx.cr6.lt) goto loc_823F4A98;
loc_823F4AE0:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f4b08
	if (!ctx.cr6.eq) goto loc_823F4B08;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f4b08
	if (!ctx.cr6.eq) goto loc_823F4B08;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823f4b08
	if (ctx.cr6.lt) goto loc_823F4B08;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_823F4B08:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823f4a78
	if (ctx.cr6.lt) goto loc_823F4A78;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bgt cr6,0x823f5568
	if (ctx.cr6.gt) goto loc_823F5568;
loc_823F4B20:
	// lwz r9,12(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f4bd8
	if (ctx.cr6.eq) goto loc_823F4BD8;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823F4B40:
	// lwz r4,16(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x823f4b90
	if (!ctx.cr6.eq) goto loc_823F4B90;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823f4b94
	goto loc_823F4B94;
loc_823F4B64:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r5,4521
	ctx.r5.s64 = 4521;
	// addi r6,r10,21524
	ctx.r6.s64 = ctx.r10.s64 + 21524;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x823f4bc4
	goto loc_823F4BC4;
loc_823F4B90:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823F4B94:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f4b40
	if (ctx.cr6.lt) goto loc_823F4B40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823f4bd8
	if (ctx.cr6.eq) goto loc_823F4BD8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823f5514
	if (ctx.cr6.eq) goto loc_823F5514;
	// li r5,4809
	ctx.r5.s64 = 4809;
loc_823F4BB8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,21612
	ctx.r6.s64 = ctx.r11.s64 + 21612;
loc_823F4BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823df090
	ctx.lr = 0x823F4BCC;
	sub_823DF090(ctx, base);
loc_823F4BCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823f555c
	goto loc_823F555C;
loc_823F4BD8:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r17,r14,1
	ctx.r17.s64 = ctx.r14.s64 + 1;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3070
	ctx.lr = 0x823F4C04;
	sub_823F3070(ctx, base);
	// lwz r16,96(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823F4C08:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// bl 0x823f2f10
	ctx.lr = 0x823F4C24;
	sub_823F2F10(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x823f2f10
	ctx.lr = 0x823F4C3C;
	sub_823F2F10(ctx, base);
	// lwz r16,96(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x823f4c08
	if (!ctx.cr6.eq) goto loc_823F4C08;
	// lhz r26,202(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,258
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 258, ctx.xer);
	// beq cr6,0x823f4c64
	if (ctx.cr6.eq) goto loc_823F4C64;
	// cmplwi cr6,r26,259
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 259, ctx.xer);
	// bne cr6,0x823f4cc4
	if (!ctx.cr6.eq) goto loc_823F4CC4;
loc_823F4C64:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f4cc4
	if (!ctx.cr6.eq) goto loc_823F4CC4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4ca8
	if (!ctx.cr6.eq) goto loc_823F4CA8;
	// lwz r27,12(r8)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_823F4CA8:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4cc4
	if (!ctx.cr6.eq) goto loc_823F4CC4;
	// lwz r28,12(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_823F4CC4:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823f4d84
	if (ctx.cr6.eq) goto loc_823F4D84;
	// lwz r3,552(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_823F4CDC:
	// cmplw cr6,r17,r3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823f4d70
	if (!ctx.cr6.lt) goto loc_823F4D70;
	// subf r9,r17,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r17.u64;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F4CF8:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f4d68
	if (ctx.cr6.eq) goto loc_823F4D68;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,28912
	ctx.r9.s64 = 1894776832;
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4d68
	if (!ctx.cr6.eq) goto loc_823F4D68;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// beq 0x823f4d68
	if (ctx.cr0.eq) goto loc_823F4D68;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_823F4D30:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f4d54
	if (ctx.cr6.eq) goto loc_823F4D54;
	// lwz r25,20(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f4d58
	if (!ctx.cr6.eq) goto loc_823F4D58;
loc_823F4D54:
	// li r29,1
	ctx.r29.s64 = 1;
loc_823F4D58:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823f4d30
	if (ctx.cr6.lt) goto loc_823F4D30;
loc_823F4D68:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823f4cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F4CF8;
loc_823F4D70:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x823f4cdc
	if (!ctx.cr0.eq) goto loc_823F4CDC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823f4d94
	if (!ctx.cr6.eq) goto loc_823F4D94;
loc_823F4D84:
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1104);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4d98
	if (!ctx.cr6.eq) goto loc_823F4D98;
loc_823F4D94:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_823F4D98:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r7,r11,r15
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823f4e2c
	if (!ctx.cr6.eq) goto loc_823F4E2C;
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f4e2c
	if (ctx.cr6.eq) goto loc_823F4E2C;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1, ctx.xer);
	// bne cr6,0x823f4e2c
	if (!ctx.cr6.eq) goto loc_823F4E2C;
	// lwz r11,480(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f4e2c
	if (!ctx.cr6.eq) goto loc_823F4E2C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823f4e2c
	if (ctx.cr6.eq) goto loc_823F4E2C;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
loc_823F4DF8:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x823f4e10
	if (!ctx.cr6.gt) goto loc_823F4E10;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x823f4e24
	if (!ctx.cr6.gt) goto loc_823F4E24;
loc_823F4E10:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// blt cr6,0x823f4df8
	if (ctx.cr6.lt) goto loc_823F4DF8;
loc_823F4E24:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// bne cr6,0x823f4e74
	if (!ctx.cr6.eq) goto loc_823F4E74;
loc_823F4E2C:
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r18,r11,r8
	temp.u8 = (~ctx.r11.u32 + ctx.r8.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r18.u64 = ~ctx.r11.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// bge cr6,0x823f4e74
	if (!ctx.cr6.lt) goto loc_823F4E74;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823F4E48:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x823f4e64
	if (ctx.cr6.gt) goto loc_823F4E64;
	// cmplw cr6,r18,r27
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823f4e64
	if (ctx.cr6.eq) goto loc_823F4E64;
	// cmplw cr6,r18,r28
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823f4e74
	if (!ctx.cr6.eq) goto loc_823F4E74;
loc_823F4E64:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// blt cr6,0x823f4e48
	if (ctx.cr6.lt) goto loc_823F4E48;
loc_823F4E74:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x823f4e90
	if (ctx.cr6.eq) goto loc_823F4E90;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823f4e90
	if (!ctx.cr6.eq) goto loc_823F4E90;
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f5594
	if (!ctx.cr6.eq) goto loc_823F5594;
loc_823F4E90:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// beq cr6,0x823f55b4
	if (ctx.cr6.eq) goto loc_823F55B4;
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f52bc
	if (!ctx.cr6.eq) goto loc_823F52BC;
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 260, ctx.xer);
	// bge cr6,0x823f52bc
	if (!ctx.cr6.lt) goto loc_823F52BC;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823f52bc
	if (!ctx.cr6.eq) goto loc_823F52BC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823f3290
	ctx.lr = 0x823F4EF0;
	sub_823F3290(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f4f08
	if (ctx.cr6.eq) goto loc_823F4F08;
	// li r19,4
	ctx.r19.s64 = 4;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// b 0x823f4f0c
	goto loc_823F4F0C;
loc_823F4F08:
	// lwz r19,108(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823F4F0C:
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// bge cr6,0x823f4f20
	if (!ctx.cr6.lt) goto loc_823F4F20;
	// li r19,3
	ctx.r19.s64 = 3;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
loc_823F4F20:
	// ble cr6,0x823f4f2c
	if (!ctx.cr6.gt) goto loc_823F4F2C;
	// li r19,4
	ctx.r19.s64 = 4;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
loc_823F4F2C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x823ccf08
	ctx.lr = 0x823F4F34;
	sub_823CCF08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4f48
	if (ctx.cr0.eq) goto loc_823F4F48;
	// bl 0x823cc810
	ctx.lr = 0x823F4F40;
	sub_823CC810(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x823f4f4c
	goto loc_823F4F4C;
loc_823F4F48:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_823F4F4C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823f55d4
	if (ctx.cr6.eq) goto loc_823F55D4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ccfa0
	ctx.lr = 0x823F4F74;
	sub_823CCFA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f555c
	if (ctx.cr0.lt) goto loc_823F555C;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r11,r15
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// bl 0x823cc860
	ctx.lr = 0x823F4F8C;
	sub_823CC860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f555c
	if (ctx.cr0.lt) goto loc_823F555C;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82203350
	ctx.lr = 0x823F4FB0;
	sub_82203350(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r21,12(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203350
	ctx.lr = 0x823F4FCC;
	sub_82203350(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r27,r11,r15
	REX_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r27.u32);
	// bl 0x823cda28
	ctx.lr = 0x823F4FE0;
	sub_823CDA28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f555c
	if (ctx.cr0.lt) goto loc_823F555C;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823f5240
	if (ctx.cr6.eq) goto loc_823F5240;
	// addi r22,r1,160
	ctx.r22.s64 = ctx.r1.s64 + 160;
loc_823F4FFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r23,0(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823f5230
	if (!ctx.cr6.gt) goto loc_823F5230;
	// li r24,0
	ctx.r24.s64 = 0;
loc_823F5014:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// lwzx r28,r24,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// beq cr6,0x823f5030
	if (ctx.cr6.eq) goto loc_823F5030;
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823f521c
	if (!ctx.cr6.eq) goto loc_823F521C;
loc_823F5030:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823f50b4
	if (ctx.cr6.eq) goto loc_823F50B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823F5040:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdb98
	ctx.lr = 0x823F5058;
	sub_823CDB98(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823f55d4
	if (ctx.cr6.eq) goto loc_823F55D4;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blt cr6,0x823f5040
	if (ctx.cr6.lt) goto loc_823F5040;
loc_823F50B4:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823f5218
	if (!ctx.cr6.lt) goto loc_823F5218;
	// rlwinm r29,r17,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_823F50C8:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f5204
	if (ctx.cr6.eq) goto loc_823F5204;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5204
	if (ctx.cr6.eq) goto loc_823F5204;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r11,r10,r5
	ctx.r11.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x823f5204
	if (ctx.cr0.eq) goto loc_823F5204;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_823F5104:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x823f5160
	if (ctx.cr6.lt) goto loc_823F5160;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f51f4
	if (ctx.cr6.eq) goto loc_823F51F4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823F5120:
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823f5150
	if (!ctx.cr6.eq) goto loc_823F5150;
	// lwz r28,16(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// lwzx r28,r28,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// ble cr6,0x823f5150
	if (!ctx.cr6.gt) goto loc_823F5150;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_823F5150:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823f5120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F5120;
	// b 0x823f51f4
	goto loc_823F51F4;
loc_823F5160:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823f51a4
	if (!ctx.cr6.eq) goto loc_823F51A4;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823f51f4
	if (!ctx.cr6.eq) goto loc_823F51F4;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// bne cr6,0x823f518c
	if (!ctx.cr6.eq) goto loc_823F518C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x823f5190
	goto loc_823F5190;
loc_823F518C:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_823F5190:
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f51f4
	if (!ctx.cr6.gt) goto loc_823F51F4;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x823f51f4
	goto loc_823F51F4;
loc_823F51A4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f51f4
	if (ctx.cr6.eq) goto loc_823F51F4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823F51B8:
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823f51e8
	if (!ctx.cr6.eq) goto loc_823F51E8;
	// lwz r28,16(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// lwzx r28,r28,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// ble cr6,0x823f51e8
	if (!ctx.cr6.gt) goto loc_823F51E8;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
loc_823F51E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823f51b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F51B8;
loc_823F51F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// bne 0x823f5104
	if (!ctx.cr0.eq) goto loc_823F5104;
loc_823F5204:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f50c8
	if (ctx.cr6.lt) goto loc_823F50C8;
loc_823F5218:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823F521C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f5014
	if (ctx.cr6.lt) goto loc_823F5014;
loc_823F5230:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823f4ffc
	if (ctx.cr6.lt) goto loc_823F4FFC;
loc_823F5240:
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f5258
	if (!ctx.cr6.lt) goto loc_823F5258;
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
loc_823F5258:
	// rlwinm r11,r18,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f5270
	if (!ctx.cr6.lt) goto loc_823F5270;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_823F5270:
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f5284
	if (!ctx.cr6.lt) goto loc_823F5284;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_823F5284:
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f5298
	if (!ctx.cr6.lt) goto loc_823F5298;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_823F5298:
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f52ac
	if (!ctx.cr6.lt) goto loc_823F52AC;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_823F52AC:
	// lwz r19,104(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// bne cr6,0x823f5514
	if (!ctx.cr6.eq) goto loc_823F5514;
loc_823F52BC:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x823f52d8
	if (!ctx.cr6.eq) goto loc_823F52D8;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// b 0x823f5514
	goto loc_823F5514;
loc_823F52D8:
	// rlwinm r27,r18,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,480
	ctx.r30.s64 = ctx.r1.s64 + 480;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_823F52E4:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r18,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r18.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x823f10a0
	ctx.lr = 0x823F5310;
	sub_823F10A0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823f531c
	if (!ctx.cr6.gt) goto loc_823F531C;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_823F531C:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x823f52e4
	if (!ctx.cr0.eq) goto loc_823F52E4;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823f5354
	if (!ctx.cr6.lt) goto loc_823F5354;
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_823F5354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3228
	ctx.lr = 0x823F535C;
	sub_823F3228(ctx, base);
	// b 0x823f5514
	goto loc_823F5514;
loc_823F5360:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823f54fc
	if (!ctx.cr6.gt) goto loc_823F54FC;
	// addi r27,r14,1
	ctx.r27.s64 = ctx.r14.s64 + 1;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_823F537C:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r9,260
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 260, ctx.xer);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x823f53a8
	if (!ctx.cr6.eq) goto loc_823F53A8;
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// stw r14,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r14.u32);
	// b 0x823f53b4
	goto loc_823F53B4;
loc_823F53A8:
	// addi r11,r14,2
	ctx.r11.s64 = ctx.r14.s64 + 2;
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_823F53B4:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x823f10a0
	ctx.lr = 0x823F53DC;
	sub_823F10A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f53ec
	if (!ctx.cr6.gt) goto loc_823F53EC;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823F53EC:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// rlwinm r28,r19,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r30,r4,r15
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r15.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x823f3070
	ctx.lr = 0x823F5430;
	sub_823F3070(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823F5434:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x823f2f10
	ctx.lr = 0x823F5450;
	sub_823F2F10(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x823f2f10
	ctx.lr = 0x823F5468;
	sub_823F2F10(ctx, base);
	// lwz r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823f5434
	if (!ctx.cr6.eq) goto loc_823F5434;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f54d8
	if (ctx.cr6.eq) goto loc_823F54D8;
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
loc_823F5480:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r19,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r19.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x823f10a0
	ctx.lr = 0x823F54AC;
	sub_823F10A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823f54b8
	if (!ctx.cr6.gt) goto loc_823F54B8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823F54B8:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x823f5480
	if (!ctx.cr0.eq) goto loc_823F5480;
loc_823F54D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3228
	ctx.lr = 0x823F54E0;
	sub_823F3228(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwzx r23,r11,r15
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f537c
	if (ctx.cr6.lt) goto loc_823F537C;
loc_823F54FC:
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823f5514
	if (!ctx.cr6.lt) goto loc_823F5514;
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
loc_823F5514:
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r6
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823f4938
	if (ctx.cr6.lt) goto loc_823F4938;
	// lwz r15,796(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
loc_823F5528:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5558
	if (ctx.cr6.eq) goto loc_823F5558;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bne cr6,0x823f5558
	if (!ctx.cr6.eq) goto loc_823F5558;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x823f5558
	if (!ctx.cr6.eq) goto loc_823F5558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f4190
	ctx.lr = 0x823F5550;
	sub_823F4190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f555c
	if (ctx.cr0.lt) goto loc_823F555C;
loc_823F5558:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_823F555C:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_823F5568:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
	// lwz r4,60(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 60);
loc_823F5584:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,4521
	ctx.r5.s64 = 4521;
	// addi r6,r11,21524
	ctx.r6.s64 = ctx.r11.s64 + 21524;
	// b 0x823f4bc4
	goto loc_823F4BC4;
loc_823F5594:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4bcc
	if (!ctx.cr6.eq) goto loc_823F4BCC;
loc_823F55AC:
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// b 0x823f5584
	goto loc_823F5584;
loc_823F55B4:
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 260, ctx.xer);
	// bne cr6,0x823f55ac
	if (!ctx.cr6.eq) goto loc_823F55AC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f55ac
	if (ctx.cr6.eq) goto loc_823F55AC;
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 260, ctx.xer);
	// beq cr6,0x823f4bcc
	if (ctx.cr6.eq) goto loc_823F4BCC;
	// b 0x823f55ac
	goto loc_823F55AC;
loc_823F55D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823f555c
	goto loc_823F555C;
}

DEFINE_REX_FUNC(sub_82433AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82433b9c
	if (ctx.cr6.eq) goto loc_82433B9C;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82433b34
	if (ctx.cr6.lt) goto loc_82433B34;
	// bne cr6,0x82433b9c
	if (!ctx.cr6.eq) goto loc_82433B9C;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,244
	ctx.r6.s64 = ctx.r10.s64 + 244;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r10,254
	ctx.r5.s64 = ctx.r10.s64 + 254;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82433b9c
	goto loc_82433B9C;
loc_82433B34:
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r5,r10,236
	ctx.r5.s64 = ctx.r10.s64 + 236;
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addic r4,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// subfe r8,r4,r8
	temp.u8 = (~ctx.r4.u32 + ctx.r8.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82433B9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243BB60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8243bbac
	if (ctx.cr6.eq) goto loc_8243BBAC;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8243bb7c
	if (!ctx.cr6.gt) goto loc_8243BB7C;
loc_8243BB70:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8243BB7C:
	// subf. r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8243bb70
	if (ctx.cr0.eq) goto loc_8243BB70;
loc_8243BB88:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8243bb70
	if (!ctx.cr6.lt) goto loc_8243BB70;
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243bbac
	if (ctx.cr0.eq) goto loc_8243BBAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8243bb88
	if (ctx.cr6.lt) goto loc_8243BB88;
	// b 0x8243bb70
	goto loc_8243BB70;
loc_8243BBAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D0C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8243D0CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243d10c
	if (ctx.cr6.eq) goto loc_8243D10C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8243d0ec
	if (ctx.cr0.eq) goto loc_8243D0EC;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8243d0f0
	if (ctx.cr0.eq) goto loc_8243D0F0;
loc_8243D0EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243D0F0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8243d104
	if (ctx.cr0.eq) goto loc_8243D104;
	// rlwinm r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r10,57344
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57344, ctx.xer);
	// beq cr6,0x8243d120
	if (ctx.cr6.eq) goto loc_8243D120;
loc_8243D104:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8243d0cc
	goto loc_8243D0CC;
loc_8243D10C:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_8243D120:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243F488) {
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
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8243F4A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8243f534
	if (ctx.cr6.eq) goto loc_8243F534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82434cc0
	ctx.lr = 0x8243F4B4;
	sub_82434CC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243f524
	if (ctx.cr0.eq) goto loc_8243F524;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r8,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8243f524
	if (!ctx.cr0.eq) goto loc_8243F524;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243f524
	if (ctx.cr0.eq) goto loc_8243F524;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8243f518
	if (ctx.cr0.eq) goto loc_8243F518;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243F4F0:
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8243f4f0
	if (ctx.cr6.lt) goto loc_8243F4F0;
loc_8243F518:
	// and r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243f52c
	if (!ctx.cr0.eq) goto loc_8243F52C;
loc_8243F524:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8243f4a4
	goto loc_8243F4A4;
loc_8243F52C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8243f538
	goto loc_8243F538;
loc_8243F534:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243F538:
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

DEFINE_REX_FUNC(sub_82442FB0) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824426d8
	ctx.lr = 0x82442FE0;
	sub_824426D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82442ff8
	if (!ctx.cr0.eq) goto loc_82442FF8;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8244300c
	goto loc_8244300C;
loc_82442FF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x8244300C;
	sub_82203A90(ctx, base);
loc_8244300C:
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

DEFINE_REX_FUNC(sub_82447FB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82447FBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448000
	if (ctx.cr6.eq) goto loc_82448000;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82447fdc
	if (ctx.cr0.eq) goto loc_82447FDC;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82447fe0
	if (ctx.cr0.eq) goto loc_82447FE0;
loc_82447FDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82447FE0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82447ff0
	if (ctx.cr0.eq) goto loc_82447FF0;
	// rlwinm. r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82447ff8
	if (ctx.cr0.eq) goto loc_82447FF8;
loc_82447FF0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82447fbc
	goto loc_82447FBC;
loc_82447FF8:
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_82448000:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82449370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82449378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824493a0
	if (ctx.cr0.eq) goto loc_824493A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82449418
	goto loc_82449418;
loc_824493A0:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82449418
	if (ctx.cr0.eq) goto loc_82449418;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x824493ec
	if (ctx.cr6.eq) goto loc_824493EC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x824493ec
	if (ctx.cr6.eq) goto loc_824493EC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x824493ec
	if (ctx.cr6.eq) goto loc_824493EC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x824493ec
	if (ctx.cr6.eq) goto loc_824493EC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x824493ec
	if (ctx.cr6.eq) goto loc_824493EC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824493f0
	if (!ctx.cr6.eq) goto loc_824493F0;
loc_824493EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824493F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82449418
	if (ctx.cr0.eq) goto loc_82449418;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824348c0
	ctx.lr = 0x82449410;
	sub_824348C0(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_82449418:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244943c
	if (!ctx.cr6.eq) goto loc_8244943C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82447ec0
	ctx.lr = 0x82449428;
	sub_82447EC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82449444
	if (ctx.cr0.eq) goto loc_82449444;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_8244943C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_82449444:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// beq cr6,0x8244943c
	if (ctx.cr6.eq) goto loc_8244943C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824222f0
	ctx.lr = 0x82449460;
	sub_824222F0(ctx, base);
}

DEFINE_REX_FUNC(sub_82453F40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,192(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r8,192(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// rlwinm r7,r9,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// rlwinm r6,r8,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// subf. r3,r7,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,196(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82453f7c
	if (!ctx.cr6.lt) goto loc_82453F7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82453F7C:
	// ble cr6,0x82453f88
	if (!ctx.cr6.gt) goto loc_82453F88;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82453F88:
	// rlwinm r11,r9,29,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FF;
	// rlwinm r10,r8,29,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7FF;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82455A20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82455A28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82455a84
	if (ctx.cr0.eq) goto loc_82455A84;
loc_82455A50:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82456168
	ctx.lr = 0x82455A68;
	sub_82456168(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82455a84
	if (!ctx.cr0.eq) goto loc_82455A84;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82455a50
	if (ctx.cr6.lt) goto loc_82455A50;
loc_82455A84:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82454c80
	ctx.lr = 0x82455AA0;
	sub_82454C80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245BD60) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8245bda4
	if (!ctx.cr6.lt) goto loc_8245BDA4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8245BD80:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8245bdac
	if (!ctx.cr6.eq) goto loc_8245BDAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8245bd80
	if (ctx.cr6.lt) goto loc_8245BD80;
loc_8245BDA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8245BDAC:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8245C518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8245bf68
	ctx.lr = 0x8245C538;
	sub_8245BF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8245c560
	if (!ctx.cr6.eq) goto loc_8245C560;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245c558
	if (ctx.cr0.eq) goto loc_8245C558;
	// li r4,3566
	ctx.r4.s64 = 3566;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824222f0
	ctx.lr = 0x8245C558;
	sub_824222F0(ctx, base);
loc_8245C558:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8245c598
	goto loc_8245C598;
loc_8245C560:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x82441150
	ctx.lr = 0x8245C570;
	sub_82441150(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = ctx.r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	REX_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
loc_8245C598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245DC88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8245DC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2484(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245dcd0
	if (!ctx.cr6.eq) goto loc_8245DCD0;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8243d038
	ctx.lr = 0x8245DCB8;
	sub_8243D038(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8245DCD0:
	// lwz r3,2484(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245dd04
	if (!ctx.cr0.eq) goto loc_8245DD04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245dd04
	if (ctx.cr0.eq) goto loc_8245DD04;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8245dd10
	if (!ctx.cr6.gt) goto loc_8245DD10;
loc_8245DD04:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82442788
	ctx.lr = 0x8245DD0C;
	sub_82442788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8245DD10:
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
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r3,2484(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245dd5c
	if (!ctx.cr0.eq) goto loc_8245DD5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245dd5c
	if (ctx.cr0.eq) goto loc_8245DD5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8245dd68
	if (!ctx.cr6.gt) goto loc_8245DD68;
loc_8245DD5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82442788
	ctx.lr = 0x8245DD64;
	sub_82442788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8245DD68:
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
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824665C0) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824665d8
	if (ctx.cr0.eq) goto loc_824665D8;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824665d8
	if (ctx.cr0.eq) goto loc_824665D8;
loc_824665D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824665D8:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824665e8
	if (ctx.cr0.eq) goto loc_824665E8;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824665d0
	if (!ctx.cr0.eq) goto loc_824665D0;
loc_824665E8:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824665fc
	if (ctx.cr0.eq) goto loc_824665FC;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_824665FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246BC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x8246BC58;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r30,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r30.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// beq cr6,0x8246bd98
	if (ctx.cr6.eq) goto loc_8246BD98;
	// lwz r18,324(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
loc_8246BCA0:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8246bd48
	if (ctx.cr6.eq) goto loc_8246BD48;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r29,r24,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r24.u64;
	// subf r28,r24,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r24.u64;
loc_8246BCBC:
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246bcf0
	if (!ctx.cr6.eq) goto loc_8246BCF0;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r9,r30,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8246bcf0
	if (!ctx.cr6.eq) goto loc_8246BCF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8246bd48
	if (ctx.cr6.eq) goto loc_8246BD48;
loc_8246BCF0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8246bd38
	if (!ctx.cr6.eq) goto loc_8246BD38;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8246bd38
	if (!ctx.cr6.eq) goto loc_8246BD38;
	// lwzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824f1b80
	ctx.lr = 0x8246BD1C;
	sub_824F1B80(ctx, base);
	// lwzx r5,r30,r18
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwzx r4,r30,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// bl 0x824f1b80
	ctx.lr = 0x8246BD30;
	sub_824F1B80(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x8246bd48
	if (ctx.cr6.eq) goto loc_8246BD48;
loc_8246BD38:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8246bcbc
	if (ctx.cr6.lt) goto loc_8246BCBC;
loc_8246BD48:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8246bd70
	if (!ctx.cr6.eq) goto loc_8246BD70;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246bdb0
	if (ctx.cr0.eq) goto loc_8246BDB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x8246bd84
	goto loc_8246BD84;
loc_8246BD70:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r27,r19
	ctx.r10.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r19.u8 & 0x3F));
	// slw r11,r11,r19
	ctx.r11.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r19.u8 & 0x3F));
	// andc r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 & ~ctx.r11.u64;
	// or r15,r11,r10
	ctx.r15.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8246BD84:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8246bca0
	if (ctx.cr6.lt) goto loc_8246BCA0;
loc_8246BD98:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
loc_8246BDA4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_8246BDB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8246bda4
	goto loc_8246BDA4;
}

DEFINE_REX_FUNC(sub_82470F20) {
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
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bgt cr6,0x82470fb8
	if (ctx.cr6.gt) goto loc_82470FB8;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470fb8
	if (ctx.cr0.eq) goto loc_82470FB8;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82470fb8
	if (!ctx.cr0.eq) goto loc_82470FB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r3,656(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82470f90
	if (!ctx.cr0.eq) goto loc_82470F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470f90
	if (ctx.cr0.eq) goto loc_82470F90;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82470f9c
	if (!ctx.cr6.gt) goto loc_82470F9C;
loc_82470F90:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824c1fe0
	ctx.lr = 0x82470F98;
	sub_824C1FE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82470F9C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
loc_82470FB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247FF50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8247FF58;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
loc_8247FF68:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82480128
	if (!ctx.cr0.eq) goto loc_82480128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82480128
	if (ctx.cr0.eq) goto loc_82480128;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
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
	// lwzx r27,r10,r4
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8247ffdc
	if (!ctx.cr0.eq) goto loc_8247FFDC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
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
	ctx.lr = 0x8247FFDC;
	sub_82422290(ctx, base);
loc_8247FFDC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247ff68
	if (ctx.cr0.eq) goto loc_8247FF68;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// addi r26,r27,24
	ctx.r26.s64 = ctx.r27.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// rlwinm r30,r11,13,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplwi cr6,r10,12800
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12800, ctx.xer);
	// bne cr6,0x82480010
	if (!ctx.cr6.eq) goto loc_82480010;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82480010:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8248004c
	if (!ctx.cr6.lt) goto loc_8248004C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r29,r31,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_8248002C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// bl 0x824354c8
	ctx.lr = 0x82480040;
	sub_824354C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// bne 0x8248002c
	if (!ctx.cr0.eq) goto loc_8248002C;
loc_8248004C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824800bc
	if (ctx.cr0.eq) goto loc_824800BC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82480060:
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824800a4
	if (!ctx.cr6.lt) goto loc_824800A4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r31,10
	ctx.r9.s64 = ctx.r31.s64 + 10;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82480094:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// bdnz 0x82480094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82480094;
loc_824800A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82480060
	if (ctx.cr6.lt) goto loc_82480060;
loc_824800BC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8247ff68
	if (!ctx.cr6.lt) goto loc_8247FF68;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_824800D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,19
	ctx.r6.u64 = ctx.r11.u32 & 0x1FFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8247fd90
	ctx.lr = 0x82480104;
	sub_8247FD90(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r5,r11,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// bl 0x8243d2e0
	ctx.lr = 0x8248011C;
	sub_8243D2E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824800d8
	if (!ctx.cr0.eq) goto loc_824800D8;
	// b 0x8247ff68
	goto loc_8247FF68;
loc_82480128:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8248D248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825394a0
	ctx.lr = 0x8248D268;
	sub_825394A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,6880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfd f30,80(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bge cr6,0x8248d29c
	if (!ctx.cr6.lt) goto loc_8248D29C;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8248d29c
	if (ctx.cr6.eq) goto loc_8248D29C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,2328(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
	// bl 0x82208920
	ctx.lr = 0x8248D294;
	sub_82208920(ctx, base);
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x8248d1f8
	ctx.lr = 0x8248D29C;
	sub_8248D1F8(ctx, base);
loc_8248D29C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8248DCF8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bne cr6,0x8248dd40
	if (!ctx.cr6.eq) goto loc_8248DD40;
loc_8248DD20:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824348c0
	ctx.lr = 0x8248DD34;
	sub_824348C0(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// b 0x8248dd6c
	goto loc_8248DD6C;
loc_8248DD40:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8248dd5c
	if (ctx.cr6.eq) goto loc_8248DD5C;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x8248dd5c
	if (ctx.cr6.eq) goto loc_8248DD5C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8248dd60
	if (!ctx.cr6.eq) goto loc_8248DD60;
loc_8248DD5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8248DD60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248dd20
	if (!ctx.cr0.eq) goto loc_8248DD20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248DD6C:
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

DEFINE_REX_FUNC(sub_82490870) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824908c4
	if (ctx.cr0.eq) goto loc_824908C4;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,28(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824908b0
	if (ctx.cr6.eq) goto loc_824908B0;
loc_824908A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249093c
	goto loc_8249093C;
loc_824908B0:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824908c4
	if (ctx.cr0.eq) goto loc_824908C4;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824908a8
	if (!ctx.cr6.eq) goto loc_824908A8;
loc_824908C4:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824908a8
	if (!ctx.cr0.eq) goto loc_824908A8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8248da98
	ctx.lr = 0x824908E8;
	sub_8248DA98(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248da98
	ctx.lr = 0x824908F8;
	sub_8248DA98(ctx, base);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x824908a8
	if (!ctx.cr6.eq) goto loc_824908A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82441c38
	ctx.lr = 0x82490908;
	sub_82441C38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82490938
	if (ctx.cr0.eq) goto loc_82490938;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82490914:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82490938
	if (ctx.cr6.eq) goto loc_82490938;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82490930
	if (ctx.cr6.eq) goto loc_82490930;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824908a8
	if (!ctx.cr6.eq) goto loc_824908A8;
loc_82490930:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82490914
	goto loc_82490914;
loc_82490938:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8249093C:
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

DEFINE_REX_FUNC(sub_82492480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82492488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824924B4;
	sub_824F4E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824484a0
	ctx.lr = 0x824924C4;
	sub_824484A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82448668
	ctx.lr = 0x824924D0;
	sub_82448668(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243d338
	ctx.lr = 0x824924E8;
	sub_8243D338(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824960E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824960E8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r16,0
	ctx.r16.s64 = 0;
	// lfs f31,2380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f31.f64 = double(temp.f32);
loc_8249610C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r16,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r16.u8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82496d74
	if (!ctx.cr0.eq) goto loc_82496D74;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82496d74
	if (ctx.cr0.eq) goto loc_82496D74;
loc_8249612C:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
loc_82496130:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82496d54
	if (ctx.cr6.eq) goto loc_82496D54;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8248dca0
	ctx.lr = 0x82496154;
	sub_8248DCA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// beq 0x82496230
	if (ctx.cr0.eq) goto loc_82496230;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x82496180
	if (!ctx.cr6.eq) goto loc_82496180;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82496184
	if (ctx.cr6.gt) goto loc_82496184;
loc_82496180:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82496184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r22
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x824f39c8
	ctx.lr = 0x824961C4;
	sub_824F39C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82496d1c
	if (ctx.cr6.eq) goto loc_82496D1C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824961e8
	goto loc_824961E8;
loc_824961E0:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_824961E8:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824961e0
	if (!ctx.cr6.eq) goto loc_824961E0;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r9,r11,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82496d1c
	goto loc_82496D1C;
loc_82496230:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15232, ctx.xer);
	// bne cr6,0x82496d1c
	if (!ctx.cr6.eq) goto loc_82496D1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824348c0
	ctx.lr = 0x82496250;
	sub_824348C0(ctx, base);
	// addi r11,r22,-12
	ctx.r11.s64 = ctx.r22.s64 + -12;
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// add r20,r3,r11
	ctx.r20.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// stb r21,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lwz r19,4(r20)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x824963c0
	if (ctx.cr6.eq) goto loc_824963C0;
loc_82496290:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ff428
	ctx.lr = 0x824962B4;
	sub_824FF428(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x824963a4
	if (!ctx.cr6.eq) goto loc_824963A4;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824963a4
	if (!ctx.cr6.eq) goto loc_824963A4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// bl 0x824348c0
	ctx.lr = 0x82496304;
	sub_824348C0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r3,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r28,r10,17,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// bl 0x824348c0
	ctx.lr = 0x82496324;
	sub_824348C0(ctx, base);
	// lwzx r10,r3,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r9,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 | ctx.r25.u64;
	// bne cr6,0x8249636c
	if (!ctx.cr6.eq) goto loc_8249636C;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// b 0x8249638c
	goto loc_8249638C;
loc_8249636C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82496384
	if (!ctx.cr6.eq) goto loc_82496384;
	// subfc r11,r28,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r28.u32;
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// subf r17,r26,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 & ctx.r21.u64;
loc_82496384:
	// cmpw cr6,r18,r24
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x824963a4
	if (!ctx.cr6.eq) goto loc_824963A4;
loc_8249638C:
	// mullw r11,r27,r17
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r17.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824963a4
	if (!ctx.cr6.eq) goto loc_824963A4;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824963a8
	if (ctx.cr6.eq) goto loc_824963A8;
loc_824963A4:
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
loc_824963A8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82496290
	if (ctx.cr6.lt) goto loc_82496290;
	// stb r21,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
loc_824963C0:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq 0x824963e4
	if (ctx.cr0.eq) goto loc_824963E4;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824963e4
	if (ctx.cr6.gt) goto loc_824963E4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82496d18
	if (!ctx.cr0.eq) goto loc_82496D18;
loc_824963E4:
	// addi r15,r22,4
	ctx.r15.s64 = ctx.r22.s64 + 4;
loc_824963E8:
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
loc_824963EC:
	// lwz r18,0(r15)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82496d04
	if (ctx.cr6.eq) goto loc_82496D04;
	// lwz r21,16(r18)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82496cf0
	if (ctx.cr6.eq) goto loc_82496CF0;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x82496da4
	if (!ctx.cr6.eq) goto loc_82496DA4;
	// lwz r25,16(r21)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// b 0x8249642c
	goto loc_8249642C;
loc_8249641C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82496434
	if (ctx.cr6.eq) goto loc_82496434;
	// lwz r25,4(r25)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
loc_8249642C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8249641c
	if (!ctx.cr6.eq) goto loc_8249641C;
loc_82496434:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82496dd8
	if (ctx.cr6.eq) goto loc_82496DD8;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82496dd8
	if (!ctx.cr6.eq) goto loc_82496DD8;
	// lwz r29,48(r21)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,7040
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7040, ctx.xer);
	// bne cr6,0x82496db0
	if (!ctx.cr6.eq) goto loc_82496DB0;
	// lwz r26,44(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824f39c8
	ctx.lr = 0x8249648C;
	sub_824F39C8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// beq cr6,0x824968f0
	if (ctx.cr6.eq) goto loc_824968F0;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x824965bc
	if (!ctx.cr6.eq) goto loc_824965BC;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x824f1b98
	ctx.lr = 0x824964B8;
	sub_824F1B98(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x824965bc
	if (!ctx.cr6.eq) goto loc_824965BC;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x824965bc
	if (!ctx.cr6.lt) goto loc_824965BC;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824965bc
	if (ctx.cr6.eq) goto loc_824965BC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x82496dbc
	if (!ctx.cr6.eq) goto loc_82496DBC;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824348c0
	ctx.lr = 0x82496520;
	sub_824348C0(ctx, base);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82496dbc
	if (!ctx.cr6.eq) goto loc_82496DBC;
	// addi r8,r21,4
	ctx.r8.s64 = ctx.r21.s64 + 4;
loc_8249654C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82496cc8
	if (ctx.cr6.eq) goto loc_82496CC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824965a8
	if (ctx.cr6.eq) goto loc_824965A8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8249657c
	goto loc_8249657C;
loc_82496574:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8249657C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82496574
	if (!ctx.cr6.eq) goto loc_82496574;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824965A8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8249654c
	if (!ctx.cr6.eq) goto loc_8249654C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8249654c
	goto loc_8249654C;
loc_824965BC:
	// addi r22,r21,4
	ctx.r22.s64 = ctx.r21.s64 + 4;
loc_824965C0:
	// lwz r23,0(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82496cc8
	if (ctx.cr6.eq) goto loc_82496CC8;
	// lwz r30,16(r23)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824968dc
	if (ctx.cr6.eq) goto loc_824968DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248dca0
	ctx.lr = 0x824965E0;
	sub_8248DCA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824968dc
	if (ctx.cr0.eq) goto loc_824968DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bne cr6,0x82496658
	if (!ctx.cr6.eq) goto loc_82496658;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x82496614
	if (!ctx.cr6.eq) goto loc_82496614;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82496618
	if (ctx.cr6.gt) goto loc_82496618;
loc_82496614:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82496618:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82448db0
	ctx.lr = 0x82496644;
	sub_82448DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82448668
	ctx.lr = 0x82496650;
	sub_82448668(ctx, base);
	// stwx r3,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x824968dc
	goto loc_824968DC;
loc_82496658:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// beq cr6,0x82496dc8
	if (ctx.cr6.eq) goto loc_82496DC8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x82496674;
	sub_82441580(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r10,r11,11,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r10,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824f53a8
	ctx.lr = 0x824966CC;
	sub_824F53A8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f53a8
	ctx.lr = 0x824966E4;
	sub_824F53A8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82492dd0
	ctx.lr = 0x82496700;
	sub_82492DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243d038
	ctx.lr = 0x82496714;
	sub_8243D038(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r24,r19,18
	ctx.r24.u64 = ctx.r19.u32 & 0x3FFF;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r10,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// li r11,1
	ctx.r11.s64 = 1;
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | ctx.r24.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwimi r10,r11,14,4,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFC000) | (ctx.r10.u64 & 0xFFFFFFFFF0003FFF);
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// ble cr6,0x82496860
	if (!ctx.cr6.gt) goto loc_82496860;
	// li r25,8
	ctx.r25.s64 = 8;
loc_82496750:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r25,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x824f53a8
	ctx.lr = 0x82496764;
	sub_824F53A8(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f0,168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x824fb050
	ctx.lr = 0x82496798;
	sub_824FB050(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r14,r11,7,29,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x824484a0
	ctx.lr = 0x824967AC;
	sub_824484A0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// rlwimi r10,r14,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82447f60
	ctx.lr = 0x824967C8;
	sub_82447F60(ctx, base);
	// lwz r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// bl 0x8246e200
	ctx.lr = 0x824967F0;
	sub_8246E200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82492eb0
	ctx.lr = 0x8249680C;
	sub_82492EB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243d038
	ctx.lr = 0x82496820;
	sub_8243D038(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r10,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | ctx.r24.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// rlwimi r10,r11,14,4,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFC000) | (ctx.r10.u64 & 0xFFFFFFFFF0003FFF);
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// blt cr6,0x82496750
	if (ctx.cr6.lt) goto loc_82496750;
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82496860:
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_82496864:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824968c8
	if (ctx.cr6.eq) goto loc_824968C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824968b4
	if (ctx.cr6.eq) goto loc_824968B4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82496894
	goto loc_82496894;
loc_8249688C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82496894:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8249688c
	if (!ctx.cr6.eq) goto loc_8249688C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_824968B4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82496864
	if (!ctx.cr6.eq) goto loc_82496864;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82496864
	goto loc_82496864;
loc_824968C8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb8c0
	ctx.lr = 0x824968DC;
	sub_824FB8C0(ctx, base);
loc_824968DC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x824965c0
	if (!ctx.cr6.eq) goto loc_824965C0;
	// addi r22,r23,8
	ctx.r22.s64 = ctx.r23.s64 + 8;
	// b 0x824965c0
	goto loc_824965C0;
loc_824968F0:
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82496958
	if (!ctx.cr6.eq) goto loc_82496958;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x824f1b98
	ctx.lr = 0x82496904;
	sub_824F1B98(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82496958
	if (!ctx.cr6.eq) goto loc_82496958;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82496958
	if (!ctx.cr6.lt) goto loc_82496958;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x8246e2d0
	ctx.lr = 0x82496950;
	sub_8246E2D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82496c54
	if (!ctx.cr0.eq) goto loc_82496C54;
loc_82496958:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82496ac0
	if (ctx.cr0.eq) goto loc_82496AC0;
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8249697c
	goto loc_8249697C;
loc_82496974:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8249697C:
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82496974
	if (!ctx.cr6.eq) goto loc_82496974;
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r9,r9,228
	ctx.r9.u64 = ctx.r9.u64 | 228;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 4);
	// stw r11,8(r18)
	REX_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// stw r18,4(r14)
	REX_STORE_U32(ctx.r14.u32 + 4, ctx.r18.u32);
	// stw r14,12(r18)
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r14.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r10,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82496cf0
	if (ctx.cr6.eq) goto loc_82496CF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r30,12(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x82496A04;
	sub_82441580(ctx, base);
	// clrldi r10,r17,32
	ctx.r10.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x824fb050
	ctx.lr = 0x82496A44;
	sub_824FB050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824485b0
	ctx.lr = 0x82496A54;
	sub_824485B0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82491420
	ctx.lr = 0x82496A6C;
	sub_82491420(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82496a84
	goto loc_82496A84;
loc_82496A7C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82496A84:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82496a7c
	if (!ctx.cr6.eq) goto loc_82496A7C;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r3,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// rlwimi r11,r17,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// b 0x82496cf0
	goto loc_82496CF0;
loc_82496AC0:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82496cf0
	if (!ctx.cr6.gt) goto loc_82496CF0;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82496af8
	if (!ctx.cr6.eq) goto loc_82496AF8;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x8246e2d0
	ctx.lr = 0x82496AF0;
	sub_8246E2D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82496c54
	goto loc_82496C54;
loc_82496AF8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x82496B04;
	sub_82441580(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8246e610
	ctx.lr = 0x82496B38;
	sub_8246E610(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r11,18,18,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x8243d038
	ctx.lr = 0x82496B54;
	sub_8243D038(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r26,r19,18
	ctx.r26.u64 = ctx.r19.u32 & 0x3FFF;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r11,r11,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// li r28,2
	ctx.r28.s64 = 2;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// rlwimi r11,r27,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// ble cr6,0x82496c54
	if (!ctx.cr6.gt) goto loc_82496C54;
	// li r27,8
	ctx.r27.s64 = 8;
loc_82496B8C:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x824fb050
	ctx.lr = 0x82496BBC;
	sub_824FB050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824485b0
	ctx.lr = 0x82496BCC;
	sub_824485B0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246e200
	ctx.lr = 0x82496BE4;
	sub_8246E200(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r27,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82492cf0
	ctx.lr = 0x82496C04;
	sub_82492CF0(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r24,r11,18,18,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x8243d038
	ctx.lr = 0x82496C20;
	sub_8243D038(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, ctx.xer);
	// rlwimi r11,r24,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// blt cr6,0x82496b8c
	if (ctx.cr6.lt) goto loc_82496B8C;
loc_82496C54:
	// addi r8,r21,4
	ctx.r8.s64 = ctx.r21.s64 + 4;
loc_82496C58:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82496cc8
	if (ctx.cr6.eq) goto loc_82496CC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82496cb4
	if (ctx.cr6.eq) goto loc_82496CB4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82496c88
	goto loc_82496C88;
loc_82496C80:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82496C88:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82496c80
	if (!ctx.cr6.eq) goto loc_82496C80;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82496CB4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82496c58
	if (!ctx.cr6.eq) goto loc_82496C58;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82496c58
	goto loc_82496C58;
loc_82496CC8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82434e10
	ctx.lr = 0x82496CD0;
	sub_82434E10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82496cec
	if (ctx.cr0.eq) goto loc_82496CEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb8c0
	ctx.lr = 0x82496CEC;
	sub_824FB8C0(ctx, base);
loc_82496CEC:
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82496CF0:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x824963ec
	if (!ctx.cr6.eq) goto loc_824963EC;
	// addi r15,r18,8
	ctx.r15.s64 = ctx.r18.s64 + 8;
	// b 0x824963e8
	goto loc_824963E8;
loc_82496D04:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82434e10
	ctx.lr = 0x82496D0C;
	sub_82434E10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82496d28
	if (!ctx.cr0.eq) goto loc_82496D28;
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82496D18:
	// stb r16,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
loc_82496D1C:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82496130
	goto loc_82496130;
loc_82496D28:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82435128
	ctx.lr = 0x82496D3C;
	sub_82435128(ctx, base);
	// stw r16,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fbb48
	ctx.lr = 0x82496D4C;
	sub_824FBB48(ctx, base);
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8249612c
	goto loc_8249612C;
loc_82496D54:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82496d74
	if (!ctx.cr0.eq) goto loc_82496D74;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249612c
	if (!ctx.cr6.eq) goto loc_8249612C;
loc_82496D74:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8249610c
	if (!ctx.cr0.eq) goto loc_8249610C;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82496de4
	if (ctx.cr0.eq) goto loc_82496DE4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82496D98:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_82496DA4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x82496DB0;
	sub_824222F0(ctx, base);
loc_82496DB0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x82496DBC;
	sub_824222F0(ctx, base);
loc_82496DBC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x82496DC8;
	sub_824222F0(ctx, base);
loc_82496DC8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,17168
	ctx.r5.s64 = ctx.r11.s64 + 17168;
	// bl 0x824222f0
	ctx.lr = 0x82496DD8;
	sub_824222F0(ctx, base);
loc_82496DD8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x82496DE4;
	sub_824222F0(ctx, base);
loc_82496DE4:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82496d98
	if (!ctx.cr6.eq) goto loc_82496D98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,17140
	ctx.r5.s64 = ctx.r11.s64 + 17140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x82496E04;
	sub_824222F0(ctx, base);
}

DEFINE_REX_FUNC(sub_824E6E40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824E6E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
loc_824E6E60:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824e6e80
	if (!ctx.cr0.eq) goto loc_824E6E80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e6e60
	if (ctx.cr6.lt) goto loc_824E6E60;
	// b 0x824e6e90
	goto loc_824E6E90;
loc_824E6E80:
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r11,15,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
loc_824E6E90:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwzu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// lwzu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// rlwinm. r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// beq 0x824e6ed0
	if (ctx.cr0.eq) goto loc_824E6ED0;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_824E6ED0:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x824e6f00
	if (ctx.cr6.eq) goto loc_824E6F00;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_824E6F00:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,23352(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 23352);
	// rlwinm r29,r9,9,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// rlwinm. r8,r9,10,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r5,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// beq 0x824e70a8
	if (ctx.cr0.eq) goto loc_824E70A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x824e7060
	if (ctx.cr6.lt) goto loc_824E7060;
	// beq cr6,0x824e7020
	if (ctx.cr6.eq) goto loc_824E7020;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x824e6fdc
	if (ctx.cr6.lt) goto loc_824E6FDC;
	// beq cr6,0x824e6f9c
	if (ctx.cr6.eq) goto loc_824E6F9C;
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
	// li r7,11890
	ctx.r7.s64 = 11890;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824E6F98;
	sub_82428090(ctx, base);
	// b 0x824e70a0
	goto loc_824E70A0;
loc_824E6F9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,0,20,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r11.u64 & 0x7000);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,20,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,24,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r11,28,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x824e709c
	goto loc_824E709C;
loc_824E6FDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,4,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r11,24,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r11,28,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,0,24,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r11.u64 & 0x700);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x824e70a0
	goto loc_824E70A0;
loc_824E7020:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,8,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r11,28,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,0,28,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r11.u64 & 0x70);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,4,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x824e709c
	goto loc_824E709C;
loc_824E7060:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,12,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,0,0,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,4,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r11,8,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
loc_824E709C:
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_824E70A0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x824e70b4
	goto loc_824E70B4;
loc_824E70A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r7,12,17,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824E70B4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824e70cc
	if (ctx.cr6.eq) goto loc_824E70CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_824E70CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F0E18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x824F0E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-3532
	ctx.r30.s64 = ctx.r11.s64 + -3532;
	// addi r29,r10,32160
	ctx.r29.s64 = ctx.r10.s64 + 32160;
	// bne cr6,0x824f0e5c
	if (!ctx.cr6.eq) goto loc_824F0E5C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,24904
	ctx.r5.s64 = ctx.r11.s64 + 24904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1032
	ctx.r7.s64 = 1032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824F0E5C;
	sub_82428090(ctx, base);
loc_824F0E5C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f0e84
	if (!ctx.cr6.eq) goto loc_824F0E84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,32552
	ctx.r5.s64 = ctx.r11.s64 + 32552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1033
	ctx.r7.s64 = 1033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824F0E84;
	sub_82428090(ctx, base);
loc_824F0E84:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8242dfd0
	ctx.lr = 0x824F0E8C;
	sub_8242DFD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f0ad0
	ctx.lr = 0x824F0E98;
	sub_824F0AD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F1B80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824f1908
	sub_824F1908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F1E20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bgt cr6,0x824f1ea4
	if (ctx.cr6.gt) goto loc_824F1EA4;
	// beq cr6,0x824f1e98
	if (ctx.cr6.eq) goto loc_824F1E98;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// beq cr6,0x824f1e8c
	if (ctx.cr6.eq) goto loc_824F1E8C;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// beq cr6,0x824f1e84
	if (ctx.cr6.eq) goto loc_824F1E84;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x824f1e6c
	if (ctx.cr6.eq) goto loc_824F1E6C;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x824f1ebc
	if (!ctx.cr6.eq) goto loc_824F1EBC;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82447f60
	sub_82447F60(ctx, base);
	return;
loc_824F1E6C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,10,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82447f60
	sub_82447F60(ctx, base);
	return;
loc_824F1E84:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x824f1f04
	goto loc_824F1F04;
loc_824F1E8C:
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x824f1f08
	goto loc_824F1F08;
loc_824F1E98:
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwimi r11,r10,9,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x824f1f08
	goto loc_824F1F08;
loc_824F1EA4:
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x824f1f00
	if (ctx.cr6.eq) goto loc_824F1F00;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// beq cr6,0x824f1ee8
	if (ctx.cr6.eq) goto loc_824F1EE8;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x824f1ed0
	if (ctx.cr6.eq) goto loc_824F1ED0;
loc_824F1EBC:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824222f0
	sub_824222F0(ctx, base);
	return;
loc_824F1ED0:
	// li r10,61
	ctx.r10.s64 = 61;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82447f60
	sub_82447F60(ctx, base);
	return;
loc_824F1EE8:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82447f60
	sub_82447F60(ctx, base);
	return;
loc_824F1F00:
	// li r10,59
	ctx.r10.s64 = 59;
loc_824F1F04:
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
loc_824F1F08:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F6870) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x824F6878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,62
	ctx.r6.s64 = 62;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824f4e90
	ctx.lr = 0x824F689C;
	sub_824F4E90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f68c0
	if (ctx.cr6.eq) goto loc_824F68C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82441580
	ctx.lr = 0x824F68BC;
	sub_82441580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824F68C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82448668
	ctx.lr = 0x824F68C8;
	sub_82448668(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824FA948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204250
	ctx.lr = 0x824FA950;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r22,r5,40
	ctx.r22.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fa9a0
	if (ctx.cr6.eq) goto loc_824FA9A0;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bne cr6,0x824faba8
	if (!ctx.cr6.eq) goto loc_824FABA8;
loc_824FA9A0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f15e0
	ctx.lr = 0x824FA9C4;
	sub_824F15E0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r23,r27,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,60(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfze r28,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8245db88
	ctx.lr = 0x824FAA08;
	sub_8245DB88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824f12f8
	ctx.lr = 0x824FAA14;
	sub_824F12F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c7890
	ctx.lr = 0x824FAA1C;
	sub_824C7890(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824faa54
	if (!ctx.cr6.eq) goto loc_824FAA54;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x824bcef8
	ctx.lr = 0x824FAA34;
	sub_824BCEF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824bc030
	ctx.lr = 0x824FAA40;
	sub_824BC030(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3502
	ctx.r4.s64 = 3502;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x824222f0
	ctx.lr = 0x824FAA54;
	sub_824222F0(ctx, base);
loc_824FAA54:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwzx r7,r23,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm. r11,r7,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824faa7c
	if (!ctx.cr0.eq) goto loc_824FAA7C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x824bc4d0
	ctx.lr = 0x824FAA6C;
	sub_824BC4D0(ctx, base);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4502
	ctx.r4.s64 = 4502;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824FAA7C;
	sub_824222F0(ctx, base);
loc_824FAA7C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r7,r7,5,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xF;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x824fabb4
	if (ctx.cr6.eq) goto loc_824FABB4;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r8,r10,1016
	ctx.r8.s64 = ctx.r10.s64 + 1016;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// bl 0x824f41c8
	ctx.lr = 0x824FAAD0;
	sub_824F41C8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x824f54c8
	ctx.lr = 0x824FAAE8;
	sub_824F54C8(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// beq 0x824fab28
	if (ctx.cr0.eq) goto loc_824FAB28;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// beq 0x824fab14
	if (ctx.cr0.eq) goto loc_824FAB14;
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x824fab28
	if (ctx.cr6.eq) goto loc_824FAB28;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x824fab24
	goto loc_824FAB24;
loc_824FAB14:
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x824fab28
	if (ctx.cr6.eq) goto loc_824FAB28;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
loc_824FAB24:
	// sth r11,14(r28)
	REX_STORE_U16(ctx.r28.u32 + 14, ctx.r11.u16);
loc_824FAB28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824fab5c
	if (!ctx.cr6.eq) goto loc_824FAB5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// bl 0x8245cac8
	ctx.lr = 0x824FAB50;
	sub_8245CAC8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
loc_824FAB5C:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x824f1720
	ctx.lr = 0x824FAB78;
	sub_824F1720(ctx, base);
	// addi r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 + 972;
	// lwz r10,1008(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,1008(r31)
	REX_STORE_U32(ctx.r31.u32 + 1008, ctx.r29.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r9,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
loc_824FABA8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822042a0
	__restgprlr_22(ctx, base);
	return;
loc_824FABB4:
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x824f4350
	ctx.lr = 0x824FABD0;
	sub_824F4350(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,20,14,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// ld r25,120(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r5,r26,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824fa4e0
	ctx.lr = 0x824FAC08;
	sub_824FA4E0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x824fab28
	if (!ctx.cr0.eq) goto loc_824FAB28;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r5,r26,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f17e0
	ctx.lr = 0x824FAC2C;
	sub_824F17E0(ctx, base);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824222f0
	ctx.lr = 0x824FAC38;
	sub_824222F0(ctx, base);
}

DEFINE_REX_FUNC(sub_82502CC8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825037C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-25512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503A20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82503A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82503a64
	if (!ctx.cr6.eq) goto loc_82503A64;
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
	// li r7,3577
	ctx.r7.s64 = 3577;
	// bl 0x82428090
	ctx.lr = 0x82503A64;
	sub_82428090(ctx, base);
loc_82503A64:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dee00
	ctx.lr = 0x82503A70;
	sub_824DEE00(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82503ab4
	if (ctx.cr6.eq) goto loc_82503AB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82503ab4
	if (ctx.cr6.eq) goto loc_82503AB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82500358
	ctx.lr = 0x82503A8C;
	sub_82500358(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r11,1864
	ctx.r11.s64 = ctx.r11.s64 + 1864;
	// addi r4,r10,-25528
	ctx.r4.s64 = ctx.r10.s64 + -25528;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,70
	ctx.r6.s64 = 70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// bctrl 
	ctx.lr = 0x82503AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82503AB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825052A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825052b0
	if (ctx.cr6.eq) goto loc_825052B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_825052B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82506018) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82506020;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8242dcc8
	ctx.lr = 0x8250603C;
	sub_8242DCC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x8242dcc8
	ctx.lr = 0x82506050;
	sub_8242DCC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242dcc8
	ctx.lr = 0x82506064;
	sub_8242DCC8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-3532
	ctx.r28.s64 = ctx.r11.s64 + -3532;
	// addi r27,r10,-23928
	ctx.r27.s64 = ctx.r10.s64 + -23928;
	// beq cr6,0x82506084
	if (ctx.cr6.eq) goto loc_82506084;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// blt cr6,0x825060a0
	if (ctx.cr6.lt) goto loc_825060A0;
loc_82506084:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-21804
	ctx.r5.s64 = ctx.r11.s64 + -21804;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,553
	ctx.r7.s64 = 553;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x825060A0;
	sub_82428090(ctx, base);
loc_825060A0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x825060dc
	if (!ctx.cr6.eq) goto loc_825060DC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,-24816
	ctx.r11.s64 = ctx.r11.s64 + -24816;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82506144
	if (!ctx.cr6.eq) goto loc_82506144;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,-21820
	ctx.r5.s64 = ctx.r11.s64 + -21820;
	// b 0x82506134
	goto loc_82506134;
loc_825060DC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,-24816
	ctx.r11.s64 = ctx.r11.s64 + -24816;
	// bne cr6,0x82506110
	if (!ctx.cr6.eq) goto loc_82506110;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82506144
	if (!ctx.cr6.eq) goto loc_82506144;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,-21820
	ctx.r5.s64 = ctx.r11.s64 + -21820;
	// b 0x82506134
	goto loc_82506134;
loc_82506110:
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82506144
	if (!ctx.cr6.eq) goto loc_82506144;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x82506144
	if (ctx.cr6.eq) goto loc_82506144;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,585
	ctx.r7.s64 = 585;
	// addi r5,r11,20292
	ctx.r5.s64 = ctx.r11.s64 + 20292;
loc_82506134:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x82506144;
	sub_82428090(ctx, base);
loc_82506144:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8250CDC8) {
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
	// bl 0x8252d4e0
	ctx.lr = 0x8250CDE8;
	sub_8252D4E0(ctx, base);
	// lbz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250ce60
	if (ctx.cr0.eq) goto loc_8250CE60;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,2028(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250ce0c
	if (ctx.cr0.eq) goto loc_8250CE0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508d20
	ctx.lr = 0x8250CE0C;
	sub_82508D20(ctx, base);
loc_8250CE0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250a650
	ctx.lr = 0x8250CE14;
	sub_8250A650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250a750
	ctx.lr = 0x8250CE1C;
	sub_8250A750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82507f50
	ctx.lr = 0x8250CE24;
	sub_82507F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508268
	ctx.lr = 0x8250CE2C;
	sub_82508268(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ce44
	if (ctx.cr0.eq) goto loc_8250CE44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250c520
	ctx.lr = 0x8250CE44;
	sub_8250C520(ctx, base);
loc_8250CE44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1404);
	// stw r11,2088(r31)
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r11.u32);
	// bl 0x82508460
	ctx.lr = 0x8250CE5C;
	sub_82508460(ctx, base);
	// b 0x8250cebc
	goto loc_8250CEBC;
loc_8250CE60:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250ce9c
	if (!ctx.cr6.eq) goto loc_8250CE9C;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250ce9c
	if (!ctx.cr6.eq) goto loc_8250CE9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,-21688
	ctx.r6.s64 = ctx.r11.s64 + -21688;
	// addi r5,r10,-21600
	ctx.r5.s64 = ctx.r10.s64 + -21600;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,532
	ctx.r7.s64 = 532;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8250CE9C;
	sub_82428090(ctx, base);
loc_8250CE9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82509f48
	ctx.lr = 0x8250CEA4;
	sub_82509F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250cd08
	ctx.lr = 0x8250CEAC;
	sub_8250CD08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82507a80
	ctx.lr = 0x8250CEB4;
	sub_82507A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250c390
	ctx.lr = 0x8250CEBC;
	sub_8250C390(ctx, base);
loc_8250CEBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252aee0
	ctx.lr = 0x8250CEC4;
	sub_8252AEE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825065b0
	ctx.lr = 0x8250CECC;
	sub_825065B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533a98
	ctx.lr = 0x8250CED4;
	sub_82533A98(ctx, base);
	// lwz r5,2156(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2156);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8250cef0
	if (ctx.cr6.eq) goto loc_8250CEF0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-20656
	ctx.r4.s64 = ctx.r11.s64 + -20656;
	// bl 0x82112fa8
	ctx.lr = 0x8250CEF0;
	sub_82112FA8(ctx, base);
loc_8250CEF0:
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

DEFINE_REX_FUNC(sub_82513E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82513E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,236(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// lwz r3,2736(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 2736);
	// bl 0x82534850
	ctx.lr = 0x82513EB8;
	sub_82534850(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// bl 0x82511d50
	ctx.lr = 0x82513ECC;
	sub_82511D50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825125b0
	ctx.lr = 0x82513EE0;
	sub_825125B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82514FC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82514fec
	if (!ctx.cr6.eq) goto loc_82514FEC;
	// lwz r11,900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,900(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82514FEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82515240) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82515270:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82515290
	if (!ctx.cr6.lt) goto loc_82515290;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82515270
	if (ctx.cr6.lt) goto loc_82515270;
loc_82515290:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x824ec9c0
	ctx.lr = 0x825152A0;
	sub_824EC9C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x825152B4;
	sub_82203A90(ctx, base);
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

DEFINE_REX_FUNC(sub_82517BA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r9.u32);
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,2136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82517BC8:
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82517bfc
	if (ctx.cr0.gt) goto loc_82517BFC;
	// lwz r11,2080(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2080);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82517bf8
	if (!ctx.cr6.gt) goto loc_82517BF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82517BF8:
	// stw r11,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r11.u32);
loc_82517BFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82517bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82517BC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251B170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x8251B178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r30,r11,-3532
	ctx.r30.s64 = ctx.r11.s64 + -3532;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r10,-16032
	ctx.r29.s64 = ctx.r10.s64 + -16032;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8251b1c4
	if (ctx.cr6.eq) goto loc_8251B1C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8251b1c4
	if (ctx.cr6.eq) goto loc_8251B1C4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-15912
	ctx.r5.s64 = ctx.r11.s64 + -15912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,466
	ctx.r7.s64 = 466;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8251B1C4;
	sub_82428090(ctx, base);
loc_8251B1C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8251b1e0
	if (!ctx.cr6.eq) goto loc_8251B1E0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8251b220
	goto loc_8251B220;
loc_8251B1E0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8251b204
	if (!ctx.cr6.eq) goto loc_8251B204;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8251b220
	if (ctx.cr6.eq) goto loc_8251B220;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r5,r11,-15940
	ctx.r5.s64 = ctx.r11.s64 + -15940;
	// b 0x8251b210
	goto loc_8251B210;
loc_8251B204:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,474
	ctx.r7.s64 = 474;
	// addi r5,r11,22544
	ctx.r5.s64 = ctx.r11.s64 + 22544;
loc_8251B210:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8251B220;
	sub_82428090(ctx, base);
loc_8251B220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251CA98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8251CAA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8251cb10
	if (!ctx.cr6.gt) goto loc_8251CB10;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8251CAC8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251cae0
	if (!ctx.cr6.lt) goto loc_8251CAE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8251cae8
	goto loc_8251CAE8;
loc_8251CAE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251CAE8;
	sub_82523EF0(ctx, base);
loc_8251CAE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x8251cb98
	if (ctx.cr6.eq) goto loc_8251CB98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251cac8
	if (ctx.cr6.lt) goto loc_8251CAC8;
loc_8251CB10:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x8251CB24;
	sub_824EC9C0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8251cbc0
	if (ctx.cr0.eq) goto loc_8251CBC0;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r8,-15860
	ctx.r8.s64 = ctx.r8.s64 + -15860;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,2380(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r27,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r27.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r31,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stw r31,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stb r31,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r31.u8);
	// stw r31,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// b 0x8251cbc4
	goto loc_8251CBC4;
loc_8251CB98:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251cbb0
	if (!ctx.cr6.lt) goto loc_8251CBB0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8251cbb8
	goto loc_8251CBB8;
loc_8251CBB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82523ef0
	ctx.lr = 0x8251CBB8;
	sub_82523EF0(ctx, base);
loc_8251CBB8:
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8251cc54
	goto loc_8251CC54;
loc_8251CBC0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8251CBC4:
	// stb r31,56(r28)
	REX_STORE_U8(ctx.r28.u32 + 56, ctx.r31.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,1456(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x8251CBDC;
	sub_824EC9C0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8251cbfc
	if (ctx.cr0.eq) goto loc_8251CBFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x82506258
	ctx.lr = 0x8251CBF8;
	sub_82506258(ctx, base);
	// b 0x8251cc00
	goto loc_8251CC00;
loc_8251CBFC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8251CC00:
	// stw r30,52(r28)
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,1456(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x8251CC18;
	sub_824EC9C0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8251cc38
	if (ctx.cr0.eq) goto loc_8251CC38;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x82506258
	ctx.lr = 0x8251CC34;
	sub_82506258(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8251CC38:
	// stw r31,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x8251CC48;
	sub_82523EF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8251CC54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82522FD8) {
	REX_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825232F0) {
	REX_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x825233ac
	goto loc_825233AC;
loc_825233AC:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82523530) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82522fe8
	ctx.lr = 0x82523548;
	sub_82522FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82523558
	if (ctx.cr0.eq) goto loc_82523558;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825233b8
	ctx.lr = 0x82523558;
	sub_825233B8(ctx, base);
loc_82523558:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82523C58) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15860
	ctx.r9.s64 = ctx.r10.s64 + -15860;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82524328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x82524330;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252434C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82524404
	if (ctx.cr6.eq) goto loc_82524404;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82524404
	if (!ctx.cr6.gt) goto loc_82524404;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82524380:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82524398
	if (!ctx.cr6.lt) goto loc_82524398;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825243a4
	goto loc_825243A4;
loc_82524398:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82523ef0
	ctx.lr = 0x825243A4;
	sub_82523EF0(ctx, base);
loc_825243A4:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825243B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825243d8
	if (ctx.cr0.eq) goto loc_825243D8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82524380
	if (ctx.cr6.lt) goto loc_82524380;
	// b 0x82524404
	goto loc_82524404;
loc_825243D8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82524404
	if (!ctx.cr6.lt) goto loc_82524404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x82203350
	ctx.lr = 0x82524404;
	sub_82203350(ctx, base);
loc_82524404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82526610) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252662c
	if (ctx.cr6.eq) goto loc_8252662C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82526638
	goto loc_82526638;
loc_8252662C:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_82526638:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r10,16176
	ctx.r11.s64 = ctx.r10.s64 + 16176;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82526664
	if (ctx.cr6.eq) goto loc_82526664;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82526664:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82527908) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82527220
	ctx.lr = 0x82527928;
	sub_82527220(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82528638) {
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
	// lwz r30,1452(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82528660;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8252868c
	if (ctx.cr0.eq) goto loc_8252868C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x82527b00
	ctx.lr = 0x8252867C;
	sub_82527B00(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82528690
	goto loc_82528690;
loc_8252868C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528690:
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

DEFINE_REX_FUNC(sub_82529EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82529EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82529F10:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82529f20
	if (!ctx.cr6.gt) goto loc_82529F20;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82529f2c
	goto loc_82529F2C;
loc_82529F20:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82529F2C:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82529f70
	if (ctx.cr0.eq) goto loc_82529F70;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82529f4c
	if (ctx.cr6.eq) goto loc_82529F4C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82529f10
	goto loc_82529F10;
loc_82529F4C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82529f68
	if (!ctx.cr6.lt) goto loc_82529F68;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82529f6c
	goto loc_82529F6C;
loc_82529F68:
	// bl 0x82523ef0
	ctx.lr = 0x82529F6C;
	sub_82523EF0(ctx, base);
loc_82529F6C:
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_82529F70:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_82529F88:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82529f98
	if (!ctx.cr6.gt) goto loc_82529F98;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82529fa4
	goto loc_82529FA4;
loc_82529F98:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82529FA4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82529fc8
	if (ctx.cr0.eq) goto loc_82529FC8;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82529fc4
	if (ctx.cr6.eq) goto loc_82529FC4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82529f88
	goto loc_82529F88;
loc_82529FC4:
	// bl 0x82523e30
	ctx.lr = 0x82529FC8;
	sub_82523E30(ctx, base);
loc_82529FC8:
	// lwz r3,60(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x82529FD4;
	sub_82523EF0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82536FE8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8728
	ctx.r11.s64 = ctx.r11.s64 + 8728;
	// beq 0x82537004
	if (ctx.cr0.eq) goto loc_82537004;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82537014
	goto loc_82537014;
loc_82537004:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82537014:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253702c
	if (!ctx.cr0.eq) goto loc_8253702C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_8253702C:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82537050
	if (ctx.cr0.eq) goto loc_82537050;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82537050:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82538D28) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82539110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82539118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8220efe8
	ctx.lr = 0x8253913C;
	sub_8220EFE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82539168
	if (!ctx.cr6.eq) goto loc_82539168;
	// bl 0x821f4680
	ctx.lr = 0x82539148;
	sub_821F4680(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82539184
	if (!ctx.cr6.eq) goto loc_82539184;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82539168
	if (!ctx.cr6.eq) goto loc_82539168;
loc_82539158:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
loc_82539160:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82539178
	if (ctx.cr6.lt) goto loc_82539178;
loc_82539168:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82539194
	if (ctx.cr6.eq) goto loc_82539194;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82539178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_82539184:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82539158
	if (ctx.cr6.gt) goto loc_82539158;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82539160
	goto loc_82539160;
loc_82539194:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82539178
	if (ctx.cr6.eq) goto loc_82539178;
	// lis r3,-32765
	ctx.r3.s64 = -2147287040;
	// ori r3,r3,29
	ctx.r3.u64 = ctx.r3.u64 | 29;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82543FE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v126,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v125,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v124,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v123,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v122,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v121,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v120,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v119,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v118,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v117,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v116,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v115,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v114,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v113,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v112,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v111,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v110,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v109,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v108,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v107,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v106,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v105,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v104,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v103,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v102,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v101,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v100,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v99,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v98,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v97,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v96,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v95,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v94,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v93,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v92,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v91,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v90,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v89,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v88,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v87,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v86,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v85,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v84,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v83,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v82,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v81,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v80,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v79,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v78,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v77,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v76,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v75,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v74,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v73,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v51,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v48,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v41,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v40,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v38,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v37,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v36,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v32,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82571EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x82571ED0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r26,r3,232
	ctx.r26.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
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
	// blt cr6,0x82571f48
	if (ctx.cr6.lt) goto loc_82571F48;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822dc648
	ctx.lr = 0x82571F40;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82571fa8
	goto loc_82571FA8;
loc_82571F48:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82571fa4
	if (!ctx.cr6.gt) goto loc_82571FA4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82571F54:
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
	// lbzx r23,r26,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x82571f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82571F54;
loc_82571FA4:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82571FA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82572014
	if (!ctx.cr6.eq) goto loc_82572014;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
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
	// b 0x82572030
	goto loc_82572030;
loc_82572014:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x82572030;
	sub_8255F9C0(ctx, base);
loc_82572030:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r25,r25,30,26,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
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
	// blt cr6,0x8257208c
	if (ctx.cr6.lt) goto loc_8257208C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dc648
	ctx.lr = 0x82572084;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x825720ec
	goto loc_825720EC;
loc_8257208C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825720e8
	if (!ctx.cr6.gt) goto loc_825720E8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82572098:
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
	// lbzx r23,r26,r3
	ctx.r23.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x82572098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82572098;
loc_825720E8:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_825720EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82572158
	if (!ctx.cr6.eq) goto loc_82572158;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
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
	// b 0x82572174
	goto loc_82572174;
loc_82572158:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x82572174;
	sub_8255F9C0(ctx, base);
loc_82572174:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r27,r9,30
	ctx.r27.u64 = ctx.r9.u32 & 0x3;
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
	// blt cr6,0x825721d0
	if (ctx.cr6.lt) goto loc_825721D0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dc648
	ctx.lr = 0x825721C8;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82572230
	goto loc_82572230;
loc_825721D0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257222c
	if (!ctx.cr6.gt) goto loc_8257222C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825721DC:
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
	// lbzx r29,r26,r3
	ctx.r29.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x825721dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825721DC;
loc_8257222C:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82572230:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// bne cr6,0x825722a0
	if (!ctx.cr6.eq) goto loc_825722A0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_825722A0:
	// rlwinm r11,r27,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x825722B8;
	sub_8255F9C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

