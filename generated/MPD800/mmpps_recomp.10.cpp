#include "mmpps_funcs.10.h"

DEFINE_REX_FUNC(sub_899163F8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,5754(r10)
	REX_STORE_U8(ctx.r10.u32 + 5754, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916530) {
	REX_FUNC_PROLOGUE();
	// b 0x89964d10
	sub_89964D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89916650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89916658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lbz r9,587(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 587);
	// addi r3,r4,12080
	ctx.r3.s64 = ctx.r4.s64 + 12080;
	// lbz r11,8418(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 8418);
	// lwz r10,7924(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 7924);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,8418(r6)
	REX_STORE_U8(ctx.r6.u32 + 8418, ctx.r11.u8);
	// stb r31,587(r7)
	REX_STORE_U8(ctx.r7.u32 + 587, ctx.r31.u8);
	// stwx r10,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x8991acf0
	ctx.lr = 0x899166A0;
	sub_8991ACF0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x899166A4;
	sub_89917740(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x899166A8;
	sub_89918AD0(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r11,9527(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9527);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x899166e0
	if (ctx.cr6.gt) goto loc_899166E0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,23312
	ctx.r11.s64 = ctx.r9.s64 + 23312;
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// li r5,11
	ctx.r5.s64 = 11;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r4,37
	ctx.r4.s64 = 37;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89931d78
	ctx.lr = 0x899166E0;
	sub_89931D78(ctx, base);
loc_899166E0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x899168ec
	if (ctx.cr6.gt) goto loc_899168EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89916750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89916750;
	// bdzf 4*cr6+eq,0x89916788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89916788;
	// bdzf 4*cr6+eq,0x899167c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899167C0;
	// bdzf 4*cr6+eq,0x899167f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899167F8;
	// bdzf 4*cr6+eq,0x89916830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89916830;
	// bne cr6,0x89916888
	if (!ctx.cr6.eq) goto loc_89916888;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x89916720;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89916730
	if (ctx.cr6.eq) goto loc_89916730;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8994c368
	ctx.lr = 0x89916730;
	sub_8994C368(ctx, base);
loc_89916730:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x89916738;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8994c368
	ctx.lr = 0x89916748;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89916750:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x89916758;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89916768
	if (ctx.cr6.eq) goto loc_89916768;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8994c368
	ctx.lr = 0x89916768;
	sub_8994C368(ctx, base);
loc_89916768:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x89916770;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8994c368
	ctx.lr = 0x89916780;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89916788:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x89916790;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899167a0
	if (ctx.cr6.eq) goto loc_899167A0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8994c368
	ctx.lr = 0x899167A0;
	sub_8994C368(ctx, base);
loc_899167A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x899167A8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8994c368
	ctx.lr = 0x899167B8;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899167C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x899167C8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899167d8
	if (ctx.cr6.eq) goto loc_899167D8;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8994c368
	ctx.lr = 0x899167D8;
	sub_8994C368(ctx, base);
loc_899167D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x899167E0;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8994c368
	ctx.lr = 0x899167F0;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899167F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x89916800;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89916810
	if (ctx.cr6.eq) goto loc_89916810;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8994c368
	ctx.lr = 0x89916810;
	sub_8994C368(ctx, base);
loc_89916810:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x89916818;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8994c368
	ctx.lr = 0x89916828;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89916830:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r31,r11,25128
	ctx.r31.s64 = ctx.r11.s64 + 25128;
	// lbz r11,658(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 658);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8991685c
	if (!ctx.cr6.eq) goto loc_8991685C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8994c298
	ctx.lr = 0x8991684C;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8991685c
	if (ctx.cr6.eq) goto loc_8991685C;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8994c368
	ctx.lr = 0x8991685C;
	sub_8994C368(ctx, base);
loc_8991685C:
	// lbz r11,1354(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1354);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x899168ec
	if (!ctx.cr6.eq) goto loc_899168EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8994c298
	ctx.lr = 0x89916870;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168ec
	if (ctx.cr6.eq) goto loc_899168EC;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8994c368
	ctx.lr = 0x89916880;
	sub_8994C368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89916888:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// lis r28,-30276
	ctx.r28.s64 = -1984167936;
	// addi r31,r29,658
	ctx.r31.s64 = ctx.r29.s64 + 658;
loc_8991689C:
	// lwz r11,-658(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -658);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899168d8
	if (ctx.cr6.eq) goto loc_899168D8;
	// lbz r10,32018(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 32018);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x899168d8
	if (!ctx.cr6.eq) goto loc_899168D8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x899168d8
	if (!ctx.cr6.eq) goto loc_899168D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x899168C8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899168d8
	if (ctx.cr6.eq) goto loc_899168D8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8994c368
	ctx.lr = 0x899168D8;
	sub_8994C368(ctx, base);
loc_899168D8:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,2050
	ctx.r11.s64 = ctx.r29.s64 + 2050;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991689c
	if (ctx.cr6.lt) goto loc_8991689C;
loc_899168EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89918C98) {
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
	// addi r31,r10,9656
	ctx.r31.s64 = ctx.r10.s64 + 9656;
	// mulli r30,r11,92
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lwzx r4,r30,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x89934720
	ctx.lr = 0x89918CD0;
	sub_89934720(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_89918E70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89918F48) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// addi r11,r11,13480
	ctx.r11.s64 = ctx.r11.s64 + 13480;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// ori r4,r7,32896
	ctx.r4.u64 = ctx.r7.u64 | 32896;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r10,78(r3)
	REX_STORE_U16(ctx.r3.u32 + 78, ctx.r10.u16);
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r6,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89918FE0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89918FE8;
	__savegprlr_29(ctx, base);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,4176
	ctx.r30.s64 = ctx.r11.s64 + 4176;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lhz r29,584(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 584);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// addi r6,r10,8016
	ctx.r6.s64 = ctx.r10.s64 + 8016;
loc_89919014:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8991906c
	if (!ctx.cr6.gt) goto loc_8991906C;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_89919024:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89919064
	if (ctx.cr6.eq) goto loc_89919064;
	// lbz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 96);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r7,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u16);
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_89919064:
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// bdnz 0x89919024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89919024;
loc_8991906C:
	// addi r31,r31,1600
	ctx.r31.s64 = ctx.r31.s64 + 1600;
	// addi r11,r30,3200
	ctx.r11.s64 = ctx.r30.s64 + 3200;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89919014
	if (ctx.cr6.lt) goto loc_89919014;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89919890;
	__savegprlr_27(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r10,26952
	ctx.r10.s64 = ctx.r10.s64 + 26952;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// addi r28,r11,27812
	ctx.r28.s64 = ctx.r11.s64 + 27812;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r30,3356(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 3356);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r8,r10,8160
	ctx.r8.s64 = ctx.r10.s64 + 8160;
	// addi r7,r11,21760
	ctx.r7.s64 = ctx.r11.s64 + 21760;
loc_899198C8:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919948
	if (ctx.cr6.eq) goto loc_89919948;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_899198DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8991993c
	if (ctx.cr6.eq) goto loc_8991993C;
	// lbz r10,79(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// subfc r10,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subfze r10,r6
	temp.u8 = ~ctx.r6.u32 + ctx.xer.ca < ~ctx.r6.u32;
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8991990c
	if (ctx.cr6.lt) goto loc_8991990C;
	// bne cr6,0x8991993c
	if (!ctx.cr6.eq) goto loc_8991993C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8991993c
	goto loc_8991993C;
loc_8991990C:
	// lbz r10,79(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// rotlwi r27,r10,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r10,9
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 9);
	// lhzx r10,r27,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r8.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lbz r9,79(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
loc_8991993C:
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x899198dc
	if (!ctx.cr6.eq) goto loc_899198DC;
loc_89919948:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899198c8
	if (ctx.cr6.lt) goto loc_899198C8;
	// stw r30,3356(r29)
	REX_STORE_U32(ctx.r29.u32 + 3356, ctx.r30.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919E68) {
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
	// bgt cr6,0x89919f64
	if (ctx.cr6.gt) goto loc_89919F64;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,-9220(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x89919f64
	if (ctx.cr6.gt) goto loc_89919F64;
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
	// beq cr6,0x89919f08
	if (ctx.cr6.eq) goto loc_89919F08;
	// mulli r10,r11,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bge cr6,0x89919f08
	if (!ctx.cr6.lt) goto loc_89919F08;
loc_89919ED0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89919ef8
	if (!ctx.cr6.eq) goto loc_89919EF8;
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
	// beq cr6,0x89919f74
	if (ctx.cr6.eq) goto loc_89919F74;
loc_89919EF8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x89919ed0
	if (ctx.cr6.lt) goto loc_89919ED0;
loc_89919F08:
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhz r11,9524(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 9524);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x89919f64
	if (ctx.cr6.eq) goto loc_89919F64;
	// mulli r10,r11,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bge cr6,0x89919f64
	if (!ctx.cr6.lt) goto loc_89919F64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89919F2C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89919f54
	if (ctx.cr6.eq) goto loc_89919F54;
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
	// beq cr6,0x89919f8c
	if (ctx.cr6.eq) goto loc_89919F8C;
loc_89919F54:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x89919f2c
	if (ctx.cr6.lt) goto loc_89919F2C;
loc_89919F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89919F74:
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
loc_89919F8C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// sth r3,9532(r30)
	REX_STORE_U16(ctx.r30.u32 + 9532, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,9524(r31)
	REX_STORE_U16(ctx.r31.u32 + 9524, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991AB58) {
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
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991abb0
	if (ctx.cr6.eq) goto loc_8991ABB0;
loc_8991AB74:
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991abb0
	if (ctx.cr6.eq) goto loc_8991ABB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991abb0
	if (ctx.cr6.eq) goto loc_8991ABB0;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8991abb0
	if (!ctx.cr6.eq) goto loc_8991ABB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8991ab74
	if (!ctx.cr6.eq) goto loc_8991AB74;
loc_8991ABB0:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8991ABD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,12608(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 12608);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,12608(r6)
	REX_STORE_U16(ctx.r6.u32 + 12608, ctx.r5.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B7F8) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lhzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// srawi r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991BA70) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r10,12800
	ctx.r9.s64 = ctx.r10.s64 + 12800;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8991BA88:
	// lhz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 148);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991baf0
	if (ctx.cr6.eq) goto loc_8991BAF0;
	// lhz r7,154(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 154);
	// lhz r6,154(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 154);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8991baf0
	if (!ctx.cr6.eq) goto loc_8991BAF0;
	// rlwinm r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991ba88
	if (!ctx.cr6.eq) goto loc_8991BA88;
	// lhz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991baf0
	if (ctx.cr6.eq) goto loc_8991BAF0;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8991bae8
	if (ctx.cr6.eq) goto loc_8991BAE8;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// lbz r9,156(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 156);
	// stb r9,156(r8)
	REX_STORE_U8(ctx.r8.u32 + 156, ctx.r9.u8);
loc_8991BAE8:
	// lhz r3,148(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 148);
	// blr 
	return;
loc_8991BAF0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991C468) {
	REX_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8991c1b8
	sub_8991C1B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C470) {
	REX_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8991c1b8
	sub_8991C1B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C478) {
	REX_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8991c340
	sub_8991C340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C480) {
	REX_FUNC_PROLOGUE();
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8991c340
	sub_8991C340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C500) {
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
	// li r4,3
	ctx.r4.s64 = 3;
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
	ctx.lr = 0x8991C554;
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

DEFINE_REX_FUNC(sub_8991C8B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8991C8C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r3,374(r1)
	REX_STORE_U16(ctx.r1.u32 + 374, ctx.r3.u16);
	// lis r8,-30318
	ctx.r8.s64 = -1986920448;
	// lis r7,-30318
	ctx.r7.s64 = -1986920448;
	// lis r6,-30318
	ctx.r6.s64 = -1986920448;
	// lis r5,-30318
	ctx.r5.s64 = -1986920448;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r8,-13496
	ctx.r8.s64 = ctx.r8.s64 + -13496;
	// addi r7,r7,-13488
	ctx.r7.s64 = ctx.r7.s64 + -13488;
	// addi r6,r6,-13296
	ctx.r6.s64 = ctx.r6.s64 + -13296;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r5,-13136
	ctx.r5.s64 = ctx.r5.s64 + -13136;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r10,-30318
	ctx.r10.s64 = -1986920448;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r4,-30318
	ctx.r4.s64 = -1986920448;
	// lis r31,-30318
	ctx.r31.s64 = -1986920448;
	// lis r29,-30318
	ctx.r29.s64 = -1986920448;
	// lis r28,-30318
	ctx.r28.s64 = -1986920448;
	// lis r27,-30318
	ctx.r27.s64 = -1986920448;
	// addi r10,r10,-12312
	ctx.r10.s64 = ctx.r10.s64 + -12312;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// addi r4,r4,-12736
	ctx.r4.s64 = ctx.r4.s64 + -12736;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r31,-11992
	ctx.r8.s64 = ctx.r31.s64 + -11992;
	// addi r7,r29,-11928
	ctx.r7.s64 = ctx.r29.s64 + -11928;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r6,r28,-11872
	ctx.r6.s64 = ctx.r28.s64 + -11872;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r27,-11832
	ctx.r5.s64 = ctx.r27.s64 + -11832;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r25,-30318
	ctx.r25.s64 = -1986920448;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r26,-30318
	ctx.r26.s64 = -1986920448;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// lis r24,-30318
	ctx.r24.s64 = -1986920448;
	// lis r23,-30318
	ctx.r23.s64 = -1986920448;
	// lis r22,-30318
	ctx.r22.s64 = -1986920448;
	// lis r21,-30318
	ctx.r21.s64 = -1986920448;
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// addi r10,r25,-11712
	ctx.r10.s64 = ctx.r25.s64 + -11712;
	// addi r4,r26,-11792
	ctx.r4.s64 = ctx.r26.s64 + -11792;
	// addi r8,r24,-11896
	ctx.r8.s64 = ctx.r24.s64 + -11896;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r7,r23,-11704
	ctx.r7.s64 = ctx.r23.s64 + -11704;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r6,r22,-21512
	ctx.r6.s64 = ctx.r22.s64 + -21512;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r5,r21,-21408
	ctx.r5.s64 = ctx.r21.s64 + -21408;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lis r19,-30318
	ctx.r19.s64 = -1986920448;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lis r20,-30318
	ctx.r20.s64 = -1986920448;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r18,-30318
	ctx.r18.s64 = -1986920448;
	// lhzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// lis r17,-30318
	ctx.r17.s64 = -1986920448;
	// lis r16,-30318
	ctx.r16.s64 = -1986920448;
	// lis r15,-30318
	ctx.r15.s64 = -1986920448;
	// addi r10,r19,-11144
	ctx.r10.s64 = ctx.r19.s64 + -11144;
	// addi r4,r20,-11424
	ctx.r4.s64 = ctx.r20.s64 + -11424;
	// addi r8,r18,-10864
	ctx.r8.s64 = ctx.r18.s64 + -10864;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r7,r17,-12088
	ctx.r7.s64 = ctx.r17.s64 + -12088;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// addi r6,r16,-12040
	ctx.r6.s64 = ctx.r16.s64 + -12040;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r5,r15,-12584
	ctx.r5.s64 = ctx.r15.s64 + -12584;
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lis r14,-30318
	ctx.r14.s64 = -1986920448;
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r4,-30318
	ctx.r4.s64 = -1986920448;
	// lis r8,-30318
	ctx.r8.s64 = -1986920448;
	// lis r7,-30318
	ctx.r7.s64 = -1986920448;
	// lis r6,-30318
	ctx.r6.s64 = -1986920448;
	// lis r5,-30318
	ctx.r5.s64 = -1986920448;
	// addi r3,r14,-13416
	ctx.r3.s64 = ctx.r14.s64 + -13416;
	// addi r4,r4,-12968
	ctx.r4.s64 = ctx.r4.s64 + -12968;
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r8,r8,-12800
	ctx.r8.s64 = ctx.r8.s64 + -12800;
	// addi r7,r7,-13360
	ctx.r7.s64 = ctx.r7.s64 + -13360;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// addi r6,r6,-13232
	ctx.r6.s64 = ctx.r6.s64 + -13232;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// addi r5,r5,-12232
	ctx.r5.s64 = ctx.r5.s64 + -12232;
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r6,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// beq cr6,0x8991ca50
	if (ctx.cr6.eq) goto loc_8991CA50;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r11,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u16);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8991CA50:
	// addi r29,r11,88
	ctx.r29.s64 = ctx.r11.s64 + 88;
	// lis r31,-30269
	ctx.r31.s64 = -1983709184;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,-10744(r31)
	REX_STORE_U32(ctx.r31.u32 + -10744, ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8991ca7c
	if (!ctx.cr6.eq) goto loc_8991CA7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8991CA7C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r3,374(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 374);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-10744(r31)
	REX_STORE_U32(ctx.r31.u32 + -10744, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8991CA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8991cab0
	if (ctx.cr6.eq) goto loc_8991CAB0;
	// lwz r11,-10744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -10744);
	// stwx r11,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u32);
loc_8991CAB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991DEB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r10,-30284
	ctx.r10.s64 = -1984692224;
	// addi r6,r11,5760
	ctx.r6.s64 = ctx.r11.s64 + 5760;
	// addi r8,r10,23816
	ctx.r8.s64 = ctx.r10.s64 + 23816;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8991DEC4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991df0c
	if (ctx.cr6.eq) goto loc_8991DF0C;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_8991DED8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8991df00
	if (ctx.cr6.eq) goto loc_8991DF00;
	// rlwinm r10,r10,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991df00
	if (ctx.cr6.eq) goto loc_8991DF00;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8991DF00:
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8991ded8
	if (!ctx.cr6.eq) goto loc_8991DED8;
loc_8991DF0C:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r6,620
	ctx.r11.s64 = ctx.r6.s64 + 620;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8991dec4
	if (!ctx.cr6.gt) goto loc_8991DEC4;
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// stw r8,23812(r11)
	REX_STORE_U32(ctx.r11.u32 + 23812, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991FC80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991FC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lbz r9,530(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// lwz r10,19180(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// beq cr6,0x8991fe00
	if (ctx.cr6.eq) goto loc_8991FE00;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lwz r7,32024(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32024);
	// addi r5,r10,-31400
	ctx.r5.s64 = ctx.r10.s64 + -31400;
	// addi r4,r9,14820
	ctx.r4.s64 = ctx.r9.s64 + 14820;
loc_8991FCC8:
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// eqv r9,r11,r7
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r7.u64);
	// eqv r8,r11,r6
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r6.u64);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfc r31,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r31.u64 = ctx.r6.u64 - ctx.r11.u64;
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r30,r8,2,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8991fd28
	if (ctx.cr6.eq) goto loc_8991FD28;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_8991FD18:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8991fd18
	if (!ctx.cr6.eq) goto loc_8991FD18;
loc_8991FD28:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stb r11,12280(r3)
	REX_STORE_U8(ctx.r3.u32 + 12280, ctx.r11.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// blt cr6,0x8991fcc8
	if (ctx.cr6.lt) goto loc_8991FCC8;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,-32640
	ctx.r8.s64 = -2139095040;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r30,r11,14828
	ctx.r30.s64 = ctx.r11.s64 + 14828;
	// lhz r7,32032(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 32032);
	// ori r29,r8,32768
	ctx.r29.u64 = ctx.r8.u64 | 32768;
	// addi r31,r10,14800
	ctx.r31.s64 = ctx.r10.s64 + 14800;
	// cmplwi cr6,r7,4096
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4096, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8991fd84
	if (ctx.cr6.eq) goto loc_8991FD84;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// b 0x8991fd8c
	goto loc_8991FD8C;
loc_8991FD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8991FD8C:
	// bl 0x89931d78
	ctx.lr = 0x8991FD90;
	sub_89931D78(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,-31952(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -31952);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8991fdb8
	if (ctx.cr6.eq) goto loc_8991FDB8;
	// lis r6,16448
	ctx.r6.s64 = 1077936128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r6,r6,49152
	ctx.r6.u64 = ctx.r6.u64 | 49152;
	// b 0x8991fdc0
	goto loc_8991FDC0;
loc_8991FDB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8991FDC0:
	// bl 0x89931d78
	ctx.lr = 0x8991FDC4;
	sub_89931D78(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,12264(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12264);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8991fdf4
	if (ctx.cr6.eq) goto loc_8991FDF4;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// bl 0x89931d78
	ctx.lr = 0x8991FDEC;
	sub_89931D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8991FDF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x89931d78
	ctx.lr = 0x8991FE00;
	sub_89931D78(ctx, base);
loc_8991FE00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89922868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89922870;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x89922888;
	sub_89931DD8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r10,12280
	ctx.r6.s64 = ctx.r10.s64 + 12280;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// stb r11,35(r6)
	REX_STORE_U8(ctx.r6.u32 + 35, ctx.r11.u8);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stb r10,34(r6)
	REX_STORE_U8(ctx.r6.u32 + 34, ctx.r10.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stb r8,32(r6)
	REX_STORE_U8(ctx.r6.u32 + 32, ctx.r8.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r25,r11,5344
	ctx.r25.s64 = ctx.r11.s64 + 5344;
	// addi r24,r10,-31400
	ctx.r24.s64 = ctx.r10.s64 + -31400;
	// stb r9,33(r6)
	REX_STORE_U8(ctx.r6.u32 + 33, ctx.r9.u8);
	// lhz r10,-9532(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + -9532);
	// lhz r8,-21392(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -21392);
	// lhz r11,7928(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 7928);
	// rlwinm r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r9,12632(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 12632);
	// rlwinm r29,r8,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r31,r8,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r10,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r9,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r30,r9,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r27,r3,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r6,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r28,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r28,r8,r25
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// rlwinm r23,r5,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r31,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// rlwinm r8,r7,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// lwzx r5,r26,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// lwzx r11,r27,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	// rlwinm r21,r4,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r3,r9,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// rlwinm r26,r30,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r31,r23,r25
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r25.u32);
	// rlwinm r9,r7,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r27,r22,r25
	ctx.r27.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// rlwinm r23,r30,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// rlwinm r22,r29,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r7,r8,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// rlwinm r4,r4,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// lwzx r8,r21,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// lwzx r30,r26,r25
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// rlwinm r21,r29,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// lwzx r9,r9,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// lwzx r29,r23,r25
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r25.u32);
	// lwzx r26,r22,r25
	ctx.r26.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// lwzx r4,r4,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	// stw r11,4520(r24)
	REX_STORE_U32(ctx.r24.u32 + 4520, ctx.r11.u32);
	// stw r10,4524(r24)
	REX_STORE_U32(ctx.r24.u32 + 4524, ctx.r10.u32);
	// stw r9,4516(r24)
	REX_STORE_U32(ctx.r24.u32 + 4516, ctx.r9.u32);
	// stw r7,4512(r24)
	REX_STORE_U32(ctx.r24.u32 + 4512, ctx.r7.u32);
	// stw r6,4396(r24)
	REX_STORE_U32(ctx.r24.u32 + 4396, ctx.r6.u32);
	// stw r5,4392(r24)
	REX_STORE_U32(ctx.r24.u32 + 4392, ctx.r5.u32);
	// stw r8,4388(r24)
	REX_STORE_U32(ctx.r24.u32 + 4388, ctx.r8.u32);
	// stw r4,4384(r24)
	REX_STORE_U32(ctx.r24.u32 + 4384, ctx.r4.u32);
	// stw r3,4268(r24)
	REX_STORE_U32(ctx.r24.u32 + 4268, ctx.r3.u32);
	// stw r31,4264(r24)
	REX_STORE_U32(ctx.r24.u32 + 4264, ctx.r31.u32);
	// stw r30,4260(r24)
	REX_STORE_U32(ctx.r24.u32 + 4260, ctx.r30.u32);
	// stw r29,4256(r24)
	REX_STORE_U32(ctx.r24.u32 + 4256, ctx.r29.u32);
	// stw r28,4140(r24)
	REX_STORE_U32(ctx.r24.u32 + 4140, ctx.r28.u32);
	// stw r27,4136(r24)
	REX_STORE_U32(ctx.r24.u32 + 4136, ctx.r27.u32);
	// stw r26,4132(r24)
	REX_STORE_U32(ctx.r24.u32 + 4132, ctx.r26.u32);
	// lwzx r11,r21,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// stw r11,4128(r24)
	REX_STORE_U32(ctx.r24.u32 + 4128, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899231D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899231D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x899231F0;
	sub_89931DD8(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r31,r4,5344
	ctx.r31.s64 = ctx.r4.s64 + 5344;
	// lhz r10,9516(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 9516);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lhz r11,12144(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 12144);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r5,r10,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r10,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lhz r9,20420(r23)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 20420);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r10,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r3,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r3,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// rlwinm r24,r5,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r4,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r5,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lhz r10,20416(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 20416);
	// cntlzw r21,r7
	ctx.r21.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// subfc r11,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwzx r3,r26,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwzx r30,r25,r31
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r25,r24,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// subfze r11,r6
	temp.u8 = ~ctx.r6.u32 + ctx.xer.ca < ~ctx.r6.u32;
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r29,r29,-31400
	ctx.r29.s64 = ctx.r29.s64 + -31400;
	// lwzx r24,r5,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r26,r26,12280
	ctx.r26.s64 = ctx.r26.s64 + 12280;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r6,r21,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r8,4524(r29)
	REX_STORE_U32(ctx.r29.u32 + 4524, ctx.r8.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,4520(r29)
	REX_STORE_U32(ctx.r29.u32 + 4520, ctx.r4.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r3,4516(r29)
	REX_STORE_U32(ctx.r29.u32 + 4516, ctx.r3.u32);
	// stw r30,4512(r29)
	REX_STORE_U32(ctx.r29.u32 + 4512, ctx.r30.u32);
	// stw r28,4396(r29)
	REX_STORE_U32(ctx.r29.u32 + 4396, ctx.r28.u32);
	// stw r27,4392(r29)
	REX_STORE_U32(ctx.r29.u32 + 4392, ctx.r27.u32);
	// stw r25,4388(r29)
	REX_STORE_U32(ctx.r29.u32 + 4388, ctx.r25.u32);
	// stw r24,4384(r29)
	REX_STORE_U32(ctx.r29.u32 + 4384, ctx.r24.u32);
	// stb r7,35(r26)
	REX_STORE_U8(ctx.r26.u32 + 35, ctx.r7.u8);
	// stb r7,34(r26)
	REX_STORE_U8(ctx.r26.u32 + 34, ctx.r7.u8);
	// beq cr6,0x899232e0
	if (ctx.cr6.eq) goto loc_899232E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,20420(r23)
	REX_STORE_U16(ctx.r23.u32 + 20420, ctx.r9.u16);
loc_899232E0:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r11,r11,20432
	ctx.r11.s64 = ctx.r11.s64 + 20432;
	// addi r28,r8,12800
	ctx.r28.s64 = ctx.r8.s64 + 12800;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89923398
	if (ctx.cr6.eq) goto loc_89923398;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r30,r11,0,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 65535;
loc_89923318:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89923340
	if (ctx.cr6.eq) goto loc_89923340;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x89923340
	if (!ctx.cr6.eq) goto loc_89923340;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,20420(r23)
	REX_STORE_U16(ctx.r23.u32 + 20420, ctx.r9.u16);
loc_89923340:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x89923368
	if (ctx.cr6.eq) goto loc_89923368;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89923358
	if (!ctx.cr6.eq) goto loc_89923358;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_89923358:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,20420(r23)
	REX_STORE_U16(ctx.r23.u32 + 20420, ctx.r9.u16);
loc_89923368:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x89923394
	if (!ctx.cr6.eq) goto loc_89923394;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x89923318
	if (!ctx.cr6.eq) goto loc_89923318;
loc_89923394:
	// sth r9,20420(r23)
	REX_STORE_U16(ctx.r23.u32 + 20420, ctx.r9.u16);
loc_89923398:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89932850
	ctx.lr = 0x899233A4;
	sub_89932850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x89923430
	if (!ctx.cr6.gt) goto loc_89923430;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r8,4920
	ctx.r30.s64 = ctx.r8.s64 + 4920;
loc_899233B8:
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r8,r4,35
	ctx.xer.ca = ctx.r4.u32 <= 35;
	ctx.r8.u64 = static_cast<uint64_t>(35) - ctx.r4.u64;
	// lhzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,13
	ctx.r8.s64 = ctx.r8.s64 + 13;
	// rlwinm r27,r6,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stbx r7,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u8);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r27,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwzx r4,r6,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blt cr6,0x899233b8
	if (ctx.cr6.lt) goto loc_899233B8;
loc_89923430:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// li r4,4
	ctx.r4.s64 = 4;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// addi r5,r11,8200
	ctx.r5.s64 = ctx.r11.s64 + 8200;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r25,r3,7132
	ctx.r25.s64 = ctx.r3.s64 + 7132;
	// ori r24,r6,16384
	ctx.r24.u64 = ctx.r6.u64 | 16384;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
loc_89923460:
	// mulli r30,r8,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89924194
	if (ctx.cr6.eq) goto loc_89924194;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r27,r9,28,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r5,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r20,r6,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r19,r9,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r22,r23,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r11,30,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// lwzx r18,r27,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r21,r22,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r16,r21,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lwzx r17,r9,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r6,r6,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r15,r11,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r14,r10,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// rlwinm r21,r21,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r11,r29,3724
	ctx.r11.s64 = ctx.r29.s64 + 3724;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r9,r29,3612
	ctx.r9.s64 = ctx.r29.s64 + 3612;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r9,29(r26)
	REX_STORE_U8(ctx.r26.u32 + 29, ctx.r9.u8);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r18,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r18.u32);
	// stw r20,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r20.u32);
	// stw r6,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r6.u32);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r15,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r15.u32);
	// stw r14,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r14.u32);
	// stw r5,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// stw r23,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r23.u32);
	// stw r22,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r22.u32);
	// stw r16,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r16.u32);
	// stw r21,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r21.u32);
	// stb r7,28(r26)
	REX_STORE_U8(ctx.r26.u32 + 28, ctx.r7.u8);
	// beq cr6,0x89923574
	if (ctx.cr6.eq) goto loc_89923574;
	// subf r10,r25,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r25.u64;
	// addi r11,r29,3456
	ctx.r11.s64 = ctx.r29.s64 + 3456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89923564:
	// stwx r3,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwzu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89923564
	if (!ctx.cr6.eq) goto loc_89923564;
loc_89923574:
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r9,28
	ctx.r7.s64 = ctx.r9.s64 + 28;
	// stb r11,27(r26)
	REX_STORE_U8(ctx.r26.u32 + 27, ctx.r11.u8);
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899235e4
	if (ctx.cr6.eq) goto loc_899235E4;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// addi r9,r29,3456
	ctx.r9.s64 = ctx.r29.s64 + 3456;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// beq cr6,0x899235d8
	if (ctx.cr6.eq) goto loc_899235D8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899235C0:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
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
	// bne cr6,0x899235c0
	if (!ctx.cr6.eq) goto loc_899235C0;
loc_899235D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,27(r26)
	REX_STORE_U8(ctx.r26.u32 + 27, ctx.r11.u8);
	// b 0x8992360c
	goto loc_8992360C;
loc_899235E4:
	// rlwinm r9,r11,30,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// addi r11,r29,3456
	ctx.r11.s64 = ctx.r29.s64 + 3456;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r5,r7,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stb r10,27(r26)
	REX_STORE_U8(ctx.r26.u32 + 27, ctx.r10.u8);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_8992360C:
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r6,r28,52
	ctx.r6.s64 = ctx.r28.s64 + 52;
	// addi r11,r29,3328
	ctx.r11.s64 = ctx.r29.s64 + 3328;
	// lwzx r3,r30,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r9,r29,3200
	ctx.r9.s64 = ctx.r29.s64 + 3200;
	// lwzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// rlwinm r7,r4,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r24,r3,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r25,r7,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r19,r5,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r23,r6,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r22,r25,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r21,r23,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r20,r22,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// stwx r24,r27,r11
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r24.u32);
	// rlwinm r11,r4,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r24,r19,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r18,r20,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// rlwinm r17,r21,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r18,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r29,3100
	ctx.r11.s64 = ctx.r29.s64 + 3100;
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// rlwinm r4,r17,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r5,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r19,r18,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r9,r17,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r18,r4,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r5,r21,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r24,r23,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r21,r19,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r17,r9,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r23,r18,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// stw r25,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r19,r19,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3C;
	// lwzx r16,r4,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r18,r18,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,26(r26)
	REX_STORE_U8(ctx.r26.u32 + 26, ctx.r10.u8);
	// rlwinm r4,r18,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r18,r18,30,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// addi r10,r29,2972
	ctx.r10.s64 = ctx.r29.s64 + 2972;
	// stb r9,25(r26)
	REX_STORE_U8(ctx.r26.u32 + 25, ctx.r9.u8);
	// stw r22,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r22.u32);
	// stw r20,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r20.u32);
	// stw r3,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r3.u32);
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// stw r21,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r21.u32);
	// stw r19,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r19.u32);
	// add r11,r27,r10
	ctx.r11.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r7,r28,60
	ctx.r7.s64 = ctx.r28.s64 + 60;
	// lwzx r22,r18,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// lwzx r25,r4,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r9,r29,2844
	ctx.r9.s64 = ctx.r29.s64 + 2844;
	// addi r4,r29,2716
	ctx.r4.s64 = ctx.r29.s64 + 2716;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// add r10,r27,r9
	ctx.r10.u64 = ctx.r27.u64 + ctx.r9.u64;
	// stw r24,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r24.u32);
	// add r9,r27,r4
	ctx.r9.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r21,r3,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stw r23,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r23.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r21,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r5,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// rlwinm r20,r24,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r22.u32);
	// stw r16,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r16.u32);
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r23,r20,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r25.u32);
	// stw r17,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r17.u32);
	// rlwinm r19,r5,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r23,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r25,r19,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r22,r11,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r22,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r22,r22,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r17,r11,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r16,r25,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r15,r7,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r14,r6,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// rlwinm r25,r25,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r21.u32);
	// addi r29,r28,200
	ctx.r29.s64 = ctx.r28.s64 + 200;
	// stw r24,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r24.u32);
	// addi r3,r28,204
	ctx.r3.s64 = ctx.r28.s64 + 204;
	// stw r20,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r20.u32);
	// rlwinm r21,r25,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r23,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r23.u32);
	// addi r24,r28,202
	ctx.r24.s64 = ctx.r28.s64 + 202;
	// stw r17,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r17.u32);
	// stw r18,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r18.u32);
	// stw r22,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r22.u32);
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// stb r11,24(r26)
	REX_STORE_U8(ctx.r26.u32 + 24, ctx.r11.u8);
	// stb r7,23(r26)
	REX_STORE_U8(ctx.r26.u32 + 23, ctx.r7.u8);
	// stb r6,22(r26)
	REX_STORE_U8(ctx.r26.u32 + 22, ctx.r6.u8);
	// stwx r15,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r15.u32);
	// stw r14,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r14.u32);
	// stw r5,-8(r9)
	REX_STORE_U32(ctx.r9.u32 + -8, ctx.r5.u32);
	// stw r19,-12(r9)
	REX_STORE_U32(ctx.r9.u32 + -12, ctx.r19.u32);
	// rlwinm r11,r25,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// lbzx r4,r30,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// lwzx r6,r21,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r5,r11,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lbzx r25,r30,r24
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// rlwinm r3,r11,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// ld r29,104(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r24,r10,30,2,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// stw r16,-16(r9)
	REX_STORE_U32(ctx.r9.u32 + -16, ctx.r16.u32);
	// addi r11,r29,2560
	ctx.r11.s64 = ctx.r29.s64 + 2560;
	// stw r6,-20(r9)
	REX_STORE_U32(ctx.r9.u32 + -20, ctx.r6.u32);
	// addi r23,r8,4
	ctx.r23.s64 = ctx.r8.s64 + 4;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// addi r7,r28,72
	ctx.r7.s64 = ctx.r28.s64 + 72;
	// lwzx r22,r10,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r4,30,2,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stw r6,-24(r9)
	REX_STORE_U32(ctx.r9.u32 + -24, ctx.r6.u32);
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stw r3,-28(r9)
	REX_STORE_U32(ctx.r9.u32 + -28, ctx.r3.u32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// rlwinm r3,r25,30,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// addi r11,r28,203
	ctx.r11.s64 = ctx.r28.s64 + 203;
	// lhzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r7.u32);
	// extsh r7,r23
	ctx.r7.s64 = ctx.r23.s16;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r24,r25,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// addi r10,r29,2560
	ctx.r10.s64 = ctx.r29.s64 + 2560;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r23,r8,6
	ctx.r23.s64 = ctx.r8.s64 + 6;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r29,2560
	ctx.r8.s64 = ctx.r29.s64 + 2560;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lbzx r23,r30,r11
	ctx.r23.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r11,r25,r8
	ctx.r11.u64 = ctx.r25.u64 + ctx.r8.u64;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r22,r28,207
	ctx.r22.s64 = ctx.r28.s64 + 207;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r21,r4,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stwx r3,r25,r8
	REX_STORE_U32(ctx.r25.u32 + ctx.r8.u32, ctx.r3.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// rlwinm r11,r23,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lbzx r22,r30,r22
	ctx.r22.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// rlwinm r6,r21,28,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r23,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r22,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r24,r22,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r22,r4,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,2560
	ctx.r9.s64 = ctx.r29.s64 + 2560;
	// rlwinm r3,r21,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r23,r6,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r21,r8,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r4,r6,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// addi r11,r29,2432
	ctx.r11.s64 = ctx.r29.s64 + 2432;
	// addi r7,r29,2316
	ctx.r7.s64 = ctx.r29.s64 + 2316;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwzx r20,r4,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r27,r7
	ctx.r11.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// addi r5,r28,76
	ctx.r5.s64 = ctx.r28.s64 + 76;
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// stw r23,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r23.u32);
	// stw r20,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r20.u32);
	// stb r8,21(r26)
	REX_STORE_U8(ctx.r26.u32 + 21, ctx.r8.u8);
	// stb r10,20(r26)
	REX_STORE_U8(ctx.r26.u32 + 20, ctx.r10.u8);
	// stb r8,19(r26)
	REX_STORE_U8(ctx.r26.u32 + 19, ctx.r8.u8);
	// stb r7,18(r26)
	REX_STORE_U8(ctx.r26.u32 + 18, ctx.r7.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwzx r3,r30,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// extsb r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x89927b98
	ctx.lr = 0x89923A34;
	sub_89927B98(ctx, base);
	// addi r10,r28,80
	ctx.r10.s64 = ctx.r28.s64 + 80;
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x89927b98
	ctx.lr = 0x89923A50;
	sub_89927B98(ctx, base);
	// addi r8,r28,64
	ctx.r8.s64 = ctx.r28.s64 + 64;
	// addi r7,r28,100
	ctx.r7.s64 = ctx.r28.s64 + 100;
	// addi r6,r28,104
	ctx.r6.s64 = ctx.r28.s64 + 104;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r29,1948
	ctx.r11.s64 = ctx.r29.s64 + 1948;
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r10,r29,1820
	ctx.r10.s64 = ctx.r29.s64 + 1820;
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stb r9,15(r26)
	REX_STORE_U8(ctx.r26.u32 + 15, ctx.r9.u8);
	// rlwinm r8,r5,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r3,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r22,r4,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwzx r9,r30,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r6,r3,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r7,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r7,r5,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r7,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r24,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r23,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r21,r9,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// rlwinm r6,r23,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// stw r3,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// rlwinm r23,r22,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r24,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r24,r23,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stw r5,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// rlwinm r5,r22,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r3,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r3.u32);
	// rlwinm r3,r9,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// stw r7,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// rlwinm r7,r24,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r8,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// rlwinm r8,r24,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r6.u32);
	// lwzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r9,r28,32
	ctx.r9.s64 = ctx.r28.s64 + 32;
	// rlwinm r24,r8,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r5,r21,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r22,r24,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// rlwinm r11,r22,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r6,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r6.u32);
	// rlwinm r6,r24,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r23,r5,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r22,r22,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// stw r7,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r7.u32);
	// rlwinm r4,r9,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r20,r23,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r24,r4,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r18,r20,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r24,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// stw r8,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r8.u32);
	// rlwinm r8,r21,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r11,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r11.u32);
	// addi r11,r29,1692
	ctx.r11.s64 = ctx.r29.s64 + 1692;
	// stw r6,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r6.u32);
	// rlwinm r19,r7,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r23,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r22,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r22.u32);
	// rlwinm r23,r18,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r17,r19,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r18,r18,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// rlwinm r10,r23,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r21,r17,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r24,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r24,r18,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r16,r21,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r18,r17,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// lwzx r17,r9,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r23,r23,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// lwzx r22,r20,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r20,r10,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// rlwinm r21,r21,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r10,r29,1564
	ctx.r10.s64 = ctx.r29.s64 + 1564;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// stb r9,14(r26)
	REX_STORE_U8(ctx.r26.u32 + 14, ctx.r9.u8);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// addi r14,r28,158
	ctx.r14.s64 = ctx.r28.s64 + 158;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// addi r9,r29,1420
	ctx.r9.s64 = ctx.r29.s64 + 1420;
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// stw r5,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// stw r22,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r22.u32);
	// addi r6,r28,160
	ctx.r6.s64 = ctx.r28.s64 + 160;
	// stw r23,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r23.u32);
	// addi r5,r28,188
	ctx.r5.s64 = ctx.r28.s64 + 188;
	// stw r24,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r24.u32);
	// addi r24,r28,192
	ctx.r24.s64 = ctx.r28.s64 + 192;
	// stw r20,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r20.u32);
	// addi r11,r29,1420
	ctx.r11.s64 = ctx.r29.s64 + 1420;
	// lhzx r23,r30,r14
	ctx.r23.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r14.u32);
	// addi r8,r29,1308
	ctx.r8.s64 = ctx.r29.s64 + 1308;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r4,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r4.u32);
	// rlwinm r25,r23,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lhzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r6.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r22,r25,28,20,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFF;
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r3,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r3.u32);
	// rlwinm r20,r22,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r7,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r7.u32);
	// rlwinm r4,r22,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// stw r17,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r17.u32);
	// rlwinm r11,r6,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stw r19,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r19.u32);
	// stw r18,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r18.u32);
	// rlwinm r3,r23,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stw r16,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r16.u32);
	// rlwinm r7,r5,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r21.u32);
	// add r10,r27,r9
	ctx.r10.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r23,r11,28,20,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r22,r7,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r24,r30,r24
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// rlwinm r19,r23,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r21,r24,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r4,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r4.u32);
	// rlwinm r23,r23,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// stw r25,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r25.u32);
	// stw r20,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r20.u32);
	// rlwinm r17,r22,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r25,r21,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r17,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r20,r11,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r16,r25,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stwx r3,r27,r9
	REX_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r3.u32);
	// clrlwi r18,r15,24
	ctx.r18.u64 = ctx.r15.u32 & 0xFF;
	// rlwinm r3,r4,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r11,r27,r8
	ctx.r11.u64 = ctx.r27.u64 + ctx.r8.u64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// rlwinm r15,r16,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// stb r18,13(r26)
	REX_STORE_U8(ctx.r26.u32 + 13, ctx.r18.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r20,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r20.u32);
	// rlwinm r18,r15,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// stw r19,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r19.u32);
	// rlwinm r17,r17,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r23,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r23.u32);
	// rlwinm r3,r3,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stb r9,12(r26)
	REX_STORE_U8(ctx.r26.u32 + 12, ctx.r9.u8);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// addi r10,r28,196
	ctx.r10.s64 = ctx.r28.s64 + 196;
	// lwzx r9,r17,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// addi r23,r29,1052
	ctx.r23.s64 = ctx.r29.s64 + 1052;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r5,r3,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// rlwinm r3,r3,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// stw r22,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r22.u32);
	// rlwinm r22,r21,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r23,r30,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// rlwinm r11,r16,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r23,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r20,r15,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r21,r9,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r7,r18,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r14,r11,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r28,180
	ctx.r11.s64 = ctx.r28.s64 + 180;
	// rlwinm r19,r21,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// stw r5,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r5.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r17,r19,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r16,r7,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r3,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r3.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r4,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r4.u32);
	// rlwinm r15,r17,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r6.u32);
	// rlwinm r3,r21,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// rlwinm r7,r7,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// addi r11,r29,1180
	ctx.r11.s64 = ctx.r29.s64 + 1180;
	// lwzx r6,r16,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// rlwinm r20,r15,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r4,r23,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stb r8,11(r26)
	REX_STORE_U8(ctx.r26.u32 + 11, ctx.r8.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r23,r19,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r19,r17,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r15,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// lwzx r17,r7,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r16,r20,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r18,r18,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r15,r4,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stw r25,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// addi r10,r29,896
	ctx.r10.s64 = ctx.r29.s64 + 896;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r20,r20,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwzx r4,r26,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addi r25,r28,181
	ctx.r25.s64 = ctx.r28.s64 + 181;
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// lbzx r21,r30,r21
	ctx.r21.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// rlwinm r5,r21,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r22,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r22.u32);
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r14,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r14.u32);
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r22,r28,185
	ctx.r22.s64 = ctx.r28.s64 + 185;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r4,r29,668
	ctx.r4.s64 = ctx.r29.s64 + 668;
	// stw r6,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r6.u32);
	// addi r6,r28,168
	ctx.r6.s64 = ctx.r28.s64 + 168;
	// stw r17,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r17.u32);
	// stw r18,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r18.u32);
	// addi r18,r28,164
	ctx.r18.s64 = ctx.r28.s64 + 164;
	// stw r24,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r24.u32);
	// addi r24,r28,184
	ctx.r24.s64 = ctx.r28.s64 + 184;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// lbzx r25,r30,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r17,r25,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r19,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r19.u32);
	// lwz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// rlwinm r3,r6,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stw r23,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r23.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r16,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r16.u32);
	// rlwinm r23,r3,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stw r20,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r20.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// stw r15,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r15.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// lwz r19,96(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r24,r30,r24
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r15,r24,30,2,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r22,r30,r22
	ctx.r22.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r19,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r19.u32);
	// addi r11,r29,896
	ctx.r11.s64 = ctx.r29.s64 + 896;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r14,r22,30,2,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// rlwinm r19,r23,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r30,r18
	ctx.r18.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// addi r10,r29,768
	ctx.r10.s64 = ctx.r29.s64 + 768;
	// lwzx r21,r15,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r20,r19,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r15,r14,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r31.u32);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// addi r11,r29,768
	ctx.r11.s64 = ctx.r29.s64 + 768;
	// rlwinm r25,r18,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r26,100(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r16,r20,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r17,r25,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// rlwinm r5,r16,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// rlwinm r14,r17,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r24,r16,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// stb r7,10(r26)
	REX_STORE_U8(ctx.r26.u32 + 10, ctx.r7.u8);
	// stw r15,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r15.u32);
	// rlwinm r16,r5,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stb r7,9(r26)
	REX_STORE_U8(ctx.r26.u32 + 9, ctx.r7.u8);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// stw r22,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r22.u32);
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// add r11,r27,r4
	ctx.r11.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r21,r14,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r5,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// stwx r6,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r6.u32);
	// rlwinm r18,r18,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// addi r4,r28,183
	ctx.r4.s64 = ctx.r28.s64 + 183;
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// rlwinm r22,r21,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r8,r21,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r10,r22,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r4,r30,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r3,r22,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r22,r18,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r21,r10,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// rlwinm r18,r10,30,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r8,r4,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r6,r28,182
	ctx.r6.s64 = ctx.r28.s64 + 182;
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r29,540
	ctx.r10.s64 = ctx.r29.s64 + 540;
	// stw r5,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// addi r8,r29,384
	ctx.r8.s64 = ctx.r29.s64 + 384;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r23,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r23.u32);
	// lbzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r30,r17,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// rlwinm r17,r14,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r24,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r24.u32);
	// rlwinm r14,r6,30,2,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r19,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r19.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r20,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r20.u32);
	// stw r16,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r16.u32);
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// lwzx r30,r30,r31
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r4,r29,384
	ctx.r4.s64 = ctx.r29.s64 + 384;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r4,r15,9
	ctx.r4.s64 = ctx.r15.s64 + 9;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// stw r30,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r30.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// lwzx r14,r14,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r31.u32);
	// stw r25,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r25.u32);
	// lis r25,16576
	ctx.r25.s64 = 1086324736;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r3.u32);
	// ori r24,r25,16384
	ctx.r24.u64 = ctx.r25.u64 | 16384;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r22,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// lwzx r27,r5,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r17,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r17.u32);
	// stw r30,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r30.u32);
	// stw r21,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r21.u32);
	// stw r18,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r18.u32);
	// lwzx r23,r5,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r14,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r14.u32);
	// stb r7,8(r26)
	REX_STORE_U8(ctx.r26.u32 + 8, ctx.r7.u8);
	// stb r7,7(r26)
	REX_STORE_U8(ctx.r26.u32 + 7, ctx.r7.u8);
	// stb r7,6(r26)
	REX_STORE_U8(ctx.r26.u32 + 6, ctx.r7.u8);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// lhz r10,20416(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,116(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// stb r7,5(r26)
	REX_STORE_U8(ctx.r26.u32 + 5, ctx.r7.u8);
	// stb r7,4(r26)
	REX_STORE_U8(ctx.r26.u32 + 4, ctx.r7.u8);
	// stb r7,3(r26)
	REX_STORE_U8(ctx.r26.u32 + 3, ctx.r7.u8);
	// stw r23,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
loc_89924194:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x899241c4
	if (ctx.cr6.eq) goto loc_899241C4;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x89923460
	if (ctx.cr6.lt) goto loc_89923460;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899241C4:
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bge cr6,0x89924238
	if (!ctx.cr6.lt) goto loc_89924238;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
loc_899241D4:
	// li r9,3
	ctx.r9.s64 = 3;
loc_899241D8:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8992420c
	if (ctx.cr6.eq) goto loc_8992420C;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r25,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r25.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_899241FC:
	// stwx r11,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899241fc
	if (!ctx.cr6.eq) goto loc_899241FC;
loc_8992420C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stbx r7,r9,r26
	REX_STORE_U8(ctx.r9.u32 + ctx.r26.u32, ctx.r7.u8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x899241d8
	if (ctx.cr6.lt) goto loc_899241D8;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x899241d4
	if (ctx.cr6.lt) goto loc_899241D4;
loc_89924238:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992F290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8992F298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x899da2f8
	ctx.lr = 0x8992F2A0;
	sub_899DA2F8(ctx, base);
	// lis r10,-30216
	ctx.r10.s64 = -1980235776;
	// lis r4,-30216
	ctx.r4.s64 = -1980235776;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// addi r7,r4,26336
	ctx.r7.s64 = ctx.r4.s64 + 26336;
	// lis r3,-30232
	ctx.r3.s64 = -1981284352;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// stw r8,26344(r10)
	REX_STORE_U32(ctx.r10.u32 + 26344, ctx.r8.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r10,26344
	ctx.r28.s64 = ctx.r10.s64 + 26344;
	// lis r5,-30232
	ctx.r5.s64 = -1981284352;
	// stw r29,3620(r9)
	REX_STORE_U32(ctx.r9.u32 + 3620, ctx.r29.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// stw r7,3620(r9)
	REX_STORE_U32(ctx.r9.u32 + 3620, ctx.r7.u32);
	// lis r31,-30232
	ctx.r31.s64 = -1981284352;
	// stw r29,3624(r6)
	REX_STORE_U32(ctx.r6.u32 + 3624, ctx.r29.u32);
	// lis r6,416
	ctx.r6.s64 = 27262976;
	// lis r30,-30232
	ctx.r30.s64 = -1981284352;
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// stw r6,26336(r4)
	REX_STORE_U32(ctx.r4.u32 + 26336, ctx.r6.u32);
	// lis r26,-30216
	ctx.r26.s64 = -1980235776;
	// li r9,1600
	ctx.r9.s64 = 1600;
	// lwz r11,-1092(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -1092);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r10,-2100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -2100);
	// lis r3,-30214
	ctx.r3.s64 = -1980104704;
	// stw r7,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,16100(r5)
	REX_STORE_U32(ctx.r5.u32 + 16100, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r29,3628(r3)
	REX_STORE_U32(ctx.r3.u32 + 3628, ctx.r29.u32);
	// stw r11,3616(r8)
	REX_STORE_U32(ctx.r8.u32 + 3616, ctx.r11.u32);
	// addi r8,r26,31008
	ctx.r8.s64 = ctx.r26.s64 + 31008;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r11,11348(r31)
	REX_STORE_U32(ctx.r31.u32 + 11348, ctx.r11.u32);
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// stw r10,10572(r30)
	REX_STORE_U32(ctx.r30.u32 + 10572, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r6,3656(r27)
	REX_STORE_U32(ctx.r27.u32 + 3656, ctx.r6.u32);
loc_8992F354:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8992f354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8992F354;
	// lis r7,-30216
	ctx.r7.s64 = -1980235776;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// addi r6,r7,30992
	ctx.r6.s64 = ctx.r7.s64 + 30992;
	// lis r11,-30216
	ctx.r11.s64 = -1980235776;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r26,r11,27008
	ctx.r26.s64 = ctx.r11.s64 + 27008;
	// stw r29,30992(r7)
	REX_STORE_U32(ctx.r7.u32 + 30992, ctx.r29.u32);
	// stw r29,27620(r10)
	REX_STORE_U32(ctx.r10.u32 + 27620, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r29,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
loc_8992F39C:
	// lwz r3,3680(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3680);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8992F3BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r9,r26,3984
	ctx.r9.s64 = ctx.r26.s64 + 3984;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8992f39c
	if (ctx.cr6.lt) goto loc_8992F39C;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r11,11348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11348);
	// lwz r10,10572(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 10572);
	// lis r6,-30232
	ctx.r6.s64 = -1981284352;
	// addi r5,r8,-21576
	ctx.r5.s64 = ctx.r8.s64 + -21576;
	// lis r7,-4096
	ctx.r7.s64 = -268435456;
	// lis r4,-30232
	ctx.r4.s64 = -1981284352;
	// stw r11,-21576(r8)
	REX_STORE_U32(ctx.r8.u32 + -21576, ctx.r11.u32);
	// lis r8,-30318
	ctx.r8.s64 = -1986920448;
	// stw r29,20044(r6)
	REX_STORE_U32(ctx.r6.u32 + 20044, ctx.r29.u32);
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r8,-29072
	ctx.r10.s64 = ctx.r8.s64 + -29072;
	// lis r8,-30215
	ctx.r8.s64 = -1980170240;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,-3500(r4)
	REX_STORE_U32(ctx.r4.u32 + -3500, ctx.r10.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// stb r29,523(r6)
	REX_STORE_U8(ctx.r6.u32 + 523, ctx.r29.u8);
	// lis r3,-30232
	ctx.r3.s64 = -1981284352;
	// addi r7,r8,-31240
	ctx.r7.s64 = ctx.r8.s64 + -31240;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-31240(r8)
	REX_STORE_U32(ctx.r8.u32 + -31240, ctx.r29.u32);
	// stw r9,7116(r4)
	REX_STORE_U32(ctx.r4.u32 + 7116, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r29,-3756(r3)
	REX_STORE_U32(ctx.r3.u32 + -3756, ctx.r29.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// lis r8,-30215
	ctx.r8.s64 = -1980170240;
	// stw r9,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// stw r11,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r11.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r3,-30247
	ctx.r3.s64 = -1982267392;
	// stw r29,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r29.u32);
	// stw r29,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r29.u32);
	// lis r27,-30232
	ctx.r27.s64 = -1981284352;
	// stw r29,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r29.u32);
	// addi r31,r27,18660
	ctx.r31.s64 = ctx.r27.s64 + 18660;
	// stw r29,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r29.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r29.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,52(r7)
	REX_STORE_U32(ctx.r7.u32 + 52, ctx.r29.u32);
	// stw r29,56(r7)
	REX_STORE_U32(ctx.r7.u32 + 56, ctx.r29.u32);
	// stw r29,60(r7)
	REX_STORE_U32(ctx.r7.u32 + 60, ctx.r29.u32);
	// stw r29,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r29.u32);
	// addi r7,r8,-31312
	ctx.r7.s64 = ctx.r8.s64 + -31312;
	// stw r29,32008(r6)
	REX_STORE_U32(ctx.r6.u32 + 32008, ctx.r29.u32);
	// lis r6,-30215
	ctx.r6.s64 = -1980170240;
	// stw r29,5212(r5)
	REX_STORE_U32(ctx.r5.u32 + 5212, ctx.r29.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r29,19352(r3)
	REX_STORE_U32(ctx.r3.u32 + 19352, ctx.r29.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r30,r6,-31328
	ctx.r30.s64 = ctx.r6.s64 + -31328;
	// stw r29,-31312(r8)
	REX_STORE_U32(ctx.r8.u32 + -31312, ctx.r29.u32);
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// stw r29,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r29.u32);
	// stw r29,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r29.u32);
	// stw r29,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r29.u32);
	// stw r29,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r29.u32);
	// stw r29,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r29.u32);
	// stw r29,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r29.u32);
	// stw r29,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r29.u32);
	// stw r29,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r29.u32);
	// stw r29,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r29.u32);
	// stw r29,52(r7)
	REX_STORE_U32(ctx.r7.u32 + 52, ctx.r29.u32);
	// stw r29,56(r7)
	REX_STORE_U32(ctx.r7.u32 + 56, ctx.r29.u32);
	// stw r29,60(r7)
	REX_STORE_U32(ctx.r7.u32 + 60, ctx.r29.u32);
	// stw r29,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r29.u32);
	// stw r11,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,9576(r31)
	REX_STORE_U32(ctx.r31.u32 + 9576, ctx.r29.u32);
	// stw r29,-31328(r6)
	REX_STORE_U32(ctx.r6.u32 + -31328, ctx.r29.u32);
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// bl 0x899dcca0
	ctx.lr = 0x8992F538;
	sub_899DCCA0(ctx, base);
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r9,-30216
	ctx.r9.s64 = -1980235776;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r3,r9,26368
	ctx.r3.s64 = ctx.r9.s64 + 26368;
	// lwz r30,3668(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 3668);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1268(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1268);
	// stw r11,3684(r10)
	REX_STORE_U32(ctx.r10.u32 + 3684, ctx.r11.u32);
	// bl 0x899dcca0
	ctx.lr = 0x8992F560;
	sub_899DCCA0(ctx, base);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lwz r3,3680(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3680);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r10,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r9,2112
	ctx.r9.s64 = 2112;
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r29,18660(r27)
	REX_STORE_U32(ctx.r27.u32 + 18660, ctx.r29.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r9,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// stw r10,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r8,-30232
	ctx.r8.s64 = -1981284352;
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r7,-30220
	ctx.r7.s64 = -1980497920;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r4,r7,25704
	ctx.r4.s64 = ctx.r7.s64 + 25704;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,-26964(r8)
	REX_STORE_U32(ctx.r8.u32 + -26964, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8992F5C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-30232
	ctx.r8.s64 = -1981284352;
	// lis r4,-30220
	ctx.r4.s64 = -1980497920;
	// addi r7,r8,-24580
	ctx.r7.s64 = ctx.r8.s64 + -24580;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-30232
	ctx.r6.s64 = -1981284352;
	// lis r5,-30232
	ctx.r5.s64 = -1981284352;
	// stw r29,-24580(r8)
	REX_STORE_U32(ctx.r8.u32 + -24580, ctx.r29.u32);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stw r29,25576(r4)
	REX_STORE_U32(ctx.r4.u32 + 25576, ctx.r29.u32);
	// addi r10,r11,-7664
	ctx.r10.s64 = ctx.r11.s64 + -7664;
	// stw r29,208(r7)
	REX_STORE_U32(ctx.r7.u32 + 208, ctx.r29.u32);
	// addi r9,r9,-6640
	ctx.r9.s64 = ctx.r9.s64 + -6640;
	// addi r3,r4,25576
	ctx.r3.s64 = ctx.r4.s64 + 25576;
	// stw r10,-25292(r6)
	REX_STORE_U32(ctx.r6.u32 + -25292, ctx.r10.u32);
	// stw r9,-25804(r5)
	REX_STORE_U32(ctx.r5.u32 + -25804, ctx.r9.u32);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,3532(r8)
	REX_STORE_U32(ctx.r8.u32 + 3532, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// stw r29,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r29.u32);
	// stw r29,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r29.u32);
	// stw r29,-25520(r7)
	REX_STORE_U32(ctx.r7.u32 + -25520, ctx.r29.u32);
	// stw r29,-25896(r6)
	REX_STORE_U32(ctx.r6.u32 + -25896, ctx.r29.u32);
	// stw r29,12276(r5)
	REX_STORE_U32(ctx.r5.u32 + 12276, ctx.r29.u32);
	// stb r29,32550(r4)
	REX_STORE_U8(ctx.r4.u32 + 32550, ctx.r29.u8);
	// stw r29,3480(r8)
	REX_STORE_U32(ctx.r8.u32 + 3480, ctx.r29.u32);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// ori r3,r3,3164
	ctx.r3.u64 = ctx.r3.u64 | 3164;
	// bl 0x899d9118
	ctx.lr = 0x8992F664;
	sub_899D9118(ctx, base);
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// ori r3,r3,3140
	ctx.r3.u64 = ctx.r3.u64 | 3140;
	// stw r11,3472(r7)
	REX_STORE_U32(ctx.r7.u32 + 3472, ctx.r11.u32);
	// bl 0x899d9118
	ctx.lr = 0x8992F67C;
	sub_899D9118(ctx, base);
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// lis r31,-30214
	ctx.r31.s64 = -1980104704;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,65
	ctx.r3.s64 = 4259840;
	// stw r11,3528(r6)
	REX_STORE_U32(ctx.r6.u32 + 3528, ctx.r11.u32);
	// ori r3,r3,64552
	ctx.r3.u64 = ctx.r3.u64 | 64552;
	// stw r29,3524(r31)
	REX_STORE_U32(ctx.r31.u32 + 3524, ctx.r29.u32);
	// bl 0x899d9118
	ctx.lr = 0x8992F69C;
	sub_899D9118(ctx, base);
	// stw r3,3524(r31)
	REX_STORE_U32(ctx.r31.u32 + 3524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8992f6ac
	if (ctx.cr6.eq) goto loc_8992F6AC;
	// bl 0x89951ec8
	ctx.lr = 0x8992F6AC;
	sub_89951EC8(ctx, base);
loc_8992F6AC:
	// bl 0x8992f6b0
	ctx.lr = 0x8992F6B0;
	sub_8992F6B0(ctx, base);
}

DEFINE_REX_FUNC(sub_89931D78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r5,-31400
	ctx.r10.s64 = ctx.r5.s64 + -31400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89931dc4
	if (ctx.cr6.eq) goto loc_89931DC4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89931DAC:
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89931dac
	if (!ctx.cr6.eq) goto loc_89931DAC;
loc_89931DC4:
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

DEFINE_REX_FUNC(sub_89932798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// bgt cr6,0x89932840
	if (ctx.cr6.gt) goto loc_89932840;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x89932840
	if (!ctx.cr6.lt) goto loc_89932840;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bgt cr6,0x89932840
	if (ctx.cr6.gt) goto loc_89932840;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x89932840
	if (ctx.cr6.gt) goto loc_89932840;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lhz r8,536(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 536);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x899327e0
	if (!ctx.cr6.gt) goto loc_899327E0;
	// sth r6,536(r11)
	REX_STORE_U16(ctx.r11.u32 + 536, ctx.r6.u16);
loc_899327E0:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,3360
	ctx.r9.s64 = ctx.r8.s64 + 3360;
	// addi r8,r6,-25880
	ctx.r8.s64 = ctx.r6.s64 + -25880;
	// mulli r11,r4,132
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(132));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_89932808:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89932828
	if (!ctx.cr6.eq) goto loc_89932828;
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89932848
	if (ctx.cr6.eq) goto loc_89932848;
loc_89932828:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x89932808
	if (ctx.cr6.lt) goto loc_89932808;
loc_89932840:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_89932848:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932A38) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r3,r9,696
	ctx.r3.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r3,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,5,5
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89932ab0
	if (ctx.cr6.eq) goto loc_89932AB0;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r9,r10,12800
	ctx.r9.s64 = ctx.r10.s64 + 12800;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// addi r6,r9,186
	ctx.r6.s64 = ctx.r9.s64 + 186;
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stbx r10,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u8);
	// sth r10,3492(r5)
	REX_STORE_U16(ctx.r5.u32 + 3492, ctx.r10.u16);
	// blr 
	return;
loc_89932AB0:
	// subfic r11,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r7,r3,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,5,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// beq cr6,0x89932af8
	if (ctx.cr6.eq) goto loc_89932AF8;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r7,r10,186
	ctx.r7.s64 = ctx.r10.s64 + 186;
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// sth r11,3492(r6)
	REX_STORE_U16(ctx.r6.u32 + 3492, ctx.r11.u16);
	// blr 
	return;
loc_89932AF8:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhz r3,3492(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 3492);
	// addi r8,r11,186
	ctx.r8.s64 = ctx.r11.s64 + 186;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stbx r3,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r3.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932FF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89933000;
	__savegprlr_26(ctx, base);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stw r11,-31440(r7)
	REX_STORE_U32(ctx.r7.u32 + -31440, ctx.r11.u32);
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// stb r11,11747(r6)
	REX_STORE_U8(ctx.r6.u32 + 11747, ctx.r11.u8);
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r11,6403(r5)
	REX_STORE_U8(ctx.r5.u32 + 6403, ctx.r11.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,12327(r4)
	REX_STORE_U8(ctx.r4.u32 + 12327, ctx.r11.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,4938(r3)
	REX_STORE_U8(ctx.r3.u32 + 4938, ctx.r11.u8);
	// stb r7,-25513(r31)
	REX_STORE_U8(ctx.r31.u32 + -25513, ctx.r7.u8);
	// li r30,4096
	ctx.r30.s64 = 4096;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// sth r9,32548(r6)
	REX_STORE_U16(ctx.r6.u32 + 32548, ctx.r9.u16);
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stb r11,7930(r5)
	REX_STORE_U8(ctx.r5.u32 + 7930, ctx.r11.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r11,32015(r4)
	REX_STORE_U8(ctx.r4.u32 + 32015, ctx.r11.u8);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r6,9538(r3)
	REX_STORE_U8(ctx.r3.u32 + 9538, ctx.r6.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,12798(r31)
	REX_STORE_U8(ctx.r31.u32 + 12798, ctx.r11.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r30,-2544(r29)
	REX_STORE_U16(ctx.r29.u32 + -2544, ctx.r30.u16);
	// mulli r9,r11,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// addi r7,r7,9656
	ctx.r7.s64 = ctx.r7.s64 + 9656;
loc_89933094:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// mulli r9,r10,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// blt cr6,0x89933094
	if (ctx.cr6.lt) goto loc_89933094;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-31952
	ctx.r9.s64 = ctx.r9.s64 + -31952;
	// addi r7,r7,32032
	ctx.r7.s64 = ctx.r7.s64 + 32032;
loc_899330C0:
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// sthx r30,r6,r9
	REX_STORE_U16(ctx.r6.u32 + ctx.r9.u32, ctx.r30.u16);
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// sthx r30,r6,r7
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u16);
	// blt cr6,0x899330c0
	if (ctx.cr6.lt) goto loc_899330C0;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,12264
	ctx.r7.s64 = ctx.r7.s64 + 12264;
loc_899330F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r30,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r30.u16);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899330f0
	if (ctx.cr6.lt) goto loc_899330F0;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-21272
	ctx.r9.s64 = ctx.r9.s64 + -21272;
loc_89933114:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x89933114
	if (ctx.cr6.lt) goto loc_89933114;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r8,4660
	ctx.r8.s64 = 305397760;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// lbz r5,530(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// ori r31,r8,22136
	ctx.r31.u64 = ctx.r8.u64 | 22136;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r8,r9,27856
	ctx.r8.s64 = ctx.r9.s64 + 27856;
	// addi r29,r7,20960
	ctx.r29.s64 = ctx.r7.s64 + 20960;
	// addi r28,r6,-21216
	ctx.r28.s64 = ctx.r6.s64 + -21216;
	// beq cr6,0x899331e8
	if (ctx.cr6.eq) goto loc_899331E8;
	// lwz r10,12276(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12276);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x899331e8
	if (!ctx.cr6.eq) goto loc_899331E8;
	// lhz r10,12612(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 12612);
	// cmplwi cr6,r10,1021
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1021, ctx.xer);
	// bne cr6,0x899331e8
	if (!ctx.cr6.eq) goto loc_899331E8;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lwz r10,-21592(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21592);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899331e8
	if (ctx.cr6.eq) goto loc_899331E8;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,32560
	ctx.r5.s64 = ctx.r10.s64 + 32560;
loc_8993319C:
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_899331A4:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r3,r4,0,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFC000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899331c0
	if (ctx.cr6.eq) goto loc_899331C0;
	// sthx r30,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r30.u16);
loc_899331C0:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x899331a4
	if (ctx.cr6.lt) goto loc_899331A4;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8993319c
	if (ctx.cr6.lt) goto loc_8993319C;
	// b 0x89933268
	goto loc_89933268;
loc_899331E8:
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r10,32560
	ctx.r5.s64 = ctx.r10.s64 + 32560;
loc_899331F4:
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_899331FC:
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// sthx r30,r6,r5
	REX_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r30.u16);
	// blt cr6,0x899331fc
	if (ctx.cr6.lt) goto loc_899331FC;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x899331f4
	if (ctx.cr6.lt) goto loc_899331F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_89933234:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r11,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u8);
	// stbx r11,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u8);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,4096
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4096, ctx.xer);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x89933234
	if (ctx.cr6.lt) goto loc_89933234;
	// li r9,1021
	ctx.r9.s64 = 1021;
	// stw r31,12276(r4)
	REX_STORE_U32(ctx.r4.u32 + 12276, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// sth r9,12612(r3)
	REX_STORE_U16(ctx.r3.u32 + 12612, ctx.r9.u16);
loc_89933268:
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r10,18908
	ctx.r10.s64 = ctx.r10.s64 + 18908;
	// li r4,4097
	ctx.r4.s64 = 4097;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8993327C:
	// lbz r6,3(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// sthx r4,r6,r5
	REX_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u16);
	// blt cr6,0x8993327c
	if (ctx.cr6.lt) goto loc_8993327C;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r9,768
	ctx.r9.s64 = 50331648;
	// addi r3,r6,-2540
	ctx.r3.s64 = ctx.r6.s64 + -2540;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stw r9,20424(r7)
	REX_STORE_U32(ctx.r7.u32 + 20424, ctx.r9.u32);
	// lis r31,-30274
	ctx.r31.s64 = -1984036864;
	// stw r11,-2540(r6)
	REX_STORE_U32(ctx.r6.u32 + -2540, ctx.r11.u32);
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// lis r7,1280
	ctx.r7.s64 = 83886080;
	// stw r10,-25884(r4)
	REX_STORE_U32(ctx.r4.u32 + -25884, ctx.r10.u32);
	// stw r9,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r7,-10764(r6)
	REX_STORE_U32(ctx.r6.u32 + -10764, ctx.r7.u32);
	// li r9,13
	ctx.r9.s64 = 13;
loc_899332FC:
	// addi r7,r11,1022
	ctx.r7.s64 = ctx.r11.s64 + 1022;
	// li r6,3328
	ctx.r6.s64 = 3328;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r11,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r5,26
	ctx.r26.s64 = ctx.r5.s64 + 26;
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// stbx r9,r4,r29
	REX_STORE_U8(ctx.r4.u32 + ctx.r29.u32, ctx.r9.u8);
	// rlwimi r6,r10,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// stbx r31,r4,r28
	REX_STORE_U8(ctx.r4.u32 + ctx.r28.u32, ctx.r31.u8);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stwx r6,r27,r8
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r6.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sthx r4,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r4.u16);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x899332fc
	if (ctx.cr6.lt) goto loc_899332FC;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935880) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89935888;
	__savegprlr_25(ctx, base);
	// rlwinm r10,r3,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0xFF;
	// rlwinm r9,r3,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// extsb r25,r9
	ctx.r25.s64 = ctx.r9.s8;
	// bne cr6,0x899358c0
	if (!ctx.cr6.eq) goto loc_899358C0;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r6,r11,3484
	ctx.r6.s64 = ctx.r11.s64 + 3484;
loc_899358C0:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x89935940
	if (!ctx.cr6.gt) goto loc_89935940;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
loc_899358DC:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r28,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// blt cr6,0x899358dc
	if (ctx.cr6.lt) goto loc_899358DC;
loc_89935940:
	// extsb r7,r26
	ctx.r7.s64 = ctx.r26.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x899359dc
	if (!ctx.cr6.gt) goto loc_899359DC;
	// extsb r5,r25
	ctx.r5.s64 = ctx.r25.s8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_89935954:
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xoris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 ^ 2147483648;
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xoris r9,r6,16384
	ctx.r9.u64 = ctx.r6.u64 ^ 1073741824;
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// blt cr6,0x89935954
	if (ctx.cr6.lt) goto loc_89935954;
loc_899359DC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r3,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936A90) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30234
	ctx.r10.s64 = -1981415424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r10,-17008
	ctx.r7.s64 = ctx.r10.s64 + -17008;
loc_89936AA0:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// sthx r6,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u16);
	// ble cr6,0x89936abc
	if (!ctx.cr6.gt) goto loc_89936ABC;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x89936ac0
	if (ctx.cr6.lt) goto loc_89936AC0;
loc_89936ABC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_89936AC0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,170
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 170, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sthx r10,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u16);
	// ble cr6,0x89936ae0
	if (!ctx.cr6.gt) goto loc_89936AE0;
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x89936ae4
	if (ctx.cr6.lt) goto loc_89936AE4;
loc_89936AE0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_89936AE4:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sthx r10,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u16);
	// ble cr6,0x89936b04
	if (!ctx.cr6.gt) goto loc_89936B04;
	// cmpwi cr6,r11,341
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 341, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x89936b08
	if (ctx.cr6.lt) goto loc_89936B08;
loc_89936B04:
	// li r9,0
	ctx.r9.s64 = 0;
loc_89936B08:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// sthx r10,r8,r7
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u16);
	// blt cr6,0x89936aa0
	if (ctx.cr6.lt) goto loc_89936AA0;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r8,r11,-19056
	ctx.r8.s64 = ctx.r11.s64 + -19056;
loc_89936B3C:
	// rlwinm r9,r7,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_89936B44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89936b7c
	if (ctx.cr6.eq) goto loc_89936B7C;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r3,r5,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// andc r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// sthx r3,r5,r8
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r3.u16);
	// b 0x89936b84
	goto loc_89936B84;
loc_89936B7C:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
loc_89936B84:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// blt cr6,0x89936b44
	if (ctx.cr6.lt) goto loc_89936B44;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x89936b3c
	if (ctx.cr6.lt) goto loc_89936B3C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89938250) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89938258;
	__savegprlr_27(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r5,r8,3620
	ctx.r5.s64 = ctx.r8.s64 + 3620;
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// stw r4,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// addi r6,r9,25056
	ctx.r6.s64 = ctx.r9.s64 + 25056;
	// lhz r8,3620(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 3620);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,25056(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25056);
	// addi r4,r7,6420
	ctx.r4.s64 = ctx.r7.s64 + 6420;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lwz r8,25056(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 25056);
	// addi r30,r3,-9496
	ctx.r30.s64 = ctx.r3.s64 + -9496;
	// lhz r7,6420(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 6420);
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lhz r6,2(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r5,2(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhz r4,-9496(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + -9496);
	// subfic r31,r31,31
	ctx.xer.ca = ctx.r31.u32 <= 31;
	ctx.r31.u64 = static_cast<uint64_t>(31) - ctx.r31.u64;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r7,2(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,3352(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 3352);
	// subf r30,r28,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r28.u64;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// lis r29,0
	ctx.r29.s64 = 0;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lwz r5,12792(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12792);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// subf r7,r6,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r6,r31,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r31.u64;
	// ori r9,r29,65535
	ctx.r9.u64 = ctx.r29.u64 | 65535;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lis r27,-30274
	ctx.r27.s64 = -1984036864;
	// subf r6,r5,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// subf r5,r10,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r10.u64;
	// rlwinm r7,r31,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,512(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 512);
	// rlwinm r31,r30,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// subf r28,r31,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// add r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 + ctx.r3.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// subf r4,r3,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r3.u64;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// or r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 | ctx.r30.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// subf r9,r5,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r5.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// or r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 | ctx.r29.u64;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// or r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 | ctx.r31.u64;
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r6,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r4,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938DE8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r10,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC00;
	// ori r8,r9,36864
	ctx.r8.u64 = ctx.r9.u64 | 36864;
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x89938e80
	if (ctx.cr6.gt) goto loc_89938E80;
	// cmplwi cr6,r11,36864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36864, ctx.xer);
	// beq cr6,0x89938e7c
	if (ctx.cr6.eq) goto loc_89938E7C;
	// cmpwi cr6,r11,20480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20480, ctx.xer);
	// bgt cr6,0x89938e58
	if (ctx.cr6.gt) goto loc_89938E58;
	// beq cr6,0x89938e54
	if (ctx.cr6.eq) goto loc_89938E54;
	// cmpwi cr6,r11,6144
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6144, ctx.xer);
	// bgt cr6,0x89938e48
	if (ctx.cr6.gt) goto loc_89938E48;
	// beq cr6,0x89938e44
	if (ctx.cr6.eq) goto loc_89938E44;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x89938e40
	if (ctx.cr6.eq) goto loc_89938E40;
	// cmpwi cr6,r11,5120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5120, ctx.xer);
	// bne cr6,0x89938ed8
	if (!ctx.cr6.eq) goto loc_89938ED8;
	// b 0x899387a8
	sub_899387A8(ctx, base);
	return;
loc_89938E40:
	// b 0x89938b70
	sub_89938B70(ctx, base);
	return;
loc_89938E44:
	// b 0x899383d8
	sub_899383D8(ctx, base);
	return;
loc_89938E48:
	// cmpwi cr6,r11,7168
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7168, ctx.xer);
	// bne cr6,0x89938ed8
	if (!ctx.cr6.eq) goto loc_89938ED8;
	// b 0x89937e00
	sub_89937E00(ctx, base);
	return;
loc_89938E54:
	// b 0x89938c90
	sub_89938C90(ctx, base);
	return;
loc_89938E58:
	// cmpwi cr6,r11,21504
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21504, ctx.xer);
	// beq cr6,0x89938e78
	if (ctx.cr6.eq) goto loc_89938E78;
	// cmpwi cr6,r11,22528
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22528, ctx.xer);
	// beq cr6,0x89938e74
	if (ctx.cr6.eq) goto loc_89938E74;
	// cmpwi cr6,r11,23552
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23552, ctx.xer);
	// bne cr6,0x89938ed8
	if (!ctx.cr6.eq) goto loc_89938ED8;
	// b 0x899380d8
	sub_899380D8(ctx, base);
	return;
loc_89938E74:
	// b 0x899385b0
	sub_899385B0(ctx, base);
	return;
loc_89938E78:
	// b 0x89938978
	sub_89938978(ctx, base);
	return;
loc_89938E7C:
	// b 0x89938bf8
	sub_89938BF8(ctx, base);
	return;
loc_89938E80:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,53248
	ctx.r9.u64 = ctx.r10.u64 | 53248;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x89938ec0
	if (ctx.cr6.gt) goto loc_89938EC0;
	// cmplwi cr6,r11,53248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53248, ctx.xer);
	// beq cr6,0x89938ebc
	if (ctx.cr6.eq) goto loc_89938EBC;
	// cmplwi cr6,r11,37888
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37888, ctx.xer);
	// beq cr6,0x89938eb8
	if (ctx.cr6.eq) goto loc_89938EB8;
	// cmplwi cr6,r11,38912
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38912, ctx.xer);
	// beq cr6,0x89938eb4
	if (ctx.cr6.eq) goto loc_89938EB4;
	// cmplwi cr6,r11,39936
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39936, ctx.xer);
	// bne cr6,0x89938ed8
	if (!ctx.cr6.eq) goto loc_89938ED8;
	// b 0x89937f68
	sub_89937F68(ctx, base);
	return;
loc_89938EB4:
	// b 0x899384b8
	sub_899384B8(ctx, base);
	return;
loc_89938EB8:
	// b 0x89938888
	sub_89938888(ctx, base);
	return;
loc_89938EBC:
	// b 0x89938d30
	sub_89938D30(ctx, base);
	return;
loc_89938EC0:
	// cmplwi cr6,r11,54272
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54272, ctx.xer);
	// beq cr6,0x89939000
	if (ctx.cr6.eq) goto loc_89939000;
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// beq cr6,0x89938ffc
	if (ctx.cr6.eq) goto loc_89938FFC;
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// beq cr6,0x89938ff8
	if (ctx.cr6.eq) goto loc_89938FF8;
loc_89938ED8:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r10,r10,25056
	ctx.r10.s64 = ctx.r10.s64 + 25056;
	// addi r9,r11,-9496
	ctx.r9.s64 = ctx.r11.s64 + -9496;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89938f80
	if (ctx.cr6.eq) goto loc_89938F80;
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x89938f80
	if (!ctx.cr6.gt) goto loc_89938F80;
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89938f54
	if (ctx.cr6.eq) goto loc_89938F54;
	// lhz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x89938f54
	if (!ctx.cr6.gt) goto loc_89938F54;
	// rlwinm r11,r7,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x89938f50
	if (ctx.cr6.eq) goto loc_89938F50;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x89938f4c
	if (ctx.cr6.eq) goto loc_89938F4C;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x89938f48
	if (ctx.cr6.eq) goto loc_89938F48;
	// b 0x89937e00
	sub_89937E00(ctx, base);
	return;
loc_89938F48:
	// b 0x89938250
	sub_89938250(ctx, base);
	return;
loc_89938F4C:
	// b 0x89937f68
	sub_89937F68(ctx, base);
	return;
loc_89938F50:
	// b 0x899380d8
	sub_899380D8(ctx, base);
	return;
loc_89938F54:
	// rlwinm r11,r7,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x89938f7c
	if (ctx.cr6.eq) goto loc_89938F7C;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x89938f78
	if (ctx.cr6.eq) goto loc_89938F78;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x89938f74
	if (ctx.cr6.eq) goto loc_89938F74;
	// b 0x899383d8
	sub_899383D8(ctx, base);
	return;
loc_89938F74:
	// b 0x899386a0
	sub_899386A0(ctx, base);
	return;
loc_89938F78:
	// b 0x899384b8
	sub_899384B8(ctx, base);
	return;
loc_89938F7C:
	// b 0x899385b0
	sub_899385B0(ctx, base);
	return;
loc_89938F80:
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89938fcc
	if (ctx.cr6.eq) goto loc_89938FCC;
	// lhz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x89938fcc
	if (!ctx.cr6.gt) goto loc_89938FCC;
	// rlwinm r11,r7,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x89938fc8
	if (ctx.cr6.eq) goto loc_89938FC8;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x89938fc4
	if (ctx.cr6.eq) goto loc_89938FC4;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x89938fc0
	if (ctx.cr6.eq) goto loc_89938FC0;
	// b 0x899387a8
	sub_899387A8(ctx, base);
	return;
loc_89938FC0:
	// b 0x89938a68
	sub_89938A68(ctx, base);
	return;
loc_89938FC4:
	// b 0x89938888
	sub_89938888(ctx, base);
	return;
loc_89938FC8:
	// b 0x89938978
	sub_89938978(ctx, base);
	return;
loc_89938FCC:
	// rlwinm r11,r7,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x89938ff4
	if (ctx.cr6.eq) goto loc_89938FF4;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x89938ff0
	if (ctx.cr6.eq) goto loc_89938FF0;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x89938fec
	if (ctx.cr6.eq) goto loc_89938FEC;
	// b 0x89938b70
	sub_89938B70(ctx, base);
	return;
loc_89938FEC:
	// b 0x89938d30
	sub_89938D30(ctx, base);
	return;
loc_89938FF0:
	// b 0x89938bf8
	sub_89938BF8(ctx, base);
	return;
loc_89938FF4:
	// b 0x89938c90
	sub_89938C90(ctx, base);
	return;
loc_89938FF8:
	// b 0x89938250
	sub_89938250(ctx, base);
	return;
loc_89938FFC:
	// b 0x899386a0
	sub_899386A0(ctx, base);
	return;
loc_89939000:
	// b 0x89938a68
	sub_89938A68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993D110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8993D118;
	__savegprlr_24(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lbz r11,6027(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 6027);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8993d17c
	if (ctx.cr6.gt) goto loc_8993D17C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8993d164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8993D164;
	// bdzf 4*cr6+eq,0x8993d31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8993D31C;
	// bdzf 4*cr6+eq,0x8993d344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8993D344;
	// bne cr6,0x8993d35c
	if (!ctx.cr6.eq) goto loc_8993D35C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,6416(r10)
	REX_STORE_U16(ctx.r10.u32 + 6416, ctx.r11.u16);
	// stb r7,6027(r8)
	REX_STORE_U8(ctx.r8.u32 + 6027, ctx.r7.u8);
	// sth r6,-21364(r9)
	REX_STORE_U16(ctx.r9.u32 + -21364, ctx.r6.u16);
	// b 0x8993d180
	goto loc_8993D180;
loc_8993D164:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r7,12321(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 12321);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8993d17c
	if (ctx.cr6.eq) goto loc_8993D17C;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8993D178:
	// stb r7,6027(r8)
	REX_STORE_U8(ctx.r8.u32 + 6027, ctx.r7.u8);
loc_8993D17C:
	// lhz r11,6416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 6416);
loc_8993D180:
	// lhz r27,-21364(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + -21364);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// rotlwi r11,r27,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// mulli r8,r4,240
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(240));
	// lwz r10,9520(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 9520);
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// srawi r3,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993d318
	if (ctx.cr6.eq) goto loc_8993D318;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8993d318
	if (ctx.cr6.eq) goto loc_8993D318;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwz r6,20424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20424);
	// ori r9,r9,32896
	ctx.r9.u64 = ctx.r9.u64 | 32896;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r7,r8,-19056
	ctx.r7.s64 = ctx.r8.s64 + -19056;
	// ble cr6,0x8993d264
	if (!ctx.cr6.gt) goto loc_8993D264;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r30,319
	ctx.r30.s64 = 20905984;
	// lwz r8,7120(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 7120);
	// rlwinm r31,r8,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r3,8152(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8152);
loc_8993D218:
	// rlwinm r8,r10,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r24,r10,r6
	ctx.r24.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r25,r10,r3
	ctx.r25.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// or r8,r25,r31
	ctx.r8.u64 = ctx.r25.u64 | ctx.r31.u64;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// blt cr6,0x8993d218
	if (ctx.cr6.lt) goto loc_8993D218;
loc_8993D264:
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,-10764(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -10764);
	// ble cr6,0x8993d2cc
	if (!ctx.cr6.gt) goto loc_8993D2CC;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// oris r3,r8,3
	ctx.r3.u64 = ctx.r8.u64 | 196608;
loc_8993D280:
	// rlwinm r8,r10,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// lhzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// blt cr6,0x8993d280
	if (ctx.cr6.lt) goto loc_8993D280;
loc_8993D2CC:
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// rlwinm r8,r28,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r7,r29,-1
	ctx.r7.s64 = ctx.r29.s64 + -1;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// addis r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -65536;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// lwz r10,19172(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19172);
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// ori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 | 1;
	// addis r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 1048576;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lis r9,-4096
	ctx.r9.s64 = -268435456;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r9,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,9520(r26)
	REX_STORE_U32(ctx.r26.u32 + 9520, ctx.r11.u32);
loc_8993D318:
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8993D31C:
	// lhz r11,6416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 6416);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,6416(r10)
	REX_STORE_U16(ctx.r10.u32 + 6416, ctx.r11.u16);
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// sth r11,-21364(r9)
	REX_STORE_U16(ctx.r9.u32 + -21364, ctx.r11.u16);
	// blt cr6,0x8993d180
	if (ctx.cr6.lt) goto loc_8993D180;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,6027(r8)
	REX_STORE_U8(ctx.r8.u32 + 6027, ctx.r10.u8);
	// b 0x8993d180
	goto loc_8993D180;
loc_8993D344:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r7,12321(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 12321);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8993d17c
	if (!ctx.cr6.eq) goto loc_8993D17C;
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x8993d178
	goto loc_8993D178;
loc_8993D35C:
	// lhz r11,6416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 6416);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,6416(r10)
	REX_STORE_U16(ctx.r10.u32 + 6416, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,-21364(r9)
	REX_STORE_U16(ctx.r9.u32 + -21364, ctx.r11.u16);
	// bne cr6,0x8993d180
	if (!ctx.cr6.eq) goto loc_8993D180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,6027(r8)
	REX_STORE_U8(ctx.r8.u32 + 6027, ctx.r10.u8);
	// b 0x8993d180
	goto loc_8993D180;
}

DEFINE_REX_FUNC(sub_89940CD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89940CD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// lis r25,-30214
	ctx.r25.s64 = -1980104704;
	// lbz r30,3730(r26)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 3730);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x89940ed4
	if (ctx.cr6.gt) goto loc_89940ED4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89940d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89940D90;
	// bdzf 4*cr6+eq,0x89940e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89940E38;
	// bne cr6,0x89941060
	if (!ctx.cr6.eq) goto loc_89941060;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9542(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9542);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89940d28
	if (!ctx.cr6.eq) goto loc_89940D28;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89940D28:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r7,-30234
	ctx.r7.s64 = -1981415424;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r6,r7,-14904
	ctx.r6.s64 = ctx.r7.s64 + -14904;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// lbz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lbz r9,65(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// stb r8,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r8.u8);
	// stb r10,-14904(r7)
	REX_STORE_U8(ctx.r7.u32 + -14904, ctx.r10.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89940D68;
	sub_899D8F48(ctx, base);
	// bl 0x8994a4f0
	ctx.lr = 0x89940D6C;
	sub_8994A4F0(ctx, base);
	// lbz r11,3730(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 3730);
	// li r31,96
	ctx.r31.s64 = 96;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// sth r5,3736(r25)
	REX_STORE_U16(ctx.r25.u32 + 3736, ctx.r5.u16);
	// stb r30,3730(r26)
	REX_STORE_U8(ctx.r26.u32 + 3730, ctx.r30.u8);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_89940D90:
	// lhz r8,3740(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 3740);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,497
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 497, ctx.xer);
	// bge cr6,0x89940df4
	if (!ctx.cr6.lt) goto loc_89940DF4;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
loc_89940DB0:
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x89940e08
	if (!ctx.cr6.eq) goto loc_89940E08;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lbzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x89940e08
	if (!ctx.cr6.eq) goto loc_89940E08;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,497
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 497, ctx.xer);
	// blt cr6,0x89940db0
	if (ctx.cr6.lt) goto loc_89940DB0;
	// sth r8,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r8.u16);
loc_89940DF4:
	// li r31,96
	ctx.r31.s64 = 96;
	// li r30,2
	ctx.r30.s64 = 2;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// stb r30,3730(r26)
	REX_STORE_U8(ctx.r26.u32 + 3730, ctx.r30.u8);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_89940E08:
	// sth r8,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r8.u16);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// li r5,2
	ctx.r5.s64 = 2;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x899d8f48
	ctx.lr = 0x89940E20;
	sub_899D8F48(ctx, base);
	// lhz r11,3740(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 3740);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// lbz r30,3730(r26)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 3730);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_89940E38:
	// lhz r31,3740(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 3740);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// addi r28,r10,12280
	ctx.r28.s64 = ctx.r10.s64 + 12280;
	// cmpwi cr6,r11,497
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 497, ctx.xer);
	// bge cr6,0x89940e98
	if (!ctx.cr6.lt) goto loc_89940E98;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r27,r10,8544
	ctx.r27.s64 = ctx.r10.s64 + 8544;
loc_89940E58:
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x89940f84
	if (!ctx.cr6.eq) goto loc_89940F84;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x89940f84
	if (!ctx.cr6.eq) goto loc_89940F84;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,497
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 497, ctx.xer);
	// blt cr6,0x89940e58
	if (ctx.cr6.lt) goto loc_89940E58;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
loc_89940E98:
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,-14904
	ctx.r10.s64 = ctx.r11.s64 + -14904;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// lbz r11,-14904(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14904);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r11,64(r28)
	REX_STORE_U8(ctx.r28.u32 + 64, ctx.r11.u8);
	// stb r10,65(r28)
	REX_STORE_U8(ctx.r28.u32 + 65, ctx.r10.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89940EC0;
	sub_899D8F48(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,3730(r26)
	REX_STORE_U8(ctx.r26.u32 + 3730, ctx.r30.u8);
	// stb r11,9542(r9)
	REX_STORE_U8(ctx.r9.u32 + 9542, ctx.r11.u8);
loc_89940ED4:
	// lhz r31,3740(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 3740);
loc_89940ED8:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r30,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,19644
	ctx.r9.s64 = ctx.r11.s64 + 19644;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x89931d78
	ctx.lr = 0x89940EFC;
	sub_89931D78(ctx, base);
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lbz r7,530(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 530);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89940f78
	if (ctx.cr6.eq) goto loc_89940F78;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lhz r10,3736(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 3736);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// addi r5,r8,5344
	ctx.r5.s64 = ctx.r8.s64 + 5344;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r3,r10,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r4,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r4,30,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r11,r3,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// addi r3,r7,-31400
	ctx.r3.s64 = ctx.r7.s64 + -31400;
	// lwzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r4,r4,12280
	ctx.r4.s64 = ctx.r4.s64 + 12280;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stw r11,488(r3)
	REX_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// stw r9,476(r3)
	REX_STORE_U32(ctx.r3.u32 + 476, ctx.r9.u32);
	// stw r10,492(r3)
	REX_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// stb r8,3(r4)
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// stw r7,480(r3)
	REX_STORE_U32(ctx.r3.u32 + 480, ctx.r7.u32);
loc_89940F78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89940F84:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// ori r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 4096;
	// rlwinm r10,r9,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FE;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x89940fdc
	if (ctx.cr6.gt) goto loc_89940FDC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// bctrl 
	ctx.lr = 0x89940FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r30,3730(r26)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + 3730);
	// lhz r31,3740(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 3740);
loc_89940FDC:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x89941028
	if (!ctx.cr6.eq) goto loc_89941028;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x89941028
	if (!ctx.cr6.eq) goto loc_89941028;
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// stbx r9,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_89941028:
	// lhz r11,3736(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 3736);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,3736(r25)
	REX_STORE_U16(ctx.r25.u32 + 3736, ctx.r11.u16);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x8994104c
	if (!ctx.cr6.eq) goto loc_8994104C;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r30,3730(r26)
	REX_STORE_U8(ctx.r26.u32 + 3730, ctx.r30.u8);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_8994104C:
	// li r31,96
	ctx.r31.s64 = 96;
	// li r30,1
	ctx.r30.s64 = 1;
	// sth r31,3740(r29)
	REX_STORE_U16(ctx.r29.u32 + 3740, ctx.r31.u16);
	// stb r30,3730(r26)
	REX_STORE_U8(ctx.r26.u32 + 3730, ctx.r30.u8);
	// b 0x89940ed8
	goto loc_89940ED8;
loc_89941060:
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,32550(r10)
	REX_STORE_U8(ctx.r10.u32 + 32550, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899442B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899442B8;
	__savegprlr_14(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r11,r11,5344
	ctx.r11.s64 = ctx.r11.s64 + 5344;
	// addi r19,r10,20564
	ctx.r19.s64 = ctx.r10.s64 + 20564;
	// lis r5,16319
	ctx.r5.s64 = 1069481984;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r19,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r19.u32);
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// lbz r10,-9660(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -9660);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lbz r9,-9656(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -9656);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// extsb r27,r10
	ctx.r27.s64 = ctx.r10.s8;
	// lbz r8,-9652(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -9652);
	// extsb r21,r9
	ctx.r21.s64 = ctx.r9.s8;
	// lbz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// stw r28,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r28.u32);
	// extsb r20,r8
	ctx.r20.s64 = ctx.r8.s8;
	// stw r27,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r27.u32);
	// extsb r18,r10
	ctx.r18.s64 = ctx.r10.s8;
	// stw r21,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r20,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r20.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// stw r18,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r18.u32);
	// lhz r22,-21584(r9)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r9.u32 + -21584);
	// ori r29,r5,49152
	ctx.r29.u64 = ctx.r5.u64 | 49152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r10,12280
	ctx.r9.s64 = ctx.r10.s64 + 12280;
	// addi r5,r8,-31400
	ctx.r5.s64 = ctx.r8.s64 + -31400;
	// addi r23,r7,13024
	ctx.r23.s64 = ctx.r7.s64 + 13024;
	// addi r24,r6,9656
	ctx.r24.s64 = ctx.r6.s64 + 9656;
	// addi r26,r3,25128
	ctx.r26.s64 = ctx.r3.s64 + 25128;
	// b 0x89944358
	goto loc_89944358;
loc_89944344:
	// lwz r19,-188(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r18,-184(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r20,-180(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r21,-176(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r27,-172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_89944358:
	// addi r7,r11,-9576
	ctx.r7.s64 = ctx.r11.s64 + -9576;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// addi r8,r11,-9660
	ctx.r8.s64 = ctx.r11.s64 + -9660;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbzx r6,r28,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
	// addi r6,r25,19
	ctx.r6.s64 = ctx.r25.s64 + 19;
	// extsb r31,r6
	ctx.r31.s64 = ctx.r6.s8;
	// rlwinm r30,r31,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// beq cr6,0x899443a4
	if (ctx.cr6.eq) goto loc_899443A4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_8994438C:
	// lbzu r3,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r27,r29,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r29.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8994438c
	if (!ctx.cr6.eq) goto loc_8994438C;
loc_899443A4:
	// mulli r27,r28,696
	ctx.r27.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(696));
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r6,r26,588
	ctx.r6.s64 = ctx.r26.s64 + 588;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// lwzx r17,r27,r8
	ctx.r17.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// rlwinm r8,r3,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r16,r17,30,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 30) & 0x3C;
	// lwzx r7,r27,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// rlwinm r15,r17,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stbx r4,r3,r9
	REX_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u8);
	// rlwinm r6,r17,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwzx r7,r16,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// clrlwi r6,r17,24
	ctx.r6.u64 = ctx.r17.u32 & 0xFF;
	// lwzx r3,r15,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89944440
	if (ctx.cr6.eq) goto loc_89944440;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r5,36
	ctx.r7.s64 = ctx.r5.s64 + 36;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8994443c
	if (ctx.cr6.eq) goto loc_8994443C;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_89944420:
	// addis r8,r8,16576
	ctx.r8.s64 = ctx.r8.s64 + 1086324736;
	// addi r8,r8,16384
	ctx.r8.s64 = ctx.r8.s64 + 16384;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89944420
	if (!ctx.cr6.eq) goto loc_89944420;
loc_8994443C:
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
loc_89944440:
	// addi r7,r25,18
	ctx.r7.s64 = ctx.r25.s64 + 18;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// extsb r31,r7
	ctx.r31.s64 = ctx.r7.s8;
	// addi r8,r11,-9656
	ctx.r8.s64 = ctx.r11.s64 + -9656;
	// rlwinm r6,r31,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// beq cr6,0x89944480
	if (ctx.cr6.eq) goto loc_89944480;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_89944468:
	// lbzu r3,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r30,r29,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r29.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stwu r30,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r6.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89944468
	if (!ctx.cr6.eq) goto loc_89944468;
loc_89944480:
	// addi r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 + 12;
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r8,r25,17
	ctx.r8.s64 = ctx.r25.s64 + 17;
	// rlwinm r7,r6,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// lwzx r31,r27,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// stbx r4,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u8);
	// rlwinm r6,r3,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r30,r31,30,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwzx r21,r30,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwzx r31,r31,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r11,-9652
	ctx.r7.s64 = ctx.r11.s64 + -9652;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// beq cr6,0x899444fc
	if (ctx.cr6.eq) goto loc_899444FC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
loc_899444E4:
	// lbzu r31,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// subf r21,r29,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r29.u64;
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// stwu r21,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r21.u32);
	ctx.r6.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899444e4
	if (!ctx.cr6.eq) goto loc_899444E4;
loc_899444FC:
	// addi r7,r26,16
	ctx.r7.s64 = ctx.r26.s64 + 16;
	// stbx r4,r3,r9
	REX_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u8);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// rlwinm r8,r6,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwzx r7,r27,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r4,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r7,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// beq cr6,0x89944564
	if (ctx.cr6.eq) goto loc_89944564;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r7,r30,-4
	ctx.r7.s64 = ctx.r30.s64 + -4;
loc_8994454C:
	// lbzu r6,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r31,r29,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r29.u64;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8994454c
	if (!ctx.cr6.eq) goto loc_8994454C;
loc_89944564:
	// stbx r4,r3,r9
	REX_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_89944570:
	// mulli r7,r3,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r7,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899446d4
	if (ctx.cr6.eq) goto loc_899446D4;
	// addi r31,r24,28
	ctx.r31.s64 = ctx.r24.s64 + 28;
	// addi r29,r26,28
	ctx.r29.s64 = ctx.r26.s64 + 28;
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// subf r10,r3,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r3.u64;
	// extsh r6,r22
	ctx.r6.s64 = ctx.r22.s16;
	// lhzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// addi r21,r10,16
	ctx.r21.s64 = ctx.r10.s64 + 16;
	// lhzx r31,r27,r29
	ctx.r31.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// rlwinm r28,r3,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r10,r27,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r30.u32);
	// rlwinm r20,r8,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r31,r6
	ctx.r10.u64 = ctx.r31.u64 + ctx.r6.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// addi r6,r10,-352
	ctx.r6.s64 = ctx.r10.s64 + -352;
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// extsh r21,r6
	ctx.r21.s64 = ctx.r6.s16;
	// srawi r6,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 4;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// rlwinm r31,r8,30,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// clrlwi r30,r6,27
	ctx.r30.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r6,r10,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// srawi r28,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r21.s32 >> 4;
	// lwzx r19,r31,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// clrlwi r31,r28,27
	ctx.r31.u64 = ctx.r28.u32 & 0x1F;
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r28,r29,24,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r19,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r19.u32);
	// rlwinm r31,r21,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 24) & 0xFF;
	// stw r20,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r20.u32);
	// rlwinm r20,r28,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r16,r31,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r14,r31,30,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// lbzx r19,r8,r23
	ctx.r19.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// rlwinm r28,r28,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3C;
	// rlwinm r30,r29,28,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// rlwinm r31,r19,30,2,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r18,r29,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// stw r31,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// addi r29,r5,36
	ctx.r29.s64 = ctx.r5.s64 + 36;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r7,r21,28,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFF;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r18,r18,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// addi r31,r5,64
	ctx.r31.s64 = ctx.r5.s64 + 64;
	// stw r28,-12(r8)
	REX_STORE_U32(ctx.r8.u32 + -12, ctx.r28.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r17,r30,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r5,56
	ctx.r30.s64 = ctx.r5.s64 + 56;
	// lwzx r15,r7,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r18,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r18.u32);
	// add r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// lwzx r29,r14,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	// stw r20,-8(r8)
	REX_STORE_U32(ctx.r8.u32 + -8, ctx.r20.u32);
	// stw r17,-4(r8)
	REX_STORE_U32(ctx.r8.u32 + -4, ctx.r17.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r15,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r15.u32);
	// add r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stwx r21,r6,r30
	REX_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r21.u32);
	// lis r30,16319
	ctx.r30.s64 = 1069481984;
	// stw r16,-8(r7)
	REX_STORE_U32(ctx.r7.u32 + -8, ctx.r16.u32);
	// stw r29,-12(r7)
	REX_STORE_U32(ctx.r7.u32 + -12, ctx.r29.u32);
	// lwzx r20,r19,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwz r28,-168(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stwx r28,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r28,-192(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// ori r29,r30,49152
	ctx.r29.u64 = ctx.r30.u64 | 49152;
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// stw r20,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
loc_899446D4:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x89944570
	if (ctx.cr6.lt) goto loc_89944570;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x89944344
	if (ctx.cr6.lt) goto loc_89944344;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948A30) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89948A38;
	__savegprlr_28(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r6,r10,22052
	ctx.r6.s64 = ctx.r10.s64 + 22052;
	// lbz r4,4947(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r3,r8,22060
	ctx.r3.s64 = ctx.r8.s64 + 22060;
	// addi r5,r9,22056
	ctx.r5.s64 = ctx.r9.s64 + 22056;
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// addi r7,r7,22064
	ctx.r7.s64 = ctx.r7.s64 + 22064;
	// lbzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r6,r4,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lbzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// addi r3,r31,6400
	ctx.r3.s64 = ctx.r31.s64 + 6400;
	// stb r9,6400(r31)
	REX_STORE_U8(ctx.r31.u32 + 6400, ctx.r9.u8);
	// stb r9,7932(r30)
	REX_STORE_U8(ctx.r30.u32 + 7932, ctx.r9.u8);
	// lis r31,-30276
	ctx.r31.s64 = -1984167936;
	// lbzx r5,r4,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// addi r30,r30,7932
	ctx.r30.s64 = ctx.r30.s64 + 7932;
	// addi r28,r29,-9500
	ctx.r28.s64 = ctx.r29.s64 + -9500;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r9,-9500(r29)
	REX_STORE_U8(ctx.r29.u32 + -9500, ctx.r9.u8);
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stb r10,32554(r31)
	REX_STORE_U8(ctx.r31.u32 + 32554, ctx.r10.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stb r5,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// stb r8,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
	// addi r4,r11,-21388
	ctx.r4.s64 = ctx.r11.s64 + -21388;
	// stb r6,1(r28)
	REX_STORE_U8(ctx.r28.u32 + 1, ctx.r6.u8);
	// bne cr6,0x89948ad8
	if (!ctx.cr6.eq) goto loc_89948AD8;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89948ad8
	if (!ctx.cr6.eq) goto loc_89948AD8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r9,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
loc_89948AD8:
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// addi r6,r10,520
	ctx.r6.s64 = ctx.r10.s64 + 520;
	// addi r10,r8,11744
	ctx.r10.s64 = ctx.r8.s64 + 11744;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r7,-2532
	ctx.r8.s64 = ctx.r7.s64 + -2532;
loc_89948AF4:
	// lbzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// bne cr6,0x89948b0c
	if (!ctx.cr6.eq) goto loc_89948B0C;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
loc_89948B0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x89948af4
	if (ctx.cr6.lt) goto loc_89948AF4;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r11,r9,-4536
	ctx.r11.s64 = ctx.r9.s64 + -4536;
	// lbz r10,12799(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12799);
	// addi r7,r11,-96
	ctx.r7.s64 = ctx.r11.s64 + -96;
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r5,r6,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,-31436(r8)
	REX_STORE_U32(ctx.r8.u32 + -31436, ctx.r10.u32);
	// beq cr6,0x89948b5c
	if (ctx.cr6.eq) goto loc_89948B5C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// stw r10,-9524(r11)
	REX_STORE_U32(ctx.r11.u32 + -9524, ctx.r10.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89948B5C:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51712
	ctx.r11.u64 = ctx.r11.u64 | 51712;
	// stw r11,-9524(r10)
	REX_STORE_U32(ctx.r10.u32 + -9524, ctx.r11.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948D60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89948D68;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// li r27,32
	ctx.r27.s64 = 32;
	// li r29,49
	ctx.r29.s64 = 49;
	// stb r4,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r4.u8);
	// li r5,51
	ctx.r5.s64 = 51;
	// stb r4,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r4.u8);
	// li r6,52
	ctx.r6.s64 = 52;
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// li r7,53
	ctx.r7.s64 = 53;
	// stb r29,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// li r8,54
	ctx.r8.s64 = 54;
	// stb r5,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r5.u8);
	// li r9,55
	ctx.r9.s64 = 55;
	// stb r6,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r6.u8);
	// li r10,56
	ctx.r10.s64 = 56;
	// stb r7,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r7.u8);
	// li r11,57
	ctx.r11.s64 = 57;
	// stb r29,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r29.u8);
	// li r4,48
	ctx.r4.s64 = 48;
	// stb r5,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// li r27,68
	ctx.r27.s64 = 68;
	// stb r6,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r6.u8);
	// stb r7,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
	// li r26,65
	ctx.r26.s64 = 65;
	// li r25,67
	ctx.r25.s64 = 67;
	// stb r8,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// li r29,69
	ctx.r29.s64 = 69;
	// stb r9,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// li r5,70
	ctx.r5.s64 = 70;
	// stb r10,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// li r6,71
	ctx.r6.s64 = 71;
	// stb r4,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r8,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// li r4,66
	ctx.r4.s64 = 66;
	// stb r9,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r9.u8);
	// li r8,73
	ctx.r8.s64 = 73;
	// stb r10,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// li r9,74
	ctx.r9.s64 = 74;
	// stb r11,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// li r10,75
	ctx.r10.s64 = 75;
	// stb r27,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r27.u8);
	// li r11,76
	ctx.r11.s64 = 76;
	// li r27,80
	ctx.r27.s64 = 80;
	// stb r26,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r26.u8);
	// stb r25,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r25.u8);
	// li r26,77
	ctx.r26.s64 = 77;
	// stb r29,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r29.u8);
	// li r24,78
	ctx.r24.s64 = 78;
	// stb r5,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r5.u8);
	// li r25,79
	ctx.r25.s64 = 79;
	// stb r6,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// li r29,81
	ctx.r29.s64 = 81;
	// stb r7,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// li r5,82
	ctx.r5.s64 = 82;
	// li r6,83
	ctx.r6.s64 = 83;
	// stb r4,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r4.u8);
	// li r7,84
	ctx.r7.s64 = 84;
	// stb r8,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r8.u8);
	// stb r9,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// li r8,85
	ctx.r8.s64 = 85;
	// stb r10,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
	// li r9,86
	ctx.r9.s64 = 86;
	// stb r11,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// li r10,87
	ctx.r10.s64 = 87;
	// stb r27,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r27.u8);
	// li r4,10
	ctx.r4.s64 = 10;
	// stb r26,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r26.u8);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r24,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r24.u8);
	// li r11,88
	ctx.r11.s64 = 88;
	// stb r25,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// li r27,89
	ctx.r27.s64 = 89;
	// stb r29,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r29.u8);
	// stb r5,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r5.u8);
	// stb r6,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r6.u8);
	// stb r7,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// stb r9,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// li r9,97
	ctx.r9.s64 = 97;
	// stb r10,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// li r10,90
	ctx.r10.s64 = 90;
	// stb r8,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r8.u8);
	// li r8,98
	ctx.r8.s64 = 98;
	// stb r11,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// li r7,99
	ctx.r7.s64 = 99;
	// stb r10,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r10.u8);
	// li r6,100
	ctx.r6.s64 = 100;
	// stb r9,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
	// li r5,101
	ctx.r5.s64 = 101;
	// li r11,102
	ctx.r11.s64 = 102;
	// stb r8,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r8.u8);
	// li r10,103
	ctx.r10.s64 = 103;
	// stb r7,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r7.u8);
	// li r9,104
	ctx.r9.s64 = 104;
	// stb r6,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r6.u8);
	// stb r5,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r5.u8);
	// li r8,105
	ctx.r8.s64 = 105;
	// stb r11,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// li r7,106
	ctx.r7.s64 = 106;
	// stb r10,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// li r6,107
	ctx.r6.s64 = 107;
	// stb r9,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r9.u8);
	// li r5,108
	ctx.r5.s64 = 108;
	// li r11,109
	ctx.r11.s64 = 109;
	// stb r8,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r8.u8);
	// li r10,110
	ctx.r10.s64 = 110;
	// stb r7,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r7.u8);
	// li r9,111
	ctx.r9.s64 = 111;
	// stb r6,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r6.u8);
	// stb r5,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r5.u8);
	// li r8,112
	ctx.r8.s64 = 112;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r7,113
	ctx.r7.s64 = 113;
	// stb r10,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// li r6,114
	ctx.r6.s64 = 114;
	// stb r9,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r9.u8);
	// li r5,115
	ctx.r5.s64 = 115;
	// li r11,116
	ctx.r11.s64 = 116;
	// stb r8,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r8.u8);
	// li r10,117
	ctx.r10.s64 = 117;
	// stb r7,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r7.u8);
	// li r9,118
	ctx.r9.s64 = 118;
	// stb r6,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r6.u8);
	// stb r5,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r5.u8);
	// li r8,119
	ctx.r8.s64 = 119;
	// stb r11,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r11.u8);
	// li r7,120
	ctx.r7.s64 = 120;
	// stb r10,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r10.u8);
	// li r6,121
	ctx.r6.s64 = 121;
	// stb r9,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r9.u8);
	// li r5,122
	ctx.r5.s64 = 122;
	// li r11,33
	ctx.r11.s64 = 33;
	// stb r27,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r27.u8);
	// li r10,63
	ctx.r10.s64 = 63;
	// stb r8,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r8.u8);
	// li r9,42
	ctx.r9.s64 = 42;
	// stb r7,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// stb r6,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r6.u8);
	// stb r5,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r5.u8);
	// stb r11,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// stb r10,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r10.u8);
	// stb r9,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// bl 0x899dab80
	ctx.lr = 0x89948FB8;
	sub_899DAB80(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r10,-31400
	ctx.r30.s64 = ctx.r10.s64 + -31400;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// li r4,10
	ctx.r4.s64 = 10;
	// lbzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stwx r10,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u32);
	// bl 0x899dab80
	ctx.lr = 0x89948FF8;
	sub_899DAB80(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x8994901c
	if (ctx.cr6.eq) goto loc_8994901C;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
loc_8994901C:
	// lbzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// or r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 | ctx.r31.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stwx r4,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// or r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 | ctx.r31.u64;
	// stwx r7,r28,r30
	REX_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89949A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89949A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x89949c30
	if (ctx.cr6.gt) goto loc_89949C30;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89949a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949A74;
	// bdzf 4*cr6+eq,0x89949ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949AD0;
	// bdzf 4*cr6+eq,0x89949b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949B18;
	// bdzf 4*cr6+eq,0x89949b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949B18;
	// bne cr6,0x89949b48
	if (!ctx.cr6.eq) goto loc_89949B48;
	// bl 0x899483f8
	ctx.lr = 0x89949A4C;
	sub_899483F8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89949a64
	if (ctx.cr6.eq) goto loc_89949A64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89949A64:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89949A74:
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
	ctx.lr = 0x89949A90;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r11,r9,-4756
	ctx.r11.s64 = ctx.r9.s64 + -4756;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x89931d78
	ctx.lr = 0x89949AA8;
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
	// beq cr6,0x89949c30
	if (ctx.cr6.eq) goto loc_89949C30;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89949AD0:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949AF0;
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
	// beq cr6,0x89949c30
	if (ctx.cr6.eq) goto loc_89949C30;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89949B18:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,-4756
	ctx.r3.s64 = ctx.r11.s64 + -4756;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949B34;
	sub_89931D78(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89949B48:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30234
	ctx.r10.s64 = -1981415424;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// addi r29,r10,-14904
	ctx.r29.s64 = ctx.r10.s64 + -14904;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lbz r10,65(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 65);
	// stb r9,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// stb r11,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r10,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// stb r11,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89949B88;
	sub_899D8F48(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r28,r10,8544
	ctx.r28.s64 = ctx.r10.s64 + 8544;
loc_89949B98:
	// lbzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x89949bc4
	if (!ctx.cr6.eq) goto loc_89949BC4;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x89949bd8
	if (ctx.cr6.eq) goto loc_89949BD8;
loc_89949BC4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r5,2
	ctx.r5.s64 = 2;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x899d8f48
	ctx.lr = 0x89949BD8;
	sub_899D8F48(ctx, base);
loc_89949BD8:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x89949b98
	if (ctx.cr6.lt) goto loc_89949B98;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r11,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stb r10,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89949C0C;
	sub_899D8F48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_89949C10:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,96
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 96, ctx.xer);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt cr6,0x89949c10
	if (ctx.cr6.lt) goto loc_89949C10;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_89949C30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994B9B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8994B9C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,16576
	ctx.r31.s64 = 1086324736;
	// lis r4,32639
	ctx.r4.s64 = 2139029504;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r3,16448
	ctx.r3.s64 = 1077936128;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// ori r20,r31,16384
	ctx.r20.u64 = ctx.r31.u64 | 16384;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r4,32768
	ctx.r27.u64 = ctx.r4.u64 | 32768;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r25,r3,49152
	ctx.r25.u64 = ctx.r3.u64 | 49152;
	// lis r19,-30253
	ctx.r19.s64 = -1982660608;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r29,r10,12280
	ctx.r29.s64 = ctx.r10.s64 + 12280;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
	// addi r22,r8,23460
	ctx.r22.s64 = ctx.r8.s64 + 23460;
	// addi r21,r7,23432
	ctx.r21.s64 = ctx.r7.s64 + 23432;
	// addi r24,r6,20432
	ctx.r24.s64 = ctx.r6.s64 + 20432;
	// addi r23,r5,-4916
	ctx.r23.s64 = ctx.r5.s64 + -4916;
loc_8994BA20:
	// bl 0x899301c0
	ctx.lr = 0x8994BA24;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994BA28;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994BA30;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8994BA34;
	sub_899306A8(ctx, base);
	// lbz r9,-10960(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + -10960);
	// lbz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8994ba7c
	if (ctx.cr6.eq) goto loc_8994BA7C;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BA64:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r27,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994ba64
	if (!ctx.cr6.eq) goto loc_8994BA64;
loc_8994BA7C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r28,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r28.u8);
loc_8994BA84:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r31,-10960
	ctx.r10.s64 = ctx.r31.s64 + -10960;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,-10960
	ctx.r7.s64 = ctx.r31.s64 + -10960;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// rlwinm r4,r6,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// beq cr6,0x8994bae4
	if (ctx.cr6.eq) goto loc_8994BAE4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
loc_8994BACC:
	// lbzu r4,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + ctx.r25.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// stwu r3,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8994bacc
	if (!ctx.cr6.eq) goto loc_8994BACC;
loc_8994BAE4:
	// stbx r28,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r28.u8);
	// addi r10,r31,-10960
	ctx.r10.s64 = ctx.r31.s64 + -10960;
	// addi r8,r31,-10960
	ctx.r8.s64 = ctx.r31.s64 + -10960;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r5,r8,32
	ctx.r5.s64 = ctx.r8.s64 + 32;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// addi r10,r30,80
	ctx.r10.s64 = ctx.r30.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r7,r4,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// lhzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r8,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r18,r8,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r5,28,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r17,r8,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r16,r8,30,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// addi r8,r30,104
	ctx.r8.s64 = ctx.r30.s64 + 104;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// stbx r28,r4,r29
	REX_STORE_U8(ctx.r4.u32 + ctx.r29.u32, ctx.r28.u8);
	// clrlwi r14,r9,24
	ctx.r14.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r15,r6,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stbx r28,r4,r29
	REX_STORE_U8(ctx.r4.u32 + ctx.r29.u32, ctx.r28.u8);
	// rlwinm r3,r6,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// rlwinm r6,r15,28,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFF;
	// rlwinm r4,r15,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// rlwinm r15,r6,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmplwi cr6,r14,14
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 14, ctx.xer);
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r4,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// stw r15,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r15.u32);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// stwx r18,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r18.u32);
	// stw r5,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// stw r17,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r17.u32);
	// stw r16,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r16.u32);
	// blt cr6,0x8994ba84
	if (ctx.cr6.lt) goto loc_8994BA84;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lbz r8,256(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 256);
	// addi r9,r31,-10960
	ctx.r9.s64 = ctx.r31.s64 + -10960;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,28
	ctx.r6.s64 = ctx.r9.s64 + 28;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lwzx r10,r3,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// beq cr6,0x8994bbfc
	if (ctx.cr6.eq) goto loc_8994BBFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994bbf8
	if (ctx.cr6.eq) goto loc_8994BBF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// b 0x8994bbfc
	goto loc_8994BBFC;
loc_8994BBF8:
	// li r26,13
	ctx.r26.s64 = 13;
loc_8994BBFC:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994bc24
	if (ctx.cr6.eq) goto loc_8994BC24;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8994bc1c
	if (!ctx.cr6.eq) goto loc_8994BC1C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8994bc24
	goto loc_8994BC24;
loc_8994BC1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
loc_8994BC24:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8994bc4c
	if (ctx.cr6.eq) goto loc_8994BC4C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8994bc44
	if (ctx.cr6.eq) goto loc_8994BC44;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x8994bc50
	goto loc_8994BC50;
loc_8994BC44:
	// li r9,256
	ctx.r9.s64 = 256;
	// b 0x8994bc50
	goto loc_8994BC50;
loc_8994BC4C:
	// li r9,16
	ctx.r9.s64 = 16;
loc_8994BC50:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994bc9c
	if (ctx.cr6.eq) goto loc_8994BC9C;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r5,r31,-10960
	ctx.r5.s64 = ctx.r31.s64 + -10960;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// sth r7,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lhzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8994bc9c
	if (!ctx.cr6.gt) goto loc_8994BC9C;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8994BC9C:
	// lbz r11,256(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 256);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8994bcf0
	if (ctx.cr6.eq) goto loc_8994BCF0;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-10960
	ctx.r8.s64 = ctx.r31.s64 + -10960;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r11,r8,34
	ctx.r11.s64 = ctx.r8.s64 + 34;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lhzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8994bcf0
	if (!ctx.cr6.lt) goto loc_8994BCF0;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8994BCF0:
	// lbz r11,256(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 256);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r10,96
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 96, ctx.xer);
	// bne cr6,0x8994bd4c
	if (!ctx.cr6.eq) goto loc_8994BD4C;
	// lbz r11,128(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8994bd4c
	if (!ctx.cr6.eq) goto loc_8994BD4C;
loc_8994BD0C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r31,-10960
	ctx.r10.s64 = ctx.r31.s64 + -10960;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-10960
	ctx.r8.s64 = ctx.r31.s64 + -10960;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lwzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// sth r4,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r4.u16);
	// blt cr6,0x8994bd0c
	if (ctx.cr6.lt) goto loc_8994BD0C;
loc_8994BD4C:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lbz r10,-10032(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -10032);
	// addi r7,r31,-10960
	ctx.r7.s64 = ctx.r31.s64 + -10960;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,-10032
	ctx.r10.s64 = ctx.r31.s64 + -10032;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8994bda4
	if (ctx.cr6.eq) goto loc_8994BDA4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BD8C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r20
	ctx.r6.u64 = ctx.r11.u64 + ctx.r20.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994bd8c
	if (!ctx.cr6.eq) goto loc_8994BD8C;
loc_8994BDA4:
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stbx r28,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r28.u8);
	// addi r9,r30,648
	ctx.r9.s64 = ctx.r30.s64 + 648;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994bddc
	if (ctx.cr6.eq) goto loc_8994BDDC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BDC4:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r27,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994bdc4
	if (!ctx.cr6.eq) goto loc_8994BDC4;
loc_8994BDDC:
	// lbz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r28,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r28.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994be18
	if (ctx.cr6.eq) goto loc_8994BE18;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BE00:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r27,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994be00
	if (!ctx.cr6.eq) goto loc_8994BE00;
loc_8994BE18:
	// lbz r11,-10028(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10028);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r10,r31,-10028
	ctx.r10.s64 = ctx.r31.s64 + -10028;
	// stb r28,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r28.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,268
	ctx.r9.s64 = ctx.r30.s64 + 268;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994be54
	if (ctx.cr6.eq) goto loc_8994BE54;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BE3C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r27,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994be3c
	if (!ctx.cr6.eq) goto loc_8994BE3C;
loc_8994BE54:
	// lbz r11,-10000(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10000);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r10,r31,-10000
	ctx.r10.s64 = ctx.r31.s64 + -10000;
	// stb r28,2(r29)
	REX_STORE_U8(ctx.r29.u32 + 2, ctx.r28.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,148
	ctx.r9.s64 = ctx.r30.s64 + 148;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994be90
	if (ctx.cr6.eq) goto loc_8994BE90;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994BE78:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r27,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994be78
	if (!ctx.cr6.eq) goto loc_8994BE78;
loc_8994BE90:
	// stb r28,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r28.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x89930720
	ctx.lr = 0x8994BEA4;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x8994BEA8;
	sub_899319C8(ctx, base);
	// lbz r11,3632(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994ba20
	if (ctx.cr6.eq) goto loc_8994BA20;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
loc_8994BEC4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r8,r31,-10960
	ctx.r8.s64 = ctx.r31.s64 + -10960;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,28
	ctx.r6.s64 = ctx.r8.s64 + 28;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r31,-10960
	ctx.r9.s64 = ctx.r31.s64 + -10960;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r9,38
	ctx.r4.s64 = ctx.r9.s64 + 38;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lwzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lbzx r7,r5,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmplwi cr6,r6,14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 14, ctx.xer);
	// lbz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stbx r4,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r4.u8);
	// lhz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stbx r8,r5,r9
	REX_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u8);
	// blt cr6,0x8994bec4
	if (ctx.cr6.lt) goto loc_8994BEC4;
	// bl 0x89949960
	ctx.lr = 0x8994BF20;
	sub_89949960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89954238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89954240;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r29,r31,r28
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r9,r29,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899542a4
	if (!ctx.cr6.eq) goto loc_899542A4;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x899337b0
	ctx.lr = 0x8995427C;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954470
	if (ctx.cr6.eq) goto loc_89954470;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89933a98
	ctx.lr = 0x89954290;
	sub_89933A98(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954470
	if (ctx.cr6.eq) goto loc_89954470;
	// ori r11,r29,8
	ctx.r11.u64 = ctx.r29.u64 | 8;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
loc_899542A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991a058
	ctx.lr = 0x899542AC;
	sub_8991A058(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954470
	if (ctx.cr6.eq) goto loc_89954470;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
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
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932798
	ctx.lr = 0x899542EC;
	sub_89932798(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89954470
	if (ctx.cr6.eq) goto loc_89954470;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r28,r29,3360
	ctx.r28.s64 = ctx.r29.s64 + 3360;
	// lwz r4,3360(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 3360);
	// lwz r3,7904(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// bl 0x899d3370
	ctx.lr = 0x89954318;
	sub_899D3370(ctx, base);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// lis r4,-14336
	ctx.r4.s64 = -939524096;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// ori r20,r11,32896
	ctx.r20.u64 = ctx.r11.u64 | 32896;
	// rlwinm r10,r27,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r4,4096
	ctx.r4.u64 = ctx.r4.u64 | 4096;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r26,r30,28
	ctx.r26.s64 = ctx.r30.s64 + 28;
	// addi r24,r30,637
	ctx.r24.s64 = ctx.r30.s64 + 637;
	// li r23,665
	ctx.r23.s64 = 665;
	// li r22,192
	ctx.r22.s64 = 192;
	// li r21,128
	ctx.r21.s64 = 128;
	// addi r30,r30,636
	ctx.r30.s64 = ctx.r30.s64 + 636;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r11,3360(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3360);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// sth r9,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r9.u16);
	// stw r27,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r27.u32);
	// lwzx r7,r31,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// sth r23,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r23.u16);
	// stb r22,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r22.u8);
	// stb r21,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r21.u8);
	// stw r20,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r20.u32);
	// stb r9,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// lbzx r3,r31,r24
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// ori r6,r7,4096
	ctx.r6.u64 = ctx.r7.u64 | 4096;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// addi r7,r10,-15836
	ctx.r7.s64 = ctx.r10.s64 + -15836;
loc_899543E0:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// cmpwi cr6,r9,23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 23, ctx.xer);
	// lbzx r29,r31,r7
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// lhz r29,124(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 124);
	// sth r29,124(r10)
	REX_STORE_U16(ctx.r10.u32 + 124, ctx.r29.u16);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lhz r29,48(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r29,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r29.u16);
	// stw r3,120(r10)
	REX_STORE_U32(ctx.r10.u32 + 120, ctx.r3.u32);
	// sth r4,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r4.u16);
	// lwz r29,24(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r29,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r29,36(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r29,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// lbzx r31,r31,r30
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// stw r31,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r31.u32);
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r31,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r31.u32);
	// blt cr6,0x899543e0
	if (ctx.cr6.lt) goto loc_899543E0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89936218
	ctx.lr = 0x89954464;
	sub_89936218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89954470:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899554A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899554B0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// sth r3,246(r1)
	REX_STORE_U16(ctx.r1.u32 + 246, ctx.r3.u16);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,25128
	ctx.r31.s64 = ctx.r11.s64 + 25128;
	// mulli r26,r10,696
	ctx.r26.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r30,r26,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89955504
	if (!ctx.cr6.eq) goto loc_89955504;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x899337b0
	ctx.lr = 0x899554F0;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89955770
	if (ctx.cr6.eq) goto loc_89955770;
	// ori r11,r30,8
	ctx.r11.u64 = ctx.r30.u64 | 8;
	// stwx r11,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r11.u32);
loc_89955504:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,637
	ctx.r9.s64 = ctx.r31.s64 + 637;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r11,r8,25696
	ctx.r11.s64 = ctx.r8.s64 + 25696;
	// lwzx r7,r26,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lbzx r8,r26,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r30,r4,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r29,r4,r6
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// extsb r15,r30
	ctx.r15.s64 = ctx.r30.s8;
	// rlwinm r3,r15,4,16,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0xFFF0;
	// bl 0x8991a058
	ctx.lr = 0x89955548;
	sub_8991A058(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89955770
	if (ctx.cr6.eq) goto loc_89955770;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932798
	ctx.lr = 0x89955568;
	sub_89932798(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89955770
	if (ctx.cr6.eq) goto loc_89955770;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r11,r11,3360
	ctx.r11.s64 = ctx.r11.s64 + 3360;
	// addi r10,r10,7904
	ctx.r10.s64 = ctx.r10.s64 + 7904;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x89955764
	if (!ctx.cr6.gt) goto loc_89955764;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r19,r31,24
	ctx.r19.s64 = ctx.r31.s64 + 24;
	// addi r20,r31,28
	ctx.r20.s64 = ctx.r31.s64 + 28;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// addi r24,r11,-4
	ctx.r24.s64 = ctx.r11.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r17,3504(r8)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r8.u32 + 3504);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// lis r21,-14336
	ctx.r21.s64 = -939524096;
	// li r22,5
	ctx.r22.s64 = 5;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// li r27,20
	ctx.r27.s64 = 20;
	// li r28,2
	ctx.r28.s64 = 2;
	// lis r29,512
	ctx.r29.s64 = 33554432;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// addi r30,r10,9016
	ctx.r30.s64 = ctx.r10.s64 + 9016;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
loc_899555E8:
	// lwzu r10,4(r24)
	ea = 4 + ctx.r24.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r22,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// sth r11,124(r10)
	REX_STORE_U16(ctx.r10.u32 + 124, ctx.r11.u16);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r5.u32);
	// lwzx r4,r26,r19
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// lhz r11,-4(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + -4);
	// rotlwi r5,r11,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r11,116(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// stw r5,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// lwzx r4,r26,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r20.u32);
	// lhz r5,-2(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r4,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// lhz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// addi r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 128;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// stw r5,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stb r9,128(r10)
	REX_STORE_U8(ctx.r10.u32 + 128, ctx.r9.u8);
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r7,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r7.u32);
	// sth r9,126(r10)
	REX_STORE_U16(ctx.r10.u32 + 126, ctx.r9.u16);
	// sth r9,50(r10)
	REX_STORE_U16(ctx.r10.u32 + 50, ctx.r9.u16);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_89955694:
	// addi r5,r8,13
	ctx.r5.s64 = ctx.r8.s64 + 13;
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r5,648(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r5,644(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 644);
	// stb r9,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r9.u8);
	// stb r9,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r9.u8);
	// stb r9,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r29,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stb r9,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r9.u8);
	// stb r9,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blt cr6,0x89955694
	if (ctx.cr6.lt) goto loc_89955694;
	// lwz r11,-9516(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -9516);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8995573c
	if (ctx.cr6.eq) goto loc_8995573C;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bgt cr6,0x89955724
	if (ctx.cr6.gt) goto loc_89955724;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_89955724:
	// lwz r10,8420(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8420);
	// stw r11,-9516(r23)
	REX_STORE_U32(ctx.r23.u32 + -9516, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8995574c
	if (!ctx.cr6.lt) goto loc_8995574C;
	// stw r10,-9516(r23)
	REX_STORE_U32(ctx.r23.u32 + -9516, ctx.r10.u32);
	// b 0x8995574c
	goto loc_8995574C;
loc_8995573C:
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// ble cr6,0x8995574c
	if (!ctx.cr6.gt) goto loc_8995574C;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,-9516(r23)
	REX_STORE_U32(ctx.r23.u32 + -9516, ctx.r11.u32);
loc_8995574C:
	// addi r11,r16,1
	ctx.r11.s64 = ctx.r16.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x899555e8
	if (ctx.cr6.lt) goto loc_899555E8;
	// lhz r25,246(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 246);
loc_89955764:
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89936218
	ctx.lr = 0x89955770;
	sub_89936218(ctx, base);
loc_89955770:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956D00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89956D08;
	__savegprlr_24(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
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
	// bl 0x89934fb8
	ctx.lr = 0x89956D40;
	sub_89934FB8(ctx, base);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
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
	ctx.lr = 0x89956D74;
	sub_89934FB8(ctx, base);
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r5,-31740
	ctx.r5.s64 = -31740;
	// addi r31,r11,-29408
	ctx.r31.s64 = ctx.r11.s64 + -29408;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// li r9,224
	ctx.r9.s64 = 224;
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89956DB0;
	sub_89934FB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_89956DB8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_89956DC4:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,-1328
	ctx.r7.s64 = ctx.r31.s64 + -1328;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89956E08:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89956e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89956E08;
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// addi r7,r31,-2008
	ctx.r7.s64 = ctx.r31.s64 + -2008;
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
loc_89956E34:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x89956e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89956E34;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x89956dc4
	if (ctx.cr6.lt) goto loc_89956DC4;
	// addi r10,r31,-1328
	ctx.r10.s64 = ctx.r31.s64 + -1328;
	// addi r11,r31,3632
	ctx.r11.s64 = ctx.r31.s64 + 3632;
	// mulli r28,r30,170
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// mulli r29,r30,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,-648
	ctx.r6.s64 = ctx.r31.s64 + -648;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89956E7C;
	sub_89935880(ctx, base);
	// addi r10,r31,-2008
	ctx.r10.s64 = ctx.r31.s64 + -2008;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x89956E98;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89956db8
	if (ctx.cr6.lt) goto loc_89956DB8;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r10,3484
	ctx.r5.s64 = ctx.r10.s64 + 3484;
	// addi r4,r11,27296
	ctx.r4.s64 = ctx.r11.s64 + 27296;
loc_89956EC0:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r6,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(108));
	// lhzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// ori r7,r9,8
	ctx.r7.u64 = ctx.r9.u64 | 8;
	// addi r9,r31,432
	ctx.r9.s64 = ctx.r31.s64 + 432;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89956f18
	if (!ctx.cr6.gt) goto loc_89956F18;
	// rlwinm r7,r10,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xC0000000;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_89956EF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89956ef0
	if (ctx.cr6.lt) goto loc_89956EF0;
loc_89956F18:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89956ec0
	if (ctx.cr6.lt) goto loc_89956EC0;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
loc_89956F44:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r4,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r3,r31,-648
	ctx.r3.s64 = ctx.r31.s64 + -648;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lhzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r28,r31,-648
	ctx.r28.s64 = ctx.r31.s64 + -648;
	// lhzx r9,r7,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r30,r31,-648
	ctx.r30.s64 = ctx.r31.s64 + -648;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r24,r11,15,0,16
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// addi r4,r31,-648
	ctx.r4.s64 = ctx.r31.s64 + -648;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwx r11,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r7,r31,-648
	ctx.r7.s64 = ctx.r31.s64 + -648;
	// addi r29,r31,-648
	ctx.r29.s64 = ctx.r31.s64 + -648;
	// addi r5,r31,-648
	ctx.r5.s64 = ctx.r31.s64 + -648;
	// stwx r10,r26,r30
	REX_STORE_U32(ctx.r26.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r6,r31,-648
	ctx.r6.s64 = ctx.r31.s64 + -648;
	// stwx r10,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r10.u32);
	// srawi r9,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 8;
	// addi r3,r7,32
	ctx.r3.s64 = ctx.r7.s64 + 32;
	// addi r24,r31,-648
	ctx.r24.s64 = ctx.r31.s64 + -648;
	// stwx r9,r26,r4
	REX_STORE_U32(ctx.r26.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// extsh r7,r25
	ctx.r7.s64 = ctx.r25.s16;
	// stwx r27,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r27.u32);
	// neg r30,r11
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r10,r26,r24
	REX_STORE_U32(ctx.r26.u32 + ctx.r24.u32, ctx.r10.u32);
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stwx r10,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r10.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stwx r30,r26,r5
	REX_STORE_U32(ctx.r26.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r4,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r4.u32);
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// blt cr6,0x89956f44
	if (ctx.cr6.lt) goto loc_89956F44;
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899594A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899594B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89959564
	if (!ctx.cr6.eq) goto loc_89959564;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lhz r3,48(r6)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lhz r8,52(r6)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + 52);
	// lhz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// ori r6,r11,20077
	ctx.r6.u64 = ctx.r11.u64 | 20077;
	// lhz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// lwz r11,-9212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -9212);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,-9212(r4)
	REX_STORE_U32(ctx.r4.u32 + -9212, ctx.r11.u32);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// rlwinm r11,r4,3,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// addis r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 262144;
	// bl 0x899d8328
	ctx.lr = 0x89959538;
	sub_899D8328(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8995954c
	if (ctx.cr6.eq) goto loc_8995954C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,128(r31)
	REX_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
loc_8995954C:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r29,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x1;
	// addi r9,r11,29216
	ctx.r9.s64 = ctx.r11.s64 + 29216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x89936218
	ctx.lr = 0x89959564;
	sub_89936218(ctx, base);
loc_89959564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995A188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8995A190;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r31,r11,21808
	ctx.r31.s64 = ctx.r11.s64 + 21808;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-1408
	ctx.r7.s64 = ctx.r31.s64 + -1408;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x89934fb8
	ctx.lr = 0x8995A1D0;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-21064
	ctx.r28.s64 = ctx.r10.s64 + -21064;
loc_8995A1E4:
	// lwzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r11,r31,-1408
	ctx.r11.s64 = ctx.r31.s64 + -1408;
	// addi r9,r31,-936
	ctx.r9.s64 = ctx.r31.s64 + -936;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935688
	ctx.lr = 0x8995A21C;
	sub_89935688(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 28, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8995a1e4
	if (ctx.cr6.lt) goto loc_8995A1E4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// addi r3,r10,29324
	ctx.r3.s64 = ctx.r10.s64 + 29324;
loc_8995A248:
	// mulli r4,r5,132
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(132));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995A250:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r7,r6,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r8,128
	ctx.r6.s64 = ctx.r8.s64 + 128;
	// rlwinm r28,r8,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rlwinm r27,r6,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r6,r31,-528
	ctx.r6.s64 = ctx.r31.s64 + -528;
	// addi r7,r31,-528
	ctx.r7.s64 = ctx.r31.s64 + -528;
	// lhzx r28,r28,r9
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// addi r8,r31,-528
	ctx.r8.s64 = ctx.r31.s64 + -528;
	// lhzx r27,r27,r9
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r27,r10
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// addi r26,r31,-528
	ctx.r26.s64 = ctx.r31.s64 + -528;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r27,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 8;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// stwx r27,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r27.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwx r30,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r28,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stwx r30,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// blt cr6,0x8995a250
	if (ctx.cr6.lt) goto loc_8995A250;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// addi r7,r31,-528
	ctx.r7.s64 = ctx.r31.s64 + -528;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// stwx r30,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// blt cr6,0x8995a248
	if (ctx.cr6.lt) goto loc_8995A248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995A300:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r7,r31,-1128
	ctx.r7.s64 = ctx.r31.s64 + -1128;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// rlwinm r3,r10,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r6,r31,-1128
	ctx.r6.s64 = ctx.r31.s64 + -1128;
	// addi r8,r31,-1128
	ctx.r8.s64 = ctx.r31.s64 + -1128;
	// stwx r30,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u32);
	// addi r4,r31,-1128
	ctx.r4.s64 = ctx.r31.s64 + -1128;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r3,18,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xFFFFFFFC;
	// rlwinm r29,r10,18,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFFFFFC;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// srawi r7,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 8;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// stwx r30,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// blt cr6,0x8995a300
	if (ctx.cr6.lt) goto loc_8995A300;
	// addi r11,r31,-1128
	ctx.r11.s64 = ctx.r31.s64 + -1128;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r5,r11,29328
	ctx.r5.s64 = ctx.r11.s64 + 29328;
loc_8995A384:
	// mulli r6,r7,132
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(132));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995A38C:
	// lbzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r29,r11,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lhzx r29,r29,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u32);
	// stwx r30,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u32);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// stwx r29,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// blt cr6,0x8995a38c
	if (ctx.cr6.lt) goto loc_8995A38C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stwx r30,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x8995a384
	if (ctx.cr6.lt) goto loc_8995A384;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995C030) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8995C038;
	__savegprlr_24(ctx, base);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,3892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// lwz r11,19364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,6035(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6035);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9535(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9535);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,12266(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12266);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8995c210
	if (!ctx.cr6.eq) goto loc_8995C210;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r9,9527(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995c210
	if (ctx.cr6.eq) goto loc_8995C210;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8995c210
	if (!ctx.cr6.lt) goto loc_8995C210;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r10,r10,29648
	ctx.r10.s64 = ctx.r10.s64 + 29648;
	// addi r8,r8,-9508
	ctx.r8.s64 = ctx.r8.s64 + -9508;
	// lbz r11,32018(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,30,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995c210
	if (ctx.cr6.eq) goto loc_8995C210;
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8995c210
	if (!ctx.cr6.lt) goto loc_8995C210;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,27792(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 27792);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,27792(r5)
	REX_STORE_U32(ctx.r5.u32 + 27792, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8995c210
	if (ctx.cr6.lt) goto loc_8995C210;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lis r31,255
	ctx.r31.s64 = 16711680;
	// lwz r7,7120(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 7120);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// ori r10,r31,239
	ctx.r10.u64 = ctx.r31.u64 | 239;
	// lwz r11,9520(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 9520);
	// addi r31,r7,32
	ctx.r31.s64 = ctx.r7.s64 + 32;
	// lwz r7,-25884(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + -25884);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r7,r31,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// lwz r6,8152(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8152);
	// rlwinm r31,r3,24,0,7
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF000000;
	// lis r30,16903
	ctx.r30.s64 = 1107755008;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r31,r31,3328
	ctx.r31.u64 = ctx.r31.u64 | 3328;
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// lis r25,4096
	ctx.r25.s64 = 268435456;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// ori r7,r30,65535
	ctx.r7.u64 = ctx.r30.u64 | 65535;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lis r28,128
	ctx.r28.s64 = 8388608;
	// stw r24,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lis r29,128
	ctx.r29.s64 = 8388608;
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// ori r10,r28,128
	ctx.r10.u64 = ctx.r28.u64 | 128;
	// ori r7,r27,1
	ctx.r7.u64 = ctx.r27.u64 | 1;
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// ori r30,r29,32896
	ctx.r30.u64 = ctx.r29.u64 | 32896;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lis r31,-30276
	ctx.r31.s64 = -1984167936;
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// lis r6,-4096
	ctx.r6.s64 = -268435456;
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r7,r31,32560
	ctx.r7.s64 = ctx.r31.s64 + 32560;
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// lbzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r31,r31,5464
	ctx.r31.s64 = ctx.r31.s64 + 5464;
	// rlwinm r29,r3,5,11,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x1FFFE0;
	// stw r11,9520(r4)
	REX_STORE_U32(ctx.r4.u32 + 9520, ctx.r11.u32);
	// addi r7,r7,26
	ctx.r7.s64 = ctx.r7.s64 + 26;
	// addi r30,r3,1022
	ctx.r30.s64 = ctx.r3.s64 + 1022;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// sthx r30,r29,r7
	REX_STORE_U16(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r6,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r4,r3,r31
	REX_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u8);
	// stw r10,27792(r5)
	REX_STORE_U32(ctx.r5.u32 + 27792, ctx.r10.u32);
loc_8995C210:
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995ED08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// addi r9,r11,-27028
	ctx.r9.s64 = ctx.r11.s64 + -27028;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r10,-25216
	ctx.r10.s64 = ctx.r10.s64 + -25216;
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// addi r7,r9,-52
	ctx.r7.s64 = ctx.r9.s64 + -52;
	// addi r11,r10,-72
	ctx.r11.s64 = ctx.r10.s64 + -72;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r5,r5,3484
	ctx.r5.s64 = ctx.r5.s64 + 3484;
loc_8995ED30:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x8995ed30
	if (ctx.cr6.lt) goto loc_8995ED30;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8995ED64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8995ed64
	if (ctx.cr6.lt) goto loc_8995ED64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995FB10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8995FB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// addi r7,r11,-29692
	ctx.r7.s64 = ctx.r11.s64 + -29692;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,-24368
	ctx.r29.s64 = ctx.r10.s64 + -24368;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r7,52
	ctx.r9.s64 = ctx.r7.s64 + 52;
	// addi r10,r29,-584
	ctx.r10.s64 = ctx.r29.s64 + -584;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r30,r8,3484
	ctx.r30.s64 = ctx.r8.s64 + 3484;
loc_8995FB44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// blt cr6,0x8995fb44
	if (ctx.cr6.lt) goto loc_8995FB44;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r9,r7,508
	ctx.r9.s64 = ctx.r7.s64 + 508;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// addi r11,r29,-208
	ctx.r11.s64 = ctx.r29.s64 + -208;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995FB80:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8995fb80
	if (ctx.cr6.lt) goto loc_8995FB80;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r9,r7,204
	ctx.r9.s64 = ctx.r7.s64 + 204;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r10,r29,-776
	ctx.r10.s64 = ctx.r29.s64 + -776;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8995FBBC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// blt cr6,0x8995fbbc
	if (ctx.cr6.lt) goto loc_8995FBBC;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r9,r7,356
	ctx.r9.s64 = ctx.r7.s64 + 356;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// addi r11,r29,-392
	ctx.r11.s64 = ctx.r29.s64 + -392;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995FBF8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 14, ctx.xer);
	// blt cr6,0x8995fbf8
	if (ctx.cr6.lt) goto loc_8995FBF8;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r9,r29,72
	ctx.r9.s64 = ctx.r29.s64 + 72;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8995FC34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8995fc34
	if (ctx.cr6.lt) goto loc_8995FC34;
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r28,r11,4036
	ctx.r28.s64 = ctx.r11.s64 + 4036;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-120
	ctx.r7.s64 = -120;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x89934fb8
	ctx.lr = 0x8995FC9C;
	sub_89934FB8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995FCA8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8995fca8
	if (ctx.cr6.lt) goto loc_8995FCA8;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899600F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89960100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x89934208
	ctx.lr = 0x8996010C;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89960120
	if (!ctx.cr6.eq) goto loc_89960120;
loc_89960114:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89960120:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c408
	ctx.lr = 0x89960128;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89960114
	if (ctx.cr6.eq) goto loc_89960114;
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
	// stwx r9,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r30,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r30.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stwx r4,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89960174;
	sub_8992BD50(ctx, base);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// lwz r11,-21584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -21584);
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// addi r5,r31,110
	ctx.r5.s64 = ctx.r31.s64 + 110;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r4,160
	ctx.r4.s64 = 10485760;
	// li r11,516
	ctx.r11.s64 = 516;
	// stwx r3,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r10,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r4.u32);
	// sthx r11,r29,r6
	REX_STORE_U16(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u16);
	// stbx r30,r29,r5
	REX_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89960F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89960F48;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,27672
	ctx.r10.s64 = ctx.r11.s64 + 27672;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r31,r10,-2
	ctx.r31.s64 = ctx.r10.s64 + -2;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r30,r10,-20680
	ctx.r30.s64 = ctx.r10.s64 + -20680;
loc_89960F6C:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// addi r10,r30,6840
	ctx.r10.s64 = ctx.r30.s64 + 6840;
	// lhz r7,10(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r3,6(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// li r8,-58
	ctx.r8.s64 = -58;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// neg r11,r5
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// add r11,r27,r10
	ctx.r11.u64 = ctx.r27.u64 + ctx.r10.u64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934fb8
	ctx.lr = 0x89960FC8;
	sub_89934FB8(ctx, base);
	// addi r11,r30,6840
	ctx.r11.s64 = ctx.r30.s64 + 6840;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// li r8,-58
	ctx.r8.s64 = -58;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lhzu r11,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x89934fb8
	ctx.lr = 0x8996101C;
	sub_89934FB8(ctx, base);
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r5,188
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 188, ctx.xer);
	// blt cr6,0x89960f6c
	if (ctx.cr6.lt) goto loc_89960F6C;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r31,r11,3484
	ctx.r31.s64 = ctx.r11.s64 + 3484;
	// addi r5,r9,-10080
	ctx.r5.s64 = ctx.r9.s64 + -10080;
loc_89961044:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r8,r30,72
	ctx.r8.s64 = ctx.r30.s64 + 72;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,6840
	ctx.r9.s64 = ctx.r30.s64 + 6840;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_89961078:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x89961078
	if (ctx.cr6.lt) goto loc_89961078;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r7,r5,12
	ctx.r7.s64 = ctx.r5.s64 + 12;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// stwx r6,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r29,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r29,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r29.u32);
	// stwx r29,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r29.u32);
	// cmplwi cr6,r11,188
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 188, ctx.xer);
	// blt cr6,0x89961044
	if (ctx.cr6.lt) goto loc_89961044;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r5,8
	ctx.r6.s64 = ctx.r5.s64 + 8;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r29,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r30,13640
	ctx.r10.s64 = ctx.r30.s64 + 13640;
	// stwx r29,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r29.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stwx r10,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r29,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r29,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x89934fb8
	ctx.lr = 0x89961144;
	sub_89934FB8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r30,13640
	ctx.r11.s64 = ctx.r30.s64 + 13640;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_89961150:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// blt cr6,0x89961150
	if (ctx.cr6.lt) goto loc_89961150;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89962028) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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
	// addi r7,r10,60
	ctx.r7.s64 = ctx.r10.s64 + 60;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// addi r4,r10,68
	ctx.r4.s64 = ctx.r10.s64 + 68;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lwzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r8,-21584(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// beq cr6,0x899620a8
	if (ctx.cr6.eq) goto loc_899620A8;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bne cr6,0x89962120
	if (!ctx.cr6.eq) goto loc_89962120;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x89962120
	if (!ctx.cr6.eq) goto loc_89962120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899620A8:
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,110
	ctx.r6.s64 = ctx.r10.s64 + 110;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
loc_899620C0:
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x899620d8
	if (!ctx.cr6.gt) goto loc_899620D8;
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x899620dc
	goto loc_899620DC;
loc_899620D8:
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
loc_899620DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,144
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 144, ctx.xer);
	// blt cr6,0x899620c0
	if (ctx.cr6.lt) goto loc_899620C0;
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// cmplwi cr6,r8,144
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 144, ctx.xer);
	// bne cr6,0x89962120
	if (!ctx.cr6.eq) goto loc_89962120;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// stbx r5,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r8,r9,9448
	ctx.r8.s64 = ctx.r9.s64 + 9448;
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stbx r5,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u8);
loc_89962120:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89962E88) {
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
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r31,r11,-3864
	ctx.r31.s64 = ctx.r11.s64 + -3864;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x89962EDC;
	sub_89934B48(ctx, base);
	// lis r7,-30304
	ctx.r7.s64 = -1986002944;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,23960
	ctx.r6.s64 = ctx.r7.s64 + 23960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x89962EF8;
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

DEFINE_REX_FUNC(sub_89962FB8) {
	REX_FUNC_PROLOGUE();
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
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x89963154
	if (ctx.cr6.lt) goto loc_89963154;
	// beq cr6,0x89963058
	if (ctx.cr6.eq) goto loc_89963058;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8996317c
	if (!ctx.cr6.lt) goto loc_8996317C;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r9,3892(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3892);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89963068
	if (ctx.cr6.eq) goto loc_89963068;
	// addi r8,r10,72
	ctx.r8.s64 = ctx.r10.s64 + 72;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89963068
	if (ctx.cr6.lt) goto loc_89963068;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// li r7,120
	ctx.r7.s64 = 120;
	// divw r6,r9,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x89963068
	if (!ctx.cr6.eq) goto loc_89963068;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x89963038
	if (!ctx.cr6.gt) goto loc_89963038;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89963038:
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8996317c
	if (!ctx.cr6.gt) goto loc_8996317C;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89963058:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r5,3892(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 3892);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x89963078
	if (!ctx.cr6.eq) goto loc_89963078;
loc_89963068:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89963078:
	// addi r6,r10,69
	ctx.r6.s64 = ctx.r10.s64 + 69;
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// ble cr6,0x899630a8
	if (!ctx.cr6.gt) goto loc_899630A8;
	// addi r9,r10,71
	ctx.r9.s64 = ctx.r10.s64 + 71;
	// addi r7,r10,70
	ctx.r7.s64 = ctx.r10.s64 + 70;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r8,253
	ctx.r4.s64 = ctx.r8.s64 + 253;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// stbx r3,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u8);
	// stbx r3,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u8);
loc_899630A8:
	// addi r9,r10,56
	ctx.r9.s64 = ctx.r10.s64 + 56;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// ble cr6,0x899630d0
	if (!ctx.cr6.gt) goto loc_899630D0;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
loc_899630D0:
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x899630f4
	if (!ctx.cr6.lt) goto loc_899630F4;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stwx r5,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899630F4:
	// lis r8,-30584
	ctx.r8.s64 = -2004353024;
	// ori r7,r8,34953
	ctx.r7.u64 = ctx.r8.u64 | 34953;
	// mulhw r8,r5,r7
	ctx.r8.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r8,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 6;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulli r8,r3,120
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(120));
	// subf. r7,r8,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x89963144
	if (!ctx.cr0.eq) goto loc_89963144;
	// addi r4,r10,60
	ctx.r4.s64 = ctx.r10.s64 + 60;
	// addi r3,r10,71
	ctx.r3.s64 = ctx.r10.s64 + 71;
	// addi r31,r10,70
	ctx.r31.s64 = ctx.r10.s64 + 70;
	// li r8,224
	ctx.r8.s64 = 224;
	// li r7,288
	ctx.r7.s64 = 288;
	// stbx r8,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
loc_89963144:
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// stwx r5,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89963154:
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// addi r11,r11,-3608
	ctx.r11.s64 = ctx.r11.s64 + -3608;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// beq cr6,0x8996317c
	if (ctx.cr6.eq) goto loc_8996317C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8996317C:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89963E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89963E98;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r27,r11,-4592
	ctx.r27.s64 = ctx.r11.s64 + -4592;
	// bl 0x89934058
	ctx.lr = 0x89963EAC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89963ec0
	if (!ctx.cr6.eq) goto loc_89963EC0;
loc_89963EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89963EC0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992c368
	ctx.lr = 0x89963EC8;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89963eb4
	if (ctx.cr6.eq) goto loc_89963EB4;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lhz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// addi r11,r11,32756
	ctx.r11.s64 = ctx.r11.s64 + 32756;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwz r26,-21584(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lis r23,-16384
	ctx.r23.s64 = -1073741824;
	// li r24,17
	ctx.r24.s64 = 17;
	// li r25,4
	ctx.r25.s64 = 4;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
loc_89963F04:
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhzu r30,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r30.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mulli r21,r11,112
	ctx.r21.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// stwx r23,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r23.u32);
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// sthx r30,r21,r9
	REX_STORE_U16(ctx.r21.u32 + ctx.r9.u32, ctx.r30.u16);
	// stwx r24,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r24.u32);
	// stwx r10,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r22,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r22.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89963F40;
	sub_8992BD50(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzu r11,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// stwx r5,r21,r4
	REX_STORE_U32(ctx.r21.u32 + ctx.r4.u32, ctx.r5.u32);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stwx r11,r21,r10
	REX_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r11.u32);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r5,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r6,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r6.u32);
	// stbx r25,r21,r7
	REX_STORE_U8(ctx.r21.u32 + ctx.r7.u32, ctx.r25.u8);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x89963f04
	if (ctx.cr6.lt) goto loc_89963F04;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89964E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89964E38;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r21,r3
	ctx.r21.s64 = ctx.r3.s16;
	// addi r27,r11,25128
	ctx.r27.s64 = ctx.r11.s64 + 25128;
	// mulli r26,r21,696
	ctx.r26.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(696));
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89964f58
	if (ctx.cr6.eq) goto loc_89964F58;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992c408
	ctx.lr = 0x89964E64;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89964e74
	if (!ctx.cr6.eq) goto loc_89964E74;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89964E74:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r9,r27,28
	ctx.r9.s64 = ctx.r27.s64 + 28;
	// addi r10,r11,-4592
	ctx.r10.s64 = ctx.r11.s64 + -4592;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r28,r10,-2
	ctx.r28.s64 = ctx.r10.s64 + -2;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwzx r25,r26,r9
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lis r23,-16384
	ctx.r23.s64 = -1073741824;
	// li r24,16
	ctx.r24.s64 = 16;
	// addi r30,r10,-32468
	ctx.r30.s64 = ctx.r10.s64 + -32468;
	// addi r31,r9,592
	ctx.r31.s64 = ctx.r9.s64 + 592;
loc_89964EA8:
	// lhzu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulli r19,r10,112
	ctx.r19.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// stwx r23,r19,r31
	REX_STORE_U32(ctx.r19.u32 + ctx.r31.u32, ctx.r23.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// rlwinm r18,r8,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// stwx r24,r19,r9
	REX_STORE_U32(ctx.r19.u32 + ctx.r9.u32, ctx.r24.u32);
	// lbzx r5,r18,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r30.u32);
	// stwx r20,r19,r6
	REX_STORE_U32(ctx.r19.u32 + ctx.r6.u32, ctx.r20.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stwx r4,r19,r7
	REX_STORE_U32(ctx.r19.u32 + ctx.r7.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89964EF4;
	sub_8992BD50(ctx, base);
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// lhzx r5,r18,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r3.u32);
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// lhzx r3,r18,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lwzx r8,r26,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// rotlwi r10,r3,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// stwx r9,r19,r4
	REX_STORE_U32(ctx.r19.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// sthx r22,r19,r6
	REX_STORE_U16(ctx.r19.u32 + ctx.r6.u32, ctx.r22.u16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// stwx r9,r19,r29
	REX_STORE_U32(ctx.r19.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r10,r19,r5
	REX_STORE_U32(ctx.r19.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r8,r19,r3
	REX_STORE_U32(ctx.r19.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x89964ea8
	if (ctx.cr6.lt) goto loc_89964EA8;
loc_89964F58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89965B30) {
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
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r31,r11,7960
	ctx.r31.s64 = ctx.r11.s64 + 7960;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,-5592
	ctx.r11.s64 = ctx.r31.s64 + -5592;
	// li r9,248
	ctx.r9.s64 = 248;
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x89934fb8
	ctx.lr = 0x89965B80;
	sub_89934FB8(ctx, base);
	// addi r8,r31,-4632
	ctx.r8.s64 = ctx.r31.s64 + -4632;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-4
	ctx.r8.s64 = -4;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x89934fb8
	ctx.lr = 0x89965BB0;
	sub_89934FB8(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r9,160
	ctx.r9.s64 = 160;
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x89934fb8
	ctx.lr = 0x89965BE0;
	sub_89934FB8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r11,3484
	ctx.r4.s64 = ctx.r11.s64 + 3484;
	// addi r5,r9,4288
	ctx.r5.s64 = ctx.r9.s64 + 4288;
loc_89965BF8:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-5592
	ctx.r9.s64 = ctx.r31.s64 + -5592;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r6,r3,204
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(204));
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_89965C18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x89965c18
	if (ctx.cr6.lt) goto loc_89965C18;
	// addi r9,r5,1224
	ctx.r9.s64 = ctx.r5.s64 + 1224;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r8,r31,-4632
	ctx.r8.s64 = ctx.r31.s64 + -4632;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_89965C58:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x89965c58
	if (ctx.cr6.lt) goto loc_89965C58;
	// addi r9,r5,2448
	ctx.r9.s64 = ctx.r5.s64 + 2448;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_89965C94:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x89965c94
	if (ctx.cr6.lt) goto loc_89965C94;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x89965bf8
	if (ctx.cr6.lt) goto loc_89965BF8;
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

DEFINE_REX_FUNC(sub_89966F70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89966F78;
	__savegprlr_25(ctx, base);
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
	// lwzx r29,r30,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lbzx r28,r30,r8
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r27,r30,r7
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// lwzx r26,r30,r6
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r25,r30,r5
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bgt cr6,0x899671a4
	if (ctx.cr6.gt) goto loc_899671A4;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28632
	ctx.r12.s64 = ctx.r12.s64 + 28632;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89967060;
	case 1:
		goto loc_8996700C;
	case 2:
		goto loc_89967060;
	case 3:
		goto loc_8996708C;
	case 4:
		goto loc_8996708C;
	case 5:
		goto loc_89967060;
	case 6:
		goto loc_89967060;
	case 7:
		goto loc_899670C8;
	case 8:
		goto loc_89967110;
	case 9:
		goto loc_89967110;
	case 10:
		goto loc_899670C8;
	case 11:
		goto loc_89967110;
	case 12:
		goto loc_89967110;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8996700C:
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
	// addi r4,r9,-30688
	ctx.r4.s64 = ctx.r9.s64 + -30688;
	// and r3,r29,r12
	ctx.r3.u64 = ctx.r29.u64 & ctx.r12.u64;
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
	// bl 0x8995e188
	ctx.lr = 0x89967054;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x89967058;
	sub_89936440(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89967060:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8996707C;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8996708C:
	// bl 0x8991b9f0
	ctx.lr = 0x89967090;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899670c0
	if (ctx.cr6.lt) goto loc_899670C0;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// addi r9,r31,197
	ctx.r9.s64 = ctx.r31.s64 + 197;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r5,r6,16
	ctx.r5.u64 = ctx.r6.u64 | 16;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
loc_899670C0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x8996718c
	goto loc_8996718C;
loc_899670C8:
	// bl 0x8991b9f0
	ctx.lr = 0x899670CC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89967108
	if (ctx.cr6.lt) goto loc_89967108;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,197
	ctx.r10.s64 = ctx.r31.s64 + 197;
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
loc_89967108:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x8996718c
	goto loc_8996718C;
loc_89967110:
	// bl 0x8991b9f0
	ctx.lr = 0x89967114;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89967150
	if (ctx.cr6.lt) goto loc_89967150;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,197
	ctx.r10.s64 = ctx.r31.s64 + 197;
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
loc_89967150:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8996716C;
	sub_899D4440(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addis r5,r26,-28
	ctx.r5.s64 = ctx.r26.s64 + -1835008;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x89967188;
	sub_899D4440(ctx, base);
	// addis r5,r26,-56
	ctx.r5.s64 = ctx.r26.s64 + -3670016;
loc_8996718C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x899671A4;
	sub_899D4440(ctx, base);
loc_899671A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996ACA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8996ACB0;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r9,r9,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r30,r11,68
	ctx.r30.s64 = ctx.r11.s64 + 68;
	// addi r29,r11,206
	ctx.r29.s64 = ctx.r11.s64 + 206;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r7,r10,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r28,r11,68
	ctx.r28.s64 = ctx.r11.s64 + 68;
	// stwx r8,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u32);
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r6,r11,200
	ctx.r6.s64 = ctx.r11.s64 + 200;
	// stwx r5,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lwzx r3,r9,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// addi r8,r11,200
	ctx.r8.s64 = ctx.r11.s64 + 200;
	// stwx r3,r10,r28
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u32);
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lbzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r3,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r5,r3,r12
	ctx.r5.u64 = ctx.r3.u64 & ctx.r12.u64;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r3,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00000;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// rlwinm r9,r9,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996F2C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8996F2D0;
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
	ctx.lr = 0x8996F2E4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996f5b8
	if (ctx.cr6.eq) goto loc_8996F5B8;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x8991b880
	ctx.lr = 0x8996F2F4;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996f5b8
	if (ctx.cr6.eq) goto loc_8996F5B8;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r27,0(r26)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r7,r27
	ctx.r7.s64 = ctx.r27.s16;
	// clrlwi r25,r30,16
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sth r27,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stwx r28,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r28,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r28.u32);
	// stwx r25,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r25.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r6,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x8996F358;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,384
	ctx.r5.s64 = 25165824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r5,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x8996F36C;
	sub_89915D78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x8996F374;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r8,115
	ctx.r8.s64 = 115;
	// addi r4,r31,185
	ctx.r4.s64 = ctx.r31.s64 + 185;
	// addi r3,r31,158
	ctx.r3.s64 = ctx.r31.s64 + 158;
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stbx r8,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stbx r28,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r28,r29,r4
	REX_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// sthx r6,r29,r3
	REX_STORE_U16(ctx.r29.u32 + ctx.r3.u32, ctx.r6.u16);
	// stwx r7,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r30,r10,-27120
	ctx.r30.s64 = ctx.r10.s64 + -27120;
	// b 0x8996f3c4
	goto loc_8996F3C4;
loc_8996F3B8:
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r27,82(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r26,88(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8996F3C4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mulli r24,r11,28
	ctx.r24.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhzx r9,r24,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r10.u32);
	// lwzx r8,r24,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r30.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r26,2
	ctx.r6.s64 = ctx.r26.s64 + 2;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// lhzx r23,r7,r6
	ctx.r23.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// addi r10,r31,150
	ctx.r10.s64 = ctx.r31.s64 + 150;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// extsh r7,r23
	ctx.r7.s64 = ctx.r23.s16;
	// lwzx r6,r24,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r4.u32);
	// lhzx r5,r3,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r26.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mulli r26,r7,208
	ctx.r26.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sthx r27,r26,r10
	REX_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r27.u16);
	// sthx r5,r26,r11
	REX_STORE_U16(ctx.r26.u32 + ctx.r11.u32, ctx.r5.u16);
	// stwx r25,r26,r9
	REX_STORE_U32(ctx.r26.u32 + ctx.r9.u32, ctx.r25.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stwx r6,r26,r4
	REX_STORE_U32(ctx.r26.u32 + ctx.r4.u32, ctx.r6.u32);
	// oris r10,r8,49152
	ctx.r10.u64 = ctx.r8.u64 | 3221225472;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stwx r10,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u32);
	// stwx r28,r26,r11
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x8991b538
	ctx.lr = 0x8996F440;
	sub_8991B538(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991c578
	ctx.lr = 0x8996F448;
	sub_8991C578(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r8,r30,14
	ctx.r8.s64 = ctx.r30.s64 + 14;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,18
	ctx.r7.s64 = ctx.r30.s64 + 18;
	// addi r18,r30,23
	ctx.r18.s64 = ctx.r30.s64 + 23;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// lhzx r10,r24,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r8.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lhzx r3,r24,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r9.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lhzx r8,r24,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r7.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// lbzx r18,r24,r18
	ctx.r18.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r18.u32);
	// addi r28,r31,158
	ctx.r28.s64 = ctx.r31.s64 + 158;
	// lbzx r6,r24,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r6.u32);
	// addi r27,r31,60
	ctx.r27.s64 = ctx.r31.s64 + 60;
	// addi r25,r31,160
	ctx.r25.s64 = ctx.r31.s64 + 160;
	// addi r23,r31,207
	ctx.r23.s64 = ctx.r31.s64 + 207;
	// addi r22,r31,207
	ctx.r22.s64 = ctx.r31.s64 + 207;
	// stb r18,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// addi r21,r31,206
	ctx.r21.s64 = ctx.r31.s64 + 206;
	// addi r20,r30,20
	ctx.r20.s64 = ctx.r30.s64 + 20;
	// addi r19,r30,22
	ctx.r19.s64 = ctx.r30.s64 + 22;
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r17,r29,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// li r16,256
	ctx.r16.s64 = 256;
	// lhzx r20,r24,r20
	ctx.r20.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r20.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lbzx r19,r24,r19
	ctx.r19.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r19.u32);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// addi r14,r31,200
	ctx.r14.s64 = ctx.r31.s64 + 200;
	// addi r18,r31,204
	ctx.r18.s64 = ctx.r31.s64 + 204;
	// stwx r17,r26,r5
	REX_STORE_U32(ctx.r26.u32 + ctx.r5.u32, ctx.r17.u32);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// lwzx r4,r29,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// addi r17,r31,66
	ctx.r17.s64 = ctx.r31.s64 + 66;
	// stwx r4,r26,r9
	REX_STORE_U32(ctx.r26.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stwx r3,r26,r7
	REX_STORE_U32(ctx.r26.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// sthx r16,r26,r28
	REX_STORE_U16(ctx.r26.u32 + ctx.r28.u32, ctx.r16.u16);
	// sthx r8,r26,r25
	REX_STORE_U16(ctx.r26.u32 + ctx.r25.u32, ctx.r8.u16);
	// stwx r10,r26,r27
	REX_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r10.u32);
	// lbzx r4,r29,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// stbx r4,r26,r22
	REX_STORE_U8(ctx.r26.u32 + ctx.r22.u32, ctx.r4.u8);
	// stbx r6,r26,r21
	REX_STORE_U8(ctx.r26.u32 + ctx.r21.u32, ctx.r6.u8);
	// lbzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// addi r8,r30,24
	ctx.r8.s64 = ctx.r30.s64 + 24;
	// stbx r3,r26,r14
	REX_STORE_U8(ctx.r26.u32 + ctx.r14.u32, ctx.r3.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r31,193
	ctx.r3.s64 = ctx.r31.s64 + 193;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbzx r27,r29,r11
	ctx.r27.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// stbx r27,r26,r18
	REX_STORE_U8(ctx.r26.u32 + ctx.r18.u32, ctx.r27.u8);
	// sthx r20,r26,r5
	REX_STORE_U16(ctx.r26.u32 + ctx.r5.u32, ctx.r20.u16);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// stbx r19,r26,r17
	REX_STORE_U8(ctx.r26.u32 + ctx.r17.u32, ctx.r19.u8);
	// lwzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,65
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65, ctx.xer);
	// lbzx r4,r24,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r8.u32);
	// addi r8,r31,164
	ctx.r8.s64 = ctx.r31.s64 + 164;
	// stwx r5,r26,r9
	REX_STORE_U32(ctx.r26.u32 + ctx.r9.u32, ctx.r5.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stbx r4,r26,r3
	REX_STORE_U8(ctx.r26.u32 + ctx.r3.u32, ctx.r4.u8);
	// stwx r28,r26,r8
	REX_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r28.u32);
	// stbx r9,r26,r7
	REX_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r9.u8);
	// blt cr6,0x8996f3b8
	if (ctx.cr6.lt) goto loc_8996F3B8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r28.u8);
	// stb r28,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r28.u8);
	// bl 0x899340e8
	ctx.lr = 0x8996F594;
	sub_899340E8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x899340e8
	ctx.lr = 0x8996F59C;
	sub_899340E8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x899340e8
	ctx.lr = 0x8996F5A4;
	sub_899340E8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x899340e8
	ctx.lr = 0x8996F5AC;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8996F5B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899736D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899736D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-3792(r1)
	ea = -3792 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,-25052
	ctx.r11.s64 = ctx.r11.s64 + -25052;
	// lis r10,-30231
	ctx.r10.s64 = -1981218816;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,9728
	ctx.r24.s64 = ctx.r11.s64 + 9728;
	// addi r31,r10,28072
	ctx.r31.s64 = ctx.r10.s64 + 28072;
loc_89973704:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r6,-1(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + -1);
	// addi r9,r31,-20856
	ctx.r9.s64 = ctx.r31.s64 + -20856;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r5,2(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// neg r8,r6
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x8997375C;
	sub_89934B48(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r24,-3168
	ctx.r9.s64 = ctx.r24.s64 + -3168;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,-23680
	ctx.r11.s64 = ctx.r31.s64 + -23680;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x89935610
	ctx.lr = 0x8997378C;
	sub_89935610(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// blt cr6,0x89973704
	if (ctx.cr6.lt) goto loc_89973704;
	// addi r11,r31,-20936
	ctx.r11.s64 = ctx.r31.s64 + -20936;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899737D8;
	sub_89934FB8(ctx, base);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-20936
	ctx.r9.s64 = ctx.r31.s64 + -20936;
	// addi r11,r31,-16440
	ctx.r11.s64 = ctx.r31.s64 + -16440;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r25,r8,3484
	ctx.r25.s64 = ctx.r8.s64 + 3484;
loc_899737EC:
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
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899737ec
	if (ctx.cr6.lt) goto loc_899737EC;
	// addi r8,r31,-18200
	ctx.r8.s64 = ctx.r31.s64 + -18200;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// li r8,-20
	ctx.r8.s64 = -20;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8997384C;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-18200
	ctx.r9.s64 = ctx.r31.s64 + -18200;
	// addi r11,r31,-17728
	ctx.r11.s64 = ctx.r31.s64 + -17728;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89973858:
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
	// blt cr6,0x89973858
	if (ctx.cr6.lt) goto loc_89973858;
	// addi r9,r31,-24616
	ctx.r9.s64 = ctx.r31.s64 + -24616;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,200
	ctx.r9.s64 = 200;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,26
	ctx.r4.s64 = 26;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899738BC;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-24616
	ctx.r9.s64 = ctx.r31.s64 + -24616;
	// addi r11,r31,-2832
	ctx.r11.s64 = ctx.r31.s64 + -2832;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899738C8:
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
	// blt cr6,0x899738c8
	if (ctx.cr6.lt) goto loc_899738C8;
	// addi r10,r31,-17520
	ctx.r10.s64 = ctx.r31.s64 + -17520;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8997392C;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-17520
	ctx.r9.s64 = ctx.r31.s64 + -17520;
	// addi r11,r31,-6608
	ctx.r11.s64 = ctx.r31.s64 + -6608;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89973938:
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
	// blt cr6,0x89973938
	if (ctx.cr6.lt) goto loc_89973938;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-25040
	ctx.r10.s64 = ctx.r10.s64 + -25040;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899739f8
	if (ctx.cr6.eq) goto loc_899739F8;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// li r28,6
	ctx.r28.s64 = 6;
loc_89973988:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// lhz r4,6(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// neg r7,r6
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lbzu r9,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r10,r31,-1632
	ctx.r10.s64 = ctx.r31.s64 + -1632;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-24
	ctx.r7.s64 = -24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899739D8;
	sub_89934FB8(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
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
	// bne cr6,0x89973988
	if (!ctx.cr6.eq) goto loc_89973988;
loc_899739F8:
	// addi r6,r24,-3156
	ctx.r6.s64 = ctx.r24.s64 + -3156;
	// addi r5,r31,-1632
	ctx.r5.s64 = ctx.r31.s64 + -1632;
	// addi r4,r31,-15536
	ctx.r4.s64 = ctx.r31.s64 + -15536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89935688
	ctx.lr = 0x89973A10;
	sub_89935688(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-24984
	ctx.r10.s64 = ctx.r11.s64 + -24984;
	// lbz r11,-24984(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -24984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89973aa8
	if (ctx.cr6.eq) goto loc_89973AA8;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89973A2C:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,26(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// lbz r27,25(r30)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// addi r28,r31,-24328
	ctx.r28.s64 = ctx.r31.s64 + -24328;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// clrlwi r23,r7,16
	ctx.r23.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// bl 0x89934b48
	ctx.lr = 0x89973A84;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r30)
	ea = 14 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89973a2c
	if (!ctx.cr6.eq) goto loc_89973A2C;
loc_89973AA8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_89973AB0:
	// rlwinm r29,r11,14,2,17
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,-1296
	ctx.r11.s64 = ctx.r31.s64 + -1296;
	// mulli r10,r30,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r6,r24,1632
	ctx.r6.s64 = ctx.r24.s64 + 1632;
	// addi r5,r31,-24328
	ctx.r5.s64 = ctx.r31.s64 + -24328;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r3,r9,16
	ctx.r3.u64 = ctx.r9.u64 | 16;
	// bl 0x89935610
	ctx.lr = 0x89973AD8;
	sub_89935610(ctx, base);
	// addi r11,r31,-24328
	ctx.r11.s64 = ctx.r31.s64 + -24328;
	// addi r10,r31,-9208
	ctx.r10.s64 = ctx.r31.s64 + -9208;
	// mulli r9,r30,252
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(252));
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r6,r24,1952
	ctx.r6.s64 = ctx.r24.s64 + 1952;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r3,r8,20
	ctx.r3.u64 = ctx.r8.u64 | 20;
	// bl 0x89935610
	ctx.lr = 0x89973B00;
	sub_89935610(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89973ab0
	if (ctx.cr6.lt) goto loc_89973AB0;
	// addi r11,r31,-24776
	ctx.r11.s64 = ctx.r31.s64 + -24776;
	// li r27,10
	ctx.r27.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89973B48;
	sub_89934FB8(ctx, base);
	// addi r6,r24,-3136
	ctx.r6.s64 = ctx.r24.s64 + -3136;
	// addi r5,r31,-24776
	ctx.r5.s64 = ctx.r31.s64 + -24776;
	// addi r4,r31,-18408
	ctx.r4.s64 = ctx.r31.s64 + -18408;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x89973B60;
	sub_89935688(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-24768
	ctx.r10.s64 = ctx.r11.s64 + -24768;
	// lbz r11,-24768(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89973bf8
	if (ctx.cr6.eq) goto loc_89973BF8;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89973B7C:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,26(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// addi r28,r31,-18040
	ctx.r28.s64 = ctx.r31.s64 + -18040;
	// lbz r8,25(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// clrlwi r23,r3,16
	ctx.r23.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// bl 0x89934b48
	ctx.lr = 0x89973BD4;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r30)
	ea = 14 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89973b7c
	if (!ctx.cr6.eq) goto loc_89973B7C;
loc_89973BF8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_89973BFC:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,-18040
	ctx.r10.s64 = ctx.r31.s64 + -18040;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89973C24:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89973c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89973C24;
	// addi r8,r31,-18040
	ctx.r8.s64 = ctx.r31.s64 + -18040;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r7,r8,288
	ctx.r7.s64 = ctx.r8.s64 + 288;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_89973C4C:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x89973c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89973C4C;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89973C6C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89973c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89973C6C;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x89973bfc
	if (ctx.cr6.lt) goto loc_89973BFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_89973C94:
	// addi r10,r31,-23608
	ctx.r10.s64 = ctx.r31.s64 + -23608;
	// mulli r9,r30,216
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(216));
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r6,r31,-888
	ctx.r6.s64 = ctx.r31.s64 + -888;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,-18040
	ctx.r5.s64 = ctx.r31.s64 + -18040;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x89973CB8;
	sub_89935610(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89973c94
	if (ctx.cr6.lt) goto loc_89973C94;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-24664
	ctx.r10.s64 = ctx.r11.s64 + -24664;
	// lbz r11,-24664(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -24664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89973d60
	if (ctx.cr6.eq) goto loc_89973D60;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89973CE8:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,26(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// lbz r23,25(r30)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89973D3C;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r30)
	ea = 14 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89973ce8
	if (!ctx.cr6.eq) goto loc_89973CE8;
loc_89973D60:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_89973D64:
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_89973D70:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,-6400
	ctx.r8.s64 = ctx.r31.s64 + -6400;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_89973DA0:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x89973da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89973DA0;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// blt cr6,0x89973d70
	if (ctx.cr6.lt) goto loc_89973D70;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89973d64
	if (ctx.cr6.lt) goto loc_89973D64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_89973DD8:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_89973DE4:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r31,-6400
	ctx.r6.s64 = ctx.r31.s64 + -6400;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1332
	ctx.r10.s64 = ctx.r1.s64 + 1332;
	// addi r7,r6,1188
	ctx.r7.s64 = ctx.r6.s64 + 1188;
	// li r11,9
	ctx.r11.s64 = 9;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_89973E2C:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x89973e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89973E2C;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// blt cr6,0x89973de4
	if (ctx.cr6.lt) goto loc_89973DE4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89973dd8
	if (ctx.cr6.lt) goto loc_89973DD8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r11,r11,-24356
	ctx.r11.s64 = ctx.r11.s64 + -24356;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_89973E70:
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r31,-6400
	ctx.r10.s64 = ctx.r31.s64 + -6400;
	// lwzu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r8,r31,-13888
	ctx.r8.s64 = ctx.r31.s64 + -13888;
	// mulli r9,r30,594
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(594));
	// mulli r4,r30,780
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x89973E9C;
	sub_89935B08(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x89973e70
	if (ctx.cr6.lt) goto loc_89973E70;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-24308
	ctx.r10.s64 = ctx.r11.s64 + -24308;
	// lbz r11,-24308(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -24308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89973f3c
	if (ctx.cr6.eq) goto loc_89973F3C;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_89973ECC:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r31,-24976
	ctx.r4.s64 = ctx.r31.s64 + -24976;
	// lbz r7,3(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbzu r11,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// li r8,-16
	ctx.r8.s64 = -16;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x89934fb8
	ctx.lr = 0x89973F1C;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89973ecc
	if (!ctx.cr6.eq) goto loc_89973ECC;
loc_89973F3C:
	// addi r9,r31,-24976
	ctx.r9.s64 = ctx.r31.s64 + -24976;
	// addi r11,r31,-2624
	ctx.r11.s64 = ctx.r31.s64 + -2624;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89973F48:
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
	// blt cr6,0x89973f48
	if (ctx.cr6.lt) goto loc_89973F48;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r9,r31,-24976
	ctx.r9.s64 = ctx.r31.s64 + -24976;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r10,-6932
	ctx.r11.s64 = ctx.r10.s64 + -6932;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89973F8C:
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
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x89973f8c
	if (ctx.cr6.lt) goto loc_89973F8C;
	// addi r8,r31,-15128
	ctx.r8.s64 = ctx.r31.s64 + -15128;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// li r8,-12
	ctx.r8.s64 = -12;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,27
	ctx.r4.s64 = 27;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934fb8
	ctx.lr = 0x89973FEC;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-15128
	ctx.r9.s64 = ctx.r31.s64 + -15128;
	// addi r11,r31,-2416
	ctx.r11.s64 = ctx.r31.s64 + -2416;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89973FF8:
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
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x89973ff8
	if (ctx.cr6.lt) goto loc_89973FF8;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-24276
	ctx.r10.s64 = ctx.r10.s64 + -24276;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899740b0
	if (ctx.cr6.eq) goto loc_899740B0;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_89974044:
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lbz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lbzu r10,3(r30)
	ea = 3 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r8,r31,-23176
	ctx.r8.s64 = ctx.r31.s64 + -23176;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r28,r7,16
	ctx.r28.u64 = ctx.r7.u32 & 0xFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r9,232
	ctx.r9.s64 = 232;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-12
	ctx.r7.s64 = -12;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934fb8
	ctx.lr = 0x89974090;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// bne cr6,0x89974044
	if (!ctx.cr6.eq) goto loc_89974044;
loc_899740B0:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_899740B8:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,-20800
	ctx.r11.s64 = ctx.r31.s64 + -20800;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// mulli r7,r6,216
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(216));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,-23176
	ctx.r10.s64 = ctx.r31.s64 + -23176;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8997410c
	if (!ctx.cr6.gt) goto loc_8997410C;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899740E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899740e4
	if (ctx.cr6.lt) goto loc_899740E4;
loc_8997410C:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899740b8
	if (ctx.cr6.lt) goto loc_899740B8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-24264
	ctx.r10.s64 = ctx.r11.s64 + -24264;
	// lbz r11,-24264(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -24264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899741c0
	if (ctx.cr6.eq) goto loc_899741C0;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89974144:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,26(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// lbz r8,25(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// addi r28,r31,-23096
	ctx.r28.s64 = ctx.r31.s64 + -23096;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// bl 0x89934b48
	ctx.lr = 0x8997419C;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r30)
	ea = 14 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89974144
	if (!ctx.cr6.eq) goto loc_89974144;
loc_899741C0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899741C8:
	// rlwinm r28,r11,14,2,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,-17232
	ctx.r11.s64 = ctx.r31.s64 + -17232;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// mulli r29,r30,396
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(396));
	// ori r27,r10,32
	ctx.r27.u64 = ctx.r10.u64 | 32;
	// addi r6,r31,-7912
	ctx.r6.s64 = ctx.r31.s64 + -7912;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r31,-23096
	ctx.r5.s64 = ctx.r31.s64 + -23096;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899741F4;
	sub_89935610(ctx, base);
	// addi r11,r31,-23096
	ctx.r11.s64 = ctx.r31.s64 + -23096;
	// addi r10,r31,-8704
	ctx.r10.s64 = ctx.r31.s64 + -8704;
	// addi r6,r24,-2816
	ctx.r6.s64 = ctx.r24.s64 + -2816;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x89974210;
	sub_89935610(ctx, base);
	// addi r11,r31,-23096
	ctx.r11.s64 = ctx.r31.s64 + -23096;
	// addi r10,r31,-16328
	ctx.r10.s64 = ctx.r31.s64 + -16328;
	// addi r6,r24,-1152
	ctx.r6.s64 = ctx.r24.s64 + -1152;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r11,1152
	ctx.r5.s64 = ctx.r11.s64 + 1152;
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x8997422C;
	sub_89935610(ctx, base);
	// addi r11,r31,-23096
	ctx.r11.s64 = ctx.r31.s64 + -23096;
	// addi r10,r31,-14488
	ctx.r10.s64 = ctx.r31.s64 + -14488;
	// mulli r9,r30,300
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(300));
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r5,r11,1728
	ctx.r5.s64 = ctx.r11.s64 + 1728;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r3,r8,24
	ctx.r3.u64 = ctx.r8.u64 | 24;
	// bl 0x89935610
	ctx.lr = 0x89974254;
	sub_89935610(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899741c8
	if (ctx.cr6.lt) goto loc_899741C8;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r10,r11,9016
	ctx.r10.s64 = ctx.r11.s64 + 9016;
	// addi r30,r9,-23632
	ctx.r30.s64 = ctx.r9.s64 + -23632;
loc_89974280:
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// mulli r9,r3,52
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(52));
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r31,-888
	ctx.r11.s64 = ctx.r31.s64 + -888;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// lhzx r7,r6,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
loc_899742B0:
	// addi r7,r5,128
	ctx.r7.s64 = ctx.r5.s64 + 128;
	// lhz r28,4(r9)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r29,2(r9)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// lhzu r8,6(r9)
	ea = 6 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r25,r7,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rotlwi r7,r28,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// rotlwi r28,r8,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// srawi r8,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
	// rotlwi r29,r29,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// srawi r7,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 4;
	// lhzx r28,r25,r10
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r10.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// mullw r25,r7,r6
	ctx.r25.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// srawi r28,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 8;
	// mullw r25,r8,r29
	ctx.r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// mullw r29,r7,r29
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// subf r28,r28,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r28.u64;
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mulli r7,r28,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(224));
	// srawi r28,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 8;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// subf r28,r4,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r4.u64;
	// srawi r8,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 8;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x899742b0
	if (ctx.cr6.lt) goto loc_899742B0;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x89974280
	if (ctx.cr6.lt) goto loc_89974280;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lis r6,16
	ctx.r6.s64 = 1048576;
loc_89974360:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 128;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r3,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r31,-19072
	ctx.r11.s64 = ctx.r31.s64 + -19072;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhzx r8,r4,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r8,r4,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// srawi r4,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 8;
	// rlwinm r3,r7,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// mulli r8,r4,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r9,33
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 33, ctx.xer);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// blt cr6,0x89974360
	if (ctx.cr6.lt) goto loc_89974360;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899743DC:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r11,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r8,r31,-7272
	ctx.r8.s64 = ctx.r31.s64 + -7272;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lhzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r7,13,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// rlwinm r7,r8,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// cmpwi cr6,r9,33
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 33, ctx.xer);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// mulli r8,r4,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// blt cr6,0x899743dc
	if (ctx.cr6.lt) goto loc_899743DC;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r5,10
	ctx.r5.s64 = 655360;
loc_89974478:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r7,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhzx r9,r7,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 33, ctx.xer);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0xFFFFC000;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// rlwinm r7,r7,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// mulli r7,r7,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(224));
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mulli r7,r7,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(224));
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// blt cr6,0x89974478
	if (ctx.cr6.lt) goto loc_89974478;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lis r8,14
	ctx.r8.s64 = 917504;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lis r3,13
	ctx.r3.s64 = 851968;
	// ori r5,r11,32768
	ctx.r5.u64 = ctx.r11.u64 | 32768;
	// lis r4,20
	ctx.r4.s64 = 1310720;
	// ori r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 32768;
loc_89974548:
	// mulli r11,r9,85
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(85));
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r8,384
	ctx.r11.s64 = ctx.r8.s64 + 384;
	// addi r8,r31,-7912
	ctx.r8.s64 = ctx.r31.s64 + -7912;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// rlwinm r7,r30,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// lhzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// rlwinm r7,r7,17,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFFFFFE;
	// rlwinm r8,r8,17,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFFFFFE;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mulli r8,r8,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// blt cr6,0x89974548
	if (ctx.cr6.lt) goto loc_89974548;
	// addi r1,r1,3792
	ctx.r1.s64 = ctx.r1.s64 + 3792;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89984840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89984848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r27,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
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
	// bgt cr6,0x89984eb4
	if (ctx.cr6.gt) goto loc_89984EB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899849bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899849BC;
	// bdzf 4*cr6+eq,0x89984bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984BEC;
	// bdzf 4*cr6+eq,0x89984c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984C10;
	// bne cr6,0x89984e04
	if (!ctx.cr6.eq) goto loc_89984E04;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899849a0
	if (ctx.cr6.gt) goto loc_899849A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899848e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899848E4;
	// bdzf 4*cr6+eq,0x89984918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984918;
	// bne cr6,0x89984948
	if (!ctx.cr6.eq) goto loc_89984948;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,304
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 304, ctx.xer);
	// bge cr6,0x899849a0
	if (!ctx.cr6.lt) goto loc_899849A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899849a0
	goto loc_899849A0;
loc_899848E4:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic. r11,r11,-8192
	ctx.xer.ca = ctx.r11.u32 > 8191;
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x899849a0
	if (!ctx.cr0.eq) goto loc_899849A0;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x89984908;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899849a0
	goto loc_899849A0;
loc_89984918:
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
	// bgt cr6,0x899849a0
	if (ctx.cr6.gt) goto loc_899849A0;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899849a0
	goto loc_899849A0;
loc_89984948:
	// bl 0x899368b0
	ctx.lr = 0x8998494C;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899849a0
	if (!ctx.cr6.eq) goto loc_899849A0;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// rlwinm r5,r9,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r10,r11,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// bl 0x899365d0
	ctx.lr = 0x89984994;
	sub_899365D0(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
loc_899849A0:
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
	// b 0x89984eb4
	goto loc_89984EB4;
loc_899849BC:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x89984eb4
	if (ctx.cr6.gt) goto loc_89984EB4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89984a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984A5C;
	// bdzf 4*cr6+eq,0x89984a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984A84;
	// bdzf 4*cr6+eq,0x89984b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984B04;
	// bdzf 4*cr6+eq,0x89984b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984B6C;
	// bne cr6,0x89984b8c
	if (!ctx.cr6.eq) goto loc_89984B8C;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// addi r3,r30,182
	ctx.r3.s64 = ctx.r30.s64 + 182;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r4,-15828
	ctx.r10.s64 = ctx.r4.s64 + -15828;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// stbx r4,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r7,17
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFF;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r5,18,15,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x1FFFE;
	// lbzx r9,r3,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r7,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u8);
loc_89984A5C:
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991d830
	ctx.lr = 0x89984A74;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984A84:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,49152
	ctx.r8.u64 = ctx.r10.u64 | 49152;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89984aa4
	if (!ctx.cr6.lt) goto loc_89984AA4;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_89984AA4:
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
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x89984ae0
	if (ctx.cr6.lt) goto loc_89984AE0;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984AE0:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991d8e0
	ctx.lr = 0x89984AE8;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89984eb4
	if (ctx.cr6.eq) goto loc_89984EB4;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984B04:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89984b20
	if (ctx.cr6.eq) goto loc_89984B20;
	// addi r11,r10,-2048
	ctx.r11.s64 = ctx.r10.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984B20:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// addi r3,r30,193
	ctx.r3.s64 = ctx.r30.s64 + 193;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r6,-15812
	ctx.r4.s64 = ctx.r6.s64 + -15812;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// rlwinm r7,r8,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1;
	// lbzx r6,r7,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// stbx r6,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984B6C:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89984eb4
	if (!ctx.cr6.eq) goto loc_89984EB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984B8C:
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
	// blt cr6,0x89984eb4
	if (ctx.cr6.lt) goto loc_89984EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,7200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7200, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// bgt cr6,0x89984bd8
	if (ctx.cr6.gt) goto loc_89984BD8;
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
	// bge cr6,0x89984eb4
	if (!ctx.cr6.lt) goto loc_89984EB4;
loc_89984BD8:
	// bl 0x89936508
	ctx.lr = 0x89984BDC;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984BEC:
	// bl 0x89936828
	ctx.lr = 0x89984BF0;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89984eb4
	if (!ctx.cr6.eq) goto loc_89984EB4;
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
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984C10:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x89984eb4
	if (ctx.cr6.gt) goto loc_89984EB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89984cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984CBC;
	// bdzf 4*cr6+eq,0x89984ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984CE4;
	// bdzf 4*cr6+eq,0x89984d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984D3C;
	// bdzf 4*cr6+eq,0x89984da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89984DA0;
	// bne cr6,0x89984dc4
	if (!ctx.cr6.eq) goto loc_89984DC4;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r6,-15820
	ctx.r10.s64 = ctx.r6.s64 + -15820;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// rlwinm r7,r5,20,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x6;
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r9,20,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x6;
	// addi r5,r30,182
	ctx.r5.s64 = ctx.r30.s64 + 182;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r6,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stbx r9,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u8);
	// or r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stbx r3,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u8);
loc_89984CBC:
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991d830
	ctx.lr = 0x89984CD4;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984CE4:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89984d04
	if (!ctx.cr6.lt) goto loc_89984D04;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_89984D04:
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
	// blt cr6,0x89984ae0
	if (ctx.cr6.lt) goto loc_89984AE0;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984D3C:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89984d58
	if (ctx.cr6.eq) goto loc_89984D58;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984D58:
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
	// addi r5,r7,-15812
	ctx.r5.s64 = ctx.r7.s64 + -15812;
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
	// rlwinm r7,r8,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1;
	// lbzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stbx r6,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984DA0:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89984eb4
	if (!ctx.cr6.eq) goto loc_89984EB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984DC4:
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
	// blt cr6,0x89984eb4
	if (ctx.cr6.lt) goto loc_89984EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,10800
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10800, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// ble cr6,0x89984eb4
	if (!ctx.cr6.gt) goto loc_89984EB4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984E04:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89984e8c
	if (ctx.cr6.lt) goto loc_89984E8C;
	// beq cr6,0x89984e68
	if (ctx.cr6.eq) goto loc_89984E68;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89984eb4
	if (!ctx.cr6.lt) goto loc_89984EB4;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x89984e48
	if (ctx.cr6.eq) goto loc_89984E48;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89984E48:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,-256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -256, ctx.xer);
	// bgt cr6,0x89984eb4
	if (ctx.cr6.gt) goto loc_89984EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984E68:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89984eb4
	if (!ctx.cr6.eq) goto loc_89984EB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x89984eb4
	goto loc_89984EB4;
loc_89984E8C:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sthx r4,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u16);
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
loc_89984EB4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r8,r30,172
	ctx.r8.s64 = ctx.r30.s64 + 172;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,9016
	ctx.r10.s64 = ctx.r10.s64 + 9016;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r27,r5,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// lhzx r5,r28,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// lhzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998A9F8) {
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
	ctx.lr = 0x8998AA10;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998aa2c
	if (!ctx.cr6.eq) goto loc_8998AA2C;
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
loc_8998AA2C:
	// lis r11,-30311
	ctx.r11.s64 = -1986461696;
	// addi r3,r11,-22336
	ctx.r3.s64 = ctx.r11.s64 + -22336;
	// bl 0x89915de0
	ctx.lr = 0x8998AA38;
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

DEFINE_REX_FUNC(sub_8998AC00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8998AC08;
	__savegprlr_27(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-15416
	ctx.r9.s64 = ctx.r11.s64 + -15416;
	// lbz r11,-15416(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -15416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998aca0
	if (ctx.cr6.eq) goto loc_8998ACA0;
	// addi r31,r9,-10
	ctx.r31.s64 = ctx.r9.s64 + -10;
loc_8998AC28:
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lbz r29,18(r31)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// lbz r28,19(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// lbz r4,11(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r6,13(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,15(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// add r27,r10,r3
	ctx.r27.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// bl 0x89934b48
	ctx.lr = 0x8998AC80;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8998ac28
	if (!ctx.cr6.eq) goto loc_8998AC28;
loc_8998ACA0:
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30230
	ctx.r10.s64 = -1981153280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-9400
	ctx.r29.s64 = ctx.r11.s64 + -9400;
	// addi r31,r10,32520
	ctx.r31.s64 = ctx.r10.s64 + 32520;
loc_8998ACB4:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_8998ACC0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r31,2776
	ctx.r7.s64 = ctx.r31.s64 + 2776;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8998AD08:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8998ad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8998AD08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x8998acc0
	if (ctx.cr6.lt) goto loc_8998ACC0;
	// addi r9,r31,2776
	ctx.r9.s64 = ctx.r31.s64 + 2776;
	// mulli r10,r30,306
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(306));
	// mulli r11,r30,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(396));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8998AD4C;
	sub_89935B08(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x8998acb4
	if (ctx.cr6.lt) goto loc_8998ACB4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8998AD64:
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,17
	ctx.r9.s64 = 17;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_8998AD70:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,2376
	ctx.r7.s64 = ctx.r31.s64 + 2376;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blt cr6,0x8998ad70
	if (ctx.cr6.lt) goto loc_8998AD70;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8998ad64
	if (ctx.cr6.lt) goto loc_8998AD64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998BB30) {
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
	ctx.lr = 0x8998BB48;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998bb60
	if (!ctx.cr6.eq) goto loc_8998BB60;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8998BB60:
	// lis r11,-30311
	ctx.r11.s64 = -1986461696;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// bl 0x89915de0
	ctx.lr = 0x8998BB6C;
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

DEFINE_REX_FUNC(sub_8998BB80) {
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
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8998bc74
	if (ctx.cr6.gt) goto loc_8998BC74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8998bbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998BBD8;
	// bdzf 4*cr6+eq,0x8998bbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998BBD8;
	// bdzf 4*cr6+eq,0x8998bc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998BC14;
	// bne cr6,0x8998bc14
	if (!ctx.cr6.eq) goto loc_8998BC14;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8991c340
	ctx.lr = 0x8998BBD4;
	sub_8991C340(ctx, base);
	// b 0x8998bc7c
	goto loc_8998BC7C;
loc_8998BBD8:
	// bl 0x8991b9f0
	ctx.lr = 0x8998BBDC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998bc0c
	if (ctx.cr6.lt) goto loc_8998BC0C;
	// addi r11,r31,206
	ctx.r11.s64 = ctx.r31.s64 + 206;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r5,r30,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8992e578
	ctx.lr = 0x8998BC0C;
	sub_8992E578(ctx, base);
loc_8998BC0C:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8998bc4c
	goto loc_8998BC4C;
loc_8998BC14:
	// bl 0x8991b9f0
	ctx.lr = 0x8998BC18;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998bc48
	if (ctx.cr6.lt) goto loc_8998BC48;
	// addi r11,r31,206
	ctx.r11.s64 = ctx.r31.s64 + 206;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// li r3,2
	ctx.r3.s64 = 2;
	// lbzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r5,r30,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8992e578
	ctx.lr = 0x8998BC48;
	sub_8992E578(ctx, base);
loc_8998BC48:
	// li r4,3
	ctx.r4.s64 = 3;
loc_8998BC4C:
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
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x899d4c10
	ctx.lr = 0x8998BC74;
	sub_899D4C10(ctx, base);
loc_8998BC74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8998BC7C:
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

DEFINE_REX_FUNC(sub_8998C2B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8998C2B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r8,-30229
	ctx.r8.s64 = -1981087744;
	// addi r9,r11,-14920
	ctx.r9.s64 = ctx.r11.s64 + -14920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r8,-24384
	ctx.r29.s64 = ctx.r8.s64 + -24384;
	// lbz r11,-14920(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998c360
	if (ctx.cr6.eq) goto loc_8998C360;
	// addi r31,r9,-9
	ctx.r31.s64 = ctx.r9.s64 + -9;
loc_8998C2E0:
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lbz r28,10(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// addi r4,r29,616
	ctx.r4.s64 = ctx.r29.s64 + 616;
	// lbz r9,17(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r27,16(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r5,r28
	ctx.r5.s64 = ctx.r28.s8;
	// lbz r6,11(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lbz r8,13(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,15(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// extsb r26,r9
	ctx.r26.s64 = ctx.r9.s8;
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934b48
	ctx.lr = 0x8998C340;
	sub_89934B48(ctx, base);
	// lbzu r10,9(r31)
	ea = 9 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8998c2e0
	if (!ctx.cr6.eq) goto loc_8998C2E0;
loc_8998C360:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-10452
	ctx.r30.s64 = ctx.r10.s64 + -10452;
loc_8998C370:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r29,616
	ctx.r9.s64 = ctx.r29.s64 + 616;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mulli r11,r31,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(204));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x8998C39C;
	sub_89935610(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8998c370
	if (ctx.cr6.lt) goto loc_8998C370;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998C998) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8998C9A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r30,26864(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89934058
	ctx.lr = 0x8998C9B4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998c9c8
	if (!ctx.cr6.eq) goto loc_8998C9C8;
loc_8998C9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8998C9C8:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8991b880
	ctx.lr = 0x8998C9D0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998c9bc
	if (ctx.cr6.eq) goto loc_8998C9BC;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-16336
	ctx.r8.s64 = -1070596096;
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r4,r8,272
	ctx.r4.u64 = ctx.r8.u64 | 272;
	// stwx r26,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r26.u32);
	// addi r27,r10,-4592
	ctx.r27.s64 = ctx.r10.s64 + -4592;
	// stwx r26,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998CA28;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x8998CA30;
	sub_8991C578(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,4946(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4946);
	// bl 0x8991c678
	ctx.lr = 0x8998CA44;
	sub_8991C678(ctx, base);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r11,r10,-14808
	ctx.r11.s64 = ctx.r10.s64 + -14808;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_8998CA58:
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// lhz r10,5(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 5);
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// lwz r8,1(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r7,r31,148
	ctx.r7.s64 = ctx.r31.s64 + 148;
	// lwz r4,9(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 9);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r25,r11,r9
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// extsh r6,r25
	ctx.r6.s64 = ctx.r25.s16;
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// mulli r23,r6,208
	ctx.r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lhzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r27.u32);
	// sthx r10,r23,r5
	REX_STORE_U16(ctx.r23.u32 + ctx.r5.u32, ctx.r10.u16);
	// sthx r3,r23,r7
	REX_STORE_U16(ctx.r23.u32 + ctx.r7.u32, ctx.r3.u16);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// oris r8,r8,49200
	ctx.r8.u64 = ctx.r8.u64 | 3224371200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r7,r23,r9
	REX_STORE_U32(ctx.r23.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r4,r23,r24
	REX_STORE_U32(ctx.r23.u32 + ctx.r24.u32, ctx.r4.u32);
	// stwx r26,r23,r10
	REX_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r26.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998CAC4;
	sub_8991B538(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x8998CACC;
	sub_8991C578(ctx, base);
	// lbz r10,19(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 19);
	// lhz r6,13(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 13);
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// lhz r5,15(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 15);
	// li r7,256
	ctx.r7.s64 = 256;
	// lhz r3,17(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 17);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lbzu r8,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// sthx r7,r23,r4
	REX_STORE_U16(ctx.r23.u32 + ctx.r4.u32, ctx.r7.u16);
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r24,r31,52
	ctx.r24.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// addi r8,r31,160
	ctx.r8.s64 = ctx.r31.s64 + 160;
	// lbz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r21,r31,206
	ctx.r21.s64 = ctx.r31.s64 + 206;
	// addi r20,r31,192
	ctx.r20.s64 = ctx.r31.s64 + 192;
	// addi r19,r31,164
	ctx.r19.s64 = ctx.r31.s64 + 164;
	// addi r18,r31,207
	ctx.r18.s64 = ctx.r31.s64 + 207;
	// addi r17,r31,207
	ctx.r17.s64 = ctx.r31.s64 + 207;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// addi r16,r31,200
	ctx.r16.s64 = ctx.r31.s64 + 200;
	// addi r15,r31,206
	ctx.r15.s64 = ctx.r31.s64 + 206;
	// addi r14,r31,200
	ctx.r14.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r11,r23,r9
	REX_STORE_U32(ctx.r23.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwzx r11,r30,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// addi r25,r31,204
	ctx.r25.s64 = ctx.r31.s64 + 204;
	// stwx r11,r23,r24
	REX_STORE_U32(ctx.r23.u32 + ctx.r24.u32, ctx.r11.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// sthx r3,r23,r8
	REX_STORE_U16(ctx.r23.u32 + ctx.r8.u32, ctx.r3.u16);
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// stbx r10,r23,r21
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r10.u8);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r23,r4
	REX_STORE_U32(ctx.r23.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r5,r23,r7
	REX_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
	// stbx r22,r23,r20
	REX_STORE_U8(ctx.r23.u32 + ctx.r20.u32, ctx.r22.u8);
	// stwx r26,r23,r19
	REX_STORE_U32(ctx.r23.u32 + ctx.r19.u32, ctx.r26.u32);
	// lbzx r10,r30,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r18.u32);
	// stbx r10,r23,r17
	REX_STORE_U8(ctx.r23.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbzx r10,r30,r15
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r15.u32);
	// lbzx r9,r30,r16
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r16.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r23,r14
	REX_STORE_U8(ctx.r23.u32 + ctx.r14.u32, ctx.r8.u8);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r7,r23,r25
	REX_STORE_U8(ctx.r23.u32 + ctx.r25.u32, ctx.r7.u8);
	// blt cr6,0x8998ca58
	if (ctx.cr6.lt) goto loc_8998CA58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998E390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8998E398;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r29,26864(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89934058
	ctx.lr = 0x8998E3AC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998e3bc
	if (!ctx.cr6.eq) goto loc_8998E3BC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8998E3BC:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8991b880
	ctx.lr = 0x8998E3C4;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998e600
	if (ctx.cr6.eq) goto loc_8998E600;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lhz r26,-4592(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r6,r31,162
	ctx.r6.s64 = ctx.r31.s64 + 162;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r30,r5,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r11,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u16);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r9,r8,20
	ctx.r9.u64 = ctx.r8.u64 | 20;
	// clrlwi r23,r29,16
	ctx.r23.u64 = ctx.r29.u32 & 0xFFFF;
	// stwx r27,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r27,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998E434;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x8998E43C;
	sub_8991C578(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,4946(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x8998E454;
	sub_8991C678(ctx, base);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12024(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 12024);
	// bl 0x8991cac0
	ctx.lr = 0x8998E464;
	sub_8991CAC0(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,172
	ctx.r6.s64 = ctx.r31.s64 + 172;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stwx r27,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// addi r22,r31,204
	ctx.r22.s64 = ctx.r31.s64 + 204;
	// stwx r27,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r27,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r27,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u32);
	// ori r24,r9,256
	ctx.r24.u64 = ctx.r9.u64 | 256;
	// li r21,16384
	ctx.r21.s64 = 16384;
	// addi r29,r10,-14416
	ctx.r29.s64 = ctx.r10.s64 + -14416;
loc_8998E4A8:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r20,r8,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// lhzx r19,r9,r7
	ctx.r19.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r19
	ctx.r8.s64 = ctx.r19.s16;
	// lhzx r10,r20,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r18,r8,208
	ctx.r18.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r20,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r29.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwzx r10,r20,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// or r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 | ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// sthx r26,r18,r4
	REX_STORE_U16(ctx.r18.u32 + ctx.r4.u32, ctx.r26.u16);
	// stwx r7,r18,r31
	REX_STORE_U32(ctx.r18.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r23,r18,r11
	REX_STORE_U32(ctx.r18.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r10,r18,r9
	REX_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r18,r5
	REX_STORE_U16(ctx.r18.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r27,r18,r6
	REX_STORE_U32(ctx.r18.u32 + ctx.r6.u32, ctx.r27.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998E524;
	sub_8991B538(ctx, base);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// addi r8,r29,17
	ctx.r8.s64 = ctx.r29.s64 + 17;
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// lhzx r10,r20,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r7.u32);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r17,r31,48
	ctx.r17.s64 = ctx.r31.s64 + 48;
	// sthx r21,r18,r5
	REX_STORE_U16(ctx.r18.u32 + ctx.r5.u32, ctx.r21.u16);
	// addi r16,r31,60
	ctx.r16.s64 = ctx.r31.s64 + 60;
	// stwx r11,r18,r4
	REX_STORE_U32(ctx.r18.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r15,r31,52
	ctx.r15.s64 = ctx.r31.s64 + 52;
	// addi r14,r31,192
	ctx.r14.s64 = ctx.r31.s64 + 192;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhzx r7,r20,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r6.u32);
	// lbzx r6,r20,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r7,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r10,r18,r16
	REX_STORE_U32(ctx.r18.u32 + ctx.r16.u32, ctx.r10.u32);
	// stwx r4,r18,r17
	REX_STORE_U32(ctx.r18.u32 + ctx.r17.u32, ctx.r4.u32);
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r18,r14
	REX_STORE_U8(ctx.r18.u32 + ctx.r14.u32, ctx.r6.u8);
	// stwx r27,r18,r8
	REX_STORE_U32(ctx.r18.u32 + ctx.r8.u32, ctx.r27.u32);
	// stwx r11,r18,r15
	REX_STORE_U32(ctx.r18.u32 + ctx.r15.u32, ctx.r11.u32);
	// bl 0x8991c578
	ctx.lr = 0x8998E5A4;
	sub_8991C578(ctx, base);
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r5,r31,207
	ctx.r5.s64 = ctx.r31.s64 + 207;
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// lbzx r10,r20,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r6.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// cmplwi cr6,r6,18
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 18, ctx.xer);
	// addi r28,r31,204
	ctx.r28.s64 = ctx.r31.s64 + 204;
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r10,r18,r4
	REX_STORE_U8(ctx.r18.u32 + ctx.r4.u32, ctx.r10.u8);
	// stbx r7,r18,r5
	REX_STORE_U8(ctx.r18.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r18,r8
	REX_STORE_U8(ctx.r18.u32 + ctx.r8.u32, ctx.r5.u8);
	// lbzx r4,r30,r22
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// stbx r4,r18,r28
	REX_STORE_U8(ctx.r18.u32 + ctx.r28.u32, ctx.r4.u8);
	// blt cr6,0x8998e4a8
	if (ctx.cr6.lt) goto loc_8998E4A8;
loc_8998E600:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998F970) {
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
	// b 0x8998f618
	sub_8998F618(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998F9D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8998F9E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
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
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
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
	// stwx r9,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// lbzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r8,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u8);
	// beq cr6,0x8998fc14
	if (ctx.cr6.eq) goto loc_8998FC14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x8998FA80;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8998FA8C;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// bl 0x8991db50
	ctx.lr = 0x8998FB04;
	sub_8991DB50(ctx, base);
	// addi r5,r30,196
	ctx.r5.s64 = ctx.r30.s64 + 196;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8998fcd0
	if (!ctx.cr6.eq) goto loc_8998FCD0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998fcd0
	if (ctx.cr6.eq) goto loc_8998FCD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8998FB34;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998fcd0
	if (ctx.cr6.eq) goto loc_8998FCD0;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-13564
	ctx.r11.s64 = ctx.r11.s64 + -13564;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
loc_8998FB54:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r8,r31,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// rotlwi r10,r7,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r23,r5,128
	ctx.r23.s64 = ctx.r5.s64 + 128;
	// lwzu r7,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r24,r5,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// rlwinm r6,r23,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x3FE;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lhzx r24,r24,r28
	ctx.r24.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r28.u32);
	// lhzx r23,r6,r28
	ctx.r23.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// mullw r5,r10,r24
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// mullw r24,r24,r11
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r11.s32);
	// mullw r22,r11,r23
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// mullw r5,r10,r23
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// srawi r10,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 8;
	// srawi r24,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r24,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r24.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r8,r10,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x8998FBF4;
	sub_899CC3D0(ctx, base);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8998fb54
	if (ctx.cr6.lt) goto loc_8998FB54;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998FC14:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8998FC1C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x8998fc3c
	if (!ctx.cr6.lt) goto loc_8998FC3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8998FC3C:
	// ble cr6,0x8998fc4c
	if (!ctx.cr6.gt) goto loc_8998FC4C;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8998FC4C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8998fc1c
	if (ctx.cr6.lt) goto loc_8998FC1C;
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
loc_8998FCD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89990BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89990BC0;
	__savegprlr_26(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r9,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r7,r8,0,24,22
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r7.u64 & 0x100);
	// addi r6,r11,158
	ctx.r6.s64 = ctx.r11.s64 + 158;
	// addi r5,r11,158
	ctx.r5.s64 = ctx.r11.s64 + 158;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// sthx r6,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lbzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// stbx r3,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u8);
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stwx r6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// lbzx r29,r10,r4
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lhzx r4,r10,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r28,r28,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,36
	ctx.r26.s64 = ctx.r11.s64 + 36;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r3,r5,r31
	ctx.r3.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r6,r7
	ctx.r31.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stwx r28,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stwx r3,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stwx r7,r10,r26
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// beq cr6,0x89990cb8
	if (ctx.cr6.eq) goto loc_89990CB8;
	// addi r8,r11,164
	ctx.r8.s64 = ctx.r11.s64 + 164;
	// lis r7,-8
	ctx.r7.s64 = -524288;
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
loc_89990CB8:
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// addi r6,r6,9016
	ctx.r6.s64 = ctx.r6.s64 + 9016;
	// rlwinm r31,r4,1,22,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r30,r11,60
	ctx.r30.s64 = ctx.r11.s64 + 60;
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r29,r5,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lhzx r31,r31,r6
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lwzx r30,r10,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lhzx r29,r29,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// srawi r6,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 4;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// lwzx r30,r9,r4
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// mullw r29,r6,r28
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mullw r27,r31,r7
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// subf r31,r29,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r29.u64;
	// mullw r29,r28,r7
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// stwx r31,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r31.u32);
	// srawi r6,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 8;
	// rotlwi r5,r31,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// lwzx r6,r9,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// lbzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r4,r9,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// subfc r31,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r31.u64 = ctx.r4.u64 - ctx.r5.u64;
	// eqv r5,r5,r4
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stbx r5,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// beq cr6,0x89990da4
	if (ctx.cr6.eq) goto loc_89990DA4;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_89990DA4:
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89991C18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89991C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,158
	ctx.r3.s64 = ctx.r11.s64 + 158;
	// addi r6,r11,158
	ctx.r6.s64 = ctx.r11.s64 + 158;
	// rlwimi r4,r7,0,24,22
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r4.u64 & 0x100);
	// addi r8,r11,180
	ctx.r8.s64 = ctx.r11.s64 + 180;
	// addi r5,r11,180
	ctx.r5.s64 = ctx.r11.s64 + 180;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lhzx r4,r30,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r3.u32);
	// sthx r4,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lbzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// stbx r3,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r3.u8);
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r31,r10,r6
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r29,r11,160
	ctx.r29.s64 = ctx.r11.s64 + 160;
	// addi r28,r11,56
	ctx.r28.s64 = ctx.r11.s64 + 56;
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
	// lwzx r26,r4,r8
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lhzx r4,r10,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// lbzx r29,r10,r5
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r5,r4,r31
	ctx.r5.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r26,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r26.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
	// rlwinm r7,r8,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// addi r26,r11,36
	ctx.r26.s64 = ctx.r11.s64 + 36;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 4;
	// lhzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// stwx r3,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r4,r10,r26
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r4.u32);
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r7,r10,r25
	REX_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r7.u32);
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// lhzx r28,r6,r9
	ctx.r28.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r5,r30,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stwx r3,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r5,r30,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r5,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r3,r11,206
	ctx.r3.s64 = ctx.r11.s64 + 206;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lbzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// lbzx r11,r30,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// stbx r5,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u8);
	// beq cr6,0x89991e40
	if (ctx.cr6.eq) goto loc_89991E40;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lwzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r4,r31,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// lwzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r3,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r4,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0xFFFFC000;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r7,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r30,r10,r6
	ctx.r30.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x89991E04;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89991e40
	if (ctx.cr6.eq) goto loc_89991E40;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x89991E18;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89991e40
	if (!ctx.cr6.eq) goto loc_89991E40;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r11,-13468
	ctx.r8.s64 = ctx.r11.s64 + -13468;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cbd98
	ctx.lr = 0x89991E40;
	sub_899CBD98(ctx, base);
loc_89991E40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89993AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89993AB0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r29,26864(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89934058
	ctx.lr = 0x89993AC4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89993ad4
	if (!ctx.cr6.eq) goto loc_89993AD4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89993AD4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8991b880
	ctx.lr = 0x89993ADC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89993d18
	if (ctx.cr6.eq) goto loc_89993D18;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lhz r26,-4592(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r6,r31,162
	ctx.r6.s64 = ctx.r31.s64 + 162;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r30,r5,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r11,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u16);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r9,r8,276
	ctx.r9.u64 = ctx.r8.u64 | 276;
	// clrlwi r23,r29,16
	ctx.r23.u64 = ctx.r29.u32 & 0xFFFF;
	// stwx r27,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r27,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x89993B4C;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x89993B54;
	sub_8991C578(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,4946(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x89993B6C;
	sub_8991C678(ctx, base);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12024(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 12024);
	// bl 0x8991cac0
	ctx.lr = 0x89993B7C;
	sub_8991CAC0(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,172
	ctx.r6.s64 = ctx.r31.s64 + 172;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stwx r27,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// addi r22,r31,204
	ctx.r22.s64 = ctx.r31.s64 + 204;
	// stwx r27,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r27,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r27,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u32);
	// ori r24,r9,256
	ctx.r24.u64 = ctx.r9.u64 | 256;
	// li r20,16384
	ctx.r20.s64 = 16384;
	// li r21,192
	ctx.r21.s64 = 192;
	// addi r29,r10,-12816
	ctx.r29.s64 = ctx.r10.s64 + -12816;
loc_89993BC4:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r19,r8,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// lhzx r18,r9,r7
	ctx.r18.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r18
	ctx.r8.s64 = ctx.r18.s16;
	// lhzx r10,r19,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r17,r8,208
	ctx.r17.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r19,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r29.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwzx r10,r19,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// or r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 | ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lhzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// sthx r26,r17,r4
	REX_STORE_U16(ctx.r17.u32 + ctx.r4.u32, ctx.r26.u16);
	// stwx r7,r17,r31
	REX_STORE_U32(ctx.r17.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r23,r17,r11
	REX_STORE_U32(ctx.r17.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r10,r17,r9
	REX_STORE_U32(ctx.r17.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r17,r5
	REX_STORE_U16(ctx.r17.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r27,r17,r6
	REX_STORE_U32(ctx.r17.u32 + ctx.r6.u32, ctx.r27.u32);
	// bl 0x8991b538
	ctx.lr = 0x89993C40;
	sub_8991B538(ctx, base);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lhzx r11,r19,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r7.u32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lhzx r10,r19,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r6.u32);
	// addi r16,r31,60
	ctx.r16.s64 = ctx.r31.s64 + 60;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// sthx r20,r17,r5
	REX_STORE_U16(ctx.r17.u32 + ctx.r5.u32, ctx.r20.u16);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// stwx r11,r17,r4
	REX_STORE_U32(ctx.r17.u32 + ctx.r4.u32, ctx.r11.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r15,r31,52
	ctx.r15.s64 = ctx.r31.s64 + 52;
	// addi r14,r31,164
	ctx.r14.s64 = ctx.r31.s64 + 164;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r9,r17,r8
	REX_STORE_U32(ctx.r17.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r10,r17,r16
	REX_STORE_U32(ctx.r17.u32 + ctx.r16.u32, ctx.r10.u32);
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r27,r17,r14
	REX_STORE_U32(ctx.r17.u32 + ctx.r14.u32, ctx.r27.u32);
	// stwx r8,r17,r15
	REX_STORE_U32(ctx.r17.u32 + ctx.r15.u32, ctx.r8.u32);
	// bl 0x8991c578
	ctx.lr = 0x89993CA8;
	sub_8991C578(ctx, base);
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// addi r10,r29,18
	ctx.r10.s64 = ctx.r29.s64 + 18;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r5,r31,207
	ctx.r5.s64 = ctx.r31.s64 + 207;
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// lbzx r6,r19,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r6.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lhzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r10.u32);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r28,r31,204
	ctx.r28.s64 = ctx.r31.s64 + 204;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r18,r31,64
	ctx.r18.s64 = ctx.r31.s64 + 64;
	// addi r16,r31,66
	ctx.r16.s64 = ctx.r31.s64 + 66;
	// clrlwi r15,r11,16
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r6,r17,r4
	REX_STORE_U8(ctx.r17.u32 + ctx.r4.u32, ctx.r6.u8);
	// stbx r10,r17,r5
	REX_STORE_U8(ctx.r17.u32 + ctx.r5.u32, ctx.r10.u8);
	// lbzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r17,r8
	REX_STORE_U8(ctx.r17.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbzx r6,r30,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// stbx r6,r17,r28
	REX_STORE_U8(ctx.r17.u32 + ctx.r28.u32, ctx.r6.u8);
	// cmplwi cr6,r15,9
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 9, ctx.xer);
	// sthx r19,r17,r18
	REX_STORE_U16(ctx.r17.u32 + ctx.r18.u32, ctx.r19.u16);
	// stbx r21,r17,r16
	REX_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r21.u8);
	// blt cr6,0x89993bc4
	if (ctx.cr6.lt) goto loc_89993BC4;
loc_89993D18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899959C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899959D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,70
	ctx.r3.s64 = 70;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x89934058
	ctx.lr = 0x899959E8;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89995b60
	if (ctx.cr6.eq) goto loc_89995B60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x899959F8;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89995b60
	if (ctx.cr6.eq) goto loc_89995B60;
	// bl 0x899d80c0
	ctx.lr = 0x89995A04;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89995b60
	if (ctx.cr6.eq) goto loc_89995B60;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// li r9,70
	ctx.r9.s64 = 70;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x89995A34;
	sub_8991B6A0(ctx, base);
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r28,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r28.u32);
	// bl 0x8991c610
	ctx.lr = 0x89995A40;
	sub_8991C610(ctx, base);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// sth r30,158(r3)
	REX_STORE_U16(ctx.r3.u32 + 158, ctx.r30.u16);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// rlwinm r8,r30,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// stw r4,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// li r10,116
	ctx.r10.s64 = 116;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// lhzx r7,r5,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rlwinm r4,r5,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lhzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r4,r5,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// stb r10,204(r3)
	REX_STORE_U8(ctx.r3.u32 + 204, ctx.r10.u8);
	// stb r10,200(r3)
	REX_STORE_U8(ctx.r3.u32 + 200, ctx.r10.u8);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// sth r31,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r31.u16);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r8,r8,32896
	ctx.r8.u64 = ctx.r8.u64 | 32896;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,11976
	ctx.r10.s64 = ctx.r10.s64 + 11976;
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// addi r7,r7,7904
	ctx.r7.s64 = ctx.r7.s64 + 7904;
loc_89995ACC:
	// addi r29,r11,25
	ctx.r29.s64 = ctx.r11.s64 + 25;
	// lwzx r28,r9,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stwx r28,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r28.u32);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r4,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r4.u32);
	// lwz r11,680(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,676(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 676);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// stb r31,78(r28)
	REX_STORE_U8(ctx.r28.u32 + 78, ctx.r31.u8);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// stb r31,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r31.u8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,76(r28)
	REX_STORE_U8(ctx.r28.u32 + 76, ctx.r31.u8);
	// stw r31,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
	// stw r8,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r8.u32);
	// stw r5,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r5.u32);
	// stw r31,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r6,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r6.u32);
	// stw r31,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r31.u32);
	// stw r31,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// stw r31,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r31.u32);
	// stb r31,79(r28)
	REX_STORE_U8(ctx.r28.u32 + 79, ctx.r31.u8);
	// stb r31,80(r28)
	REX_STORE_U8(ctx.r28.u32 + 80, ctx.r31.u8);
	// stw r3,64(r28)
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r3.u32);
	// lhz r29,154(r3)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 154);
	// sth r29,72(r28)
	REX_STORE_U16(ctx.r28.u32 + 72, ctx.r29.u16);
	// blt cr6,0x89995acc
	if (ctx.cr6.lt) goto loc_89995ACC;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x89995B54;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89995B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996248) {
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
	// addi r31,r11,-14184
	ctx.r31.s64 = ctx.r11.s64 + -14184;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934860
	ctx.lr = 0x89996290;
	sub_89934860(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899352b8
	ctx.lr = 0x899962C4;
	sub_899352B8(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lis r6,-30305
	ctx.r6.s64 = -1986068480;
	// lhz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// lis r4,-30233
	ctx.r4.s64 = -1981349888;
	// lhz r8,110(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r6,r6,22076
	ctx.r6.s64 = ctx.r6.s64 + 22076;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,23444
	ctx.r4.s64 = ctx.r4.s64 + 23444;
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
	ctx.lr = 0x89996334;
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

DEFINE_REX_FUNC(sub_89996640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89996648;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r5,r10,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r5,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89996740
	if (ctx.cr6.lt) goto loc_89996740;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x899967c0
	if (!ctx.cr6.lt) goto loc_899967C0;
	// bl 0x8991b9f0
	ctx.lr = 0x8999667C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8999669c
	if (!ctx.cr6.lt) goto loc_8999669C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89996538
	ctx.lr = 0x89996694;
	sub_89996538(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999669C:
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r5,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r31,206
	ctx.r6.s64 = ctx.r31.s64 + 206;
	// lwzx r10,r5,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// stwx r10,r5,r30
	REX_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r10,r7,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stwx r8,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r8.u32);
	// lbzx r10,r7,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r7,r5,r31
	REX_STORE_U8(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u8);
	// beq cr6,0x89996730
	if (ctx.cr6.eq) goto loc_89996730;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x89996720
	if (ctx.cr6.eq) goto loc_89996720;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x899967c0
	if (!ctx.cr6.eq) goto loc_899967C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c2598
	ctx.lr = 0x89996718;
	sub_899C2598(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89996720:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c23e8
	ctx.lr = 0x89996728;
	sub_899C23E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89996730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c22e0
	ctx.lr = 0x89996738;
	sub_899C22E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89996740:
	// addi r11,r31,183
	ctx.r11.s64 = ctx.r31.s64 + 183;
	// lbzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x899967c0
	if (ctx.cr6.lt) goto loc_899967C0;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
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
	// stwx r7,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u32);
loc_899967C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89997160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89997168;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30228
	ctx.r11.s64 = -1981022208;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r31,r11,-13856
	ctx.r31.s64 = ctx.r11.s64 + -13856;
	// addi r4,r31,592
	ctx.r4.s64 = ctx.r31.s64 + 592;
	// bl 0x89997060
	ctx.lr = 0x89997180;
	sub_89997060(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r31,592
	ctx.r5.s64 = ctx.r31.s64 + 592;
	// addi r6,r31,2224
	ctx.r6.s64 = ctx.r31.s64 + 2224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,3484
	ctx.r3.s64 = ctx.r11.s64 + 3484;
loc_89997198:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899971b0
	if (!ctx.cr6.eq) goto loc_899971B0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_899971B0:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_899971B4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r7,r7,34
	ctx.r7.s64 = ctx.r7.s64 + 34;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x899971b4
	if (ctx.cr6.lt) goto loc_899971B4;
	// addi r10,r31,2224
	ctx.r10.s64 = ctx.r31.s64 + 2224;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r6,r6,132
	ctx.r6.s64 = ctx.r6.s64 + 132;
	// addi r11,r10,6336
	ctx.r11.s64 = ctx.r10.s64 + 6336;
	// addi r5,r5,34
	ctx.r5.s64 = ctx.r5.s64 + 34;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89997198
	if (ctx.cr6.lt) goto loc_89997198;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r10,9016
	ctx.r4.s64 = ctx.r10.s64 + 9016;
	// addi r29,r11,-12560
	ctx.r29.s64 = ctx.r11.s64 + -12560;
loc_89997218:
	// lbzx r8,r30,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
loc_89997234:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r6,r31,2224
	ctx.r6.s64 = ctx.r31.s64 + 2224;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r28,r11,128
	ctx.r28.s64 = ctx.r11.s64 + 128;
	// rlwinm r27,r11,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r7,r31,2224
	ctx.r7.s64 = ctx.r31.s64 + 2224;
	// addi r5,r31,2224
	ctx.r5.s64 = ctx.r31.s64 + 2224;
	// lhzx r27,r27,r4
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r4.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lhzx r28,r28,r4
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r4.u32);
	// addi r26,r31,2224
	ctx.r26.s64 = ctx.r31.s64 + 2224;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// mullw r6,r28,r8
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// mullw r27,r27,r8
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 8;
	// stwx r7,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stwx r6,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// bdnz 0x89997234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89997234;
	// addi r11,r31,2224
	ctx.r11.s64 = ctx.r31.s64 + 2224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stwx r9,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// cmpwi cr6,r3,6336
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6336, ctx.xer);
	// blt cr6,0x89997218
	if (ctx.cr6.lt) goto loc_89997218;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899979D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899979E0;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10384(r1)
	ea = -10384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r11,-12500
	ctx.r10.s64 = ctx.r11.s64 + -12500;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89997a4c
	if (ctx.cr6.eq) goto loc_89997A4C;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// li r29,16
	ctx.r29.s64 = 16;
loc_89997A0C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r4,-1(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// li r8,-8
	ctx.r8.s64 = -8;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// li r7,-8
	ctx.r7.s64 = -8;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89997A38;
	sub_89934FB8(ctx, base);
	// lbzu r11,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,680
	ctx.r30.s64 = ctx.r30.s64 + 680;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89997a0c
	if (!ctx.cr6.eq) goto loc_89997A0C;
loc_89997A4C:
	// lis r10,-30227
	ctx.r10.s64 = -1980956672;
	// lis r11,-30228
	ctx.r11.s64 = -1981022208;
	// addi r28,r10,-21776
	ctx.r28.s64 = ctx.r10.s64 + -21776;
	// lis r9,-30304
	ctx.r9.s64 = -1986002944;
	// addi r11,r11,-3040
	ctx.r11.s64 = ctx.r11.s64 + -3040;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r24,5
	ctx.r24.s64 = 5;
	// addi r23,r9,-20044
	ctx.r23.s64 = ctx.r9.s64 + -20044;
loc_89997A74:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r25,3
	ctx.r25.s64 = 3;
loc_89997A7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_89997A88:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
loc_89997A90:
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_89997AD4:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89997ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89997AD4;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x89997a90
	if (!ctx.cr0.eq) goto loc_89997A90;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89997B00;
	sub_89935880(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,17
	ctx.r31.s64 = ctx.r31.s64 + 17;
	// addi r27,r27,170
	ctx.r27.s64 = ctx.r27.s64 + 170;
	// addi r4,r4,780
	ctx.r4.s64 = ctx.r4.s64 + 780;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x89997a88
	if (ctx.cr6.lt) goto loc_89997A88;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,17
	ctx.r29.s64 = ctx.r29.s64 + 17;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// bne 0x89997a7c
	if (!ctx.cr0.eq) goto loc_89997A7C;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x89997a74
	if (!ctx.cr0.eq) goto loc_89997A74;
	// addi r1,r1,10384
	ctx.r1.s64 = ctx.r1.s64 + 10384;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89997F98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89997FA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r11,-10472
	ctx.r30.s64 = ctx.r11.s64 + -10472;
	// li r25,0
	ctx.r25.s64 = 0;
	// sth r31,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// addi r11,r30,-1104
	ctx.r11.s64 = ctx.r30.s64 + -1104;
	// li r10,160
	ctx.r10.s64 = 160;
	// stb r25,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// li r9,-40
	ctx.r9.s64 = -40;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934b48
	ctx.lr = 0x89997FE8;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// addi r26,r11,-19984
	ctx.r26.s64 = ctx.r11.s64 + -19984;
	// addi r5,r30,-1104
	ctx.r5.s64 = ctx.r30.s64 + -1104;
	// addi r6,r26,-128
	ctx.r6.s64 = ctx.r26.s64 + -128;
	// addi r4,r10,23916
	ctx.r4.s64 = ctx.r10.s64 + 23916;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x8999800C;
	sub_89935610(ctx, base);
	// addi r8,r30,744
	ctx.r8.s64 = ctx.r30.s64 + 744;
	// li r10,160
	ctx.r10.s64 = 160;
	// stb r25,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-36
	ctx.r9.s64 = -36;
	// li r8,-20
	ctx.r8.s64 = -20;
	// sth r31,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89934b48
	ctx.lr = 0x89998040;
	sub_89934B48(ctx, base);
	// addi r6,r26,-164
	ctx.r6.s64 = ctx.r26.s64 + -164;
	// addi r5,r30,744
	ctx.r5.s64 = ctx.r30.s64 + 744;
	// addi r4,r30,-1032
	ctx.r4.s64 = ctx.r30.s64 + -1032;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89935610
	ctx.lr = 0x89998058;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r11,-12448
	ctx.r10.s64 = ctx.r11.s64 + -12448;
	// lbz r11,-12448(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -12448);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x899980e0
	if (ctx.cr6.eq) goto loc_899980E0;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_89998078:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r5,3(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// addi r11,r30,408
	ctx.r11.s64 = ctx.r30.s64 + 408;
	// lbzu r10,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r8,-10
	ctx.r8.s64 = -10;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899980C4;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89998078
	if (!ctx.cr6.eq) goto loc_89998078;
loc_899980E0:
	// addi r5,r30,408
	ctx.r5.s64 = ctx.r30.s64 + 408;
	// addi r4,r30,-784
	ctx.r4.s64 = ctx.r30.s64 + -784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x899980F8;
	sub_89935C28(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r11,-12368
	ctx.r10.s64 = ctx.r11.s64 + -12368;
	// lbz r11,-12368(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -12368);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x89998184
	if (ctx.cr6.eq) goto loc_89998184;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_89998118:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r5,3(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// addi r11,r30,-944
	ctx.r11.s64 = ctx.r30.s64 + -944;
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x89998168;
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
	// bne cr6,0x89998118
	if (!ctx.cr6.eq) goto loc_89998118;
loc_89998184:
	// addi r6,r26,320
	ctx.r6.s64 = ctx.r26.s64 + 320;
	// addi r5,r30,-944
	ctx.r5.s64 = ctx.r30.s64 + -944;
	// addi r4,r30,856
	ctx.r4.s64 = ctx.r30.s64 + 856;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x8999819C;
	sub_89935688(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r11,-12312
	ctx.r10.s64 = ctx.r11.s64 + -12312;
	// lbz r11,-12312(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -12312);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x89998228
	if (ctx.cr6.eq) goto loc_89998228;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899981BC:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// addi r3,r30,1064
	ctx.r3.s64 = ctx.r30.s64 + 1064;
	// lbz r7,3(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// li r8,-8
	ctx.r8.s64 = -8;
	// add r27,r29,r6
	ctx.r27.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lbzu r4,6(r31)
	ea = 6 + ctx.r31.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// clrlwi r24,r4,16
	ctx.r24.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r24,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
	// bl 0x89934fb8
	ctx.lr = 0x8999820C;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899981bc
	if (!ctx.cr6.eq) goto loc_899981BC;
loc_89998228:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_89998230:
	// mulli r10,r31,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r30,1064
	ctx.r5.s64 = ctx.r30.s64 + 1064;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x89935688
	ctx.lr = 0x89998250;
	sub_89935688(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89998230
	if (ctx.cr6.lt) goto loc_89998230;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89999CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89999CB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x89999CC4;
	sub_8991C8B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c718
	ctx.lr = 0x89999CCC;
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
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// addi r6,r8,-12060
	ctx.r6.s64 = ctx.r8.s64 + -12060;
	// lhzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r6,r3,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// addi r25,r30,36
	ctx.r25.s64 = ctx.r30.s64 + 36;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r24,r30,32
	ctx.r24.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x89999D80;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89999e18
	if (ctx.cr6.eq) goto loc_89999E18;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r30,r31,r27
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x89999DA8;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89999e18
	if (ctx.cr6.eq) goto loc_89999E18;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x89999DBC;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89999e18
	if (!ctx.cr6.eq) goto loc_89999E18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x89999DCC;
	sub_89932A38(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwzx r30,r31,r28
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwzx r31,r31,r27
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
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
	ctx.lr = 0x89999E00;
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
	ctx.lr = 0x89999E18;
	sub_899CC3D0(ctx, base);
loc_89999E18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A630) {
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
	ctx.lr = 0x8999A664;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999a67c
	if (!ctx.cr6.eq) goto loc_8999A67C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8999A67C:
	// lis r11,-30310
	ctx.r11.s64 = -1986396160;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// bl 0x89915de0
	ctx.lr = 0x8999A688;
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

DEFINE_REX_FUNC(sub_8999AB60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8999AB68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r31,r11,1240
	ctx.r31.s64 = ctx.r11.s64 + 1240;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,1024
	ctx.r7.s64 = ctx.r31.s64 + 1024;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8999ABA8;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1024
	ctx.r11.s64 = ctx.r31.s64 + 1024;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89934fb8
	ctx.lr = 0x8999ABE0;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1024
	ctx.r11.s64 = ctx.r31.s64 + 1024;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,250
	ctx.r4.s64 = ctx.r11.s64 + 250;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8999AC18;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1024
	ctx.r11.s64 = ctx.r31.s64 + 1024;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r3,r11,290
	ctx.r3.s64 = ctx.r11.s64 + 290;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89934fb8
	ctx.lr = 0x8999AC4C;
	sub_89934FB8(ctx, base);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,-21312
	ctx.r29.s64 = ctx.r10.s64 + -21312;
	// addi r28,r11,-11988
	ctx.r28.s64 = ctx.r11.s64 + -11988;
loc_8999AC60:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r30,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// lhzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,1024
	ctx.r5.s64 = ctx.r31.s64 + 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r3,r9,16
	ctx.r3.u64 = ctx.r9.u64 | 16;
	// bl 0x89935688
	ctx.lr = 0x8999AC84;
	sub_89935688(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8999ac60
	if (ctx.cr6.lt) goto loc_8999AC60;
	// addi r11,r31,1024
	ctx.r11.s64 = ctx.r31.s64 + 1024;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,160
	ctx.r5.s64 = ctx.r11.s64 + 160;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x8999ACB4;
	sub_89935688(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999B858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8999B860;
	__savegprlr_23(ctx, base);
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
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8999b9f0
	if (ctx.cr6.lt) goto loc_8999B9F0;
	// bne cr6,0x8999bb80
	if (!ctx.cr6.eq) goto loc_8999BB80;
	// bl 0x8991b9f0
	ctx.lr = 0x8999B890;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8999b8b0
	if (!ctx.cr6.lt) goto loc_8999B8B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8999b730
	ctx.lr = 0x8999B8A8;
	sub_8999B730(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_8999B8B0:
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// rlwinm r8,r10,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lwzx r5,r9,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r3,r5,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// or r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 | ctx.r8.u64;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r9,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x8991bda8
	ctx.lr = 0x8999B914;
	sub_8991BDA8(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8999bb80
	if (ctx.cr6.eq) goto loc_8999BB80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x8999B930;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999bb80
	if (ctx.cr6.eq) goto loc_8999BB80;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r4,r7,9016
	ctx.r4.s64 = ctx.r7.s64 + 9016;
	// lhzx r30,r31,r11
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// ori r3,r6,61440
	ctx.r3.u64 = ctx.r6.u64 | 61440;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// rlwinm r9,r30,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r7,r6,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r3,r6,r3
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// rlwinm r11,r4,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8999B9A8;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999bb80
	if (ctx.cr6.eq) goto loc_8999BB80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8999B9BC;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999bb80
	if (!ctx.cr6.eq) goto loc_8999BB80;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc3d0
	ctx.lr = 0x8999B9E0;
	sub_899CC3D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932a38
	ctx.lr = 0x8999B9E8;
	sub_89932A38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_8999B9F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x8999B9F8;
	sub_8991C8B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c718
	ctx.lr = 0x8999BA00;
	sub_8991C718(ctx, base);
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// addi r6,r11,512
	ctx.r6.s64 = ctx.r11.s64 + 512;
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// srawi r5,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 10;
	// clrlwi r4,r5,27
	ctx.r4.u64 = ctx.r5.u32 & 0x1F;
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// bl 0x8991b610
	ctx.lr = 0x8999BA38;
	sub_8991B610(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8999bb80
	if (ctx.cr6.eq) goto loc_8999BB80;
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
	// blt cr6,0x8999bb80
	if (ctx.cr6.lt) goto loc_8999BB80;
	// lhzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r29,r8,9016
	ctx.r29.s64 = ctx.r8.s64 + 9016;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r24,r11,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// rlwinm r25,r6,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// lhzx r5,r24,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r29.u32);
	// lis r23,4
	ctx.r23.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lhzx r11,r25,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r29.u32);
	// rlwinm r9,r4,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// mulli r5,r7,28672
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28672));
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r4,r23,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r23.u64;
	// bl 0x899d5fd0
	ctx.lr = 0x8999BAE0;
	sub_899D5FD0(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// ori r5,r9,20077
	ctx.r5.u64 = ctx.r9.u64 | 20077;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// ori r4,r8,32896
	ctx.r4.u64 = ctx.r8.u64 | 32896;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhzx r11,r24,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r29.u32);
	// ori r10,r9,16384
	ctx.r10.u64 = ctx.r9.u64 | 16384;
	// lhzx r9,r25,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r29.u32);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r30,r31,r26
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// ori r29,r8,22528
	ctx.r29.u64 = ctx.r8.u64 | 22528;
	// lbzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// mullw r4,r9,r29
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// rlwinm r5,r11,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// srawi r31,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 8;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r9,24576
	ctx.r9.s64 = 24576;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r10,r11,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x899d7a90
	ctx.lr = 0x8999BB80;
	sub_899D7A90(ctx, base);
loc_8999BB80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999E380) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8999E388;
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
	// addi r29,r31,158
	ctx.r29.s64 = ctx.r31.s64 + 158;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhzx r5,r30,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// mulli r6,r8,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// rlwinm r9,r3,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lhzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lhzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r30,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r9,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// lwzx r9,r30,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r26,r31,206
	ctx.r26.s64 = ctx.r31.s64 + 206;
	// rlwinm r11,r4,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r10,r30,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// stwx r8,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r6,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// lbzx r11,r6,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r10,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u8);
	// bl 0x89932b18
	ctx.lr = 0x8999E45C;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89932d30
	ctx.lr = 0x8999E468;
	sub_89932D30(ctx, base);
	// lhzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
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
	// stwx r7,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999F4D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8999F4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r30,r11,24728
	ctx.r30.s64 = ctx.r11.s64 + 24728;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r30,1192
	ctx.r7.s64 = ctx.r30.s64 + 1192;
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-17
	ctx.r8.s64 = -17;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x89934fb8
	ctx.lr = 0x8999F520;
	sub_89934FB8(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r30,1192
	ctx.r31.s64 = ctx.r30.s64 + 1192;
	// addi r29,r11,-30460
	ctx.r29.s64 = ctx.r11.s64 + -30460;
loc_8999F530:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x8999F544;
	sub_89935C28(ctx, base);
	// addi r11,r30,1192
	ctx.r11.s64 = ctx.r30.s64 + 1192;
	// addi r31,r31,170
	ctx.r31.s64 = ctx.r31.s64 + 170;
	// addi r11,r11,510
	ctx.r11.s64 = ctx.r11.s64 + 510;
	// addi r4,r4,396
	ctx.r4.s64 = ctx.r4.s64 + 396;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8999f530
	if (ctx.cr6.lt) goto loc_8999F530;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999F9E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8999F9E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// sth r25,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r25.u16);
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
	ctx.lr = 0x8999FA20;
	sub_89934FB8(ctx, base);
	// lis r10,-30226
	ctx.r10.s64 = -1980891136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-30832
	ctx.r30.s64 = ctx.r10.s64 + -30832;
loc_8999FA2C:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r7,r30,-1360
	ctx.r7.s64 = ctx.r30.s64 + -1360;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8999FA80:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8999fa80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8999FA80;
	// addi r7,r30,-1360
	ctx.r7.s64 = ctx.r30.s64 + -1360;
	// addi r6,r1,776
	ctx.r6.s64 = ctx.r1.s64 + 776;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8999FAB0:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8999fab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8999FAB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,68
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 68, ctx.xer);
	// blt cr6,0x8999fa2c
	if (ctx.cr6.lt) goto loc_8999FA2C;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,-31916
	ctx.r29.s64 = ctx.r10.s64 + -31916;
	// addi r28,r11,26432
	ctx.r28.s64 = ctx.r11.s64 + 26432;
loc_8999FAE4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-1360
	ctx.r10.s64 = ctx.r30.s64 + -1360;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r26,r31,108
	ctx.r26.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(108));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r29,-104
	ctx.r6.s64 = ctx.r29.s64 + -104;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x8999FB14;
	sub_89935688(ctx, base);
	// addi r11,r28,3456
	ctx.r11.s64 = ctx.r28.s64 + 3456;
	// addi r6,r29,-104
	ctx.r6.s64 = ctx.r29.s64 + -104;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// li r3,-16376
	ctx.r3.s64 = -16376;
	// bl 0x89935688
	ctx.lr = 0x8999FB30;
	sub_89935688(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x8999fae4
	if (ctx.cr6.lt) goto loc_8999FAE4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8999FB48:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,-1360
	ctx.r11.s64 = ctx.r30.s64 + -1360;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r28,1836
	ctx.r11.s64 = ctx.r28.s64 + 1836;
	// subf r26,r8,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r27,r31,108
	ctx.r27.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(108));
	// addi r6,r29,-104
	ctx.r6.s64 = ctx.r29.s64 + -104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r3,-32760
	ctx.r3.s64 = -32760;
	// bl 0x89935688
	ctx.lr = 0x8999FB80;
	sub_89935688(ctx, base);
	// addi r11,r28,5292
	ctx.r11.s64 = ctx.r28.s64 + 5292;
	// addi r6,r29,-104
	ctx.r6.s64 = ctx.r29.s64 + -104;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r3,16392
	ctx.r3.s64 = 16392;
	// bl 0x89935688
	ctx.lr = 0x8999FB9C;
	sub_89935688(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x8999fb48
	if (ctx.cr6.lt) goto loc_8999FB48;
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// sth r25,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r25.u16);
	// li r10,112
	ctx.r10.s64 = 112;
	// li r9,88
	ctx.r9.s64 = 88;
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934fb8
	ctx.lr = 0x8999FBE0;
	sub_89934FB8(ctx, base);
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// li r10,136
	ctx.r10.s64 = 136;
	// sth r25,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r25.u16);
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// li r9,88
	ctx.r9.s64 = 88;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89934fb8
	ctx.lr = 0x8999FC14;
	sub_89934FB8(ctx, base);
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r9,48
	ctx.r9.s64 = 48;
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x89934fb8
	ctx.lr = 0x8999FC4C;
	sub_89934FB8(ctx, base);
	// addi r6,r29,104
	ctx.r6.s64 = ctx.r29.s64 + 104;
	// addi r5,r30,208
	ctx.r5.s64 = ctx.r30.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x8999FC64;
	sub_89935688(ctx, base);
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A1830) {
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
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x899a198c
	if (ctx.cr6.gt) goto loc_899A198C;
	// lis r12,-30310
	ctx.r12.s64 = -1986396160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6268
	ctx.r12.s64 = ctx.r12.s64 + 6268;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899A18E0;
	case 1:
		goto loc_899A198C;
	case 2:
		goto loc_899A1930;
	case 3:
		goto loc_899A1960;
	case 4:
		goto loc_899A1960;
	case 5:
		goto loc_899A1960;
	case 6:
		goto loc_899A1960;
	case 7:
		goto loc_899A1960;
	case 8:
		goto loc_899A1960;
	case 9:
		goto loc_899A1960;
	case 10:
		goto loc_899A1960;
	case 11:
		goto loc_899A198C;
	case 12:
		goto loc_899A198C;
	case 13:
		goto loc_899A198C;
	case 14:
		goto loc_899A198C;
	case 15:
		goto loc_899A1960;
	case 16:
		goto loc_899A1960;
	case 17:
		goto loc_899A1960;
	case 18:
		goto loc_899A1960;
	case 19:
		goto loc_899A1960;
	case 20:
		goto loc_899A1960;
	case 21:
		goto loc_899A1960;
	case 22:
		goto loc_899A1960;
	case 23:
		goto loc_899A1960;
	case 24:
		goto loc_899A1960;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A18E0:
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// addi r7,r31,94
	ctx.r7.s64 = ctx.r31.s64 + 94;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// addi r3,r8,-10264
	ctx.r3.s64 = ctx.r8.s64 + -10264;
	// li r11,0
	ctx.r11.s64 = 0;
	// and r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stwx r3,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// sthx r11,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u16);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stbx r11,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u8);
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// sthx r11,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u16);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// b 0x899a1994
	goto loc_899A1994;
loc_899A1930:
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
	ctx.lr = 0x899A195C;
	sub_899D4C10(ctx, base);
	// b 0x899a198c
	goto loc_899A198C;
loc_899A1960:
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
	// li r4,6
	ctx.r4.s64 = 6;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x899d4440
	ctx.lr = 0x899A198C;
	sub_899D4440(ctx, base);
loc_899A198C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_899A1994:
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

DEFINE_REX_FUNC(sub_899A4770) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899A4778;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r11,148
	ctx.r5.s64 = ctx.r11.s64 + 148;
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lhzx r7,r10,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// and r6,r9,r12
	ctx.r6.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,16560
	ctx.r12.s64 = 1085276160;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r8,r10,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// mulli r30,r30,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(208));
	// lwzx r28,r30,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// and r28,r28,r12
	ctx.r28.u64 = ctx.r28.u64 & ctx.r12.u64;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// addi r29,r11,68
	ctx.r29.s64 = ctx.r11.s64 + 68;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// lwzx r11,r30,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r3,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r9,r30,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A4818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899A4820;
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
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x899a5420
	if (ctx.cr6.gt) goto loc_899A5420;
	// beq cr6,0x899a526c
	if (ctx.cr6.eq) goto loc_899A526C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x899a579c
	if (ctx.cr6.gt) goto loc_899A579C;
	// lis r12,-30310
	ctx.r12.s64 = -1986396160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18540
	ctx.r12.s64 = ctx.r12.s64 + 18540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899A48B8;
	case 1:
		goto loc_899A48B8;
	case 2:
		goto loc_899A4CCC;
	case 3:
		goto loc_899A501C;
	case 4:
		goto loc_899A501C;
	case 5:
		goto loc_899A501C;
	case 6:
		goto loc_899A501C;
	case 7:
		goto loc_899A501C;
	case 8:
		goto loc_899A501C;
	case 9:
		goto loc_899A501C;
	case 10:
		goto loc_899A501C;
	case 11:
		goto loc_899A501C;
	case 12:
		goto loc_899A501C;
	case 13:
		goto loc_899A501C;
	case 14:
		goto loc_899A501C;
	case 15:
		goto loc_899A501C;
	case 16:
		goto loc_899A501C;
	case 17:
		goto loc_899A501C;
	case 18:
		goto loc_899A501C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A48B8:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899a4b78
	if (ctx.cr6.eq) goto loc_899A4B78;
	// bl 0x899a42d8
	ctx.lr = 0x899A48D0;
	sub_899A42D8(ctx, base);
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899a4928
	if (ctx.cr6.lt) goto loc_899A4928;
	// bne cr6,0x899a4ca8
	if (!ctx.cr6.eq) goto loc_899A4CA8;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899a4ca8
	if (ctx.cr6.eq) goto loc_899A4CA8;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A4910;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r3,46
	ctx.r3.s64 = 46;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// bl 0x89936360
	ctx.lr = 0x899A4924;
	sub_89936360(ctx, base);
	// b 0x899a4ca8
	goto loc_899A4CA8;
loc_899A4928:
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a49d0
	if (ctx.cr6.eq) goto loc_899A49D0;
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
	// beq cr6,0x899a4968
	if (ctx.cr6.eq) goto loc_899A4968;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x899a4ca8
	if (ctx.cr6.lt) goto loc_899A4CA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899a49f8
	goto loc_899A49F8;
loc_899A4968:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x899a4ca8
	if (ctx.cr6.lt) goto loc_899A4CA8;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r25,0
	ctx.r25.s64 = 0;
	// stbx r25,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
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
	// blt cr6,0x899a49f8
	if (ctx.cr6.lt) goto loc_899A49F8;
	// bne cr6,0x899a4ca8
	if (!ctx.cr6.eq) goto loc_899A4CA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r25,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A49B0;
	sub_8991B610(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899a4ca8
	goto loc_899A4CA8;
loc_899A49D0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899a4a70
	if (ctx.cr6.eq) goto loc_899A4A70;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x899A49EC;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A49F8:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
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
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
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
	// bne 0x899a4ca8
	if (!ctx.cr0.eq) goto loc_899A4CA8;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x899a4ca8
	goto loc_899A4CA8;
loc_899A4A70:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a4ca8
	if (ctx.cr6.eq) goto loc_899A4CA8;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// li r25,0
	ctx.r25.s64 = 0;
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
	// blt cr6,0x899a4af4
	if (ctx.cr6.lt) goto loc_899A4AF4;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r25,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r10,r10,-9776
	ctx.r10.s64 = ctx.r10.s64 + -9776;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
loc_899A4AB4:
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lhz r6,2(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rotlwi r9,r6,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x899d1138
	ctx.lr = 0x899A4ADC;
	sub_899D1138(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x899a4ab4
	if (ctx.cr6.lt) goto loc_899A4AB4;
loc_899A4AF4:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x899A4B04;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a4ca8
	if (ctx.cr6.eq) goto loc_899A4CA8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// addi r11,r11,-9768
	ctx.r11.s64 = ctx.r11.s64 + -9768;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_899A4B20:
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lhz r5,2(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rotlwi r27,r4,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lhzu r7,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// li r6,116
	ctx.r6.s64 = 116;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 + ctx.r5.u64;
	// bl 0x8999efa8
	ctx.lr = 0x899A4B5C;
	sub_8999EFA8(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899a4b20
	if (ctx.cr6.lt) goto loc_899A4B20;
	// b 0x899a4ca8
	goto loc_899A4CA8;
loc_899A4B78:
	// bl 0x8991c8b8
	ctx.lr = 0x899A4B7C;
	sub_8991C8B8(ctx, base);
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
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
	// blt cr6,0x899a4ca8
	if (ctx.cr6.lt) goto loc_899A4CA8;
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
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
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
	// rlwinm r8,r6,5,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xF0000;
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
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// mullw r6,r5,r10
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// lwzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// rlwinm r28,r8,21,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0xC;
	// addi r4,r4,-9792
	ctx.r4.s64 = ctx.r4.s64 + -9792;
	// addi r29,r30,207
	ctx.r29.s64 = ctx.r30.s64 + 207;
	// add r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// lwzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addis r5,r27,24
	ctx.r5.s64 = ctx.r27.s64 + 1572864;
	// bl 0x899d4640
	ctx.lr = 0x899A4CA8;
	sub_899D4640(ctx, base);
loc_899A4CA8:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899A4CC4;
	sub_89933B88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A4CCC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899A4CD4;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899a4cf0
	if (!ctx.cr6.lt) goto loc_899A4CF0;
loc_899A4CE0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_899A4CE4:
	// bl 0x899a4048
	ctx.lr = 0x899A4CE8;
	sub_899A4048(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A4CF0:
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x899a4d2c
	if (ctx.cr6.eq) goto loc_899A4D2C;
loc_899A4D04:
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r9,512
	ctx.r9.s64 = 512;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A4D2C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899a4770
	ctx.lr = 0x899A4D34;
	sub_899A4770(ctx, base);
	// addi r7,r30,188
	ctx.r7.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899a4e24
	if (ctx.cr6.lt) goto loc_899A4E24;
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r9,0
	ctx.r9.s64 = 0;
loc_899A4D54:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x899a4d6c
	if (!ctx.cr6.lt) goto loc_899A4D6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A4D6C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899a4d84
	if (!ctx.cr6.gt) goto loc_899A4D84;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A4D84:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899a4d54
	if (ctx.cr6.lt) goto loc_899A4D54;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r10,-124
	ctx.r3.s64 = ctx.r10.s64 + -124;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stbx r8,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A4E24:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899a4e48
	if (ctx.cr6.eq) goto loc_899A4E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A4E48:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899A4E50;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899A4E5C;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x899a4e78
	if (!ctx.cr6.lt) goto loc_899A4E78;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A4E78:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x899a4e90
	if (!ctx.cr6.gt) goto loc_899A4E90;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A4E90:
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,-124
	ctx.r7.s64 = ctx.r11.s64 + -124;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r27,r30,184
	ctx.r27.s64 = ctx.r30.s64 + 184;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// beq cr6,0x899a4f28
	if (ctx.cr6.eq) goto loc_899A4F28;
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
	// blt cr6,0x899a579c
	if (ctx.cr6.lt) goto loc_899A579C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899a4f48
	goto loc_899A4F48;
loc_899A4F28:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x899A4F38;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a579c
	if (ctx.cr6.eq) goto loc_899A579C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
loc_899A4F48:
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// ori r5,r9,20480
	ctx.r5.u64 = ctx.r9.u64 | 20480;
	// rlwinm r10,r29,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r9,r29,128
	ctx.r9.s64 = ctx.r29.s64 + 128;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhzx r4,r10,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lhzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r7,r4,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8991b880
	ctx.lr = 0x899A4FC0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a4ff8
	if (ctx.cr6.eq) goto loc_899A4FF8;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r11,-4592
	ctx.r8.s64 = ctx.r11.s64 + -4592;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89997d48
	ctx.lr = 0x899A4FE8;
	sub_89997D48(ctx, base);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// addi r9,r10,-18292
	ctx.r9.s64 = ctx.r10.s64 + -18292;
	// lbz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// bl 0x89936360
	ctx.lr = 0x899A4FF8;
	sub_89936360(ctx, base);
loc_899A4FF8:
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932a38
	ctx.lr = 0x899A5014;
	sub_89932A38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A501C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A5024;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a4ce0
	if (ctx.cr6.lt) goto loc_899A4CE0;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x899a4d04
	if (!ctx.cr6.eq) goto loc_899A4D04;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899a4770
	ctx.lr = 0x899A504C;
	sub_899A4770(ctx, base);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// beq cr6,0x899a579c
	if (ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,15
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 15, ctx.xer);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
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
	// bgt cr6,0x899a5218
	if (ctx.cr6.gt) goto loc_899A5218;
	// lis r12,-30310
	ctx.r12.s64 = -1986396160;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20712
	ctx.r12.s64 = ctx.r12.s64 + 20712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_899A5128;
	case 1:
		goto loc_899A5218;
	case 2:
		goto loc_899A5218;
	case 3:
		goto loc_899A5218;
	case 4:
		goto loc_899A5218;
	case 5:
		goto loc_899A5218;
	case 6:
		goto loc_899A5218;
	case 7:
		goto loc_899A51D0;
	case 8:
		goto loc_899A5128;
	case 9:
		goto loc_899A5218;
	case 10:
		goto loc_899A5218;
	case 11:
		goto loc_899A5218;
	case 12:
		goto loc_899A5218;
	case 13:
		goto loc_899A5218;
	case 14:
		goto loc_899A5218;
	case 15:
		goto loc_899A51D0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A5128:
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899a51a4
	if (ctx.cr6.eq) goto loc_899A51A4;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r28,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x899a5168
	if (!ctx.cr6.eq) goto loc_899A5168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5168:
	// addi r11,r9,-3
	ctx.r11.s64 = ctx.r9.s64 + -3;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r10,-9744
	ctx.r8.s64 = ctx.r10.s64 + -9744;
	// rlwinm r7,r9,29,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addis r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -5505024;
	// bl 0x899d1138
	ctx.lr = 0x899A519C;
	sub_899D1138(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A51A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A51BC;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A51D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899a579c
	if (ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A51FC;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r3,45
	ctx.r3.s64 = 45;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x89936360
	ctx.lr = 0x899A5210;
	sub_89936360(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5218:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A523C;
	sub_8991B610(ctx, base);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lwzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A526C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899A5274;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a4ce0
	if (ctx.cr6.lt) goto loc_899A4CE0;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x899a4d04
	if (!ctx.cr6.eq) goto loc_899A4D04;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899a4770
	ctx.lr = 0x899A529C;
	sub_899A4770(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a5390
	if (ctx.cr6.eq) goto loc_899A5390;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899a52dc
	if (ctx.cr6.eq) goto loc_899A52DC;
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
	// blt cr6,0x899a579c
	if (ctx.cr6.lt) goto loc_899A579C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899a53b8
	goto loc_899A53B8;
loc_899A52DC:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899a52f8
	if (!ctx.cr6.eq) goto loc_899A52F8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x899a53b0
	goto loc_899A53B0;
loc_899A52F8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x899A5308;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a579c
	if (ctx.cr6.eq) goto loc_899A579C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r10,-9736
	ctx.r28.s64 = ctx.r10.s64 + -9736;
loc_899A5320:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r7,r28,2
	ctx.r7.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r3,2
	ctx.r3.s64 = 2;
	// lhzx r7,r26,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r7.u32);
	// lhzx r25,r26,r28
	ctx.r25.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r28.u32);
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lhzx r7,r26,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// rotlwi r11,r25,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 16);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8999efa8
	ctx.lr = 0x899A5374;
	sub_8999EFA8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x899a5320
	if (ctx.cr6.lt) goto loc_899A5320;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5390:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899a579c
	if (ctx.cr6.eq) goto loc_899A579C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899A53AC;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_899A53B0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A53B8:
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5420:
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x899a5700
	if (ctx.cr6.gt) goto loc_899A5700;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bge cr6,0x899a5670
	if (!ctx.cr6.lt) goto loc_899A5670;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x899a579c
	if (!ctx.cr6.eq) goto loc_899A579C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899A5440;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a4ce4
	if (ctx.cr6.lt) goto loc_899A4CE4;
	// bl 0x899a4770
	ctx.lr = 0x899A5454;
	sub_899A4770(ctx, base);
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899a55f8
	if (ctx.cr6.lt) goto loc_899A55F8;
	// beq cr6,0x899a54dc
	if (ctx.cr6.eq) goto loc_899A54DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899a5660
	if (!ctx.cr6.lt) goto loc_899A5660;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bne cr6,0x899a54ac
	if (!ctx.cr6.eq) goto loc_899A54AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899A54A4;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A54AC:
	// ble cr6,0x899a54b8
	if (!ctx.cr6.gt) goto loc_899A54B8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899A54B8:
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x899a5660
	if (!ctx.cr6.lt) goto loc_899A5660;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// bl 0x8991b770
	ctx.lr = 0x899A54D4;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A54DC:
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
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
	// bne cr6,0x899a5510
	if (!ctx.cr6.eq) goto loc_899A5510;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899A5508;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5510:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// addi r27,r4,-9684
	ctx.r27.s64 = ctx.r4.s64 + -9684;
	// lbz r10,32018(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 32018);
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r8,9016
	ctx.r5.s64 = ctx.r8.s64 + 9016;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// clrlwi r28,r10,30
	ctx.r28.u64 = ctx.r10.u32 & 0x3;
	// lhzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// rlwinm r6,r29,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lbzx r4,r28,r27
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhzx r9,r3,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rotlwi r5,r8,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// sthx r3,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899a5660
	if (!ctx.cr6.gt) goto loc_899A5660;
	// li r31,0
	ctx.r31.s64 = 0;
loc_899A55B0:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r7,r11,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cc3d0
	ctx.lr = 0x899A55CC;
	sub_899CC3D0(ctx, base);
	// lbzx r8,r28,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x899a55b0
	if (ctx.cr6.lt) goto loc_899A55B0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899A55F0;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A55F8:
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
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
	// beq cr6,0x899a5660
	if (ctx.cr6.eq) goto loc_899A5660;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r3,r5,-9688
	ctx.r3.s64 = ctx.r5.s64 + -9688;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// lbzx r3,r4,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
loc_899A5660:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899A5668;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5670:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A5678;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x899a4ce4
	if (ctx.cr6.lt) goto loc_899A4CE4;
	// bl 0x899a4770
	ctx.lr = 0x899A568C;
	sub_899A4770(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899a56c8
	if (!ctx.cr6.eq) goto loc_899A56C8;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x899a56c8
	if (!ctx.cr6.lt) goto loc_899A56C8;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// b 0x899a56dc
	goto loc_899A56DC;
loc_899A56C8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
loc_899A56DC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A56F8;
	sub_8991B610(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5700:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// blt cr6,0x899a579c
	if (ctx.cr6.lt) goto loc_899A579C;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x899a579c
	if (ctx.cr6.gt) goto loc_899A579C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899A5718;
	sub_8991BAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899a5734
	if (!ctx.cr6.lt) goto loc_899A5734;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899A5734:
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lbzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u32);
	// lwzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A579C;
	sub_8991B610(ctx, base);
loc_899A579C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B2D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899B2D18;
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
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r27,r30,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r26,r30,r3
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// bgt cr6,0x899b2f78
	if (ctx.cr6.gt) goto loc_899B2F78;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11644
	ctx.r12.s64 = ctx.r12.s64 + 11644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B2DEC;
	case 1:
		goto loc_899B2E48;
	case 2:
		goto loc_899B2F78;
	case 3:
		goto loc_899B2F78;
	case 4:
		goto loc_899B2E58;
	case 5:
		goto loc_899B2E58;
	case 6:
		goto loc_899B2E58;
	case 7:
		goto loc_899B2E58;
	case 8:
		goto loc_899B2F78;
	case 9:
		goto loc_899B2F78;
	case 10:
		goto loc_899B2F60;
	case 11:
		goto loc_899B2F60;
	case 12:
		goto loc_899B2F78;
	case 13:
		goto loc_899B2F78;
	case 14:
		goto loc_899B2F78;
	case 15:
		goto loc_899B2F78;
	case 16:
		goto loc_899B2F78;
	case 17:
		goto loc_899B2F78;
	case 18:
		goto loc_899B2EDC;
	case 19:
		goto loc_899B2F48;
	case 20:
		goto loc_899B2F78;
	case 21:
		goto loc_899B2F78;
	case 22:
		goto loc_899B2F54;
	case 23:
		goto loc_899B2F54;
	case 24:
		goto loc_899B2F78;
	case 25:
		goto loc_899B2F78;
	case 26:
		goto loc_899B2F54;
	case 27:
		goto loc_899B2F54;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B2DEC:
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// addi r7,r31,94
	ctx.r7.s64 = ctx.r31.s64 + 94;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// lbzx r5,r30,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// sthx r11,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u16);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// addi r8,r8,-3512
	ctx.r8.s64 = ctx.r8.s64 + -3512;
	// and r29,r28,r12
	ctx.r29.u64 = ctx.r28.u64 & ctx.r12.u64;
	// stbx r11,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u8);
	// clrlwi r7,r5,25
	ctx.r7.u64 = ctx.r5.u32 & 0x7F;
	// stwx r8,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u32);
	// sthx r11,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u16);
	// sthx r11,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u16);
	// stwx r29,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// stbx r7,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B2E48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899a9638
	ctx.lr = 0x899B2E50;
	sub_899A9638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B2E58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899B2E60;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899b2e94
	if (!ctx.cr6.lt) goto loc_899B2E94;
loc_899B2E6C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B2E84;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B2E94:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,198
	ctx.r9.s64 = ctx.r31.s64 + 198;
	// addi r10,r31,199
	ctx.r10.s64 = ctx.r31.s64 + 199;
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
	ctx.lr = 0x899B2ECC;
	sub_8991C340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B2EDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B2EE4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b2f78
	if (ctx.cr6.lt) goto loc_899B2F78;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b2e6c
	if (ctx.cr6.eq) goto loc_899B2E6C;
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
	ctx.lr = 0x899B2F38;
	sub_8991C340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B2F48:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x899b2f68
	goto loc_899B2F68;
loc_899B2F54:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x899b2f68
	goto loc_899B2F68;
loc_899B2F60:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
loc_899B2F68:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B2F78;
	sub_899D4440(ctx, base);
loc_899B2F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B5158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899B5160;
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
	ctx.lr = 0x899B5174;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b5444
	if (ctx.cr6.eq) goto loc_899B5444;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8991b880
	ctx.lr = 0x899B5184;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b5444
	if (ctx.cr6.eq) goto loc_899B5444;
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
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r9,r8,256
	ctx.r9.u64 = ctx.r8.u64 | 256;
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// stwx r22,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r22.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r25,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r25.u32);
	// stwx r25,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r25.u32);
	// bl 0x8991b538
	ctx.lr = 0x899B51F4;
	sub_8991B538(ctx, base);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// lis r8,400
	ctx.r8.s64 = 26214400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r8,r28,r21
	REX_STORE_U32(ctx.r28.u32 + ctx.r21.u32, ctx.r8.u32);
	// bl 0x89915d78
	ctx.lr = 0x899B5208;
	sub_89915D78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899B5210;
	sub_8991C578(ctx, base);
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// li r9,114
	ctx.r9.s64 = 114;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// stbx r9,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// stbx r9,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u8);
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
	// addi r29,r10,-3040
	ctx.r29.s64 = ctx.r10.s64 + -3040;
loc_899B525C:
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
	// rlwinm r20,r7,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r29,6
	ctx.r5.s64 = ctx.r29.s64 + 6;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r10,r31,150
	ctx.r10.s64 = ctx.r31.s64 + 150;
	// lhzx r19,r8,r6
	ctx.r19.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// lhzx r7,r20,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r9.u32);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// extsh r3,r19
	ctx.r3.s64 = ctx.r19.s16;
	// lwzx r9,r20,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r29.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbzx r5,r20,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r5.u32);
	// mulli r30,r3,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r31,12
	ctx.r18.s64 = ctx.r31.s64 + 12;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | ctx.r23.u64;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
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
	// stwx r25,r30,r18
	REX_STORE_U32(ctx.r30.u32 + ctx.r18.u32, ctx.r25.u32);
	// bl 0x8991b538
	ctx.lr = 0x899B52E0;
	sub_8991B538(ctx, base);
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// addi r5,r29,10
	ctx.r5.s64 = ctx.r29.s64 + 10;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// addi r18,r31,164
	ctx.r18.s64 = ctx.r31.s64 + 164;
	// li r17,256
	ctx.r17.s64 = 256;
	// lwzx r19,r28,r21
	ctx.r19.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r21.u32);
	// lhzx r6,r20,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r6.u32);
	// lhzx r5,r20,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r5.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// stwx r19,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r19.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stwx r4,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// sthx r17,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r17.u16);
	// stwx r25,r30,r18
	REX_STORE_U32(ctx.r30.u32 + ctx.r18.u32, ctx.r25.u32);
	// bl 0x8991c578
	ctx.lr = 0x899B5340;
	sub_8991C578(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// addi r9,r31,206
	ctx.r9.s64 = ctx.r31.s64 + 206;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r8,r29,13
	ctx.r8.s64 = ctx.r29.s64 + 13;
	// addi r7,r29,14
	ctx.r7.s64 = ctx.r29.s64 + 14;
	// lbzx r6,r20,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r3.u32);
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// addi r4,r29,18
	ctx.r4.s64 = ctx.r29.s64 + 18;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lbzx r8,r20,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r8.u32);
	// lhzx r7,r20,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r7.u32);
	// addi r19,r31,200
	ctx.r19.s64 = ctx.r31.s64 + 200;
	// stbx r6,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r6,r31,204
	ctx.r6.s64 = ctx.r31.s64 + 204;
	// lbzx r5,r20,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r5.u32);
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// lhzx r4,r20,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r4.u32);
	// addi r18,r31,160
	ctx.r18.s64 = ctx.r31.s64 + 160;
	// lbzx r3,r20,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r3.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r20,r11,r10
	ctx.r20.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r16,r31,68
	ctx.r16.s64 = ctx.r31.s64 + 68;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r15,r31,64
	ctx.r15.s64 = ctx.r31.s64 + 64;
	// stbx r27,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r27.u8);
	// addi r14,r31,66
	ctx.r14.s64 = ctx.r31.s64 + 66;
	// lbzx r27,r28,r17
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r17.u32);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// stbx r8,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r20,20
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 20, ctx.xer);
	// stbx r27,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u8);
	// stwx r24,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r24.u32);
	// ld r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// sthx r7,r30,r18
	REX_STORE_U16(ctx.r30.u32 + ctx.r18.u32, ctx.r7.u16);
	// stbx r5,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r5.u8);
	// sthx r4,r30,r15
	REX_STORE_U16(ctx.r30.u32 + ctx.r15.u32, ctx.r4.u16);
	// stbx r3,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r3.u8);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// blt cr6,0x899b525c
	if (ctx.cr6.lt) goto loc_899B525C;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899340e8
	ctx.lr = 0x899B5414;
	sub_899340E8(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x899340e8
	ctx.lr = 0x899B541C;
	sub_899340E8(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899340e8
	ctx.lr = 0x899B5424;
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
loc_899B5444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B7B50) {
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
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r31,r11,2984
	ctx.r31.s64 = ctx.r11.s64 + 2984;
	// li r9,96
	ctx.r9.s64 = 96;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,208
	ctx.r8.s64 = ctx.r31.s64 + 208;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,160
	ctx.r10.s64 = 160;
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
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89934b48
	ctx.lr = 0x899B7BA4;
	sub_89934B48(ctx, base);
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r11,54
	ctx.r6.s64 = ctx.r11.s64 + 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,112
	ctx.r10.s64 = 112;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x89934b48
	ctx.lr = 0x899B7BE4;
	sub_89934B48(ctx, base);
	// lis r4,-30305
	ctx.r4.s64 = -1986068480;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// addi r6,r4,26672
	ctx.r6.s64 = ctx.r4.s64 + 26672;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899B7C00;
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

DEFINE_REX_FUNC(sub_899B7C18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899B7C20;
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
	ctx.lr = 0x899B7C30;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b7c40
	if (!ctx.cr6.eq) goto loc_899B7C40;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899B7C40:
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
	ctx.lr = 0x899B7C94;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,344
	ctx.r11.s64 = 22544384;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899B7CB4;
	sub_8991C578(ctx, base);
	// addi r9,r31,162
	ctx.r9.s64 = ctx.r31.s64 + 162;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r10,115
	ctx.r10.s64 = 115;
	// sthx r11,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u16);
	// stwx r3,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stbx r10,r28,r4
	REX_STORE_U8(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sthx r11,r28,r8
	REX_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899B7CF4;
	sub_899C3D90(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x899B7CFC;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B81A8) {
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
	ctx.lr = 0x899B81C0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b81d8
	if (!ctx.cr6.eq) goto loc_899B81D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899B81D8:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// bl 0x89915de0
	ctx.lr = 0x899B81E4;
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

DEFINE_REX_FUNC(sub_899B81F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899b8228
	if (ctx.cr6.lt) goto loc_899B8228;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
loc_899B8228:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8991c340
	sub_8991C340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B8230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899B8238;
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
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899b8368
	if (ctx.cr6.lt) goto loc_899B8368;
	// bne cr6,0x899b8468
	if (!ctx.cr6.eq) goto loc_899B8468;
	// bl 0x8991b9f0
	ctx.lr = 0x899B8268;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899b8284
	if (!ctx.cr6.lt) goto loc_899B8284;
loc_899B8274:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B8284:
	// mulli r3,r11,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r3,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// lwzx r4,r30,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r5,r27,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r29,r11,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lhzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r8,r29,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r29,r5,-24576
	ctx.r29.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-24576));
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r8,r5,-20480
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-20480));
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r8,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 8;
	// add r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// stwx r7,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r7.u32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lwzx r7,r3,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stwx r4,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r4.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B8368:
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r11,7104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7104);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stwx r9,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// lhzx r8,r30,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addic. r11,r7,-160
	ctx.xer.ca = ctx.r7.u32 > 159;
	ctx.r11.s64 = ctx.r7.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899b8394
	if (!ctx.cr0.lt) goto loc_899B8394;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899B8394:
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bgt cr6,0x899b8274
	if (ctx.cr6.gt) goto loc_899B8274;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89932b18
	ctx.lr = 0x899B83A4;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89932d30
	ctx.lr = 0x899B83B0;
	sub_89932D30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991b770
	ctx.lr = 0x899B83B8;
	sub_8991B770(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B83C8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b8468
	if (ctx.cr6.eq) goto loc_899B8468;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lwzx r8,r30,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// ori r11,r9,49152
	ctx.r11.u64 = ctx.r9.u64 | 49152;
	// lwzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r7,r6,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwzx r10,r30,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// mullw r4,r7,r9
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8991aa90
	ctx.lr = 0x899B8448;
	sub_8991AA90(ctx, base);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b8468
	if (ctx.cr6.eq) goto loc_899B8468;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x899ce510
	ctx.lr = 0x899B8468;
	sub_899CE510(ctx, base);
loc_899B8468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD9E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BD9E8;
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
	ctx.lr = 0x899BD9F8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bda08
	if (!ctx.cr6.eq) goto loc_899BDA08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899BDA08:
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
	ctx.lr = 0x899BDA5C;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BDA7C;
	sub_8991C578(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r31,162
	ctx.r7.s64 = ctx.r31.s64 + 162;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r31,182
	ctx.r8.s64 = ctx.r31.s64 + 182;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// li r10,256
	ctx.r10.s64 = 256;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// sthx r10,r28,r7
	REX_STORE_U16(ctx.r28.u32 + ctx.r7.u32, ctx.r10.u16);
	// mulli r11,r11,90
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(90));
	// sthx r10,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u16);
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// ori r6,r6,32896
	ctx.r6.u64 = ctx.r6.u64 | 32896;
	// li r7,116
	ctx.r7.s64 = 116;
	// stbx r11,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u8);
	// ori r31,r31,49152
	ctx.r31.u64 = ctx.r31.u64 | 49152;
	// stwx r6,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r6.u32);
	// stbx r7,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r7.u8);
	// lis r6,6
	ctx.r6.s64 = 393216;
	// stwx r31,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899BDB0C;
	sub_899C3D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BE070) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BE078;
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
	ctx.lr = 0x899BE088;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899be098
	if (!ctx.cr6.eq) goto loc_899BE098;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899BE098:
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
	ctx.lr = 0x899BE0EC;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BE10C;
	sub_8991C578(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r31,162
	ctx.r7.s64 = ctx.r31.s64 + 162;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r31,182
	ctx.r8.s64 = ctx.r31.s64 + 182;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// li r10,256
	ctx.r10.s64 = 256;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// sthx r10,r28,r7
	REX_STORE_U16(ctx.r28.u32 + ctx.r7.u32, ctx.r10.u16);
	// mulli r11,r11,90
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(90));
	// sthx r10,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u16);
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// ori r6,r6,32896
	ctx.r6.u64 = ctx.r6.u64 | 32896;
	// li r7,116
	ctx.r7.s64 = 116;
	// stbx r11,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u8);
	// ori r31,r31,49152
	ctx.r31.u64 = ctx.r31.u64 | 49152;
	// stwx r6,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r6.u32);
	// stbx r7,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r7.u8);
	// lis r6,5
	ctx.r6.s64 = 327680;
	// stwx r31,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899BE19C;
	sub_899C3D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BEA48) {
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
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r31,r11,-32708
	ctx.r31.s64 = ctx.r11.s64 + -32708;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89934fb8
	ctx.lr = 0x899BEA90;
	sub_89934FB8(ctx, base);
	// lis r7,-30225
	ctx.r7.s64 = -1980825600;
	// lis r8,-30305
	ctx.r8.s64 = -1986068480;
	// addi r4,r7,28672
	ctx.r4.s64 = ctx.r7.s64 + 28672;
	// addi r6,r8,23408
	ctx.r6.s64 = ctx.r8.s64 + 23408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89935688
	ctx.lr = 0x899BEAB0;
	sub_89935688(ctx, base);
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

DEFINE_REX_FUNC(sub_899BEEF8) {
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
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// addis r9,r8,-192
	ctx.r9.s64 = ctx.r8.s64 + -12582912;
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899bef48
	if (!ctx.cr0.lt) goto loc_899BEF48;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899BEF48:
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x899bef60
	if (!ctx.cr6.gt) goto loc_899BEF60;
loc_899BEF54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x899bf0fc
	goto loc_899BF0FC;
loc_899BEF60:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r8,-21584(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addis r9,r7,-120
	ctx.r9.s64 = ctx.r7.s64 + -7864320;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899bef8c
	if (!ctx.cr0.lt) goto loc_899BEF8C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899BEF8C:
	// lis r8,132
	ctx.r8.s64 = 8650752;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x899bef54
	if (ctx.cr6.gt) goto loc_899BEF54;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r6,r9,1088
	ctx.r6.s64 = ctx.r9.s64 + 1088;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// lbzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x899bf0fc
	if (ctx.cr6.gt) goto loc_899BF0FC;
	// lbz r11,182(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 182);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r10,182(r3)
	REX_STORE_U8(ctx.r3.u32 + 182, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899bf0fc
	if (!ctx.cr6.eq) goto loc_899BF0FC;
	// lhz r11,158(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 158);
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwz r4,168(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r6,9016
	ctx.r31.s64 = ctx.r6.s64 + 9016;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// ori r10,r10,20077
	ctx.r10.u64 = ctx.r10.u64 | 20077;
	// addi r30,r9,128
	ctx.r30.s64 = ctx.r9.s64 + 128;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lhzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r30,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// rotlwi r30,r10,16
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// rotlwi r4,r6,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// ori r8,r8,49280
	ctx.r8.u64 = ctx.r8.u64 | 49280;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r6,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 8;
	// srawi r30,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 16;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// rlwinm r9,r10,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// bl 0x899d79f8
	ctx.lr = 0x899BF0FC;
	sub_899D79F8(ctx, base);
loc_899BF0FC:
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

DEFINE_REX_FUNC(sub_899C0FB8) {
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
	ctx.lr = 0x899C0FD0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c0fec
	if (!ctx.cr6.eq) goto loc_899C0FEC;
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
loc_899C0FEC:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,3344
	ctx.r3.s64 = ctx.r11.s64 + 3344;
	// bl 0x89915de0
	ctx.lr = 0x899C0FF8;
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

DEFINE_REX_FUNC(sub_899C1008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C1010;
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
	// blt cr6,0x899c1068
	if (ctx.cr6.lt) goto loc_899C1068;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x899c10b0
	if (!ctx.cr6.lt) goto loc_899C10B0;
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
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C1068:
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
	// li r4,5
	ctx.r4.s64 = 5;
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d4440
	ctx.lr = 0x899C1094;
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
	ctx.lr = 0x899C10A8;
	sub_8992E330(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899C10B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C1758;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,12272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12272);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x8991b880
	ctx.lr = 0x899C1774;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c1784
	if (!ctx.cr6.eq) goto loc_899C1784;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C1784:
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
	// addi r28,r8,2160
	ctx.r28.s64 = ctx.r8.s64 + 2160;
	// lhz r29,-4592(r9)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + -4592);
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r30,r6,12800
	ctx.r30.s64 = ctx.r6.s64 + 12800;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// lwzx r10,r25,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mulli r31,r4,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lhz r5,26864(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 26864);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lis r6,-16208
	ctx.r6.s64 = -1062207488;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r4,r6,260
	ctx.r4.u64 = ctx.r6.u64 | 260;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// stwx r27,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C17F8;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C1800;
	sub_8991C578(ctx, base);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// rlwinm r3,r26,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// lhzx r4,r25,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r9.u32);
	// addi r29,r30,168
	ctx.r29.s64 = ctx.r30.s64 + 168;
	// lwzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// addi r28,r30,204
	ctx.r28.s64 = ctx.r30.s64 + 204;
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// li r9,116
	ctx.r9.s64 = 116;
	// stwx r27,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r27.u32);
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// li r11,512
	ctx.r11.s64 = 512;
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// lis r27,2
	ctx.r27.s64 = 131072;
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r27,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u32);
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r10,r4,8,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x100;
	// sthx r10,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2258) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// beq cr6,0x899c22dc
	if (ctx.cr6.eq) goto loc_899C22DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x899c22d8
	if (ctx.cr6.eq) goto loc_899C22D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x899c22d4
	if (ctx.cr6.eq) goto loc_899C22D4;
	// b 0x899d4440
	sub_899D4440(ctx, base);
	return;
loc_899C22D4:
	// b 0x899d4e08
	sub_899D4E08(ctx, base);
	return;
loc_899C22D8:
	// b 0x899d4fb0
	sub_899D4FB0(ctx, base);
	return;
loc_899C22DC:
	// b 0x899d4c10
	sub_899D4C10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899C2768;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r27,26864(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89934058
	ctx.lr = 0x899C277C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c2a08
	if (ctx.cr6.eq) goto loc_899C2A08;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8991b880
	ctx.lr = 0x899C278C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c2a08
	if (ctx.cr6.eq) goto loc_899C2A08;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lhz r21,9536(r9)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 9536);
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x899c27dc
	if (ctx.cr6.lt) goto loc_899C27DC;
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
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r21,r4,17,16,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// sth r21,9536(r9)
	REX_STORE_U16(ctx.r9.u32 + 9536, ctx.r21.u16);
loc_899C27DC:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// addi r31,r9,12800
	ctx.r31.s64 = ctx.r9.s64 + 12800;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r4,r31,162
	ctx.r4.s64 = ctx.r31.s64 + 162;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r28,-17120(r8)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r8.u32 + -17120);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mulli r30,r5,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// sthx r28,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u16);
	// sthx r28,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r28.u16);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// ori r11,r7,20
	ctx.r11.u64 = ctx.r7.u64 | 20;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// clrlwi r9,r5,27
	ctx.r9.u64 = ctx.r5.u32 & 0x1F;
	// clrlwi r20,r27,16
	ctx.r20.u64 = ctx.r27.u32 & 0xFFFF;
	// stwx r29,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r29.u32);
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r19,r10,-4592
	ctx.r19.s64 = ctx.r10.s64 + -4592;
	// stwx r20,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r20.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x8991b538
	ctx.lr = 0x899C2858;
	sub_8991B538(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C2860;
	sub_8991C578(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lbz r4,4946(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 4946);
	// bl 0x8991c678
	ctx.lr = 0x899C2874;
	sub_8991C678(ctx, base);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,12024(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 12024);
	// bl 0x8991cac0
	ctx.lr = 0x899C2884;
	sub_8991CAC0(ctx, base);
	// lhz r27,2(r19)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r19.u32 + 2);
	// addi r6,r31,172
	ctx.r6.s64 = ctx.r31.s64 + 172;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// mulli r10,r3,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// stwx r29,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r29,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r29.u32);
	// stwx r29,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r29.u32);
	// sthx r18,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r18.u16);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r26,r31,48
	ctx.r26.s64 = ctx.r31.s64 + 48;
	// stwx r20,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r20.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stwx r3,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// sthx r28,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u16);
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// stwx r29,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stwx r4,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,206
	ctx.r7.s64 = ctx.r31.s64 + 206;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r4,-10
	ctx.r4.s64 = -655360;
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// lwzx r6,r30,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// stwx r6,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwzx r3,r30,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lis r11,-5
	ctx.r11.s64 = -327680;
	// stwx r4,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// stbx r22,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r22.u8);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r23,r31,204
	ctx.r23.s64 = ctx.r31.s64 + 204;
	// lbzx r11,r30,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r5,r30,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// stbx r5,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x8991b538
	ctx.lr = 0x899C294C;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C2954;
	sub_8991C578(ctx, base);
	// lhz r27,4(r19)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r19.u32 + 4);
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// rlwinm r3,r21,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3FFFC;
	// addi r11,r4,2304
	ctx.r11.s64 = ctx.r4.s64 + 2304;
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// mulli r21,r10,208
	ctx.r21.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r3,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// sthx r18,r21,r9
	REX_STORE_U16(ctx.r21.u32 + ctx.r9.u32, ctx.r18.u16);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// srawi r10,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 6;
	// stwx r20,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r20.u32);
	// lis r9,-16336
	ctx.r9.s64 = -1070596096;
	// stwx r8,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r8.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r9,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r9.u32);
	// sthx r10,r21,r4
	REX_STORE_U16(ctx.r21.u32 + ctx.r4.u32, ctx.r10.u16);
	// stwx r29,r21,r11
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r29.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C29B0;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C29B8;
	sub_8991C578(ctx, base);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwzx r31,r30,r26
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// stwx r31,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// stwx r8,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r8.u32);
	// stwx r11,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r29,r21,r5
	REX_STORE_U32(ctx.r21.u32 + ctx.r5.u32, ctx.r29.u32);
	// stbx r22,r21,r4
	REX_STORE_U8(ctx.r21.u32 + ctx.r4.u32, ctx.r22.u8);
	// lbzx r11,r30,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r21,r10
	REX_STORE_U8(ctx.r21.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r5,r30,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// stbx r5,r21,r9
	REX_STORE_U8(ctx.r21.u32 + ctx.r9.u32, ctx.r5.u8);
loc_899C2A08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C3D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// mulli r27,r9,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// sthx r3,r27,r8
	REX_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r3.u16);
	// stwx r10,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mulli r26,r7,208
	ctx.r26.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwzx r9,r26,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r5,r27,r11
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r5.u32);
	// stwx r29,r27,r10
	REX_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r9,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r9.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C3DF8;
	sub_8991B538(ctx, base);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stwx r30,r27,r8
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r26,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r11,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r10,r26,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// stwx r10,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C3E2C;
	sub_8991C578(ctx, base);
	// addi r9,r31,207
	ctx.r9.s64 = ctx.r31.s64 + 207;
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// addi r7,r31,206
	ctx.r7.s64 = ctx.r31.s64 + 206;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lbzx r4,r26,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r4,r27,r8
	REX_STORE_U8(ctx.r27.u32 + ctx.r8.u32, ctx.r4.u8);
	// lbzx r11,r26,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r6.u32);
	// stbx r29,r26,r7
	REX_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r29.u8);
	// stbx r11,r27,r5
	REX_STORE_U8(ctx.r27.u32 + ctx.r5.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3E60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C3E68;
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
	ctx.lr = 0x899C3E78;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c3e88
	if (!ctx.cr6.eq) goto loc_899C3E88;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C3E88:
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
	ctx.lr = 0x899C3EDC;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C3EFC;
	sub_8991C578(ctx, base);
	// addi r9,r31,162
	ctx.r9.s64 = ctx.r31.s64 + 162;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// li r10,116
	ctx.r10.s64 = 116;
	// sthx r11,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u16);
	// stwx r3,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// stbx r10,r28,r4
	REX_STORE_U8(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sthx r11,r28,r8
	REX_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899C3F3C;
	sub_899C3D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C4DA8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C4DB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C4DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r9,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// lwzx r7,r31,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899c4e6c
	if (ctx.cr6.lt) goto loc_899C4E6C;
	// addi r8,r10,158
	ctx.r8.s64 = ctx.r10.s64 + 158;
	// addi r6,r10,44
	ctx.r6.s64 = ctx.r10.s64 + 44;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r3,r4,3
	ctx.r3.s64 = ctx.r4.s64 + 3;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r3,r4,128
	ctx.r3.s64 = ctx.r4.s64 + 128;
	// sthx r4,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r8,r3,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
loc_899C4E44:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r3,3,22,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3F8;
	// lhzx r4,r6,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r6,r3,r8
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// srawi r6,r6,24
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 24;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899c4e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C4E44;
	// b 0x899c4e98
	goto loc_899C4E98;
loc_899C4E6C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r6,r10,148
	ctx.r6.s64 = ctx.r10.s64 + 148;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,26900(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 26900);
	// lhzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x899c4e94
	if (!ctx.cr6.lt) goto loc_899C4E94;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r6,r8,9448
	ctx.r6.s64 = ctx.r8.s64 + 9448;
	// stbx r7,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
loc_899C4E94:
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
loc_899C4E98:
	// addi r30,r10,184
	ctx.r30.s64 = ctx.r10.s64 + 184;
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c4f8c
	if (ctx.cr6.eq) goto loc_899C4F8C;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// addi r4,r10,162
	ctx.r4.s64 = ctx.r10.s64 + 162;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r7,r10,52
	ctx.r7.s64 = ctx.r10.s64 + 52;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lhzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// rlwinm r4,r4,6,11,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x1F0000;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// rlwinm r4,r3,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r10,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// lhzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r6,r10,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r3,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0x1FFFF;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addis r3,r8,64
	ctx.r3.s64 = ctx.r8.s64 + 4194304;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// bl 0x899d8780
	ctx.lr = 0x899C4F78;
	sub_899D8780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C4F80;
	sub_8991C578(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// stbx r5,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u8);
loc_899C4F8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899C6278;
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
	// mulli r25,r10,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r24,r25,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r31,207
	ctx.r6.s64 = ctx.r31.s64 + 207;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r25,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r29,r25,r8
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// lwzx r28,r25,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lbzx r26,r25,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r6.u32);
	// lbzx r27,r25,r5
	ctx.r27.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// bgt cr6,0x899c63f4
	if (ctx.cr6.gt) goto loc_899C63F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c6348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C6348;
	// bdzf 4*cr6+eq,0x899c63b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C63B0;
	// bne cr6,0x899c63b0
	if (!ctx.cr6.eq) goto loc_899C63B0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r23,r10,2560
	ctx.r23.s64 = ctx.r10.s64 + 2560;
loc_899C62E4:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// subf r5,r9,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r9.u64;
	// bl 0x899d4440
	ctx.lr = 0x899C6310;
	sub_899D4440(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// blt cr6,0x899c62e4
	if (ctx.cr6.lt) goto loc_899C62E4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addis r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -2097152;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992e5d8
	ctx.lr = 0x899C6338;
	sub_8992E5D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C6348:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899C6364;
	sub_899D4C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C636C;
	sub_8991B9F0(ctx, base);
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x899c63f4
	if (ctx.cr6.lt) goto loc_899C63F4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992e330
	ctx.lr = 0x899C638C;
	sub_8992E330(ctx, base);
	// mulli r11,r30,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(208));
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
	// stwx r11,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C63B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C63B8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899c63d8
	if (ctx.cr6.lt) goto loc_899C63D8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992e330
	ctx.lr = 0x899C63D8;
	sub_8992E330(ctx, base);
loc_899C63D8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899C63F4;
	sub_899D4C10(ctx, base);
loc_899C63F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C7538) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C7540;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// addi r10,r6,-2480
	ctx.r10.s64 = ctx.r6.s64 + -2480;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// lbzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// subf r7,r3,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r3.u64;
	// lwzx r6,r8,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// lwzx r4,r8,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// srawi r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// subf r4,r9,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lbz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// mulli r4,r7,112
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(112));
	// stwx r7,r8,r30
	REX_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u32);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// mullw r4,r31,r7
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// addi r31,r11,104
	ctx.r31.s64 = ctx.r11.s64 + 104;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// addi r29,r11,71
	ctx.r29.s64 = ctx.r11.s64 + 71;
	// addi r28,r11,70
	ctx.r28.s64 = ctx.r11.s64 + 70;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,69
	ctx.r11.s64 = ctx.r11.s64 + 69;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addis r7,r3,-16
	ctx.r7.s64 = ctx.r3.s64 + -1048576;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stbx r10,r8,r29
	REX_STORE_U8(ctx.r8.u32 + ctx.r29.u32, ctx.r10.u8);
	// stwx r7,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u32);
	// stwx r4,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r4.u32);
	// stbx r10,r8,r28
	REX_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r10.u8);
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C8058;
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
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,25128
	ctx.r26.s64 = ctx.r11.s64 + 25128;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c8204
	if (ctx.cr6.lt) goto loc_899C8204;
	// beq cr6,0x899c8118
	if (ctx.cr6.eq) goto loc_899C8118;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899c832c
	if (!ctx.cr6.lt) goto loc_899C832C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,352
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 352, ctx.xer);
	// ble cr6,0x899c80b8
	if (!ctx.cr6.gt) goto loc_899C80B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C80B8:
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
	// b 0x899c832c
	goto loc_899C832C;
loc_899C8118:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r6,256
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 256, ctx.xer);
	// lhzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// bne cr6,0x899c81a0
	if (!ctx.cr6.eq) goto loc_899C81A0;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C818C;
	sub_8991B610(ctx, base);
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// b 0x899c832c
	goto loc_899C832C;
loc_899C81A0:
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r5,r11,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// b 0x899c832c
	goto loc_899C832C;
loc_899C8204:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C820C;
	sub_89932B18(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r10,r26,24
	ctx.r10.s64 = ctx.r26.s64 + 24;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addis r6,r8,160
	ctx.r6.s64 = ctx.r8.s64 + 10485760;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x899c82d0
	if (!ctx.cr6.lt) goto loc_899C82D0;
	// lis r10,288
	ctx.r10.s64 = 18874368;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899c82d0
	if (!ctx.cr6.lt) goto loc_899C82D0;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r28,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C825C;
	sub_8991B610(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// ori r3,r5,32769
	ctx.r3.u64 = ctx.r5.u64 | 32769;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,168
	ctx.r6.s64 = ctx.r30.s64 + 168;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// lwzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// clrlwi r7,r5,17
	ctx.r7.u64 = ctx.r5.u32 & 0x7FFF;
	// sthx r28,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u16);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r3,r7,r3
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// rlwinm r11,r3,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0xFFFF;
	// addis r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -65536;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x899c832c
	goto loc_899C832C;
loc_899C82D0:
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
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
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
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
loc_899C832C:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// li r5,15
	ctx.r5.s64 = 15;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x8991db50
	ctx.lr = 0x899C836C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c83c0
	if (ctx.cr6.eq) goto loc_899C83C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C837C;
	sub_89932B18(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r30,r31,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r26,28
	ctx.r10.s64 = ctx.r26.s64 + 28;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r31,r31,r28
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r26,24
	ctx.r8.s64 = ctx.r26.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x89932c20
	ctx.lr = 0x899C83A8;
	sub_89932C20(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// bl 0x899cc3d0
	ctx.lr = 0x899C83C0;
	sub_899CC3D0(ctx, base);
loc_899C83C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB1A0) {
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
	ctx.lr = 0x899CB1D4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899cb1f0
	if (!ctx.cr6.eq) goto loc_899CB1F0;
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
loc_899CB1F0:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// bl 0x89915de0
	ctx.lr = 0x899CB1FC;
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

DEFINE_REX_FUNC(sub_899CB3E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x899cb4b0
	if (ctx.cr6.gt) goto loc_899CB4B0;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19452
	ctx.r12.s64 = ctx.r12.s64 + -19452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899CB4B4;
	case 1:
		goto loc_899CB4B4;
	case 2:
		goto loc_899CB4B4;
	case 3:
		goto loc_899CB4B4;
	case 4:
		goto loc_899CB4B4;
	case 5:
		goto loc_899CB4B4;
	case 6:
		goto loc_899CB4B4;
	case 7:
		goto loc_899CB4B4;
	case 8:
		goto loc_899CB588;
	case 9:
		goto loc_899CB588;
	case 10:
		goto loc_899CB588;
	case 11:
		goto loc_899CB588;
	case 12:
		goto loc_899CB588;
	case 13:
		goto loc_899CB588;
	case 14:
		goto loc_899CB588;
	case 15:
		goto loc_899CB588;
	case 16:
		goto loc_899CB454;
	case 17:
		goto loc_899CB454;
	case 18:
		goto loc_899CB454;
	case 19:
		goto loc_899CB454;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899CB454:
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
	// bne cr6,0x899cb4b0
	if (!ctx.cr6.eq) goto loc_899CB4B0;
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
loc_899CB4B0:
	// blr 
	return;
loc_899CB4B4:
	// lbz r11,138(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
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
	// bne cr6,0x899cb540
	if (!ctx.cr6.eq) goto loc_899CB540;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cb500
	if (!ctx.cr0.lt) goto loc_899CB500;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CB500:
	// lis r9,168
	ctx.r9.s64 = 11010048;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899cb534
	if (ctx.cr6.gt) goto loc_899CB534;
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
	// bge 0x899cb528
	if (!ctx.cr0.lt) goto loc_899CB528;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CB528:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899cb540
	if (!ctx.cr6.gt) goto loc_899CB540;
loc_899CB534:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899CB540:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// blr 
	return;
loc_899CB588:
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
	if (ctx.cr6.gt) goto loc_899CB534;
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
	if (ctx.cr6.gt) goto loc_899CB534;
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
	if (ctx.cr6.eq) goto loc_899CB4B0;
	// lis r4,64
	ctx.r4.s64 = 4194304;
	// ori r4,r4,49216
	ctx.r4.u64 = ctx.r4.u64 | 49216;
	// b 0x899cd148
	sub_899CD148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CC840) {
	REX_FUNC_PROLOGUE();
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,67
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 67, ctx.xer);
	// bgt cr6,0x899ccadc
	if (ctx.cr6.gt) goto loc_899CCADC;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14236
	ctx.r12.s64 = ctx.r12.s64 + -14236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_899CC974;
	case 1:
		goto loc_899CC974;
	case 2:
		goto loc_899CC974;
	case 3:
		goto loc_899CC974;
	case 4:
		goto loc_899CCADC;
	case 5:
		goto loc_899CCADC;
	case 6:
		goto loc_899CCADC;
	case 7:
		goto loc_899CCADC;
	case 8:
		goto loc_899CC974;
	case 9:
		goto loc_899CC974;
	case 10:
		goto loc_899CC974;
	case 11:
		goto loc_899CC974;
	case 12:
		goto loc_899CCADC;
	case 13:
		goto loc_899CCADC;
	case 14:
		goto loc_899CCADC;
	case 15:
		goto loc_899CCADC;
	case 16:
		goto loc_899CC974;
	case 17:
		goto loc_899CC974;
	case 18:
		goto loc_899CC974;
	case 19:
		goto loc_899CC974;
	case 20:
		goto loc_899CCADC;
	case 21:
		goto loc_899CCADC;
	case 22:
		goto loc_899CCADC;
	case 23:
		goto loc_899CCADC;
	case 24:
		goto loc_899CC974;
	case 25:
		goto loc_899CC974;
	case 26:
		goto loc_899CC974;
	case 27:
		goto loc_899CC974;
	case 28:
		goto loc_899CCADC;
	case 29:
		goto loc_899CCADC;
	case 30:
		goto loc_899CCADC;
	case 31:
		goto loc_899CCADC;
	case 32:
		goto loc_899CC974;
	case 33:
		goto loc_899CC974;
	case 34:
		goto loc_899CC974;
	case 35:
		goto loc_899CC974;
	case 36:
		goto loc_899CCADC;
	case 37:
		goto loc_899CCADC;
	case 38:
		goto loc_899CCADC;
	case 39:
		goto loc_899CCADC;
	case 40:
		goto loc_899CC974;
	case 41:
		goto loc_899CC974;
	case 42:
		goto loc_899CC974;
	case 43:
		goto loc_899CC974;
	case 44:
		goto loc_899CCADC;
	case 45:
		goto loc_899CCADC;
	case 46:
		goto loc_899CCADC;
	case 47:
		goto loc_899CCADC;
	case 48:
		goto loc_899CC974;
	case 49:
		goto loc_899CC974;
	case 50:
		goto loc_899CC974;
	case 51:
		goto loc_899CC974;
	case 52:
		goto loc_899CCADC;
	case 53:
		goto loc_899CCADC;
	case 54:
		goto loc_899CCADC;
	case 55:
		goto loc_899CCADC;
	case 56:
		goto loc_899CC974;
	case 57:
		goto loc_899CC974;
	case 58:
		goto loc_899CC974;
	case 59:
		goto loc_899CC974;
	case 60:
		goto loc_899CCADC;
	case 61:
		goto loc_899CCADC;
	case 62:
		goto loc_899CCADC;
	case 63:
		goto loc_899CCADC;
	case 64:
		goto loc_899CCA60;
	case 65:
		goto loc_899CCA60;
	case 66:
		goto loc_899CCA60;
	case 67:
		goto loc_899CCA60;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899CC974:
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
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// stb r8,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r8.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899cca10
	if (ctx.cr6.lt) goto loc_899CCA10;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// blr 
	return;
loc_899CCA10:
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cca20
	if (!ctx.cr0.lt) goto loc_899CCA20;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CCA20:
	// lis r10,224
	ctx.r10.s64 = 14680064;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cca54
	if (ctx.cr6.gt) goto loc_899CCA54;
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
	// bge 0x899cca48
	if (!ctx.cr0.lt) goto loc_899CCA48;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CCA48:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_899CCA54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899CCA60:
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
loc_899CCADC:
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ccb04
	if (ctx.cr6.eq) goto loc_899CCB04;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ccb04
	if (ctx.cr6.eq) goto loc_899CCB04;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899ccb08
	if (ctx.cr6.eq) goto loc_899CCB08;
loc_899CCB04:
	// b 0x899cc7a0
	sub_899CC7A0(ctx, base);
	return;
loc_899CCB08:
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 60);
	// lhz r6,64(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r5,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r5.u16);
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r9,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r9.u16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
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
}

DEFINE_REX_FUNC(sub_899CF098) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899CF0A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899cf0c0
	if (ctx.cr6.lt) goto loc_899CF0C0;
	// bl 0x899cec08
	ctx.lr = 0x899CF0B8;
	sub_899CEC08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899CF0C0:
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lbz r10,138(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 138);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r28,160
	ctx.r28.s64 = 10485760;
	// lis r26,120
	ctx.r26.s64 = 7864320;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r27,-21584(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// beq cr6,0x899cf270
	if (ctx.cr6.eq) goto loc_899CF270;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf. r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf0f0
	if (!ctx.cr0.lt) goto loc_899CF0F0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF0F0:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf26c
	if (ctx.cr6.gt) goto loc_899CF26C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r27,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r27.u64;
	// subf. r11,r26,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf110
	if (!ctx.cr0.lt) goto loc_899CF110;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF110:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf26c
	if (ctx.cr6.gt) goto loc_899CF26C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89932ba0
	ctx.lr = 0x899CF124;
	sub_89932BA0(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899cf164
	if (ctx.cr6.eq) goto loc_899CF164;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r29,24
	ctx.r8.s64 = ctx.r29.s64 + 24;
	// mulli r30,r11,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r11,r7,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf15c
	if (!ctx.cr0.lt) goto loc_899CF15C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF15C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899cf198
	if (ctx.cr6.lt) goto loc_899CF198;
loc_899CF164:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899cf270
	if (ctx.cr6.eq) goto loc_899CF270;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r29,28
	ctx.r8.s64 = ctx.r29.s64 + 28;
	// mulli r30,r11,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r11,r7,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf190
	if (!ctx.cr0.lt) goto loc_899CF190;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF190:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899cf270
	if (!ctx.cr6.lt) goto loc_899CF270;
loc_899CF198:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89919d28
	ctx.lr = 0x899CF1A0;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899cf270
	if (ctx.cr6.eq) goto loc_899CF270;
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r5,r30,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x89932c20
	ctx.lr = 0x899CF1C8;
	sub_89932C20(ctx, base);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// lhz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// rlwinm r9,r9,0,23,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x180;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// subf. r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899cf1e8
	if (!ctx.cr0.lt) goto loc_899CF1E8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CF1E8:
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// ble cr6,0x899cf1fc
	if (!ctx.cr6.gt) goto loc_899CF1FC;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// blt cr6,0x899cf270
	if (ctx.cr6.lt) goto loc_899CF270;
loc_899CF1FC:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x899cf270
	if (ctx.cr6.eq) goto loc_899CF270;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// sth r9,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r9.u16);
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lbz r9,138(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 138);
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// rlwinm r3,r11,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r11,r9,255
	ctx.r11.s64 = ctx.r9.s64 + 255;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lhzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r4,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// stb r11,138(r31)
	REX_STORE_U8(ctx.r31.u32 + 138, ctx.r11.u8);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// lwz r3,7904(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 7904);
	// bl 0x899d6be8
	ctx.lr = 0x899CF268;
	sub_899D6BE8(ctx, base);
	// b 0x899cf270
	goto loc_899CF270;
loc_899CF26C:
	// stb r25,138(r31)
	REX_STORE_U8(ctx.r31.u32 + 138, ctx.r25.u8);
loc_899CF270:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x899cf28c
	if (!ctx.cr0.lt) goto loc_899CF28C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CF28C:
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899cf2a4
	if (!ctx.cr6.gt) goto loc_899CF2A4;
loc_899CF298:
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899CF2A4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r27,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r27.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// subf. r11,r26,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf2c4
	if (!ctx.cr0.lt) goto loc_899CF2C4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF2C4:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf298
	if (ctx.cr6.gt) goto loc_899CF298;
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
	// rlwimi r8,r11,0,24,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF03);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r11,r6,26
	ctx.r11.u64 = ctx.r6.u32 & 0x3F;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D16E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D16F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r9,-30221
	ctx.r9.s64 = -1980563456;
	// addi r10,r11,3536
	ctx.r10.s64 = ctx.r11.s64 + 3536;
	// addi r29,r9,24120
	ctx.r29.s64 = ctx.r9.s64 + 24120;
	// lbz r6,3536(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3536);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899d1764
	if (ctx.cr6.eq) goto loc_899D1764;
	// addi r30,r29,544
	ctx.r30.s64 = ctx.r29.s64 + 544;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// li r28,8
	ctx.r28.s64 = 8;
loc_899D1720:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbzu r10,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899D1750;
	sub_89934FB8(ctx, base);
	// lbz r6,1(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899d1720
	if (!ctx.cr6.eq) goto loc_899D1720;
loc_899D1764:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r30,r29,544
	ctx.r30.s64 = ctx.r29.s64 + 544;
	// addi r28,r11,11096
	ctx.r28.s64 = ctx.r11.s64 + 11096;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_899D1774:
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
	// bl 0x89935688
	ctx.lr = 0x899D178C;
	sub_89935688(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r28,100
	ctx.r11.s64 = ctx.r28.s64 + 100;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899d1774
	if (ctx.cr6.lt) goto loc_899D1774;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D23A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x899D23B0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,124(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899d26b0
	if (ctx.cr6.lt) goto loc_899D26B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899d23ec
	if (ctx.cr6.eq) goto loc_899D23EC;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d23ec
	if (ctx.cr6.eq) goto loc_899D23EC;
	// lhz r10,134(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899d23fc
	if (ctx.cr6.eq) goto loc_899D23FC;
loc_899D23EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899d2350
	ctx.lr = 0x899D23F4;
	sub_899D2350(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899D23FC:
	// lhz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 116);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// sth r10,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
	// bgt cr6,0x899d2580
	if (ctx.cr6.gt) goto loc_899D2580;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899d2434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2434;
	// bdzf 4*cr6+eq,0x899d2434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2434;
	// bdzf 4*cr6+eq,0x899d2434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2434;
	// bdzf 4*cr6+eq,0x899d2498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2498;
	// bdzf 4*cr6+eq,0x899d2498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2498;
	// bdzf 4*cr6+eq,0x899d2498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2498;
	// bne cr6,0x899d2498
	if (!ctx.cr6.eq) goto loc_899D2498;
loc_899D2434:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x899d2460
	if (!ctx.cr6.lt) goto loc_899D2460;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,512
	ctx.r10.s64 = 512;
	// rlwinm r9,r11,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// sth r10,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899D2460:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r8,84(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r6,88(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// b 0x899d2580
	goto loc_899D2580;
loc_899D2498:
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,120(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbz r8,139(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 139);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,88(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r5,120(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,120(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x899d2578
	if (!ctx.cr6.eq) goto loc_899D2578;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d2578
	if (ctx.cr6.eq) goto loc_899D2578;
	// rlwinm r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d2578
	if (ctx.cr6.eq) goto loc_899D2578;
	// lhz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lis r8,-3
	ctx.r8.s64 = -196608;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// lhzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r29,r3,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// li r4,2
	ctx.r4.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r3,42
	ctx.r3.s64 = 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r29,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r6,r10,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 16;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x899d3888
	ctx.lr = 0x899D2578;
	sub_899D3888(ctx, base);
loc_899D2578:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// stb r11,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r11.u8);
loc_899D2580:
	// lis r12,-16593
	ctx.r12.s64 = -1087438848;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addis r11,r9,-160
	ctx.r11.s64 = ctx.r9.s64 + -10485760;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d25a8
	if (!ctx.cr0.lt) goto loc_899D25A8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D25A8:
	// lis r9,192
	ctx.r9.s64 = 12582912;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d294c
	if (ctx.cr6.gt) goto loc_899D294C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d25d4
	if (!ctx.cr0.lt) goto loc_899D25D4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D25D4:
	// lis r9,152
	ctx.r9.s64 = 9961472;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d294c
	if (ctx.cr6.gt) goto loc_899D294C;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r12,16592
	ctx.r12.s64 = 1087373312;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// ori r12,r12,8192
	ctx.r12.u64 = ctx.r12.u64 | 8192;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// and r5,r9,r12
	ctx.r5.u64 = ctx.r9.u64 & ctx.r12.u64;
	// rlwinm r9,r7,0,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// addi r10,r11,12345
	ctx.r10.s64 = ctx.r11.s64 + 12345;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// stw r10,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,17,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// or r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// lwz r8,68(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899D26B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d2944
	if (ctx.cr6.eq) goto loc_899D2944;
	// lhz r11,154(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 154);
	// lhz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899d2944
	if (!ctx.cr6.eq) goto loc_899D2944;
	// li r3,61
	ctx.r3.s64 = 61;
	// bl 0x89936360
	ctx.lr = 0x899D26D4;
	sub_89936360(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// rlwinm r11,r10,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF00000;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899d2714
	if (ctx.cr6.eq) goto loc_899D2714;
	// lis r9,208
	ctx.r9.s64 = 13631488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899d274c
	if (!ctx.cr6.eq) goto loc_899D274C;
	// lbz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 180);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d274c
	if (!ctx.cr6.eq) goto loc_899D274C;
	// rlwinm r11,r10,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x899d274c
	goto loc_899D274C;
loc_899D2714:
	// lbz r11,70(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 70);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x899d2738
	if (!ctx.cr6.lt) goto loc_899D2738;
	// lbz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,180(r30)
	REX_STORE_U8(ctx.r30.u32 + 180, ctx.r9.u8);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x899d274c
	goto loc_899D274C;
loc_899D2738:
	// lbz r10,71(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 71);
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stb r11,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stb r10,71(r31)
	REX_STORE_U8(ctx.r31.u32 + 71, ctx.r10.u8);
loc_899D274C:
	// lhz r8,118(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 118);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lhz r10,158(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 158);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r9,9016
	ctx.r11.s64 = ctx.r9.s64 + 9016;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r9,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// lwz r27,92(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// sth r6,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r6.u16);
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// lwz r10,-9212(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// ori r6,r5,20077
	ctx.r6.u64 = ctx.r5.u64 | 20077;
	// lhz r5,116(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// clrlwi r17,r26,30
	ctx.r17.u64 = ctx.r26.u32 & 0x3;
	// lwz r29,96(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r3,r10,r6
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r24,28(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r22,0(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhz r23,158(r30)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r30.u32 + 158);
	// rlwinm r19,r10,0,24,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r20,r10,1,22,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lwz r28,48(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r7,r23,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x3FE;
	// extsh r5,r23
	ctx.r5.s64 = ctx.r23.s16;
	// addi r23,r10,128
	ctx.r23.s64 = ctx.r10.s64 + 128;
	// addi r6,r5,128
	ctx.r6.s64 = ctx.r5.s64 + 128;
	// rlwinm r23,r23,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x3FE;
	// lhzx r21,r7,r11
	ctx.r21.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// lhzx r10,r23,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r18,r6,r11
	ctx.r18.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r23,r21
	ctx.r23.s64 = ctx.r21.s16;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mullw r26,r23,r8
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// extsh r23,r18
	ctx.r23.s64 = ctx.r18.s16;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r21,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r21.s64 = ctx.r26.s32 >> 8;
	// mullw r26,r23,r9
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// subf r10,r21,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r21.u64;
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r26,r17,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lis r27,3
	ctx.r27.s64 = 196608;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhzx r10,r20,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r17,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r30,r8
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r6,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r19.s32 >> 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r9,r27,29696
	ctx.r9.u64 = ctx.r27.u64 | 29696;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r3,12345
	ctx.r10.s64 = ctx.r3.s64 + 12345;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// stw r10,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r4,128
	ctx.r10.s64 = ctx.r4.s64 + 128;
	// lwzx r9,r26,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// rlwinm r5,r22,0,8,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF00000;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r7,r10,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r5,0,11,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lhzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r30
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// beq cr6,0x899d294c
	if (ctx.cr6.eq) goto loc_899D294C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x899d294c
	if (!ctx.cr6.lt) goto loc_899D294C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899D2944:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_899D294C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6CE8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d6df0
	if (ctx.cr6.eq) goto loc_899D6DF0;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899d6d18
	if (ctx.cr6.eq) goto loc_899D6D18;
	// lhz r9,134(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899d6d20
	if (ctx.cr6.eq) goto loc_899D6D20;
loc_899D6D18:
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_899D6D20:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27972
	ctx.r12.s64 = ctx.r12.s64 + 27972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_899D6D74;
	case 1:
		goto loc_899D6D74;
	case 2:
		goto loc_899D6D74;
	case 3:
		goto loc_899D6D74;
	case 4:
		goto loc_899D6D9C;
	case 5:
		goto loc_899D6D9C;
	case 6:
		goto loc_899D6D9C;
	case 7:
		goto loc_899D6D9C;
	case 8:
		goto loc_899D6DD0;
	case 9:
		goto loc_899D6DD0;
	case 10:
		goto loc_899D6DD0;
	case 11:
		goto loc_899D6DD0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899D6D74:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_899D6D88:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_899D6D9C:
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899d6d88
	if (!ctx.cr6.eq) goto loc_899D6D88;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899d6d88
	if (!ctx.cr6.eq) goto loc_899D6D88;
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
loc_899D6DD0:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_899D6DE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D6DF0:
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x899d6de4
	if (ctx.cr6.lt) goto loc_899D6DE4;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// stb r11,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D7E68) {
	REX_FUNC_PROLOGUE();
	// lbz r10,46(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r5,r10,244
	ctx.r5.s64 = ctx.r10.s64 + 244;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r5.u8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r6,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r6.u8);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x899d7ee0
	if (ctx.cr6.eq) goto loc_899D7EE0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x899d7ed0
	if (ctx.cr6.eq) goto loc_899D7ED0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D7ED0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_899D7EE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D8118) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D8120;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r11,7904
	ctx.r29.s64 = ctx.r11.s64 + 7904;
	// ble cr6,0x899d81ac
	if (!ctx.cr6.gt) goto loc_899D81AC;
loc_899D8144:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8991a248
	ctx.lr = 0x899D814C;
	sub_8991A248(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d816c
	if (!ctx.cr6.eq) goto loc_899D816C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89919d28
	ctx.lr = 0x899D8160;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d81f0
	if (ctx.cr6.eq) goto loc_899D81F0;
loc_899D816C:
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r10,r31,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r31.u64;
loc_899D8174:
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899d8174
	if (ctx.cr6.lt) goto loc_899D8174;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x899d8144
	if (ctx.cr6.lt) goto loc_899D8144;
loc_899D81AC:
	// rlwinm r8,r28,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d81e4
	if (!ctx.cr6.gt) goto loc_899D81E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_899D81C4:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d81c4
	if (ctx.cr6.lt) goto loc_899D81C4;
loc_899D81E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899D81F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4224
	ctx.r1.s64 = ctx.r1.s64 + 4224;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8F48) {
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
	// beq cr6,0x899d8fbc
	if (ctx.cr6.eq) goto loc_899D8FBC;
	// rlwinm r10,r4,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899d8fbc
	if (ctx.cr6.eq) goto loc_899D8FBC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ori r8,r11,4096
	ctx.r8.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x899d8fbc
	if (ctx.cr6.gt) goto loc_899D8FBC;
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
	ctx.lr = 0x899D8FA8;
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
loc_899D8FBC:
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

DEFINE_REX_FUNC(sub_899D92F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D9300;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,3668(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899d943c
	if (ctx.cr6.eq) goto loc_899D943C;
	// lwz r3,3668(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 3668);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D934C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3668);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D9368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// addi r30,r11,10048
	ctx.r30.s64 = ctx.r11.s64 + 10048;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x899d93b8
	if (ctx.cr6.eq) goto loc_899D93B8;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,3672(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 3672);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,668(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899D93B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x899d93dc
	goto loc_899D93DC;
loc_899D93B8:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,3672(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3672);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,672(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899D93DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899D93DC:
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// lwz r10,3668(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3668);
	// lis r8,-30220
	ctx.r8.s64 = -1980497920;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r8,r8,25576
	ctx.r8.s64 = ctx.r8.s64 + 25576;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,12
	ctx.r3.s64 = ctx.r8.s64 + 12;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r26,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r26.u32);
	// stwx r8,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r7.u32);
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,88(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899D943C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899D943C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA9CC) {
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

DEFINE_REX_FUNC(sub_899DABC8) {
	REX_FUNC_PROLOGUE();
	// b 0x899dba90
	sub_899DBA90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DABD0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r3,r11,1220
	ctx.r3.s64 = ctx.r11.s64 + 1220;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DAC58) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x899dacc0
	if (ctx.cr6.eq) goto loc_899DACC0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899dac90
	if (ctx.cr0.eq) goto loc_899DAC90;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x899dba90
	ctx.lr = 0x899DAC90;
	sub_899DBA90(ctx, base);
loc_899DAC90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899dacb8
	if (ctx.cr0.eq) goto loc_899DACB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x899dabe8
	ctx.lr = 0x899DACB4;
	sub_899DABE8(ctx, base);
	// b 0x899dacc0
	goto loc_899DACC0;
loc_899DACB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_899DACC0:
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

DEFINE_REX_FUNC(sub_899DB070) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899DB078;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x899db510
	ctx.lr = 0x899DB088;
	sub_899DB510(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-30212
	ctx.r24.s64 = -1979973632;
	// lis r25,-30212
	ctx.r25.s64 = -1979973632;
	// lwz r30,3800(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 3800);
	// lwz r28,3804(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 3804);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x899db134
	if (ctx.cr6.lt) goto loc_899DB134;
	// subf r26,r28,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r28.u64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x899db134
	if (ctx.cr6.lt) goto loc_899DB134;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dc3d0
	ctx.lr = 0x899DB0BC;
	sub_899DC3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x899db120
	if (!ctx.cr6.lt) goto loc_899DB120;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x899db0d8
	if (ctx.cr6.lt) goto loc_899DB0D8;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_899DB0D8:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x899db0f4
	if (ctx.cr6.lt) goto loc_899DB0F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dc2e0
	ctx.lr = 0x899DB0EC;
	sub_899DC2E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899db110
	if (!ctx.cr0.eq) goto loc_899DB110;
loc_899DB0F4:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x899db134
	if (ctx.cr6.lt) goto loc_899DB134;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dc2e0
	ctx.lr = 0x899DB108;
	sub_899DC2E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899db134
	if (ctx.cr0.eq) goto loc_899DB134;
loc_899DB110:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,3804(r25)
	REX_STORE_U32(ctx.r25.u32 + 3804, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_899DB120:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,3800(r24)
	REX_STORE_U32(ctx.r24.u32 + 3800, ctx.r11.u32);
	// b 0x899db13c
	goto loc_899DB13C;
loc_899DB134:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_899DB13C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x899db154
	ctx.lr = 0x899DB148;
	sub_899DB154(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_19) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savegprlr_28) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_21) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_26) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBDB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r3,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,8
	ctx.xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r6.u64;
	// beq 0x899dbe14
	if (ctx.cr0.eq) goto loc_899DBE14;
	// cmplw r5,r6
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble 0x899dbe30
	if (!ctx.cr0.gt) goto loc_899DBE30;
	// cmplwi r6,4
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq 0x899dbe00
	if (ctx.cr0.eq) goto loc_899DBE00;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DBDE8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x899dbde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBDE8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x899dbe14
	goto loc_899DBE14;
loc_899DBE00:
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_899DBE14:
	// clrlwi r6,r4,29
	ctx.r6.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// cmplwi cr1,r6,0
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// cmplwi cr7,r5,128
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// beq cr6,0x899dbff8
	if (ctx.cr6.eq) goto loc_899DBFF8;
	// bne cr1,0x899dc128
	if (!ctx.cr1.eq) goto loc_899DC128;
	// bge cr7,0x899dbecc
	if (!ctx.cr7.lt) goto loc_899DBECC;
loc_899DBE30:
	// dcbtst r0,r3
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_899DBE3C:
	// rlwinm r7,r5,29,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0xF;
	// clrlwi r6,r5,29
	ctx.r6.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x899dbe60
	if (ctx.cr1.eq) goto loc_899DBE60;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_899DBE54:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x899dbe54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBE54;
loc_899DBE60:
	// cmplwi cr1,r6,4
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x899dbe84
	if (ctx.cr6.eq) goto loc_899DBE84;
	// beq cr1,0x899dbe8c
	if (ctx.cr1.eq) goto loc_899DBE8C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DBE78:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x899dbe78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBE78;
loc_899DBE84:
	// ld r3,-8(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899DBE8C:
	// clrlwi r6,r3,30
	ctx.r6.u64 = ctx.r3.u32 & 0x3;
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x899dbea8
	if (!ctx.cr0.eq) goto loc_899DBEA8;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r3,-8(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899DBEA8:
	// lbz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r7,9(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r6,10(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stb r7,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// stb r6,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r5,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r5.u8);
	// ld r3,-8(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899DBECC:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x899dbefc
	if (ctx.cr0.eq) goto loc_899DBEFC;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_899DBEF0:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x899dbef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBEF0;
loc_899DBEFC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x899dbe3c
	if (ctx.cr0.eq) goto loc_899DBE3C;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899DBF2C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x899dbf2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBF2C;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DBF4C:
	// ld r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// ld r8,24(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r6,32(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r7,40(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r8,48(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// ld r7,64(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// ld r8,72(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 72);
	// std r6,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r6,80(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 80);
	// std r7,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,96(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r6.u64);
	// ld r6,104(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r7,112(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 112);
	// std r8,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r8,120(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 120);
	// std r6,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ldu r6,128(r4)
	ea = 128 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// std r7,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r8,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stdu r6,128(r3)
	ea = 128 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r3.u32 = ea;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x899dbfe0
	if (!ctx.cr0.lt) goto loc_899DBFE0;
	// dcbt r9,r4
	// bdnz 0x899dbf4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBF4C;
	// b 0x899dbe3c
	goto loc_899DBE3C;
loc_899DBFE0:
	// beq cr1,0x899dbff0
	if (ctx.cr1.eq) goto loc_899DBFF0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_899DBFF0:
	// bdnz 0x899dbf4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DBF4C;
	// b 0x899dbe3c
	goto loc_899DBE3C;
loc_899DBFF8:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x899dc050
	if (!ctx.cr7.lt) goto loc_899DC050;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_899DC008:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x899dc02c
	if (ctx.cr1.eq) goto loc_899DC02C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_899DC020:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x899dc020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC020;
loc_899DC02C:
	// beq cr6,0x899dc048
	if (ctx.cr6.eq) goto loc_899DC048;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DC03C:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x899dc03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC03C;
loc_899DC048:
	// ld r3,-8(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899DC050:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x899dc07c
	if (ctx.cr0.eq) goto loc_899DC07C;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_899DC070:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x899dc070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC070;
loc_899DC07C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x899dc008
	if (ctx.cr0.eq) goto loc_899DC008;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899DC0AC:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x899dc0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC0AC;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DC0CC:
	// li r6,8
	ctx.r6.s64 = 8;
loc_899DC0D0:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	ctx.r0.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r0,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r0.u32);
	// lwzu r0,16(r4)
	ea = 16 + ctx.r4.u32;
	ctx.r0.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ea = 16 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x899dc0d0
	if (!ctx.cr0.eq) goto loc_899DC0D0;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x899dc110
	if (!ctx.cr0.lt) goto loc_899DC110;
	// dcbt r9,r4
	// bdnz 0x899dc0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC0CC;
	// b 0x899dc008
	goto loc_899DC008;
loc_899DC110:
	// beq cr1,0x899dc120
	if (ctx.cr1.eq) goto loc_899DC120;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_899DC120:
	// bdnz 0x899dc0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC0CC;
	// b 0x899dc008
	goto loc_899DC008;
loc_899DC128:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x899dc15c
	if (!ctx.cr7.lt) goto loc_899DC15C;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_899DC138:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// beq 0x899dc154
	if (ctx.cr0.eq) goto loc_899DC154;
loc_899DC148:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x899dc148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC148;
loc_899DC154:
	// ld r3,-8(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899DC15C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x899dc184
	if (ctx.cr0.eq) goto loc_899DC184;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DC178:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x899dc178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC178;
loc_899DC184:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x899dc138
	if (ctx.cr0.eq) goto loc_899DC138;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899DC1B4:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x899dc1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC1B4;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899DC1D4:
	// li r6,32
	ctx.r6.s64 = 32;
loc_899DC1D8:
	// lbz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,3(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r7,1(r3)
	REX_STORE_U32(ctx.r3.u32 + 1, ctx.r7.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x899dc1d8
	if (!ctx.cr0.eq) goto loc_899DC1D8;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x899dc220
	if (!ctx.cr0.lt) goto loc_899DC220;
	// dcbt r9,r4
	// bdnz 0x899dc1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC1D4;
	// b 0x899dc138
	goto loc_899DC138;
loc_899DC220:
	// beq cr1,0x899dc230
	if (ctx.cr1.eq) goto loc_899DC230;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_899DC230:
	// bdnz 0x899dc1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC1D4;
	// b 0x899dc138
	goto loc_899DC138;
}

DEFINE_REX_FUNC(sub_899E0AB0) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x899e08d8
	sub_899E08D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E0AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899E0AC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899e0b04
	if (!ctx.cr6.eq) goto loc_899E0B04;
	// bl 0x899dcab8
	ctx.lr = 0x899E0AEC;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E0AF8;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_899E0AFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899E0B04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x899e0b24
	if (!ctx.cr6.eq) goto loc_899E0B24;
	// bl 0x899dcab8
	ctx.lr = 0x899E0B10;
	sub_899DCAB8(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_899E0B14:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E0B1C;
	sub_899DC948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x899e0afc
	goto loc_899E0AFC;
loc_899E0B24:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r31.u64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899e0b4c
	if (ctx.cr6.gt) goto loc_899E0B4C;
	// bl 0x899dcab8
	ctx.lr = 0x899E0B44;
	sub_899DCAB8(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x899e0b14
	goto loc_899E0B14;
loc_899E0B4C:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x899e0b9c
	if (ctx.cr0.eq) goto loc_899E0B9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x899e0b9c
	if (!ctx.cr6.gt) goto loc_899E0B9C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_899E0B74:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899e0b74
	if (!ctx.cr6.eq) goto loc_899E0B74;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x899daf50
	ctx.lr = 0x899E0B9C;
	sub_899DAF50(ctx, base);
loc_899E0B9C:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x899e0bb8
	if (!ctx.cr6.eq) goto loc_899E0BB8;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_899E0BB8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x899e0be8
	if (!ctx.cr6.gt) goto loc_899E0BE8;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-30305
	ctx.r8.s64 = -1986068480;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,1400(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 1400);
	// lwz r9,188(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 188);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_899E0BE8:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x899e0c08
	if (!ctx.cr6.eq) goto loc_899E0C08;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x899e0c10
	goto loc_899E0C10;
loc_899E0C08:
	// subf r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_899E0C10:
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// bl 0x899dbaf0
	ctx.lr = 0x899E0C20;
	sub_899DBAF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899e0cf8
	if (!ctx.cr0.eq) goto loc_899E0CF8;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x899e0c3c
	if (ctx.cr6.eq) goto loc_899E0C3C;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_899E0C3C:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x899e0cc8
	if (ctx.cr6.eq) goto loc_899E0CC8;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899e0c64
	if (!ctx.cr0.lt) goto loc_899E0C64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stb r26,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_899E0C64:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x899e0c90
	if (ctx.cr6.lt) goto loc_899E0C90;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// divw r7,r11,r7
	ctx.r7.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(100));
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_899E0C90:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x899e0cbc
	if (ctx.cr6.lt) goto loc_899E0CBC;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// divw r7,r11,r7
	ctx.r7.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_899E0CBC:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_899E0CC8:
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r11,3792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3792);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e0cf0
	if (ctx.cr0.eq) goto loc_899E0CF0;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x899e0cf0
	if (!ctx.cr6.eq) goto loc_899E0CF0;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x899daf50
	ctx.lr = 0x899E0CF0;
	sub_899DAF50(ctx, base);
loc_899E0CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899e0afc
	goto loc_899E0AFC;
loc_899E0CF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dca20
	ctx.lr = 0x899E0D10;
	sub_899DCA20(ctx, base);
}

