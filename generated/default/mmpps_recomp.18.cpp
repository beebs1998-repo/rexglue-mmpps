#include "mmpps_funcs.18.h"

DEFINE_REX_FUNC(sub_821029E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821029F0;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82102f6c
	if (ctx.cr6.gt) goto loc_82102F6C;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r28,-32156
	ctx.r28.s64 = -2107375616;
	// addi r31,r10,22064
	ctx.r31.s64 = ctx.r10.s64 + 22064;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82102a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102A7C;
	// bdzf 4*cr6+eq,0x82102c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102C78;
	// bdzf 4*cr6+eq,0x82102d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102D9C;
	// bdzf 4*cr6+eq,0x82102e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102E60;
	// bdzf 4*cr6+eq,0x82102e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102E90;
	// bdzf 4*cr6+eq,0x82102f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102F18;
	// bdzf 4*cr6+eq,0x82102e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82102E90;
	// bne cr6,0x82102f44
	if (!ctx.cr6.eq) goto loc_82102F44;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,-30016(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30016);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82102A7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82102aa4
	if (ctx.cr6.eq) goto loc_82102AA4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82102ab0
	if (ctx.cr6.eq) goto loc_82102AB0;
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102AA4:
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
loc_82102AB0:
	// lwz r3,-30016(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82102f6c
	if (!ctx.cr0.eq) goto loc_82102F6C;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821042a8
	ctx.lr = 0x82102AE4;
	sub_821042A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82102b70
	if (ctx.cr0.eq) goto loc_82102B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,-30020(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -30020);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// li r8,900
	ctx.r8.s64 = 900;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,716(r31)
	REX_STORE_U32(ctx.r31.u32 + 716, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stfs f31,856(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// stw r8,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x821044a0
	ctx.lr = 0x82102B60;
	sub_821044A0(ctx, base);
	// bl 0x821076c8
	ctx.lr = 0x82102B64;
	sub_821076C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102B70:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821042a8
	ctx.lr = 0x82102B7C;
	sub_821042A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82102c0c
	if (ctx.cr0.eq) goto loc_82102C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,-30020(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -30020);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f31,856(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// li r8,900
	ctx.r8.s64 = 900;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r8,716(r31)
	REX_STORE_U32(ctx.r31.u32 + 716, ctx.r8.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// stw r8,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r8.u32);
	// bl 0x821044a0
	ctx.lr = 0x82102C00;
	sub_821044A0(ctx, base);
	// bl 0x821076c8
	ctx.lr = 0x82102C04;
	sub_821076C8(ctx, base);
	// stw r28,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r28.u32);
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102C0C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821042a8
	ctx.lr = 0x82102C18;
	sub_821042A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82102c50
	if (ctx.cr0.eq) goto loc_82102C50;
	// bl 0x821076c8
	ctx.lr = 0x82102C24;
	sub_821076C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
loc_82102C30:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r9.u32);
	// stw r11,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102C50:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x821042a8
	ctx.lr = 0x82102C5C;
	sub_821042A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82102f6c
	if (ctx.cr0.eq) goto loc_82102F6C;
	// bl 0x821076c8
	ctx.lr = 0x82102C68;
	sub_821076C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,884(r31)
	REX_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82102c30
	goto loc_82102C30;
loc_82102C78:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r31,r11,22064
	ctx.r31.s64 = ctx.r11.s64 + 22064;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82102cc4
	if (ctx.cr6.eq) goto loc_82102CC4;
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82102ccc
	if (ctx.cr6.eq) goto loc_82102CCC;
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102CC4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
loc_82102CCC:
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f30,816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 816);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 812);
	ctx.f31.f64 = double(temp.f32);
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82102d38
	if (!ctx.cr6.eq) goto loc_82102D38;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,268(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82102cf8
	if (!ctx.cr6.eq) goto loc_82102CF8;
	// stfs f30,268(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 268, temp.u32);
loc_82102CF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,612(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r10,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,-19536
	ctx.r4.s64 = ctx.r11.s64 + -19536;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82102D38:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82102f6c
	if (!ctx.cr6.eq) goto loc_82102F6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82102d58
	if (!ctx.cr6.eq) goto loc_82102D58;
	// stfs f30,268(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 268, temp.u32);
loc_82102D58:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f29,612(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,-19052
	ctx.r4.s64 = ctx.r11.s64 + -19052;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102D9C:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82102f6c
	if (!ctx.cr0.eq) goto loc_82102F6C;
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
	ctx.lr = 0x82102DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,500
	ctx.r9.s64 = 500;
	// stw r8,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
	// stw r7,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r8,r11,1080
	ctx.r8.s64 = ctx.r11.s64 + 1080;
	// stw r9,716(r11)
	REX_STORE_U32(ctx.r11.u32 + 716, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82102DFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r10,72(r8)
	ea = 72 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82102dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82102DFC;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,888(r11)
	REX_STORE_U32(ctx.r11.u32 + 888, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r8,1840
	ctx.r7.s64 = ctx.r8.s64 + 1840;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,892(r11)
	REX_STORE_U32(ctx.r11.u32 + 892, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r10.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,884(r11)
	REX_STORE_U32(ctx.r11.u32 + 884, ctx.r8.u32);
	// lfs f0,56(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,860(r11)
	REX_STORE_U32(ctx.r11.u32 + 860, ctx.r9.u32);
	// lfs f13,68(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,864(r11)
	REX_STORE_U32(ctx.r11.u32 + 864, ctx.r10.u32);
	// lfs f12,404(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,868(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f0,872(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 872, temp.u32);
	// stfs f12,880(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 880, temp.u32);
	// stfs f0,876(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 876, temp.u32);
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102E60:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-19024
	ctx.r4.s64 = ctx.r10.s64 + -19024;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
loc_82102E88:
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// b 0x82102f68
	goto loc_82102F68;
loc_82102E90:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82102f6c
	if (!ctx.cr0.eq) goto loc_82102F6C;
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
	ctx.lr = 0x82102EC4;
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
	// li r7,1
	ctx.r7.s64 = 1;
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
	// b 0x82102f6c
	goto loc_82102F6C;
loc_82102F18:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-19268
	ctx.r4.s64 = ctx.r10.s64 + -19268;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82102e88
	goto loc_82102E88;
loc_82102F44:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lwz r3,-30016(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30016);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82102F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82102f6c
	if (!ctx.cr0.eq) goto loc_82102F6C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82102F68:
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82102F6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213E048) {
	REX_FUNC_PROLOGUE();
	// stw r4,9080(r3)
	REX_STORE_U32(ctx.r3.u32 + 9080, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E088) {
	REX_FUNC_PROLOGUE();
	// lwz r3,7780(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7780);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E110) {
	REX_FUNC_PROLOGUE();
	// stw r4,8356(r3)
	REX_STORE_U32(ctx.r3.u32 + 8356, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E188) {
	REX_FUNC_PROLOGUE();
	// stw r4,8416(r3)
	REX_STORE_U32(ctx.r3.u32 + 8416, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E228) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8404(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8404);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213F268) {
	REX_FUNC_PROLOGUE();
	// lwz r3,7808(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7808);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213F308) {
	REX_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82203c68
	sub_82203C68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213F430) {
	REX_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213F440) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213F738) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8213F740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f76c
	if (ctx.cr6.eq) goto loc_8213F76C;
	// bl 0x82203c68
	ctx.lr = 0x8213F760;
	sub_82203C68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8213F76C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213f7b8
	if (ctx.cr6.eq) goto loc_8213F7B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f90f0
	ctx.lr = 0x8213F77C;
	sub_821F90F0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82203350
	ctx.lr = 0x8213F78C;
	sub_82203350(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// ori r5,r5,32785
	ctx.r5.u64 = ctx.r5.u64 | 32785;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F7B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213F7B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82142438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82142440;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82142470
	if (!ctx.cr0.eq) goto loc_82142470;
loc_82142468:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821424d4
	goto loc_821424D4;
loc_82142470:
	// lwz r11,8196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82142468
	if (!ctx.cr6.eq) goto loc_82142468;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,8196(r31)
	REX_STORE_U32(ctx.r31.u32 + 8196, ctx.r10.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821424A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8020
	ctx.r3.s64 = ctx.r31.s64 + 8020;
	// bl 0x82143b08
	ctx.lr = 0x821424B4;
	sub_82143B08(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821424D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821424D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82143660) {
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
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214367C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82143694
	if (ctx.cr0.eq) goto loc_82143694;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x821f40a0
	ctx.lr = 0x8214368C;
	sub_821F40A0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82143694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6680);
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

DEFINE_REX_FUNC(sub_8214A4B8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
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

DEFINE_REX_FUNC(sub_8214A578) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C920) {
	REX_FUNC_PROLOGUE();
	// lwz r10,6576(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6576);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214c938
	if (ctx.cr6.eq) goto loc_8214C938;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8214C938:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,6616(r11)
	REX_STORE_U32(ctx.r11.u32 + 6616, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,6620(r11)
	REX_STORE_U32(ctx.r11.u32 + 6620, ctx.r4.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r6,6608(r11)
	REX_STORE_U32(ctx.r11.u32 + 6608, ctx.r6.u32);
	// stw r10,6600(r11)
	REX_STORE_U32(ctx.r11.u32 + 6600, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,6588(r11)
	REX_STORE_U32(ctx.r11.u32 + 6588, ctx.r10.u32);
	// stw r10,6592(r11)
	REX_STORE_U32(ctx.r11.u32 + 6592, ctx.r10.u32);
	// stw r10,6596(r11)
	REX_STORE_U32(ctx.r11.u32 + 6596, ctx.r10.u32);
	// stw r7,6572(r11)
	REX_STORE_U32(ctx.r11.u32 + 6572, ctx.r7.u32);
	// stw r9,6580(r11)
	REX_STORE_U32(ctx.r11.u32 + 6580, ctx.r9.u32);
	// stw r8,6576(r11)
	REX_STORE_U32(ctx.r11.u32 + 6576, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214FE38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8214FE40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,340(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,6468(r31)
	REX_STORE_U32(ctx.r31.u32 + 6468, ctx.r27.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,6424(r31)
	REX_STORE_U32(ctx.r31.u32 + 6424, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,6464(r31)
	REX_STORE_U32(ctx.r31.u32 + 6464, ctx.r11.u32);
	// stw r11,6436(r31)
	REX_STORE_U32(ctx.r31.u32 + 6436, ctx.r11.u32);
	// stw r11,6448(r31)
	REX_STORE_U32(ctx.r31.u32 + 6448, ctx.r11.u32);
	// stw r10,6444(r31)
	REX_STORE_U32(ctx.r31.u32 + 6444, ctx.r10.u32);
	// stw r9,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r9.u32);
	// stw r29,6428(r31)
	REX_STORE_U32(ctx.r31.u32 + 6428, ctx.r29.u32);
	// stw r28,6432(r31)
	REX_STORE_U32(ctx.r31.u32 + 6432, ctx.r28.u32);
	// stw r26,6456(r31)
	REX_STORE_U32(ctx.r31.u32 + 6456, ctx.r26.u32);
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FEB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82153590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204234
	ctx.lr = 0x82153598;
	__savegprlr_15(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r15,20(r4)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r4.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// addi r16,r4,20
	ctx.r16.s64 = ctx.r4.s64 + 20;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// cmpwi r15,0
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble 0x82153b90
	if (!ctx.cr0.gt) goto loc_82153B90;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r22,r11,3124
	ctx.r22.u64 = ctx.r11.u64 | 3124;
	// ori r25,r10,2680
	ctx.r25.u64 = ctx.r10.u64 | 2680;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r21,80
	ctx.r21.s64 = 80;
	// li r18,9
	ctx.r18.s64 = 9;
	// li r19,4
	ctx.r19.s64 = 4;
	// ori r24,r9,65534
	ctx.r24.u64 = ctx.r9.u64 | 65534;
	// ori r23,r8,2960
	ctx.r23.u64 = ctx.r8.u64 | 2960;
loc_821535EC:
	// lhz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r16.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82153600
	if (ctx.cr6.lt) goto loc_82153600;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82153620
	goto loc_82153620;
loc_82153600:
	// addi r11,r16,4
	ctx.r11.s64 = ctx.r16.s64 + 4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82153620
	if (!ctx.cr6.gt) goto loc_82153620;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_82153610:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82153610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82153610;
loc_82153620:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82153b84
	if (ctx.cr6.gt) goto loc_82153B84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82153698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82153698;
	// bdzf 4*cr6+eq,0x82153b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82153B84;
	// bdzf 4*cr6+eq,0x821539e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821539E0;
	// bdzf 4*cr6+eq,0x82153aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82153AA0;
	// bdzf 4*cr6+eq,0x82153948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82153948;
	// bdzf 4*cr6+eq,0x8215399c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215399C;
	// bdzf 4*cr6+eq,0x82153aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82153AAC;
	// bne cr6,0x82153b0c
	if (!ctx.cr6.eq) goto loc_82153B0C;
	// lwz r30,144(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x821f4a10
	ctx.lr = 0x82153668;
	sub_821F4A10(ctx, base);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f3b60
	ctx.lr = 0x82153678;
	sub_821F3B60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412350
	ctx.lr = 0x82153680;
	sub_82412350(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// bl 0x82151ec0
	ctx.lr = 0x82153694;
	sub_82151EC0(ctx, base);
	// b 0x82153b84
	goto loc_82153B84;
loc_82153698:
	// lwzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82153b84
	if (!ctx.cr6.eq) goto loc_82153B84;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addi r29,r29,2968
	ctx.r29.s64 = ctx.r29.s64 + 2968;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82153b84
	if (!ctx.cr6.eq) goto loc_82153B84;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821536f4
	if (!ctx.cr0.gt) goto loc_821536F4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_821536DC:
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x821536dc
	if (ctx.cr6.lt) goto loc_821536DC;
loc_821536F4:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r31,r25
	ctx.r30.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r28,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// bl 0x82151f58
	ctx.lr = 0x8215370C;
	sub_82151F58(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ld r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r26,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// ori r11,r11,3088
	ctx.r11.u64 = ctx.r11.u64 | 3088;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r10,r10,2696
	ctx.r10.u64 = ctx.r10.u64 | 2696;
	// ori r9,r9,2988
	ctx.r9.u64 = ctx.r9.u64 | 2988;
	// stdx r27,r31,r10
	REX_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u64);
	// stwx r17,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r17.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153748
	if (ctx.cr6.eq) goto loc_82153748;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_82153748:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215375C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f9ce8
	ctx.lr = 0x82153778;
	sub_821F9CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82153790
	if (ctx.cr0.eq) goto loc_82153790;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82151f58
	ctx.lr = 0x8215378C;
	sub_82151F58(ctx, base);
	// b 0x82153b84
	goto loc_82153B84;
loc_82153790:
	// addis r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 131072;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r4,r4,2584
	ctx.r4.s64 = ctx.r4.s64 + 2584;
	// addi r11,r11,2604
	ctx.r11.s64 = ctx.r11.s64 + 2604;
	// li r10,86
	ctx.r10.s64 = 86;
	// li r9,68
	ctx.r9.s64 = 68;
	// sth r28,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r28.u16);
	// sth r28,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r28.u16);
	// sth r28,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r28.u16);
	// sth r28,20(r4)
	REX_STORE_U16(ctx.r4.u32 + 20, ctx.r28.u16);
	// stb r9,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// stb r21,6(r4)
	REX_STORE_U8(ctx.r4.u32 + 6, ctx.r21.u8);
	// stb r21,7(r4)
	REX_STORE_U8(ctx.r4.u32 + 7, ctx.r21.u8);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x82153800
	if (!ctx.cr6.lt) goto loc_82153800;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addic. r10,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r10.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// beq 0x82153800
	if (ctx.cr0.eq) goto loc_82153800;
	// sth r18,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r18.u16);
	// sth r19,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r19.u16);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
loc_82153800:
	// lhz r11,22(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 22);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// ori r10,r10,2586
	ctx.r10.u64 = ctx.r10.u64 | 2586;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lwz r3,2452(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// bl 0x821d4b70
	ctx.lr = 0x82153838;
	sub_821D4B70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82154b70
	ctx.lr = 0x82153840;
	sub_82154B70(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r24,2500(r31)
	REX_STORE_U32(ctx.r31.u32 + 2500, ctx.r24.u32);
	// ori r10,r10,2992
	ctx.r10.u64 = ctx.r10.u64 | 2992;
	// ori r9,r9,35296
	ctx.r9.u64 = ctx.r9.u64 | 35296;
	// ori r8,r8,35292
	ctx.r8.u64 = ctx.r8.u64 | 35292;
	// stw r11,2504(r31)
	REX_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r24,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u32);
	// bl 0x821f4a58
	ctx.lr = 0x82153874;
	sub_821F4A58(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// ori r10,r10,2688
	ctx.r10.u64 = ctx.r10.u64 | 2688;
	// stwx r3,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r3.u32);
	// ori r9,r9,2980
	ctx.r9.u64 = ctx.r9.u64 | 2980;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stwx r26,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// stwx r26,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r28,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// beq cr6,0x821538d4
	if (ctx.cr6.eq) goto loc_821538D4;
	// li r10,39
	ctx.r10.s64 = 39;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821538D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821538D4:
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82155748
	ctx.lr = 0x821538E4;
	sub_82155748(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82155898
	ctx.lr = 0x821538F0;
	sub_82155898(ctx, base);
	// stw r28,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821d4c38
	ctx.lr = 0x82153900;
	sub_821D4C38(ctx, base);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r30,r30,2632
	ctx.r30.s64 = ctx.r30.s64 + 2632;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203a90
	ctx.lr = 0x82153918;
	sub_82203A90(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// ori r11,r11,2636
	ctx.r11.u64 = ctx.r11.u64 | 2636;
	// ori r10,r10,2634
	ctx.r10.u64 = ctx.r10.u64 | 2634;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x82153b84
	goto loc_82153B84;
loc_82153948:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r31,2508
	ctx.r11.s64 = ctx.r31.s64 + 2508;
	// ori r10,r10,2964
	ctx.r10.u64 = ctx.r10.u64 | 2964;
	// stwx r26,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// lhz r10,2510(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2510);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x82153994
	if (!ctx.cr6.lt) goto loc_82153994;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addic. r10,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r10.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// beq 0x82153994
	if (ctx.cr0.eq) goto loc_82153994;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r18,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r18.u16);
	// sth r19,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r19.u16);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82153994:
	// stwx r28,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r28.u32);
	// b 0x82153b84
	goto loc_82153B84;
loc_8215399C:
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r30,r31,r25
	ctx.r30.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821539B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f9e40
	ctx.lr = 0x821539CC;
	sub_821F9E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82151f58
	ctx.lr = 0x821539D8;
	sub_82151F58(ctx, base);
	// stwx r26,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r26.u32);
	// b 0x82153b84
	goto loc_82153B84;
loc_821539E0:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82153a1c
	if (!ctx.cr0.gt) goto loc_82153A1C;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_82153A04:
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82153a04
	if (ctx.cr6.lt) goto loc_82153A04;
loc_82153A1C:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stbx r28,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// bl 0x82412350
	ctx.lr = 0x82153A2C;
	sub_82412350(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r31,r25
	ctx.r9.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82153a58
	if (!ctx.cr0.gt) goto loc_82153A58;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82153A44:
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lbzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82153a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82153A44;
loc_82153A58:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,2508
	ctx.r11.s64 = ctx.r31.s64 + 2508;
	// stb r28,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r28.u8);
	// lhz r10,2510(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2510);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x82153aa0
	if (!ctx.cr6.lt) goto loc_82153AA0;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addic. r10,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r10.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// beq 0x82153aa0
	if (ctx.cr0.eq) goto loc_82153AA0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r18,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r18.u16);
	// sth r19,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r19.u16);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82153AA0:
	// bl 0x821f4a58
	ctx.lr = 0x82153AA4;
	sub_821F4A58(ctx, base);
	// stwx r3,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r3.u32);
	// b 0x82153b84
	goto loc_82153B84;
loc_82153AAC:
	// lhz r27,4(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 2;
	// bl 0x821f90f0
	ctx.lr = 0x82153ABC;
	sub_821F90F0(ctx, base);
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82153af4
	if (!ctx.cr0.gt) goto loc_82153AF4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
loc_82153ADC:
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82153adc
	if (ctx.cr6.lt) goto loc_82153ADC;
loc_82153AF4:
	// stbx r28,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82154f00
	ctx.lr = 0x82153B08;
	sub_82154F00(ctx, base);
	// b 0x82153b7c
	goto loc_82153B7C;
loc_82153B0C:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r10,r10,3092
	ctx.r10.u64 = ctx.r10.u64 | 3092;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82153b84
	if (ctx.cr6.eq) goto loc_82153B84;
	// lhz r27,4(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 2;
	// bl 0x821f90f0
	ctx.lr = 0x82153B30;
	sub_821F90F0(ctx, base);
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82153b68
	if (!ctx.cr0.gt) goto loc_82153B68;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
loc_82153B50:
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82153b50
	if (ctx.cr6.lt) goto loc_82153B50;
loc_82153B68:
	// stbx r28,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82155e10
	ctx.lr = 0x82153B7C;
	sub_82155E10(ctx, base);
loc_82153B7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203c68
	ctx.lr = 0x82153B84;
	sub_82203C68(ctx, base);
loc_82153B84:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r15
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x821535ec
	if (ctx.cr6.lt) goto loc_821535EC;
loc_82153B90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82164040) {
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
	// bl 0x821585a0
	ctx.lr = 0x82164050;
	sub_821585A0(ctx, base);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-30236
	ctx.r10.s64 = ctx.r10.s64 + -30236;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821651B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821651c4
	if (ctx.cr6.eq) goto loc_821651C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821651C4:
	// stw r4,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821652C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165C70) {
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
	// bl 0x82410be0
	ctx.lr = 0x82165C80;
	sub_82410BE0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82166128) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82204504
	ctx.lr = 0x8216613C;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f10,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f9,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,60(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x823480a0
	ctx.lr = 0x821661F0;
	sub_823480A0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82204550
	ctx.lr = 0x82166214;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216E820) {
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
	// lwz r3,160(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e84c
	if (ctx.cr6.eq) goto loc_8216E84C;
	// bl 0x82203c68
	ctx.lr = 0x8216E844;
	sub_82203C68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_8216E84C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E864;
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

DEFINE_REX_FUNC(sub_8216EE68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8216EE70;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8216f004
	if (ctx.cr0.eq) goto loc_8216F004;
	// lwz r3,152(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EEC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// mulli r10,r3,132
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(132));
	// lwz r9,140(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x8216ef28
	if (ctx.cr6.eq) goto loc_8216EF28;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8216eef4
	if (!ctx.cr6.eq) goto loc_8216EEF4;
loc_8216EEE8:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8216ef74
	goto loc_8216EF74;
loc_8216EEF4:
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EF14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82156c00
	ctx.lr = 0x8216EF18;
	sub_82156C00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8216ef5c
	goto loc_8216EF5C;
loc_8216EF28:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_8216EF2C:
	// beq cr6,0x8216eee8
	if (ctx.cr6.eq) goto loc_8216EEE8;
	// bl 0x82156c00
	ctx.lr = 0x8216EF34;
	sub_82156C00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,124(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 124);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8216EF5C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8216EF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
loc_8216EF74:
	// bl 0x8211ef18
	ctx.lr = 0x8216EF78;
	sub_8211EF18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EF8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EFA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216eff8
	if (ctx.cr0.eq) goto loc_8216EFF8;
loc_8216EFAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EFC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216ee68
	ctx.lr = 0x8216EFD8;
	sub_8216EE68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8216efac
	if (ctx.cr6.lt) goto loc_8216EFAC;
loc_8216EFF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_8216F004:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// mulli r10,r3,132
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(132));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// b 0x8216ef2c
	goto loc_8216EF2C;
}

DEFINE_REX_FUNC(sub_82176998) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821769A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x821f9368
	ctx.lr = 0x821769B4;
	sub_821F9368(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821769d4
	if (ctx.cr0.eq) goto loc_821769D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8312
	ctx.r11.s64 = ctx.r11.s64 + 8312;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821769d8
	goto loc_821769D8;
loc_821769D4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821769D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821769e8
	if (!ctx.cr6.eq) goto loc_821769E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82176afc
	goto loc_82176AFC;
loc_821769E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x82203a90
	ctx.lr = 0x82176A48;
	sub_82203A90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r30,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r28,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82176ab8
	if (!ctx.cr6.eq) goto loc_82176AB8;
	// stw r31,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// b 0x82176ac8
	goto loc_82176AC8;
loc_82176AB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82176AC8:
	// stw r31,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_82176AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821f3b80
	ctx.lr = 0x82176AEC;
	sub_821F3B80(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82176ae4
	if (!ctx.cr6.eq) goto loc_82176AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176AFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217F998) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217FA70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217FCC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r6,r31,164
	ctx.r6.s64 = ctx.r31.s64 + 164;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// bl 0x823492a0
	ctx.lr = 0x8217FCF0;
	sub_823492A0(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f0,92(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f0,100(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f0,108(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,120(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,124(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,136(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 60, temp.u32);
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

DEFINE_REX_FUNC(sub_82182DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82182DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,16400(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16400);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,9232
	ctx.r11.s64 = ctx.r3.s64 + 9232;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82182e24
	if (ctx.cr0.eq) goto loc_82182E24;
	// addi r28,r11,-20
	ctx.r28.s64 = ctx.r11.s64 + -20;
loc_82182DE4:
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182e0c
	if (ctx.cr6.eq) goto loc_82182E0C;
loc_82182DF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182E00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82182df0
	if (!ctx.cr0.eq) goto loc_82182DF0;
loc_82182E0C:
	// lwzu r11,28(r28)
	ea = 28 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r10,16400(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 16400);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82182de4
	if (ctx.cr6.lt) goto loc_82182DE4;
loc_82182E24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82186540) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186570
	if (ctx.cr6.eq) goto loc_82186570;
	// bl 0x821ac190
	ctx.lr = 0x8218656C;
	sub_821AC190(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82186570:
	// lwz r3,304(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186584
	if (ctx.cr6.eq) goto loc_82186584;
	// bl 0x82203c68
	ctx.lr = 0x82186580;
	sub_82203C68(ctx, base);
	// stw r30,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
loc_82186584:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218659C;
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

DEFINE_REX_FUNC(sub_82189470) {
	REX_FUNC_PROLOGUE();
	// lhz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189490) {
	REX_FUNC_PROLOGUE();
	// sth r4,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821897E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x821897E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,3420(r3)
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82203b30
	ctx.lr = 0x82189810;
	sub_82203B30(ctx, base);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
loc_8218981C:
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// stbx r10,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
	// beq cr6,0x82189844
	if (ctx.cr6.eq) goto loc_82189844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8218981c
	if (ctx.cr6.lt) goto loc_8218981C;
loc_8218983C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82189948
	goto loc_82189948;
loc_82189844:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,292(r11)
	REX_STORE_U8(ctx.r11.u32 + 292, ctx.r28.u8);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// bl 0x821f3a20
	ctx.lr = 0x82189858;
	sub_821F3A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8218983c
	if (ctx.cr0.eq) goto loc_8218983C;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8218986C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218986c
	if (!ctx.cr6.eq) goto loc_8218986C;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x821898a4
	if (!ctx.cr6.gt) goto loc_821898A4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821898A4:
	// bl 0x821f90f0
	ctx.lr = 0x821898A8;
	sub_821F90F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8220f898
	ctx.lr = 0x821898C8;
	sub_8220F898(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,304
	ctx.r5.s64 = 304;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// sth r28,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r28.u16);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82203a90
	ctx.lr = 0x821898E8;
	sub_82203A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82205380
	ctx.lr = 0x821898F8;
	sub_82205380(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82411098
	ctx.lr = 0x82189908;
	sub_82411098(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821595e8
	ctx.lr = 0x82189914;
	sub_821595E8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82203c68
	ctx.lr = 0x82189928;
	sub_82203C68(ctx, base);
	// bl 0x821595e8
	ctx.lr = 0x8218992C;
	sub_821595E8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,492(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// bl 0x821f4920
	ctx.lr = 0x82189940;
	sub_821F4920(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82189948:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218A31C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218CF50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218cf94
	if (ctx.cr6.eq) goto loc_8218CF94;
loc_8218CF60:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r11,1,15,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r11,31,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8218cf60
	if (!ctx.cr6.eq) goto loc_8218CF60;
loc_8218CF94:
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x8218E3D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218e458
	if (ctx.cr6.eq) goto loc_8218E458;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r27,r3,-4
	ctx.r27.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x8218e430
	if (ctx.cr0.lt) goto loc_8218E430;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,9476
	ctx.r29.s64 = ctx.r11.s64 + 9476;
	// addi r28,r10,9956
	ctx.r28.s64 = ctx.r10.s64 + 9956;
loc_8218E418:
	// stwu r28,-256(r31)
	ea = -256 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82192ce0
	ctx.lr = 0x8218E424;
	sub_82192CE0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bge 0x8218e418
	if (!ctx.cr0.lt) goto loc_8218E418;
loc_8218E430:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218e44c
	if (ctx.cr6.eq) goto loc_8218E44C;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x821f4b88
	ctx.lr = 0x8218E44C;
	sub_821F4B88(ctx, base);
loc_8218E44C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_8218E458:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r10,r11,9956
	ctx.r10.s64 = ctx.r11.s64 + 9956;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82192ce0
	ctx.lr = 0x8218E46C;
	sub_82192CE0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// clrlwi r8,r26,31
	ctx.r8.u64 = ctx.r26.u32 & 0x1;
	// addi r7,r9,9476
	ctx.r7.s64 = ctx.r9.s64 + 9476;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8218e494
	if (ctx.cr6.eq) goto loc_8218E494;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32812
	ctx.r4.u64 = ctx.r4.u64 | 32812;
	// bl 0x821f4b88
	ctx.lr = 0x8218E494;
	sub_821F4B88(ctx, base);
loc_8218E494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218EF9C) {
	REX_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191030) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x82191038;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r5,r11,9960
	ctx.r5.s64 = ctx.r11.s64 + 9960;
	// addi r4,r10,10112
	ctx.r4.s64 = ctx.r10.s64 + 10112;
	// addi r11,r9,10496
	ctx.r11.s64 = ctx.r9.s64 + 10496;
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r6,8324
	ctx.r6.s64 = 545521664;
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r10,r8,10120
	ctx.r10.s64 = ctx.r8.s64 + 10120;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r9,r7,10124
	ctx.r9.s64 = ctx.r7.s64 + 10124;
	// ori r24,r6,1
	ctx.r24.u64 = ctx.r6.u64 | 1;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821910a4
	if (ctx.cr6.eq) goto loc_821910A4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821f4b88
	ctx.lr = 0x821910A4;
	sub_821F4B88(ctx, base);
loc_821910A4:
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821910b8
	if (ctx.cr6.eq) goto loc_821910B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821f4b88
	ctx.lr = 0x821910B8;
	sub_821F4B88(ctx, base);
loc_821910B8:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821910fc
	if (ctx.cr6.eq) goto loc_821910FC;
	// lwz r8,308(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// stw r26,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// lhz r5,316(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 316);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// rotlwi r11,r5,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwz r10,252(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 252);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,252(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 252);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r3,24(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// bl 0x8218d390
	ctx.lr = 0x821910FC;
	sub_8218D390(ctx, base);
loc_821910FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191580
	ctx.lr = 0x82191104;
	sub_82191580(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r28,r3,0,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191150
	if (ctx.cr6.eq) goto loc_82191150;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
loc_82191118:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219112c
	if (ctx.cr6.eq) goto loc_8219112C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82191130
	goto loc_82191130;
loc_8219112C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82191130:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82191144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82191118
	if (!ctx.cr6.eq) goto loc_82191118;
loc_82191150:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// beq cr6,0x82191164
	if (ctx.cr6.eq) goto loc_82191164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192140
	ctx.lr = 0x82191164;
	sub_82192140(ctx, base);
loc_82191164:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8219119c
	if (ctx.cr6.eq) goto loc_8219119C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8219119c
	if (ctx.cr6.eq) goto loc_8219119C;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r25,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r25.u32);
	// stw r25,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r25.u32);
loc_8219119C:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821911B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821911e4
	if (ctx.cr6.eq) goto loc_821911E4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
loc_821911C8:
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
	// bne 0x821911c8
	if (!ctx.cr0.eq) goto loc_821911C8;
loc_821911E4:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191204
	if (ctx.cr6.eq) goto loc_82191204;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82191204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82191204:
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82191254
	if (ctx.cr6.eq) goto loc_82191254;
loc_82191214:
	// lwz r30,4(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82191248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82191214
	if (!ctx.cr6.eq) goto loc_82191214;
loc_82191254:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191284
	if (ctx.cr6.eq) goto loc_82191284;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191274
	if (ctx.cr6.eq) goto loc_82191274;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82191274;
	sub_821F4B88(ctx, base);
loc_82191274:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x821f4b88
	ctx.lr = 0x82191280;
	sub_821F4B88(ctx, base);
	// stw r26,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
loc_82191284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192bd0
	ctx.lr = 0x8219128C;
	sub_82192BD0(ctx, base);
	// lwz r30,308(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821912e8
	if (ctx.cr6.eq) goto loc_821912E8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82203a90
	ctx.lr = 0x821912A8;
	sub_82203A90(ctx, base);
	// lhz r10,316(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 316);
	// stw r31,95(r1)
	REX_STORE_U32(ctx.r1.u32 + 95, ctx.r31.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,91(r1)
	REX_STORE_U32(ctx.r1.u32 + 91, ctx.r30.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// sth r10,89(r1)
	REX_STORE_U16(ctx.r1.u32 + 89, ctx.r10.u16);
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r11,24,39
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFFFFFF000000;
	// ld r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8218cc48
	ctx.lr = 0x821912E8;
	sub_8218CC48(ctx, base);
loc_821912E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r30,r11,9476
	ctx.r30.s64 = ctx.r11.s64 + 9476;
	// stw r30,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x82192ce0
	ctx.lr = 0x82191300;
	sub_82192CE0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r9,r10,11936
	ctx.r9.s64 = ctx.r10.s64 + 11936;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219B3C0) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b3f8
	if (ctx.cr6.eq) goto loc_8219B3F8;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// rldicl r5,r10,59,46
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0x3FFFF;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// divdu r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 ? ctx.r4.u64 / ctx.r8.u64 : 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8219B3F8:
	// lhz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r10,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// rlwinm r31,r9,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8219b418
	if (ctx.cr6.eq) goto loc_8219B418;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
loc_8219B418:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219b448
	if (ctx.cr6.eq) goto loc_8219B448;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219b444
	if (!ctx.cr6.eq) goto loc_8219B444;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8219B444:
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8219B448:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8219b464
	if (!ctx.cr6.eq) goto loc_8219B464;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8219b4e0
	if (!ctx.cr6.lt) goto loc_8219B4E0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219b4f0
	if (ctx.cr6.eq) goto loc_8219B4F0;
loc_8219B464:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x8219b4f8
	if (ctx.cr6.eq) goto loc_8219B4F8;
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219b4ac
	if (!ctx.cr6.gt) goto loc_8219B4AC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8219b4b4
	if (ctx.cr6.gt) goto loc_8219B4B4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// subf r9,r8,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r8.u64;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// b 0x8219b510
	goto loc_8219B510;
loc_8219B4AC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8219b4d8
	if (!ctx.cr6.gt) goto loc_8219B4D8;
loc_8219B4B4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8219b4dc
	if (!ctx.cr6.lt) goto loc_8219B4DC;
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8219B4D8:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
loc_8219B4DC:
	// ble cr6,0x8219b518
	if (!ctx.cr6.gt) goto loc_8219B518;
loc_8219B4E0:
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8219B4F0:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bne cr6,0x8219b518
	if (!ctx.cr6.eq) goto loc_8219B518;
loc_8219B4F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219b518
	if (!ctx.cr6.gt) goto loc_8219B518;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
loc_8219B510:
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219B518:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1920) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821A1928;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r11,204
	ctx.r27.s64 = ctx.r11.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8258bb00
	ctx.lr = 0x821A1944;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// beq cr6,0x821a1a5c
	if (ctx.cr6.eq) goto loc_821A1A5C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x821a1978
	if (!ctx.cr6.eq) goto loc_821A1978;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821a1a5c
	if (ctx.cr6.eq) goto loc_821A1A5C;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1a5c
	if (ctx.cr6.eq) goto loc_821A1A5C;
loc_821A1978:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1988
	if (ctx.cr6.eq) goto loc_821A1988;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821A1988:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821a19a0
	if (ctx.cr6.lt) goto loc_821A19A0;
	// bne cr6,0x821a19a0
	if (!ctx.cr6.eq) goto loc_821A19A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x821a19a4
	goto loc_821A19A4;
loc_821A19A0:
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_821A19A4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821a1a20
	if (ctx.cr6.eq) goto loc_821A1A20;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a19dc
	if (ctx.cr6.eq) goto loc_821A19DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219cc90
	ctx.lr = 0x821A19D0;
	sub_8219CC90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a1a5c
	if (ctx.cr6.lt) goto loc_821A1A5C;
loc_821A19DC:
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a19f4
	if (ctx.cr6.eq) goto loc_821A19F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219cc90
	ctx.lr = 0x821A19F0;
	sub_8219CC90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821A19F4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821a1a5c
	if (ctx.cr6.lt) goto loc_821A1A5C;
	// lwz r3,432(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1a14
	if (ctx.cr6.eq) goto loc_821A1A14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219cc90
	ctx.lr = 0x821A1A10;
	sub_8219CC90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821A1A14:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821a1a5c
	if (ctx.cr6.lt) goto loc_821A1A5C;
	// stw r29,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
loc_821A1A20:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1a3c
	if (ctx.cr6.eq) goto loc_821A1A3C;
	// stw r29,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// stw r29,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
loc_821A1A3C:
	// stw r29,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// stw r29,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r29.u32);
	// stw r29,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// stw r29,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// stw r29,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// bl 0x8219f5a8
	ctx.lr = 0x821A1A5C;
	sub_8219F5A8(ctx, base);
loc_821A1A5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8258baf0
	ctx.lr = 0x821A1A64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7768) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r7,r10,9476
	ctx.r7.s64 = ctx.r10.s64 + 9476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// beq cr6,0x821a77c4
	if (ctx.cr6.eq) goto loc_821A77C4;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32818
	ctx.r4.u64 = ctx.r4.u64 | 32818;
	// bl 0x821f4b88
	ctx.lr = 0x821A77C0;
	sub_821F4B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A77C4:
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

DEFINE_REX_FUNC(sub_821A8830) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821A8838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a88a4
	if (ctx.cr6.eq) goto loc_821A88A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a88a8
	if (ctx.cr6.eq) goto loc_821A88A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A889C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
loc_821A88A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A88A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AB5F0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82204500
	ctx.lr = 0x821AB608;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-15828
	ctx.r31.s64 = ctx.r11.s64 + -15828;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f29,-15828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -15828);
	ctx.f29.f64 = double(temp.f32);
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f30,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmsubs f28,f13,f31,f11
	ctx.f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f11.f64)));
	// fmsubs f27,f30,f12,f10
	ctx.f27.f64 = double(float(std::fma(ctx.f30.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fmsubs f26,f29,f0,f9
	ctx.f26.f64 = double(float(std::fma(ctx.f29.f64, ctx.f0.f64, -ctx.f9.f64)));
	// bl 0x82203350
	ctx.lr = 0x821AB658;
	sub_82203350(ctx, base);
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// addi r31,r11,1840
	ctx.r31.s64 = ctx.r11.s64 + 1840;
	// fsubs f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f0,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f26
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fmuls f1,f31,f7
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmadds f13,f5,f28,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f28.f64, ctx.f2.f64)));
	// fmadds f12,f30,f5,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f30.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f31,f3,f27,f13
	ctx.f31.f64 = double(float(std::fma(ctx.f3.f64, ctx.f27.f64, ctx.f13.f64)));
	// fmadds f2,f29,f3,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f3.f64, ctx.f12.f64)));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821ab6d4
	if (ctx.cr6.gt) goto loc_821AB6D4;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x821ab6d4
	if (ctx.cr6.gt) goto loc_821AB6D4;
	// lfs f0,1128(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x821ab6d4
	if (ctx.cr6.lt) goto loc_821AB6D4;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x821ab6d4
	if (ctx.cr6.lt) goto loc_821AB6D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x821ab71c
	goto loc_821AB71C;
loc_821AB6D4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82410f68
	ctx.lr = 0x821AB6DC;
	sub_82410F68(ctx, base);
	// lfs f30,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x821ab708
	if (!ctx.cr6.gt) goto loc_821AB708;
	// bl 0x82204308
	ctx.lr = 0x821AB6F0;
	sub_82204308(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f30,4(r10)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x821ab724
	goto loc_821AB724;
loc_821AB708:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x82204308
	ctx.lr = 0x821AB718;
	sub_82204308(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_821AB71C:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_821AB724:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8220454c
	ctx.lr = 0x821AB730;
	__restfpr_26(ctx, base);
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

DEFINE_REX_FUNC(sub_821AF900) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0D70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821B0D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,12688
	ctx.r29.s64 = ctx.r3.s64 + 12688;
loc_821B0D88:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,15108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b0da8
	if (ctx.cr6.eq) goto loc_821B0DA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821afe70
	ctx.lr = 0x821B0DA8;
	sub_821AFE70(ctx, base);
loc_821B0DA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x821b0d88
	if (ctx.cr6.lt) goto loc_821B0D88;
	// lwz r11,12704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12704);
	// lwz r10,15100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b0dd4
	if (ctx.cr6.eq) goto loc_821B0DD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b01c0
	ctx.lr = 0x821B0DD4;
	sub_821B01C0(ctx, base);
loc_821B0DD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4dd0
	ctx.lr = 0x821B0DE0;
	sub_821B4DD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b49f0
	ctx.lr = 0x821B0DEC;
	sub_821B49F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12120(r31)
	REX_STORE_U32(ctx.r31.u32 + 12120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x821afde0
	ctx.lr = 0x821B0E0C;
	sub_821AFDE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_821B0E18:
	// subfic r11,r30,95
	ctx.xer.ca = ctx.r30.u32 <= 95;
	ctx.r11.u64 = static_cast<uint64_t>(95) - ctx.r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(21846));
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821afc38
	ctx.lr = 0x821B0E48;
	sub_821AFC38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821b0e18
	if (ctx.cr6.lt) goto loc_821B0E18;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B0E58:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2f90
	ctx.lr = 0x821B0E74;
	sub_821B2F90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 26, ctx.xer);
	// blt cr6,0x821b0e58
	if (ctx.cr6.lt) goto loc_821B0E58;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B6F00) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x821b6f78
	goto loc_821B6F78;
loc_821B6F30:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andi. r9,r9,24702
	ctx.r9.u64 = ctx.r9.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821b6f74
	if (ctx.cr0.eq) goto loc_821B6F74;
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b6f74
	if (!ctx.cr0.eq) goto loc_821B6F74;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x821b6f74
	if (ctx.cr6.gt) goto loc_821B6F74;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821b6f84
	if (ctx.cr6.lt) goto loc_821B6F84;
loc_821B6F74:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_821B6F78:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821b6f30
	if (ctx.cr6.lt) goto loc_821B6F30;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821B6F84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b704c
	if (ctx.cr6.eq) goto loc_821B704C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// beq cr6,0x821b6fc0
	if (ctx.cr6.eq) goto loc_821B6FC0;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,16,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r9.u64 & 0xFFF0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b6fd8
	goto loc_821B6FD8;
loc_821B6FC0:
	// lis r8,-4096
	ctx.r8.s64 = -268435456;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// rlwimi r8,r9,16,4,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFF0000) | (ctx.r8.u64 & 0xFFFFFFFFF000FFFF);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B6FD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b704c
	if (ctx.cr0.eq) goto loc_821B704C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821b704c
	if (ctx.cr6.eq) goto loc_821B704C;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b704c
	if (!ctx.cr6.eq) goto loc_821B704C;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r7,124(r31)
	REX_STORE_U8(ctx.r31.u32 + 124, ctx.r7.u8);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82203a90
	ctx.lr = 0x821B701C;
	sub_82203A90(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82203a90
	ctx.lr = 0x821B702C;
	sub_82203A90(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82203a90
	ctx.lr = 0x821B703C;
	sub_82203A90(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82203a90
	ctx.lr = 0x821B704C;
	sub_82203A90(ctx, base);
loc_821B704C:
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

DEFINE_REX_FUNC(sub_821BCB10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821BCB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,15192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bcc10
	if (ctx.cr0.eq) goto loc_821BCC10;
	// bne cr6,0x821bcb44
	if (!ctx.cr6.eq) goto loc_821BCB44;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
loc_821BCB44:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,15184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15184);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,15196(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15196);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821bcbac
	if (ctx.cr6.gt) goto loc_821BCBAC;
	// lwz r10,13472(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13472);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bcba4
	if (ctx.cr6.eq) goto loc_821BCBA4;
	// lwz r11,13476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13476);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821bcb9c
	if (ctx.cr6.eq) goto loc_821BCB9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcba4
	if (!ctx.cr6.eq) goto loc_821BCBA4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821bcba4
	if (!ctx.cr6.lt) goto loc_821BCBA4;
loc_821BCB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bcd38
	goto loc_821BCD38;
loc_821BCBA4:
	// stw r4,15192(r3)
	REX_STORE_U32(ctx.r3.u32 + 15192, ctx.r4.u32);
	// b 0x821bcc04
	goto loc_821BCC04;
loc_821BCBAC:
	// lwz r9,15200(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15200);
	// lwz r8,13472(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13472);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x821bcbf0
	if (ctx.cr6.eq) goto loc_821BCBF0;
	// lwz r11,13476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13476);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821bcb9c
	if (ctx.cr6.eq) goto loc_821BCB9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcbf0
	if (!ctx.cr6.eq) goto loc_821BCBF0;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x821bcb9c
	if (ctx.cr6.lt) goto loc_821BCB9C;
loc_821BCBF0:
	// lwz r11,15204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15204);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821bcb9c
	if (ctx.cr6.gt) goto loc_821BCB9C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,15200(r3)
	REX_STORE_U32(ctx.r3.u32 + 15200, ctx.r4.u32);
loc_821BCC04:
	// bl 0x821bca58
	ctx.lr = 0x821BCC08;
	sub_821BCA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821bcd38
	goto loc_821BCD38;
loc_821BCC10:
	// bne cr6,0x821bcc1c
	if (!ctx.cr6.eq) goto loc_821BCC1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BCC1C:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x821bcc30
	if (!ctx.cr6.eq) goto loc_821BCC30;
	// li r7,56
	ctx.r7.s64 = 56;
loc_821BCC30:
	// lwz r11,15188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15188);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821bcc44
	if (!ctx.cr6.gt) goto loc_821BCC44;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821BCC44:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15184);
	// add r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821bcc5c
	if (!ctx.cr6.gt) goto loc_821BCC5C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_821BCC5C:
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r10,15180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15180);
	// lwz r6,15212(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15212);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfc r9,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// lwz r11,15200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15200);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x821bcc9c
	if (!ctx.cr6.gt) goto loc_821BCC9C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_821BCC9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bcccc
	if (ctx.cr6.eq) goto loc_821BCCCC;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r9,15196(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15196);
	// lbz r6,11070(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 11070);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15200(r3)
	REX_STORE_U32(ctx.r3.u32 + 15200, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r11,r6,4
	ctx.r11.u64 = ctx.r6.u64 | 4;
	// stw r9,15196(r3)
	REX_STORE_U32(ctx.r3.u32 + 15196, ctx.r9.u32);
	// add r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stb r11,11070(r3)
	REX_STORE_U8(ctx.r3.u32 + 11070, ctx.r11.u8);
loc_821BCCCC:
	// lwz r8,13472(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13472);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821bcd18
	if (ctx.cr6.eq) goto loc_821BCD18;
	// lwz r11,13476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13476);
	// lwz r10,15196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15196);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821bccfc
	if (ctx.cr6.eq) goto loc_821BCCFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821bcd18
	if (!ctx.cr6.eq) goto loc_821BCD18;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821bcd18
	if (!ctx.cr6.lt) goto loc_821BCD18;
loc_821BCCFC:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bcb9c
	if (!ctx.cr6.eq) goto loc_821BCB9C;
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821bcb9c
	if (ctx.cr6.lt) goto loc_821BCB9C;
loc_821BCD18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,15196(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15196);
	// bl 0x821bca58
	ctx.lr = 0x821BCD24;
	sub_821BCA58(ctx, base);
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821BCD38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C9990) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x821C9998;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_821C99B0:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw. r11,r11,r30
	ctx.r11.u64 = uint32_t((ctx.r30.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r11.s32 / ctx.r30.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x821c9a1c
	if (!ctx.cr0.gt) goto loc_821C9A1C;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821c99ec
	if (ctx.cr6.lt) goto loc_821C99EC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821C99EC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x821c9a18
	if (ctx.cr6.eq) goto loc_821C9A18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9A0C:
	// lwzu r10,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x821c9a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9A0C;
loc_821C9A18:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_821C9A1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c9a38
	if (ctx.cr6.eq) goto loc_821C9A38;
	// stw r4,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bdb18
	ctx.lr = 0x821C9A30;
	sub_821BDB18(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// b 0x821c99b0
	goto loc_821C99B0;
loc_821C9A38:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CD1A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x821CD1A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x821cd214
	if (!ctx.cr6.eq) goto loc_821CD214;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cd214
	if (!ctx.cr6.eq) goto loc_821CD214;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821cd214
	if (!ctx.cr6.eq) goto loc_821CD214;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cd214
	if (!ctx.cr6.eq) goto loc_821CD214;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_821CD214:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r29,r9,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r9.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x821cd238
	if (!ctx.cr6.eq) goto loc_821CD238;
	// lwz r28,21824(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 21824);
loc_821CD238:
	// lwz r30,20(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821cd280
	if (!ctx.cr6.eq) goto loc_821CD280;
	// lwz r11,13864(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 13864);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// divwu r30,r9,r10
	ctx.r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// bne 0x821cd27c
	if (!ctx.cr0.eq) goto loc_821CD27C;
	// bl 0x8258c3f0
	ctx.lr = 0x821CD260;
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821cd27c
	if (!ctx.cr0.eq) goto loc_821CD27C;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x821cd27c
	if (ctx.cr6.gt) goto loc_821CD27C;
	// lwz r11,21828(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21828);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821cd280
	if (!ctx.cr6.gt) goto loc_821CD280;
loc_821CD27C:
	// lwz r30,21828(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 21828);
loc_821CD280:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82203350
	ctx.lr = 0x821CD290;
	sub_82203350(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// stw r30,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r8,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r11,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D3CB8) {
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
	ctx.lr = 0x821D3CD4;
	sub_821D44B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23260
	ctx.r4.s64 = ctx.r11.s64 + 23260;
	// b 0x821d3c64
	sub_821d3c64(ctx, base);
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

DEFINE_REX_FUNC(sub_821D44B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	REX_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821d43b0
	ctx.lr = 0x821D44F4;
	sub_821D43B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4A60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r10,1932
	ctx.r3.s64 = ctx.r10.s64 + 1932;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x821f4850
	ctx.lr = 0x821D4A90;
	sub_821F4850(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4b44
	if (ctx.cr0.eq) goto loc_821D4B44;
	// li r4,2815
	ctx.r4.s64 = 2815;
	// bl 0x821f47e0
	ctx.lr = 0x821D4AA4;
	sub_821F47E0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r4,2816
	ctx.r4.s64 = 2816;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821f47e0
	ctx.lr = 0x821D4AB4;
	sub_821F47E0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,2827
	ctx.r4.s64 = 2827;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821f47e0
	ctx.lr = 0x821D4AC4;
	sub_821F47E0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,2832
	ctx.r4.s64 = 2832;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821f47e0
	ctx.lr = 0x821D4AD4;
	sub_821F47E0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r4,773
	ctx.r4.s64 = 773;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821f47e0
	ctx.lr = 0x821D4AE4;
	sub_821F47E0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r4,779
	ctx.r4.s64 = 779;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821f47e0
	ctx.lr = 0x821D4AF4;
	sub_821F47E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b3c
	if (ctx.cr6.eq) goto loc_821D4B3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b3c
	if (ctx.cr6.eq) goto loc_821D4B3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b3c
	if (ctx.cr6.eq) goto loc_821D4B3C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b3c
	if (ctx.cr6.eq) goto loc_821D4B3C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b3c
	if (ctx.cr6.eq) goto loc_821D4B3C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d4b44
	if (!ctx.cr6.eq) goto loc_821D4B44;
loc_821D4B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d49b0
	ctx.lr = 0x821D4B44;
	sub_821D49B0(ctx, base);
loc_821D4B44:
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

DEFINE_REX_FUNC(sub_821D6790) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d67c8
	if (!ctx.cr6.eq) goto loc_821D67C8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d67c8
	if (!ctx.cr6.eq) goto loc_821D67C8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d67c8
	if (!ctx.cr6.eq) goto loc_821D67C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d67c8
	if (!ctx.cr6.eq) goto loc_821D67C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D67C8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821D67CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_821D67D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d67f0
	if (!ctx.cr6.eq) goto loc_821D67F0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x821d67d4
	if (ctx.cr6.lt) goto loc_821D67D4;
loc_821D67F0:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6820
	if (!ctx.cr6.eq) goto loc_821D6820;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6820
	if (!ctx.cr6.eq) goto loc_821D6820;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6820
	if (!ctx.cr6.eq) goto loc_821D6820;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6828
	if (ctx.cr6.eq) goto loc_821D6828;
loc_821D6820:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x821d67cc
	goto loc_821D67CC;
loc_821D6828:
	// b 0x821d6258
	sub_821D6258(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D80F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x821D80F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d816c
	if (ctx.cr0.eq) goto loc_821D816C;
	// lwz r11,1196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d816c
	if (ctx.cr0.eq) goto loc_821D816C;
	// bl 0x821f4a58
	ctx.lr = 0x821D8124;
	sub_821F4A58(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,464(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x821e7a20
	ctx.lr = 0x821D815C;
	sub_821E7A20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x821e6038
	ctx.lr = 0x821D816C;
	sub_821E6038(ctx, base);
loc_821D816C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d6318
	ctx.lr = 0x821D8174;
	sub_821D6318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D9B78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x821D9B80;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,96(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821d9c04
	if (!ctx.cr6.lt) goto loc_821D9C04;
	// addi r29,r3,600
	ctx.r29.s64 = ctx.r3.s64 + 600;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e5ee0
	ctx.lr = 0x821D9BB4;
	sub_821E5EE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821d9c0c
	if (ctx.cr0.lt) goto loc_821D9C0C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x821e6940
	ctx.lr = 0x821D9BDC;
	sub_821E6940(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821d9c0c
	if (ctx.cr0.lt) goto loc_821D9C0C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r31,648
	ctx.r6.s64 = ctx.r31.s64 + 648;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821e6bf8
	ctx.lr = 0x821D9BFC;
	sub_821E6BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d9c20
	if (!ctx.cr0.eq) goto loc_821D9C20;
loc_821D9C04:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4109
	ctx.r30.u64 = ctx.r30.u64 | 4109;
loc_821D9C0C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e4d48
	ctx.lr = 0x821D9C1C;
	sub_821E4D48(ctx, base);
	// b 0x821d9c84
	goto loc_821D9C84;
loc_821D9C20:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,632
	ctx.r9.s64 = ctx.r31.s64 + 632;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r9,636(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 636);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,636(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 636);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,660(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 660);
	// lhz r10,688(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 688);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,676(r31)
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// sth r10,688(r31)
	REX_STORE_U16(ctx.r31.u32 + 688, ctx.r10.u16);
	// stw r9,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
loc_821D9C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DEB30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821deb44
	goto loc_821DEB44;
loc_821DEB3C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821DEB44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821deb3c
	if (!ctx.cr6.eq) goto loc_821DEB3C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DF0C0) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df120
	if (ctx.cr6.eq) goto loc_821DF120;
	// ld r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
loc_821DF0E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x821df100
	if (ctx.cr6.lt) goto loc_821DF100;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df0e0
	if (!ctx.cr6.eq) goto loc_821DF0E0;
loc_821DF100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821df144
	if (!ctx.cr6.eq) goto loc_821DF144;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821df120
	if (ctx.cr6.eq) goto loc_821DF120;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x821df180
	if (ctx.cr6.eq) goto loc_821DF180;
loc_821DF120:
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df138
	if (ctx.cr6.eq) goto loc_821DF138;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x821df13c
	goto loc_821DF13C;
loc_821DF138:
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_821DF13C:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_821DF144:
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x821df180
	if (ctx.cr6.eq) goto loc_821DF180;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821df170
	if (!ctx.cr6.eq) goto loc_821DF170;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x821df13c
	goto loc_821DF13C;
loc_821DF170:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_821DF180:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E1648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x821E1650;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,344
	ctx.r24.s64 = ctx.r3.s64 + 344;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// bl 0x821f4ba8
	ctx.lr = 0x821E1674;
	sub_821F4BA8(ctx, base);
	// addi r25,r28,80
	ctx.r25.s64 = ctx.r28.s64 + 80;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_821E1684:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1698
	if (ctx.cr6.eq) goto loc_821E1698;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e3958
	ctx.lr = 0x821E1698;
	sub_821E3958(ctx, base);
loc_821E1698:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821e1684
	if (!ctx.cr0.eq) goto loc_821E1684;
	// addi r23,r28,800
	ctx.r23.s64 = ctx.r28.s64 + 800;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821f4ba8
	ctx.lr = 0x821E16BC;
	sub_821F4BA8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e1804
	if (!ctx.cr6.gt) goto loc_821E1804;
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_821E16D8:
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 276);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e17d4
	if (!ctx.cr6.eq) goto loc_821E17D4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821e1728
	if (ctx.cr6.eq) goto loc_821E1728;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E1708:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e1718
	if (ctx.cr6.lt) goto loc_821E1718;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821E1718:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821e1708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E1708;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x821e172c
	goto loc_821E172C;
loc_821E1728:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_821E172C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821e17d4
	if (!ctx.cr6.lt) goto loc_821E17D4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
loc_821E1744:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E1758:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e1768
	if (ctx.cr6.lt) goto loc_821E1768;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821E1768:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x821e1758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E1758;
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x821e178c
	if (ctx.cr6.eq) goto loc_821E178C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821e178c
	if (!ctx.cr6.lt) goto loc_821E178C;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821E178C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821e1744
	if (ctx.cr6.lt) goto loc_821E1744;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821e17d4
	if (ctx.cr6.eq) goto loc_821E17D4;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821E17D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821e17ec
	if (ctx.cr6.eq) goto loc_821E17EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821e0a20
	ctx.lr = 0x821E17EC;
	sub_821E0A20(ctx, base);
loc_821E17EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e16d8
	if (ctx.cr6.lt) goto loc_821E16D8;
loc_821E1804:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// stw r22,276(r28)
	REX_STORE_U32(ctx.r28.u32 + 276, ctx.r22.u32);
	// addi r6,r28,296
	ctx.r6.s64 = ctx.r28.s64 + 296;
	// addi r10,r11,1708
	ctx.r10.s64 = ctx.r11.s64 + 1708;
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x821e1868
	if (!ctx.cr6.lt) goto loc_821E1868;
	// addi r5,r24,48
	ctx.r5.s64 = ctx.r24.s64 + 48;
	// subf r4,r6,r24
	ctx.r4.u64 = ctx.r24.u64 - ctx.r6.u64;
loc_821E1834:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821e185c
	if (!ctx.cr6.lt) goto loc_821E185C;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821e1834
	if (ctx.cr6.lt) goto loc_821E1834;
loc_821E185C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e1868
	if (ctx.cr6.eq) goto loc_821E1868;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
loc_821E1868:
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r5,288(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 288);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,552
	ctx.r8.s64 = ctx.r10.s64 + 552;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r8,86
	ctx.r11.s64 = ctx.r8.s64 + 86;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_821E189C:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e18b8
	if (ctx.cr6.eq) goto loc_821E18B8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e18b8
	if (ctx.cr6.eq) goto loc_821E18B8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821E18B8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x821e189c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E189C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e18dc
	if (ctx.cr6.eq) goto loc_821E18DC;
	// divwu r11,r5,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_821E18DC:
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821e190c
	if (!ctx.cr6.lt) goto loc_821E190C;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_821E18F0:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blt cr6,0x821e18f0
	if (ctx.cr6.lt) goto loc_821E18F0;
loc_821E190C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_821E1914:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e196c
	if (ctx.cr6.eq) goto loc_821E196C;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r11,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r29,r29,r24
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821e1960
	if (!ctx.cr6.lt) goto loc_821E1960;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x821e1960
	if (!ctx.cr0.gt) goto loc_821E1960;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_821E1960:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x821e1914
	if (ctx.cr6.lt) goto loc_821E1914;
loc_821E196C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e197c
	if (ctx.cr6.eq) goto loc_821E197C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821e190c
	if (!ctx.cr6.eq) goto loc_821E190C;
loc_821E197C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821e19bc
	if (!ctx.cr6.lt) goto loc_821E19BC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_821E198C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821e199c
	if (!ctx.cr6.lt) goto loc_821E199C;
	// stwx r22,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
loc_821E199C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821e198c
	if (ctx.cr6.lt) goto loc_821E198C;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x821e19bc
	if (!ctx.cr6.gt) goto loc_821E19BC;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_821E19BC:
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e19d0
	if (!ctx.cr6.eq) goto loc_821E19D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,292(r28)
	REX_STORE_U32(ctx.r28.u32 + 292, ctx.r11.u32);
loc_821E19D0:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r6,292(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 292);
	// addi r30,r23,408
	ctx.r30.s64 = ctx.r23.s64 + 408;
	// addi r10,r11,584
	ctx.r10.s64 = ctx.r11.s64 + 584;
	// addi r31,r28,392
	ctx.r31.s64 = ctx.r28.s64 + 392;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x821e1a18
	if (!ctx.cr6.lt) goto loc_821E1A18;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_821E19F8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x821e1a0c
	if (!ctx.cr6.gt) goto loc_821E1A0C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_821E1A0C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821e19f8
	if (ctx.cr6.lt) goto loc_821E19F8;
loc_821E1A18:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e0d38
	ctx.lr = 0x821E1A24;
	sub_821E0D38(ctx, base);
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821e1a60
	if (!ctx.cr6.lt) goto loc_821E1A60;
	// subf r8,r23,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r23.u64;
loc_821E1A38:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821e1a60
	if (!ctx.cr6.lt) goto loc_821E1A60;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e1a38
	if (ctx.cr6.lt) goto loc_821E1A38;
loc_821E1A60:
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x821e1a6c
	if (!ctx.cr6.gt) goto loc_821E1A6C;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_821E1A6C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821e1a80
	if (ctx.cr6.eq) goto loc_821E1A80;
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,288(r28)
	REX_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
loc_821E1A80:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F17C4) {
	REX_FUNC_PROLOGUE();
	// li r11,10000
	ctx.r11.s64 = 10000;
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

DEFINE_REX_FUNC(sub_821F1894) {
	REX_FUNC_PROLOGUE();
	// li r11,20800
	ctx.r11.s64 = 20800;
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

DEFINE_REX_FUNC(sub_821F1964) {
	REX_FUNC_PROLOGUE();
	// li r11,31600
	ctx.r11.s64 = 31600;
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

DEFINE_REX_FUNC(sub_821F76B8) {
	REX_FUNC_PROLOGUE();
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r20,340(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r5,324(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r29,316(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r23,308(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821f76e0
	if (!ctx.cr6.lt) goto loc_821F76E0;
loc_821F76D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f7bd4
	goto loc_821F7BD4;
loc_821F76E0:
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lis r22,-32155
	ctx.r22.s64 = -2107310080;
	// lwz r11,-16256(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + -16256);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f76f8
	if (ctx.cr0.eq) goto loc_821F76F8;
	// ori r23,r23,128
	ctx.r23.u64 = ctx.r23.u64 | 128;
loc_821F76F8:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7710
	if (!ctx.cr6.eq) goto loc_821F7710;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,14848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14848);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_821F7710:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7728
	if (!ctx.cr6.eq) goto loc_821F7728;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,14852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14852);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_821F7728:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7740
	if (!ctx.cr6.eq) goto loc_821F7740;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,14860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14860);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_821F7740:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7758
	if (!ctx.cr6.eq) goto loc_821F7758;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,14856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14856);
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_821F7758:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7770
	if (!ctx.cr6.eq) goto loc_821F7770;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_821F7770:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7788
	if (ctx.cr6.eq) goto loc_821F7788;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821f7790
	if (!ctx.cr6.gt) goto loc_821F7790;
loc_821F7788:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_821F7790:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x821f77e8
	if (!ctx.cr6.eq) goto loc_821F77E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// bne cr6,0x821f77b8
	if (!ctx.cr6.eq) goto loc_821F77B8;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// b 0x821f77c8
	goto loc_821F77C8;
loc_821F77B8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_821F77C0:
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + ctx.r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_821F77C8:
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1432
	ctx.r24.s64 = 1432;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne 0x821f7820
	if (!ctx.cr0.eq) goto loc_821F7820;
	// beq cr6,0x821f7814
	if (ctx.cr6.eq) goto loc_821F7814;
	// oris r23,r23,32768
	ctx.r23.u64 = ctx.r23.u64 | 2147483648;
	// b 0x821f7824
	goto loc_821F7824;
loc_821F77E8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r25
	ctx.r11.u64 = ctx.r6.u64 + ctx.r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bne cr6,0x821f77c0
	if (!ctx.cr6.eq) goto loc_821F77C0;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x821f77c8
	goto loc_821F77C8;
loc_821F7814:
	// li r24,1460
	ctx.r24.s64 = 1460;
	// li r20,-1
	ctx.r20.s64 = -1;
	// b 0x821f7824
	goto loc_821F7824;
loc_821F7820:
	// bne cr6,0x821f76d8
	if (!ctx.cr6.eq) goto loc_821F76D8;
loc_821F7824:
	// rlwinm. r11,r23,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f783c
	if (ctx.cr0.eq) goto loc_821F783C;
	// bl 0x8258bc50
	ctx.lr = 0x821F7830;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r27,3
	ctx.r27.s64 = 3;
	// beq cr6,0x821f7840
	if (ctx.cr6.eq) goto loc_821F7840;
loc_821F783C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_821F7840:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x821f7948
	if (ctx.cr6.eq) goto loc_821F7948;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f789c
	if (ctx.cr6.eq) goto loc_821F789C;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f76d8
	if (ctx.cr6.eq) goto loc_821F76D8;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f76d8
	if (ctx.cr6.eq) goto loc_821F76D8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821f76d8
	if (ctx.cr6.gt) goto loc_821F76D8;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821f76d8
	if (!ctx.cr0.eq) goto loc_821F76D8;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82203a90
	ctx.lr = 0x821F7898;
	sub_82203A90(ctx, base);
	// b 0x821f7938
	goto loc_821F7938;
loc_821F789C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258be90
	ctx.lr = 0x821F78AC;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f76d8
	if (ctx.cr0.lt) goto loc_821F76D8;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821f76d8
	if (!ctx.cr6.eq) goto loc_821F76D8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821f76d8
	if (ctx.cr6.eq) goto loc_821F76D8;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x821f7930
	if (!ctx.cr6.eq) goto loc_821F7930;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82203a90
	ctx.lr = 0x821F78E4;
	sub_82203A90(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258be90
	ctx.lr = 0x821F7904;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// blt 0x821f7938
	if (ctx.cr0.lt) goto loc_821F7938;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x821f7938
	if (!ctx.cr6.eq) goto loc_821F7938;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// b 0x821f7938
	goto loc_821F7938;
loc_821F7930:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_821F7938:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// b 0x821f7994
	goto loc_821F7994;
loc_821F7948:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f76d8
	if (!ctx.cr6.eq) goto loc_821F76D8;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8258be40
	ctx.lr = 0x821F796C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f76d8
	if (ctx.cr0.lt) goto loc_821F76D8;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7988
	if (!ctx.cr6.eq) goto loc_821F7988;
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_821F7988:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_821F7994:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821f79f4
	if (!ctx.cr6.eq) goto loc_821F79F4;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8258be40
	ctx.lr = 0x821F79BC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821f79e8
	if (!ctx.cr0.lt) goto loc_821F79E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821f76d8
	if (!ctx.cr6.eq) goto loc_821F76D8;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8258be70
	ctx.lr = 0x821F79E4;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x821f76d8
	goto loc_821F76D8;
loc_821F79E8:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_821F79F4:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r10,1439
	ctx.r11.s64 = ctx.r10.s64 + 1439;
	// addi r9,r24,128
	ctx.r9.s64 = ctx.r24.s64 + 128;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821F7A0C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x821f7a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F7A0C;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,-16256(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -16256);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f7a54
	if (ctx.cr0.eq) goto loc_821F7A54;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	REX_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,380(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r10,1548
	ctx.r29.s64 = ctx.r10.s64 + 1548;
	// b 0x821f7a58
	goto loc_821F7A58;
loc_821F7A54:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_821F7A58:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r11,r23,r12
	ctx.r11.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stb r10,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r23,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r23.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// sth r25,368(r11)
	REX_STORE_U16(ctx.r11.u32 + 368, ctx.r25.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r21.u32);
	// bl 0x8258bc50
	ctx.lr = 0x821F7AC0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r3,379(r10)
	REX_STORE_U8(ctx.r10.u32 + 379, ctx.r3.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,1424(r10)
	REX_STORE_U32(ctx.r10.u32 + 1424, ctx.r27.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_821F7AE0:
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821f7ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F7AE0;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x821f7b14
	if (!ctx.cr6.eq) goto loc_821F7B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// bl 0x8258bb30
	ctx.lr = 0x821F7B14;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_821F7B14:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,1408(r11)
	REX_STORE_U32(ctx.r11.u32 + 1408, ctx.r20.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x821f6f10
	ctx.lr = 0x821F7B40;
	sub_821F6F10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f76d8
	if (ctx.cr0.eq) goto loc_821F76D8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm. r10,r23,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r21,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, ctx.r21.u16);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,1412(r10)
	REX_STORE_U32(ctx.r10.u32 + 1412, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_821F7BD4:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x82204298
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F8498) {
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
	// beq cr6,0x821f84c4
	if (ctx.cr6.eq) goto loc_821F84C4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x8258baf0
	ctx.lr = 0x821F84C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821F84C4:
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

DEFINE_REX_FUNC(sub_821F9670) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r11,-22868
	ctx.r3.s64 = ctx.r11.s64 + -22868;
	// b 0x821f95e8
	sub_821F95E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F9B88) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bed0
	ctx.lr = 0x821F9BA8;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821f9c1c
	if (!ctx.cr0.eq) goto loc_821F9C1C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8258b880
	ctx.lr = 0x821F9BE0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821f9bf0
	if (!ctx.cr0.lt) goto loc_821F9BF0;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x821f9c14
	goto loc_821F9C14;
loc_821F9BF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821f9c10
	if (!ctx.cr6.eq) goto loc_821F9C10;
	// bl 0x821f59f0
	ctx.lr = 0x821F9BFC;
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
	// b 0x821f9c14
	goto loc_821F9C14;
loc_821F9C10:
	// li r31,997
	ctx.r31.s64 = 997;
loc_821F9C14:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8258bd10
	ctx.lr = 0x821F9C1C;
	__imp__ObDereferenceObject(ctx, base);
loc_821F9C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_821FC500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821fc524
	if (!ctx.cr6.lt) goto loc_821FC524;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_821FC524:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x821fc5a4
	if (ctx.cr6.eq) goto loc_821FC5A4;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_821FC540:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821fc58c
	if (ctx.cr6.eq) goto loc_821FC58C;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// b 0x821fc590
	goto loc_821FC590;
loc_821FC58C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
loc_821FC590:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bdnz 0x821fc540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FC540;
loc_821FC5A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822037D8) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x822037fc
	goto loc_822037FC;
loc_822037E8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_822037FC:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x822037e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_822037E8;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x8220382c
	if (ctx.cr0.eq) goto loc_8220382C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x82203850
	if (!ctx.cr0.eq) goto loc_82203850;
loc_82203818:
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x82203818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203818;
loc_8220382C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_82203838:
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x82203838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203838;
	// blr 
	return;
loc_82203850:
	// lbz r7,3(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82203850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203850;
	// b 0x8220382c
	goto loc_8220382C;
}

DEFINE_REX_FUNC(__savegprlr_29) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savefpr_19) {
	REX_FUNC_PROLOGUE();
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	REX_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	REX_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
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

DEFINE_REX_FUNC(sub_82204760) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822044fc
	ctx.lr = 0x82204774;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,192(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f1.u64);
	// stfd f2,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f2.u64);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfd f27,6880(r11)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
	// fcmpu cr6,f2,f27
	ctx.cr6.compare(ctx.f2.f64, ctx.f27.f64);
	// bne cr6,0x822047a4
	if (!ctx.cr6.eq) goto loc_822047A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,2328(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
	// b 0x82204c28
	goto loc_82204C28;
loc_822047A4:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x822047f8
	if (!ctx.cr6.eq) goto loc_822047F8;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82204568
	ctx.lr = 0x822047B4;
	sub_82204568(ctx, base);
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x822047d8
	if (!ctx.cr6.lt) goto loc_822047D8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,-21632(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -21632);
	// bne cr6,0x82204c28
	if (!ctx.cr6.eq) goto loc_82204C28;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x822088e8
	ctx.lr = 0x822047D4;
	sub_822088E8(ctx, base);
	// b 0x82204c28
	goto loc_82204C28;
loc_822047D8:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x822047f8
	if (!ctx.cr6.gt) goto loc_822047F8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822047f0
	if (!ctx.cr6.eq) goto loc_822047F0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_822047F0:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_822047F8:
	// lhz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82204bb4
	if (ctx.cr6.eq) goto loc_82204BB4;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82204bb4
	if (ctx.cr6.eq) goto loc_82204BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfd f26,2328(r11)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 2328);
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// bge cr6,0x8220485c
	if (!ctx.cr6.lt) goto loc_8220485C;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82204568
	ctx.lr = 0x82204834;
	sub_82204568(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82204850
	if (ctx.cr6.eq) goto loc_82204850;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82204858
	if (ctx.cr6.eq) goto loc_82204858;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfd f1,-21624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -21624);
	// b 0x82204c28
	goto loc_82204C28;
loc_82204850:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f25,6896(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + 6896);
loc_82204858:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
loc_8220485C:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfd f0,-22672(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -22672);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822048ac
	if (!ctx.cr6.gt) goto loc_822048AC;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x8220487c
	if (!ctx.cr6.lt) goto loc_8220487C;
	// fdiv f28,f26,f28
	ctx.f28.f64 = ctx.f26.f64 / ctx.f28.f64;
loc_8220487C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x82204894
	if (!ctx.cr6.gt) goto loc_82204894;
loc_82204884:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfd f0,-21632(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -21632);
loc_8220488C:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f25.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_82204894:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bge cr6,0x822048a4
	if (!ctx.cr6.lt) goto loc_822048A4;
loc_8220489C:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64 * ctx.f27.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_822048A4:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_822048AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82208630
	ctx.lr = 0x822048B8;
	sub_82208630(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f0,6888(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 6888);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82204964
	if (ctx.cr6.gt) goto loc_82204964;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82204568
	ctx.lr = 0x822048D4;
	sub_82204568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82204964
	if (ctx.cr0.eq) goto loc_82204964;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82204568
	ctx.lr = 0x822048E4;
	sub_82204568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82204964
	if (ctx.cr0.eq) goto loc_82204964;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x82204964
	if (!ctx.cr6.gt) goto loc_82204964;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	ctx.f0.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x8220492c
	if (ctx.cr6.eq) goto loc_8220492C;
loc_82204914:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82204920
	if (ctx.cr0.eq) goto loc_82204920;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f30.f64;
loc_82204920:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f30.f64 * ctx.f30.f64;
	// bne 0x82204914
	if (!ctx.cr0.eq) goto loc_82204914;
loc_8220492C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82208558
	ctx.lr = 0x82204934;
	sub_82208558(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x82204950
	if (!ctx.cr6.gt) goto loc_82204950;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfd f0,-21632(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -21632);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x8220488c
	goto loc_8220488C;
loc_82204950:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x82204b94
	if (!ctx.cr6.lt) goto loc_82204B94;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * ctx.f27.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_82204964:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,6528
	ctx.r31.s64 = ctx.r10.s64 + 6528;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82204980
	if (ctx.cr6.gt) goto loc_82204980;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82204980:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82204998
	if (ctx.cr6.gt) goto loc_82204998;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82204998:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x822049b0
	if (ctx.cr6.gt) goto loc_822049B0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_822049B0:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfd f31,6864(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 6864);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822049f0
	if (!ctx.cr6.eq) goto loc_822049F0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82208728
	ctx.lr = 0x822049E0;
	sub_82208728(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x82204a80
	goto loc_82204A80;
loc_822049F0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 232);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 224);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f7,216(r31)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// lfdx f0,r9,r8
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = ctx.f30.f64 - ctx.f0.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 + ctx.f30.f64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,3040(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 3040);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfdx f4,r11,r7
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f10.f64);
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f9.f64);
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f8.f64);
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_82204A80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * ctx.f29.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 320);
	// lfd f13,6872(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 6872);
	// fmul f10,f29,f13
	ctx.f10.f64 = ctx.f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = ctx.f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64);
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * ctx.f31.f64;
	// fmadd f0,f10,f0,f9
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64);
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82204884
	if (ctx.cr6.gt) goto loc_82204884;
	// lfd f12,328(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 328);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8220489c
	if (ctx.cr6.lt) goto loc_8220489C;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x82204b24
	if (!ctx.cr6.gt) goto loc_82204B24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
loc_82204B24:
	// lfd f13,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 312);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lfd f12,304(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 304);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// lfd f13,296(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f11,280(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 280);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lfd f10,272(r31)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 272);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f9,264(r31)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 264);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f0,f13,f0,f26
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f26.f64);
	// fmul f31,f0,f8
	ctx.f31.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82208558
	ctx.lr = 0x82204B90;
	sub_82208558(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82204B94:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x82204884
	if (ctx.cr6.gt) goto loc_82204884;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x8220489c
	if (ctx.cr6.lt) goto loc_8220489C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82208530
	ctx.lr = 0x82204BAC;
	sub_82208530(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f25.f64;
	// b 0x82204c28
	goto loc_82204C28;
loc_82204BB4:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82204bd8
	if (!ctx.cr6.eq) goto loc_82204BD8;
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82204c24
	if (!ctx.cr0.eq) goto loc_82204C24;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82204c24
	if (!ctx.cr6.eq) goto loc_82204C24;
loc_82204BD8:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82204bfc
	if (!ctx.cr6.eq) goto loc_82204BFC;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82204c24
	if (!ctx.cr0.eq) goto loc_82204C24;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82204c24
	if (!ctx.cr6.eq) goto loc_82204C24;
loc_82204BFC:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x82204c24
	if (ctx.cr6.eq) goto loc_82204C24;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x82204c24
	if (ctx.cr6.eq) goto loc_82204C24;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822045d8
	ctx.lr = 0x82204C1C;
	sub_822045D8(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82204c28
	goto loc_82204C28;
loc_82204C24:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64 + ctx.f29.f64;
loc_82204C28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82204548
	ctx.lr = 0x82204C34;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822232C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x822232D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822232FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82223338
	if (ctx.cr0.eq) goto loc_82223338;
	// add r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_82223318:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82223338
	if (!ctx.cr0.eq) goto loc_82223338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82223318
	if (!ctx.cr6.eq) goto loc_82223318;
loc_82223338:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8222338c
	if (ctx.cr0.eq) goto loc_8222338C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223358
	if (ctx.cr6.eq) goto loc_82223358;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8222335c
	goto loc_8222335C;
loc_82223358:
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_8222335C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8222338c
	if (ctx.cr0.lt) goto loc_8222338C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82203350
	ctx.lr = 0x8222338C;
	sub_82203350(ctx, base);
loc_8222338C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822233A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82225FD0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822240c0
	ctx.lr = 0x8222600C;
	sub_822240C0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222602c
	if (ctx.cr6.eq) goto loc_8222602C;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222602c
	if (ctx.cr6.eq) goto loc_8222602C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82226030
	goto loc_82226030;
loc_8222602C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82226030:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ld r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 496);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// std r11,8(r30)
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222606C;
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

DEFINE_REX_FUNC(sub_82228308) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82228310;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222832c
	if (ctx.cr6.eq) goto loc_8222832C;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82228330
	goto loc_82228330;
loc_8222832C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82228330:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822283f4
	if (ctx.cr6.eq) goto loc_822283F4;
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 448);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822283b0
	if (!ctx.cr6.gt) goto loc_822283B0;
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,80(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82228350:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,472(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 472);
	// bl 0x82225a88
	ctx.lr = 0x82228364;
	sub_82225A88(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r6,r28,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x7FFFFF;
	// bl 0x822272e8
	ctx.lr = 0x8222837C;
	sub_822272E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222838c
	if (ctx.cr0.eq) goto loc_8222838C;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r26,r28,25,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x3;
loc_8222838C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,472(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 472);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82225708
	ctx.lr = 0x822283A0;
	sub_82225708(ctx, base);
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 448);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82228350
	if (ctx.cr6.lt) goto loc_82228350;
loc_822283B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227c08
	ctx.lr = 0x822283B8;
	sub_82227C08(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822283e0
	if (ctx.cr6.eq) goto loc_822283E0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822283e0
	if (!ctx.cr6.eq) goto loc_822283E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82227d48
	ctx.lr = 0x822283DC;
	sub_82227D48(ctx, base);
	// stw r30,468(r29)
	REX_STORE_U32(ctx.r29.u32 + 468, ctx.r30.u32);
loc_822283E0:
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82222fe8
	ctx.lr = 0x822283F0;
	sub_82222FE8(ctx, base);
	// stw r30,476(r29)
	REX_STORE_U32(ctx.r29.u32 + 476, ctx.r30.u32);
loc_822283F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222B308) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8222BB08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8222BB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r29,r3,84
	ctx.r29.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BB30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bb6c
	if (ctx.cr6.eq) goto loc_8222BB6C;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
loc_8222BB40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82222608
	ctx.lr = 0x8222BB48;
	sub_82222608(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822304f0
	ctx.lr = 0x8222BB60;
	sub_822304F0(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222bb40
	if (!ctx.cr6.eq) goto loc_8222BB40;
loc_8222BB6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BB80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222D720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8222D728;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d75c
	if (ctx.cr6.eq) goto loc_8222D75C;
	// lwsync 
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r29.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
loc_8222D75C:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222d820
	if (ctx.cr6.lt) goto loc_8222D820;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222d820
	if (ctx.cr6.eq) goto loc_8222D820;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222d798
	if (!ctx.cr6.eq) goto loc_8222D798;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2380(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8222d7f0
	if (ctx.cr6.eq) goto loc_8222D7F0;
loc_8222D798:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8222d7bc
	if (!ctx.cr6.eq) goto loc_8222D7BC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,1952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8222d7f0
	if (ctx.cr6.eq) goto loc_8222D7F0;
loc_8222D7BC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8222D7EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222d848
	goto loc_8222D848;
loc_8222D7F0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x8222D804;
	sub_82203A90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x8222D818;
	sub_82203A90(ctx, base);
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// b 0x8222d848
	goto loc_8222D848;
loc_8222D820:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x8222D834;
	sub_82203A90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82203a90
	ctx.lr = 0x8222D848;
	sub_82203A90(ctx, base);
loc_8222D848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82234108) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204234
	ctx.lr = 0x82234110;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// li r15,3
	ctx.r15.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223499c
	if (ctx.cr6.eq) goto loc_8223499C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223499c
	if (ctx.cr6.eq) goto loc_8223499C;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223499c
	if (ctx.cr6.eq) goto loc_8223499C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r28,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r28.u16);
	// beq cr6,0x8223415c
	if (ctx.cr6.eq) goto loc_8223415C;
	// sth r28,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r28.u16);
loc_8223415C:
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// li r26,32767
	ctx.r26.s64 = 32767;
	// li r23,5
	ctx.r23.s64 = 5;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r25,r11,4
	ctx.r25.u64 = ctx.r11.u64 | 4;
	// li r27,8
	ctx.r27.s64 = 8;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r22,6
	ctx.r22.s64 = 6;
loc_82234180:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82234180
	if (ctx.cr6.gt) goto loc_82234180;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16804
	ctx.r12.s64 = ctx.r12.s64 + 16804;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82234508;
	case 1:
		goto loc_82234180;
	case 2:
		goto loc_82234528;
	case 3:
		goto loc_822345F4;
	case 4:
		goto loc_822341CC;
	case 5:
		goto loc_82234298;
	case 6:
		goto loc_82234344;
	case 7:
		goto loc_82234384;
	case 8:
		goto loc_822343C8;
	case 9:
		goto loc_82234494;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_822341CC:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82234240
	if (!ctx.cr6.eq) goto loc_82234240;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8223422c
	if (!ctx.cr6.gt) goto loc_8223422C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_822341F0:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r26,112(r3)
	REX_STORE_U16(ctx.r3.u32 + 112, ctx.r26.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822341f0
	if (ctx.cr6.lt) goto loc_822341F0;
loc_8223422C:
	// stw r23,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// stw r28,36(r29)
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r28,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// sth r28,150(r29)
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r28.u16);
	// sth r28,152(r29)
	REX_STORE_U16(ctx.r29.u32 + 152, ctx.r28.u16);
loc_82234240:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82234294
	if (!ctx.cr6.gt) goto loc_82234294;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82234258:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r21,490(r3)
	REX_STORE_U16(ctx.r3.u32 + 490, ctx.r21.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82234258
	if (ctx.cr6.lt) goto loc_82234258;
loc_82234294:
	// sth r21,730(r31)
	REX_STORE_U16(ctx.r31.u32 + 730, ctx.r21.u16);
loc_82234298:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822342fc
	if (ctx.cr6.eq) goto loc_822342FC;
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 504);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822342B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822342f4
	if (!ctx.cr6.eq) goto loc_822342F4;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x82296720
	ctx.lr = 0x822342CC;
	sub_82296720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822349a4
	if (ctx.cr6.eq) goto loc_822349A4;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822349a4
	if (ctx.cr6.eq) goto loc_822349A4;
	// stw r27,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// stw r21,216(r29)
	REX_STORE_U32(ctx.r29.u32 + 216, ctx.r21.u32);
	// sth r28,16(r29)
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
	// b 0x82234180
	goto loc_82234180;
loc_822342F4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822349a4
	if (ctx.cr6.lt) goto loc_822349A4;
loc_822342FC:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82234344
	if (!ctx.cr6.eq) goto loc_82234344;
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82234338
	if (ctx.cr6.eq) goto loc_82234338;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8223432c
	if (!ctx.cr6.eq) goto loc_8223432C;
	// stw r24,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
	// b 0x82234180
	goto loc_82234180;
loc_8223432C:
	// lbz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234340
	if (ctx.cr6.eq) goto loc_82234340;
loc_82234338:
	// stw r27,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
	// b 0x82234180
	goto loc_82234180;
loc_82234340:
	// stw r22,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r22.u32);
loc_82234344:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82234380
	if (ctx.cr6.lt) goto loc_82234380;
	// addi r30,r29,224
	ctx.r30.s64 = ctx.r29.s64 + 224;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82234358:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82250c70
	ctx.lr = 0x82234368;
	sub_82250C70(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822349a4
	if (ctx.cr6.lt) goto loc_822349A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82234358
	if (!ctx.cr6.eq) goto loc_82234358;
loc_82234380:
	// stw r24,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
loc_82234384:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x822343a0
	if (ctx.cr6.gt) goto loc_822343A0;
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,16(r29)
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
	// b 0x822343ac
	goto loc_822343AC;
loc_822343A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82250de0
	ctx.lr = 0x822343A8;
	sub_82250DE0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_822343AC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822349a4
	if (ctx.cr6.lt) goto loc_822349A4;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822343c4
	if (ctx.cr6.eq) goto loc_822343C4;
	// sth r28,16(r29)
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
loc_822343C4:
	// stw r27,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
loc_822343C8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822343d4
	if (!ctx.cr6.eq) goto loc_822343D4;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
loc_822343D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8223440c
	if (!ctx.cr6.eq) goto loc_8223440C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x822922a0
	ctx.lr = 0x822343FC;
	sub_822922A0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82234410
	if (ctx.cr6.eq) goto loc_82234410;
	// sth r28,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r28.u16);
	// b 0x82234410
	goto loc_82234410;
loc_8223440C:
	// bl 0x8229ae58
	ctx.lr = 0x82234410;
	sub_8229AE58(ctx, base);
loc_82234410:
	// lhz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 220);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,220(r29)
	REX_STORE_U16(ctx.r29.u32 + 220, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82234494
	if (!ctx.cr6.gt) goto loc_82234494;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82234434:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,114(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822347c4
	if (!ctx.cr6.lt) goto loc_822347C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// sth r7,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r7.u16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,580(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82234434
	if (ctx.cr6.lt) goto loc_82234434;
loc_82234494:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822344cc
	if (!ctx.cr6.eq) goto loc_822344CC;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822344cc
	if (!ctx.cr6.eq) goto loc_822344CC;
	// lbz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822344c0
	if (ctx.cr6.eq) goto loc_822344C0;
	// stw r21,372(r11)
	REX_STORE_U32(ctx.r11.u32 + 372, ctx.r21.u32);
loc_822344C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,708(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// bl 0x82252200
	ctx.lr = 0x822344CC;
	sub_82252200(ctx, base);
loc_822344CC:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82234994
	if (ctx.cr6.eq) goto loc_82234994;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822348b4
	if (!ctx.cr6.eq) goto loc_822348B4;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82234654
	if (!ctx.cr6.gt) goto loc_82234654;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x82234180
	goto loc_82234180;
loc_82234508:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 164);
	// stw r16,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// stw r16,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82234180
	if (!ctx.cr6.gt) goto loc_82234180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r29)
	REX_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// b 0x82234180
	goto loc_82234180;
loc_82234528:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,440(r11)
	REX_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r28,216(r29)
	REX_STORE_U32(ctx.r29.u32 + 216, ctx.r28.u32);
	// sth r28,220(r29)
	REX_STORE_U16(ctx.r29.u32 + 220, ctx.r28.u16);
	// stw r28,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// stw r28,288(r29)
	REX_STORE_U32(ctx.r29.u32 + 288, ctx.r28.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,176(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82234560
	if (!ctx.cr6.eq) goto loc_82234560;
	// sth r28,210(r31)
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r28.u16);
	// b 0x8223459c
	goto loc_8223459C;
loc_82234560:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82234580
	if (!ctx.cr6.gt) goto loc_82234580;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x82234180
	goto loc_82234180;
loc_82234580:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8223459c
	if (ctx.cr6.lt) goto loc_8223459C;
	// stw r28,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_8223459C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822345ec
	if (ctx.cr6.eq) goto loc_822345EC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822345AC:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r28,114(r10)
	REX_STORE_U16(ctx.r10.u32 + 114, ctx.r28.u16);
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822345d4
	if (!ctx.cr6.eq) goto loc_822345D4;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
loc_822345D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822345ac
	if (ctx.cr6.lt) goto loc_822345AC;
loc_822345EC:
	// stw r15,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r15.u32);
	// b 0x82234180
	goto loc_82234180;
loc_822345F4:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223498c
	if (ctx.cr6.eq) goto loc_8223498C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82252578
	ctx.lr = 0x82234608;
	sub_82252578(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822349a4
	if (ctx.cr6.lt) goto loc_822349A4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223464c
	if (ctx.cr6.eq) goto loc_8223464C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82234624:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r28,116(r10)
	REX_STORE_U16(ctx.r10.u32 + 116, ctx.r28.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r8,34(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82234624
	if (ctx.cr6.lt) goto loc_82234624;
loc_8223464C:
	// stw r17,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x82234180
	goto loc_82234180;
loc_82234654:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82234924
	if (ctx.cr6.lt) goto loc_82234924;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82234924
	if (!ctx.cr6.lt) goto loc_82234924;
	// lwz r9,708(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82234688
	if (ctx.cr6.eq) goto loc_82234688;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82234698
	goto loc_82234698;
loc_82234688:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82292140
	ctx.lr = 0x82234694;
	sub_82292140(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82234698:
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8223475c
	if (!ctx.cr6.gt) goto loc_8223475C;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8223475c
	if (!ctx.cr6.eq) goto loc_8223475C;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822346e0
	if (ctx.cr6.lt) goto loc_822346E0;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// stw r8,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// b 0x822346f0
	goto loc_822346F0;
loc_822346E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_822346F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e110
	ctx.lr = 0x822346F8;
	sub_8224E110(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8223475c
	if (ctx.cr6.lt) goto loc_8223475C;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223475c
	if (ctx.cr6.eq) goto loc_8223475C;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82234728
	if (ctx.cr6.eq) goto loc_82234728;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x8223473c
	goto loc_8223473C;
loc_82234728:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223473c
	if (ctx.cr6.eq) goto loc_8223473C;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_8223473C:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8223475c
	if (!ctx.cr6.lt) goto loc_8223475C;
	// stw r28,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
	// stw r28,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_8223475C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822347b4
	if (ctx.cr6.lt) goto loc_822347B4;
	// lwz r11,708(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822347b4
	if (!ctx.cr6.eq) goto loc_822347B4;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82234790
	if (ctx.cr6.eq) goto loc_82234790;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x822347a8
	goto loc_822347A8;
loc_82234790:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// beq cr6,0x822347a8
	if (ctx.cr6.eq) goto loc_822347A8;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_822347A8:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
loc_822347B4:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822347d0
	if (!ctx.cr6.lt) goto loc_822347D0;
loc_822347C4:
	// lis r19,-32764
	ctx.r19.s64 = -2147221504;
	// ori r19,r19,2
	ctx.r19.u64 = ctx.r19.u64 | 2;
	// b 0x822349a4
	goto loc_822349A4;
loc_822347D0:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r11,0(r18)
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r11.u16);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822348b4
	if (ctx.cr6.eq) goto loc_822348B4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822347f0
	if (!ctx.cr6.eq) goto loc_822347F0;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
loc_822347F0:
	// sth r28,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r28.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8223489c
	if (ctx.cr6.gt) goto loc_8223489C;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,-2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x8223483c
	if (ctx.cr6.eq) goto loc_8223483C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r6,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r5,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x82234868
	goto loc_82234868;
loc_8223483C:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82234868
	if (ctx.cr6.eq) goto loc_82234868;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r5,r9,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
loc_82234868:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251c80
	ctx.lr = 0x8223487C;
	sub_82251C80(ctx, base);
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r6.u16);
loc_8223489C:
	// stw r28,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// ld r10,184(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,184(r29)
	REX_STORE_U64(ctx.r29.u32 + 184, ctx.r10.u64);
loc_822348B4:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223495c
	if (ctx.cr6.eq) goto loc_8223495C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223495c
	if (ctx.cr6.eq) goto loc_8223495C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_822348D0:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lwz r11,424(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 424);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// bgt cr6,0x82234930
	if (ctx.cr6.gt) goto loc_82234930;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-2(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// sth r6,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r6.u16);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r28,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r28.u16);
	// sth r21,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// b 0x82234944
	goto loc_82234944;
loc_82234924:
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16389
	ctx.r19.u64 = ctx.r19.u64 | 16389;
	// b 0x822349a4
	goto loc_822349A4;
loc_82234930:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
loc_82234944:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822348d0
	if (ctx.cr6.lt) goto loc_822348D0;
loc_8223495C:
	// stw r21,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r21.u32);
	// stw r16,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8223497c
	if (!ctx.cr6.gt) goto loc_8223497C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82250e28
	ctx.lr = 0x8223497C;
	sub_82250E28(ctx, base);
loc_8223497C:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822349a4
	if (ctx.cr6.gt) goto loc_822349A4;
loc_8223498C:
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// b 0x822349a4
	goto loc_822349A4;
loc_82234994:
	// stw r17,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x822349a4
	goto loc_822349A4;
loc_8223499C:
	// lis r19,-32761
	ctx.r19.s64 = -2147024896;
	// ori r19,r19,87
	ctx.r19.u64 = ctx.r19.u64 | 87;
loc_822349A4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822349d0
	if (ctx.cr6.eq) goto loc_822349D0;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822349d0
	if (ctx.cr6.eq) goto loc_822349D0;
	// stw r15,692(r29)
	REX_STORE_U32(ctx.r29.u32 + 692, ctx.r15.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// stw r11,700(r29)
	REX_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
loc_822349D0:
	// stw r16,692(r29)
	REX_STORE_U32(ctx.r29.u32 + 692, ctx.r16.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82265478) {
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
	// bl 0x822653b8
	ctx.lr = 0x82265498;
	sub_822653B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822654a8
	if (ctx.cr0.eq) goto loc_822654A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822304f0
	ctx.lr = 0x822654A8;
	sub_822304F0(ctx, base);
loc_822654A8:
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

DEFINE_REX_FUNC(sub_822663B8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822663f0
	if (ctx.cr6.eq) goto loc_822663F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822663E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_822663F0:
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

DEFINE_REX_FUNC(sub_82266D48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,22944
	ctx.r10.s64 = ctx.r11.s64 + 22944;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8226ceb8
	sub_8226CEB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266DB8) {
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
	// bl 0x8226cee0
	ctx.lr = 0x82266DD0;
	sub_8226CEE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,22944
	ctx.r10.s64 = ctx.r11.s64 + 22944;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8226cec8
	ctx.lr = 0x82266DE4;
	sub_8226CEC8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,6480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82267AD8) {
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
	// bl 0x822661e8
	ctx.lr = 0x82267AF0;
	sub_822661E8(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,284
	ctx.r10.s64 = ctx.r31.s64 + 284;
	// stw r11,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82267B10:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82267b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82267B10;
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822690D8) {
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
	// bl 0x8226cc48
	ctx.lr = 0x822690F0;
	sub_8226CC48(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8226cee0
	ctx.lr = 0x822690F8;
	sub_8226CEE0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82266db8
	ctx.lr = 0x82269100;
	sub_82266DB8(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x822700f8
	ctx.lr = 0x82269108;
	sub_822700F8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,24512
	ctx.r10.s64 = ctx.r11.s64 + 24512;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8226cf98
	ctx.lr = 0x8226911C;
	sub_8226CF98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r9,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	REX_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r8,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8226AEF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8226AEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226AF18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x8226af2c
	if (!ctx.cr6.eq) goto loc_8226AF2C;
	// std r3,296(r31)
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r3.u64);
loc_8226AF2C:
	// ld r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f0,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,340(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmadds f7,f9,f12,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,288(r31)
	REX_STORE_U64(ctx.r31.u32 + 288, ctx.f6.u64);
	// std r11,296(r31)
	REX_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// ld r7,288(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r5,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r5,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226CEC8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226D0E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8226D0E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// lwz r3,608(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 608);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82277618
	ctx.lr = 0x8226D120;
	sub_82277618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226d1e0
	if (ctx.cr6.lt) goto loc_8226D1E0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226D150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226d1e0
	if (ctx.cr6.lt) goto loc_8226D1E0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82277608
	ctx.lr = 0x8226D16C;
	sub_82277608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226d1e0
	if (ctx.cr6.lt) goto loc_8226D1E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226D19C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226d1e0
	if (ctx.cr6.lt) goto loc_8226D1E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r24,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r24.u32);
	// stw r23,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r23.u32);
	// stw r26,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// stw r9,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8226D1DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226D1E0:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226d254
	if (ctx.cr6.eq) goto loc_8226D254;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8226d254
	if (!ctx.cr6.lt) goto loc_8226D254;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d224
	if (ctx.cr6.eq) goto loc_8226D224;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d224
	if (ctx.cr6.eq) goto loc_8226D224;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82277480
	ctx.lr = 0x8226D224;
	sub_82277480(ctx, base);
loc_8226D224:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d254
	if (ctx.cr6.eq) goto loc_8226D254;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d254
	if (ctx.cr6.eq) goto loc_8226D254;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82277480
	ctx.lr = 0x8226D254;
	sub_82277480(ctx, base);
loc_8226D254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82273EC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82273FA0) {
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
	// bl 0x8226cc48
	ctx.lr = 0x82273FB8;
	sub_8226CC48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,26896
	ctx.r10.s64 = ctx.r11.s64 + 26896;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82272b80
	ctx.lr = 0x82273FCC;
	sub_82272B80(ctx, base);
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

DEFINE_REX_FUNC(sub_82275D38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82275D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82275D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r30,52(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x82272728
	ctx.lr = 0x82275D78;
	sub_82272728(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82275D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,80(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// ld r29,0(r4)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82275DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82275de4
	if (ctx.cr6.eq) goto loc_82275DE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82275DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82275DE4:
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
loc_82275DE8:
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
	// bne 0x82275de8
	if (!ctx.cr0.eq) goto loc_82275DE8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82275e1c
	if (ctx.cr6.lt) goto loc_82275E1C;
	// stw r28,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
loc_82275E1C:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82275E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,196(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 196);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82275E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,204(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 204);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82275E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227D458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8227D460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d644
	if (ctx.cr6.eq) goto loc_8227D644;
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d488
	if (ctx.cr6.eq) goto loc_8227D488;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// lhz r4,34(r27)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// bl 0x82294f68
	ctx.lr = 0x8227D488;
	sub_82294F68(ctx, base);
loc_8227D488:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227d4e0
	if (ctx.cr6.eq) goto loc_8227D4E0;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227d4e0
	if (!ctx.cr6.gt) goto loc_8227D4E0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8227D4AC:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227d4cc
	if (ctx.cr6.eq) goto loc_8227D4CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8224d398
	ctx.lr = 0x8227D4C4;
	sub_8224D398(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r28,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8227D4CC:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227d4ac
	if (ctx.cr6.lt) goto loc_8227D4AC;
loc_8227D4E0:
	// lwz r3,372(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d4f4
	if (ctx.cr6.eq) goto loc_8227D4F4;
	// bl 0x8224d398
	ctx.lr = 0x8227D4F0;
	sub_8224D398(ctx, base);
	// stw r28,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
loc_8227D4F4:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227d548
	if (ctx.cr6.eq) goto loc_8227D548;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227d548
	if (!ctx.cr6.gt) goto loc_8227D548;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8227D514:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227d534
	if (ctx.cr6.eq) goto loc_8227D534;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8224d398
	ctx.lr = 0x8227D52C;
	sub_8224D398(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r28,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8227D534:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227d514
	if (ctx.cr6.lt) goto loc_8227D514;
loc_8227D548:
	// lwz r3,376(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d55c
	if (ctx.cr6.eq) goto loc_8227D55C;
	// bl 0x8224d398
	ctx.lr = 0x8227D558;
	sub_8224D398(ctx, base);
	// stw r28,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
loc_8227D55C:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d570
	if (ctx.cr6.eq) goto loc_8227D570;
	// bl 0x8224d398
	ctx.lr = 0x8227D56C;
	sub_8224D398(ctx, base);
	// stw r28,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
loc_8227D570:
	// lwz r3,380(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d584
	if (ctx.cr6.eq) goto loc_8227D584;
	// bl 0x8224d398
	ctx.lr = 0x8227D580;
	sub_8224D398(ctx, base);
	// stw r28,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_8227D584:
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d598
	if (ctx.cr6.eq) goto loc_8227D598;
	// bl 0x8224d398
	ctx.lr = 0x8227D594;
	sub_8224D398(ctx, base);
	// stw r28,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_8227D598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8227d3a0
	ctx.lr = 0x8227D5A4;
	sub_8227D3A0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d5bc
	if (ctx.cr6.eq) goto loc_8227D5BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822915a0
	ctx.lr = 0x8227D5B8;
	sub_822915A0(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8227D5BC:
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d5d4
	if (ctx.cr6.eq) goto loc_8227D5D4;
	// bl 0x8224f6e8
	ctx.lr = 0x8227D5CC;
	sub_8224F6E8(ctx, base);
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x8224d398
	ctx.lr = 0x8227D5D4;
	sub_8224D398(ctx, base);
loc_8227D5D4:
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d5e4
	if (ctx.cr6.eq) goto loc_8227D5E4;
	// bl 0x8224d398
	ctx.lr = 0x8227D5E4;
	sub_8224D398(ctx, base);
loc_8227D5E4:
	// lwz r3,344(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d5f4
	if (ctx.cr6.eq) goto loc_8227D5F4;
	// bl 0x8224d398
	ctx.lr = 0x8227D5F4;
	sub_8224D398(ctx, base);
loc_8227D5F4:
	// lwz r3,448(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d608
	if (ctx.cr6.eq) goto loc_8227D608;
	// bl 0x8224d398
	ctx.lr = 0x8227D604;
	sub_8224D398(ctx, base);
	// stw r28,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
loc_8227D608:
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d61c
	if (ctx.cr6.eq) goto loc_8227D61C;
	// bl 0x8224d398
	ctx.lr = 0x8227D618;
	sub_8224D398(ctx, base);
	// stw r28,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
loc_8227D61C:
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d630
	if (ctx.cr6.eq) goto loc_8227D630;
	// bl 0x8224d398
	ctx.lr = 0x8227D62C;
	sub_8224D398(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
loc_8227D630:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d644
	if (ctx.cr6.eq) goto loc_8227D644;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82291370
	ctx.lr = 0x8227D640;
	sub_82291370(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8227D644:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822895A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,128(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// bl 0x82277898
	ctx.lr = 0x822895E4;
	sub_82277898(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822895fc
	if (!ctx.cr6.eq) goto loc_822895FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82289618
	goto loc_82289618;
loc_822895FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// sth r8,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_82289618:
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

DEFINE_REX_FUNC(sub_8228AAA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8228AAA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r30,28(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r26,3
	ctx.r26.s64 = 3;
	// addi r29,r11,27880
	ctx.r29.s64 = ctx.r11.s64 + 27880;
loc_8228AADC:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8228ac80
	if (ctx.cr6.gt) goto loc_8228AC80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8228aafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8228AAFC;
	// bdzf 4*cr6+eq,0x8228ab28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8228AB28;
	// bne cr6,0x8228ab78
	if (!ctx.cr6.eq) goto loc_8228AB78;
loc_8228AAFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228a848
	ctx.lr = 0x8228AB04;
	sub_8228A848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,16(r30)
	REX_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// b 0x8228ac90
	goto loc_8228AC90;
loc_8228AB28:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228a9c0
	ctx.lr = 0x8228AB38;
	sub_8228A9C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r30,84
	ctx.r9.s64 = ctx.r30.s64 + 84;
	// stw r26,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r26.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// std r10,104(r30)
	REX_STORE_U64(ctx.r30.u32 + 104, ctx.r10.u64);
	// stw r8,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r8.u32);
	// stw r7,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r7.u32);
	// stw r6,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r6.u32);
	// stw r5,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r5.u32);
	// b 0x8228ac90
	goto loc_8228AC90;
loc_8228AB78:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// addi r8,r30,84
	ctx.r8.s64 = ctx.r30.s64 + 84;
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// ld r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r30.u32 + 104);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r23,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r23.u32);
	// stw r5,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8228ABB0:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8228ABC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228abe8
	if (!ctx.cr0.eq) goto loc_8228ABE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8228abc8
	if (!ctx.cr6.eq) goto loc_8228ABC8;
loc_8228ABE8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228ac08
	if (ctx.cr6.eq) goto loc_8228AC08;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8228abb0
	if (ctx.cr6.lt) goto loc_8228ABB0;
	// b 0x8228ac14
	goto loc_8228AC14;
loc_8228AC08:
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r10,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
loc_8228AC14:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228ac40
	if (ctx.cr6.eq) goto loc_8228AC40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AC2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// stw r27,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// stw r23,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r23.u32);
	// b 0x8228ac90
	goto loc_8228AC90;
loc_8228AC40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r4,-24
	ctx.r31.s64 = ctx.r4.s64 + -24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8228AC5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// stw r27,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r23.u32);
	// std r11,8(r30)
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// b 0x8228ac90
	goto loc_8228AC90;
loc_8228AC80:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228ac90
	if (ctx.cr6.eq) goto loc_8228AC90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228aca4
	if (!ctx.cr6.eq) goto loc_8228ACA4;
loc_8228AC90:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8228aadc
	if (ctx.cr6.lt) goto loc_8228AADC;
loc_8228ACA4:
	// ld r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// std r10,32(r30)
	REX_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// std r10,40(r30)
	REX_STORE_U64(ctx.r30.u32 + 40, ctx.r10.u64);
	// std r10,24(r30)
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r10.u64);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228acdc
	if (ctx.cr6.eq) goto loc_8228ACDC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mulld r9,r7,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,24(r30)
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r6.u64);
loc_8228ACDC:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8228ad00
	if (ctx.cr6.eq) goto loc_8228AD00;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r9,24(r30)
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r7.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// std r7,24(r30)
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r7.u64);
loc_8228AD00:
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// addi r8,r10,-50
	ctx.r8.s64 = ctx.r10.s64 + -50;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8228b054
	if (!ctx.cr6.eq) goto loc_8228B054;
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8228b054
	if (!ctx.cr6.eq) goto loc_8228B054;
	// lhz r10,66(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8228b054
	if (!ctx.cr6.eq) goto loc_8228B054;
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8228b054
	if (!ctx.cr6.eq) goto loc_8228B054;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// stw r10,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// ori r25,r9,22
	ctx.r25.u64 = ctx.r9.u64 | 22;
	// lhz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8228aec0
	if (!ctx.cr6.gt) goto loc_8228AEC0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822778c0
	ctx.lr = 0x8228AD74;
	sub_822778C0(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8228aea4
	if (ctx.cr6.eq) goto loc_8228AEA4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
loc_8228AD84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228ae88
	if (ctx.cr6.eq) goto loc_8228AE88;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228ae88
	if (!ctx.cr6.eq) goto loc_8228AE88;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822778c0
	ctx.lr = 0x8228ADC0;
	sub_822778C0(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8228ae68
	if (ctx.cr6.eq) goto loc_8228AE68;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
loc_8228ADD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8228ae38
	if (ctx.cr6.eq) goto loc_8228AE38;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82277928
	ctx.lr = 0x8228AE2C;
	sub_82277928(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8228add0
	if (!ctx.cr6.eq) goto loc_8228ADD0;
	// b 0x8228ae68
	goto loc_8228AE68;
loc_8228AE38:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ld r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r6,56(r5)
	REX_STORE_U64(ctx.r5.u32 + 56, ctx.r6.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, ctx.r31.u32);
loc_8228AE68:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82277990
	ctx.lr = 0x8228AE78;
	sub_82277990(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228b048
	if (ctx.cr6.eq) goto loc_8228B048;
loc_8228AE88:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82277928
	ctx.lr = 0x8228AE9C;
	sub_82277928(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8228ad84
	if (!ctx.cr6.eq) goto loc_8228AD84;
loc_8228AEA4:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82277990
	ctx.lr = 0x8228AEB0;
	sub_82277990(ctx, base);
	// subf r11,r25,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r25.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8228AEC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b040
	if (ctx.cr6.eq) goto loc_8228B040;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x822778c0
	ctx.lr = 0x8228AEE4;
	sub_822778C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r26,4(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r24,0(r10)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// beq cr6,0x8228b020
	if (ctx.cr6.eq) goto loc_8228B020;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
loc_8228AF04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// clrlwi r27,r24,16
	ctx.r27.u64 = ctx.r24.u32 & 0xFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8228b000
	if (!ctx.cr6.gt) goto loc_8228B000;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_8228AF1C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8228af44
	if (ctx.cr6.eq) goto loc_8228AF44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228afec
	if (!ctx.cr6.eq) goto loc_8228AFEC;
loc_8228AF44:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228afc4
	if (!ctx.cr6.eq) goto loc_8228AFC4;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82277428
	ctx.lr = 0x8228AF68;
	sub_82277428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r23,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x82277428
	ctx.lr = 0x8228AFA0;
	sub_82277428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228b040
	if (ctx.cr6.lt) goto loc_8228B040;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82203a90
	ctx.lr = 0x8228AFC0;
	sub_82203A90(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8228AFC4:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r29,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
loc_8228AFEC:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8228af1c
	if (ctx.cr6.lt) goto loc_8228AF1C;
loc_8228B000:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82277928
	ctx.lr = 0x8228B018;
	sub_82277928(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8228af04
	if (!ctx.cr6.eq) goto loc_8228AF04;
loc_8228B020:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82277990
	ctx.lr = 0x8228B030;
	sub_82277990(ctx, base);
	// subf r10,r25,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r25.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8228B040:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
loc_8228B048:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82277990
	ctx.lr = 0x8228B054;
	sub_82277990(ctx, base);
loc_8228B054:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A6698) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x822A66A0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82204508
	ctx.lr = 0x822A66A8;
	__savefpr_28(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r15,4(r4)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,64(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// lwz r8,172(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// lwz r22,20(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r23,16(r4)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r17,56(r4)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r15,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r15.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x822a6708
	if (ctx.cr6.eq) goto loc_822A6708;
	// lwz r24,176(r4)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 176);
	// b 0x822a670c
	goto loc_822A670C;
loc_822A6708:
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_822A670C:
	// lwz r11,224(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a75cc
	if (!ctx.cr6.gt) goto loc_822A75CC;
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a75cc
	if (!ctx.cr6.gt) goto loc_822A75CC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a6740
	if (ctx.cr6.eq) goto loc_822A6740;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82203a90
	ctx.lr = 0x822A6740;
	sub_82203A90(ctx, base);
loc_822A6740:
	// lwz r9,224(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 224);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 118);
	// rlwinm r7,r9,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r11,r7,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x822a6790
	if (!ctx.cr6.gt) goto loc_822A6790;
loc_822A677C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srw r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x822a677c
	if (ctx.cr6.gt) goto loc_822A677C;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_822A6790:
	// lwz r11,256(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 256);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x822a67cc
	if (!ctx.cr6.gt) goto loc_822A67CC;
loc_822A67BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x822a67bc
	if (ctx.cr6.gt) goto loc_822A67BC;
loc_822A67CC:
	// lwz r9,344(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 344);
	// mulli r10,r10,116
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(116));
	// add r16,r10,r9
	ctx.r16.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822a67f4
	if (!ctx.cr6.gt) goto loc_822A67F4;
loc_822A67E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x822a67e4
	if (ctx.cr6.gt) goto loc_822A67E4;
loc_822A67F4:
	// lwz r11,340(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 340);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,308(r20)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + 308);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// ld r28,128(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwzx r14,r10,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// rldicr r8,r14,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r14,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// bl 0x822a6018
	ctx.lr = 0x822A682C;
	sub_822A6018(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,264(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 264);
	// rldicr r8,r14,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822606d8
	ctx.lr = 0x822A6848;
	sub_822606D8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822a6868
	if (ctx.cr6.gt) goto loc_822A6868;
loc_822A6858:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822a6858
	if (!ctx.cr6.gt) goto loc_822A6858;
loc_822A6868:
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,15470
	ctx.r10.s64 = 1013841920;
	// lis r25,-32253
	ctx.r25.s64 = -2113732608;
	// ori r30,r11,26125
	ctx.r30.u64 = ctx.r11.u64 | 26125;
	// ori r31,r10,62303
	ctx.r31.u64 = ctx.r10.u64 | 62303;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822a6944
	if (!ctx.cr6.gt) goto loc_822A6944;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r20,540
	ctx.r28.s64 = ctx.r20.s64 + 540;
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r17,-4
	ctx.r27.s64 = ctx.r17.s64 + -4;
	// lfd f30,3136(r11)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3136);
	// lfs f31,-25028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25028);
	ctx.f31.f64 = double(temp.f32);
loc_822A68A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,10788(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 10788);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r9,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lfs f13,292(r20)
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r4,r26,r15
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r15.u32);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f8,f31
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f28,f6,f13
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// bl 0x82204760
	ctx.lr = 0x822A6920;
	sub_82204760(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmul f3,f4,f29
	ctx.f3.f64 = ctx.f4.f64 * ctx.f29.f64;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfsu f2,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// lwz r9,264(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 264);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a68a8
	if (ctx.cr6.lt) goto loc_822A68A8;
loc_822A6944:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,404(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 404);
	// li r15,1
	ctx.r15.s64 = 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// lfs f31,12424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12424);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x822a6ce8
	if (!ctx.cr6.lt) goto loc_822A6CE8;
	// lwz r27,92(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
loc_822A6964:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822606d8
	ctx.lr = 0x822A697C;
	sub_822606D8(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8229e1b0
	ctx.lr = 0x822A6994;
	sub_8229E1B0(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a6c84
	if (!ctx.cr6.lt) goto loc_822A6C84;
	// subf r11,r29,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822a6bd0
	if (ctx.cr6.lt) goto loc_822A6BD0;
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = ctx.r28.s64 + -3;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
loc_822A69C8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r7,r5,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lwz r4,-8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x822a6a44
	if (ctx.cr6.eq) goto loc_822A6A44;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a6a44
	if (ctx.cr6.eq) goto loc_822A6A44;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6A44:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x822a6ac0
	if (ctx.cr6.eq) goto loc_822A6AC0;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a6ac0
	if (ctx.cr6.eq) goto loc_822A6AC0;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6AC0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x822a6b3c
	if (ctx.cr6.eq) goto loc_822A6B3C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a6b3c
	if (ctx.cr6.eq) goto loc_822A6B3C;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6B3C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,216(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x822a6bb8
	if (ctx.cr6.eq) goto loc_822A6BB8;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a6bb8
	if (ctx.cr6.eq) goto loc_822A6BB8;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6BB8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a69c8
	if (ctx.cr6.lt) goto loc_822A69C8;
loc_822A6BD0:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a6c84
	if (!ctx.cr6.lt) goto loc_822A6C84;
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + ctx.r17.u64;
	// add r19,r10,r19
	ctx.r19.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_822A6BFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x822a6c78
	if (ctx.cr6.eq) goto loc_822A6C78;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a6c78
	if (ctx.cr6.eq) goto loc_822A6C78;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r10,r24
	REX_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6C78:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x822a6bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6BFC;
loc_822A6C84:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a6cb0
	if (ctx.cr6.lt) goto loc_822A6CB0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
loc_822A6CB0:
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a6cdc
	if (ctx.cr6.lt) goto loc_822A6CDC;
loc_822A6CCC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a6ccc
	if (!ctx.cr6.lt) goto loc_822A6CCC;
loc_822A6CDC:
	// lwz r5,404(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 404);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822a6964
	if (ctx.cr6.lt) goto loc_822A6964;
loc_822A6CE8:
	// lwz r5,268(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822a7330
	if (!ctx.cr6.lt) goto loc_822A7330;
	// subf r22,r23,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r23.u64;
loc_822A6CF8:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lbzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822a6fa4
	if (!ctx.cr6.eq) goto loc_822A6FA4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a6d18
	if (ctx.cr6.eq) goto loc_822A6D18;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A6D18:
	// lwzx r3,r22,r23
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// bl 0x82298260
	ctx.lr = 0x822A6D20;
	sub_82298260(ctx, base);
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,268(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 268);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// blt cr6,0x822a6d50
	if (ctx.cr6.lt) goto loc_822A6D50;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_822A6D50:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a6f9c
	if (!ctx.cr6.lt) goto loc_822A6F9C;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
loc_822A6D5C:
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bl 0x822a5f78
	ctx.lr = 0x822A6D70;
	sub_822A5F78(ctx, base);
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// ld r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmuls f0,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822606d8
	ctx.lr = 0x822A6D90;
	sub_822606D8(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822a6f60
	if (!ctx.cr6.lt) goto loc_822A6F60;
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822a6eec
	if (ctx.cr6.lt) goto loc_822A6EEC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r7,r3,-3
	ctx.r7.s64 = ctx.r3.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822A6DB8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,10788(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 10788);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r4,r30
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f1,216(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f7,184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x822a6db8
	if (ctx.cr6.lt) goto loc_822A6DB8;
	// lwz r14,136(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_822A6EEC:
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822a6f60
	if (!ctx.cr6.lt) goto loc_822A6F60;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r29.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6F10:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,10788(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 10788);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfd f12,176(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a6f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6F10;
loc_822A6F60:
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// lwzx r5,r7,r16
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822a6f90
	if (ctx.cr6.lt) goto loc_822A6F90;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
loc_822A6F90:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822a6d5c
	if (ctx.cr6.lt) goto loc_822A6D5C;
loc_822A6F9C:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// b 0x822a72d8
	goto loc_822A72D8;
loc_822A6FA4:
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822606d8
	ctx.lr = 0x822A6FBC;
	sub_822606D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r27,r18,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822a6fe0
	if (!ctx.cr6.gt) goto loc_822A6FE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_822A6FE0:
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8229e1b0
	ctx.lr = 0x822A6FF4;
	sub_8229E1B0(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a72d8
	if (!ctx.cr6.lt) goto loc_822A72D8;
	// subf r11,r29,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822a7224
	if (ctx.cr6.lt) goto loc_822A7224;
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = ctx.r28.s64 + -3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
loc_822A702C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x822a70a4
	if (ctx.cr6.eq) goto loc_822A70A4;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a70a4
	if (ctx.cr6.eq) goto loc_822A70A4;
	// stwx r15,r27,r24
	REX_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A70A4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x822a711c
	if (ctx.cr6.eq) goto loc_822A711C;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a711c
	if (ctx.cr6.eq) goto loc_822A711C;
	// stwx r15,r27,r24
	REX_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A711C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,248(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x822a7194
	if (ctx.cr6.eq) goto loc_822A7194;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a7194
	if (ctx.cr6.eq) goto loc_822A7194;
	// stwx r15,r27,r24
	REX_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A7194:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x822a720c
	if (ctx.cr6.eq) goto loc_822A720C;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a720c
	if (ctx.cr6.eq) goto loc_822A720C;
	// stwx r15,r27,r24
	REX_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A720C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a702c
	if (ctx.cr6.lt) goto loc_822A702C;
loc_822A7224:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a72d8
	if (!ctx.cr6.lt) goto loc_822A72D8;
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + ctx.r17.u64;
	// add r19,r10,r19
	ctx.r19.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_822A7254:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x822a72cc
	if (ctx.cr6.eq) goto loc_822A72CC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a72cc
	if (ctx.cr6.eq) goto loc_822A72CC;
	// stwx r15,r27,r24
	REX_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A72CC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x822a7254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A7254;
loc_822A72D8:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a7304
	if (ctx.cr6.lt) goto loc_822A7304;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
loc_822A7304:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a7324
	if (ctx.cr6.lt) goto loc_822A7324;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822A7314:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a7314
	if (!ctx.cr6.lt) goto loc_822A7314;
loc_822A7324:
	// lwz r5,268(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822a6cf8
	if (ctx.cr6.lt) goto loc_822A6CF8;
loc_822A7330:
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lhz r10,118(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a7554
	if (!ctx.cr6.lt) goto loc_822A7554;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822a7378
	if (!ctx.cr6.lt) goto loc_822A7378;
loc_822A7368:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a7368
	if (ctx.cr6.lt) goto loc_822A7368;
loc_822A7378:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8229e1b0
	ctx.lr = 0x822A7388;
	sub_8229E1B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,10784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x822a74e4
	if (ctx.cr6.lt) goto loc_822A74E4;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r7,r28,-3
	ctx.r7.s64 = ctx.r28.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822A73B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,10788(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 10788);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f7,224(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f2,208(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsu f5,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x822a73b4
	if (ctx.cr6.lt) goto loc_822A73B4;
loc_822A74E4:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822a7554
	if (!ctx.cr6.lt) goto loc_822A7554;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r11,r20,540
	ctx.r11.s64 = ctx.r20.s64 + 540;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822A7504:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,10788(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 10788);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a7504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A7504;
loc_822A7554:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a75b8
	if (ctx.cr6.eq) goto loc_822A75B8;
	// lwz r11,304(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822a75b8
	if (ctx.cr0.lt) goto loc_822A75B8;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,268(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 268);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822A7578:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a7590
	if (ctx.cr6.lt) goto loc_822A7590;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a75b0
	if (ctx.cr6.lt) goto loc_822A75B0;
loc_822A7590:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x822a7578
	if (!ctx.cr0.lt) goto loc_822A7578;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82204554
	ctx.lr = 0x822A75AC;
	__restfpr_28(ctx, base);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_822A75B0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r15.u32);
loc_822A75B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82204554
	ctx.lr = 0x822A75C8;
	__restfpr_28(ctx, base);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
loc_822A75CC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82204554
	ctx.lr = 0x822A75E0;
	__restfpr_28(ctx, base);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82303EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82303ED0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,128(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// rlwinm r9,r23,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,112(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// srawi r21,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 1;
	// addi r20,r10,-1
	ctx.r20.s64 = ctx.r10.s64 + -1;
	// lwz r31,204(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r30,208(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r5,248(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
	// stw r23,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r23.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r20,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r20.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// ble 0x82303f48
	if (!ctx.cr0.gt) goto loc_82303F48;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82303F2C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82303d48
	ctx.lr = 0x82303F3C;
	sub_82303D48(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82303f2c
	if (!ctx.cr0.eq) goto loc_82303F2C;
loc_82303F48:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// subfic r15,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r15.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8230411c
	if (!ctx.cr6.gt) goto loc_8230411C;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// subf r9,r26,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r26.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r16,r24,r25
	ctx.r16.u64 = ctx.r24.u64 + ctx.r25.u64;
	// addi r19,r11,4
	ctx.r19.s64 = ctx.r11.s64 + 4;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82303F80:
	// add r29,r17,r21
	ctx.r29.u64 = ctx.r17.u64 + ctx.r21.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r11,r17
	ctx.r28.u64 = ctx.r11.u64 + ctx.r17.u64;
	// li r22,8
	ctx.r22.s64 = 8;
	// li r25,-4
	ctx.r25.s64 = -4;
	// bl 0x82303bc8
	ctx.lr = 0x82303FA4;
	sub_82303BC8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// bl 0x82303bc8
	ctx.lr = 0x82303FB4;
	sub_82303BC8(ctx, base);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82303fc8
	if (!ctx.cr6.eq) goto loc_82303FC8;
	// li r25,-8
	ctx.r25.s64 = -8;
	// b 0x82303fd8
	goto loc_82303FD8;
loc_82303FC8:
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82303fdc
	if (!ctx.cr6.eq) goto loc_82303FDC;
	// li r25,-4
	ctx.r25.s64 = -4;
loc_82303FD8:
	// li r22,12
	ctx.r22.s64 = 12;
loc_82303FDC:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r19,-4
	ctx.r3.s64 = ctx.r19.s64 + -4;
	// bl 0x82303bc8
	ctx.lr = 0x82303FEC;
	sub_82303BC8(ctx, base);
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// bl 0x82303bc8
	ctx.lr = 0x82304004;
	sub_82303BC8(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// add r28,r19,r10
	ctx.r28.u64 = ctx.r19.u64 + ctx.r10.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x823040b8
	if (!ctx.cr6.gt) goto loc_823040B8;
loc_8230401C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r24,r27,r15
	ctx.r24.u64 = ctx.r27.u64 + ctx.r15.u64;
	// add r21,r23,r29
	ctx.r21.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r20,r28,r23
	ctx.r20.u64 = ctx.r28.u64 + ctx.r23.u64;
	// bl 0x82303bc8
	ctx.lr = 0x82304038;
	sub_82303BC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bl 0x82303bc8
	ctx.lr = 0x82304048;
	sub_82303BC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bl 0x82303d48
	ctx.lr = 0x82304058;
	sub_82303D48(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82303bc8
	ctx.lr = 0x82304068;
	sub_82303BC8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bl 0x82303bc8
	ctx.lr = 0x82304078;
	sub_82303BC8(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bl 0x82303d48
	ctx.lr = 0x82304088;
	sub_82303D48(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82303d48
	ctx.lr = 0x82304094;
	sub_82303D48(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// bl 0x82303d48
	ctx.lr = 0x823040A4;
	sub_82303D48(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8230401c
	if (!ctx.cr0.eq) goto loc_8230401C;
	// lwz r20,348(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,92(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823040B8:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82303bc8
	ctx.lr = 0x823040C8;
	sub_82303BC8(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82303bc8
	ctx.lr = 0x823040D4;
	sub_82303BC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r27,r15
	ctx.r3.u64 = ctx.r27.u64 + ctx.r15.u64;
	// bl 0x82303d48
	ctx.lr = 0x823040E0;
	sub_82303D48(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82303bc8
	ctx.lr = 0x823040F0;
	sub_82303BC8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82303bc8
	ctx.lr = 0x823040FC;
	sub_82303BC8(ctx, base);
	// lwz r11,100(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 100);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r19,r19,r24
	ctx.r19.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// blt cr6,0x82303f80
	if (ctx.cr6.lt) goto loc_82303F80;
	// lwz r23,332(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_8230411C:
	// add r30,r17,r21
	ctx.r30.u64 = ctx.r17.u64 + ctx.r21.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303bc8
	ctx.lr = 0x82304130;
	sub_82303BC8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82304194
	if (!ctx.cr6.gt) goto loc_82304194;
	// addi r27,r23,-1
	ctx.r27.s64 = ctx.r23.s64 + -1;
loc_82304144:
	// add r28,r30,r15
	ctx.r28.u64 = ctx.r30.u64 + ctx.r15.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82304158
	if (!ctx.cr6.eq) goto loc_82304158;
	// li r6,12
	ctx.r6.s64 = 12;
loc_82304158:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303bc8
	ctx.lr = 0x82304164;
	sub_82303BC8(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bl 0x82303d48
	ctx.lr = 0x82304174;
	sub_82303D48(ctx, base);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82304188
	if (!ctx.cr6.lt) goto loc_82304188;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82303d48
	ctx.lr = 0x82304188;
	sub_82303D48(ctx, base);
loc_82304188:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82304144
	if (ctx.cr6.lt) goto loc_82304144;
loc_82304194:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230B9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204264
	ctx.lr = 0x8230B9D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b9fc
	if (ctx.cr6.eq) goto loc_8230B9FC;
	// lwz r10,15684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15684);
	// bl 0x8230a8c8
	ctx.lr = 0x8230B9F4;
	sub_8230A8C8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
loc_8230B9FC:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a8c8
	ctx.lr = 0x8230BA0C;
	sub_8230A8C8(ctx, base);
	// lwz r30,724(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8230ba44
	if (!ctx.cr6.gt) goto loc_8230BA44;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8230BA20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82203350
	ctx.lr = 0x8230BA30;
	sub_82203350(ctx, base);
	// lwz r11,15684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne 0x8230ba20
	if (!ctx.cr0.eq) goto loc_8230BA20;
loc_8230BA44:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822042b4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230D570) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230d588
	if (ctx.cr6.lt) goto loc_8230D588;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8230d588
	if (!ctx.cr6.eq) goto loc_8230D588;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8230D588:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8230d588
	if (!ctx.cr0.lt) goto loc_8230D588;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230E9F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8230E9F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addic. r11,r3,2120
	ctx.xer.ca = ctx.r3.u32 > 4294965175;
	ctx.r11.s64 = ctx.r3.s64 + 2120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230ea28
	if (!ctx.cr0.eq) goto loc_8230EA28;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8230eb68
	goto loc_8230EB68;
loc_8230EA28:
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
	// blt cr6,0x8230eb14
	if (ctx.cr6.lt) goto loc_8230EB14;
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
	// bge cr6,0x8230eb0c
	if (!ctx.cr6.lt) goto loc_8230EB0C;
loc_8230EA74:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230eaa0
	if (ctx.cr6.lt) goto loc_8230EAA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5000
	ctx.lr = 0x8230EA90;
	sub_822B5000(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8230ea74
	if (ctx.cr6.eq) goto loc_8230EA74;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8230eb54
	goto loc_8230EB54;
loc_8230EAA0:
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
loc_8230EB0C:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8230eb54
	goto loc_8230EB54;
loc_8230EB14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b50c0
	ctx.lr = 0x8230EB1C;
	sub_822B50C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_8230EB24:
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
	ctx.lr = 0x8230EB3C;
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
	// blt cr6,0x8230eb24
	if (ctx.cr6.lt) goto loc_8230EB24;
loc_8230EB54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8230efbc
	if (ctx.cr6.lt) goto loc_8230EFBC;
	// cmpwi cr6,r30,63
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 63, ctx.xer);
	// bgt cr6,0x8230efbc
	if (ctx.cr6.gt) goto loc_8230EFBC;
loc_8230EB68:
	// lwz r10,84(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8230efbc
	if (!ctx.cr6.eq) goto loc_8230EFBC;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// stb r5,19(r24)
	REX_STORE_U8(ctx.r24.u32 + 19, ctx.r5.u8);
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// stb r4,14(r24)
	REX_STORE_U8(ctx.r24.u32 + 14, ctx.r4.u8);
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stb r3,15(r24)
	REX_STORE_U8(ctx.r24.u32 + 15, ctx.r3.u8);
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// stb r9,18(r24)
	REX_STORE_U8(ctx.r24.u32 + 18, ctx.r9.u8);
	// stb r11,16(r24)
	REX_STORE_U8(ctx.r24.u32 + 16, ctx.r11.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r10,17(r24)
	REX_STORE_U8(ctx.r24.u32 + 17, ctx.r10.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823258a0
	ctx.lr = 0x8230EBD0;
	sub_823258A0(ctx, base);
	// lwz r8,15536(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 15536);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x8230ebe8
	if (!ctx.cr6.eq) goto loc_8230EBE8;
	// lwz r11,20708(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230eca4
	if (!ctx.cr6.eq) goto loc_8230ECA4;
loc_8230EBE8:
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230ec5c
	if (!ctx.cr6.lt) goto loc_8230EC5C;
loc_8230EC04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ec5c
	if (ctx.cr6.eq) goto loc_8230EC5C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8230ec4c
	if (!ctx.cr0.lt) goto loc_8230EC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EC4C;
	sub_822B5238(ctx, base);
loc_8230EC4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230ec04
	if (ctx.cr6.gt) goto loc_8230EC04;
loc_8230EC5C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8230ec94
	if (!ctx.cr0.lt) goto loc_8230EC94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EC94;
	sub_822B5238(ctx, base);
loc_8230EC94:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8230ECA4:
	// lwz r11,84(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230efbc
	if (!ctx.cr6.eq) goto loc_8230EFBC;
	// lis r12,32573
	ctx.r12.s64 = 2134704128;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lbz r9,15(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 15);
	// lbz r8,16(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 16);
	// lwz r4,396(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 396);
	// lbz r7,17(r24)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + 17);
	// lbz r6,18(r24)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + 18);
	// lbz r5,19(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + 19);
	// lbz r3,14(r24)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + 14);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 | ctx.r5.u64;
	// beq cr6,0x8230ee90
	if (ctx.cr6.eq) goto loc_8230EE90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ee90
	if (ctx.cr6.eq) goto loc_8230EE90;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230ed90
	if (!ctx.cr6.lt) goto loc_8230ED90;
loc_8230ED38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ed90
	if (ctx.cr6.eq) goto loc_8230ED90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8230ed80
	if (!ctx.cr0.lt) goto loc_8230ED80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230ED80;
	sub_822B5238(ctx, base);
loc_8230ED80:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230ed38
	if (ctx.cr6.gt) goto loc_8230ED38;
loc_8230ED90:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8230edc8
	if (!ctx.cr0.lt) goto loc_8230EDC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EDC8;
	sub_822B5238(ctx, base);
loc_8230EDC8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8230ee84
	if (ctx.cr6.eq) goto loc_8230EE84;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230ee48
	if (!ctx.cr6.lt) goto loc_8230EE48;
loc_8230EDF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ee48
	if (ctx.cr6.eq) goto loc_8230EE48;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8230ee38
	if (!ctx.cr0.lt) goto loc_8230EE38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EE38;
	sub_822B5238(ctx, base);
loc_8230EE38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230edf0
	if (ctx.cr6.gt) goto loc_8230EDF0;
loc_8230EE48:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8230ee80
	if (!ctx.cr0.lt) goto loc_8230EE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EE80;
	sub_822B5238(ctx, base);
loc_8230EE80:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_8230EE84:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_8230EE90:
	// lwz r11,3004(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 3004);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230ef6c
	if (ctx.cr6.eq) goto loc_8230EF6C;
	// lwz r11,21644(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 21644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230ef6c
	if (!ctx.cr6.eq) goto loc_8230EF6C;
	// lwz r31,84(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230ef20
	if (!ctx.cr6.lt) goto loc_8230EF20;
loc_8230EEC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ef20
	if (ctx.cr6.eq) goto loc_8230EF20;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8230ef10
	if (!ctx.cr0.lt) goto loc_8230EF10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EF10;
	sub_822B5238(ctx, base);
loc_8230EF10:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230eec8
	if (ctx.cr6.gt) goto loc_8230EEC8;
loc_8230EF20:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8230ef58
	if (!ctx.cr0.lt) goto loc_8230EF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b5238
	ctx.lr = 0x8230EF58;
	sub_822B5238(ctx, base);
loc_8230EF58:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r9,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_8230EF6C:
	// lwz r11,20760(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230efb0
	if (ctx.cr6.eq) goto loc_8230EFB0;
	// lwz r11,248(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 248);
	// lwz r10,252(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 252);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r24)
	REX_STORE_U8(ctx.r24.u32 + 4, ctx.r10.u8);
	// lwz r8,284(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 284);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8230efb0
	if (ctx.cr6.eq) goto loc_8230EFB0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8230d5b0
	ctx.lr = 0x8230EFA8;
	sub_8230D5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230efbc
	if (!ctx.cr6.eq) goto loc_8230EFBC;
loc_8230EFB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_8230EFBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823294F8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw. r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_8232950C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blt cr6,0x8232950c
	if (ctx.cr6.lt) goto loc_8232950C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x82329F98;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822044f8
	ctx.lr = 0x82329FA0;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lfd f31,-21392(r9)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -21392);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	ctx.f27.f64 = ctx.f10.f64 * ctx.f31.f64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// fsub f26,f11,f27
	ctx.f26.f64 = ctx.f11.f64 - ctx.f27.f64;
	// lfd f0,-21384(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + -21384);
	// fmul f9,f30,f0
	ctx.f9.f64 = ctx.f30.f64 * ctx.f0.f64;
	// srawi r18,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 1;
	// srawi r19,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r4.s32 >> 1;
	// fsub f8,f26,f27
	ctx.f8.f64 = ctx.f26.f64 - ctx.f27.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r14,132(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r15,132(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x8232a05c
	if (!ctx.cr6.lt) goto loc_8232A05C;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_8232A05C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x8232a068
	if (!ctx.cr6.lt) goto loc_8232A068;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
loc_8232A068:
	// lwz r25,452(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8232a10c
	if (!ctx.cr6.gt) goto loc_8232A10C;
	// addi r27,r14,1
	ctx.r27.s64 = ctx.r14.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// subf r28,r15,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r15.u64;
	// subf r26,r25,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r25.u64;
loc_8232A08C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8232a09c
	if (!ctx.cr6.lt) goto loc_8232A09C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8232A09C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232a0b4
	if (!ctx.cr6.gt) goto loc_8232A0B4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r26,r29
	ctx.r4.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A0B4;
	sub_82203350(ctx, base);
loc_8232A0B4:
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r28.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// blt cr6,0x8232a0c4
	if (ctx.cr6.lt) goto loc_8232A0C4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8232A0C4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8232a0f0
	if (!ctx.cr6.gt) goto loc_8232A0F0;
	// add r11,r31,r15
	ctx.r11.u64 = ctx.r31.u64 + ctx.r15.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A0F0;
	sub_82203350(ctx, base);
loc_8232A0F0:
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8232a08c
	if (ctx.cr6.lt) goto loc_8232A08C;
loc_8232A10C:
	// lwz r17,460(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8232a1e8
	if (!ctx.cr6.gt) goto loc_8232A1E8;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// subf r27,r15,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r15.u64;
loc_8232A124:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x8232a13c
	if (ctx.cr6.lt) goto loc_8232A13C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8232A13C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8232a174
	if (!ctx.cr6.gt) goto loc_8232A174;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r18
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A160;
	sub_82203350(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r20
	ctx.r4.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A174;
	sub_82203350(ctx, base);
loc_8232A174:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subf r30,r11,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x8232a188
	if (ctx.cr6.lt) goto loc_8232A188;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8232A188:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8232a1d4
	if (!ctx.cr6.gt) goto loc_8232A1D4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mullw r10,r6,r18
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r18.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A1C0;
	sub_82203350(ctx, base);
	// lwz r3,468(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x82203350
	ctx.lr = 0x8232A1D4;
	sub_82203350(ctx, base);
loc_8232A1D4:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8232a124
	if (ctx.cr6.lt) goto loc_8232A124;
loc_8232A1E8:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r23,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r23.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r23,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r23.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r16,r18,1
	ctx.r16.s64 = ctx.r18.s64 + 1;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// and r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lfd f28,3024(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 3024);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// subf r21,r28,r22
	ctx.r21.u64 = ctx.r22.u64 - ctx.r28.u64;
	// lfd f25,-21400(r11)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -21400);
loc_8232A22C:
	// cmpw cr6,r15,r22
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r22.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// blt cr6,0x8232a23c
	if (ctx.cr6.lt) goto loc_8232A23C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8232A23C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8232a3ec
	if (!ctx.cr6.lt) goto loc_8232A3EC;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 - ctx.f26.f64;
	// fadd f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 + ctx.f27.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x82410db0
	ctx.lr = 0x8232A268;
	sub_82410DB0(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// subfic r11,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r22.u64;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f4.u64);
	// lwz r29,124(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + ctx.r23.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x8232a2c4
	if (ctx.cr6.lt) goto loc_8232A2C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8232A2C4:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r6,r28,r23
	ctx.r6.u64 = ctx.r28.u64 + ctx.r23.u64;
	// subf r10,r29,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r29.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r9,r30,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82329528
	ctx.lr = 0x8232A308;
	sub_82329528(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8232a3e0
	if (!ctx.cr6.eq) goto loc_8232A3E0;
	// srawi r31,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// subfic r11,r18,1
	ctx.xer.ca = ctx.r18.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r18.u64;
	// subf r27,r31,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r31.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r26,r10,r31
	ctx.r26.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r25,r11
	ctx.r5.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x8232a364
	if (ctx.cr6.lt) goto loc_8232A364;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8232A364:
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r10,r30,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r9,r29,r18
	ctx.r9.u64 = ctx.r18.u64 - ctx.r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r23,r31,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// subf r24,r31,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x82329528
	ctx.lr = 0x8232A394;
	sub_82329528(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r26,r20
	ctx.r4.u64 = ctx.r26.u64 + ctx.r20.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r5,r25,r20
	ctx.r5.u64 = ctx.r25.u64 + ctx.r20.u64;
	// add r6,r31,r20
	ctx.r6.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8232a3bc
	if (ctx.cr6.lt) goto loc_8232A3BC;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_8232A3BC:
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x82329528
	ctx.lr = 0x8232A3DC;
	sub_82329528(ctx, base);
	// lwz r23,404(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_8232A3E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x8232a22c
	goto loc_8232A22C;
loc_8232A3EC:
	// subfic r28,r15,1
	ctx.xer.ca = ctx.r15.u32 <= 1;
	ctx.r28.u64 = static_cast<uint64_t>(1) - ctx.r15.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bgt cr6,0x8232a3fc
	if (ctx.cr6.gt) goto loc_8232A3FC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8232A3FC:
	// lwz r15,404(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r28,r22
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r22.s32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r24,r11,r15
	ctx.r24.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// neg r19,r14
	ctx.r19.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// lwz r14,396(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r21,r28,r14
	ctx.r21.u64 = ctx.r14.u64 - ctx.r28.u64;
	// lfd f24,6880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 6880);
loc_8232A420:
	// cmpw cr6,r19,r14
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r14.s32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x8232a430
	if (ctx.cr6.lt) goto loc_8232A430;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8232A430:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8232a644
	if (!ctx.cr6.lt) goto loc_8232A644;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 + ctx.f26.f64;
	// fsub f11,f27,f12
	ctx.f11.f64 = ctx.f27.f64 - ctx.f12.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x82410db0
	ctx.lr = 0x8232A45C;
	sub_82410DB0(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r29,r31
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r27,r30
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r22.s32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r22.s32);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r4,r10,r15
	ctx.r4.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x8232a4c0
	if (ctx.cr6.lt) goto loc_8232A4C0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8232A4C0:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r7,r27,r22
	ctx.r7.u64 = ctx.r27.u64 + ctx.r22.u64;
	// subf r6,r28,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r10,r28,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r28.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r24,r9
	ctx.r7.u64 = ctx.r24.u64 + ctx.r9.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// bl 0x82329528
	ctx.lr = 0x8232A500;
	sub_82329528(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8232a630
	if (!ctx.cr6.eq) goto loc_8232A630;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subfic r10,r18,1
	ctx.xer.ca = ctx.r18.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r18.u64;
	// srawi r8,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 1;
	// srawi r7,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 1;
	// mullw r11,r11,r18
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8232a630
	if (!ctx.cr6.gt) goto loc_8232A630;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r25,r29,r27
	ctx.r25.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r29,r31,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r31.u64;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r27,r31,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r31.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// subf r31,r20,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r20.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r4,r20,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r30,r17,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r17.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// subf r3,r17,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r17.u64;
	// subf r7,r17,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r17.u64;
loc_8232A590:
	// add r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x8232a630
	if (!ctx.cr6.lt) goto loc_8232A630;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8232a5c0
	if (!ctx.cr6.lt) goto loc_8232A5C0;
	// add. r6,r25,r5
	ctx.r6.u64 = ctx.r25.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x8232a5c0
	if (ctx.cr0.lt) goto loc_8232A5C0;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x8232a60c
	goto loc_8232A60C;
loc_8232A5C0:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8232a5fc
	if (!ctx.cr6.lt) goto loc_8232A5FC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8232a5fc
	if (ctx.cr6.lt) goto loc_8232A5FC;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f24.f64);
	// blt cr6,0x8232a5e8
	if (ctx.cr6.lt) goto loc_8232A5E8;
	// lbzx r6,r4,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x8232a60c
	goto loc_8232A60C;
loc_8232A5E8:
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x8232a60c
	goto loc_8232A60C;
loc_8232A5FC:
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
loc_8232A60C:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8232a590
	if (ctx.cr6.lt) goto loc_8232A590;
loc_8232A630:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r24,r24,r22
	ctx.r24.u64 = ctx.r24.u64 + ctx.r22.u64;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x8232a420
	goto loc_8232A420;
loc_8232A644:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82204544
	ctx.lr = 0x8232A650;
	__restfpr_24(ctx, base);
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82348C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,15
	ctx.r11.s64 = 15;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,-25424
	ctx.r10.s64 = ctx.r10.s64 + -25424;
	// lvx128 v62,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vcmpgefp128. v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(simde_mm_load_ps(ctx.v61.f32), 0xF);
	// bge cr6,0x82348c4c
	if (!ctx.cr6.lt) goto loc_82348C4C;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// b 0x82348c6c
	goto loc_82348C6C;
loc_82348C4C:
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vcsxwfp128 v11,v61,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v63,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v63,v62,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32)));
loc_82348C6C:
	// li r11,16
	ctx.r11.s64 = 16;
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234AED8) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-3676
	ctx.r10.s64 = ctx.r10.s64 + -3676;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8234AEF4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8234af14
	if (!ctx.cr0.eq) goto loc_8234AF14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8234aef4
	if (!ctx.cr6.eq) goto loc_8234AEF4;
loc_8234AF14:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8234af54
	if (ctx.cr0.eq) goto loc_8234AF54;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,18600
	ctx.r10.s64 = ctx.r10.s64 + 18600;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8234AF2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234af4c
	if (!ctx.cr0.eq) goto loc_8234AF4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8234af2c
	if (!ctx.cr6.eq) goto loc_8234AF2C;
loc_8234AF4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234af70
	if (!ctx.cr0.eq) goto loc_8234AF70;
loc_8234AF54:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234af78
	goto loc_8234AF78;
loc_8234AF70:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_8234AF78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234C120) {
	REX_FUNC_PROLOGUE();
	// lwz r10,2444(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2444);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234c134
	if (ctx.cr6.lt) goto loc_8234C134;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234C134:
	// lwz r9,2488(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2488);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// b 0x8234c148
	goto loc_8234C148;
loc_8234C140:
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8234C148:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234c140
	if (ctx.cr6.lt) goto loc_8234C140;
	// not r3,r9
	ctx.r3.u64 = ~ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234C7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220424c
	ctx.lr = 0x8234C7C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234c8f4
	if (ctx.cr6.eq) goto loc_8234C8F4;
	// lwz r27,20(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r22,4
	ctx.r22.s64 = 4;
	// lwz r26,24(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bgt cr6,0x8234c7fc
	if (ctx.cr6.gt) goto loc_8234C7FC;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_8234C7FC:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// li r23,4
	ctx.r23.s64 = 4;
	// bgt cr6,0x8234c80c
	if (ctx.cr6.gt) goto loc_8234C80C;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
loc_8234C80C:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234c8c0
	if (ctx.cr6.eq) goto loc_8234C8C0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82203a90
	ctx.lr = 0x8234C824;
	sub_82203A90(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8234c894
	if (ctx.cr6.eq) goto loc_8234C894;
loc_8234C830:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8234c870
	if (ctx.cr6.eq) goto loc_8234C870;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8234C840:
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234c1f8
	ctx.lr = 0x8234C858;
	sub_8234C1F8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x8234c8f4
	if (ctx.cr0.lt) goto loc_8234C8F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8234c840
	if (ctx.cr6.lt) goto loc_8234C840;
loc_8234C870:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8234c888
	if (!ctx.cr6.lt) goto loc_8234C888;
	// subf r11,r31,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8234C880:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x8234c880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C880;
loc_8234C888:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8234c830
	if (ctx.cr6.lt) goto loc_8234C830;
loc_8234C894:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8234c8e8
	if (!ctx.cr6.lt) goto loc_8234C8E8;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
loc_8234C8A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8234c8b4
	if (ctx.cr6.eq) goto loc_8234C8B4;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8234C8AC:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x8234c8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C8AC;
loc_8234C8B4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234c8a0
	if (!ctx.cr0.eq) goto loc_8234C8A0;
	// b 0x8234c8e8
	goto loc_8234C8E8;
loc_8234C8C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8234c8e8
	if (ctx.cr6.eq) goto loc_8234C8E8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8234C8CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8234c8e0
	if (ctx.cr6.eq) goto loc_8234C8E0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8234C8D8:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x8234c8d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C8D8;
loc_8234C8E0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234c8cc
	if (!ctx.cr0.eq) goto loc_8234C8CC;
loc_8234C8E8:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x8234c80c
	if (!ctx.cr0.eq) goto loc_8234C80C;
loc_8234C8F4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8220429c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234F0E0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8234b8b0
	ctx.lr = 0x8234F0F8;
	sub_8234B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8234f10c
	if (!ctx.cr0.eq) goto loc_8234F10C;
	// lis r8,-30602
	ctx.r8.s64 = -2005532672;
	// ori r8,r8,2156
	ctx.r8.u64 = ctx.r8.u64 | 2156;
	// b 0x8234f1b4
	goto loc_8234F1B4;
loc_8234F10C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f16c
	if (ctx.cr6.eq) goto loc_8234F16C;
	// beq 0x8234f140
	if (ctx.cr0.eq) goto loc_8234F140;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,2460(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2460);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8234F140:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,2460(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 2460);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// b 0x8234f1b0
	goto loc_8234F1B0;
loc_8234F16C:
	// beq 0x8234f188
	if (ctx.cr0.eq) goto loc_8234F188;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,2460(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 2460);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8234F188:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,2460(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 2460);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8234F1B0:
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8234F1B4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823546B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823546B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,2516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-10136
	ctx.r10.s64 = ctx.r10.s64 + -10136;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82354750
	if (ctx.cr6.eq) goto loc_82354750;
	// lwz r28,20(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82354750
	if (ctx.cr6.eq) goto loc_82354750;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c178
	ctx.lr = 0x823546F0;
	sub_8241C178(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8235473c
	if (ctx.cr0.eq) goto loc_8235473C;
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8234a7e0
	ctx.lr = 0x82354708;
	sub_8234A7E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8235473c
	if (ctx.cr0.lt) goto loc_8235473C;
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c180
	ctx.lr = 0x8235473C;
	sub_8241C180(ctx, base);
loc_8235473C:
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x824167b8
	ctx.lr = 0x82354748;
	sub_824167B8(ctx, base);
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
loc_82354750:
	// lwz r3,2500(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354770
	if (ctx.cr6.eq) goto loc_82354770;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235476C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,2500(r31)
	REX_STORE_U32(ctx.r31.u32 + 2500, ctx.r30.u32);
loc_82354770:
	// lwz r3,2508(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354790
	if (ctx.cr6.eq) goto loc_82354790;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235478C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r30.u32);
loc_82354790:
	// lwz r29,2480(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// stw r30,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823547b4
	if (ctx.cr6.eq) goto loc_823547B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823545c8
	ctx.lr = 0x823547A8;
	sub_823545C8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4b88
	ctx.lr = 0x823547B4;
	sub_821F4B88(ctx, base);
loc_823547B4:
	// lwz r29,2484(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// stw r30,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823547d8
	if (ctx.cr6.eq) goto loc_823547D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823513c8
	ctx.lr = 0x823547CC;
	sub_823513C8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4b88
	ctx.lr = 0x823547D8;
	sub_821F4B88(ctx, base);
loc_823547D8:
	// lwz r29,2488(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// stw r30,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823547fc
	if (ctx.cr6.eq) goto loc_823547FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351318
	ctx.lr = 0x823547F0;
	sub_82351318(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4b88
	ctx.lr = 0x823547FC;
	sub_821F4B88(ctx, base);
loc_823547FC:
	// lwz r29,2492(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2492);
	// stw r30,2488(r31)
	REX_STORE_U32(ctx.r31.u32 + 2488, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354820
	if (ctx.cr6.eq) goto loc_82354820;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234a8b8
	ctx.lr = 0x82354814;
	sub_8234A8B8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82354820;
	sub_821F4B88(ctx, base);
loc_82354820:
	// lwz r29,2496(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// stw r30,2492(r31)
	REX_STORE_U32(ctx.r31.u32 + 2492, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82354844
	if (ctx.cr6.eq) goto loc_82354844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234a7e8
	ctx.lr = 0x82354838;
	sub_8234A7E8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f4b88
	ctx.lr = 0x82354844;
	sub_821F4B88(ctx, base);
loc_82354844:
	// stw r30,2496(r31)
	REX_STORE_U32(ctx.r31.u32 + 2496, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,2460(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// bl 0x821f4b88
	ctx.lr = 0x82354854;
	sub_821F4B88(ctx, base);
	// stw r30,2460(r31)
	REX_STORE_U32(ctx.r31.u32 + 2460, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,2468(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// bl 0x821f4b88
	ctx.lr = 0x82354864;
	sub_821F4B88(ctx, base);
	// stw r30,2468(r31)
	REX_STORE_U32(ctx.r31.u32 + 2468, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,2472(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// bl 0x821f4b88
	ctx.lr = 0x82354874;
	sub_821F4B88(ctx, base);
	// stw r30,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,2476(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2476);
	// bl 0x821f4b88
	ctx.lr = 0x82354884;
	sub_821F4B88(ctx, base);
	// lwz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2528);
	// stw r30,2476(r31)
	REX_STORE_U32(ctx.r31.u32 + 2476, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823548b4
	if (ctx.cr6.eq) goto loc_823548B4;
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823548b4
	if (ctx.cr6.eq) goto loc_823548B4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821f4b88
	ctx.lr = 0x823548AC;
	sub_821F4B88(ctx, base);
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_823548B4:
	// lwz r11,2524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823548d8
	if (ctx.cr6.eq) goto loc_823548D8;
	// lwz r3,2516(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823548d8
	if (ctx.cr6.eq) goto loc_823548D8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x821f4b88
	ctx.lr = 0x823548D4;
	sub_821F4B88(ctx, base);
	// stw r30,2516(r31)
	REX_STORE_U32(ctx.r31.u32 + 2516, ctx.r30.u32);
loc_823548D8:
	// addi r3,r31,2296
	ctx.r3.s64 = ctx.r31.s64 + 2296;
	// bl 0x82112fa8
	ctx.lr = 0x823548E0;
	sub_82112FA8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82368cc0
	ctx.lr = 0x823548E8;
	sub_82368CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235D318) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8235D320;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82204500
	ctx.lr = 0x8235D328;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// beq cr6,0x8235d354
	if (ctx.cr6.eq) goto loc_8235D354;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8235a0e8
	ctx.lr = 0x8235D350;
	sub_8235A0E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8235D354:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235d370
	if (ctx.cr6.eq) goto loc_8235D370;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ae10
	ctx.lr = 0x8235D36C;
	sub_8235AE10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8235D370:
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
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
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
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
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
	// bne 0x8235d3e0
	if (!ctx.cr0.eq) goto loc_8235D3E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8235d3e8
	goto loc_8235D3E8;
loc_8235D3E0:
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8235D3E8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d400
	if (ctx.cr6.eq) goto loc_8235D400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b3b8
	ctx.lr = 0x8235D400;
	sub_8235B3B8(ctx, base);
loc_8235D400:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235d794
	if (!ctx.cr6.gt) goto loc_8235D794;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfd f11,-20584(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -20584);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lfs f4,22844(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22844);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f12,-25028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -25028);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// lfs f13,-4436(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4436);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-4440(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4440);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-4404(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4404);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,6488(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6488);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,-4408(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4408);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// subf r29,r25,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r25.u64;
loc_8235D474:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// fadds f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// lfsx f2,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f27,f8,f2
	ctx.f27.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f26,f7,f2
	ctx.f26.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f27
	ctx.f1.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f1,f26
	ctx.f1.s64 = std::isnan(ctx.f26.f64) ? int64_t(0x80000000U) : (ctx.f26.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f26.f64));
	// stfd f1,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8235d6ac
	if (ctx.cr6.eq) goto loc_8235D6AC;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r28,r3
	ctx.r28.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f31,120(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r6
	ctx.r28.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r28.u64);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f2,f8,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f30.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f2,f31
	ctx.f2.f64 = double(ctx.f31.s64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f1,f8,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfs f1,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f7,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f2,f7,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	ctx.f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// frsp f30,f7
	ctx.f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmul f9,f9,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f11.f64;
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f29,f9
	ctx.f29.f64 = double(float(ctx.f9.f64));
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f8,f9,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	ctx.f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_8235D6AC:
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8235d6bc
	if (ctx.cr6.lt) goto loc_8235D6BC;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8235D6BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235d6d4
	if (!ctx.cr6.gt) goto loc_8235D6D4;
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// blt cr6,0x8235d6d8
	if (ctx.cr6.lt) goto loc_8235D6D8;
	// li r3,1023
	ctx.r3.s64 = 1023;
	// b 0x8235d6d8
	goto loc_8235D6D8;
loc_8235D6D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235D6D8:
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8235d6e8
	if (ctx.cr6.lt) goto loc_8235D6E8;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8235D6E8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235d700
	if (!ctx.cr6.gt) goto loc_8235D700;
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// blt cr6,0x8235d704
	if (ctx.cr6.lt) goto loc_8235D704;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// b 0x8235d704
	goto loc_8235D704;
loc_8235D700:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8235D704:
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8235d714
	if (ctx.cr6.lt) goto loc_8235D714;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_8235D714:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235d72c
	if (!ctx.cr6.gt) goto loc_8235D72C;
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// blt cr6,0x8235d730
	if (ctx.cr6.lt) goto loc_8235D730;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// b 0x8235d730
	goto loc_8235D730;
loc_8235D72C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8235D730:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x8235d740
	if (ctx.cr6.lt) goto loc_8235D740;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8235D740:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235d758
	if (!ctx.cr6.gt) goto loc_8235D758;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8235d75c
	if (ctx.cr6.lt) goto loc_8235D75C;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x8235d75c
	goto loc_8235D75C;
loc_8235D758:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8235D75C:
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stwux r10,r29,r25
	ea = ctx.r29.u32 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235d474
	if (ctx.cr6.lt) goto loc_8235D474;
loc_8235D794:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8220454c
	ctx.lr = 0x8235D7A0;
	__restfpr_26(ctx, base);
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236A4D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204254
	ctx.lr = 0x8236A4E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1032
	ctx.r11.s64 = ctx.r3.s64 + 1032;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r24,r3,32
	ctx.r24.s64 = ctx.r3.s64 + 32;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// sth r25,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// addi r27,r11,-3652
	ctx.r27.s64 = ctx.r11.s64 + -3652;
	// addi r23,r10,360
	ctx.r23.s64 = ctx.r10.s64 + 360;
loc_8236A524:
	// addi r11,r27,260
	ctx.r11.s64 = ctx.r27.s64 + 260;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236a62c
	if (!ctx.cr0.eq) goto loc_8236A62C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8236a560
	if (!ctx.cr6.lt) goto loc_8236A560;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x823674f0
	ctx.lr = 0x8236A550;
	sub_823674F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8236a560
	if (!ctx.cr0.lt) goto loc_8236A560;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8236A560:
	// addi r11,r27,444
	ctx.r11.s64 = ctx.r27.s64 + 444;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236a5ec
	if (ctx.cr0.eq) goto loc_8236A5EC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8236a5ec
	if (ctx.cr0.lt) goto loc_8236A5EC;
	// cmpwi cr6,r11,607
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 607, ctx.xer);
	// bgt cr6,0x8236a5ec
	if (ctx.cr6.gt) goto loc_8236A5EC;
	// addi r8,r27,2060
	ctx.r8.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8236a5ec
	if (!ctx.cr6.eq) goto loc_8236A5EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236aad8
	if (!ctx.cr6.lt) goto loc_8236AAD8;
	// addi r9,r27,844
	ctx.r9.s64 = ctx.r27.s64 + 844;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x8236a524
	if (!ctx.cr6.gt) goto loc_8236A524;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8236a524
	goto loc_8236A524;
loc_8236A5EC:
	// addi r11,r27,628
	ctx.r11.s64 = ctx.r27.s64 + 628;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236aa04
	if (ctx.cr0.eq) goto loc_8236AA04;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8236aa04
	if (ctx.cr0.lt) goto loc_8236AA04;
	// cmpwi cr6,r11,607
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 607, ctx.xer);
	// bgt cr6,0x8236aa04
	if (ctx.cr6.gt) goto loc_8236AA04;
	// addi r9,r27,2060
	ctx.r9.s64 = ctx.r27.s64 + 2060;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8236aa04
	if (!ctx.cr6.eq) goto loc_8236AA04;
	// addi r10,r27,844
	ctx.r10.s64 = ctx.r27.s64 + 844;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_8236A62C:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,148
	ctx.r9.s64 = ctx.r27.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,53
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x8236a8e8
	if (ctx.cr6.gt) goto loc_8236A8E8;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,-248
	ctx.r12.s64 = ctx.r12.s64 + -248;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,-22912
	ctx.r12.s64 = ctx.r12.s64 + -22912;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8236A680;
	case 1:
		goto loc_8236A68C;
	case 2:
		goto loc_8236A698;
	case 3:
		goto loc_8236A6A4;
	case 4:
		goto loc_8236A6B0;
	case 5:
		goto loc_8236A6B8;
	case 6:
		goto loc_8236A6C0;
	case 7:
		goto loc_8236A6CC;
	case 8:
		goto loc_8236A6D8;
	case 9:
		goto loc_8236A6E4;
	case 10:
		goto loc_8236A6F0;
	case 11:
		goto loc_8236A6F8;
	case 12:
		goto loc_8236A700;
	case 13:
		goto loc_8236A708;
	case 14:
		goto loc_8236A710;
	case 15:
		goto loc_8236A718;
	case 16:
		goto loc_8236A724;
	case 17:
		goto loc_8236A730;
	case 18:
		goto loc_8236A73C;
	case 19:
		goto loc_8236A748;
	case 20:
		goto loc_8236A754;
	case 21:
		goto loc_8236A760;
	case 22:
		goto loc_8236A76C;
	case 23:
		goto loc_8236A778;
	case 24:
		goto loc_8236A784;
	case 25:
		goto loc_8236A790;
	case 26:
		goto loc_8236A79C;
	case 27:
		goto loc_8236A7A8;
	case 28:
		goto loc_8236A7B4;
	case 29:
		goto loc_8236A7C0;
	case 30:
		goto loc_8236A7CC;
	case 31:
		goto loc_8236A7D8;
	case 32:
		goto loc_8236A7E4;
	case 33:
		goto loc_8236A7F0;
	case 34:
		goto loc_8236A7FC;
	case 35:
		goto loc_8236A808;
	case 36:
		goto loc_8236A814;
	case 37:
		goto loc_8236A820;
	case 38:
		goto loc_8236A82C;
	case 39:
		goto loc_8236A838;
	case 40:
		goto loc_8236A844;
	case 41:
		goto loc_8236A850;
	case 42:
		goto loc_8236A85C;
	case 43:
		goto loc_8236A868;
	case 44:
		goto loc_8236A874;
	case 45:
		goto loc_8236A880;
	case 46:
		goto loc_8236A88C;
	case 47:
		goto loc_8236A898;
	case 48:
		goto loc_8236A8A4;
	case 49:
		goto loc_8236A8B0;
	case 50:
		goto loc_8236A8BC;
	case 51:
		goto loc_8236A8C8;
	case 52:
		goto loc_8236A8D0;
	case 53:
		goto loc_8236A8D8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8236A680:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A68C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A698:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6A4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6B0:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A6B8:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A6C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A6F0:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A6F8:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A700:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A708:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A710:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A718:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A724:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A730:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A73C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A748:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A754:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A760:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A76C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A778:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A784:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A790:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A79C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7B4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7C0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7D8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7E4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7F0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A7FC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A808:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A814:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A820:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A82C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A838:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A844:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A850:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A85C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A868:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A874:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A880:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A88C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A898:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A8A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A8B0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A8BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x8236a8e0
	goto loc_8236A8E0;
loc_8236A8C8:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A8D0:
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x8236a8dc
	goto loc_8236A8DC;
loc_8236A8D8:
	// li r4,53
	ctx.r4.s64 = 53;
loc_8236A8DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8236A8E0:
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82369f40
	ctx.lr = 0x8236A8E8;
	sub_82369F40(ctx, base);
loc_8236A8E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r27,36
	ctx.r8.s64 = ctx.r27.s64 + 36;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r28,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r28.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhax r10,r30,r8
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r30.u32 + ctx.r8.u32));
	// bne 0x8236a988
	if (!ctx.cr0.eq) goto loc_8236A988;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8236a988
	if (!ctx.cr6.eq) goto loc_8236A988;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8236a974
	if (!ctx.cr6.lt) goto loc_8236A974;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x823674f0
	ctx.lr = 0x8236A964;
	sub_823674F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8236a974
	if (!ctx.cr0.lt) goto loc_8236A974;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8236A974:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236a524
	if (!ctx.cr6.eq) goto loc_8236A524;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236aaec
	goto loc_8236AAEC;
loc_8236A988:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,808
	ctx.r10.s64 = ctx.r27.s64 + 808;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8236a9cc
	if (ctx.cr0.eq) goto loc_8236A9CC;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8236a9cc
	if (ctx.cr0.lt) goto loc_8236A9CC;
	// cmpwi cr6,r10,607
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 607, ctx.xer);
	// bgt cr6,0x8236a9cc
	if (ctx.cr6.gt) goto loc_8236A9CC;
	// addi r8,r27,2060
	ctx.r8.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8236a9cc
	if (!ctx.cr6.eq) goto loc_8236A9CC;
	// addi r11,r27,844
	ctx.r11.s64 = ctx.r27.s64 + 844;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x8236a9d0
	goto loc_8236A9D0;
loc_8236A9CC:
	// lhax r30,r9,r27
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32));
loc_8236A9D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8236aad8
	if (!ctx.cr6.lt) goto loc_8236AAD8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
loc_8236A9F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8236a524
	goto loc_8236A524;
loc_8236AA04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236aa28
	if (!ctx.cr6.eq) goto loc_8236AA28;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369650
	ctx.lr = 0x8236AA1C;
	sub_82369650(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8236AA28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8236aac4
	if (!ctx.cr6.lt) goto loc_8236AAC4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8236AA3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,444
	ctx.r10.s64 = ctx.r27.s64 + 444;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8236aa7c
	if (ctx.cr0.eq) goto loc_8236AA7C;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8236aa7c
	if (ctx.cr0.lt) goto loc_8236AA7C;
	// cmpwi cr6,r10,607
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 607, ctx.xer);
	// bgt cr6,0x8236aa7c
	if (ctx.cr6.gt) goto loc_8236AA7C;
	// addi r9,r27,2060
	ctx.r9.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x8236aa9c
	if (ctx.cr6.eq) goto loc_8236AA9C;
loc_8236AA7C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8236aae8
	if (!ctx.cr6.gt) goto loc_8236AAE8;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8236aa3c
	goto loc_8236AA3C;
loc_8236AA9C:
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236aad8
	if (!ctx.cr6.lt) goto loc_8236AAD8;
	// addi r9,r27,844
	ctx.r9.s64 = ctx.r27.s64 + 844;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x8236a9f0
	goto loc_8236A9F0;
loc_8236AAC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236aae8
	if (ctx.cr6.eq) goto loc_8236AAE8;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x8236a524
	goto loc_8236A524;
loc_8236AAD8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,812
	ctx.r4.s64 = ctx.r11.s64 + 812;
	// bl 0x82369650
	ctx.lr = 0x8236AAE8;
	sub_82369650(ctx, base);
loc_8236AAE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236AAEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822042a4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238DFB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x8238DFB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238e140
	if (ctx.cr6.eq) goto loc_8238E140;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238e140
	if (ctx.cr6.eq) goto loc_8238E140;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8238dffc
	if (ctx.cr6.eq) goto loc_8238DFFC;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8238DFFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8238e014
	if (!ctx.cr6.eq) goto loc_8238E014;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8238e140
	if (!ctx.cr6.eq) goto loc_8238E140;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238e148
	goto loc_8238E148;
loc_8238E014:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238e140
	if (ctx.cr6.eq) goto loc_8238E140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238a7b8
	ctx.lr = 0x8238E028;
	sub_8238A7B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238a7b8
	ctx.lr = 0x8238E038;
	sub_8238A7B8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8238e05c
	if (ctx.cr6.lt) goto loc_8238E05C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238d730
	ctx.lr = 0x8238E054;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8238e09c
	if (!ctx.cr0.eq) goto loc_8238E09C;
loc_8238E05C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238d730
	ctx.lr = 0x8238E070;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238e080
	if (ctx.cr0.eq) goto loc_8238E080;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x8238e0a0
	goto loc_8238E0A0;
loc_8238E080:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238d730
	ctx.lr = 0x8238E094;
	sub_8238D730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238e140
	if (ctx.cr0.eq) goto loc_8238E140;
loc_8238E09C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8238E0A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388828
	ctx.lr = 0x8238E0B4;
	sub_82388828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238e148
	if (ctx.cr0.lt) goto loc_8238E148;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8238e0fc
	if (ctx.cr6.eq) goto loc_8238E0FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238E0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8238e0f4
	if (!ctx.cr0.eq) goto loc_8238E0F4;
loc_8238E0E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8238e148
	goto loc_8238E148;
loc_8238E0F4:
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8238E0FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238e130
	if (ctx.cr6.eq) goto loc_8238E130;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238E118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// beq 0x8238e0e8
	if (ctx.cr0.eq) goto loc_8238E0E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238a530
	ctx.lr = 0x8238E130;
	sub_8238A530(ctx, base);
loc_8238E130:
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// b 0x8238e148
	goto loc_8238E148;
loc_8238E140:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8238E148:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239CBD0) {
	REX_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x821f4b88
	sub_821F4B88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239CCB0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82203a90
	ctx.lr = 0x8239CCD8;
	sub_82203A90(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82203a90
	ctx.lr = 0x8239CCE8;
	sub_82203A90(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82203a90
	ctx.lr = 0x8239CCF8;
	sub_82203A90(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82203a90
	ctx.lr = 0x8239CD08;
	sub_82203A90(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82203a90
	ctx.lr = 0x8239CD18;
	sub_82203A90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// blt cr6,0x8239cd60
	if (ctx.cr6.lt) goto loc_8239CD60;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bgt cr6,0x8239cd60
	if (ctx.cr6.gt) goto loc_8239CD60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_8239CD60:
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

DEFINE_REX_FUNC(sub_823A1BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x823A1BE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823a1c6c
	if (ctx.cr0.eq) goto loc_823A1C6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x823a1cdc
	if (ctx.cr6.eq) goto loc_823A1CDC;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
loc_823A1C24:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1c54
	if (ctx.cr6.eq) goto loc_823A1C54;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 8);
	// mullw r6,r11,r28
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// bl 0x823a1bd8
	ctx.lr = 0x823A1C54;
	sub_823A1BD8(ctx, base);
loc_823A1C54:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a1c24
	if (ctx.cr6.lt) goto loc_823A1C24;
	// b 0x823a1cdc
	goto loc_823A1CDC;
loc_823A1C6C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823a1c84
	if (!ctx.cr0.eq) goto loc_823A1C84;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x823a1cac
	goto loc_823A1CAC;
loc_823A1C84:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823a1c9c
	if (ctx.cr6.eq) goto loc_823A1C9C;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// b 0x823a1ca4
	goto loc_823A1CA4;
loc_823A1C9C:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
loc_823A1CA4:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_823A1CAC:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_823A1CDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A5548) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x823a5578
	goto loc_823A5578;
loc_823A556C:
	// lwz r31,36(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a559c
	if (ctx.cr6.eq) goto loc_823A559C;
loc_823A5578:
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
	// bl 0x823a31f0
	ctx.lr = 0x823A5590;
	sub_823A31F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823a556c
	if (!ctx.cr0.lt) goto loc_823A556C;
	// b 0x823a55a0
	goto loc_823A55A0;
loc_823A559C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A55A0:
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

DEFINE_REX_FUNC(sub_823A66B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823A66C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a66e4
	if (!ctx.cr6.eq) goto loc_823A66E4;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823a67cc
	goto loc_823A67CC;
loc_823A66E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a67d4
	if (!ctx.cr6.eq) goto loc_823A67D4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a67fc
	if (ctx.cr6.eq) goto loc_823A67FC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823A6730:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a61c8
	ctx.lr = 0x823A6744;
	sub_823A61C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823a67cc
	if (ctx.cr0.lt) goto loc_823A67CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a67c8
	if (ctx.cr6.eq) goto loc_823A67C8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x823a67b4
	if (!ctx.cr6.gt) goto loc_823A67B4;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_823A6780:
	// lhz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823a67a4
	if (!ctx.cr6.eq) goto loc_823A67A4;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a67a4
	if (!ctx.cr6.lt) goto loc_823A67A4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823A67A4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823a6780
	if (ctx.cr6.lt) goto loc_823A6780;
loc_823A67B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8234a7e0
	ctx.lr = 0x823A67C0;
	sub_8234A7E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823a67cc
	if (ctx.cr0.lt) goto loc_823A67CC;
loc_823A67C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A67CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
loc_823A67D4:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x82365d20
	ctx.lr = 0x823A67EC;
	sub_82365D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823a67cc
	if (ctx.cr0.lt) goto loc_823A67CC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823a6730
	if (!ctx.cr6.eq) goto loc_823A6730;
loc_823A67FC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x823a67cc
	goto loc_823A67CC;
}

DEFINE_REX_FUNC(sub_823AA3E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x823AA3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1540(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bne cr6,0x823aa40c
	if (!ctx.cr6.eq) goto loc_823AA40C;
	// li r30,1024
	ctx.r30.s64 = 1024;
loc_823AA40C:
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x823aa430
	if (!ctx.cr6.gt) goto loc_823AA430;
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_823AA424:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823aa424
	if (ctx.cr6.gt) goto loc_823AA424;
loc_823AA430:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823aa47c
	if (ctx.cr6.eq) goto loc_823AA47C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4a68
	ctx.lr = 0x823AA444;
	sub_821F4A68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823aa458
	if (!ctx.cr0.eq) goto loc_823AA458;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823aa480
	goto loc_823AA480;
loc_823AA458:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r4,1532(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1532);
	// bl 0x82203350
	ctx.lr = 0x823AA468;
	sub_82203350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,1532(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1532);
	// bl 0x821f4b88
	ctx.lr = 0x823AA474;
	sub_821F4B88(ctx, base);
	// stw r29,1532(r31)
	REX_STORE_U32(ctx.r31.u32 + 1532, ctx.r29.u32);
	// stw r30,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
loc_823AA47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AB0C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x823AB0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bl 0x823aa630
	ctx.lr = 0x823AB0E8;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ab140
	if (ctx.cr0.lt) goto loc_823AB140;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-1924
	ctx.r4.s64 = ctx.r11.s64 + -1924;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AB10C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ab140
	if (ctx.cr0.lt) goto loc_823AB140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AB11C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ab140
	if (ctx.cr0.lt) goto loc_823AB140;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-1960
	ctx.r4.s64 = ctx.r11.s64 + -1960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AB138;
	sub_823AA558(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823AB140:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AC050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204240
	ctx.lr = 0x823AC058;
	__savegprlr_18(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC06C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r11,-1812
	ctx.r20.s64 = ctx.r11.s64 + -1812;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC088;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r19,r11,-2040
	ctx.r19.s64 = ctx.r11.s64 + -2040;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,388(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 388);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,16476
	ctx.r24.s64 = ctx.r11.s64 + 16476;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC0DC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r9,1816(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r10,-6944
	ctx.r25.s64 = ctx.r10.s64 + -6944;
	// addi r26,r11,-1980
	ctx.r26.s64 = ctx.r11.s64 + -1980;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823ac1ac
	if (!ctx.cr6.gt) goto loc_823AC1AC;
loc_823AC104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC10C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821fcd80
	ctx.lr = 0x823AC12C;
	sub_821FCD80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC140;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC150;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC194;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac104
	if (ctx.cr6.lt) goto loc_823AC104;
loc_823AC1AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC1B4;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC1C8;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r21,r11,-1820
	ctx.r21.s64 = ctx.r11.s64 + -1820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,412(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC208;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r10,1816(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-1792
	ctx.r22.s64 = ctx.r11.s64 + -1792;
	// ble cr6,0x823ac2d0
	if (!ctx.cr6.gt) goto loc_823AC2D0;
loc_823AC228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC230;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821fcd80
	ctx.lr = 0x823AC250;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC264;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC274;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC2B8;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac228
	if (ctx.cr6.lt) goto loc_823AC228;
loc_823AC2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC2D8;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC2EC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC324;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC334;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-1772
	ctx.r28.s64 = ctx.r11.s64 + -1772;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC350;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,-1740
	ctx.r4.s64 = ctx.r10.s64 + -1740;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC398;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823ac434
	if (!ctx.cr6.gt) goto loc_823AC434;
loc_823AC3B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC3B8;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC3D4;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC3E4;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC41C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac3b0
	if (ctx.cr6.lt) goto loc_823AC3B0;
loc_823AC434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC43C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC450;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r23,r11,-1780
	ctx.r23.s64 = ctx.r11.s64 + -1780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC490;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac528
	if (ctx.cr6.eq) goto loc_823AC528;
loc_823AC4A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC4B0;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC4CC;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC4DC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC4FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC510;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac4a8
	if (ctx.cr6.lt) goto loc_823AC4A8;
loc_823AC528:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac5b8
	if (ctx.cr6.eq) goto loc_823AC5B8;
loc_823AC534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC53C;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC558;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC568;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC5A0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac534
	if (ctx.cr6.lt) goto loc_823AC534;
loc_823AC5B8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac65c
	if (ctx.cr6.eq) goto loc_823AC65C;
loc_823AC5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC5CC;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823AC5E8;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC5FC;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC60C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC644;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac5c4
	if (ctx.cr6.lt) goto loc_823AC5C4;
loc_823AC65C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac6e8
	if (ctx.cr6.eq) goto loc_823AC6E8;
loc_823AC668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC670;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC68C;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC69C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC6BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC6D0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac668
	if (ctx.cr6.lt) goto loc_823AC668;
loc_823AC6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC6F0;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC704;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC734;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823ac7f4
	if (!ctx.cr6.gt) goto loc_823AC7F4;
loc_823AC74C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC754;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821fcd80
	ctx.lr = 0x823AC774;
	sub_821FCD80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC788;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC798;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC7C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC7DC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac74c
	if (ctx.cr6.lt) goto loc_823AC74C;
loc_823AC7F4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236c550
	ctx.lr = 0x823AC804;
	sub_8236C550(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,-1992
	ctx.r29.s64 = ctx.r10.s64 + -1992;
	// beq cr6,0x823ac8e4
	if (ctx.cr6.eq) goto loc_823AC8E4;
loc_823AC848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC850;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821fcd80
	ctx.lr = 0x823AC870;
	sub_821FCD80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823AC884;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC894;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC8CC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac848
	if (ctx.cr6.lt) goto loc_823AC848;
loc_823AC8E4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac98c
	if (ctx.cr6.eq) goto loc_823AC98C;
loc_823AC8F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC8F8;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823AC914;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823AC928;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC938;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC974;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ac8f0
	if (ctx.cr6.lt) goto loc_823AC8F0;
loc_823AC98C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC994;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC9A8;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC9D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823AC9EC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823AC9FC;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// bl 0x823aa558
	ctx.lr = 0x823ACA14;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACA44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACA58;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823acb14
	if (!ctx.cr6.gt) goto loc_823ACB14;
loc_823ACA70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACA78;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823ACA94;
	sub_821FCD80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823ACAA8;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACAB8;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACAFC;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823aca70
	if (ctx.cr6.lt) goto loc_823ACA70;
loc_823ACB14:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236c550
	ctx.lr = 0x823ACB24;
	sub_8236C550(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acbfc
	if (ctx.cr6.eq) goto loc_823ACBFC;
loc_823ACB60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACB68;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823ACB84;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823ACB98;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACBA8;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACBD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACBE4;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823acb60
	if (ctx.cr6.lt) goto loc_823ACB60;
loc_823ACBFC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acca4
	if (ctx.cr6.eq) goto loc_823ACCA4;
loc_823ACC08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACC10;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823ACC2C;
	sub_821FCD80(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823ACC40;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACC50;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACC78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACC8C;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823acc08
	if (ctx.cr6.lt) goto loc_823ACC08;
loc_823ACCA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACCAC;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACCC0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACCF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACD04;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acdb8
	if (ctx.cr6.eq) goto loc_823ACDB8;
loc_823ACD1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACD24;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fcd80
	ctx.lr = 0x823ACD40;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823ACD54;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACD64;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACD8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACDA0;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823acd1c
	if (ctx.cr6.lt) goto loc_823ACD1C;
loc_823ACDB8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ace6c
	if (ctx.cr6.eq) goto loc_823ACE6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-1760
	ctx.r29.s64 = ctx.r11.s64 + -1760;
loc_823ACDCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa630
	ctx.lr = 0x823ACDD4;
	sub_823AA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821fcd80
	ctx.lr = 0x823ACDF4;
	sub_821FCD80(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fcd80
	ctx.lr = 0x823ACE08;
	sub_821FCD80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACE18;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa558
	ctx.lr = 0x823ACE54;
	sub_823AA558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ace70
	if (ctx.cr0.lt) goto loc_823ACE70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823acdcc
	if (ctx.cr6.lt) goto loc_823ACDCC;
loc_823ACE6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACE70:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82204290
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E9B40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x823E9B48;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,16(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,12(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r26,r10,12
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r29
	ctx.r25.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823e9bb8
	if (!ctx.cr6.eq) goto loc_823E9BB8;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823e9bd4
	if (ctx.cr6.eq) goto loc_823E9BD4;
loc_823E9BB8:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823e9cbc
	if (!ctx.cr6.eq) goto loc_823E9CBC;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e9cbc
	if (!ctx.cr6.eq) goto loc_823E9CBC;
loc_823E9BD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E9BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e9cf4
	if (ctx.cr0.lt) goto loc_823E9CF4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823e9c48
	if (ctx.cr6.eq) goto loc_823E9C48;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
loc_823E9C20:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e9c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9C20;
loc_823E9C48:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c67e0
	ctx.lr = 0x823E9C84;
	sub_823C67E0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c67e0
	ctx.lr = 0x823E9CB8;
	sub_823C67E0(ctx, base);
	// b 0x823e9cf4
	goto loc_823E9CF4;
loc_823E9CBC:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c67e0
	ctx.lr = 0x823E9CF4;
	sub_823C67E0(ctx, base);
loc_823E9CF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x823EE890;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,260(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r16,r11,12
	ctx.r16.u64 = ctx.r11.u32 & 0xFFFFF;
	// beq cr6,0x823eef90
	if (ctx.cr6.eq) goto loc_823EEF90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eef90
	if (ctx.cr6.eq) goto loc_823EEF90;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// li r21,0
	ctx.r21.s64 = 0;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// divwu r19,r10,r16
	ctx.r19.u64 = uint32_t(ctx.r16.u32 ? ctx.r10.u32 / ctx.r16.u32 : 0);
	// twllei r16,0
	if (ctx.r16.s32 == 0 || ctx.r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823eef74
	if (ctx.cr6.eq) goto loc_823EEF74;
	// lwz r31,12(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x823eef74
	if (!ctx.cr6.eq) goto loc_823EEF74;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x823ee94c
	if (ctx.cr6.eq) goto loc_823EE94C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823edb08
	ctx.lr = 0x823EE8FC;
	sub_823EDB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ee94c
	if (ctx.cr0.eq) goto loc_823EE94C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ee94c
	if (ctx.cr6.eq) goto loc_823EE94C;
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823EE918:
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x823ee93c
	if (!ctx.cr6.eq) goto loc_823EE93C;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r15,1
	ctx.r15.s64 = 1;
loc_823EE93C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823ee918
	if (ctx.cr6.lt) goto loc_823EE918;
loc_823EE94C:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823eea58
	if (ctx.cr6.eq) goto loc_823EEA58;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_823EE964:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r24,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r24,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// beq cr6,0x823eea28
	if (ctx.cr6.eq) goto loc_823EEA28;
	// lwz r8,260(r18)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r18)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r6,16(r18)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
loc_823EE9A4:
	// add r10,r29,r5
	ctx.r10.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ee9fc
	if (ctx.cr0.eq) goto loc_823EE9FC;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x823eea10
	goto loc_823EEA10;
loc_823EE9FC:
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r26
	REX_STORE_U32(ctx.r3.u32 + ctx.r26.u32, ctx.r10.u32);
loc_823EEA10:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r21,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r21.u32);
	// bdnz 0x823ee9a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EE9A4;
loc_823EEA28:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eda68
	ctx.lr = 0x823EEA38;
	sub_823EDA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823eea44
	if (!ctx.cr0.eq) goto loc_823EEA44;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823EEA44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 + ctx.r16.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x823ee964
	if (ctx.cr6.lt) goto loc_823EE964;
loc_823EEA58:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823eef50
	if (ctx.cr6.eq) goto loc_823EEF50;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// bne cr6,0x823eed34
	if (!ctx.cr6.eq) goto loc_823EED34;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_823EEA80:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823eeb18
	if (ctx.cr6.eq) goto loc_823EEB18;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// beq cr6,0x823eeaec
	if (ctx.cr6.eq) goto loc_823EEAEC;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_823EEAC4:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823eda68
	ctx.lr = 0x823EEAD4;
	sub_823EDA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823eeae0
	if (!ctx.cr0.eq) goto loc_823EEAE0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823EEAE0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x823eeac4
	if (!ctx.cr0.eq) goto loc_823EEAC4;
loc_823EEAEC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x823eeb00
	if (ctx.cr6.eq) goto loc_823EEB00;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// beq cr6,0x823eeb00
	if (ctx.cr6.eq) goto loc_823EEB00;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823EEB00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823eebb8
	if (ctx.cr6.eq) goto loc_823EEBB8;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x823eea80
	if (ctx.cr6.lt) goto loc_823EEA80;
loc_823EEB18:
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
loc_823EEB24:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823eecb8
	if (ctx.cr6.eq) goto loc_823EECB8;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_823EEB34:
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823eec90
	if (ctx.cr6.eq) goto loc_823EEC90;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
	// stw r30,-16(r28)
	REX_STORE_U32(ctx.r28.u32 + -16, ctx.r30.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r21,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// beq cr6,0x823eec04
	if (ctx.cr6.eq) goto loc_823EEC04;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_823EEB84:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823eda68
	ctx.lr = 0x823EEB94;
	sub_823EDA68(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823eda68
	ctx.lr = 0x823EEBA8;
	sub_823EDA68(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x823eebec
	if (!ctx.cr6.eq) goto loc_823EEBEC;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x823eebf4
	goto loc_823EEBF4;
loc_823EEBB8:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EEBCC;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EEBE8;
	sub_823BCDF8(ctx, base);
	// b 0x823eef5c
	goto loc_823EEF5C;
loc_823EEBEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eebf8
	if (!ctx.cr6.eq) goto loc_823EEBF8;
loc_823EEBF4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_823EEBF8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x823eeb84
	if (!ctx.cr0.eq) goto loc_823EEB84;
loc_823EEC04:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x823eec10
	if (ctx.cr6.eq) goto loc_823EEC10;
	// li r25,1
	ctx.r25.s64 = 1;
loc_823EEC10:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823eeca4
	if (ctx.cr6.eq) goto loc_823EECA4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823eec90
	if (!ctx.cr6.eq) goto loc_823EEC90;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x823eec34
	if (ctx.cr6.eq) goto loc_823EEC34;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eec90
	if (ctx.cr6.eq) goto loc_823EEC90;
loc_823EEC34:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// stw r24,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r24.u32);
	// stw r24,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r24.u32);
	// stw r24,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r24.u32);
	// stw r24,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r24,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// stw r24,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r24.u32);
	// stw r21,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r21.u32);
	// stw r21,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_823EEC90:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x823eeb34
	if (ctx.cr6.lt) goto loc_823EEB34;
	// b 0x823eeca8
	goto loc_823EECA8;
loc_823EECA4:
	// li r17,1
	ctx.r17.s64 = 1;
loc_823EECA8:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x823eeb24
	if (ctx.cr6.lt) goto loc_823EEB24;
loc_823EECB8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x823eece4
	if (ctx.cr6.eq) goto loc_823EECE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EECD4;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x823eeebc
	goto loc_823EEEBC;
loc_823EECE4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823eeedc
	if (ctx.cr6.eq) goto loc_823EEEDC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x823bcdf8
	ctx.lr = 0x823EED04;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EED20;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x823eeec0
	goto loc_823EEEC0;
loc_823EED34:
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 3, ctx.xer);
	// bne cr6,0x823eeedc
	if (!ctx.cr6.eq) goto loc_823EEEDC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EED54:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823eed64
	if (!ctx.cr6.eq) goto loc_823EED64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_823EED64:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823eed54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EED54;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
loc_823EED78:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823eee9c
	if (!ctx.cr6.eq) goto loc_823EEE9C;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
loc_823EED88:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823eee84
	if (!ctx.cr6.eq) goto loc_823EEE84;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823eee74
	if (ctx.cr6.eq) goto loc_823EEE74;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823eee74
	if (ctx.cr6.eq) goto loc_823EEE74;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823eee74
	if (ctx.cr6.eq) goto loc_823EEE74;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// stw r21,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r21.u32);
	// stw r21,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r21.u32);
	// stw r21,-16(r26)
	REX_STORE_U32(ctx.r26.u32 + -16, ctx.r21.u32);
	// stw r21,-16(r27)
	REX_STORE_U32(ctx.r27.u32 + -16, ctx.r21.u32);
	// stw r30,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r30,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stwx r30,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// beq cr6,0x823eee2c
	if (ctx.cr6.eq) goto loc_823EEE2C;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_823EEDF8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823eee2c
	if (!ctx.cr6.eq) goto loc_823EEE2C;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823eda68
	ctx.lr = 0x823EEE10;
	sub_823EDA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823eee1c
	if (!ctx.cr0.eq) goto loc_823EEE1C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823EEE1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x823eedf8
	if (ctx.cr6.lt) goto loc_823EEDF8;
loc_823EEE2C:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823eee68
	if (!ctx.cr6.eq) goto loc_823EEE68;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eee5c
	if (ctx.cr6.eq) goto loc_823EEE5C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eee5c
	if (ctx.cr6.eq) goto loc_823EEE5C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823eee68
	if (!ctx.cr6.eq) goto loc_823EEE68;
loc_823EEE5C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x823eee68
	if (ctx.cr6.eq) goto loc_823EEE68;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823EEE68:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823eee74
	if (!ctx.cr6.eq) goto loc_823EEE74;
	// li r17,1
	ctx.r17.s64 = 1;
loc_823EEE74:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x823eed88
	if (ctx.cr6.lt) goto loc_823EED88;
loc_823EEE84:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x823eed78
	if (ctx.cr6.lt) goto loc_823EED78;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x823eeedc
	if (ctx.cr6.eq) goto loc_823EEEDC;
loc_823EEE9C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EEEB0;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// li r6,3
	ctx.r6.s64 = 3;
loc_823EEEBC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_823EEEC0:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823bcdf8
	ctx.lr = 0x823EEECC;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823eef64
	if (!ctx.cr6.eq) goto loc_823EEF64;
loc_823EEEDC:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823eef64
	if (ctx.cr6.eq) goto loc_823EEF64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_823EEEEC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r21.u32);
	// bl 0x823bcdf8
	ctx.lr = 0x823EEF34;
	sub_823BCDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823eeeec
	if (ctx.cr6.lt) goto loc_823EEEEC;
	// b 0x823eef64
	goto loc_823EEF64;
loc_823EEF50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823cddd8
	ctx.lr = 0x823EEF5C;
	sub_823CDDD8(ctx, base);
loc_823EEF5C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
loc_823EEF64:
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// b 0x823eef94
	goto loc_823EEF94;
loc_823EEF74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823cddd8
	ctx.lr = 0x823EEF80;
	sub_823CDDD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eef94
	if (ctx.cr0.lt) goto loc_823EEF94;
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
loc_823EEF90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EEF94:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240C4D0) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82384480
	ctx.lr = 0x8240C4F0;
	sub_82384480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240c504
	if (ctx.cr0.eq) goto loc_8240C504;
	// bl 0x8240c400
	ctx.lr = 0x8240C4FC;
	sub_8240C400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8240c508
	goto loc_8240C508;
loc_8240C504:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8240C508:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8240c518
	if (!ctx.cr6.eq) goto loc_8240C518;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240c57c
	goto loc_8240C57C;
loc_8240C518:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c578
	if (ctx.cr6.eq) goto loc_8240C578;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240C568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8240c57c
	if (ctx.cr0.eq) goto loc_8240C57C;
loc_8240C578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8240C57C:
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

DEFINE_REX_FUNC(sub_8240EC98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220425c
	ctx.lr = 0x8240ECA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x823844e0
	ctx.lr = 0x8240ECC8;
	sub_823844E0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,-17796
	ctx.r10.s64 = ctx.r10.s64 + -17796;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8240ECE4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8240ece4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240ECE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8240ed20
	if (!ctx.cr6.eq) goto loc_8240ED20;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8240ED20:
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// addi r8,r10,17
	ctx.r8.s64 = ctx.r10.s64 + 17;
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// stwx r27,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u32);
	// stwx r26,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r25,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// std r11,104(r31)
	REX_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// std r11,112(r31)
	REX_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042ac
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82411178) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,6640
	ctx.r11.s64 = ctx.r11.s64 + 6640;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fmul f5,f0,f1
	ctx.f5.f64 = ctx.f0.f64 * ctx.f1.f64;
	// lfd f13,40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfd f12,48(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f10,64(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f11,72(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f9,96(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f8,88(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f7,56(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f6,80(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfs f0,108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fctid f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fnmsub f13,f13,f5,f1
	ctx.f13.f64 = -std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f1.f64);
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fnmsub f13,f12,f5,f13
	ctx.f13.f64 = -std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f11,f11,f12,f10
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f10.f64);
	// fmadd f10,f9,f12,f8
	ctx.f10.f64 = std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64);
	// fmadd f11,f11,f12,f7
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f7.f64);
	// fmadd f12,f10,f12,f6
	ctx.f12.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f6.f64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// beq 0x82411230
	if (ctx.cr0.eq) goto loc_82411230;
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r8,r8,32783
	ctx.r8.u64 = ctx.r8.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// rlwinm r9,r9,28,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7FF;
	// addi r9,r9,-1022
	ctx.r9.s64 = ctx.r9.s64 + -1022;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1022
	ctx.r10.s64 = ctx.r10.s64 + 1022;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r10.u16);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_82411230:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fsub f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f12,16(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// fsub f10,f13,f1
	ctx.f10.f64 = ctx.f13.f64 - ctx.f1.f64;
	// lfs f13,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f1,f10,f13,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_76) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_93) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_82416278) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824162a8
	if (ctx.cr6.eq) goto loc_824162A8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r4,r10,-5276
	ctx.r4.s64 = ctx.r10.s64 + -5276;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824160f0
	ctx.lr = 0x824162A4;
	sub_824160F0(ctx, base);
	// b 0x824162f4
	goto loc_824162F4;
loc_824162A8:
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-29208(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -29208);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,-5264
	ctx.r4.s64 = ctx.r10.s64 + -5264;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824160f0
	ctx.lr = 0x824162F4;
	sub_824160F0(ctx, base);
loc_824162F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82417930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204234
	ctx.lr = 0x82417938;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x82416148
	ctx.lr = 0x8241794C;
	sub_82416148(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r15,r10,-4788
	ctx.r15.s64 = ctx.r10.s64 + -4788;
	// addi r16,r11,-5152
	ctx.r16.s64 = ctx.r11.s64 + -5152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x824160f0
	ctx.lr = 0x8241796C;
	sub_824160F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416ea0
	ctx.lr = 0x82417974;
	sub_82416EA0(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82417ac4
	if (!ctx.cr6.lt) goto loc_82417AC4;
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r28,-5276
	ctx.r28.s64 = ctx.r28.s64 + -5276;
	// addi r29,r29,-4796
	ctx.r29.s64 = ctx.r29.s64 + -4796;
	// addi r30,r30,-4808
	ctx.r30.s64 = ctx.r30.s64 + -4808;
	// addi r20,r3,22388
	ctx.r20.s64 = ctx.r3.s64 + 22388;
	// addi r19,r4,22392
	ctx.r19.s64 = ctx.r4.s64 + 22392;
	// addi r18,r5,22396
	ctx.r18.s64 = ctx.r5.s64 + 22396;
	// addi r22,r6,13272
	ctx.r22.s64 = ctx.r6.s64 + 13272;
	// addi r17,r7,22400
	ctx.r17.s64 = ctx.r7.s64 + 22400;
	// addi r26,r8,-4852
	ctx.r26.s64 = ctx.r8.s64 + -4852;
	// addi r25,r9,-4860
	ctx.r25.s64 = ctx.r9.s64 + -4860;
	// addi r24,r10,-4892
	ctx.r24.s64 = ctx.r10.s64 + -4892;
	// addi r23,r11,-4824
	ctx.r23.s64 = ctx.r11.s64 + -4824;
loc_824179F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416148
	ctx.lr = 0x824179F8;
	sub_82416148(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824160f0
	ctx.lr = 0x82417A08;
	sub_824160F0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// bl 0x824160f0
	ctx.lr = 0x82417A20;
	sub_824160F0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82203b30
	ctx.lr = 0x82417A30;
	sub_82203B30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416308
	ctx.lr = 0x82417A40;
	sub_82416308(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82417a54
	if (!ctx.cr0.eq) goto loc_82417A54;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_82417A54:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// bne 0x82417a64
	if (!ctx.cr0.eq) goto loc_82417A64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_82417A64:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bne 0x82417a74
	if (!ctx.cr0.eq) goto loc_82417A74;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82417A74:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne 0x82417a84
	if (!ctx.cr0.eq) goto loc_82417A84;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82417A84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82203b30
	ctx.lr = 0x82417A90;
	sub_82203B30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416308
	ctx.lr = 0x82417AA0;
	sub_82416308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416e50
	ctx.lr = 0x82417AA8;
	sub_82416E50(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824179f0
	if (ctx.cr6.lt) goto loc_824179F0;
loc_82417AC4:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824161a8
	ctx.lr = 0x82417AD0;
	sub_824161A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82204284
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8241DE18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204258
	ctx.lr = 0x8241DE20;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82203a90
	ctx.lr = 0x8241DE50;
	sub_82203A90(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// std r30,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bge cr6,0x8241e080
	if (!ctx.cr6.lt) goto loc_8241E080;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,-2844
	ctx.r24.s64 = ctx.r11.s64 + -2844;
loc_8241DE98:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8241e080
	if (ctx.cr6.eq) goto loc_8241E080;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x8241e020
	if (ctx.cr6.eq) goto loc_8241E020;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x8241dfa4
	if (ctx.cr6.eq) goto loc_8241DFA4;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x8241df3c
	if (ctx.cr6.eq) goto loc_8241DF3C;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x8241dee0
	if (ctx.cr6.eq) goto loc_8241DEE0;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8241e080
	if (!ctx.cr6.eq) goto loc_8241E080;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8241e078
	goto loc_8241E078;
loc_8241DEE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x8241e08c
	if (!ctx.cr6.lt) goto loc_8241E08C;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241e098
	if (!ctx.cr0.eq) goto loc_8241E098;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x821b9180
	ctx.lr = 0x8241DF34;
	sub_821B9180(ctx, base);
loc_8241DF34:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x8241e078
	goto loc_8241E078;
loc_8241DF3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8241e0a4
	if (!ctx.cr6.lt) goto loc_8241E0A4;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241e0b0
	if (!ctx.cr0.eq) goto loc_8241E0B0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x8241df94
	if (ctx.cr6.eq) goto loc_8241DF94;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_8241DF94:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b9100
	ctx.lr = 0x8241DFA0;
	sub_821B9100(ctx, base);
	// b 0x8241df34
	goto loc_8241DF34;
loc_8241DFA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8241e0bc
	if (!ctx.cr6.lt) goto loc_8241E0BC;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241e0c8
	if (!ctx.cr0.eq) goto loc_8241E0C8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x8241dffc
	if (ctx.cr6.eq) goto loc_8241DFFC;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_8241DFFC:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	ctx.r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241e014
	if (!ctx.cr6.eq) goto loc_8241E014;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8241E014:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b9080
	ctx.lr = 0x8241E01C;
	sub_821B9080(ctx, base);
	// b 0x8241e078
	goto loc_8241E078;
loc_8241E020:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r8,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// bne cr6,0x8241e078
	if (!ctx.cr6.eq) goto loc_8241E078;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8241e078
	if (!ctx.cr6.lt) goto loc_8241E078;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8241e078
	if (ctx.cr6.lt) goto loc_8241E078;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8241e078
	if (ctx.cr6.gt) goto loc_8241E078;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8241e06c
	if (!ctx.cr6.eq) goto loc_8241E06C;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8241E06C:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
loc_8241E078:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8241de98
	if (ctx.cr6.lt) goto loc_8241DE98;
loc_8241E080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E084:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822042a8
	__restgprlr_24(ctx, base);
	return;
loc_8241E08C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x8241e084
	goto loc_8241E084;
loc_8241E098:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x8241e084
	goto loc_8241E084;
loc_8241E0A4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x8241e084
	goto loc_8241E084;
loc_8241E0B0:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x8241e084
	goto loc_8241E084;
loc_8241E0BC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x8241e084
	goto loc_8241E084;
loc_8241E0C8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x8241e084
	goto loc_8241E084;
}

DEFINE_REX_FUNC(sub_8242C858) {
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
	// bne cr6,0x8242c894
	if (!ctx.cr6.eq) goto loc_8242C894;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,11512
	ctx.r6.s64 = ctx.r11.s64 + 11512;
	// addi r5,r10,12028
	ctx.r5.s64 = ctx.r10.s64 + 12028;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// bl 0x82428090
	ctx.lr = 0x8242C894;
	sub_82428090(ctx, base);
loc_8242C894:
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

DEFINE_REX_FUNC(sub_8242D348) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824dbcf0
	ctx.lr = 0x8242D374;
	sub_824DBCF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8242d3a0
	if (!ctx.cr0.eq) goto loc_8242D3A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r11,11512
	ctx.r6.s64 = ctx.r11.s64 + 11512;
	// addi r5,r10,11948
	ctx.r5.s64 = ctx.r10.s64 + 11948;
	// addi r4,r9,-3532
	ctx.r4.s64 = ctx.r9.s64 + -3532;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x8242D3A0;
	sub_82428090(ctx, base);
loc_8242D3A0:
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

DEFINE_REX_FUNC(sub_8242E658) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x8242E660;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242e698
	if (!ctx.cr6.eq) goto loc_8242E698;
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
	// li r7,1903
	ctx.r7.s64 = 1903;
	// bl 0x82428090
	ctx.lr = 0x8242E698;
	sub_82428090(ctx, base);
loc_8242E698:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8242ee08
	ctx.lr = 0x8242E6A8;
	sub_8242EE08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82430448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82430450;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-3532
	ctx.r28.s64 = ctx.r11.s64 + -3532;
	// addi r27,r10,14632
	ctx.r27.s64 = ctx.r10.s64 + 14632;
	// bne cr6,0x82430494
	if (!ctx.cr6.eq) goto loc_82430494;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,14616
	ctx.r5.s64 = ctx.r11.s64 + 14616;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,113
	ctx.r7.s64 = 113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x82430494;
	sub_82428090(ctx, base);
loc_82430494:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824dbe10
	ctx.lr = 0x8243049C;
	sub_824DBE10(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x824304c8
	if (!ctx.cr0.eq) goto loc_824304C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,14812
	ctx.r5.s64 = ctx.r11.s64 + 14812;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,121
	ctx.r7.s64 = 121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x824304C0;
	sub_82428090(ctx, base);
loc_824304C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82430578
	goto loc_82430578;
loc_824304C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r29,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82430500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82430538
	if (!ctx.cr0.eq) goto loc_82430538;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
loc_82430518:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428090
	ctx.lr = 0x82430528;
	sub_82428090(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242fe88
	ctx.lr = 0x82430534;
	sub_8242FE88(ctx, base);
	// b 0x824304c0
	goto loc_824304C0;
loc_82430538:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82203350
	ctx.lr = 0x82430544;
	sub_82203350(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8242d3b8
	ctx.lr = 0x82430558;
	sub_8242D3B8(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82430574
	if (!ctx.cr0.eq) goto loc_82430574;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,14772
	ctx.r5.s64 = ctx.r11.s64 + 14772;
	// b 0x82430518
	goto loc_82430518;
loc_82430574:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82430578:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824365A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204230
	ctx.lr = 0x824365B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r6,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824365ec
	if (ctx.cr0.eq) goto loc_824365EC;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x824365f0
	if (ctx.cr0.eq) goto loc_824365F0;
loc_824365EC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824365F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436624
	if (ctx.cr0.eq) goto loc_82436624;
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82436608
	if (ctx.cr6.eq) goto loc_82436608;
	// li r4,193
	ctx.r4.s64 = 193;
loc_82436608:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b8f88
	ctx.lr = 0x82436610;
	sub_821B8F88(ctx, base);
	// lwz r3,16(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436624
	if (ctx.cr6.eq) goto loc_82436624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824167e8
	ctx.lr = 0x82436624;
	sub_824167E8(ctx, base);
loc_82436624:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
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
	// bne 0x824366fc
	if (!ctx.cr0.eq) goto loc_824366FC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824366fc
	if (ctx.cr0.eq) goto loc_824366FC;
loc_82436650:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x824366e0
	if (!ctx.cr6.eq) goto loc_824366E0;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824366e0
	if (ctx.cr6.eq) goto loc_824366E0;
	// rlwinm. r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x824366a0
	if (ctx.cr0.eq) goto loc_824366A0;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8243668C:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8243668c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243668C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x824366cc
	if (!ctx.cr6.lt) goto loc_824366CC;
loc_824366A0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824366cc
	if (ctx.cr6.eq) goto loc_824366CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824366C4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824366c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824366C4;
loc_824366CC:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// rlwinm r4,r11,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// bl 0x821b9180
	ctx.lr = 0x824366E0;
	sub_821B9180(ctx, base);
loc_824366E0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824366fc
	if (!ctx.cr0.eq) goto loc_824366FC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436650
	if (!ctx.cr6.eq) goto loc_82436650;
loc_824366FC:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// lis r17,-1
	ctx.r17.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8243676c
	if (ctx.cr6.eq) goto loc_8243676C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8243676c
	if (!ctx.cr6.eq) goto loc_8243676C;
	// lwz r11,336(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 336);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8243676c
	if (!ctx.cr6.gt) goto loc_8243676C;
	// addi r31,r15,124
	ctx.r31.s64 = ctx.r15.s64 + 124;
loc_8243672C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x82436758
	if (ctx.cr6.gt) goto loc_82436758;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// rlwinm r11,r10,27,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xF;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x821b9270
	ctx.lr = 0x82436758;
	sub_821B9270(ctx, base);
loc_82436758:
	// lwz r11,336(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 336);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243672c
	if (ctx.cr6.lt) goto loc_8243672C;
loc_8243676C:
	// lwz r11,536(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 536);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824368a8
	if (!ctx.cr6.gt) goto loc_824368A8;
	// addi r30,r15,348
	ctx.r30.s64 = ctx.r15.s64 + 348;
loc_82436788:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824367bc
	if (ctx.cr0.eq) goto loc_824367BC;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436894
	if (ctx.cr0.eq) goto loc_82436894;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x824367ac
	if (!ctx.cr6.eq) goto loc_824367AC;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82436894
	goto loc_82436894;
loc_824367AC:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bge cr6,0x82436894
	if (!ctx.cr6.lt) goto loc_82436894;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// b 0x82436894
	goto loc_82436894;
loc_824367BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x82436894
	if (ctx.cr6.eq) goto loc_82436894;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824367D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436894
	if (ctx.cr6.eq) goto loc_82436894;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824367f4
	if (ctx.cr6.eq) goto loc_824367F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824367fc
	if (!ctx.cr0.eq) goto loc_824367FC;
loc_824367F4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824367d4
	goto loc_824367D4;
loc_824367FC:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x8243684c
	if (!ctx.cr6.eq) goto loc_8243684C;
	// rlwinm r31,r10,15,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r5,r9,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// rlwimi r10,r11,31,17,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r9,r11,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwinm r11,r10,27,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x821b9270
	ctx.lr = 0x8243683C;
	sub_821B9270(ctx, base);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82436894
	if (!ctx.cr6.gt) goto loc_82436894;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x82436894
	goto loc_82436894;
loc_8243684C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwimi r9,r10,28,11,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1FE000) | (ctx.r9.u64 & 0xFFFFFFFFFFE01FFF);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r9,23,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFFF;
	// bne cr6,0x82436868
	if (!ctx.cr6.eq) goto loc_82436868;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82436868:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwimi r8,r9,31,17,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x6000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r10,r8,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FF;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x821b9308
	ctx.lr = 0x82436894;
	sub_821B9308(ctx, base);
loc_82436894:
	// lwz r11,536(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 536);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82436788
	if (ctx.cr6.lt) goto loc_82436788;
loc_824368A8:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x824368dc
	if (ctx.cr6.eq) goto loc_824368DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82436330
	ctx.lr = 0x824368C8;
	sub_82436330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r6,4(r14)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r5,0(r14)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x82434ec0
	ctx.lr = 0x824368DC;
	sub_82434EC0(ctx, base);
loc_824368DC:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
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
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82435300
	ctx.lr = 0x824368FC;
	sub_82435300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82436950
	if (ctx.cr6.eq) goto loc_82436950;
loc_8243690C:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82436920
	if (ctx.cr6.eq) goto loc_82436920;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436950
	if (!ctx.cr0.eq) goto loc_82436950;
loc_82436920:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435300
	ctx.lr = 0x8243692C;
	sub_82435300(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82436938
	if (!ctx.cr6.gt) goto loc_82436938;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82436938:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436950
	if (!ctx.cr0.eq) goto loc_82436950;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8243690c
	if (!ctx.cr6.eq) goto loc_8243690C;
loc_82436950:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82436974
	if (ctx.cr6.eq) goto loc_82436974;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82436994
	goto loc_82436994;
loc_82436974:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82436984
	if (!ctx.cr6.gt) goto loc_82436984;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82436984:
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82436994:
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821b8fc0
	ctx.lr = 0x824369AC;
	sub_821B8FC0(ctx, base);
	// li r19,-1
	ctx.r19.s64 = -1;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r18,8(r14)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r21,12(r14)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r16,16(r14)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + 16);
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// beq cr6,0x82437634
	if (ctx.cr6.eq) goto loc_82437634;
loc_824369E0:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x824369f4
	if (ctx.cr6.eq) goto loc_824369F4;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437634
	if (!ctx.cr0.eq) goto loc_82437634;
loc_824369F4:
	// lwz r31,20(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436a4c
	if (!ctx.cr0.eq) goto loc_82436A4C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82436a4c
	if (ctx.cr0.eq) goto loc_82436A4C;
loc_82436A08:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x82436a34
	if (!ctx.cr6.eq) goto loc_82436A34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436a34
	if (ctx.cr6.eq) goto loc_82436A34;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437650
	if (ctx.cr0.eq) goto loc_82437650;
loc_82436A34:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436a4c
	if (!ctx.cr0.eq) goto loc_82436A4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82436a08
	if (!ctx.cr6.eq) goto loc_82436A08;
loc_82436A4C:
	// lwz r31,28(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437618
	if (!ctx.cr0.eq) goto loc_82437618;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82437618
	if (ctx.cr0.eq) goto loc_82437618;
loc_82436A60:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82436a8c
	if (ctx.cr6.lt) goto loc_82436A8C;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// ble cr6,0x82436a90
	if (!ctx.cr6.gt) goto loc_82436A90;
loc_82436A8C:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82436A90:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82436e0c
	if (ctx.cr0.eq) goto loc_82436E0C;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436b08
	if (ctx.cr0.eq) goto loc_82436B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824345d0
	ctx.lr = 0x82436AAC;
	sub_824345D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436b08
	if (ctx.cr0.eq) goto loc_82436B08;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82436af0
	if (ctx.cr0.eq) goto loc_82436AF0;
	// b 0x82436ad4
	goto loc_82436AD4;
loc_82436AC8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82436ae0
	if (ctx.cr0.eq) goto loc_82436AE0;
loc_82436AD4:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436ac8
	if (!ctx.cr6.eq) goto loc_82436AC8;
loc_82436AE0:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82436ad4
	if (!ctx.cr0.eq) goto loc_82436AD4;
	// stw r11,112(r26)
	REX_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_82436AF0:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436b08
	if (ctx.cr0.eq) goto loc_82436B08;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82436B08;
	sub_821B9538(ctx, base);
loc_82436B08:
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x824f97f0
	ctx.lr = 0x82436B24;
	sub_824F97F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82435200
	ctx.lr = 0x82436B2C;
	sub_82435200(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82436b48
	if (ctx.cr0.eq) goto loc_82436B48;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824f97f0
	ctx.lr = 0x82436B44;
	sub_824F97F0(ctx, base);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82436B48:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436cd0
	if (ctx.cr0.eq) goto loc_82436CD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82436b68
	if (!ctx.cr0.eq) goto loc_82436B68;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82436b90
	goto loc_82436B90;
loc_82436B68:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82436b88
	if (ctx.cr6.eq) goto loc_82436B88;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82436b88
	if (ctx.cr6.eq) goto loc_82436B88;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x82436b8c
	if (!ctx.cr6.eq) goto loc_82436B8C;
loc_82436B88:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82436B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82436B90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436be4
	if (!ctx.cr0.eq) goto loc_82436BE4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82436cd0
	if (ctx.cr6.eq) goto loc_82436CD0;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82436bb4
	if (!ctx.cr0.eq) goto loc_82436BB4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82436bdc
	goto loc_82436BDC;
loc_82436BB4:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82436bd4
	if (ctx.cr6.eq) goto loc_82436BD4;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82436bd4
	if (ctx.cr6.eq) goto loc_82436BD4;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x82436bd8
	if (!ctx.cr6.eq) goto loc_82436BD8;
loc_82436BD4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82436BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82436BDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436cd0
	if (ctx.cr0.eq) goto loc_82436CD0;
loc_82436BE4:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9650
	ctx.lr = 0x82436BEC;
	sub_821B9650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82436c84
	if (ctx.cr6.eq) goto loc_82436C84;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436c84
	if (!ctx.cr0.eq) goto loc_82436C84;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82436C0C;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82436c78
	if (!ctx.cr6.eq) goto loc_82436C78;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82436c78
	if (ctx.cr6.eq) goto loc_82436C78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436c78
	if (ctx.cr6.eq) goto loc_82436C78;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x821b9698
	ctx.lr = 0x82436C50;
	sub_821B9698(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436c7c
	if (ctx.cr6.eq) goto loc_82436C7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,20480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20480, ctx.xer);
	// bne cr6,0x82436c84
	if (!ctx.cr6.eq) goto loc_82436C84;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82436C74;
	sub_821B9538(ctx, base);
	// b 0x82436c84
	goto loc_82436C84;
loc_82436C78:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82436C7C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82436cd0
	if (!ctx.cr6.eq) goto loc_82436CD0;
loc_82436C84:
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x821b9438
	ctx.lr = 0x82436CB8;
	sub_821B9438(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x82436CD0;
	sub_82435E78(ctx, base);
loc_82436CD0:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9438
	ctx.lr = 0x82436CDC;
	sub_821B9438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x82436CF8;
	sub_82435E78(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// bl 0x821b96b0
	ctx.lr = 0x82436D04;
	sub_821B96B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9650
	ctx.lr = 0x82436D1C;
	sub_821B9650(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// rlwinm r11,r29,12,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x7000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82436d78
	if (ctx.cr6.eq) goto loc_82436D78;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// rlwinm r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
loc_82436D78:
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824374e8
	if (ctx.cr0.eq) goto loc_824374E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824345d0
	ctx.lr = 0x82436D90;
	sub_824345D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824374e8
	if (ctx.cr0.eq) goto loc_824374E8;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82436dd4
	if (ctx.cr0.eq) goto loc_82436DD4;
	// b 0x82436db8
	goto loc_82436DB8;
loc_82436DAC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82436dc4
	if (ctx.cr0.eq) goto loc_82436DC4;
loc_82436DB8:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436dac
	if (!ctx.cr6.eq) goto loc_82436DAC;
loc_82436DC4:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82436db8
	if (!ctx.cr0.eq) goto loc_82436DB8;
	// stw r11,112(r26)
	REX_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_82436DD4:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824374e8
	if (ctx.cr0.eq) goto loc_824374E8;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824374e8
	if (ctx.cr0.eq) goto loc_824374E8;
	// b 0x824374b8
	goto loc_824374B8;
loc_82436E0C:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x82436e20
	if (ctx.cr6.lt) goto loc_82436E20;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// ble cr6,0x82436e24
	if (!ctx.cr6.gt) goto loc_82436E24;
loc_82436E20:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82436E24:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82437084
	if (ctx.cr0.eq) goto loc_82437084;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x82436e3c
	if (!ctx.cr6.eq) goto loc_82436E3C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824375fc
	if (ctx.cr0.eq) goto loc_824375FC;
loc_82436E3C:
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x82436e98
	if (!ctx.cr6.eq) goto loc_82436E98;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82436E58;
	sub_824348C0(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82436e98
	if (ctx.cr6.eq) goto loc_82436E98;
	// stw r10,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stw r23,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x821b9100
	ctx.lr = 0x82436E98;
	sub_821B9100(ctx, base);
loc_82436E98:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x82436ee4
	if (!ctx.cr6.eq) goto loc_82436EE4;
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82436ed8
	if (ctx.cr6.eq) goto loc_82436ED8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwimi r11,r22,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x82436f3c
	goto loc_82436F3C;
loc_82436ED8:
	// bl 0x821b9538
	ctx.lr = 0x82436EDC;
	sub_821B9538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82436f5c
	goto loc_82436F5C;
loc_82436EE4:
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// bl 0x824f49c8
	ctx.lr = 0x82436EFC;
	sub_824F49C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436f34
	if (ctx.cr0.eq) goto loc_82436F34;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82436F0C;
	sub_821B9538(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824348c0
	ctx.lr = 0x82436F28;
	sub_824348C0(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stwx r30,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82436F34:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
loc_82436F3C:
	// bl 0x821b9450
	ctx.lr = 0x82436F40;
	sub_821B9450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x82436F5C;
	sub_82435E78(ctx, base);
loc_82436F5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// sth r10,22(r31)
	REX_STORE_U16(ctx.r31.u32 + 22, ctx.r10.u16);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r9,10624
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10624, ctx.xer);
	// bne cr6,0x824374e8
	if (!ctx.cr6.eq) goto loc_824374E8;
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x824374e8
	if (!ctx.cr6.eq) goto loc_824374E8;
	// lbz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 48);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82437010
	goto loc_82437010;
loc_82436FA8:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824376b4
	if (!ctx.cr0.eq) goto loc_824376B4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824376b4
	if (ctx.cr0.eq) goto loc_824376B4;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16128, ctx.xer);
	// bne cr6,0x824376b4
	if (!ctx.cr6.eq) goto loc_824376B4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8243701c
	if (ctx.cr6.lt) goto loc_8243701C;
	// rlwinm. r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437020
	if (!ctx.cr0.eq) goto loc_82437020;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437020
	if (!ctx.cr0.eq) goto loc_82437020;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437020
	if (!ctx.cr0.eq) goto loc_82437020;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82437020
	if (ctx.cr0.eq) goto loc_82437020;
	// lbz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 48);
loc_82437010:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436fa8
	if (ctx.cr0.eq) goto loc_82436FA8;
	// b 0x82437020
	goto loc_82437020;
loc_8243701C:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82437020:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824374e8
	if (ctx.cr0.eq) goto loc_824374E8;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x821b9438
	ctx.lr = 0x8243705C;
	sub_821B9438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x82437078;
	sub_82435E78(ctx, base);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x824374e8
	goto loc_824374E8;
loc_82437084:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x82437098
	if (ctx.cr6.lt) goto loc_82437098;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// ble cr6,0x8243709c
	if (!ctx.cr6.gt) goto loc_8243709C;
loc_82437098:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_8243709C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824372a4
	if (ctx.cr0.eq) goto loc_824372A4;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82437220
	if (!ctx.cr6.eq) goto loc_82437220;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x824f3270
	ctx.lr = 0x824370C8;
	sub_824F3270(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r29,r11,13,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824348c0
	ctx.lr = 0x824370E8;
	sub_824348C0(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,15(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 15);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82437118
	if (ctx.cr6.eq) goto loc_82437118;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// rlwinm r6,r11,16,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x821b9420
	ctx.lr = 0x82437114;
	sub_821B9420(ctx, base);
	// b 0x82437240
	goto loc_82437240;
loc_82437118:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437208
	if (!ctx.cr0.eq) goto loc_82437208;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// bne cr6,0x82437134
	if (!ctx.cr6.eq) goto loc_82437134;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bgt cr6,0x82437138
	if (ctx.cr6.gt) goto loc_82437138;
loc_82437134:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82437138:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437208
	if (ctx.cr0.eq) goto loc_82437208;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9650
	ctx.lr = 0x82437148;
	sub_821B9650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82437200
	if (ctx.cr6.eq) goto loc_82437200;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824371c4
	if (!ctx.cr0.eq) goto loc_824371C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824371c4
	if (ctx.cr6.eq) goto loc_824371C4;
loc_82437174:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// bne cr6,0x82437190
	if (!ctx.cr6.eq) goto loc_82437190;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x82437194
	if (ctx.cr0.eq) goto loc_82437194;
loc_82437190:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82437194:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824371bc
	if (ctx.cr0.eq) goto loc_824371BC;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824371bc
	if (!ctx.cr0.eq) goto loc_824371BC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437174
	if (!ctx.cr6.eq) goto loc_82437174;
loc_824371BC:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x824376c0
	if (ctx.cr6.gt) goto loc_824376C0;
loc_824371C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x824371D0;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x824371f4
	if (!ctx.cr6.eq) goto loc_824371F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824371f8
	if (!ctx.cr6.gt) goto loc_824371F8;
loc_824371F4:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_824371F8:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82437208
	if (!ctx.cr6.eq) goto loc_82437208;
loc_82437200:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b95d0
	ctx.lr = 0x82437208;
	sub_821B95D0(ctx, base);
loc_82437208:
	// lhz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x821b93c0
	ctx.lr = 0x8243721C;
	sub_821B93C0(ctx, base);
	// b 0x82437240
	goto loc_82437240;
loc_82437220:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x824f35a0
	ctx.lr = 0x82437234;
	sub_824F35A0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9368
	ctx.lr = 0x82437240;
	sub_821B9368(ctx, base);
loc_82437240:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x8243725C;
	sub_82435E78(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// bl 0x821b96b0
	ctx.lr = 0x8243726C;
	sub_821B96B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9650
	ctx.lr = 0x82437284;
	sub_821B9650(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r10,r29,12,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x7000;
	// clrlwi r9,r3,20
	ctx.r9.u64 = ctx.r3.u32 & 0xFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_8243729C:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x824374e8
	goto loc_824374E8;
loc_824372A4:
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// bne cr6,0x82437358
	if (!ctx.cr6.eq) goto loc_82437358;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824372c0
	if (ctx.cr0.eq) goto loc_824372C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_824372C0:
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824372ec
	if (ctx.cr0.eq) goto loc_824372EC;
	// bl 0x821b9538
	ctx.lr = 0x824372D4;
	sub_821B9538(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8243729c
	goto loc_8243729C;
loc_824372EC:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// bl 0x821b9650
	ctx.lr = 0x824372F4;
	sub_821B9650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82437344
	if (ctx.cr6.eq) goto loc_82437344;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x8243730C;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82437344
	if (!ctx.cr6.eq) goto loc_82437344;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r11,20,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// bne cr6,0x82437344
	if (!ctx.cr6.eq) goto loc_82437344;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82437344:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r29,r28,12,17,19
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x7000) | (ctx.r29.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwimi r29,r11,0,0,16
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000) | (ctx.r29.u64 & 0xFFFFFFFF00007FFF);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// b 0x824374e8
	goto loc_824374E8;
loc_82437358:
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// bne cr6,0x824374c8
	if (!ctx.cr6.eq) goto loc_824374C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82437364:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82437380
	if (ctx.cr6.eq) goto loc_82437380;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82437380
	if (!ctx.cr0.eq) goto loc_82437380;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82437364
	goto loc_82437364;
loc_82437380:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r30,r11,31,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// std r23,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r23.u64);
	// stw r23,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r23.u32);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r30,12,16,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xF000;
	// rlwinm r11,r30,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r9,r9,6
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// rlwimi r8,r22,25,3,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 25) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r9,r9,0,24,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rlwinm r8,r8,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r9,r8,128
	ctx.r9.u64 = ctx.r8.u64 | 128;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x821b9438
	ctx.lr = 0x824373F8;
	sub_821B9438(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x82437410;
	sub_82435E78(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82437418;
	sub_821B9538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82434d80
	ctx.lr = 0x8243742C;
	sub_82434D80(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// rlwinm r9,r30,28,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r23,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// stw r23,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,9216
	ctx.r10.u64 = ctx.r10.u64 | 603979776;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x821b9438
	ctx.lr = 0x82437498;
	sub_821B9438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435e78
	ctx.lr = 0x824374B4;
	sub_82435E78(ctx, base);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_824374B8:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x824374C0;
	sub_821B9538(ctx, base);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// b 0x824374e8
	goto loc_824374E8;
loc_824374C8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824374dc
	if (ctx.cr6.lt) goto loc_824374DC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x824374e0
	if (!ctx.cr6.gt) goto loc_824374E0;
loc_824374DC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824374E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824376cc
	if (!ctx.cr0.eq) goto loc_824376CC;
loc_824374E8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82437570
	if (ctx.cr6.eq) goto loc_82437570;
loc_824374F0:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82437504
	if (ctx.cr6.eq) goto loc_82437504;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82437570
	if (!ctx.cr6.eq) goto loc_82437570;
loc_82437504:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435f78
	ctx.lr = 0x8243751C;
	sub_82435F78(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82437534
	if (ctx.cr6.eq) goto loc_82437534;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824374f0
	if (!ctx.cr6.eq) goto loc_824374F0;
loc_82437534:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,4(r18)
	REX_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// lwz r11,740(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 740);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,736(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 736);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824374f0
	if (ctx.cr6.lt) goto loc_824374F0;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
loc_82437570:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x824375f8
	if (ctx.cr6.eq) goto loc_824375F8;
loc_82437578:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243758c
	if (ctx.cr6.eq) goto loc_8243758C;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824375f8
	if (!ctx.cr6.eq) goto loc_824375F8;
loc_8243758C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435f78
	ctx.lr = 0x824375A4;
	sub_82435F78(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824375bc
	if (ctx.cr6.eq) goto loc_824375BC;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82437578
	if (!ctx.cr6.eq) goto loc_82437578;
loc_824375BC:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,4(r21)
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// lwz r10,764(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 764);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,760(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 760);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82437578
	if (ctx.cr6.lt) goto loc_82437578;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
loc_824375F8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_824375FC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437614
	if (!ctx.cr0.eq) goto loc_82437614;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82436a60
	if (!ctx.cr6.eq) goto loc_82436A60;
loc_82437614:
	// lwz r25,476(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_82437618:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437648
	if (!ctx.cr0.eq) goto loc_82437648;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824369e0
	if (!ctx.cr6.eq) goto loc_824369E0;
loc_82437634:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824376e0
	if (ctx.cr6.eq) goto loc_824376E0;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82437778
	goto loc_82437778;
loc_82437648:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x82437634
	goto loc_82437634;
loc_82437650:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82437664;
	sub_824348C0(ctx, base);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824376a0
	if (ctx.cr0.eq) goto loc_824376A0;
	// bl 0x824bcef8
	ctx.lr = 0x82437690;
	sub_824BCEF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x824376A0;
	sub_824222F0(ctx, base);
loc_824376A0:
	// bl 0x824bcef8
	ctx.lr = 0x824376A4;
	sub_824BCEF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3527
	ctx.r4.s64 = 3527;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x824376B4;
	sub_824222F0(ctx, base);
loc_824376B4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x824376C0;
	sub_824222F0(ctx, base);
loc_824376C0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x824376CC;
	sub_824222F0(ctx, base);
loc_824376CC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,15992
	ctx.r5.s64 = ctx.r11.s64 + 15992;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x824376E0;
	sub_824222F0(ctx, base);
loc_824376E0:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437784
	if (!ctx.cr0.eq) goto loc_82437784;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
loc_824376F0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824376F8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x824377ac
	if (ctx.cr0.eq) goto loc_824377AC;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243776c
	if (!ctx.cr0.eq) goto loc_8243776C;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x82437760
	goto loc_82437760;
loc_82437718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82434628
	ctx.lr = 0x82437720;
	sub_82434628(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437750
	if (ctx.cr0.eq) goto loc_82437750;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82437744
	if (ctx.cr6.lt) goto loc_82437744;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x82437748
	if (!ctx.cr6.gt) goto loc_82437748;
loc_82437744:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82437748:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243778c
	if (!ctx.cr0.eq) goto loc_8243778C;
loc_82437750:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8243776c
	if (!ctx.cr0.eq) goto loc_8243776C;
loc_82437760:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82437718
	if (!ctx.cr0.eq) goto loc_82437718;
loc_8243776C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82437784
	if (ctx.cr6.eq) goto loc_82437784;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_82437778:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824376f0
	if (ctx.cr0.eq) goto loc_824376F0;
loc_82437784:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x824376f8
	goto loc_824376F8;
loc_8243778C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x821b9668
	ctx.lr = 0x8243779C;
	sub_821B9668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824377AC:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x824377B4;
	sub_821B9538(ctx, base);
	// lwz r6,808(r15)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r15.u32 + 808);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x824377d0
	if (ctx.cr6.eq) goto loc_824377D0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x824377e8
	goto loc_824377E8;
loc_824377D0:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r17.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2046
	ctx.r11.s64 = ctx.r11.s64 + 2046;
loc_824377E8:
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82437810
	if (!ctx.cr6.gt) goto loc_82437810;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// beq cr6,0x82437808
	if (ctx.cr6.eq) goto loc_82437808;
	// li r4,3617
	ctx.r4.s64 = 3617;
	// bl 0x824222f0
	ctx.lr = 0x82437808;
	sub_824222F0(ctx, base);
loc_82437808:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// bl 0x824222f0
	ctx.lr = 0x82437810;
	sub_824222F0(ctx, base);
loc_82437810:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82437858
	if (ctx.cr6.eq) goto loc_82437858;
loc_8243781C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82437828;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8243781c
	if (!ctx.cr6.eq) goto loc_8243781C;
loc_82437858:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437960
	if (ctx.cr0.eq) goto loc_82437960;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82437960
	if (ctx.cr6.eq) goto loc_82437960;
loc_8243786C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82437880
	if (ctx.cr6.eq) goto loc_82437880;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437960
	if (!ctx.cr0.eq) goto loc_82437960;
loc_82437880:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437944
	if (!ctx.cr0.eq) goto loc_82437944;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82437944
	if (ctx.cr0.eq) goto loc_82437944;
loc_82437898:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x824378cc
	if (ctx.cr6.eq) goto loc_824378CC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x824378cc
	if (ctx.cr6.eq) goto loc_824378CC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x824378cc
	if (ctx.cr6.eq) goto loc_824378CC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x824378cc
	if (ctx.cr6.eq) goto loc_824378CC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x824378d0
	if (!ctx.cr6.eq) goto loc_824378D0;
loc_824378CC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_824378D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437928
	if (ctx.cr0.eq) goto loc_82437928;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824348c0
	ctx.lr = 0x824378F0;
	sub_824348C0(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r10,768(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x821b9668
	ctx.lr = 0x82437908;
	sub_821B9668(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82437928:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437944
	if (!ctx.cr0.eq) goto loc_82437944;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437898
	if (!ctx.cr6.eq) goto loc_82437898;
loc_82437944:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437960
	if (!ctx.cr0.eq) goto loc_82437960;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243786c
	if (!ctx.cr6.eq) goto loc_8243786C;
loc_82437960:
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82438320
	if (ctx.cr6.eq) goto loc_82438320;
	// li r14,3
	ctx.r14.s64 = 3;
loc_82437974:
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243798c
	if (ctx.cr6.eq) goto loc_8243798C;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82438318
	if (!ctx.cr0.eq) goto loc_82438318;
loc_8243798C:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 28);
	// addi r29,r17,24
	ctx.r29.s64 = ctx.r17.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437a4c
	if (!ctx.cr0.eq) goto loc_82437A4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437a4c
	if (ctx.cr0.eq) goto loc_82437A4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x82437a4c
	if (!ctx.cr6.eq) goto loc_82437A4C;
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824379f8
	if (!ctx.cr0.eq) goto loc_824379F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824379f8
	if (ctx.cr6.eq) goto loc_824379F8;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824379f8
	if (ctx.cr6.eq) goto loc_824379F8;
	// bl 0x824352b0
	ctx.lr = 0x824379F4;
	sub_824352B0(ctx, base);
	// b 0x82437a00
	goto loc_82437A00;
loc_824379F8:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82437A00;
	sub_821B9538(ctx, base);
loc_82437A00:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82437A0C;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82437a4c
	if (ctx.cr6.eq) goto loc_82437A4C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82437a34
	if (!ctx.cr6.eq) goto loc_82437A34;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r22,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82437A34:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x82438348
	if (!ctx.cr6.eq) goto loc_82438348;
	// rlwimi r11,r22,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82437A4C:
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 48);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82437bf0
	if (ctx.cr0.eq) goto loc_82437BF0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824352b0
	ctx.lr = 0x82437A60;
	sub_824352B0(ctx, base);
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82437A68:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82437acc
	if (ctx.cr0.eq) goto loc_82437ACC;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82437A78:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82437A80;
	sub_821B9538(ctx, base);
loc_82437A80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82437bb8
	goto loc_82437BB8;
loc_82437A88:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438354
	if (!ctx.cr0.eq) goto loc_82438354;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438354
	if (ctx.cr0.eq) goto loc_82438354;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x82438354
	if (!ctx.cr6.eq) goto loc_82438354;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437ae0
	if (!ctx.cr0.eq) goto loc_82437AE0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437adc
	if (!ctx.cr0.eq) goto loc_82437ADC;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82437a68
	goto loc_82437A68;
loc_82437ACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82437a88
	if (!ctx.cr6.eq) goto loc_82437A88;
	// b 0x82437a78
	goto loc_82437A78;
loc_82437ADC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82437AE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82437a78
	if (ctx.cr6.eq) goto loc_82437A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824352b0
	ctx.lr = 0x82437AF0;
	sub_824352B0(ctx, base);
	// b 0x82437a80
	goto loc_82437A80;
loc_82437AF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82437B00;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82437b54
	if (!ctx.cr6.eq) goto loc_82437B54;
	// lbz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82437b48
	if (ctx.cr0.eq) goto loc_82437B48;
	// rlwimi r11,r14,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,72(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 72);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82437bb4
	goto loc_82437BB4;
loc_82437B48:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// b 0x82437b9c
	goto loc_82437B9C;
loc_82437B54:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82437bb4
	if (!ctx.cr6.eq) goto loc_82437BB4;
	// lbz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// beq 0x82437b98
	if (ctx.cr0.eq) goto loc_82437B98;
	// rlwimi r11,r22,14,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 14) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,72(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 72);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// b 0x82437bb0
	goto loc_82437BB0;
loc_82437B98:
	// rlwimi r11,r14,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82437B9C:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
loc_82437BB0:
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82437BB4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82437BB8:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82437af4
	if (ctx.cr6.lt) goto loc_82437AF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82438318
	if (ctx.cr6.eq) goto loc_82438318;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82437be0
	if (ctx.cr0.eq) goto loc_82437BE0;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// b 0x824382dc
	goto loc_824382DC;
loc_82437BE0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x824382dc
	goto loc_824382DC;
loc_82437BF0:
	// lbz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824382dc
	if (!ctx.cr0.eq) goto loc_824382DC;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824382dc
	if (!ctx.cr0.eq) goto loc_824382DC;
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437cb4
	if (!ctx.cr0.eq) goto loc_82437CB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82437cb4
	if (ctx.cr6.eq) goto loc_82437CB4;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437cb4
	if (!ctx.cr0.eq) goto loc_82437CB4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8243837c
	if (!ctx.cr0.eq) goto loc_8243837C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243837c
	if (ctx.cr0.eq) goto loc_8243837C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x8243837c
	if (!ctx.cr6.eq) goto loc_8243837C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r16,r11,20
	ctx.r16.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, -1, ctx.xer);
	// beq cr6,0x824382dc
	if (ctx.cr6.eq) goto loc_824382DC;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82437C68;
	sub_821B9538(ctx, base);
	// cmplw cr6,r16,r3
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82437cc0
	if (!ctx.cr6.lt) goto loc_82437CC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438368
	if (!ctx.cr0.eq) goto loc_82438368;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438368
	if (ctx.cr0.eq) goto loc_82438368;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x82438368
	if (!ctx.cr6.eq) goto loc_82438368;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437cc0
	if (!ctx.cr0.eq) goto loc_82437CC0;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437cc0
	if (!ctx.cr0.eq) goto loc_82437CC0;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// b 0x82437cc0
	goto loc_82437CC0;
loc_82437CB4:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82437CBC;
	sub_821B9538(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
loc_82437CC0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824383a4
	if (!ctx.cr0.eq) goto loc_824383A4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824383a4
	if (ctx.cr0.eq) goto loc_824383A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x824383a4
	if (!ctx.cr6.eq) goto loc_824383A4;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_82437D0C:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 28);
	// addi r20,r17,24
	ctx.r20.s64 = ctx.r17.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824381d4
	if (!ctx.cr0.eq) goto loc_824381D4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824381d4
	if (ctx.cr0.eq) goto loc_824381D4;
loc_82437D28:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82437d44
	if (ctx.cr6.lt) goto loc_82437D44;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82437d48
	if (!ctx.cr6.gt) goto loc_82437D48;
loc_82437D44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82437D48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824381b8
	if (ctx.cr0.eq) goto loc_824381B8;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x82437d64
	if (ctx.cr6.lt) goto loc_82437D64;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82437d68
	if (!ctx.cr6.gt) goto loc_82437D68;
loc_82437D64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82437D68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824380f4
	if (!ctx.cr0.eq) goto loc_824380F4;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r11,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r10,28672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28672, ctx.xer);
	// beq cr6,0x82438248
	if (ctx.cr6.eq) goto loc_82438248;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82437f90
	if (ctx.cr6.eq) goto loc_82437F90;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82437f90
	if (ctx.cr6.eq) goto loc_82437F90;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437db8
	if (ctx.cr0.eq) goto loc_82437DB8;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82434f80
	ctx.lr = 0x82437DB4;
	sub_82434F80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82437DB8:
	// clrlwi. r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82437dd0
	if (ctx.cr0.eq) goto loc_82437DD0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435010
	ctx.lr = 0x82437DD0;
	sub_82435010(ctx, base);
loc_82437DD0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82437DDC;
	sub_821B9668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r12,-683
	ctx.r12.s64 = -683;
	// rlwinm r10,r11,16,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FF;
	// rlwinm r9,r11,16,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFE;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,-1365
	ctx.r12.s64 = -1365;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// bne cr6,0x82437e80
	if (!ctx.cr6.eq) goto loc_82437E80;
	// clrlwi. r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82437e38
	if (ctx.cr0.eq) goto loc_82437E38;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82437e34
	if (!ctx.cr6.eq) goto loc_82437E34;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82437e38
	if (ctx.cr6.eq) goto loc_82437E38;
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// li r8,1365
	ctx.r8.s64 = 1365;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82437e38
	if (ctx.cr6.eq) goto loc_82437E38;
loc_82437E34:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82437E38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82437e80
	if (!ctx.cr6.eq) goto loc_82437E80;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437e80
	if (!ctx.cr0.eq) goto loc_82437E80;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82437e74
	if (ctx.cr6.eq) goto loc_82437E74;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// rotlw r11,r9,r11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r11.u8 & 0x1F);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// nor r11,r9,r11
	ctx.r11.u64 = ~(ctx.r9.u64 | ctx.r11.u64);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82437E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437e80
	if (ctx.cr6.eq) goto loc_82437E80;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82437E80:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r25,1
	ctx.r25.s64 = 1;
	// bne 0x82437f64
	if (!ctx.cr0.eq) goto loc_82437F64;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437f60
	if (!ctx.cr0.eq) goto loc_82437F60;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82437f60
	if (ctx.cr0.eq) goto loc_82437F60;
loc_82437EAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82434628
	ctx.lr = 0x82437EB4;
	sub_82434628(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437f44
	if (ctx.cr0.eq) goto loc_82437F44;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82437f60
	if (ctx.cr6.gt) goto loc_82437F60;
	// lwz r31,4(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_82437ED0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82437f44
	if (ctx.cr6.eq) goto loc_82437F44;
	// lwz r30,16(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82437f38
	if (ctx.cr6.eq) goto loc_82437F38;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437efc
	if (ctx.cr0.eq) goto loc_82437EFC;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82437f00
	if (ctx.cr0.eq) goto loc_82437F00;
loc_82437EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82437F00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437f38
	if (ctx.cr0.eq) goto loc_82437F38;
	// rlwinm. r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82437f38
	if (ctx.cr0.lt) goto loc_82437F38;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82437f38
	if (ctx.cr6.gt) goto loc_82437F38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82434628
	ctx.lr = 0x82437F20;
	sub_82434628(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437f38
	if (ctx.cr0.eq) goto loc_82437F38;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82437f40
	if (ctx.cr6.gt) goto loc_82437F40;
loc_82437F38:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82437ed0
	goto loc_82437ED0;
loc_82437F40:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82437F44:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82437f60
	if (!ctx.cr0.eq) goto loc_82437F60;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437eac
	if (!ctx.cr6.eq) goto loc_82437EAC;
loc_82437F60:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82437F64:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x82437f8c
	if (ctx.cr6.eq) goto loc_82437F8C;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82437f8c
	if (!ctx.cr6.eq) goto loc_82437F8C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435060
	ctx.lr = 0x82437F84;
	sub_82435060(ctx, base);
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82437F8C:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82437F90:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// clrlwi r27,r11,20
	ctx.r27.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82438244
	if (!ctx.cr6.lt) goto loc_82438244;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82437FAC;
	sub_821B9668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82437fc4
	if (ctx.cr6.eq) goto loc_82437FC4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82438244
	if (!ctx.cr6.eq) goto loc_82438244;
loc_82437FC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// bl 0x82434540
	ctx.lr = 0x82437FD0;
	sub_82434540(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437fe0
	if (ctx.cr0.eq) goto loc_82437FE0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82437FE0:
	// lwz r31,8(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438020
	if (ctx.cr0.eq) goto loc_82438020;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438018
	if (ctx.cr0.eq) goto loc_82438018;
	// rlwinm r11,r31,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
loc_82437FF8:
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82438008
	if (ctx.cr6.eq) goto loc_82438008;
loc_82438004:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82438008:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82438058
	if (!ctx.cr0.eq) goto loc_82438058;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82438080
	goto loc_82438080;
loc_82438018:
	// rlwinm r23,r31,14,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
	// b 0x82438050
	goto loc_82438050;
loc_82438020:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824345d0
	ctx.lr = 0x82438028;
	sub_824345D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82438004
	if (!ctx.cr0.eq) goto loc_82438004;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82438004
	if (ctx.cr0.eq) goto loc_82438004;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8243804c
	if (ctx.cr0.eq) goto loc_8243804C;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// b 0x82437ff8
	goto loc_82437FF8;
loc_8243804C:
	// rlwinm r23,r11,9,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
loc_82438050:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82438008
	goto loc_82438008;
loc_82438058:
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82438078
	if (ctx.cr6.eq) goto loc_82438078;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82438078
	if (ctx.cr6.eq) goto loc_82438078;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8243807c
	if (!ctx.cr6.eq) goto loc_8243807C;
loc_82438078:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8243807C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82438080:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824381b8
	if (ctx.cr0.eq) goto loc_824381B8;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// bne cr6,0x82438094
	if (!ctx.cr6.eq) goto loc_82438094;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
loc_82438094:
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_82438098:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824381b8
	if (ctx.cr6.eq) goto loc_824381B8;
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824380ec
	if (ctx.cr6.eq) goto loc_824380EC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824380c4
	if (ctx.cr0.eq) goto loc_824380C4;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824380c8
	if (ctx.cr0.eq) goto loc_824380C8;
loc_824380C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824380C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824380ec
	if (ctx.cr0.eq) goto loc_824380EC;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824380ec
	if (!ctx.cr0.eq) goto loc_824380EC;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x824380ec
	if (!ctx.cr6.gt) goto loc_824380EC;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_824380EC:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82438098
	goto loc_82438098;
loc_824380F4:
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x82438108
	if (ctx.cr6.lt) goto loc_82438108;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8243810c
	if (!ctx.cr6.gt) goto loc_8243810C;
loc_82438108:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243810C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243811c
	if (!ctx.cr0.eq) goto loc_8243811C;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// bne cr6,0x82438248
	if (!ctx.cr6.eq) goto loc_82438248;
loc_8243811C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x8243815c
	if (ctx.cr6.eq) goto loc_8243815C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243815c
	if (ctx.cr0.eq) goto loc_8243815C;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82434f80
	ctx.lr = 0x82438144;
	sub_82434F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243815c
	if (ctx.cr0.eq) goto loc_8243815C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435010
	ctx.lr = 0x8243815C;
	sub_82435010(ctx, base);
loc_8243815C:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x82438188
	if (ctx.cr6.lt) goto loc_82438188;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x8243818c
	if (!ctx.cr6.gt) goto loc_8243818C;
loc_82438188:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8243818C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824381a0
	if (!ctx.cr0.eq) goto loc_824381A0;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824381a4
	if (!ctx.cr6.eq) goto loc_824381A4;
loc_824381A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824381A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824381b4
	if (!ctx.cr0.eq) goto loc_824381B4;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824381b8
	if (ctx.cr0.eq) goto loc_824381B8;
loc_824381B4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_824381B8:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824381d4
	if (!ctx.cr0.eq) goto loc_824381D4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437d28
	if (!ctx.cr6.eq) goto loc_82437D28;
loc_824381D4:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438248
	if (!ctx.cr0.eq) goto loc_82438248;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438248
	if (ctx.cr6.eq) goto loc_82438248;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438248
	if (!ctx.cr0.eq) goto loc_82438248;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82438248
	if (!ctx.cr0.eq) goto loc_82438248;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438248
	if (!ctx.cr0.eq) goto loc_82438248;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82438390
	if (!ctx.cr0.eq) goto loc_82438390;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82438390
	if (ctx.cr0.eq) goto loc_82438390;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16128, ctx.xer);
	// bne cr6,0x82438390
	if (!ctx.cr6.eq) goto loc_82438390;
	// lhz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438248
	if (!ctx.cr0.eq) goto loc_82438248;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// b 0x82437d0c
	goto loc_82437D0C;
loc_82438244:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82438248:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x824382b0
	if (ctx.cr6.eq) goto loc_824382B0;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824382b0
	if (ctx.cr0.eq) goto loc_824382B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9668
	ctx.lr = 0x82438264;
	sub_821B9668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824382b0
	if (!ctx.cr6.eq) goto loc_824382B0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82434f80
	ctx.lr = 0x82438298;
	sub_82434F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824382b0
	if (ctx.cr0.eq) goto loc_824382B0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435010
	ctx.lr = 0x824382B0;
	sub_82435010(ctx, base);
loc_824382B0:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x824382dc
	if (ctx.cr6.eq) goto loc_824382DC;
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824382cc
	if (!ctx.cr6.gt) goto loc_824382CC;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_824382CC:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82435060
	ctx.lr = 0x824382DC;
	sub_82435060(ctx, base);
loc_824382DC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r19,-1
	ctx.r19.s64 = -1;
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r18,104(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438340
	if (!ctx.cr0.eq) goto loc_82438340;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437974
	if (!ctx.cr6.eq) goto loc_82437974;
loc_82438318:
	// lwz r14,492(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r25,476(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_82438320:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824383b8
	if (ctx.cr6.eq) goto loc_824383B8;
	// lwz r10,740(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 740);
	// lwz r11,736(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 736);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824383bc
	goto loc_824383BC;
loc_82438340:
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// b 0x82438318
	goto loc_82438318;
loc_82438348:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438354;
	sub_824222F0(ctx, base);
loc_82438354:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824222f0
	ctx.lr = 0x82438368;
	sub_824222F0(ctx, base);
loc_82438368:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824222f0
	ctx.lr = 0x8243837C;
	sub_824222F0(ctx, base);
loc_8243837C:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824222f0
	ctx.lr = 0x82438390;
	sub_824222F0(ctx, base);
loc_82438390:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824222f0
	ctx.lr = 0x824383A4;
	sub_824222F0(ctx, base);
loc_824383A4:
	// rlwinm r11,r17,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824222f0
	ctx.lr = 0x824383B8;
	sub_824222F0(ctx, base);
loc_824383B8:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_824383BC:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824383dc
	if (ctx.cr6.eq) goto loc_824383DC;
	// lwz r10,764(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 764);
	// lwz r11,760(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 760);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824383e0
	goto loc_824383E0;
loc_824383DC:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_824383E0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82438e5c
	if (ctx.cr6.eq) goto loc_82438E5C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82112fa8
	ctx.lr = 0x824383F0;
	sub_82112FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9008
	ctx.lr = 0x824383FC;
	sub_821B9008(ctx, base);
	// lwz r11,568(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 568);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82438414
	goto loc_82438414;
loc_82438408:
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82438414:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82438408
	if (!ctx.cr6.eq) goto loc_82438408;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8241b478
	ctx.lr = 0x82438424;
	sub_8241B478(ctx, base);
	// lwz r31,568(r15)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r15.u32 + 568);
	// b 0x82438440
	goto loc_82438440;
loc_8243842C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8241bff8
	ctx.lr = 0x8243843C;
	sub_8241BFF8(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_82438440:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8243842c
	if (!ctx.cr6.eq) goto loc_8243842C;
	// lwz r11,756(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 756);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824384f4
	if (ctx.cr6.eq) goto loc_824384F4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,748(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 748);
	// bl 0x8241b498
	ctx.lr = 0x82438468;
	sub_8241B498(ctx, base);
	// lwz r11,744(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 744);
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8243848C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824384a8
	if (ctx.cr6.eq) goto loc_824384A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x824384ac
	if (!ctx.cr6.eq) goto loc_824384AC;
loc_824384A8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_824384AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824384f4
	if (!ctx.cr0.eq) goto loc_824384F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824be2b0
	ctx.lr = 0x824384BC;
	sub_824BE2B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824384d0
	if (!ctx.cr6.eq) goto loc_824384D0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_824384D0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824384e4
	if (!ctx.cr6.eq) goto loc_824384E4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_824384E4:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8241b4a0
	ctx.lr = 0x824384EC;
	sub_8241B4A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8243848c
	goto loc_8243848C;
loc_824384F4:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438560
	if (ctx.cr6.eq) goto loc_82438560;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// divw r4,r11,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// bl 0x8241b480
	ctx.lr = 0x82438514;
	sub_8241B480(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r31,12(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 12);
	// b 0x82438558
	goto loc_82438558;
loc_82438520:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq 0x8243854c
	if (ctx.cr0.eq) goto loc_8243854C;
	// bl 0x8241b488
	ctx.lr = 0x82438548;
	sub_8241B488(ctx, base);
	// b 0x82438550
	goto loc_82438550;
loc_8243854C:
	// bl 0x8241b490
	ctx.lr = 0x82438550;
	sub_8241B490(ctx, base);
loc_82438550:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82438558:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82438520
	if (ctx.cr6.lt) goto loc_82438520;
loc_82438560:
	// lwz r29,16(r15)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241b448
	ctx.lr = 0x82438570;
	sub_8241B448(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824385dc
	if (ctx.cr6.eq) goto loc_824385DC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82438580:
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8243859c
	if (!ctx.cr6.eq) goto loc_8243859C;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_8243859C:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824385b0
	if (ctx.cr6.eq) goto loc_824385B0;
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x824385b4
	goto loc_824385B4;
loc_824385B0:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
loc_824385B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8241bff0
	ctx.lr = 0x824385CC;
	sub_8241BFF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82438580
	if (ctx.cr6.lt) goto loc_82438580;
loc_824385DC:
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// b 0x82438668
	goto loc_82438668;
loc_824385E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,114
	ctx.r6.s64 = 114;
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82438604
	if (ctx.cr6.eq) goto loc_82438604;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82438664
	if (!ctx.cr6.eq) goto loc_82438664;
	// li r6,99
	ctx.r6.s64 = 99;
loc_82438604:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// beq 0x82438618
	if (ctx.cr0.eq) goto loc_82438618;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82438634
	goto loc_82438634;
loc_82438618:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82438628
	if (ctx.cr0.eq) goto loc_82438628;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82438634
	goto loc_82438634;
loc_82438628:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82438634:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,30,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FC;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r8,r4,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// rlwinm r5,r4,17,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x3FFF;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// bl 0x8241b450
	ctx.lr = 0x82438664;
	sub_8241B450(ctx, base);
loc_82438664:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_82438668:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824385e4
	if (ctx.cr6.lt) goto loc_824385E4;
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438918
	if (ctx.cr0.eq) goto loc_82438918;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438910
	if (ctx.cr6.eq) goto loc_82438910;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r11,r11,1280
	ctx.r11.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438910
	if (ctx.cr0.eq) goto loc_82438910;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,556(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 556);
	// bl 0x8241b4b0
	ctx.lr = 0x824386A4;
	sub_8241B4B0(ctx, base);
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82438918
	if (ctx.cr6.eq) goto loc_82438918;
loc_824386B0:
	// cmplw cr6,r17,r25
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x824386c4
	if (ctx.cr6.eq) goto loc_824386C4;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82438918
	if (!ctx.cr0.eq) goto loc_82438918;
loc_824386C4:
	// lwz r11,68(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824388dc
	if (ctx.cr0.eq) goto loc_824388DC;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 28);
	// addi r31,r17,24
	ctx.r31.s64 = ctx.r17.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824386e8
	if (ctx.cr0.eq) goto loc_824386E8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x824386f4
	goto loc_824386F4;
loc_824386E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_824386F4:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11392, ctx.xer);
	// bne cr6,0x8243871c
	if (!ctx.cr6.eq) goto loc_8243871C;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438798
	if (!ctx.cr0.eq) goto loc_82438798;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_8243871C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438798
	if (ctx.cr6.eq) goto loc_82438798;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x82438798
	if (!ctx.cr6.eq) goto loc_82438798;
	// lwz r9,12(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
loc_82438738:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82438904
	if (ctx.cr6.eq) goto loc_82438904;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243877c
	if (!ctx.cr0.eq) goto loc_8243877C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438774
	if (ctx.cr6.eq) goto loc_82438774;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438774
	if (ctx.cr6.eq) goto loc_82438774;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243877c
	if (!ctx.cr0.eq) goto loc_8243877C;
loc_82438774:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82438738
	goto loc_82438738;
loc_8243877C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438904
	if (ctx.cr6.eq) goto loc_82438904;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi r28,r11,20
	ctx.r28.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x824352b0
	ctx.lr = 0x82438790;
	sub_824352B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x824387a8
	goto loc_824387A8;
loc_82438798:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824352b0
	ctx.lr = 0x824387A0;
	sub_824352B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_824387A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824388dc
	if (!ctx.cr0.eq) goto loc_824388DC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824388dc
	if (ctx.cr0.eq) goto loc_824388DC;
loc_824387C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82438818
	if (!ctx.cr6.eq) goto loc_82438818;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x824387EC;
	sub_824348C0(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x82438818
	if (!ctx.cr6.eq) goto loc_82438818;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82438818
	if (!ctx.cr6.eq) goto loc_82438818;
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_82438818:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438834
	if (!ctx.cr0.eq) goto loc_82438834;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824387c8
	if (!ctx.cr6.eq) goto loc_824387C8;
loc_82438834:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824388dc
	if (ctx.cr6.eq) goto loc_824388DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc0f0
	ctx.lr = 0x82438848;
	sub_824BC0F0(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x824388dc
	if (!ctx.cr6.eq) goto loc_824388DC;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824388dc
	if (!ctx.cr6.eq) goto loc_824388DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823702e0
	ctx.lr = 0x82438870;
	sub_823702E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824388dc
	if (ctx.cr0.eq) goto loc_824388DC;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82412440
	ctx.lr = 0x82438884;
	sub_82412440(ctx, base);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc0f0
	ctx.lr = 0x82438894;
	sub_824BC0F0(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824bc0f0
	ctx.lr = 0x824388A8;
	sub_824BC0F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// bl 0x8241c010
	ctx.lr = 0x824388DC;
	sub_8241C010(ctx, base);
loc_824388DC:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824388fc
	if (!ctx.cr0.eq) goto loc_824388FC;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824386b0
	if (!ctx.cr6.eq) goto loc_824386B0;
	// b 0x82438918
	goto loc_82438918;
loc_824388FC:
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// b 0x82438918
	goto loc_82438918;
loc_82438904:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438910;
	sub_824222F0(ctx, base);
loc_82438910:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82416808
	ctx.lr = 0x82438918;
	sub_82416808(ctx, base);
loc_82438918:
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438e5c
	if (ctx.cr0.eq) goto loc_82438E5C;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438e54
	if (ctx.cr6.eq) goto loc_82438E54;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438e54
	if (ctx.cr0.eq) goto loc_82438E54;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,560(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 560);
	// bl 0x8241b4b8
	ctx.lr = 0x82438948;
	sub_8241B4B8(ctx, base);
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// b 0x82438e10
	goto loc_82438E10;
loc_82438954:
	// cmplw cr6,r17,r25
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82438968
	if (ctx.cr6.eq) goto loc_82438968;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82438e5c
	if (!ctx.cr0.eq) goto loc_82438E5C;
loc_82438968:
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438df8
	if (ctx.cr0.eq) goto loc_82438DF8;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 28);
	// beq 0x82438a24
	if (ctx.cr0.eq) goto loc_82438A24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438e24
	if (!ctx.cr0.eq) goto loc_82438E24;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438e24
	if (ctx.cr0.eq) goto loc_82438E24;
loc_8243899C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12032, ctx.xer);
	// bne cr6,0x824389d0
	if (!ctx.cr6.eq) goto loc_824389D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x824389C0;
	sub_824348C0(ctx, base);
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824389ec
	if (!ctx.cr6.eq) goto loc_824389EC;
loc_824389D0:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438e24
	if (!ctx.cr0.eq) goto loc_82438E24;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243899c
	if (!ctx.cr6.eq) goto loc_8243899C;
loc_824389EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82438e24
	if (ctx.cr6.eq) goto loc_82438E24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82438A08;
	sub_824348C0(ctx, base);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi r30,r11,20
	ctx.r30.u64 = ctx.r11.u32 & 0xFFF;
	// lwz r31,-8(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r25,-4(r9)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// b 0x82438ad8
	goto loc_82438AD8;
loc_82438A24:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438e30
	if (!ctx.cr0.eq) goto loc_82438E30;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438e30
	if (ctx.cr0.eq) goto loc_82438E30;
loc_82438A38:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82438a80
	if (!ctx.cr6.eq) goto loc_82438A80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82438A5C;
	sub_824348C0(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82438a80
	if (!ctx.cr6.eq) goto loc_82438A80;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82438a9c
	if (ctx.cr6.eq) goto loc_82438A9C;
loc_82438A80:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438e30
	if (!ctx.cr0.eq) goto loc_82438E30;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82438a38
	if (!ctx.cr6.eq) goto loc_82438A38;
loc_82438A9C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82438e30
	if (ctx.cr6.eq) goto loc_82438E30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82438AB8;
	sub_824348C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r31,-4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r25,-8(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x824352b0
	ctx.lr = 0x82438AD4;
	sub_824352B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82438AD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82438df4
	if (ctx.cr6.eq) goto loc_82438DF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc0f0
	ctx.lr = 0x82438AEC;
	sub_824BC0F0(ctx, base);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x82438df4
	if (!ctx.cr6.eq) goto loc_82438DF4;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x82438b18
	if (ctx.cr6.eq) goto loc_82438B18;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x82438df4
	if (!ctx.cr6.eq) goto loc_82438DF4;
loc_82438B18:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x824bc1f8
	ctx.lr = 0x82438B24;
	sub_824BC1F8(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc1f8
	ctx.lr = 0x82438B30;
	sub_824BC1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824c7208
	ctx.lr = 0x82438B44;
	sub_824C7208(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824c72c8
	ctx.lr = 0x82438B4C;
	sub_824C72C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824bc150
	ctx.lr = 0x82438B60;
	sub_824BC150(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc150
	ctx.lr = 0x82438B74;
	sub_824BC150(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc1f8
	ctx.lr = 0x82438B80;
	sub_824BC1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824bc1d0
	ctx.lr = 0x82438B90;
	sub_824BC1D0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82438dec
	if (!ctx.cr6.eq) goto loc_82438DEC;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8241b4c0
	ctx.lr = 0x82438BB0;
	sub_8241B4C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bl 0x824c72c8
	ctx.lr = 0x82438BBC;
	sub_824C72C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82438dec
	if (ctx.cr0.eq) goto loc_82438DEC;
loc_82438BC4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x824c72c8
	ctx.lr = 0x82438BD0;
	sub_824C72C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82438bc4
	if (!ctx.cr0.eq) goto loc_82438BC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82438dec
	if (ctx.cr6.eq) goto loc_82438DEC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8241b4c8
	ctx.lr = 0x82438BF0;
	sub_8241B4C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824c7408
	ctx.lr = 0x82438BFC;
	sub_824C7408(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824c72c8
	ctx.lr = 0x82438C04;
	sub_824C72C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x824c72c8
	ctx.lr = 0x82438C10;
	sub_824C72C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82438dec
	if (ctx.cr0.eq) goto loc_82438DEC;
loc_82438C18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82438e3c
	if (ctx.cr6.eq) goto loc_82438E3C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc118
	ctx.lr = 0x82438C30;
	sub_824BC118(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82438c50
	if (ctx.cr6.eq) goto loc_82438C50;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824bc1a8
	ctx.lr = 0x82438C48;
	sub_824BC1A8(ctx, base);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82438c54
	goto loc_82438C54;
loc_82438C50:
	// li r6,55
	ctx.r6.s64 = 55;
loc_82438C54:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8241b4d0
	ctx.lr = 0x82438C6C;
	sub_8241B4D0(ctx, base);
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438dbc
	if (ctx.cr0.eq) goto loc_82438DBC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r23,108(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x8241b4d8
	ctx.lr = 0x82438CA0;
	sub_8241B4D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82438dbc
	if (ctx.cr6.eq) goto loc_82438DBC;
loc_82438CAC:
	// lwz r29,0(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
loc_82438CB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82438e48
	if (ctx.cr6.eq) goto loc_82438E48;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438ccc
	if (!ctx.cr0.eq) goto loc_82438CCC;
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82438cb0
	goto loc_82438CB0;
loc_82438CCC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438d1c
	if (ctx.cr6.eq) goto loc_82438D1C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82438CDC:
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r7,r10,22
	ctx.r7.u64 = ctx.r10.u32 & 0x3FF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241b4e0
	ctx.lr = 0x82438D00;
	sub_8241B4E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82438cdc
	if (ctx.cr6.lt) goto loc_82438CDC;
loc_82438D1C:
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_82438D20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82438db0
	if (ctx.cr6.eq) goto loc_82438DB0;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82438da0
	if (ctx.cr6.eq) goto loc_82438DA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438d4c
	if (!ctx.cr0.eq) goto loc_82438D4C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82438d50
	if (ctx.cr0.eq) goto loc_82438D50;
loc_82438D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82438D50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438da0
	if (ctx.cr0.eq) goto loc_82438DA0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82438da0
	if (!ctx.cr6.eq) goto loc_82438DA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824348c0
	ctx.lr = 0x82438D7C;
	sub_824348C0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82438da0
	if (!ctx.cr6.eq) goto loc_82438DA0;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82438da8
	if (ctx.cr6.eq) goto loc_82438DA8;
loc_82438DA0:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82438d20
	goto loc_82438D20;
loc_82438DA8:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x82438db4
	goto loc_82438DB4;
loc_82438DB0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82438DB4:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82438cac
	if (ctx.cr6.lt) goto loc_82438CAC;
loc_82438DBC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x824c72c8
	ctx.lr = 0x82438DC8;
	sub_824C72C8(ctx, base);
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82438c18
	if (!ctx.cr0.eq) goto loc_82438C18;
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r18,104(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r14,492(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
loc_82438DEC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824bdee8
	ctx.lr = 0x82438DF4;
	sub_824BDEE8(ctx, base);
loc_82438DF4:
	// lwz r25,476(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_82438DF8:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82438e1c
	if (!ctx.cr0.eq) goto loc_82438E1C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82438E10:
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// bne cr6,0x82438954
	if (!ctx.cr6.eq) goto loc_82438954;
	// b 0x82438e5c
	goto loc_82438E5C;
loc_82438E1C:
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// b 0x82438e5c
	goto loc_82438E5C;
loc_82438E24:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438E30;
	sub_824222F0(ctx, base);
loc_82438E30:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438E3C;
	sub_824222F0(ctx, base);
loc_82438E3C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438E48;
	sub_824222F0(ctx, base);
loc_82438E48:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x824222f0
	ctx.lr = 0x82438E54;
	sub_824222F0(ctx, base);
loc_82438E54:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82416818
	ctx.lr = 0x82438E5C;
	sub_82416818(ctx, base);
loc_82438E5C:
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82438e74
	if (ctx.cr0.eq) goto loc_82438E74;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x82438e78
	if (ctx.cr0.eq) goto loc_82438E78;
loc_82438E74:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82438E78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438eac
	if (ctx.cr0.eq) goto loc_82438EAC;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b8fa8
	ctx.lr = 0x82438E88;
	sub_821B8FA8(ctx, base);
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438eac
	if (ctx.cr6.eq) goto loc_82438EAC;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + 768);
	// bl 0x821b9538
	ctx.lr = 0x82438E9C;
	sub_821B9538(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,16(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 16);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x824167f8
	ctx.lr = 0x82438EAC;
	sub_824167F8(ctx, base);
loc_82438EAC:
	// stw r18,8(r14)
	REX_STORE_U32(ctx.r14.u32 + 8, ctx.r18.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r21,12(r14)
	REX_STORE_U32(ctx.r14.u32 + 12, ctx.r21.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82204280
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252ABB8) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x8252ABD8;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

DEFINE_REX_FUNC(sub_82533FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204268
	ctx.lr = 0x82533FA8;
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
	ctx.lr = 0x82533FC8;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x82533fec
	if (ctx.cr0.eq) goto loc_82533FEC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82525230
	ctx.lr = 0x82533FE8;
	sub_82525230(ctx, base);
	// b 0x82533ff0
	goto loc_82533FF0;
loc_82533FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82533FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822042b8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82534A70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x82534A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82534b80
	if (ctx.cr6.eq) goto loc_82534B80;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 1456);
	// bl 0x824ec9c0
	ctx.lr = 0x82534AA8;
	sub_824EC9C0(ctx, base);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,29764(r11)
	REX_STORE_U32(ctx.r11.u32 + 29764, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,1456(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82534AC4;
	sub_824EC9C0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x82534ae4
	if (ctx.cr0.eq) goto loc_82534AE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x82506258
	ctx.lr = 0x82534AE0;
	sub_82506258(ctx, base);
	// b 0x82534ae8
	goto loc_82534AE8;
loc_82534AE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82534AE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82534b5c
	if (!ctx.cr6.gt) goto loc_82534B5C;
loc_82534AFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ec9c0
	ctx.lr = 0x82534B10;
	sub_824EC9C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82534b38
	if (ctx.cr0.eq) goto loc_82534B38;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82534878
	ctx.lr = 0x82534B30;
	sub_82534878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82534b3c
	goto loc_82534B3C;
loc_82534B38:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82534B3C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82523ef0
	ctx.lr = 0x82534B48;
	sub_82523EF0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82534afc
	if (ctx.cr6.lt) goto loc_82534AFC;
loc_82534B5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x82506e38
	ctx.lr = 0x82534B7C;
	sub_82506E38(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82534B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8253D400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,144
	ctx.r8.s64 = 144;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r2,r5,r6
	ctx.r2.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,240
	ctx.r10.s64 = 240;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v12,r2,r6
	ea = (ctx.r2.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,288
	ctx.r11.s64 = 288;
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v14,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// lvx128 v15,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v17,r2,r11
	ea = (ctx.r2.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v18,r2,r12
	ea = (ctx.r2.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825611E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8220426c
	ctx.lr = 0x825611E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v9,15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v8,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vsubshs v2,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x82561398
	if (!ctx.cr6.eq) goto loc_82561398;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x82561580
	if (!ctx.cr6.gt) goto loc_82561580;
	// li r9,0
	ctx.r9.s64 = 0;
loc_825612AC:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v1,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v29,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v24,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v21,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v20,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vadduhm v14,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v16,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v29,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v28,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v1,v16
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vsubshs v23,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vadduhm v24,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v21,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v20,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vadduhm v19,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v18,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v25,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v16,v23,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v14,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vsrah v1,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x825612ac
	if (ctx.cr6.lt) goto loc_825612AC;
	// b 0x82561580
	goto loc_82561580;
loc_82561398:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x82561580
	if (!ctx.cr6.gt) goto loc_82561580;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_82561424:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v21,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v20,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v25,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vor v30,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v20,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v23,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v26,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v24,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubshs v25,v28,v23
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v20,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v23,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v19,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v18,v0,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v17,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v15,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v16,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v24,v29,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v23,v25,v18
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubshs v22,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v21,v27,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v17,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v18,v16,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v17,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v15,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// stvx128 v15,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x82561424
	if (ctx.cr6.lt) goto loc_82561424;
loc_82561580:
	// li r5,0
	ctx.r5.s64 = 0;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82560640
	ctx.lr = 0x82561594;
	sub_82560640(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822042bc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82571AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82204260
	ctx.lr = 0x82571AB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r10,668(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r28,r10,30
	ctx.r28.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// lbz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r26.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82571b1c
	if (ctx.cr6.lt) goto loc_82571B1C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x822dc648
	ctx.lr = 0x82571B14;
	sub_822DC648(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82571b7c
	goto loc_82571B7C;
loc_82571B1C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82571b78
	if (!ctx.cr6.gt) goto loc_82571B78;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82571B28:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r29,r3,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r29,r7
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r29,r10,r4
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r26,r29,r5
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// sthx r8,r29,r31
	REX_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x82571b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82571B28;
loc_82571B78:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_82571B7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// bne cr6,0x82571bec
	if (!ctx.cr6.eq) goto loc_82571BEC;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
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
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
loc_82571BEC:
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8255f9c0
	ctx.lr = 0x82571C04;
	sub_8255F9C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822042b0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258AB48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x82203320
	sub_82203320(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258ABE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x82203320
	sub_82203320(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258AC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// addi r8,r11,9552
	ctx.r8.s64 = ctx.r11.s64 + 9552;
	// addi r7,r10,-22168
	ctx.r7.s64 = ctx.r10.s64 + -22168;
	// lfs f0,-17512(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-22168(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -22168, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258AE18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,29000
	ctx.r11.s64 = ctx.r11.s64 + 29000;
	// addi r10,r10,1840
	ctx.r10.s64 = ctx.r10.s64 + 1840;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// addi r9,r9,-17316
	ctx.r9.s64 = ctx.r9.s64 + -17316;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258B598) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,18020
	ctx.r11.s64 = ctx.r11.s64 + 18020;
	// stw r11,21804(r10)
	REX_STORE_U32(ctx.r10.u32 + 21804, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258B658) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r11,r11,18020
	ctx.r11.s64 = ctx.r11.s64 + 18020;
	// stw r11,-19420(r10)
	REX_STORE_U32(ctx.r10.u32 + -19420, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258B760) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r11,r11,18020
	ctx.r11.s64 = ctx.r11.s64 + 18020;
	// stw r11,-16936(r10)
	REX_STORE_U32(ctx.r10.u32 + -16936, ctx.r11.u32);
	// blr 
	return;
}

