#include "mmpps_funcs.0.h"

DEFINE_REX_FUNC(sub_89910000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89910008;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r8,r10,3160
	ctx.r8.u64 = ctx.r10.u64 | 3160;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lwz r31,3472(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 3472);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r4,r7,-2532
	ctx.r4.s64 = ctx.r7.s64 + -2532;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r30,-30269
	ctx.r30.s64 = -1983709184;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r8,r3,11744
	ctx.r8.s64 = ctx.r3.s64 + 11744;
	// lbz r11,4947(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4947);
	// addi r6,r30,-10772
	ctx.r6.s64 = ctx.r30.s64 + -10772;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r11,-2532(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + -2532);
	// addi r7,r9,20412
	ctx.r7.s64 = ctx.r9.s64 + 20412;
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lbz r10,8419(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 8419);
	// addi r5,r29,-9484
	ctx.r5.s64 = ctx.r29.s64 + -9484;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lis r4,-30269
	ctx.r4.s64 = -1983709184;
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lbz r11,11744(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11744);
	// addi r3,r4,-21296
	ctx.r3.s64 = ctx.r4.s64 + -21296;
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r27,r28,20428
	ctx.r27.s64 = ctx.r28.s64 + 20428;
	// lbz r11,1(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stb r11,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r26,r8,-21372
	ctx.r26.s64 = ctx.r8.s64 + -21372;
	// lbz r11,-10772(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -10772);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stb r11,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// lbz r11,20412(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 20412);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// stb r11,14(r31)
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stb r11,15(r31)
	REX_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// lbz r11,-9484(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + -9484);
	// stb r11,16(r31)
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r11,17(r31)
	REX_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// lbz r11,-21296(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + -21296);
	// stb r11,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,19(r31)
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r11.u8);
	// lbz r11,20428(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 20428);
	// stb r11,20(r31)
	REX_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// stb r11,21(r31)
	REX_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// lbz r11,-21372(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + -21372);
	// stb r11,22(r31)
	REX_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// lbz r11,1(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// stb r11,23(r31)
	REX_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// lbz r11,6055(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 6055);
	// stb r11,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lbz r11,7934(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7934);
	// stb r11,25(r31)
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// lbz r11,539(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 539);
	// lbz r9,12270(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 12270);
	// stb r11,26(r31)
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
	// lbz r11,-25514(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + -25514);
	// stb r11,27(r31)
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// lbz r11,12799(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 12799);
	// stb r11,28(r31)
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lbz r11,12322(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 12322);
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r9,30(r31)
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r9.u8);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// stb r11,29(r31)
	REX_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// addi r3,r5,-9500
	ctx.r3.s64 = ctx.r5.s64 + -9500;
	// addi r10,r4,7932
	ctx.r10.s64 = ctx.r4.s64 + 7932;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lbz r11,-9500(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + -9500);
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// stb r11,31(r31)
	REX_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// addi r30,r6,6400
	ctx.r30.s64 = ctx.r6.s64 + 6400;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// stb r11,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lbz r11,7932(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 7932);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stb r11,33(r31)
	REX_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stb r11,34(r31)
	REX_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lbz r11,6400(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 6400);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// stb r11,35(r31)
	REX_STORE_U8(ctx.r31.u32 + 35, ctx.r11.u8);
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lis r27,-30273
	ctx.r27.s64 = -1983971328;
	// lbz r10,32554(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 32554);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stb r10,37(r31)
	REX_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// stb r11,36(r31)
	REX_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lbz r9,12274(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 12274);
	// lis r21,-30251
	ctx.r21.s64 = -1982529536;
	// lwz r6,3352(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 3352);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r5,12792(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12792);
	// lis r20,-30274
	ctx.r20.s64 = -1984036864;
	// lbz r8,12326(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 12326);
	// lis r19,-30270
	ctx.r19.s64 = -1983774720;
	// lwz r7,512(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 512);
	// lwz r4,3620(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 3620);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r3,6420(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 6420);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lwz r30,25056(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 25056);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwz r29,-9496(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + -9496);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// lbz r11,12271(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 12271);
	// stb r11,38(r31)
	REX_STORE_U8(ctx.r31.u32 + 38, ctx.r11.u8);
	// lbz r11,-31405(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + -31405);
	// stb r9,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// stb r8,41(r31)
	REX_STORE_U8(ctx.r31.u32 + 41, ctx.r8.u8);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stb r11,39(r31)
	REX_STORE_U8(ctx.r31.u32 + 39, ctx.r11.u8);
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// stw r4,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// lhz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 536);
	// sth r11,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// lhz r11,19184(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 19184);
	// sth r11,74(r31)
	REX_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// lhz r11,12600(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 12600);
	// sth r11,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// lhz r11,584(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 584);
	// sth r11,78(r31)
	REX_STORE_U16(ctx.r31.u32 + 78, ctx.r11.u16);
	// lhz r11,20416(r19)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 20416);
	// sth r11,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lhz r11,8416(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 8416);
	// sth r11,82(r31)
	REX_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// lhz r11,-9540(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + -9540);
	// sth r11,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// lhz r11,25060(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 25060);
	// sth r11,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r11.u16);
	// lhz r11,-9220(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + -9220);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// sth r11,88(r31)
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// lhz r11,7376(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 7376);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// sth r11,90(r31)
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// lhz r11,-10776(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -10776);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// sth r11,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// lhz r11,9644(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 9644);
	// lis r26,-30242
	ctx.r26.s64 = -1981939712;
	// sth r11,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// lis r28,-30242
	ctx.r28.s64 = -1981939712;
	// lhz r11,32012(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 32012);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r7,588(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 588);
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// sth r11,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r25,-30273
	ctx.r25.s64 = -1983971328;
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// lhz r5,9652(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 9652);
	// lis r20,-30251
	ctx.r20.s64 = -1982529536;
	// lhz r29,12268(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 12268);
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// lhz r6,528(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 528);
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// lhz r10,6044(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 6044);
	// lis r17,-30269
	ctx.r17.s64 = -1983709184;
	// lhz r8,-10752(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -10752);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lhz r30,-21588(r26)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r26.u32 + -21588);
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lhz r4,-21400(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + -21400);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lhz r3,7112(r27)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r27.u32 + 7112);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lhz r26,-9492(r23)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r23.u32 + -9492);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r28,3528(r25)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + 3528);
	// lhz r27,20400(r24)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r24.u32 + 20400);
	// lis r15,-30253
	ctx.r15.s64 = -1982660608;
	// lwz r23,12740(r20)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + 12740);
	// lis r14,-30275
	ctx.r14.s64 = -1984102400;
	// lhz r25,3616(r22)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r22.u32 + 3616);
	// lhz r24,9640(r21)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r21.u32 + 9640);
	// lwz r20,-10764(r17)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r17.u32 + -10764);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,26900(r16)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r16.u32 + 26900);
	// lhz r7,-31408(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -31408);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r22,-25884(r19)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r19.u32 + -25884);
	// lwz r21,20424(r18)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 20424);
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r19,3628(r15)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r15.u32 + 3628);
	// lwz r18,-25888(r14)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r14.u32 + -25888);
	// sth r10,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r10.u16);
	// sth r8,102(r31)
	REX_STORE_U16(ctx.r31.u32 + 102, ctx.r8.u16);
	// sth r7,104(r31)
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r7.u16);
	// sth r6,106(r31)
	REX_STORE_U16(ctx.r31.u32 + 106, ctx.r6.u16);
	// sth r11,98(r31)
	REX_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// sth r5,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r5.u16);
	// sth r4,110(r31)
	REX_STORE_U16(ctx.r31.u32 + 110, ctx.r4.u16);
	// sth r3,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r3.u16);
	// sth r30,114(r31)
	REX_STORE_U16(ctx.r31.u32 + 114, ctx.r30.u16);
	// sth r29,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r29.u16);
	// sth r28,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r28.u16);
	// sth r27,120(r31)
	REX_STORE_U16(ctx.r31.u32 + 120, ctx.r27.u16);
	// sth r26,122(r31)
	REX_STORE_U16(ctx.r31.u32 + 122, ctx.r26.u16);
	// sth r25,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r25.u16);
	// sth r24,126(r31)
	REX_STORE_U16(ctx.r31.u32 + 126, ctx.r24.u16);
	// stw r23,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r23.u32);
	// stw r22,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r22.u32);
	// stw r17,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r17.u32);
	// stw r21,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r21.u32);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r20,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r20.u32);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// stw r19,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r19.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r18,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r18.u32);
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lwz r4,9648(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 9648);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lwz r10,7124(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 7124);
	// lis r26,-30242
	ctx.r26.s64 = -1981939712;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lwz r11,9528(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 9528);
	// lis r25,-30276
	ctx.r25.s64 = -1984167936;
	// lwz r8,27796(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 27796);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r29,-30251
	ctx.r29.s64 = -1982529536;
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// lwz r4,4948(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4948);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lwz r30,7380(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 7380);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// lwz r7,3872(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 3872);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r28,-21408(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + -21408);
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lwz r6,-31412(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + -31412);
	// lis r20,-30251
	ctx.r20.s64 = -1982529536;
	// lbz r26,32014(r25)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r25.u32 + 32014);
	// lis r19,-30269
	ctx.r19.s64 = -1983709184;
	// lwz r5,3876(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3876);
	// lbz r25,3530(r24)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r24.u32 + 3530);
	// lis r18,-30274
	ctx.r18.s64 = -1984036864;
	// lwz r3,12748(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12748);
	// lis r17,-30270
	ctx.r17.s64 = -1983774720;
	// lwz r24,-31416(r23)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + -31416);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lwz r29,7900(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 7900);
	// lis r15,-30273
	ctx.r15.s64 = -1983971328;
	// lwz r23,26936(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 26936);
	// lis r14,-30270
	ctx.r14.s64 = -1983774720;
	// lbz r27,5211(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5211);
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lwz r22,20944(r21)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + 20944);
	// lwz r21,19180(r20)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 19180);
	// lwz r20,-10740(r19)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + -10740);
	// lis r19,-30270
	ctx.r19.s64 = -1983774720;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lwz r19,32024(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 32024);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r8,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// stw r6,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r5,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// stw r4,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r30,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r29,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
	// stw r28,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// stb r27,196(r31)
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r27.u8);
	// stb r26,197(r31)
	REX_STORE_U8(ctx.r31.u32 + 197, ctx.r26.u8);
	// stb r25,198(r31)
	REX_STORE_U8(ctx.r31.u32 + 198, ctx.r25.u8);
	// stw r24,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r24.u32);
	// stw r23,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// stw r22,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r22.u32);
	// stw r21,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r21.u32);
	// stw r20,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r20.u32);
	// stw r19,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r19.u32);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r18,516(r18)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + 516);
	// lwz r11,7096(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 7096);
	// lwz r8,20948(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 20948);
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-30269
	ctx.r4.s64 = -1983709184;
	// lwz r7,3792(r15)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + 3792);
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// lwz r6,26524(r14)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + 26524);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lis r28,-30273
	ctx.r28.s64 = -1983971328;
	// lwz r5,5760(r17)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r17.u32 + 5760);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r17,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r17.u32);
	// stw r18,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r18.u32);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,-21288(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -21288);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stw r8,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r7,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r6,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r6.u32);
	// stw r5,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r5.u32);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lwz r8,-10768(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + -10768);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// lwz r7,-25892(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -25892);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// ld r6,7912(r29)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + 7912);
	// lis r29,-30242
	ctx.r29.s64 = -1981939712;
	// lbz r5,6402(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 6402);
	// stw r8,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// stw r7,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// lbz r7,9519(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 9519);
	// lwz r4,-25520(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -25520);
	// lbz r8,5755(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 5755);
	// lbz r3,9543(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 9543);
	// lbz r30,32550(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 32550);
	// lwz r29,-21580(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + -21580);
	// ld r11,12004(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 12004);
	// std r11,268(r31)
	REX_STORE_U64(ctx.r31.u32 + 268, ctx.r11.u64);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// std r6,276(r31)
	REX_STORE_U64(ctx.r31.u32 + 276, ctx.r6.u64);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// stb r8,284(r31)
	REX_STORE_U8(ctx.r31.u32 + 284, ctx.r8.u8);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stb r7,285(r31)
	REX_STORE_U8(ctx.r31.u32 + 285, ctx.r7.u8);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// stb r5,286(r31)
	REX_STORE_U8(ctx.r31.u32 + 286, ctx.r5.u8);
	// addi r5,r11,3632
	ctx.r5.s64 = ctx.r11.s64 + 3632;
	// stw r4,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r4.u32);
	// addi r4,r8,20432
	ctx.r4.s64 = ctx.r8.s64 + 20432;
	// stb r3,292(r31)
	REX_STORE_U8(ctx.r31.u32 + 292, ctx.r3.u8);
	// addi r3,r7,7384
	ctx.r3.s64 = ctx.r7.s64 + 7384;
	// stb r30,293(r31)
	REX_STORE_U8(ctx.r31.u32 + 293, ctx.r30.u8);
	// addi r30,r6,27280
	ctx.r30.s64 = ctx.r6.s64 + 27280;
	// stw r29,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
loc_899105FC:
	// li r6,128
	ctx.r6.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,1836
	ctx.r7.s64 = ctx.r10.s64 + 1836;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89910610:
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r9,r4
	ctx.r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stb r6,300(r8)
	REX_STORE_U8(ctx.r8.u32 + 300, ctx.r6.u8);
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r8,812(r28)
	REX_STORE_U8(ctx.r28.u32 + 812, ctx.r8.u8);
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// stb r6,1324(r26)
	REX_STORE_U8(ctx.r26.u32 + 1324, ctx.r6.u8);
	// lbzx r8,r25,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x89910610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89910610;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x899105fc
	if (ctx.cr6.lt) goto loc_899105FC;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r7,r11,532
	ctx.r7.s64 = ctx.r11.s64 + 532;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// lbz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 532);
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// lwz r10,-9224(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9224);
	// lis r5,-30247
	ctx.r5.s64 = -1982267392;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lwz r9,5764(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 5764);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lwz r8,12068(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12068);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// stb r11,2348(r31)
	REX_STORE_U8(ctx.r31.u32 + 2348, ctx.r11.u8);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lis r24,-30251
	ctx.r24.s64 = -1982529536;
	// lis r28,-30251
	ctx.r28.s64 = -1982529536;
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lwz r6,4940(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4940);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lis r19,-30273
	ctx.r19.s64 = -1983971328;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r17,-30253
	ctx.r17.s64 = -1982660608;
	// lwz r3,8152(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 8152);
	// lis r15,-30242
	ctx.r15.s64 = -1981939712;
	// addi r16,r17,-2540
	ctx.r16.s64 = ctx.r17.s64 + -2540;
	// addi r22,r31,2444
	ctx.r22.s64 = ctx.r31.s64 + 2444;
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r7,6418(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 6418);
	// lwz r4,7120(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 7120);
	// lwz r27,12156(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + 12156);
	// stb r11,2349(r31)
	REX_STORE_U8(ctx.r31.u32 + 2349, ctx.r11.u8);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r10,2352(r31)
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r10.u32);
	// stw r9,2356(r31)
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r9.u32);
	// addi r21,r11,-31400
	ctx.r21.s64 = ctx.r11.s64 + -31400;
	// lwz r11,19360(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 19360);
	// stw r11,2360(r31)
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// stw r8,2364(r31)
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r8.u32);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stb r7,2368(r31)
	REX_STORE_U8(ctx.r31.u32 + 2368, ctx.r7.u8);
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// lwz r5,7920(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 7920);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lwz r30,12756(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12756);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r10,-9528(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -9528);
	// lwz r9,19172(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 19172);
	// lwz r29,26916(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 26916);
	// lwz r28,-9536(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + -9536);
	// lwz r24,12020(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12020);
	// lwz r26,12072(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 12072);
	// lwz r25,-21592(r15)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r15.u32 + -21592);
	// lwz r11,12636(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 12636);
	// stw r11,2372(r31)
	REX_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// stw r6,2376(r31)
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r6.u32);
	// stw r5,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r5.u32);
	// stw r10,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r10.u32);
	// stw r9,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r9.u32);
	// stw r4,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r4.u32);
	// stw r3,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r3.u32);
	// stw r30,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r30.u32);
	// lwz r11,3796(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 3796);
	// stw r11,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// lwz r11,20396(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 20396);
	// stw r11,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// stw r29,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
	// stw r28,2416(r31)
	REX_STORE_U32(ctx.r31.u32 + 2416, ctx.r28.u32);
	// stw r27,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r27.u32);
	// lwz r11,-2540(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -2540);
	// stw r11,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// stw r11,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// stw r26,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r26.u32);
	// stw r25,2436(r31)
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r25.u32);
	// stw r24,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r24.u32);
loc_899107A0:
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r23,-128
	ctx.r11.s64 = ctx.r23.s64 + -128;
	// addi r10,r22,-128
	ctx.r10.s64 = ctx.r22.s64 + -128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899107B0:
	// lwzu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899107b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899107B0;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r11,r21,128
	ctx.r11.s64 = ctx.r21.s64 + 128;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899107a0
	if (ctx.cr6.lt) goto loc_899107A0;
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
loc_899107E8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x899107e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899107E8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,7744
	ctx.r7.s64 = ctx.r31.s64 + 7744;
	// lwz r9,26912(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,3880(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 3880);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// addi r10,r10,5464
	ctx.r10.s64 = ctx.r10.s64 + 5464;
	// stw r9,7736(r31)
	REX_STORE_U32(ctx.r31.u32 + 7736, ctx.r9.u32);
	// stw r8,7740(r31)
	REX_STORE_U32(ctx.r31.u32 + 7740, ctx.r8.u32);
loc_89910828:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89910828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89910828;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r11,-9508
	ctx.r9.s64 = ctx.r11.s64 + -9508;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r3,r31,7788
	ctx.r3.s64 = ctx.r31.s64 + 7788;
	// lbz r11,-9508(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -9508);
	// addi r30,r8,25128
	ctx.r30.s64 = ctx.r8.s64 + 25128;
	// lwz r10,27792(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 27792);
	// li r5,696
	ctx.r5.s64 = 696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,7776(r31)
	REX_STORE_U8(ctx.r31.u32 + 7776, ctx.r11.u8);
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,7777(r31)
	REX_STORE_U8(ctx.r31.u32 + 7777, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r11,7778(r31)
	REX_STORE_U8(ctx.r31.u32 + 7778, ctx.r11.u8);
	// lbz r11,3(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// stb r11,7779(r31)
	REX_STORE_U8(ctx.r31.u32 + 7779, ctx.r11.u8);
	// lbz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// stb r11,7780(r31)
	REX_STORE_U8(ctx.r31.u32 + 7780, ctx.r11.u8);
	// lbz r11,5(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// stb r11,7781(r31)
	REX_STORE_U8(ctx.r31.u32 + 7781, ctx.r11.u8);
	// lbz r11,6(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// stb r11,7782(r31)
	REX_STORE_U8(ctx.r31.u32 + 7782, ctx.r11.u8);
	// lbz r11,7(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 7);
	// stb r11,7783(r31)
	REX_STORE_U8(ctx.r31.u32 + 7783, ctx.r11.u8);
	// stw r10,7784(r31)
	REX_STORE_U32(ctx.r31.u32 + 7784, ctx.r10.u32);
	// bl 0x899dbdb0
	ctx.lr = 0x899108A4;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,8484
	ctx.r3.s64 = ctx.r31.s64 + 8484;
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// li r5,696
	ctx.r5.s64 = 696;
	// bl 0x899dbdb0
	ctx.lr = 0x899108B4;
	sub_899DBDB0(ctx, base);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r3,r31,9180
	ctx.r3.s64 = ctx.r31.s64 + 9180;
	// addi r30,r6,9056
	ctx.r30.s64 = ctx.r6.s64 + 9056;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x899108CC;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9360
	ctx.r3.s64 = ctx.r31.s64 + 9360;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x899108DC;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9240
	ctx.r3.s64 = ctx.r31.s64 + 9240;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x899108EC;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9420
	ctx.r3.s64 = ctx.r31.s64 + 9420;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x899108FC;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9300
	ctx.r3.s64 = ctx.r31.s64 + 9300;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8991090C;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9480
	ctx.r3.s64 = ctx.r31.s64 + 9480;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8991091C;
	sub_899DBDB0(ctx, base);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// addi r29,r31,26436
	ctx.r29.s64 = ctx.r31.s64 + 26436;
	// addi r11,r3,-25880
	ctx.r11.s64 = ctx.r3.s64 + -25880;
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r30,r11,16896
	ctx.r30.s64 = ctx.r11.s64 + 16896;
loc_89910930:
	// addi r4,r30,-16896
	ctx.r4.s64 = ctx.r30.s64 + -16896;
	// addi r3,r29,-16896
	ctx.r3.s64 = ctx.r29.s64 + -16896;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89910940;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910950;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x89910930
	if (!ctx.cr0.eq) goto loc_89910930;
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
loc_89910978:
	// addi r4,r30,-3168
	ctx.r4.s64 = ctx.r30.s64 + -3168;
	// addi r3,r29,-3168
	ctx.r3.s64 = ctx.r29.s64 + -3168;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89910988;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910998;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,-2112
	ctx.r4.s64 = ctx.r30.s64 + -2112;
	// addi r3,r29,-2112
	ctx.r3.s64 = ctx.r29.s64 + -2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899109A8;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,1056
	ctx.r4.s64 = ctx.r30.s64 + 1056;
	// addi r3,r29,1056
	ctx.r3.s64 = ctx.r29.s64 + 1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899109B8;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,-1056
	ctx.r4.s64 = ctx.r30.s64 + -1056;
	// addi r3,r29,-1056
	ctx.r3.s64 = ctx.r29.s64 + -1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899109C8;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,2112
	ctx.r4.s64 = ctx.r30.s64 + 2112;
	// addi r3,r29,2112
	ctx.r3.s64 = ctx.r29.s64 + 2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899109D8;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x89910978
	if (!ctx.cr0.eq) goto loc_89910978;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// addi r29,r29,-14268
	ctx.r29.s64 = ctx.r29.s64 + -14268;
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r30,r11,1600
	ctx.r30.s64 = ctx.r11.s64 + 1600;
loc_89910A00:
	// addi r4,r30,-1600
	ctx.r4.s64 = ctx.r30.s64 + -1600;
	// addi r3,r29,-1600
	ctx.r3.s64 = ctx.r29.s64 + -1600;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x899dbdb0
	ctx.lr = 0x89910A10;
	sub_899DBDB0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910A20;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x89910a00
	if (!ctx.cr0.eq) goto loc_89910A00;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,592
	ctx.r29.s64 = ctx.r11.s64 + 592;
	// addi r28,r28,-12668
	ctx.r28.s64 = ctx.r28.s64 + -12668;
	// li r30,352
	ctx.r30.s64 = 352;
loc_89910A44:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910A54;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// bne 0x89910a44
	if (!ctx.cr0.eq) goto loc_89910A44;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
	// addi r28,r28,26756
	ctx.r28.s64 = ctx.r28.s64 + 26756;
	// li r30,256
	ctx.r30.s64 = 256;
loc_89910A78:
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910A88;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// addi r28,r28,208
	ctx.r28.s64 = ctx.r28.s64 + 208;
	// bne 0x89910a78
	if (!ctx.cr0.eq) goto loc_89910A78;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// addi r29,r11,19368
	ctx.r29.s64 = ctx.r11.s64 + 19368;
	// addi r28,r28,14468
	ctx.r28.s64 = ctx.r28.s64 + 14468;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_89910AAC:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910ABC;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// bne 0x89910aac
	if (!ctx.cr0.eq) goto loc_89910AAC;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addis r28,r31,7
	ctx.r28.s64 = ctx.r31.s64 + 458752;
	// addi r29,r11,6424
	ctx.r29.s64 = ctx.r11.s64 + 6424;
	// addi r28,r28,-26492
	ctx.r28.s64 = ctx.r28.s64 + -26492;
	// li r30,2304
	ctx.r30.s64 = 2304;
loc_89910AE0:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910AF0;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bne 0x89910ae0
	if (!ctx.cr0.eq) goto loc_89910AE0;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r30,r11,9656
	ctx.r30.s64 = ctx.r11.s64 + 9656;
	// addi r3,r3,-29564
	ctx.r3.s64 = ctx.r3.s64 + -29564;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B1C;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r3,-29472
	ctx.r3.s64 = ctx.r3.s64 + -29472;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B30;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// addi r3,r3,-29380
	ctx.r3.s64 = ctx.r3.s64 + -29380;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B44;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// addi r3,r3,-29288
	ctx.r3.s64 = ctx.r3.s64 + -29288;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B58;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,368
	ctx.r4.s64 = ctx.r30.s64 + 368;
	// addi r3,r3,-29196
	ctx.r3.s64 = ctx.r3.s64 + -29196;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B6C;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,460
	ctx.r4.s64 = ctx.r30.s64 + 460;
	// addi r3,r3,-29104
	ctx.r3.s64 = ctx.r3.s64 + -29104;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x89910B80;
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
loc_89910BA4:
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
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
	// sth r7,-7038(r10)
	REX_STORE_U16(ctx.r10.u32 + -7038, ctx.r7.u16);
	// addi r7,r9,1920
	ctx.r7.s64 = ctx.r9.s64 + 1920;
	// addi r28,r8,2560
	ctx.r28.s64 = ctx.r8.s64 + 2560;
	// addi r27,r8,3200
	ctx.r27.s64 = ctx.r8.s64 + 3200;
	// lhzx r29,r11,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r29,-3198(r10)
	REX_STORE_U16(ctx.r10.u32 + -3198, ctx.r29.u16);
	// addi r29,r9,2560
	ctx.r29.s64 = ctx.r9.s64 + 2560;
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// sth r6,-6398(r10)
	REX_STORE_U16(ctx.r10.u32 + -6398, ctx.r6.u16);
	// addi r6,r9,3200
	ctx.r6.s64 = ctx.r9.s64 + 3200;
	// lhzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// sth r5,-2558(r10)
	REX_STORE_U16(ctx.r10.u32 + -2558, ctx.r5.u16);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sth r4,-5758(r10)
	REX_STORE_U16(ctx.r10.u32 + -5758, ctx.r4.u16);
	// lhzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r3,-1918(r10)
	REX_STORE_U16(ctx.r10.u32 + -1918, ctx.r3.u16);
	// lhzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// sth r5,-5118(r10)
	REX_STORE_U16(ctx.r10.u32 + -5118, ctx.r5.u16);
	// lhzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sth r4,-1278(r10)
	REX_STORE_U16(ctx.r10.u32 + -1278, ctx.r4.u16);
	// lhzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// sth r3,-4478(r10)
	REX_STORE_U16(ctx.r10.u32 + -4478, ctx.r3.u16);
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sth r7,-638(r10)
	REX_STORE_U16(ctx.r10.u32 + -638, ctx.r7.u16);
	// lhzx r5,r11,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r5,-3838(r10)
	REX_STORE_U16(ctx.r10.u32 + -3838, ctx.r5.u16);
	// lhzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89910ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89910BA4;
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
loc_89910C48:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r8,4032
	ctx.r11.s64 = ctx.r8.s64 + 4032;
	// addi r10,r7,4032
	ctx.r10.s64 = ctx.r7.s64 + 4032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89910C58:
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
	// bdnz 0x89910c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89910C58;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,1088
	ctx.r11.s64 = ctx.r6.s64 + 1088;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89910c48
	if (ctx.cr6.lt) goto loc_89910C48;
	// addis r5,r31,10
	ctx.r5.s64 = ctx.r31.s64 + 655360;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r5,-14164
	ctx.r5.s64 = ctx.r5.s64 + -14164;
	// addi r6,r11,13024
	ctx.r6.s64 = ctx.r11.s64 + 13024;
loc_89910CB4:
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r8,r6,5088
	ctx.r8.s64 = ctx.r6.s64 + 5088;
	// addi r10,r11,4064
	ctx.r10.s64 = ctx.r11.s64 + 4064;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89910CCC:
	// lbz r9,-5088(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -5088);
	// stb r9,-5088(r10)
	REX_STORE_U8(ctx.r10.u32 + -5088, ctx.r9.u8);
	// lbz r8,-4064(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4064);
	// stb r8,-4064(r10)
	REX_STORE_U8(ctx.r10.u32 + -4064, ctx.r8.u8);
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
	// bdnz 0x89910ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89910CCC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x89910cb4
	if (ctx.cr6.lt) goto loc_89910CB4;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r5,r11,26920
	ctx.r5.s64 = ctx.r11.s64 + 26920;
	// ori r4,r10,56492
	ctx.r4.u64 = ctx.r10.u64 | 56492;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lbz r11,26920(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 26920);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// ori r9,r3,56493
	ctx.r9.u64 = ctx.r3.u64 | 56493;
	// ori r8,r8,56495
	ctx.r8.u64 = ctx.r8.u64 | 56495;
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// ori r7,r7,56496
	ctx.r7.u64 = ctx.r7.u64 | 56496;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ori r6,r6,56497
	ctx.r6.u64 = ctx.r6.u64 | 56497;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// ori r8,r3,56499
	ctx.r8.u64 = ctx.r3.u64 | 56499;
	// ori r7,r11,56500
	ctx.r7.u64 = ctx.r11.u64 | 56500;
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r10,r10,3884
	ctx.r10.s64 = ctx.r10.s64 + 3884;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// ori r6,r30,56501
	ctx.r6.u64 = ctx.r30.u64 | 56501;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// ori r4,r4,56498
	ctx.r4.u64 = ctx.r4.u64 | 56498;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// lis r26,9
	ctx.r26.s64 = 589824;
	// lis r25,9
	ctx.r25.s64 = 589824;
	// lis r24,9
	ctx.r24.s64 = 589824;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// lis r22,9
	ctx.r22.s64 = 589824;
	// lis r21,9
	ctx.r21.s64 = 589824;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// ori r16,r8,56505
	ctx.r16.u64 = ctx.r8.u64 | 56505;
	// lbz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// ori r18,r10,56504
	ctx.r18.u64 = ctx.r10.u64 | 56504;
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// ori r15,r7,56506
	ctx.r15.u64 = ctx.r7.u64 | 56506;
	// ori r14,r6,56507
	ctx.r14.u64 = ctx.r6.u64 | 56507;
	// ori r29,r29,56494
	ctx.r29.u64 = ctx.r29.u64 | 56494;
	// ori r4,r4,56502
	ctx.r4.u64 = ctx.r4.u64 | 56502;
	// ori r3,r3,56503
	ctx.r3.u64 = ctx.r3.u64 | 56503;
	// addi r17,r30,27804
	ctx.r17.s64 = ctx.r30.s64 + 27804;
	// ori r11,r11,56508
	ctx.r11.u64 = ctx.r11.u64 | 56508;
	// addi r10,r9,10208
	ctx.r10.s64 = ctx.r9.s64 + 10208;
	// ori r28,r28,56509
	ctx.r28.u64 = ctx.r28.u64 | 56509;
	// ori r27,r27,56512
	ctx.r27.u64 = ctx.r27.u64 | 56512;
	// ori r26,r26,56516
	ctx.r26.u64 = ctx.r26.u64 | 56516;
	// ori r25,r25,56520
	ctx.r25.u64 = ctx.r25.u64 | 56520;
	// ori r24,r24,56524
	ctx.r24.u64 = ctx.r24.u64 | 56524;
	// ori r23,r23,56528
	ctx.r23.u64 = ctx.r23.u64 | 56528;
	// ori r22,r22,56532
	ctx.r22.u64 = ctx.r22.u64 | 56532;
	// ori r21,r21,56533
	ctx.r21.u64 = ctx.r21.u64 | 56533;
	// ori r20,r20,56534
	ctx.r20.u64 = ctx.r20.u64 | 56534;
	// ori r19,r19,56535
	ctx.r19.u64 = ctx.r19.u64 | 56535;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// stw r23,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r23,92(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
	// lwz r21,96(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r9,-21584(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r19,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// lwz r19,100(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lis r28,-30276
	ctx.r28.s64 = -1984167936;
	// stw r29,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r26,108(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// lwz r10,12000(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12000);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stw r20,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lbz r11,3(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// ori r29,r29,56536
	ctx.r29.u64 = ctx.r29.u64 | 56536;
	// lwz r7,540(r22)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 540);
	// addis r22,r31,10
	ctx.r22.s64 = ctx.r31.s64 + 655360;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lwz r6,524(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 524);
	// addis r24,r31,10
	ctx.r24.s64 = ctx.r31.s64 + 655360;
	// lwz r8,7104(r20)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r20.u32 + 7104);
	// addi r22,r22,-5928
	ctx.r22.s64 = ctx.r22.s64 + -5928;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lbz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// addi r24,r24,-5672
	ctx.r24.s64 = ctx.r24.s64 + -5672;
	// stbx r11,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r11.u8);
	// lbz r11,5(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r22,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// ori r22,r20,56537
	ctx.r22.u64 = ctx.r20.u64 | 56537;
	// stw r24,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stbx r11,r31,r21
	REX_STORE_U8(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u8);
	// lbz r11,3884(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 3884);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// lbz r11,2(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 2);
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 3);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// lbz r11,5(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lbz r11,27804(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 27804);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// stbx r11,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r11.u8);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lbz r11,1(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 1);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r28,r28,7640
	ctx.r28.s64 = ctx.r28.s64 + 7640;
	// addi r27,r27,12640
	ctx.r27.s64 = ctx.r27.s64 + 12640;
	// stbx r11,r31,r16
	REX_STORE_U8(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u8);
	// addi r26,r26,4952
	ctx.r26.s64 = ctx.r26.s64 + 4952;
	// addi r25,r25,8160
	ctx.r25.s64 = ctx.r25.s64 + 8160;
	// addi r24,r24,-10320
	ctx.r24.s64 = ctx.r24.s64 + -10320;
	// addi r23,r23,7896
	ctx.r23.s64 = ctx.r23.s64 + 7896;
	// lbz r11,2(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 2);
	// stbx r11,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r11.u8);
	// lbz r11,3(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 3);
	// stbx r11,r31,r14
	REX_STORE_U8(ctx.r31.u32 + ctx.r14.u32, ctx.r11.u8);
	// lbz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 4);
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// lbz r11,5(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 5);
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r11,6035(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 6035);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r10,9535(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 9535);
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r9,12266(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 12266);
	// lbz r8,6054(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 6054);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lbz r7,32019(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 32019);
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r6,9539(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 9539);
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stbx r10,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r5,r11,3536
	ctx.r5.s64 = ctx.r11.s64 + 3536;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stbx r9,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u8);
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// stbx r8,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u8);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// stbx r6,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r6.u8);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r4,r10,5472
	ctx.r4.s64 = ctx.r10.s64 + 5472;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r9,5496
	ctx.r3.s64 = ctx.r9.s64 + 5496;
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r8,-21360
	ctx.r30.s64 = ctx.r8.s64 + -21360;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r29,r7,12480
	ctx.r29.s64 = ctx.r7.s64 + 12480;
	// addi r7,r6,8016
	ctx.r7.s64 = ctx.r6.s64 + 8016;
loc_899110C0:
	// lhzx r6,r11,r23
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// addi r22,r7,256
	ctx.r22.s64 = ctx.r7.s64 + 256;
	// sth r6,-3070(r10)
	REX_STORE_U16(ctx.r10.u32 + -3070, ctx.r6.u16);
	// lhzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// sth r6,-2814(r10)
	REX_STORE_U16(ctx.r10.u32 + -2814, ctx.r6.u16);
	// lhzx r6,r11,r25
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// sth r6,-2558(r10)
	REX_STORE_U16(ctx.r10.u32 + -2558, ctx.r6.u16);
	// lhzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// sth r6,-2302(r10)
	REX_STORE_U16(ctx.r10.u32 + -2302, ctx.r6.u16);
	// lhzx r6,r11,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r6,-2046(r10)
	REX_STORE_U16(ctx.r10.u32 + -2046, ctx.r6.u16);
	// lhzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// sth r6,-1790(r10)
	REX_STORE_U16(ctx.r10.u32 + -1790, ctx.r6.u16);
	// lhzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sth r6,-1534(r10)
	REX_STORE_U16(ctx.r10.u32 + -1534, ctx.r6.u16);
	// lhzx r6,r11,r22
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// sth r6,-1278(r10)
	REX_STORE_U16(ctx.r10.u32 + -1278, ctx.r6.u16);
	// lhzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sth r6,-1022(r10)
	REX_STORE_U16(ctx.r10.u32 + -1022, ctx.r6.u16);
	// lhzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// sth r6,-766(r10)
	REX_STORE_U16(ctx.r10.u32 + -766, ctx.r6.u16);
	// lhzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r6,-510(r10)
	REX_STORE_U16(ctx.r10.u32 + -510, ctx.r6.u16);
	// lhzx r6,r11,r4
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sth r6,-254(r10)
	REX_STORE_U16(ctx.r10.u32 + -254, ctx.r6.u16);
	// lhzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r10.u32 = ea;
	// lhz r6,2(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// sth r6,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r6.u16);
	// lhz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// sth r6,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r6.u16);
	// lhz r6,6(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// sth r6,6(r8)
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r6.u16);
	// lhz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// sth r6,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r6.u16);
	// lhz r6,10(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// sth r6,10(r8)
	REX_STORE_U16(ctx.r8.u32 + 10, ctx.r6.u16);
	// lhzu r6,12(r9)
	ea = 12 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r6,12(r8)
	ea = 12 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899110c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899110C0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,5768
	ctx.r10.s64 = ctx.r11.s64 + 5768;
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// addi r11,r11,-4132
	ctx.r11.s64 = ctx.r11.s64 + -4132;
loc_89911178:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x89911178
	if (!ctx.cr0.eq) goto loc_89911178;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r30,r6,61660
	ctx.r30.u64 = ctx.r6.u64 | 61660;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lwz r10,-10064(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -10064);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lhz r9,26864(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lhz r8,9536(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 9536);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lhz r7,-21276(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + -21276);
	// ori r27,r5,61664
	ctx.r27.u64 = ctx.r5.u64 | 61664;
	// lhz r5,27272(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 27272);
	// ori r3,r3,61666
	ctx.r3.u64 = ctx.r3.u64 | 61666;
	// lbz r6,11746(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 11746);
	// ori r30,r29,61668
	ctx.r30.u64 = ctx.r29.u64 | 61668;
	// lhz r4,12272(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 12272);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// sthx r9,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u16);
	// ori r11,r11,61670
	ctx.r11.u64 = ctx.r11.u64 | 61670;
	// sthx r8,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u16);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// sthx r7,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u16);
	// lis r26,-30269
	ctx.r26.s64 = -1983709184;
	// lhz r8,27276(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 27276);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// ori r30,r29,61672
	ctx.r30.u64 = ctx.r29.u64 | 61672;
	// lbz r7,4946(r28)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + 4946);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// ori r3,r3,61674
	ctx.r3.u64 = ctx.r3.u64 | 61674;
	// lhz r9,-17120(r26)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + -17120);
	// ori r6,r10,61676
	ctx.r6.u64 = ctx.r10.u64 | 61676;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// sthx r5,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u16);
	// ori r29,r29,61678
	ctx.r29.u64 = ctx.r29.u64 | 61678;
	// ori r11,r28,61680
	ctx.r11.u64 = ctx.r28.u64 | 61680;
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// sthx r4,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// sthx r9,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u16);
	// addi r6,r5,12080
	ctx.r6.s64 = ctx.r5.s64 + 12080;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89911288:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x89911288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911288;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// ori r4,r8,61748
	ctx.r4.u64 = ctx.r8.u64 | 61748;
	// lhz r8,26536(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 26536);
	// lbz r11,8418(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8418);
	// ori r9,r6,61750
	ctx.r9.u64 = ctx.r6.u64 | 61750;
	// lhz r10,-9520(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -9520);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// ori r3,r3,61752
	ctx.r3.u64 = ctx.r3.u64 | 61752;
	// lbz r6,4939(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 4939);
	// lbz r7,5754(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 5754);
	// ori r4,r30,61754
	ctx.r4.u64 = ctx.r30.u64 | 61754;
	// sthx r10,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u16);
	// ori r30,r29,61755
	ctx.r30.u64 = ctx.r29.u64 | 61755;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addis r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 655360;
	// sthx r8,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u16);
	// addi r11,r5,-4592
	ctx.r11.s64 = ctx.r5.s64 + -4592;
	// stbx r7,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r10,r10,-3780
	ctx.r10.s64 = ctx.r10.s64 + -3780;
	// stbx r6,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u8);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89911318:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89911318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911318;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lhz r8,9516(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 9516);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lhz r7,-21396(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + -21396);
	// ori r4,r4,63804
	ctx.r4.u64 = ctx.r4.u64 | 63804;
	// lhz r6,4936(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 4936);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lhz r5,12148(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 12148);
	// ori r3,r3,63806
	ctx.r3.u64 = ctx.r3.u64 | 63806;
	// ori r29,r9,63808
	ctx.r29.u64 = ctx.r9.u64 | 63808;
	// ori r30,r30,63810
	ctx.r30.u64 = ctx.r30.u64 | 63810;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// sthx r8,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// sthx r7,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sthx r6,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u16);
	// sthx r5,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89911384:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89911384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911384;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,12332
	ctx.r9.s64 = ctx.r11.s64 + 12332;
	// ori r8,r10,63812
	ctx.r8.u64 = ctx.r10.u64 | 63812;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lbz r11,12332(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12332);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// ori r6,r6,63813
	ctx.r6.u64 = ctx.r6.u64 | 63813;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// ori r29,r29,63831
	ctx.r29.u64 = ctx.r29.u64 | 63831;
	// ori r5,r5,63818
	ctx.r5.u64 = ctx.r5.u64 | 63818;
	// stw r6,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// ori r28,r28,63832
	ctx.r28.u64 = ctx.r28.u64 | 63832;
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// ori r27,r27,63833
	ctx.r27.u64 = ctx.r27.u64 | 63833;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// lis r26,9
	ctx.r26.s64 = 589824;
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lis r25,9
	ctx.r25.s64 = 589824;
	// lis r24,9
	ctx.r24.s64 = 589824;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r6,r11,63824
	ctx.r6.u64 = ctx.r11.u64 | 63824;
	// ori r29,r26,63834
	ctx.r29.u64 = ctx.r26.u64 | 63834;
	// ori r5,r30,63829
	ctx.r5.u64 = ctx.r30.u64 | 63829;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// ori r4,r4,63823
	ctx.r4.u64 = ctx.r4.u64 | 63823;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// ori r3,r3,63828
	ctx.r3.u64 = ctx.r3.u64 | 63828;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// ori r10,r10,63814
	ctx.r10.u64 = ctx.r10.u64 | 63814;
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// lbz r11,5(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// ori r8,r8,63819
	ctx.r8.u64 = ctx.r8.u64 | 63819;
	// ori r28,r25,63835
	ctx.r28.u64 = ctx.r25.u64 | 63835;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// ori r27,r24,63836
	ctx.r27.u64 = ctx.r24.u64 | 63836;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// ori r26,r23,63817
	ctx.r26.u64 = ctx.r23.u64 | 63817;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// lis r22,9
	ctx.r22.s64 = 589824;
	// addi r21,r7,6404
	ctx.r21.s64 = ctx.r7.s64 + 6404;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r21,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r21.u32);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// ori r25,r22,63822
	ctx.r25.u64 = ctx.r22.u64 | 63822;
	// ori r24,r20,63827
	ctx.r24.u64 = ctx.r20.u64 | 63827;
	// ori r4,r4,63815
	ctx.r4.u64 = ctx.r4.u64 | 63815;
	// ori r3,r3,63820
	ctx.r3.u64 = ctx.r3.u64 | 63820;
	// ori r10,r10,63825
	ctx.r10.u64 = ctx.r10.u64 | 63825;
	// ori r8,r8,63830
	ctx.r8.u64 = ctx.r8.u64 | 63830;
	// ori r6,r6,63816
	ctx.r6.u64 = ctx.r6.u64 | 63816;
	// ori r5,r5,63821
	ctx.r5.u64 = ctx.r5.u64 | 63821;
	// ori r30,r30,63826
	ctx.r30.u64 = ctx.r30.u64 | 63826;
	// ori r29,r29,63837
	ctx.r29.u64 = ctx.r29.u64 | 63837;
	// ori r28,r28,63838
	ctx.r28.u64 = ctx.r28.u64 | 63838;
	// ori r27,r27,63840
	ctx.r27.u64 = ctx.r27.u64 | 63840;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r11,535(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 535);
	// rotlwi r26,r21,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lwz r21,168(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r18,9
	ctx.r18.s64 = 589824;
	// lwz r19,164(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r16,9
	ctx.r16.s64 = 589824;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lis r14,9
	ctx.r14.s64 = 589824;
	// lbz r11,6404(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 6404);
	// ori r23,r23,63842
	ctx.r23.u64 = ctx.r23.u64 | 63842;
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lwz r17,160(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// ori r20,r20,63844
	ctx.r20.u64 = ctx.r20.u64 | 63844;
	// lwz r15,156(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ori r18,r18,63846
	ctx.r18.u64 = ctx.r18.u64 | 63846;
	// stw r27,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// ori r16,r16,63848
	ctx.r16.u64 = ctx.r16.u64 | 63848;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
	// addi r11,r5,-9512
	ctx.r11.s64 = ctx.r5.s64 + -9512;
	// lwz r27,152(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// ori r14,r14,63850
	ctx.r14.u64 = ctx.r14.u64 | 63850;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lbz r22,538(r22)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + 538);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// lis r28,9
	ctx.r28.s64 = 589824;
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// ori r7,r28,63851
	ctx.r7.u64 = ctx.r28.u64 | 63851;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// lis r22,9
	ctx.r22.s64 = 589824;
	// lwz r29,148(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r28,r10,63860
	ctx.r28.u64 = ctx.r10.u64 | 63860;
	// ori r25,r22,63872
	ctx.r25.u64 = ctx.r22.u64 | 63872;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r6,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// ori r3,r3,63864
	ctx.r3.u64 = ctx.r3.u64 | 63864;
	// ori r4,r4,63868
	ctx.r4.u64 = ctx.r4.u64 | 63868;
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// stw r3,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// ori r30,r30,63852
	ctx.r30.u64 = ctx.r30.u64 | 63852;
	// lbz r11,5(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 5);
	// ori r6,r6,63856
	ctx.r6.u64 = ctx.r6.u64 | 63856;
	// addi r22,r8,32552
	ctx.r22.s64 = ctx.r8.s64 + 32552;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// stbx r11,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r11.u8);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lis r28,-30251
	ctx.r28.s64 = -1982529536;
	// stbx r11,r31,r21
	REX_STORE_U8(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u8);
	// lbz r11,6(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// stbx r11,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r11.u8);
	// lbz r11,1(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// stbx r11,r31,r17
	REX_STORE_U8(ctx.r31.u32 + ctx.r17.u32, ctx.r11.u8);
	// lbz r11,6(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 6);
	// stbx r11,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// lbz r11,7(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 7);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 2);
	// lwz r29,172(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// lwz r29,168(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lhz r10,5208(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 5208);
	// lis r15,-30253
	ctx.r15.s64 = -1982660608;
	// lhz r25,12608(r25)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r25.u32 + 12608);
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r4,-25516(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + -25516);
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// sth r25,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r25.u16);
	// lis r25,9
	ctx.r25.s64 = 589824;
	// stw r18,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// ori r10,r10,63874
	ctx.r10.u64 = ctx.r10.u64 | 63874;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// ori r25,r25,63875
	ctx.r25.u64 = ctx.r25.u64 | 63875;
	// lwz r21,120(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// sth r4,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r4.u16);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r20,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// lwz r17,116(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,108(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lhz r3,32544(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 32544);
	// lhz r28,12736(r28)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + 12736);
	// lbz r24,6031(r24)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 6031);
	// lbz r11,7(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 7);
	// lbz r19,9642(r19)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + 9642);
	// lwz r15,-9544(r15)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + -9544);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r29,164(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r11,3(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r29,160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// lwz r16,112(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r29,156(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r11,3(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 3);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r29,152(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// lis r14,-30276
	ctx.r14.s64 = -1984167936;
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// addi r14,r14,32020
	ctx.r14.s64 = ctx.r14.s64 + 32020;
	// lbz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r29,148(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lhz r29,4944(r29)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + 4944);
	// lbz r11,9(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 9);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 4);
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// lbz r9,9(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 9);
	// addi r31,r31,3800
	ctx.r31.s64 = ctx.r31.s64 + 3800;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// lis r31,9
	ctx.r31.s64 = 589824;
	// addis r18,r11,10
	ctx.r18.s64 = ctx.r11.s64 + 655360;
	// lwz r26,124(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ori r31,r31,63873
	ctx.r31.u64 = ctx.r31.u64 | 63873;
	// stb r9,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r18,r18,-1244
	ctx.r18.s64 = ctx.r18.s64 + -1244;
	// lbz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,6030(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 6030);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// lbz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r9,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stbx r25,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r25.u8);
	// lhz r25,104(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// sth r3,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// lwz r7,-9524(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -9524);
	// lwz r6,20408(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20408);
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// lhz r14,100(r1)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r30,-31436(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + -31436);
	// lwz r27,176(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// sth r28,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r28.u16);
	// addi r27,r27,416
	ctx.r27.s64 = ctx.r27.s64 + 416;
	// sth r29,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stb r24,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r24.u8);
	// stb r19,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// stw r15,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// lbz r10,32552(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 32552);
	// lwz r8,180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lhz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// stw r18,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r27,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// lbz r10,1(r22)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 1);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,-9512(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + -9512);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,1(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// stbx r31,r11,r20
	REX_STORE_U8(ctx.r11.u32 + ctx.r20.u32, ctx.r31.u8);
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// sthx r25,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r25.u16);
	// clrlwi r7,r19,24
	ctx.r7.u64 = ctx.r19.u32 & 0xFF;
	// sthx r14,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r14.u16);
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// sthx r3,r11,r23
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r3.u16);
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lbz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// sthx r4,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u16);
	// rotlwi r4,r15,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// sthx r9,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u16);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,196(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stwx r4,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r10,32020(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 32020);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r9,r18,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// rotlwi r10,r27,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_899118D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-420
	ctx.r8.s64 = ctx.r10.s64 + -420;
	// addi r7,r9,-420
	ctx.r7.s64 = ctx.r9.s64 + -420;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899118E0:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899118e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899118E0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899118FC:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899118fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899118FC;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,412
	ctx.r8.s64 = ctx.r10.s64 + 412;
	// addi r7,r9,412
	ctx.r7.s64 = ctx.r9.s64 + 412;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89911918:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89911918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911918;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,828
	ctx.r8.s64 = ctx.r10.s64 + 828;
	// addi r7,r9,828
	ctx.r7.s64 = ctx.r9.s64 + 828;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89911934:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89911934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911934;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x899118d0
	if (!ctx.cr0.eq) goto loc_899118D0;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lbz r10,6046(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6046);
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
	// lbz r9,9542(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 9542);
	// ori r28,r28,5
	ctx.r28.u64 = ctx.r28.u64 | 5;
	// lwz r8,-25896(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -25896);
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stwx r8,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbz r7,32551(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 32551);
	// lis r30,-30276
	ctx.r30.s64 = -1984167936;
	// lbz r6,586(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 586);
	// lbz r5,7115(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 7115);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lbz r4,3891(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 3891);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lbz r3,32546(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 32546);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lbz r31,12267(r31)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 12267);
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// lbz r30,32555(r30)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + 32555);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// stb r7,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stb r6,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// stb r5,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stb r4,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// stb r3,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r3.u8);
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// ori r7,r7,14
	ctx.r7.u64 = ctx.r7.u64 | 14;
	// stb r31,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// ori r6,r6,15
	ctx.r6.u64 = ctx.r6.u64 | 15;
	// stb r30,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// stw r7,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// stw r5,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// ori r10,r10,25
	ctx.r10.u64 = ctx.r10.u64 | 25;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// ori r8,r8,27
	ctx.r8.u64 = ctx.r8.u64 | 27;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// lbz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 580);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lis r25,10
	ctx.r25.s64 = 655360;
	// ori r9,r31,12
	ctx.r9.u64 = ctx.r31.u64 | 12;
	// ori r4,r30,13
	ctx.r4.u64 = ctx.r30.u64 | 13;
	// ori r31,r29,20
	ctx.r31.u64 = ctx.r29.u64 | 20;
	// addi r8,r3,580
	ctx.r8.s64 = ctx.r3.s64 + 580;
	// ori r30,r28,21
	ctx.r30.u64 = ctx.r28.u64 | 21;
	// ori r29,r27,22
	ctx.r29.u64 = ctx.r27.u64 | 22;
	// ori r7,r7,17
	ctx.r7.u64 = ctx.r7.u64 | 17;
	// ori r6,r6,18
	ctx.r6.u64 = ctx.r6.u64 | 18;
	// ori r5,r5,19
	ctx.r5.u64 = ctx.r5.u64 | 19;
	// ori r28,r26,23
	ctx.r28.u64 = ctx.r26.u64 | 23;
	// ori r27,r25,24
	ctx.r27.u64 = ctx.r25.u64 | 24;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lwz r26,216(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// lbz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r3,3890(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 3890);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lbz r14,100(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// ori r25,r25,29
	ctx.r25.u64 = ctx.r25.u64 | 29;
	// lbz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// ori r23,r23,30
	ctx.r23.u64 = ctx.r23.u64 | 30;
	// lbz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ori r21,r21,31
	ctx.r21.u64 = ctx.r21.u64 | 31;
	// lwz r24,212(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// ori r19,r19,32
	ctx.r19.u64 = ctx.r19.u64 | 32;
	// lwz r22,208(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// stb r15,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r15.u8);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lbz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// ori r15,r15,63
	ctx.r15.u64 = ctx.r15.u64 | 63;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stb r3,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// lbz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stw r28,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// ori r31,r31,62
	ctx.r31.u64 = ctx.r31.u64 | 62;
	// stw r29,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// ori r28,r28,34
	ctx.r28.u64 = ctx.r28.u64 | 34;
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// ori r29,r29,35
	ctx.r29.u64 = ctx.r29.u64 | 35;
	// stw r19,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stb r27,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r27.u8);
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r18,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// stb r14,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r14.u8);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// stb r16,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r16.u8);
	// lis r16,-30251
	ctx.r16.s64 = -1982529536;
	// ori r10,r4,40
	ctx.r10.u64 = ctx.r4.u64 | 40;
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// ori r4,r3,44
	ctx.r4.u64 = ctx.r3.u64 | 44;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// ori r3,r30,56
	ctx.r3.u64 = ctx.r30.u64 | 56;
	// lbz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// ori r25,r25,36
	ctx.r25.u64 = ctx.r25.u64 | 36;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r23,r23,37
	ctx.r23.u64 = ctx.r23.u64 | 37;
	// ori r21,r21,38
	ctx.r21.u64 = ctx.r21.u64 | 38;
	// ori r19,r19,39
	ctx.r19.u64 = ctx.r19.u64 | 39;
	// ori r27,r27,48
	ctx.r27.u64 = ctx.r27.u64 | 48;
	// ori r18,r18,52
	ctx.r18.u64 = ctx.r18.u64 | 52;
	// ori r14,r14,60
	ctx.r14.u64 = ctx.r14.u64 | 60;
	// addi r30,r16,12752
	ctx.r30.s64 = ctx.r16.s64 + 12752;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r15,-30275
	ctx.r15.s64 = -1984102400;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// lis r14,-30276
	ctx.r14.s64 = -1984167936;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// ori r18,r18,66
	ctx.r18.u64 = ctx.r18.u64 | 66;
	// lbz r26,32018(r14)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 32018);
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// lwz r14,180(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r27,176(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r19,172(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r23,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// lbz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lwz r23,168(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r29,164(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// stbx r20,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u8);
	// lis r22,-30251
	ctx.r22.s64 = -1982529536;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lis r20,-30247
	ctx.r20.s64 = -1982267392;
	// lwz r9,212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stbx r17,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r17.u8);
	// lbz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r7,208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r17,184(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stbx r6,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,12342(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 12342);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stb r26,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stw r28,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r6,9647(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 9647);
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r10,9534(r15)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + 9534);
	// lis r15,-30242
	ctx.r15.s64 = -1981939712;
	// lbz r8,9655(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 9655);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lbz r7,9527(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 9527);
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbz r5,587(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 587);
	// stb r10,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// stb r8,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r10,r10,-21380
	ctx.r10.s64 = ctx.r10.s64 + -21380;
	// stb r7,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lbz r9,7935(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 7935);
	// lbz r10,12752(r16)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + 12752);
	// ori r16,r4,68
	ctx.r16.u64 = ctx.r4.u64 | 68;
	// lwz r4,26932(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 26932);
	// ori r28,r28,76
	ctx.r28.u64 = ctx.r28.u64 | 76;
	// lwz r31,20404(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 20404);
	// ori r25,r25,72
	ctx.r25.u64 = ctx.r25.u64 | 72;
	// lwz r24,12152(r22)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r22.u32 + 12152);
	// stw r28,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// ori r21,r21,70
	ctx.r21.u64 = ctx.r21.u64 | 70;
	// lwz r28,160(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r22,-30273
	ctx.r22.s64 = -1983971328;
	// stw r25,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// lbz r25,96(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stb r9,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// lhz r8,27844(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 27844);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stb r5,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r5.u8);
	// lwz r6,3892(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 3892);
	// lwz r20,19364(r20)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + 19364);
	// stb r10,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lbz r26,12321(r26)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 12321);
	// lbz r7,6027(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 6027);
	// lhz r15,-21364(r15)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r15.u32 + -21364);
	// stw r24,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// rotlwi r24,r31,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r21,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stw r18,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// lbz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r18,84(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// stw r6,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// stw r4,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stw r20,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// stb r26,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// lis r26,-30251
	ctx.r26.s64 = -1982529536;
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// stb r7,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// sth r15,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r15.u16);
	// stw r16,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// lwz r16,156(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stbx r3,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r3.u8);
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// stbx r28,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stbx r6,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r6.u8);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stbx r25,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r25.u8);
	// stbx r21,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r21.u8);
	// stbx r18,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r18.u8);
	// stbx r3,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u8);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lwz r23,208(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ori r9,r9,88
	ctx.r9.u64 = ctx.r9.u64 | 88;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// ori r8,r8,92
	ctx.r8.u64 = ctx.r8.u64 | 92;
	// lwz r25,216(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// ori r17,r5,80
	ctx.r17.u64 = ctx.r5.u64 | 80;
	// stw r8,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lwz r21,200(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// ori r14,r3,84
	ctx.r14.u64 = ctx.r3.u64 | 84;
	// lwz r19,196(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r18,84(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lbz r16,92(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,6032(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 6032);
	// lhz r8,12264(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 12264);
	// sth r5,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// addis r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 655360;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addis r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 655360;
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// lhz r7,19188(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 19188);
	// addis r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 655360;
	// lwz r6,3532(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 3532);
	// std r5,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// addis r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 655360;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addis r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 655360;
	// lbz r10,-21380(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -21380);
	// addis r29,r11,10
	ctx.r29.s64 = ctx.r11.s64 + 655360;
	// addi r4,r4,352
	ctx.r4.s64 = ctx.r4.s64 + 352;
	// addi r3,r3,608
	ctx.r3.s64 = ctx.r3.s64 + 608;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// addi r30,r30,1120
	ctx.r30.s64 = ctx.r30.s64 + 1120;
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r29,r29,1376
	ctx.r29.s64 = ctx.r29.s64 + 1376;
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r10,5(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
	// lwz r25,132(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r10,6416(r22)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + 6416);
	// stwx r24,r11,r25
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u32);
	// lwz r25,128(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r24,104(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// stwx r23,r11,r25
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r23.u32);
	// lwz r25,124(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stwx r21,r11,r25
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r21.u32);
	// lwz r25,120(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r19,r11,r25
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r19.u32);
	// lwz r25,116(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// sthx r18,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r18.u16);
	// lwz r25,112(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r16,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r16.u8);
	// lwz r25,108(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stbx r15,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r15.u8);
	// lwz r25,220(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// sthx r24,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u16);
	// lwz r25,168(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r25,164(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r9,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u16);
	// lwz r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// sthx r8,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r8.u16);
	// lwz r8,12076(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 12076);
	// lwz r9,20952(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 20952);
	// lwz r28,224(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r9,8420(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8420);
	// lwz r28,228(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r9,-9516(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -9516);
	// lwz r28,212(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// stwx r9,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r9.u32);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stwx r8,r11,r14
	REX_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r8.u32);
	// lis r8,-30251
	ctx.r8.s64 = -1982529536;
	// ld r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// addi r9,r9,-26152
	ctx.r9.s64 = ctx.r9.s64 + -26152;
	// addi r8,r8,12768
	ctx.r8.s64 = ctx.r8.s64 + 12768;
	// sthx r7,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u16);
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lwz r28,208(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r27,r27,-9480
	ctx.r27.s64 = ctx.r27.s64 + -9480;
	// addi r7,r7,-10736
	ctx.r7.s64 = ctx.r7.s64 + -10736;
	// stwx r6,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// addi r6,r6,5216
	ctx.r6.s64 = ctx.r6.s64 + 5216;
	// addi r28,r28,12344
	ctx.r28.s64 = ctx.r28.s64 + 12344;
loc_89911FF0:
	// lbzx r26,r10,r27
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stbx r26,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r26.u8);
	// lbzx r26,r10,r28
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r26,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r26.u8);
	// lbzx r26,r10,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r26,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r26.u8);
	// lbzx r26,r10,r7
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stbx r26,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u8);
	// lbzx r26,r10,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r26,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r26.u8);
	// lbzx r26,r10,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r26,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89911ff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89911FF0;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r6,r8,1632
	ctx.r6.u64 = ctx.r8.u64 | 1632;
	// stw r14,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r14.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbz r10,-21284(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + -21284);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// ori r3,r5,1640
	ctx.r3.u64 = ctx.r5.u64 | 1640;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// ori r4,r4,1646
	ctx.r4.u64 = ctx.r4.u64 | 1646;
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r5,r5,1639
	ctx.r5.u64 = ctx.r5.u64 | 1639;
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r5,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r14,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// ori r4,r31,1647
	ctx.r4.u64 = ctx.r31.u64 | 1647;
	// ori r8,r8,1672
	ctx.r8.u64 = ctx.r8.u64 | 1672;
	// ori r5,r27,1683
	ctx.r5.u64 = ctx.r27.u64 | 1683;
	// stw r4,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lis r24,10
	ctx.r24.s64 = 655360;
	// stw r14,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r14.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// ori r4,r26,1685
	ctx.r4.u64 = ctx.r26.u64 | 1685;
	// ori r8,r29,1681
	ctx.r8.u64 = ctx.r29.u64 | 1681;
	// lbz r10,6036(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 6036);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r5,r23,1633
	ctx.r5.u64 = ctx.r23.u64 | 1633;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// lwz r23,224(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r14,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r14.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// ori r3,r6,1676
	ctx.r3.u64 = ctx.r6.u64 | 1676;
	// ori r6,r28,1682
	ctx.r6.u64 = ctx.r28.u64 | 1682;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// ori r3,r24,1648
	ctx.r3.u64 = ctx.r24.u64 | 1648;
	// lwz r24,228(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// ori r10,r30,1680
	ctx.r10.u64 = ctx.r30.u64 | 1680;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lis r16,10
	ctx.r16.s64 = 655360;
	// lis r15,10
	ctx.r15.s64 = 655360;
	// addi r6,r9,-21284
	ctx.r6.s64 = ctx.r9.s64 + -21284;
	// addi r4,r7,6036
	ctx.r4.s64 = ctx.r7.s64 + 6036;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r9,r22,1641
	ctx.r9.u64 = ctx.r22.u64 | 1641;
	// addi r31,r25,544
	ctx.r31.s64 = ctx.r25.s64 + 544;
	// ori r8,r21,1652
	ctx.r8.u64 = ctx.r21.u64 | 1652;
	// ori r7,r20,1634
	ctx.r7.u64 = ctx.r20.u64 | 1634;
	// ori r30,r19,1642
	ctx.r30.u64 = ctx.r19.u64 | 1642;
	// ori r29,r18,1656
	ctx.r29.u64 = ctx.r18.u64 | 1656;
	// ori r28,r17,1635
	ctx.r28.u64 = ctx.r17.u64 | 1635;
	// ori r27,r16,1643
	ctx.r27.u64 = ctx.r16.u64 | 1643;
	// ori r26,r15,1660
	ctx.r26.u64 = ctx.r15.u64 | 1660;
	// ori r24,r24,1636
	ctx.r24.u64 = ctx.r24.u64 | 1636;
	// ori r23,r23,1644
	ctx.r23.u64 = ctx.r23.u64 | 1644;
	// lwz r10,544(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 544);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// lwz r21,216(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// lwz r22,220(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// ori r18,r14,1638
	ctx.r18.u64 = ctx.r14.u64 | 1638;
	// ori r21,r21,1637
	ctx.r21.u64 = ctx.r21.u64 | 1637;
	// lwz r20,212(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// ori r22,r22,1664
	ctx.r22.u64 = ctx.r22.u64 | 1664;
	// lwz r19,208(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ori r20,r20,1645
	ctx.r20.u64 = ctx.r20.u64 | 1645;
	// lbz r10,12275(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 12275);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r21,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// ori r25,r25,1694
	ctx.r25.u64 = ctx.r25.u64 | 1694;
	// lbz r16,7931(r16)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r16.u32 + 7931);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r20,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// stw r25,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// ori r25,r21,1700
	ctx.r25.u64 = ctx.r21.u64 | 1700;
	// stb r10,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// ori r3,r3,1692
	ctx.r3.u64 = ctx.r3.u64 | 1692;
	// ori r25,r10,1706
	ctx.r25.u64 = ctx.r10.u64 | 1706;
	// stw r22,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// lis r15,-30275
	ctx.r15.s64 = -1984102400;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lis r14,-30251
	ctx.r14.s64 = -1982529536;
	// stw r23,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stb r16,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r16.u8);
	// ori r19,r19,1668
	ctx.r19.u64 = ctx.r19.u64 | 1668;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// ori r3,r20,1698
	ctx.r3.u64 = ctx.r20.u64 | 1698;
	// stw r19,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lbz r15,-31406(r15)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + -31406);
	// ori r22,r22,1702
	ctx.r22.u64 = ctx.r22.u64 | 1702;
	// lhz r14,12760(r14)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r14.u32 + 12760);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lbz r10,1(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// ori r3,r23,1704
	ctx.r3.u64 = ctx.r23.u64 | 1704;
	// stb r15,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r15.u8);
	// ori r23,r16,1708
	ctx.r23.u64 = ctx.r16.u64 | 1708;
	// sth r14,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r14.u16);
	// ori r17,r17,1687
	ctx.r17.u64 = ctx.r17.u64 | 1687;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// ori r18,r18,1690
	ctx.r18.u64 = ctx.r18.u64 | 1690;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ori r19,r19,1696
	ctx.r19.u64 = ctx.r19.u64 | 1696;
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// stw r17,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// addi r23,r22,12012
	ctx.r23.s64 = ctx.r22.s64 + 12012;
	// lis r21,-30242
	ctx.r21.s64 = -1981939712;
	// addi r5,r25,12028
	ctx.r5.s64 = ctx.r25.s64 + 12028;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lbz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// lbz r10,3(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lis r19,-30251
	ctx.r19.s64 = -1982529536;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lwz r8,224(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// lwz r7,220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r29,200(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r23,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// lwz r20,180(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r16,176(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lbz r14,100(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r18,104(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stw r20,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r20.u32);
	// stw r16,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r16.u32);
	// stb r14,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r14.u8);
	// stb r23,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r23.u8);
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r16,208(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r14,160(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lhz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lwz r28,196(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stw r23,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r16,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// sth r20,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r20.u16);
	// stw r21,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r21,r21,-21368
	ctx.r21.s64 = ctx.r21.s64 + -21368;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,192(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r14,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lwz r20,156(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r10,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r26,188(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lwz r24,212(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r22,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lbz r10,5(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r7,r7,27812
	ctx.r7.s64 = ctx.r7.s64 + 27812;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// ori r10,r3,1728
	ctx.r10.u64 = ctx.r3.u64 | 1728;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// lhz r10,12144(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12144);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r9,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u32);
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r5,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r24,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r24,r24,9512
	ctx.r24.s64 = ctx.r24.s64 + 9512;
	// stw r24,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// lwz r24,152(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// ori r3,r25,1716
	ctx.r3.u64 = ctx.r25.u64 | 1716;
	// ori r25,r23,1722
	ctx.r25.u64 = ctx.r23.u64 | 1722;
	// sth r10,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// ori r23,r16,1724
	ctx.r23.u64 = ctx.r16.u64 | 1724;
	// lbz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lwz r16,148(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// ori r7,r30,1714
	ctx.r7.u64 = ctx.r30.u64 | 1714;
	// ori r30,r22,1718
	ctx.r30.u64 = ctx.r22.u64 | 1718;
	// addi r19,r19,12744
	ctx.r19.s64 = ctx.r19.s64 + 12744;
	// ori r17,r17,1710
	ctx.r17.u64 = ctx.r17.u64 | 1710;
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// ori r8,r15,1712
	ctx.r8.u64 = ctx.r15.u64 | 1712;
	// ori r5,r5,1720
	ctx.r5.u64 = ctx.r5.u64 | 1720;
	// ori r22,r14,1726
	ctx.r22.u64 = ctx.r14.u64 | 1726;
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,140(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r10,7(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,228(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,180(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stbx r18,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r18.u8);
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// lbz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lhz r10,12012(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12012);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lhz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lhz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// sthx r4,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u16);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lhz r10,12028(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12028);
	// addi r6,r16,4920
	ctx.r6.s64 = ctx.r16.s64 + 4920;
	// sthx r10,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// lhz r10,-21368(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -21368);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lhz r10,2(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + 2);
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// lhz r9,3624(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 3624);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r24,124(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r21,120(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lhz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,9512(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 9512);
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// lhz r10,12744(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 12744);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// lhz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 2);
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// sthx r29,r11,r21
	REX_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r29.u16);
	// lhz r10,4920(r16)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r16.u32 + 4920);
	// sthx r10,r11,r17
	REX_STORE_U16(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u16);
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r10,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lhz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// lhz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lhz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// lhz r10,10(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 10);
	// sthx r10,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// lhz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u16);
	// lhz r10,14(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 14);
	// sthx r10,r11,r23
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u16);
	// sthx r9,r11,r22
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r9.u16);
	// lhz r10,7928(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 7928);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_899125A0:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899125a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899125A0;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// ori r10,r8,1762
	ctx.r10.u64 = ctx.r8.u64 | 1762;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,12632(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 12632);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,12032
	ctx.r9.s64 = ctx.r6.s64 + 12032;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sthx r7,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u16);
loc_899125E0:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899125e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899125E0;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// ori r10,r8,1796
	ctx.r10.u64 = ctx.r8.u64 | 1796;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,-21392(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -21392);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,26868
	ctx.r9.s64 = ctx.r6.s64 + 26868;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sthx r7,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u16);
loc_89912620:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89912620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89912620;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r7,r9,1830
	ctx.r7.u64 = ctx.r9.u64 | 1830;
	// addi r6,r8,12624
	ctx.r6.s64 = ctx.r8.s64 + 12624;
	// lhz r10,-9532(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -9532);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r6,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// lis r3,-30251
	ctx.r3.s64 = -1982529536;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// ori r7,r5,1832
	ctx.r7.u64 = ctx.r5.u64 | 1832;
	// lhz r5,5752(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 5752);
	// lhz r4,19168(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 19168);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// lhz r9,26948(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 26948);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// lbz r6,534(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 534);
	// ori r3,r3,1836
	ctx.r3.u64 = ctx.r3.u64 | 1836;
	// lbz r10,-31402(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -31402);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// sth r5,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// sth r4,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r4.u16);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stb r10,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// sth r9,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lis r25,10
	ctx.r25.s64 = 655360;
	// lis r24,10
	ctx.r24.s64 = 655360;
	// lwz r23,228(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lis r21,-30269
	ctx.r21.s64 = -1983709184;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// lhz r10,12624(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 12624);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lis r16,10
	ctx.r16.s64 = 655360;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// addis r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 655360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1870
	ctx.r7.s64 = ctx.r7.s64 + 1870;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// ori r31,r31,1834
	ctx.r31.u64 = ctx.r31.u64 | 1834;
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// ori r7,r5,1844
	ctx.r7.u64 = ctx.r5.u64 | 1844;
	// ori r30,r30,1838
	ctx.r30.u64 = ctx.r30.u64 | 1838;
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// ori r29,r29,1840
	ctx.r29.u64 = ctx.r29.u64 | 1840;
	// ori r3,r3,1842
	ctx.r3.u64 = ctx.r3.u64 | 1842;
	// ori r5,r9,1846
	ctx.r5.u64 = ctx.r9.u64 | 1846;
	// addi r15,r4,-31432
	ctx.r15.s64 = ctx.r4.s64 + -31432;
	// ori r6,r6,1848
	ctx.r6.u64 = ctx.r6.u64 | 1848;
	// ori r28,r28,1850
	ctx.r28.u64 = ctx.r28.u64 | 1850;
	// ori r27,r27,1852
	ctx.r27.u64 = ctx.r27.u64 | 1852;
	// ori r26,r26,1854
	ctx.r26.u64 = ctx.r26.u64 | 1854;
	// ori r25,r25,1856
	ctx.r25.u64 = ctx.r25.u64 | 1856;
	// ori r24,r24,1858
	ctx.r24.u64 = ctx.r24.u64 | 1858;
	// ori r22,r22,1860
	ctx.r22.u64 = ctx.r22.u64 | 1860;
	// ori r20,r20,1862
	ctx.r20.u64 = ctx.r20.u64 | 1862;
	// addi r14,r21,-21292
	ctx.r14.s64 = ctx.r21.s64 + -21292;
	// ori r8,r8,1864
	ctx.r8.u64 = ctx.r8.u64 | 1864;
	// ori r19,r19,1866
	ctx.r19.u64 = ctx.r19.u64 | 1866;
	// ori r18,r18,1867
	ctx.r18.u64 = ctx.r18.u64 | 1867;
	// ori r17,r17,1868
	ctx.r17.u64 = ctx.r17.u64 | 1868;
	// ori r16,r16,1869
	ctx.r16.u64 = ctx.r16.u64 | 1869;
	// lhz r10,2(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r16,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// lwz r16,224(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r17,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r17.u32);
	// lhz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lbz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stw r18,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// lhz r18,92(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// stw r19,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r19.u32);
	// stb r10,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lhz r19,88(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lbz r9,5210(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5210);
	// lhz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// sthx r10,r11,r16
	REX_STORE_U16(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u16);
	// lhz r10,6(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 6);
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// sthx r17,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r17.u16);
	// sthx r18,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r18.u16);
	// sthx r19,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u16);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,212(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lhz r10,-31432(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + -31432);
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// sthx r10,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// lbz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// lhz r10,2(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// sthx r10,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lhz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 4);
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// lhz r10,6(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 6);
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// lhz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 8);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// lhz r10,10(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 10);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u16);
	// lhz r10,12(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 12);
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// lhz r10,14(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 14);
	// sthx r10,r11,r22
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u16);
	// lhz r10,-21292(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + -21292);
	// sthx r10,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u16);
	// lhz r10,2(r14)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r14.u32 + 2);
	// sthx r10,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stbx r31,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u8);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stbx r5,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwz r31,208(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ori r30,r7,32768
	ctx.r30.u64 = ctx.r7.u64 | 32768;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbz r10,9646(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 9646);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r8,33252
	ctx.r5.u64 = ctx.r8.u64 | 33252;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r4,r10,12032
	ctx.r4.s64 = ctx.r10.s64 + 12032;
	// addi r3,r9,9448
	ctx.r3.s64 = ctx.r9.s64 + 9448;
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
loc_89912870:
	// lbzx r29,r6,r3
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stbx r29,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u8);
loc_89912888:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stwx r8,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u32);
	// bdnz 0x89912888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89912888;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x89912870
	if (ctx.cr6.lt) goto loc_89912870;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lbz r10,530(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// lwz r9,576(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 576);
	// ori r30,r6,1936
	ctx.r30.u64 = ctx.r6.u64 | 1936;
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lbz r8,9518(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9518);
	// ori r4,r4,1940
	ctx.r4.u64 = ctx.r4.u64 | 1940;
	// lbz r6,522(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 522);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// ori r31,r31,1944
	ctx.r31.u64 = ctx.r31.u64 | 1944;
	// lbz r5,6415(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 6415);
	// lis r28,-30276
	ctx.r28.s64 = -1984167936;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbz r7,6034(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 6034);
	// ori r4,r29,1945
	ctx.r4.u64 = ctx.r29.u64 | 1945;
	// lis r27,-30273
	ctx.r27.s64 = -1983971328;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lbz r10,32547(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 32547);
	// ori r3,r3,1946
	ctx.r3.u64 = ctx.r3.u64 | 1946;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r31,12
	ctx.r31.s64 = 786432;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// ori r30,r30,1947
	ctx.r30.u64 = ctx.r30.u64 | 1947;
	// lbz r9,6419(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 6419);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// ori r31,r31,1948
	ctx.r31.u64 = ctx.r31.u64 | 1948;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lbz r8,9654(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 9654);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// stbx r5,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u8);
	// lhz r7,-9488(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + -9488);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// ori r4,r4,1949
	ctx.r4.u64 = ctx.r4.u64 | 1949;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lhz r6,-8692(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + -8692);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// ori r3,r3,1950
	ctx.r3.u64 = ctx.r3.u64 | 1950;
	// ori r10,r28,1952
	ctx.r10.u64 = ctx.r28.u64 | 1952;
	// ori r31,r30,1954
	ctx.r31.u64 = ctx.r30.u64 | 1954;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lhz r5,26520(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 26520);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// lis r30,-30269
	ctx.r30.s64 = -1983709184;
	// lhz r6,9540(r28)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + 9540);
	// ori r31,r29,1956
	ctx.r31.u64 = ctx.r29.u64 | 1956;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lhz r10,-8696(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -8696);
	// lhz r9,12064(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 12064);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lhz r8,-10760(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -10760);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lhz r7,-21220(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + -21220);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lis r30,12
	ctx.r30.s64 = 786432;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// ori r31,r29,1958
	ctx.r31.u64 = ctx.r29.u64 | 1958;
	// lhz r5,20420(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 20420);
	// ori r4,r4,1960
	ctx.r4.u64 = ctx.r4.u64 | 1960;
	// ori r3,r3,1962
	ctx.r3.u64 = ctx.r3.u64 | 1962;
	// ori r30,r30,1964
	ctx.r30.u64 = ctx.r30.u64 | 1964;
	// lis r29,12
	ctx.r29.s64 = 786432;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// sthx r9,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u16);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// sthx r7,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u16);
	// ori r7,r29,1966
	ctx.r7.u64 = ctx.r29.u64 | 1966;
	// ori r31,r31,1968
	ctx.r31.u64 = ctx.r31.u64 | 1968;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lhz r10,-31404(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + -31404);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r4,r4,1970
	ctx.r4.u64 = ctx.r4.u64 | 1970;
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lwz r7,32028(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32028);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// lwz r6,3356(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 3356);
	// lis r27,-30242
	ctx.r27.s64 = -1981939712;
	// lhz r9,12604(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 12604);
	// ori r31,r30,1972
	ctx.r31.u64 = ctx.r30.u64 | 1972;
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lwz r8,6048(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 6048);
	// ori r29,r28,1976
	ctx.r29.u64 = ctx.r28.u64 | 1976;
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lis r28,12
	ctx.r28.s64 = 786432;
	// lwz r5,-21384(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + -21384);
	// ori r10,r3,1980
	ctx.r10.u64 = ctx.r3.u64 | 1980;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// ori r4,r30,1984
	ctx.r4.u64 = ctx.r30.u64 | 1984;
	// ori r3,r28,1988
	ctx.r3.u64 = ctx.r28.u64 | 1988;
	// stwx r8,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// ori r6,r8,1992
	ctx.r6.u64 = ctx.r8.u64 | 1992;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r27,r9,1996
	ctx.r27.u64 = ctx.r9.u64 | 1996;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// ori r4,r4,1993
	ctx.r4.u64 = ctx.r4.u64 | 1993;
	// ori r23,r9,1998
	ctx.r23.u64 = ctx.r9.u64 | 1998;
	// lis r31,-30274
	ctx.r31.s64 = -1984036864;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// ori r3,r3,1994
	ctx.r3.u64 = ctx.r3.u64 | 1994;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// ori r28,r10,1995
	ctx.r28.u64 = ctx.r10.u64 | 1995;
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// ori r25,r8,1997
	ctx.r25.u64 = ctx.r8.u64 | 1997;
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// addis r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 786432;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,12323(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 12323);
	// addis r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 786432;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r8,r8,1999
	ctx.r8.s64 = ctx.r8.s64 + 1999;
	// lbz r9,-31401(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + -31401);
	// addi r7,r7,2511
	ctx.r7.s64 = ctx.r7.s64 + 2511;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lbz r9,531(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 531);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// lbz r9,6026(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6026);
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lbz r9,9643(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 9643);
	// stbx r9,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbz r9,9526(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 9526);
	// stbx r9,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u8);
	// lbz r9,6414(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 6414);
	// stbx r9,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
	// addi r6,r6,12280
	ctx.r6.s64 = ctx.r6.s64 + 12280;
loc_89912B50:
	// lbzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r5,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r4,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89912b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89912B50;
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
loc_89912B84:
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r7,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89912b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89912B84;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r4,-30214
	ctx.r4.s64 = -1980104704;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r10,-9212(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// ori r30,r6,3120
	ctx.r30.u64 = ctx.r6.u64 | 3120;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhz r6,3500(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 3500);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lwz r9,3488(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3488);
	// ori r4,r5,3124
	ctx.r4.u64 = ctx.r5.u64 | 3124;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lwz r5,7924(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7924);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lhz r8,3492(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 3492);
	// ori r3,r3,3128
	ctx.r3.u64 = ctx.r3.u64 | 3128;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// lwz r10,27852(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 27852);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lhz r7,3496(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 3496);
	// ori r29,r29,3130
	ctx.r29.u64 = ctx.r29.u64 | 3130;
	// lis r28,-30273
	ctx.r28.s64 = -1983971328;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// ori r31,r31,3132
	ctx.r31.u64 = ctx.r31.u64 | 3132;
	// lwz r8,12024(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12024);
	// lis r27,-30269
	ctx.r27.s64 = -1983709184;
	// ori r4,r4,3140
	ctx.r4.u64 = ctx.r4.u64 | 3140;
	// sthx r7,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u16);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lwz r7,5756(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 5756);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lis r29,12
	ctx.r29.s64 = 786432;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// ori r3,r3,3144
	ctx.r3.u64 = ctx.r3.u64 | 3144;
	// lwz r9,-10744(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + -10744);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// stwx r5,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// ori r6,r30,3148
	ctx.r6.u64 = ctx.r30.u64 | 3148;
	// ori r31,r29,3152
	ctx.r31.u64 = ctx.r29.u64 | 3152;
	// ori r5,r28,3156
	ctx.r5.u64 = ctx.r28.u64 | 3156;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r7,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89934D80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89934D88;
	__savegprlr_17(ctx, base);
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// li r22,0
	ctx.r22.s64 = 0;
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r18,r11,17,15,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r17,r11,24,25,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7F;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// ble cr6,0x89934fb4
	if (!ctx.cr6.gt) goto loc_89934FB4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r24,87(r1)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// ori r28,r3,65535
	ctx.r28.u64 = ctx.r3.u64 | 65535;
	// clrlwi r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// add r7,r25,r28
	ctx.r7.u64 = ctx.r25.u64 + ctx.r28.u64;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r23,r7,8,0,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_89934DE4:
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// sth r27,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r27.u16);
	// add r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 + ctx.r28.u64;
	// sth r27,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r27.u16);
	// mullw r8,r8,r25
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// mullw r6,r7,r31
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// addi r8,r7,256
	ctx.r8.s64 = ctx.r7.s64 + 256;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rlwinm r8,r7,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// sth r7,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// ori r6,r5,8192
	ctx.r6.u64 = ctx.r5.u64 | 8192;
	// sth r7,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// sth r6,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r6.u16);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// sth r9,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// sth r9,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89934e7c
	if (ctx.cr6.eq) goto loc_89934E7C;
	// rlwinm r9,r9,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934e7c
	if (!ctx.cr6.gt) goto loc_89934E7C;
	// li r7,6144
	ctx.r7.s64 = 6144;
loc_89934E7C:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89934ea0
	if (ctx.cr6.eq) goto loc_89934EA0;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934ea0
	if (!ctx.cr6.gt) goto loc_89934EA0;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// ori r7,r9,1024
	ctx.r7.u64 = ctx.r9.u64 | 1024;
loc_89934EA0:
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r8,r3,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89934ee8
	if (ctx.cr6.eq) goto loc_89934EE8;
	// rlwinm r9,r9,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934ee8
	if (!ctx.cr6.gt) goto loc_89934EE8;
	// li r7,6144
	ctx.r7.s64 = 6144;
loc_89934EE8:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89934f0c
	if (ctx.cr6.eq) goto loc_89934F0C;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934f0c
	if (!ctx.cr6.gt) goto loc_89934F0C;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// ori r7,r9,1024
	ctx.r7.u64 = ctx.r9.u64 | 1024;
loc_89934F0C:
	// lhz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r9,r20,16
	ctx.r9.u64 = ctx.r20.u32 & 0xFFFF;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// beq cr6,0x89934f9c
	if (ctx.cr6.eq) goto loc_89934F9C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89934f9c
	if (!ctx.cr6.eq) goto loc_89934F9C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x89934f84
	if (!ctx.cr6.gt) goto loc_89934F84;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// neg r8,r31
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
loc_89934F84:
	// extsb r9,r18
	ctx.r9.s64 = ctx.r18.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89934f9c
	if (ctx.cr6.eq) goto loc_89934F9C;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_89934F9C:
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// sthu r22,18(r11)
	ea = 18 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r22.u16);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r19
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x89934de4
	if (ctx.cr6.lt) goto loc_89934DE4;
loc_89934FB4:
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936360) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// beq cr6,0x89936390
	if (ctx.cr6.eq) goto loc_89936390;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,7934(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7934);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_89936390:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-7664
	ctx.r8.s64 = ctx.r10.s64 + -7664;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// addi r10,r7,-21104
	ctx.r10.s64 = ctx.r7.s64 + -21104;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r6,-10736
	ctx.r3.s64 = ctx.r6.s64 + -10736;
	// addi r8,r5,-26152
	ctx.r8.s64 = ctx.r5.s64 + -26152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r7,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// stbx r5,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899368B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899368c8
	if (!ctx.cr6.eq) goto loc_899368C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899368C8:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x8993692c
	if (!ctx.cr6.lt) goto loc_8993692C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-21104
	ctx.r11.s64 = ctx.r11.s64 + -21104;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993692c
	if (ctx.cr6.eq) goto loc_8993692C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bgt 0x89936930
	if (ctx.cr0.gt) goto loc_89936930;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_8993692C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_89936930:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89937310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89937318;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r9,r30,649
	ctx.r9.s64 = ctx.r30.s64 + 649;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89937434
	if (ctx.cr6.eq) goto loc_89937434;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// addi r7,r30,650
	ctx.r7.s64 = ctx.r30.s64 + 650;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r6,18992
	ctx.r8.s64 = ctx.r6.s64 + 18992;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// rlwinm r10,r4,31,1,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFE;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// li r28,2
	ctx.r28.s64 = 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,-9212(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + -9212);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r25,r10,20077
	ctx.r25.u64 = ctx.r10.u64 | 20077;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_89937398:
	// mullw r10,r27,r25
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// lhz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// lhz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lhzu r11,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r27,r10,12345
	ctx.r27.s64 = ctx.r10.s64 + 12345;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// clrlwi r6,r4,27
	ctx.r6.u64 = ctx.r4.u32 & 0x1F;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r6,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhzx r7,r10,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r6,r8,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// rlwinm r10,r11,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// bl 0x899d7bd8
	ctx.lr = 0x89937420;
	sub_899D7BD8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x89937398
	if (!ctx.cr0.eq) goto loc_89937398;
	// stw r27,-9212(r24)
	REX_STORE_U32(ctx.r24.u32 + -9212, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_89937434:
	// addi r11,r30,632
	ctx.r11.s64 = ctx.r30.s64 + 632;
	// addi r10,r30,631
	ctx.r10.s64 = ctx.r30.s64 + 631;
	// addi r8,r30,630
	ctx.r8.s64 = ctx.r30.s64 + 630;
	// addi r6,r30,629
	ctx.r6.s64 = ctx.r30.s64 + 629;
	// addi r7,r30,625
	ctx.r7.s64 = ctx.r30.s64 + 625;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// lbzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// or r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r5,r10,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// bne cr6,0x8993758c
	if (!ctx.cr6.eq) goto loc_8993758C;
	// addi r10,r30,648
	ctx.r10.s64 = ctx.r30.s64 + 648;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// addi r5,r11,18984
	ctx.r5.s64 = ctx.r11.s64 + 18984;
	// addi r4,r6,-2488
	ctx.r4.s64 = ctx.r6.s64 + -2488;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// li r26,10
	ctx.r26.s64 = 10;
	// lwzx r23,r31,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r28,r30,646
	ctx.r28.s64 = ctx.r30.s64 + 646;
	// lbzx r5,r6,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// addi r27,r30,650
	ctx.r27.s64 = ctx.r30.s64 + 650;
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// oris r8,r23,1024
	ctx.r8.u64 = ctx.r23.u64 | 67108864;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r29,7008
	ctx.r11.s64 = ctx.r29.s64 + 7008;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stbx r26,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// li r25,0
	ctx.r25.s64 = 0;
	// lbzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// stbx r25,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u8);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// subfc r9,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// eqv r8,r6,r11
	ctx.r8.u64 = ~(ctx.r6.u64 ^ ctx.r11.u64);
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// mulli r10,r7,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x899362a0
	ctx.lr = 0x89937534;
	sub_899362A0(ctx, base);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lwz r11,3504(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// beq cr6,0x8993757c
	if (ctx.cr6.eq) goto loc_8993757C;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// bgt cr6,0x8993755c
	if (ctx.cr6.gt) goto loc_8993755C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8993755C:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8993758c
	if (!ctx.cr6.lt) goto loc_8993758C;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_8993757C:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x8993758c
	if (!ctx.cr6.gt) goto loc_8993758C;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_8993758C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993B9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8993B9D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r27,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(696));
	// addi r26,r30,654
	ctx.r26.s64 = ctx.r30.s64 + 654;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbzx r29,r31,r26
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x8993baec
	if (ctx.cr6.lt) goto loc_8993BAEC;
	// bl 0x899336a8
	ctx.lr = 0x8993B9FC;
	sub_899336A8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993baec
	if (ctx.cr6.eq) goto loc_8993BAEC;
	// addi r11,r30,646
	ctx.r11.s64 = ctx.r30.s64 + 646;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r29,12267(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 12267);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993ba4c
	if (!ctx.cr6.eq) goto loc_8993BA4C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993ba4c
	if (!ctx.cr6.eq) goto loc_8993BA4C;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r9,9527(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 9527);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993ba4c
	if (ctx.cr6.eq) goto loc_8993BA4C;
	// li r10,128
	ctx.r10.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8995b7d0
	ctx.lr = 0x8993BA4C;
	sub_8995B7D0(ctx, base);
loc_8993BA4C:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993ba78
	if (!ctx.cr6.eq) goto loc_8993BA78;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32546(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32546);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993ba78
	if (!ctx.cr6.eq) goto loc_8993BA78;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993baf4
	if (ctx.cr6.eq) goto loc_8993BAF4;
loc_8993BA78:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,19100
	ctx.r9.s64 = ctx.r10.s64 + 19100;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lis r4,64
	ctx.r4.s64 = 4194304;
	// addis r3,r5,2
	ctx.r3.s64 = ctx.r5.s64 + 131072;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r10,-21584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// ble cr6,0x8993bad4
	if (!ctx.cr6.gt) goto loc_8993BAD4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8995c688
	ctx.lr = 0x8993BAD4;
	sub_8995C688(ctx, base);
loc_8993BAD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89937090
	ctx.lr = 0x8993BADC;
	sub_89937090(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899370f0
	ctx.lr = 0x8993BAE4;
	sub_899370F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8993BAEC:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
loc_8993BAF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993CC28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8993CC30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r29,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(696));
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addi r10,r11,6400
	ctx.r10.s64 = ctx.r11.s64 + 6400;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// lbzx r26,r29,r10
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x8993cf90
	ctx.lr = 0x8993CC60;
	sub_8993CF90(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lwz r11,3508(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 3508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993ccb8
	if (ctx.cr6.eq) goto loc_8993CCB8;
	// addi r11,r30,658
	ctx.r11.s64 = ctx.r30.s64 + 658;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993ccb8
	if (!ctx.cr6.eq) goto loc_8993CCB8;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// addi r11,r11,-14840
	ctx.r11.s64 = ctx.r11.s64 + -14840;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8993ccb0
	if (!ctx.cr6.eq) goto loc_8993CCB0;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lbz r9,32018(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 32018);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8993ccb8
	if (!ctx.cr6.eq) goto loc_8993CCB8;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993ccb8
	if (ctx.cr6.eq) goto loc_8993CCB8;
loc_8993CCB0:
	// addi r11,r30,655
	ctx.r11.s64 = ctx.r30.s64 + 655;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
loc_8993CCB8:
	// addi r6,r30,658
	ctx.r6.s64 = ctx.r30.s64 + 658;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// ble cr6,0x8993ccd8
	if (!ctx.cr6.gt) goto loc_8993CCD8;
	// addi r11,r30,664
	ctx.r11.s64 = ctx.r30.s64 + 664;
	// li r10,9
	ctx.r10.s64 = 9;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8993cce0
	goto loc_8993CCE0;
loc_8993CCD8:
	// addi r10,r30,664
	ctx.r10.s64 = ctx.r30.s64 + 664;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8993CCE0:
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r4,r10,19208
	ctx.r4.s64 = ctx.r10.s64 + 19208;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r11,19144
	ctx.r7.s64 = ctx.r11.s64 + 19144;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-31436(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -31436);
	// addi r9,r30,668
	ctx.r9.s64 = ctx.r30.s64 + 668;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r3,r30,643
	ctx.r3.s64 = ctx.r30.s64 + 643;
	// lwzx r25,r10,r7
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r24,r30,648
	ctx.r24.s64 = ctx.r30.s64 + 648;
	// addi r23,r30,672
	ctx.r23.s64 = ctx.r30.s64 + 672;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r9,r30,680
	ctx.r9.s64 = ctx.r30.s64 + 680;
	// stbx r7,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u8);
	// stwx r25,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r25.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stwx r25,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r25.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stbx r22,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r22.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
loc_8993CD5C:
	// stbx r28,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8993cd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8993CD5C;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// lbz r5,586(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8993ce04
	if (!ctx.cr6.eq) goto loc_8993CE04;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,12267(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12267);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993ce04
	if (!ctx.cr6.eq) goto loc_8993CE04;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// addi r9,r30,635
	ctx.r9.s64 = ctx.r30.s64 + 635;
	// lbz r10,12322(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12322);
	// lbz r7,32546(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 32546);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// beq cr6,0x8993ce0c
	if (ctx.cr6.eq) goto loc_8993CE0C;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993cddc
	if (ctx.cr6.eq) goto loc_8993CDDC;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsb r10,r26
	ctx.r10.s64 = ctx.r26.s8;
	// addi r11,r11,-2532
	ctx.r11.s64 = ctx.r11.s64 + -2532;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8993ce0c
	goto loc_8993CE0C;
loc_8993CDDC:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// addi r10,r10,-2532
	ctx.r10.s64 = ctx.r10.s64 + -2532;
	// addi r7,r9,520
	ctx.r7.s64 = ctx.r9.s64 + 520;
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stbx r3,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// b 0x8993ce0c
	goto loc_8993CE0C;
loc_8993CE04:
	// addi r11,r30,635
	ctx.r11.s64 = ctx.r30.s64 + 635;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8993CE0C:
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,659
	ctx.r7.s64 = ctx.r30.s64 + 659;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stbx r28,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u8);
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r28,3892(r4)
	REX_STORE_U32(ctx.r4.u32 + 3892, ctx.r28.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// subfe r11,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// bgt cr6,0x8993cf88
	if (ctx.cr6.gt) goto loc_8993CF88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8993ceac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8993CEAC;
	// bdzf 4*cr6+eq,0x8993cef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8993CEF8;
	// bne cr6,0x8993cf44
	if (!ctx.cr6.eq) goto loc_8993CF44;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,-6872
	ctx.r10.s64 = ctx.r10.s64 + -6872;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// addi r3,r10,-7000
	ctx.r3.s64 = ctx.r10.s64 + -7000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// addi r11,r11,-19844
	ctx.r11.s64 = ctx.r11.s64 + -19844;
	// addi r5,r11,2132
	ctx.r5.s64 = ctx.r11.s64 + 2132;
	// beq cr6,0x8993ce9c
	if (ctx.cr6.eq) goto loc_8993CE9C;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// bl 0x89957ea0
	ctx.lr = 0x8993CE94;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CE9C:
	// addi r4,r11,2112
	ctx.r4.s64 = ctx.r11.s64 + 2112;
	// bl 0x89957ea0
	ctx.lr = 0x8993CEA4;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CEAC:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,-6872
	ctx.r10.s64 = ctx.r10.s64 + -6872;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// addi r3,r10,-3864
	ctx.r3.s64 = ctx.r10.s64 + -3864;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// addi r11,r11,-19844
	ctx.r11.s64 = ctx.r11.s64 + -19844;
	// addi r5,r11,1460
	ctx.r5.s64 = ctx.r11.s64 + 1460;
	// beq cr6,0x8993cee8
	if (ctx.cr6.eq) goto loc_8993CEE8;
	// addi r4,r11,1432
	ctx.r4.s64 = ctx.r11.s64 + 1432;
	// bl 0x89957ea0
	ctx.lr = 0x8993CEE0;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CEE8:
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// bl 0x89957ea0
	ctx.lr = 0x8993CEF0;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CEF8:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-6872
	ctx.r10.s64 = ctx.r10.s64 + -6872;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// addi r3,r10,-2024
	ctx.r3.s64 = ctx.r10.s64 + -2024;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// addi r11,r11,-19844
	ctx.r11.s64 = ctx.r11.s64 + -19844;
	// addi r5,r11,740
	ctx.r5.s64 = ctx.r11.s64 + 740;
	// beq cr6,0x8993cf34
	if (ctx.cr6.eq) goto loc_8993CF34;
	// addi r4,r11,720
	ctx.r4.s64 = ctx.r11.s64 + 720;
	// bl 0x89957ea0
	ctx.lr = 0x8993CF2C;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CF34:
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x89957ea0
	ctx.lr = 0x8993CF3C;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CF44:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r10,-6872
	ctx.r3.s64 = ctx.r10.s64 + -6872;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// beq cr6,0x8993cf7c
	if (ctx.cr6.eq) goto loc_8993CF7C;
	// addi r11,r11,-19844
	ctx.r11.s64 = ctx.r11.s64 + -19844;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x89957ea0
	ctx.lr = 0x8993CF74;
	sub_89957EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8993CF7C:
	// addi r4,r11,-19844
	ctx.r4.s64 = ctx.r11.s64 + -19844;
	// addi r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 + 28;
	// bl 0x89957ea0
	ctx.lr = 0x8993CF88;
	sub_89957EA0(ctx, base);
loc_8993CF88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899412B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x899412C0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stb r3,9527(r11)
	REX_STORE_U8(ctx.r11.u32 + 9527, ctx.r3.u8);
	// bl 0x89915ec0
	ctx.lr = 0x899412D0;
	sub_89915EC0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x899412D4;
	sub_89917740(ctx, base);
	// bl 0x8992bf38
	ctx.lr = 0x899412D8;
	sub_8992BF38(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x899412DC;
	sub_8991ACF0(ctx, base);
	// bl 0x8991a4a8
	ctx.lr = 0x899412E0;
	sub_8991A4A8(ctx, base);
	// bl 0x899193a8
	ctx.lr = 0x899412E4;
	sub_899193A8(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x899412E8;
	sub_8991ACF0(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r9,9448
	ctx.r11.s64 = ctx.r9.s64 + 9448;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89941300:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x89941300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89941300;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x8994131C;
	sub_899DCCA0(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x89941320;
	sub_89918AD0(ctx, base);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lis r18,-30274
	ctx.r18.s64 = -1984036864;
	// lis r17,-30253
	ctx.r17.s64 = -1982660608;
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// lis r20,-30274
	ctx.r20.s64 = -1984036864;
	// addi r22,r5,7384
	ctx.r22.s64 = ctx.r5.s64 + 7384;
	// addi r21,r4,27280
	ctx.r21.s64 = ctx.r4.s64 + 27280;
	// addi r27,r6,25128
	ctx.r27.s64 = ctx.r6.s64 + 25128;
	// addi r26,r7,12640
	ctx.r26.s64 = ctx.r7.s64 + 12640;
	// addi r25,r8,8160
	ctx.r25.s64 = ctx.r8.s64 + 8160;
	// addi r24,r9,-10320
	ctx.r24.s64 = ctx.r9.s64 + -10320;
	// addi r23,r10,7640
	ctx.r23.s64 = ctx.r10.s64 + 7640;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
loc_89941374:
	// bl 0x899301c0
	ctx.lr = 0x89941378;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994137C;
	sub_899309D8(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89941380;
	sub_899306A8(ctx, base);
	// bl 0x8991dbc0
	ctx.lr = 0x89941384;
	sub_8991DBC0(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x89941388;
	sub_89917AA0(ctx, base);
	// bl 0x8991ae78
	ctx.lr = 0x8994138C;
	sub_8991AE78(ctx, base);
	// bl 0x89919778
	ctx.lr = 0x89941390;
	sub_89919778(ctx, base);
	// bl 0x8992c6c8
	ctx.lr = 0x89941394;
	sub_8992C6C8(ctx, base);
	// bl 0x89916028
	ctx.lr = 0x89941398;
	sub_89916028(ctx, base);
	// bl 0x89917da8
	ctx.lr = 0x8994139C;
	sub_89917DA8(ctx, base);
	// bl 0x8991af98
	ctx.lr = 0x899413A0;
	sub_8991AF98(ctx, base);
	// bl 0x89919888
	ctx.lr = 0x899413A4;
	sub_89919888(ctx, base);
	// bl 0x8992dfc0
	ctx.lr = 0x899413A8;
	sub_8992DFC0(ctx, base);
	// bl 0x8992de98
	ctx.lr = 0x899413AC;
	sub_8992DE98(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_899413B4:
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899413cc
	if (ctx.cr6.eq) goto loc_899413CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89917e48
	ctx.lr = 0x899413CC;
	sub_89917E48(ctx, base);
loc_899413CC:
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899413e0
	if (ctx.cr6.eq) goto loc_899413E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992d1c8
	ctx.lr = 0x899413E0;
	sub_8992D1C8(ctx, base);
loc_899413E0:
	// lhzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899413f4
	if (ctx.cr6.eq) goto loc_899413F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991b318
	ctx.lr = 0x899413F4;
	sub_8991B318(ctx, base);
loc_899413F4:
	// lhzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941408
	if (ctx.cr6.eq) goto loc_89941408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89919a48
	ctx.lr = 0x89941408;
	sub_89919A48(ctx, base);
loc_89941408:
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994141c
	if (ctx.cr6.eq) goto loc_8994141C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992cb10
	ctx.lr = 0x8994141C;
	sub_8992CB10(ctx, base);
loc_8994141C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x899413b4
	if (ctx.cr6.lt) goto loc_899413B4;
	// lbz r11,530(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 530);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994144c
	if (ctx.cr6.eq) goto loc_8994144C;
	// bl 0x89926b10
	ctx.lr = 0x89941440;
	sub_89926B10(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x89930720
	ctx.lr = 0x8994144C;
	sub_89930720(ctx, base);
loc_8994144C:
	// bl 0x899319c8
	ctx.lr = 0x89941450;
	sub_899319C8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994146c
	if (ctx.cr6.eq) goto loc_8994146C;
	// lbz r11,128(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 128);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899414c0
	if (!ctx.cr6.eq) goto loc_899414C0;
loc_8994146C:
	// lwz r11,696(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941488
	if (ctx.cr6.eq) goto loc_89941488;
	// lbz r11,128(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 128);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899414c0
	if (!ctx.cr6.eq) goto loc_899414C0;
loc_89941488:
	// lwz r11,7924(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 7924);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// bne cr6,0x89941374
	if (!ctx.cr6.eq) goto loc_89941374;
	// lwz r11,-10064(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -10064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89941374
	if (!ctx.cr6.eq) goto loc_89941374;
	// lwz r11,544(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899414c0
	if (ctx.cr6.eq) goto loc_899414C0;
	// lbz r11,12271(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 12271);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89941374
	if (!ctx.cr6.eq) goto loc_89941374;
loc_899414C0:
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,586(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 586);
	// stb r11,12275(r8)
	REX_STORE_U8(ctx.r8.u32 + 12275, ctx.r11.u8);
	// stb r10,8419(r7)
	REX_STORE_U8(ctx.r7.u32 + 8419, ctx.r10.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899432B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x899432C0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-21584(r9)
	REX_STORE_U32(ctx.r9.u32 + -21584, ctx.r11.u32);
	// stw r10,12000(r8)
	REX_STORE_U32(ctx.r8.u32 + 12000, ctx.r10.u32);
	// bl 0x89942f18
	ctx.lr = 0x899432E0;
	sub_89942F18(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r18,r11,3632
	ctx.r18.s64 = ctx.r11.s64 + 3632;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
loc_899432F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899432f0
	if (!ctx.cr6.eq) goto loc_899432F0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r5,32639
	ctx.r5.s64 = 2139029504;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// ori r29,r5,32768
	ctx.r29.u64 = ctx.r5.u64 | 32768;
	// lis r19,-30214
	ctx.r19.s64 = -1980104704;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lis r23,-30276
	ctx.r23.s64 = -1984167936;
	// addi r27,r11,-4656
	ctx.r27.s64 = ctx.r11.s64 + -4656;
	// addi r26,r10,12280
	ctx.r26.s64 = ctx.r10.s64 + 12280;
	// addi r28,r9,-31400
	ctx.r28.s64 = ctx.r9.s64 + -31400;
	// addi r22,r8,20552
	ctx.r22.s64 = ctx.r8.s64 + 20552;
	// addi r21,r7,25128
	ctx.r21.s64 = ctx.r7.s64 + 25128;
	// addi r20,r6,-5044
	ctx.r20.s64 = ctx.r6.s64 + -5044;
loc_89943340:
	// bl 0x899301c0
	ctx.lr = 0x89943344;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89943348;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x89943350;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89943354;
	sub_899306A8(ctx, base);
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r28,4908
	ctx.r10.s64 = ctx.r28.s64 + 4908;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89943388
	if (ctx.cr6.eq) goto loc_89943388;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89943370:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r29.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943370
	if (!ctx.cr6.eq) goto loc_89943370;
loc_89943388:
	// lbz r11,-28(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + -28);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r27,-28
	ctx.r10.s64 = ctx.r27.s64 + -28;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r9,38(r26)
	REX_STORE_U8(ctx.r26.u32 + 38, ctx.r9.u8);
	// addi r9,r28,268
	ctx.r9.s64 = ctx.r28.s64 + 268;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899433c4
	if (ctx.cr6.eq) goto loc_899433C4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899433AC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r29.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899433ac
	if (!ctx.cr6.eq) goto loc_899433AC;
loc_899433C4:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r9,2(r26)
	REX_STORE_U8(ctx.r26.u32 + 2, ctx.r9.u8);
	// addi r9,r28,148
	ctx.r9.s64 = ctx.r28.s64 + 148;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89943400
	if (ctx.cr6.eq) goto loc_89943400;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899433E8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r29.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899433e8
	if (!ctx.cr6.eq) goto loc_899433E8;
loc_89943400:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r21,704
	ctx.r31.s64 = ctx.r21.s64 + 704;
	// stb r11,1(r26)
	REX_STORE_U8(ctx.r26.u32 + 1, ctx.r11.u8);
loc_8994340C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899434a0
	if (ctx.cr6.eq) goto loc_899434A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,22
	ctx.r7.s64 = 22;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r17,8(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwzx r30,r3,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8993afc0
	ctx.lr = 0x89943470;
	sub_8993AFC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,668(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 668);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x89939350
	ctx.lr = 0x899434A0;
	sub_89939350(ctx, base);
loc_899434A0:
	// addi r31,r31,-696
	ctx.r31.s64 = ctx.r31.s64 + -696;
	// addi r11,r21,8
	ctx.r11.s64 = ctx.r21.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8994340c
	if (!ctx.cr6.lt) goto loc_8994340C;
	// bl 0x89944708
	ctx.lr = 0x899434B4;
	sub_89944708(ctx, base);
	// bl 0x89943898
	ctx.lr = 0x899434B8;
	sub_89943898(ctx, base);
	// bl 0x89943598
	ctx.lr = 0x899434BC;
	sub_89943598(ctx, base);
	// lhz r11,12264(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 12264);
	// lhz r10,-31952(r24)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + -31952);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lhz r9,32032(r23)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 32032);
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r11,r9,-4096
	ctx.r11.s64 = ctx.r9.s64 + -4096;
	// subfe r5,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89943538
	if (ctx.cr6.eq) goto loc_89943538;
	// lbz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r10,r28,424
	ctx.r10.s64 = ctx.r28.s64 + 424;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89943530
	if (ctx.cr6.eq) goto loc_89943530;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89943518:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r29.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943518
	if (!ctx.cr6.eq) goto loc_89943518;
loc_89943530:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r26)
	REX_STORE_U8(ctx.r26.u32 + 3, ctx.r11.u8);
loc_89943538:
	// lbz r11,128(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 128);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,3731(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 3731);
	// beq cr6,0x89943558
	if (ctx.cr6.eq) goto loc_89943558;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,3731(r19)
	REX_STORE_U8(ctx.r19.u32 + 3731, ctx.r11.u8);
loc_89943558:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89943568
	if (ctx.cr6.eq) goto loc_89943568;
	// bl 0x8992a040
	ctx.lr = 0x89943568;
	sub_8992A040(ctx, base);
loc_89943568:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x89943574;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89943578;
	sub_899319C8(ctx, base);
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89943340
	if (ctx.cr6.eq) goto loc_89943340;
	// bl 0x89943148
	ctx.lr = 0x8994358C;
	sub_89943148(ctx, base);
	// bl 0x89949960
	ctx.lr = 0x89943590;
	sub_89949960(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89946E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89946E08;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r30,-30242
	ctx.r30.s64 = -1981939712;
	// stw r9,3532(r8)
	REX_STORE_U32(ctx.r8.u32 + 3532, ctx.r9.u32);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lbz r11,25(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,-25896(r3)
	REX_STORE_U32(ctx.r3.u32 + -25896, ctx.r9.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r9,12276(r31)
	REX_STORE_U32(ctx.r31.u32 + 12276, ctx.r9.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r9,-21584(r30)
	REX_STORE_U32(ctx.r30.u32 + -21584, ctx.r9.u32);
	// clrlwi r14,r10,16
	ctx.r14.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// sth r9,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// addi r16,r11,5344
	ctx.r16.s64 = ctx.r11.s64 + 5344;
	// sth r9,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// li r5,32
	ctx.r5.s64 = 32;
	// sth r9,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// addi r11,r10,20376
	ctx.r11.s64 = ctx.r10.s64 + 20376;
	// sth r6,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// li r4,-1
	ctx.r4.s64 = -1;
	// sth r6,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r6.u16);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// sth r5,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// sth r4,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// sth r4,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r4.u16);
	// addi r10,r9,12280
	ctx.r10.s64 = ctx.r9.s64 + 12280;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// sth r14,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r14.u16);
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// addi r9,r7,21288
	ctx.r9.s64 = ctx.r7.s64 + 21288;
	// stw r14,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// stw r16,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r16.u32);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r11,r29,21164
	ctx.r11.s64 = ctx.r29.s64 + 21164;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// addi r17,r8,-31400
	ctx.r17.s64 = ctx.r8.s64 + -31400;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// stw r17,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// addi r8,r6,21184
	ctx.r8.s64 = ctx.r6.s64 + 21184;
	// addi r7,r5,21204
	ctx.r7.s64 = ctx.r5.s64 + 21204;
	// addi r6,r4,32560
	ctx.r6.s64 = ctx.r4.s64 + 32560;
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r5,r3,7128
	ctx.r5.s64 = ctx.r3.s64 + 7128;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r10,r28,21160
	ctx.r10.s64 = ctx.r28.s64 + 21160;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r4,r31,20424
	ctx.r4.s64 = ctx.r31.s64 + 20424;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r9,r27,-31952
	ctx.r9.s64 = ctx.r27.s64 + -31952;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r8,r11,20432
	ctx.r8.s64 = ctx.r11.s64 + 20432;
	// addi r7,r10,21240
	ctx.r7.s64 = ctx.r10.s64 + 21240;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// ori r23,r6,32896
	ctx.r23.u64 = ctx.r6.u64 | 32896;
	// ori r15,r5,7
	ctx.r15.u64 = ctx.r5.u64 | 7;
loc_89946F6C:
	// bl 0x899301c0
	ctx.lr = 0x89946F70;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89946F74;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x89946F7C;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89946F80;
	sub_899306A8(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x89946F90;
	sub_89931DD8(ctx, base);
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89946fe0
	if (ctx.cr6.eq) goto loc_89946FE0;
	// lbz r10,128(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 128);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89946fc4
	if (ctx.cr6.eq) goto loc_89946FC4;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// xoris r6,r9,256
	ctx.r6.u64 = ctx.r9.u64 ^ 16777216;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
loc_89946FC4:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946fe0
	if (ctx.cr6.eq) goto loc_89946FE0;
	// lhz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// xori r26,r9,1
	ctx.r26.u64 = ctx.r9.u64 ^ 1;
	// sth r26,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r26.u16);
	// b 0x89946fe4
	goto loc_89946FE4;
loc_89946FE0:
	// lhz r26,100(r1)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
loc_89946FE4:
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x8994786c
	if (ctx.cr6.eq) goto loc_8994786C;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x899477b8
	if (ctx.cr6.eq) goto loc_899477B8;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// beq cr6,0x89947704
	if (ctx.cr6.eq) goto loc_89947704;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r9,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r11,-4096
	ctx.r5.s64 = ctx.r11.s64 + -4096;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// and r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 & ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947104
	if (ctx.cr6.eq) goto loc_89947104;
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// lbz r11,256(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x8994707c
	if (ctx.cr6.eq) goto loc_8994707C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r10,r14
	ctx.r7.u64 = ctx.r10.u64 + ctx.r14.u64;
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// cmplwi cr6,r10,1021
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1021, ctx.xer);
	// blt cr6,0x8994707c
	if (ctx.cr6.lt) goto loc_8994707C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
loc_8994707C:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899470bc
	if (ctx.cr6.eq) goto loc_899470BC;
	// lhz r6,90(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// sth r7,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899470b4
	if (ctx.cr6.eq) goto loc_899470B4;
	// cmplwi cr6,r11,1021
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1021, ctx.xer);
	// blt cr6,0x899470bc
	if (ctx.cr6.lt) goto loc_899470BC;
loc_899470B4:
	// li r11,1020
	ctx.r11.s64 = 1020;
	// sth r11,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
loc_899470BC:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899470e0
	if (ctx.cr6.eq) goto loc_899470E0;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x899470e0
	if (!ctx.cr6.lt) goto loc_899470E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
loc_899470E0:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947104
	if (ctx.cr6.eq) goto loc_89947104;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -24, ctx.xer);
	// ble cr6,0x89947104
	if (!ctx.cr6.gt) goto loc_89947104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
loc_89947104:
	// lhz r27,82(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
loc_89947108:
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lhz r21,94(r1)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// extsh r19,r21
	ctx.r19.s64 = ctx.r21.s16;
	// subf r9,r19,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r19.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8994713c
	if (!ctx.cr6.gt) goto loc_8994713C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r21,16
	ctx.r10.u64 = ctx.r21.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r27,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
loc_8994713C:
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// lhz r24,86(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r18,r22
	ctx.r18.s64 = ctx.r22.s16;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// subf r9,r18,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r18.u64;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89947174
	if (!ctx.cr6.gt) goto loc_89947174;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r24,r9,16
	ctx.r24.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r24,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
loc_89947174:
	// lhz r6,90(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r6,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899471a8
	if (!ctx.cr6.eq) goto loc_899471A8;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x89947230
	if (ctx.cr6.eq) goto loc_89947230;
loc_899471A8:
	// bl 0x89933c68
	ctx.lr = 0x899471AC;
	sub_89933C68(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bge cr6,0x89947230
	if (!ctx.cr6.lt) goto loc_89947230;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhzx r8,r29,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | ctx.r25.u64;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r7,r4
	REX_STORE_U16(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r8,-28671
	ctx.r8.s64 = -28671;
	// sth r28,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r28.u16);
	// sthx r3,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u16);
	// sthx r10,r7,r11
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u16);
	// sthx r8,r9,r29
	REX_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u16);
loc_89947230:
	// rlwinm r9,r6,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFF;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r11,r6,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r14,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r9,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r11,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r11,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r17,4896
	ctx.r5.s64 = ctx.r17.s64 + 4896;
	// lwzx r9,r8,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwzx r8,r7,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// lwzx r7,r6,r16
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r6,r4,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// stw r9,4892(r17)
	REX_STORE_U32(ctx.r17.u32 + 4892, ctx.r9.u32);
	// stw r8,4888(r17)
	REX_STORE_U32(ctx.r17.u32 + 4888, ctx.r8.u32);
	// stw r7,4884(r17)
	REX_STORE_U32(ctx.r17.u32 + 4884, ctx.r7.u32);
	// stw r6,4880(r17)
	REX_STORE_U32(ctx.r17.u32 + 4880, ctx.r6.u32);
	// beq cr6,0x899472a0
	if (ctx.cr6.eq) goto loc_899472A0;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_89947284:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addis r7,r11,-16320
	ctx.r7.s64 = ctx.r11.s64 + -1069547520;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947284
	if (!ctx.cr6.eq) goto loc_89947284;
loc_899472A0:
	// lwz r29,152(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// li r5,9
	ctx.r5.s64 = 9;
	// subf r10,r10,r14
	ctx.r10.u64 = ctx.r14.u64 - ctx.r10.u64;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// stb r11,38(r29)
	REX_STORE_U8(ctx.r29.u32 + 38, ctx.r11.u8);
	// li r4,38
	ctx.r4.s64 = 38;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x89948d60
	ctx.lr = 0x899472CC;
	sub_89948D60(ctx, base);
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r17,4916
	ctx.r9.s64 = ctx.r17.s64 + 4916;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947310
	if (ctx.cr6.eq) goto loc_89947310;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899472F4:
	// addis r11,r11,16576
	ctx.r11.s64 = ctx.r11.s64 + 1086324736;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
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
	// bne cr6,0x899472f4
	if (!ctx.cr6.eq) goto loc_899472F4;
loc_89947310:
	// extsb r9,r26
	ctx.r9.s64 = ctx.r26.s8;
	// lwz r28,164(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r11,38(r29)
	REX_STORE_U8(ctx.r29.u32 + 38, ctx.r11.u8);
	// rlwinm r11,r8,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947350
	if (ctx.cr6.eq) goto loc_89947350;
	// addi r9,r17,4756
	ctx.r9.s64 = ctx.r17.s64 + 4756;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89947340:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89947340
	if (!ctx.cr6.eq) goto loc_89947340;
loc_89947350:
	// clrlwi r25,r26,16
	ctx.r25.u64 = ctx.r26.u32 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r11,37(r29)
	REX_STORE_U8(ctx.r29.u32 + 37, ctx.r11.u8);
	// beq cr6,0x899473f4
	if (ctx.cr6.eq) goto loc_899473F4;
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x89947374;
	sub_89931DD8(ctx, base);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// rlwinm r10,r24,30,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r4,r27,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r24,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r9,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r22,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// rlwinm r3,r22,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r29)
	REX_STORE_U8(ctx.r29.u32 + 36, ctx.r11.u8);
	// lwzx r9,r10,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r11,r4,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// stb r10,35(r29)
	REX_STORE_U8(ctx.r29.u32 + 35, ctx.r10.u8);
	// lwzx r8,r8,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// lwzx r7,r7,r16
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// lwzx r6,r6,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// lwzx r5,r5,r16
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// lwzx r10,r27,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r16.u32);
	// lwzx r4,r3,r16
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r16.u32);
	// stw r9,4500(r17)
	REX_STORE_U32(ctx.r17.u32 + 4500, ctx.r9.u32);
	// stw r8,4504(r17)
	REX_STORE_U32(ctx.r17.u32 + 4504, ctx.r8.u32);
	// stw r7,4720(r17)
	REX_STORE_U32(ctx.r17.u32 + 4720, ctx.r7.u32);
	// stw r6,4724(r17)
	REX_STORE_U32(ctx.r17.u32 + 4724, ctx.r6.u32);
	// stw r11,4628(r17)
	REX_STORE_U32(ctx.r17.u32 + 4628, ctx.r11.u32);
	// stw r10,4632(r17)
	REX_STORE_U32(ctx.r17.u32 + 4632, ctx.r10.u32);
	// stw r5,4592(r17)
	REX_STORE_U32(ctx.r17.u32 + 4592, ctx.r5.u32);
	// stw r4,4596(r17)
	REX_STORE_U32(ctx.r17.u32 + 4596, ctx.r4.u32);
loc_899473F4:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r10,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947434
	if (ctx.cr6.eq) goto loc_89947434;
	// addi r9,r17,4772
	ctx.r9.s64 = ctx.r17.s64 + 4772;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89947424:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89947424
	if (!ctx.cr6.eq) goto loc_89947424;
loc_89947434:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// extsh r7,r21
	ctx.r7.s64 = ctx.r21.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r24,7120(r9)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// lwz r27,8152(r8)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 8152);
	// srawi r21,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r31.s32 >> 2;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stb r10,37(r29)
	REX_STORE_U8(ctx.r29.u32 + 37, ctx.r10.u8);
	// lwz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9520);
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x899475b0
	if (!ctx.cr6.lt) goto loc_899475B0;
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r20,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r9.s32 >> 2;
	// srawi r26,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 2;
	// lhz r22,0(r10)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
loc_89947484:
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8994759c
	if (!ctx.cr6.lt) goto loc_8994759C;
	// srawi r3,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r19.s32 >> 2;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r31,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r18.s32 >> 2;
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// subfic r5,r8,68
	ctx.xer.ca = ctx.r8.u32 <= 68;
	ctx.r5.u64 = static_cast<uint64_t>(68) - ctx.r8.u64;
	// lhz r4,98(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// extsh r30,r22
	ctx.r30.s64 = ctx.r22.s16;
	// rlwinm r29,r9,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
loc_899474C4:
	// subf r17,r31,r10
	ctx.r17.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r15,r3,r8
	ctx.r15.u64 = ctx.r8.u64 - ctx.r3.u64;
	// divw r9,r17,r6
	ctx.r9.u64 = uint32_t((ctx.r6.s32 && !(ctx.r17.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r17.s32 / ctx.r6.s32 : 0);
	// divw r5,r15,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r15.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r15.s32 / ctx.r7.s32 : 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lis r4,516
	ctx.r4.s64 = 33816576;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stb r5,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// subfic r5,r8,63
	ctx.xer.ca = ctx.r8.u32 <= 63;
	ctx.r5.u64 = static_cast<uint64_t>(63) - ctx.r8.u64;
	// ori r14,r4,32896
	ctx.r14.u64 = ctx.r4.u64 | 32896;
	// and r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 & ctx.r25.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r9,r14
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// or r16,r5,r16
	ctx.r16.u64 = ctx.r5.u64 | ctx.r16.u64;
	// rlwinm r4,r4,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// oris r16,r16,4096
	ctx.r16.u64 = ctx.r16.u64 | 268435456;
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r16,r10,1
	ctx.r16.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// or r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 | ctx.r29.u64;
	// ori r9,r5,3
	ctx.r9.u64 = ctx.r5.u64 | 3;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// rotlwi r10,r17,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// rotlwi r5,r15,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// extsh r5,r16
	ctx.r5.s64 = ctx.r16.s16;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// andc r17,r7,r10
	ctx.r17.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// andc r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// twlgei r17,-1
	if (ctx.r17.s32 == -1 || ctx.r17.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x899474c4
	if (ctx.cr6.lt) goto loc_899474C4;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lwz r16,172(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r17,176(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r14,180(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// ori r15,r10,7
	ctx.r15.u64 = ctx.r10.u64 | 7;
loc_8994759C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x89947484
	if (ctx.cr6.lt) goto loc_89947484;
loc_899475B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x89947680
	if (ctx.cr6.eq) goto loc_89947680;
	// lhz r31,82(r1)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,256
	ctx.r9.s64 = 256;
	// divw. r25,r9,r31
	ctx.r25.u64 = uint32_t((ctx.r31.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r9.s32 / ctx.r31.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble 0x89947680
	if (!ctx.cr0.gt) goto loc_89947680;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lhz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// li r30,0
	ctx.r30.s64 = 0;
	// divw r29,r9,r7
	ctx.r29.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r28,12020(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 12020);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lwz r26,12740(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 12740);
loc_899475EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8994766c
	if (!ctx.cr6.gt) goto loc_8994766C;
	// lhz r10,98(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// addis r5,r26,240
	ctx.r5.s64 = ctx.r26.s64 + 15728640;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// addi r5,r5,88
	ctx.r5.s64 = ctx.r5.s64 + 88;
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_89947610:
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r8,r30,r31
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subf r8,r19,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r19.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,272
	ctx.r8.s64 = ctx.r8.s64 + 272;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwimi r9,r8,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// stwu r15,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r15.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x89947610
	if (ctx.cr6.lt) goto loc_89947610;
loc_8994766C:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x899475ec
	if (ctx.cr6.lt) goto loc_899475EC;
loc_89947680:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,9520(r10)
	REX_STORE_U32(ctx.r10.u32 + 9520, ctx.r11.u32);
	// bl 0x89930720
	ctx.lr = 0x89947694;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89947698;
	sub_899319C8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89946f6c
	if (ctx.cr6.eq) goto loc_89946F6C;
	// lhz r10,90(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,24(r9)
	REX_STORE_U8(ctx.r9.u32 + 24, ctx.r11.u8);
	// stb r10,25(r9)
	REX_STORE_U8(ctx.r9.u32 + 25, ctx.r10.u8);
	// bl 0x89949960
	ctx.lr = 0x899476C8;
	sub_89949960(ctx, base);
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r11,4660
	ctx.r11.s64 = 305397760;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// ori r11,r11,22136
	ctx.r11.u64 = ctx.r11.u64 | 22136;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stw r11,-25520(r10)
	REX_STORE_U32(ctx.r10.u32 + -25520, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,9519(r8)
	REX_STORE_U8(ctx.r8.u32 + 9519, ctx.r10.u8);
	// stb r9,9543(r7)
	REX_STORE_U8(ctx.r7.u32 + 9543, ctx.r9.u8);
	// stb r11,6402(r6)
	REX_STORE_U8(ctx.r6.u32 + 6402, ctx.r11.u8);
	// bl 0x89932ed8
	ctx.lr = 0x89947700;
	sub_89932ED8(ctx, base);
	// bl 0x8992f6b0
	ctx.lr = 0x89947704;
	sub_8992F6B0(ctx, base);
loc_89947704:
	// lbz r11,256(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8994773c
	if (ctx.cr6.eq) goto loc_8994773C;
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8994773c
	if (!ctx.cr6.gt) goto loc_8994773C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_8994773C:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947760
	if (ctx.cr6.eq) goto loc_89947760;
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x89947760
	if (!ctx.cr6.lt) goto loc_89947760;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_89947760:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947790
	if (ctx.cr6.eq) goto loc_89947790;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x89947790
	if (!ctx.cr6.gt) goto loc_89947790;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
loc_89947790:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947104
	if (ctx.cr6.eq) goto loc_89947104;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x89947104
	if (!ctx.cr6.lt) goto loc_89947104;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x89947104
	goto loc_89947104;
loc_899477B8:
	// lbz r11,256(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899477e4
	if (ctx.cr6.eq) goto loc_899477E4;
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899477e4
	if (!ctx.cr6.gt) goto loc_899477E4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
loc_899477E4:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947814
	if (ctx.cr6.eq) goto loc_89947814;
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r8,94(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x89947814
	if (!ctx.cr6.lt) goto loc_89947814;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
loc_89947814:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947838
	if (ctx.cr6.eq) goto loc_89947838;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x89947838
	if (!ctx.cr6.gt) goto loc_89947838;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_89947838:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947104
	if (ctx.cr6.eq) goto loc_89947104;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89947104
	if (!ctx.cr6.lt) goto loc_89947104;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x89947104
	goto loc_89947104;
loc_8994786C:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89947944
	if (ctx.cr6.eq) goto loc_89947944;
	// lbz r11,256(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// lhz r27,82(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
loc_89947888:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899478ac
	if (ctx.cr6.eq) goto loc_899478AC;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x899478ac
	if (!ctx.cr6.gt) goto loc_899478AC;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
loc_899478AC:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899478cc
	if (ctx.cr6.eq) goto loc_899478CC;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x899478cc
	if (!ctx.cr6.lt) goto loc_899478CC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
loc_899478CC:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lhz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899478f4
	if (ctx.cr6.eq) goto loc_899478F4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// bge cr6,0x899478f4
	if (!ctx.cr6.lt) goto loc_899478F4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
loc_899478F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89947918
	if (ctx.cr6.eq) goto loc_89947918;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x89947918
	if (!ctx.cr6.gt) goto loc_89947918;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
loc_89947918:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89947888
	if (!ctx.cr6.eq) goto loc_89947888;
	// sth r27,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// b 0x89947108
	goto loc_89947108;
loc_89947944:
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lhz r11,32032(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32032);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x89947104
	if (!ctx.cr6.eq) goto loc_89947104;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x89947104
	if (!ctx.cr6.eq) goto loc_89947104;
	// lbz r11,256(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947990
	if (ctx.cr6.eq) goto loc_89947990;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// sth r6,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r6.u16);
loc_89947990:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947104
	if (ctx.cr6.eq) goto loc_89947104;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r27,82(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899479bc
	if (ctx.cr6.eq) goto loc_899479BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// b 0x89947108
	goto loc_89947108;
loc_899479BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// b 0x89947108
	goto loc_89947108;
}

DEFINE_REX_FUNC(sub_89953500) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r10,23920
	ctx.r7.s64 = ctx.r10.s64 + 23920;
	// addi r6,r9,23912
	ctx.r6.s64 = ctx.r9.s64 + 23912;
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lhzx r4,r8,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// b 0x89953048
	sub_89953048(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89953528) {
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
	ctx.lr = 0x89953540;
	sub_89918508(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// addi r10,r10,9656
	ctx.r10.s64 = ctx.r10.s64 + 9656;
	// mulli r7,r11,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// addi r8,r10,78
	ctx.r8.s64 = ctx.r10.s64 + 78;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r4,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r9,r7,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// lhz r5,-21584(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + -21584);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// addi r7,r7,9016
	ctx.r7.s64 = ctx.r7.s64 + 9016;
	// addi r4,r8,-312
	ctx.r4.s64 = ctx.r8.s64 + -312;
loc_89953590:
	// rlwinm r8,r9,30,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFF;
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// lhzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r8,r8,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// srawi r8,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 24;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthx r8,r3,r4
	REX_STORE_U16(ctx.r3.u32 + ctx.r4.u32, ctx.r8.u16);
	// blt cr6,0x89953590
	if (ctx.cr6.lt) goto loc_89953590;
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

DEFINE_REX_FUNC(sub_89953F58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89953F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-9048
	ctx.r31.s64 = ctx.r11.s64 + -9048;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89953FA0;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89953FD4;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89954008;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r5,r11,120
	ctx.r5.s64 = ctx.r11.s64 + 120;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995403C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89954070;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899540A4;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899540D8;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,280
	ctx.r7.s64 = ctx.r11.s64 + 280;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995410C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,320
	ctx.r6.s64 = ctx.r11.s64 + 320;
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89954140;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,360
	ctx.r5.s64 = ctx.r11.s64 + 360;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89954174;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899541A8;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-480
	ctx.r11.s64 = ctx.r31.s64 + -480;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899541DC;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,-15860
	ctx.r29.s64 = ctx.r10.s64 + -15860;
loc_899541EC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r31,-480
	ctx.r9.s64 = ctx.r31.s64 + -480;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x89954218;
	sub_89935688(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899541ec
	if (ctx.cr6.lt) goto loc_899541EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89954C10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,120(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 120);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x89954c54
	if (!ctx.cr6.gt) goto loc_89954C54;
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lhz r10,72(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89954c48
	if (ctx.cr6.eq) goto loc_89954C48;
	// sth r5,126(r11)
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r5.u16);
	// b 0x89954c54
	goto loc_89954C54;
loc_89954C48:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r10,20416(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 20416);
	// sth r10,126(r11)
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r10.u16);
loc_89954C54:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r7,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// addi r9,r11,24696
	ctx.r9.s64 = ctx.r11.s64 + 24696;
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x89936218
	sub_89936218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89954C68) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89954C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89954C78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x89954e44
	if (ctx.cr6.lt) goto loc_89954E44;
	// lwz r30,44(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89954cb0
	if (!ctx.cr6.eq) goto loc_89954CB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89954CB0:
	// lhz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// sth r10,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r10.u16);
	// bgt cr6,0x89954df4
	if (ctx.cr6.gt) goto loc_89954DF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89954ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954CE8;
	// bdzf 4*cr6+eq,0x89954ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954CE8;
	// bdzf 4*cr6+eq,0x89954ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954CE8;
	// bdzf 4*cr6+eq,0x89954d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954D4C;
	// bdzf 4*cr6+eq,0x89954d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954D4C;
	// bdzf 4*cr6+eq,0x89954d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89954D4C;
	// bne cr6,0x89954d4c
	if (!ctx.cr6.eq) goto loc_89954D4C;
loc_89954CE8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x89954d14
	if (ctx.cr6.gt) goto loc_89954D14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,512
	ctx.r10.s64 = 512;
	// rlwinm r9,r11,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// sth r10,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89954D14:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,60(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,64(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// b 0x89954df4
	goto loc_89954DF4;
loc_89954D4C:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x89954d5c
	if (ctx.cr6.gt) goto loc_89954D5C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_89954D5C:
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lhz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r29,r6,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lhz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// rlwinm r4,r3,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhz r28,24(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// lwz r3,120(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// stb r3,128(r31)
	REX_STORE_U8(ctx.r31.u32 + 128, ctx.r3.u8);
	// li r3,44
	ctx.r3.s64 = 44;
	// lhzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhzx r6,r29,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r9,r5,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r5,r11,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r6,r9,24
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 24;
	// srawi r11,r5,24
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 + ctx.r28.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// bl 0x899d38f8
	ctx.lr = 0x89954DF4;
	sub_899D38F8(ctx, base);
loc_89954DF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r8,r10,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// rlwinm r9,r9,0,5,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r7,0,4,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFE000;
	// rlwinm r6,r6,0,18,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFF8003FFF;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// or r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89954E44:
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mulli r29,r10,696
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r27,r11,25128
	ctx.r27.s64 = ctx.r11.s64 + 25128;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r9,r29,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89954e6c
	if (!ctx.cr6.eq) goto loc_89954E6C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x89954e84
	goto loc_89954E84;
loc_89954E6C:
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// subfc r8,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_89954E84:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89954e9c
	if (!ctx.cr6.eq) goto loc_89954E9C;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_89954E9C:
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r27,28
	ctx.r8.s64 = ctx.r27.s64 + 28;
	// lwz r28,32(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000000;
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwzx r10,r29,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// beq cr6,0x899551a0
	if (ctx.cr6.eq) goto loc_899551A0;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899551c8
	if (!ctx.cr6.eq) goto loc_899551C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89954480
	ctx.lr = 0x89954EEC;
	sub_89954480(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89955194
	if (ctx.cr6.eq) goto loc_89955194;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bge cr6,0x89954f0c
	if (!ctx.cr6.lt) goto loc_89954F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_89954F0C:
	// lbz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89955188
	if (ctx.cr6.lt) goto loc_89955188;
	// beq cr6,0x89955008
	if (ctx.cr6.eq) goto loc_89955008;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lhz r7,126(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 126);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r9,r11,12800
	ctx.r9.s64 = ctx.r11.s64 + 12800;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhz r8,20416(r6)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + 20416);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89954fc0
	if (!ctx.cr6.lt) goto loc_89954FC0;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r5,r10,0,10,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89954fc0
	if (ctx.cr6.eq) goto loc_89954FC0;
	// addi r10,r9,202
	ctx.r10.s64 = ctx.r9.s64 + 202;
	// addi r5,r9,200
	ctx.r5.s64 = ctx.r9.s64 + 200;
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x89954fc0
	if (ctx.cr6.lt) goto loc_89954FC0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addis r10,r5,-160
	ctx.r10.s64 = ctx.r5.s64 + -10485760;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89954f84
	if (!ctx.cr0.lt) goto loc_89954F84;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89954F84:
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x89954fc0
	if (!ctx.cr6.lt) goto loc_89954FC0;
	// addi r5,r9,52
	ctx.r5.s64 = ctx.r9.s64 + 52;
	// lis r4,-30242
	ctx.r4.s64 = -1981939712;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lwzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,-21584(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -21584);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89954fb4
	if (!ctx.cr0.lt) goto loc_89954FB4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89954FB4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x89954fc4
	if (ctx.cr6.lt) goto loc_89954FC4;
loc_89954FC0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_89954FC4:
	// sth r11,126(r31)
	REX_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r10,20416(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 20416);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x89955008
	if (!ctx.cr6.lt) goto loc_89955008;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x89932c20
	ctx.lr = 0x89954FF8;
	sub_89932C20(ctx, base);
	// sth r3,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r3.u16);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8992b0c0
	ctx.lr = 0x89955004;
	sub_8992B0C0(ctx, base);
	// b 0x899551c8
	goto loc_899551C8;
loc_89955008:
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89955028
	if (ctx.cr6.eq) goto loc_89955028;
	// li r10,-256
	ctx.r10.s64 = -256;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r9.u16);
loc_89955028:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r7,r11,24700
	ctx.r7.s64 = ctx.r11.s64 + 24700;
loc_89955030:
	// addi r11,r27,624
	ctx.r11.s64 = ctx.r27.s64 + 624;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r11,r10,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89955144
	if (ctx.cr6.eq) goto loc_89955144;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x899550c8
	if (ctx.cr6.eq) goto loc_899550C8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x89955174
	if (!ctx.cr6.eq) goto loc_89955174;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lhz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r8,r5,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r3,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x89955094
	if (!ctx.cr6.lt) goto loc_89955094;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r9.u16);
loc_89955094:
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lhz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89955174
	if (!ctx.cr6.gt) goto loc_89955174;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x89955170
	goto loc_89955170;
loc_899550C8:
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// lhz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// neg r9,r28
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// orc r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 | ~ctx.r9.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r9,r6,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89955108
	if (!ctx.cr6.gt) goto loc_89955108;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r10.u16);
loc_89955108:
	// neg r10,r28
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lhz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// orc r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 | ~ctx.r10.u64;
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r6,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x89955174
	if (!ctx.cr6.lt) goto loc_89955174;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x89955170
	goto loc_89955170;
loc_89955144:
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8995515c
	if (!ctx.cr6.lt) goto loc_8995515C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
loc_8995515C:
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x89955174
	if (!ctx.cr6.gt) goto loc_89955174;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_89955170:
	// sth r11,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
loc_89955174:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89955030
	if (ctx.cr6.lt) goto loc_89955030;
loc_89955188:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8992b0c0
	ctx.lr = 0x89955190;
	sub_8992B0C0(ctx, base);
	// b 0x899551c8
	goto loc_899551C8;
loc_89955194:
	// rlwinm r11,r30,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x899551c8
	goto loc_899551C8;
loc_899551A0:
	// lbz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 38);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x899551b4
	if (!ctx.cr6.lt) goto loc_899551B4;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x899551c8
	goto loc_899551C8;
loc_899551B4:
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subfic r9,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// stb r10,38(r31)
	REX_STORE_U8(ctx.r31.u32 + 38, ctx.r10.u8);
	// stb r9,39(r31)
	REX_STORE_U8(ctx.r31.u32 + 39, ctx.r9.u8);
loc_899551C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// bne cr6,0x89955204
	if (!ctx.cr6.eq) goto loc_89955204;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89936218
	ctx.lr = 0x89955204;
	sub_89936218(ctx, base);
loc_89955204:
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89955224
	if (ctx.cr6.eq) goto loc_89955224;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x89955228
	goto loc_89955228;
loc_89955224:
	// lis r11,16
	ctx.r11.s64 = 1048576;
loc_89955228:
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lhzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959DE8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// rlwinm r6,r10,0,5,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// ori r11,r7,20077
	ctx.r11.u64 = ctx.r7.u64 | 20077;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r10,-9212(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// rlwinm r7,r5,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000000;
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stb r8,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r8.u8);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// lhz r6,124(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// rlwinm r8,r8,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// lwz r8,116(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// beq cr6,0x89959e94
	if (ctx.cr6.eq) goto loc_89959E94;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r6,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFF;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// b 0x89959ed4
	goto loc_89959ED4;
loc_89959E94:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r7,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// clrlwi r7,r7,25
	ctx.r7.u64 = ctx.r7.u32 & 0x7F;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r10,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r11,-64
	ctx.r9.s64 = ctx.r11.s64 + -64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_89959ED4:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r7,r9,128
	ctx.r7.s64 = ctx.r9.s64 + 128;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// rlwinm r9,r7,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r5,r5,3,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x1;
	// lhzx r11,r9,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r7,29316
	ctx.r9.s64 = ctx.r7.s64 + 29316;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// lhzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// stw r8,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r8.u32);
	// lbzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// b 0x899362a0
	sub_899362A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995AC98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8995ACA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
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
	// rlwinm r4,r6,20,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8995ad2c
	if (!ctx.cr6.eq) goto loc_8995AD2C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r30,r9,r7
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x8991a058
	ctx.lr = 0x8995AD04;
	sub_8991A058(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8995ad2c
	if (ctx.cr6.eq) goto loc_8995AD2C;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x899d3710
	ctx.lr = 0x8995AD2C;
	sub_899D3710(ctx, base);
loc_8995AD2C:
	// rlwinm r11,r28,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,65
	ctx.r4.s64 = 65;
	// bne cr6,0x8995ad44
	if (!ctx.cr6.eq) goto loc_8995AD44;
	// li r4,63
	ctx.r4.s64 = 63;
loc_8995AD44:
	// bl 0x89936218
	ctx.lr = 0x8995AD48;
	sub_89936218(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995B538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8995B540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mulli r30,r10,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995b5a8
	if (ctx.cr6.eq) goto loc_8995B5A8;
	// addi r29,r11,646
	ctx.r29.s64 = ctx.r11.s64 + 646;
	// lbzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995b5a8
	if (ctx.cr6.eq) goto loc_8995B5A8;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8995b7b0
	if (ctx.cr6.lt) goto loc_8995B7B0;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// ble cr6,0x8995b694
	if (!ctx.cr6.gt) goto loc_8995B694;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x8995b7b0
	if (!ctx.cr6.eq) goto loc_8995B7B0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x8995b5b8
	if (!ctx.cr6.gt) goto loc_8995B5B8;
	// bl 0x8995a430
	ctx.lr = 0x8995B5A8;
	sub_8995A430(ctx, base);
loc_8995B5A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8995B5B8:
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// lhz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r6,9016
	ctx.r3.s64 = ctx.r6.s64 + 9016;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r8,24
	ctx.r6.s64 = ctx.r8.s64 + 24;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r27,r11,24
	ctx.r27.s64 = ctx.r11.s64 + 24;
	// rlwinm r28,r6,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// sth r6,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r6.u16);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// lhzx r3,r28,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r3.u32);
	// rlwinm r11,r3,17,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0xFFFFFFFE;
	// srawi r11,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r7,r30,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bl 0x8992b0c0
	ctx.lr = 0x8995B66C;
	sub_8992B0C0(ctx, base);
	// lbz r11,94(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 94);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// stb r7,94(r31)
	REX_STORE_U8(ctx.r31.u32 + 94, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8995b7b0
	if (!ctx.cr6.eq) goto loc_8995B7B0;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x89936218
	ctx.lr = 0x8995B690;
	sub_89936218(ctx, base);
	// b 0x8995b7b0
	goto loc_8995B7B0;
loc_8995B694:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x8995b5a8
	if (ctx.cr6.gt) goto loc_8995B5A8;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// lwzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r8,r4,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwzx r11,r30,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8995b720
	if (ctx.cr6.eq) goto loc_8995B720;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// b 0x8995b75c
	goto loc_8995B75C;
loc_8995B720:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stb r11,94(r31)
	REX_STORE_U8(ctx.r31.u32 + 94, ctx.r11.u8);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r4,54
	ctx.r4.s64 = 54;
	// stb r7,68(r31)
	REX_STORE_U8(ctx.r31.u32 + 68, ctx.r7.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// sth r11,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// bl 0x89936218
	ctx.lr = 0x8995B75C;
	sub_89936218(ctx, base);
loc_8995B75C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r8,78(r31)
	REX_STORE_U16(ctx.r31.u32 + 78, ctx.r8.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_8995B7B0:
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995E498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x8995E4A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// mulli r30,r10,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8995ed00
	if (ctx.cr6.gt) goto loc_8995ED00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995ec0c
	if (ctx.cr6.eq) goto loc_8995EC0C;
	// bdz 0x8995e4e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995E4E4;
	// bdz 0x8995ed00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995ED00;
	// bdz 0x8995e990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995E990;
	// bdz 0x8995ea88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995EA88;
	// b 0x8995eb6c
	goto loc_8995EB6C;
loc_8995E4E4:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8995e628
	if (ctx.cr6.eq) goto loc_8995E628;
	// bl 0x8992bee8
	ctx.lr = 0x8995E4F8;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8995e514
	if (!ctx.cr6.lt) goto loc_8995E514;
loc_8995E504:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E514:
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// stwx r8,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r7,r31,76
	ctx.r7.s64 = ctx.r31.s64 + 76;
	// lwzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r6,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r5,r31,76
	ctx.r5.s64 = ctx.r31.s64 + 76;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// stbx r3,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u8);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stwx r7,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// blt cr6,0x8995e5f8
	if (ctx.cr6.lt) goto loc_8995E5F8;
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// addi r10,r31,66
	ctx.r10.s64 = ctx.r31.s64 + 66;
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x8995e5c4
	if (!ctx.cr6.gt) goto loc_8995E5C4;
	// addi r11,r31,67
	ctx.r11.s64 = ctx.r31.s64 + 67;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r9,r9,240
	ctx.r9.s64 = ctx.r9.s64 + 240;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E5C4:
	// addi r10,r31,109
	ctx.r10.s64 = ctx.r31.s64 + 109;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r9,-21104
	ctx.r3.s64 = ctx.r9.s64 + -21104;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// bl 0x899dcca0
	ctx.lr = 0x8995E5F0;
	sub_899DCCA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E5F8:
	// addi r10,r31,109
	ctx.r10.s64 = ctx.r31.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// li r10,516
	ctx.r10.s64 = 516;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r8,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
	// sthx r10,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E628:
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwzx r5,r30,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// stwx r4,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// bgt cr6,0x8995ed00
	if (ctx.cr6.gt) goto loc_8995ED00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6524
	ctx.r12.s64 = ctx.r12.s64 + -6524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8995E6AC;
	case 1:
		goto loc_8995E6DC;
	case 2:
		goto loc_8995E790;
	case 3:
		goto loc_8995E7D4;
	case 4:
		goto loc_8995E7F8;
	case 5:
		goto loc_8995E8C0;
	case 6:
		goto loc_8995E838;
	case 7:
		goto loc_8995E8C0;
	case 8:
		goto loc_8995E8F4;
	case 9:
		goto loc_8995E950;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8995E6AC:
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E6DC:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995e75c
	if (ctx.cr6.eq) goto loc_8995E75C;
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
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bge cr6,0x8995e75c
	if (!ctx.cr6.lt) goto loc_8995E75C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-21104
	ctx.r11.s64 = ctx.r11.s64 + -21104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8995e75c
	if (ctx.cr6.eq) goto loc_8995E75C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgt 0x8995e748
	if (ctx.cr0.gt) goto loc_8995E748;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8995e75c
	goto loc_8995E75C;
loc_8995E748:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8995e75c
	if (ctx.cr6.eq) goto loc_8995E75C;
	// bl 0x8995f280
	ctx.lr = 0x8995E754;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
loc_8995E75C:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r11,r31,109
	ctx.r11.s64 = ctx.r31.s64 + 109;
	// lbz r8,12342(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 12342);
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subfic r5,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r7,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u8);
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// stbx r3,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E790:
	// addi r11,r31,111
	ctx.r11.s64 = ctx.r31.s64 + 111;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// addi r10,r31,109
	ctx.r10.s64 = ctx.r31.s64 + 109;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r8,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u8);
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stbx r6,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E7D4:
	// addi r11,r31,109
	ctx.r11.s64 = ctx.r31.s64 + 109;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E7F8:
	// addi r10,r31,111
	ctx.r10.s64 = ctx.r31.s64 + 111;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// addi r11,r31,109
	ctx.r11.s64 = ctx.r31.s64 + 109;
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r10,12752(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12752);
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// stbx r5,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x8995e848
	goto loc_8995E848;
loc_8995E838:
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lbz r11,12752(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12752);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
loc_8995E848:
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mulli r10,r10,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lis r9,-30212
	ctx.r9.s64 = -1979973632;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r8,3780(r9)
	REX_STORE_U8(ctx.r9.u32 + 3780, ctx.r8.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8995e8e0
	if (ctx.cr6.eq) goto loc_8995E8E0;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lbz r5,-31405(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + -31405);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8995e8e0
	if (ctx.cr6.eq) goto loc_8995E8E0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// addi r11,r5,7008
	ctx.r11.s64 = ctx.r5.s64 + 7008;
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r10,r11,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r4,3780(r9)
	REX_STORE_U8(ctx.r9.u32 + 3780, ctx.r4.u8);
	// bl 0x899363f0
	ctx.lr = 0x8995E8A8;
	sub_899363F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8995e8e0
	if (!ctx.cr6.eq) goto loc_8995E8E0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x899362a0
	ctx.lr = 0x8995E8B8;
	sub_899362A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E8C0:
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lbz r3,3780(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3780);
	// bl 0x899363f0
	ctx.lr = 0x8995E8CC;
	sub_899363F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8995e8e0
	if (ctx.cr6.eq) goto loc_8995E8E0;
	// bl 0x8995f280
	ctx.lr = 0x8995E8D8;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
loc_8995E8E0:
	// lbzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E8F4:
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r3,r6,-21104
	ctx.r3.s64 = ctx.r6.s64 + -21104;
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r8,3890(r9)
	REX_STORE_U8(ctx.r9.u32 + 3890, ctx.r8.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,-10064(r7)
	REX_STORE_U32(ctx.r7.u32 + -10064, ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bl 0x899dcca0
	ctx.lr = 0x8995E948;
	sub_899DCCA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E950:
	// addi r7,r31,111
	ctx.r7.s64 = ctx.r31.s64 + 111;
	// lbzx r11,r30,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u8);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x8995e978
	if (ctx.cr6.eq) goto loc_8995E978;
	// bl 0x8995f280
	ctx.lr = 0x8995E970;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
loc_8995E978:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stbx r11,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r10,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995E990:
	// bl 0x8992bee8
	ctx.lr = 0x8995E994;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995e504
	if (ctx.cr6.lt) goto loc_8995E504;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r30,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r7,r31,76
	ctx.r7.s64 = ctx.r31.s64 + 76;
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r6,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r5,r31,76
	ctx.r5.s64 = ctx.r31.s64 + 76;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// stbx r3,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u8);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stwx r7,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// blt cr6,0x8995ea64
	if (ctx.cr6.lt) goto loc_8995EA64;
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// addi r9,r31,66
	ctx.r9.s64 = ctx.r31.s64 + 66;
	// lbzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,192
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 192, ctx.xer);
	// blt cr6,0x8995ed00
	if (ctx.cr6.lt) goto loc_8995ED00;
	// addi r9,r31,109
	ctx.r9.s64 = ctx.r31.s64 + 109;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EA64:
	// addi r9,r31,109
	ctx.r9.s64 = ctx.r31.s64 + 109;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EA88:
	// bl 0x8992bee8
	ctx.lr = 0x8995EA8C;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995e504
	if (ctx.cr6.lt) goto loc_8995E504;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r4,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// stwx r3,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8995eb30
	if (ctx.cr6.lt) goto loc_8995EB30;
	// beq cr6,0x8995eb08
	if (ctx.cr6.eq) goto loc_8995EB08;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8995ed00
	if (!ctx.cr6.lt) goto loc_8995ED00;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EB08:
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x8995ed00
	if (!ctx.cr6.eq) goto loc_8995ED00;
	// li r11,2
	ctx.r11.s64 = 2;
	// stbx r11,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EB30:
	// addi r10,r31,109
	ctx.r10.s64 = ctx.r31.s64 + 109;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995ed00
	if (ctx.cr6.eq) goto loc_8995ED00;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r3,37
	ctx.r3.s64 = 37;
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x8995EB58;
	sub_89936360(ctx, base);
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EB6C:
	// bl 0x8992bee8
	ctx.lr = 0x8995EB70;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995e504
	if (ctx.cr6.lt) goto loc_8995E504;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r6,r8,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r30,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// stwx r11,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r3,r7,0,1,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	// or r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r3,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u8);
	// lwzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stwx r8,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r7,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995EC0C:
	// bl 0x8992bee8
	ctx.lr = 0x8995EC10;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995e504
	if (ctx.cr6.lt) goto loc_8995E504;
	// mulli r6,r11,112
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r5,r30,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// lwzx r11,r6,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r5,r5,0,2,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwzx r7,r30,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r31,76
	ctx.r27.s64 = ctx.r31.s64 + 76;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r26,r31,76
	ctx.r26.s64 = ctx.r31.s64 + 76;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r31,80
	ctx.r25.s64 = ctx.r31.s64 + 80;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r24,r31,80
	ctx.r24.s64 = ctx.r31.s64 + 80;
	// addi r23,r31,16
	ctx.r23.s64 = ctx.r31.s64 + 16;
	// addi r22,r31,20
	ctx.r22.s64 = ctx.r31.s64 + 20;
	// addi r21,r31,36
	ctx.r21.s64 = ctx.r31.s64 + 36;
	// addi r20,r31,32
	ctx.r20.s64 = ctx.r31.s64 + 32;
	// lwzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r8,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r8.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r4,r7,0,1,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stbx r7,r30,r28
	REX_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r7.u8);
	// lwzx r5,r6,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stwx r5,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r5.u32);
	// lwzx r4,r6,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// stwx r4,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r4.u32);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r30,r20
	REX_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r8.u32);
loc_8995ED00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89963F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89963FA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r15,r11,3800
	ctx.r15.s64 = ctx.r11.s64 + 3800;
	// li r3,17
	ctx.r3.s64 = 17;
	// lbz r30,32018(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 32018);
	// addi r29,r10,-4592
	ctx.r29.s64 = ctx.r10.s64 + -4592;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mulli r11,r30,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(416));
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r31,r11,r15
	ctx.r31.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x89934208
	ctx.lr = 0x89963FD4;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89963fe8
	if (!ctx.cr6.eq) goto loc_89963FE8;
loc_89963FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89963FE8:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x89964014
	if (ctx.cr6.lt) goto loc_89964014;
	// bne cr6,0x8996405c
	if (!ctx.cr6.eq) goto loc_8996405C;
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r11,r9,-32688
	ctx.r11.s64 = ctx.r9.s64 + -32688;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x89964060
	goto loc_89964060;
loc_89964014:
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// lis r10,-28087
	ctx.r10.s64 = -1840709632;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r7,r10,9363
	ctx.r7.u64 = ctx.r10.u64 | 9363;
	// addi r8,r9,-32752
	ctx.r8.s64 = ctx.r9.s64 + -32752;
	// mulhw r10,r11,r7
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x89964060
	goto loc_89964060;
loc_8996405C:
	// lwz r31,120(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
loc_89964060:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992c2a8
	ctx.lr = 0x89964068;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89963fdc
	if (ctx.cr6.eq) goto loc_89963FDC;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r26,120
	ctx.r26.s64 = 7864320;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r31,-2
	ctx.r28.s64 = ctx.r31.s64 + -2;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r20,-21584(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// add r27,r20,r26
	ctx.r27.u64 = ctx.r20.u64 + ctx.r26.u64;
	// li r23,17
	ctx.r23.s64 = 17;
	// li r21,4
	ctx.r21.s64 = 4;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
loc_899640A0:
	// lhz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// mulli r25,r9,112
	ctx.r25.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stwx r22,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r23,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r23.u32);
	// lhz r7,2(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stwx r24,r25,r8
	REX_STORE_U32(ctx.r25.u32 + ctx.r8.u32, ctx.r24.u32);
	// stwx r6,r25,r10
	REX_STORE_U32(ctx.r25.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bl 0x8992bd50
	ctx.lr = 0x899640D8;
	sub_8992BD50(ctx, base);
	// lhzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// rotlwi r6,r11,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stwx r26,r25,r10
	REX_STORE_U32(ctx.r25.u32 + ctx.r10.u32, ctx.r26.u32);
	// stwx r27,r25,r9
	REX_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r27.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// stbx r21,r25,r8
	REX_STORE_U8(ctx.r25.u32 + ctx.r8.u32, ctx.r21.u8);
	// stwx r6,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r6,r25,r3
	REX_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r6.u32);
	// blt cr6,0x899640a0
	if (ctx.cr6.lt) goto loc_899640A0;
	// li r3,151
	ctx.r3.s64 = 151;
	// bl 0x8992c2a8
	ctx.lr = 0x89964124;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89963fdc
	if (ctx.cr6.eq) goto loc_89963FDC;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r25,r11,-32672
	ctx.r25.s64 = ctx.r11.s64 + -32672;
	// li r27,384
	ctx.r27.s64 = 384;
	// addi r28,r25,-2
	ctx.r28.s64 = ctx.r25.s64 + -2;
loc_89964140:
	// lhz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lhz r10,2(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// mulli r30,r8,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r24,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r24.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89964178;
	sub_8992BD50(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// lhz r5,6(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// lhz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// addi r26,r31,88
	ctx.r26.s64 = ctx.r31.s64 + 88;
	// lbz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 8);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lhzu r9,10(r28)
	ea = 10 + ctx.r28.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r17,r31,44
	ctx.r17.s64 = ctx.r31.s64 + 44;
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// stbx r21,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r21.u8);
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r19,r31,52
	ctx.r19.s64 = ctx.r31.s64 + 52;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r18,r31,68
	ctx.r18.s64 = ctx.r31.s64 + 68;
	// stwx r11,r30,r17
	REX_STORE_U32(ctx.r30.u32 + ctx.r17.u32, ctx.r11.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r16,r31,84
	ctx.r16.s64 = ctx.r31.s64 + 84;
	// addi r14,r31,100
	ctx.r14.s64 = ctx.r31.s64 + 100;
	// rotlwi r4,r3,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// add r3,r10,r20
	ctx.r3.u64 = ctx.r10.u64 + ctx.r20.u64;
	// stbx r8,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r8.u8);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// stwx r4,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r4,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u32);
	// stwx r3,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r3.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// stwx r11,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r11.u32);
	// stwx r24,r30,r14
	REX_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r24.u32);
	// blt cr6,0x89964140
	if (ctx.cr6.lt) goto loc_89964140;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r30,r8,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// lbz r11,6046(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6046);
	// lbz r10,12270(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12270);
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// rlwimi r11,r10,1,23,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE01);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// clrlwi r4,r9,30
	ctx.r4.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// stwx r4,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89964258;
	sub_8992BD50(ctx, base);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lis r7,304
	ctx.r7.s64 = 19922944;
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// li r5,127
	ctx.r5.s64 = 127;
	// stwx r7,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// stbx r5,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u8);
	// addi r17,r25,6
	ctx.r17.s64 = ctx.r25.s64 + 6;
	// li r10,9
	ctx.r10.s64 = 9;
	// lbz r7,12322(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 12322);
	// lis r8,26214
	ctx.r8.s64 = 1717960704;
	// addi r16,r11,-32568
	ctx.r16.s64 = ctx.r11.s64 + -32568;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// ori r25,r8,26215
	ctx.r25.u64 = ctx.r8.u64 | 26215;
	// stw r16,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
loc_899642AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r26,r11,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lwzx r10,r26,r15
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r15.u32);
loc_899642CC:
	// li r11,10
	ctx.r11.s64 = 10;
	// divw. r8,r10,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bne 0x89964308
	if (!ctx.cr0.eq) goto loc_89964308;
	// mulhw r11,r10,r25
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32)) >> 32;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x89964308
	if (!ctx.cr0.eq) goto loc_89964308;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x89964438
	if (!ctx.cr6.eq) goto loc_89964438;
loc_89964308:
	// mulhw r11,r10,r25
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32)) >> 32;
	// lhz r3,2(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mulli r30,r8,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8996435C;
	sub_8992BD50(ctx, base);
	// addi r7,r15,25
	ctx.r7.s64 = ctx.r15.s64 + 25;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r5,-2(r17)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r17.u32 + -2);
	// rlwinm r10,r6,1,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xE;
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// lbzx r11,r26,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r7.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,0(r17)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lhz r3,-4(r17)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r17.u32 + -4);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,2(r17)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r17.u32 + 2);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r19,r31,60
	ctx.r19.s64 = ctx.r31.s64 + 60;
	// lwzx r5,r5,r16
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// stbx r21,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r21.u8);
	// addi r8,r31,100
	ctx.r8.s64 = ctx.r31.s64 + 100;
	// stwx r10,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r10.u32);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stwx r5,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r18,r31,48
	ctx.r18.s64 = ctx.r31.s64 + 48;
	// stbx r6,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r14,r31,52
	ctx.r14.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// stwx r11,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r19,r31,94
	ctx.r19.s64 = ctx.r31.s64 + 94;
	// stwx r24,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r24.u32);
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ld r29,128(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// rlwinm r6,r28,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r27,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r27.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// ld r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stwx r3,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r3.u32);
	// stwx r3,r30,r18
	REX_STORE_U32(ctx.r30.u32 + ctx.r18.u32, ctx.r3.u32);
	// stwx r11,r30,r14
	REX_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r11.u32);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r6,r30,r19
	REX_STORE_U16(ctx.r30.u32 + ctx.r19.u32, ctx.r6.u16);
loc_89964438:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x899642cc
	if (ctx.cr6.lt) goto loc_899642CC;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r28,2
	ctx.r28.s64 = 2;
	// lhz r10,-2(r17)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r17.u32 + -2);
	// lhz r9,-4(r17)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r17.u32 + -4);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,2(r17)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r17.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lbz r18,0(r17)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// rotlwi r26,r9,16
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// extsh r19,r7
	ctx.r19.s64 = ctx.r7.s16;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
loc_89964480:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r15,8
	ctx.r11.s64 = ctx.r15.s64 + 8;
	// lhz r3,2(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r30,r7,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(112));
	// lwzx r16,r10,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r23,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r23.u32);
	// srawi r6,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r16.s32 >> 4;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// clrlwi r10,r16,28
	ctx.r10.u64 = ctx.r16.u32 & 0xF;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8992bd50
	ctx.lr = 0x899644D8;
	sub_8992BD50(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// neg r7,r28
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r26,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r26.u32);
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// addi r4,r11,184
	ctx.r4.s64 = ctx.r11.s64 + 184;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// rlwinm r9,r4,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// stwx r26,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u32);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// addi r8,r31,76
	ctx.r8.s64 = ctx.r31.s64 + 76;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r15,r31,80
	ctx.r15.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stbx r21,r30,r28
	REX_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r21.u8);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stwx r27,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r27.u32);
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r31,94
	ctx.r6.s64 = ctx.r31.s64 + 94;
	// stwx r19,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r19.u32);
	// addi r14,r31,100
	ctx.r14.s64 = ctx.r31.s64 + 100;
	// stwx r27,r30,r15
	REX_STORE_U32(ctx.r30.u32 + ctx.r15.u32, ctx.r27.u32);
	// srawi r28,r16,8
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r16.s32 >> 8;
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 + ctx.r8.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stwx r28,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r28.u32);
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// stbx r18,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r18.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// sthx r8,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwx r24,r30,r14
	REX_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r24.u32);
	// bge cr6,0x89964480
	if (!ctx.cr6.lt) goto loc_89964480;
	// lhz r3,2(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// addi r10,r15,4
	ctx.r10.s64 = ctx.r15.s64 + 4;
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// mulli r30,r9,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// lwzx r8,r14,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r10.u32);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899645d4
	if (ctx.cr6.lt) goto loc_899645D4;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r9,13
	ctx.r9.s64 = 13;
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899645e8
	goto loc_899645E8;
loc_899645D4:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// li r8,23
	ctx.r8.s64 = 23;
	// stwx r8,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
loc_899645E8:
	// bl 0x8992bd50
	ctx.lr = 0x899645EC;
	sub_8992BD50(ctx, base);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwx r19,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r19.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// stwx r26,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// stbx r21,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r21.u8);
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// addi r3,r31,94
	ctx.r3.s64 = ctx.r31.s64 + 94;
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// stwx r26,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u32);
	// addi r16,r31,52
	ctx.r16.s64 = ctx.r31.s64 + 52;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// add r5,r20,r10
	ctx.r5.u64 = ctx.r20.u64 + ctx.r10.u64;
	// sthx r24,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r24.u16);
	// stwx r10,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// stbx r6,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u8);
	// stwx r5,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r5.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r24,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r24.u32);
	// beq cr6,0x89964884
	if (ctx.cr6.eq) goto loc_89964884;
	// addi r11,r15,24
	ctx.r11.s64 = ctx.r15.s64 + 24;
	// lbzx r10,r14,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8996481c
	if (ctx.cr6.eq) goto loc_8996481C;
	// lwz r16,88(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_89964690:
	// li r11,10
	ctx.r11.s64 = 10;
	// divw. r8,r10,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bne 0x899646cc
	if (!ctx.cr0.eq) goto loc_899646CC;
	// mulhw r11,r10,r25
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32)) >> 32;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x899646cc
	if (!ctx.cr0.eq) goto loc_899646CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x89964800
	if (!ctx.cr6.eq) goto loc_89964800;
loc_899646CC:
	// mulhw r11,r10,r25
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32)) >> 32;
	// lhz r3,2(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mulli r30,r8,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89964720;
	sub_8992BD50(ctx, base);
	// addi r7,r15,25
	ctx.r7.s64 = ctx.r15.s64 + 25;
	// addi r24,r31,80
	ctx.r24.s64 = ctx.r31.s64 + 80;
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// std r28,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r28.u64);
	// lbzx r7,r14,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r7.u32);
	// rlwinm r11,r6,1,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xE;
	// rlwinm r4,r5,18,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFC0000;
	// std r26,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r26.u64);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// stwx r26,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u32);
	// lis r3,188
	ctx.r3.s64 = 12320768;
	// lwz r17,112(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r4,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lwzx r6,r5,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r16,88(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r26,r31,94
	ctx.r26.s64 = ctx.r31.s64 + 94;
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r9,r20,r9
	ctx.r9.u64 = ctx.r20.u64 + ctx.r9.u64;
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// rlwinm r28,r28,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r21,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r21.u8);
	// li r24,0
	ctx.r24.s64 = 0;
	// stwx r6,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stbx r18,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r18.u8);
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stwx r19,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r19.u32);
	// sthx r28,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r28.u16);
	// ld r29,128(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// ld r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// ld r26,144(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// stwx r24,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r24.u32);
loc_89964800:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89964690
	if (ctx.cr6.lt) goto loc_89964690;
	// b 0x89964888
	goto loc_89964888;
loc_8996481C:
	// lhzu r3,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// mulli r30,r9,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r23,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r23.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stwx r7,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8996484C;
	sub_8992BD50(ctx, base);
	// lis r11,180
	ctx.r11.s64 = 11796480;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// stwx r26,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u32);
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r26,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r26.u32);
	// stwx r8,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r8.u32);
	// stbx r21,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r21.u8);
	// stwx r24,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r24.u32);
loc_89964884:
	// lwz r16,88(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_89964888:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r17,r17,10
	ctx.r17.s64 = ctx.r17.s64 + 10;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899642ac
	if (!ctx.cr6.lt) goto loc_899642AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899745D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899745E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r30,26864(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89934058
	ctx.lr = 0x899745F4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899748f8
	if (ctx.cr6.eq) goto loc_899748F8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8991b880
	ctx.lr = 0x89974604;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899748f8
	if (ctx.cr6.eq) goto loc_899748F8;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r24,r10,-4592
	ctx.r24.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r25,0(r24)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r23,0
	ctx.r23.s64 = 0;
	// extsh r7,r25
	ctx.r7.s64 = ctx.r25.s16;
	// clrlwi r22,r30,16
	ctx.r22.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sth r25,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stwx r23,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r23.u32);
	// stwx r23,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r23.u32);
	// stwx r22,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r22.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r6,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x89974668;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,384
	ctx.r5.s64 = 25165824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r5,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x8997467C;
	sub_89915D78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x89974684;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r9,113
	ctx.r9.s64 = 113;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stbx r9,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// li r8,256
	ctx.r8.s64 = 256;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stbx r23,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r23.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// sthx r8,r29,r4
	REX_STORE_U16(ctx.r29.u32 + ctx.r4.u32, ctx.r8.u16);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stwx r7,r29,r3
	REX_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r28,r10,-23608
	ctx.r28.s64 = ctx.r10.s64 + -23608;
	// b 0x899746cc
	goto loc_899746CC;
loc_899746C0:
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r24,88(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_899746CC:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// rlwinm r21,r8,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// lhzx r20,r9,r7
	ctx.r20.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// lhzx r4,r21,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// addi r10,r31,150
	ctx.r10.s64 = ctx.r31.s64 + 150;
	// extsh r9,r20
	ctx.r9.s64 = ctx.r20.s16;
	// lwzx r8,r21,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r28.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwzx r6,r21,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r6.u32);
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// oris r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 3221225472;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// lhzx r7,r4,r24
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r24.u32);
	// sthx r25,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u16);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r22,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r22.u32);
	// stwx r6,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r6.u32);
	// sthx r7,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u16);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997474C;
	sub_8991B538(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991c578
	ctx.lr = 0x89974754;
	sub_8991C578(ctx, base);
	// addi r6,r28,14
	ctx.r6.s64 = ctx.r28.s64 + 14;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// std r28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// std r27,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lhzx r8,r21,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r6.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lhzx r6,r21,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r5.u32);
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lbzx r4,r21,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r24,r31,158
	ctx.r24.s64 = ctx.r31.s64 + 158;
	// addi r22,r31,207
	ctx.r22.s64 = ctx.r31.s64 + 207;
	// addi r19,r28,18
	ctx.r19.s64 = ctx.r28.s64 + 18;
	// addi r18,r28,20
	ctx.r18.s64 = ctx.r28.s64 + 20;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// addi r20,r31,206
	ctx.r20.s64 = ctx.r31.s64 + 206;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhzx r19,r21,r19
	ctx.r19.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r19.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lbzx r18,r21,r18
	ctx.r18.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r18.u32);
	// addi r17,r28,17
	ctx.r17.s64 = ctx.r28.s64 + 17;
	// lwzx r15,r29,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwzx r26,r30,r26
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r16,r31,200
	ctx.r16.s64 = ctx.r31.s64 + 200;
	// addi r14,r31,204
	ctx.r14.s64 = ctx.r31.s64 + 204;
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// stwx r15,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r15.u32);
	// addi r27,r31,66
	ctx.r27.s64 = ctx.r31.s64 + 66;
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r10,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r10.u32);
	// sthx r23,r30,r24
	REX_STORE_U16(ctx.r30.u32 + ctx.r24.u32, ctx.r23.u16);
	// lbzx r7,r29,r22
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r22.u32);
	// stbx r7,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u8);
	// stbx r4,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r4.u8);
	// lbzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbzx r6,r21,r17
	ctx.r6.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r17.u32);
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// stbx r4,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r4.u8);
	// cmplwi cr6,r26,14
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 14, ctx.xer);
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// sthx r19,r30,r28
	REX_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r19.u16);
	// stbx r18,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r18.u8);
	// stbx r7,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r7.u8);
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// ld r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stwx r5,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r5.u32);
	// stbx r6,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u8);
	// bne cr6,0x899748ac
	if (!ctx.cr6.eq) goto loc_899748AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x899748ac
	if (!ctx.cr6.lt) goto loc_899748AC;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,180
	ctx.r10.s64 = ctx.r11.s64 + 180;
	// lwz r4,180(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// stwx r4,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r3,184(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
loc_899748AC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// blt cr6,0x899746c0
	if (ctx.cr6.lt) goto loc_899746C0;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r23,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r23.u8);
	// stb r23,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r23.u8);
	// bl 0x89934058
	ctx.lr = 0x899748DC;
	sub_89934058(ctx, base);
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x89934058
	ctx.lr = 0x899748E4;
	sub_89934058(ctx, base);
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x89934058
	ctx.lr = 0x899748EC;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899748F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89979D40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89979D48;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r30,26864(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89934058
	ctx.lr = 0x89979D5C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997a084
	if (ctx.cr6.eq) goto loc_8997A084;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8991b880
	ctx.lr = 0x89979D6C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997a084
	if (ctx.cr6.eq) goto loc_8997A084;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r24,r10,-4592
	ctx.r24.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r25,0(r24)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r23,0
	ctx.r23.s64 = 0;
	// extsh r7,r25
	ctx.r7.s64 = ctx.r25.s16;
	// clrlwi r22,r30,16
	ctx.r22.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r28,r7,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sth r25,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stwx r23,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r23.u32);
	// stwx r23,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r23.u32);
	// stwx r22,r28,r10
	REX_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r22.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x89979DD0;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,448
	ctx.r5.s64 = 29360128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r5,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x89979DE4;
	sub_89915D78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x89979DEC;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stbx r9,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r7,256
	ctx.r7.s64 = 256;
	// stbx r23,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r23.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// sthx r7,r28,r4
	REX_STORE_U16(ctx.r28.u32 + ctx.r4.u32, ctx.r7.u16);
	// stwx r8,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r29,r10,-21328
	ctx.r29.s64 = ctx.r10.s64 + -21328;
	// b 0x89979e38
	goto loc_89979E38;
loc_89979E28:
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r24,88(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_89979E38:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// rlwinm r21,r8,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// lhzx r20,r9,r7
	ctx.r20.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// lhzx r4,r21,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// addi r10,r31,150
	ctx.r10.s64 = ctx.r31.s64 + 150;
	// extsh r9,r20
	ctx.r9.s64 = ctx.r20.s16;
	// lwzx r8,r21,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r29.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwzx r6,r21,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r6.u32);
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// oris r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 3221225472;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// lhzx r7,r4,r24
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r24.u32);
	// sthx r25,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u16);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r22,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r22.u32);
	// stwx r6,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r6.u32);
	// sthx r7,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u16);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x89979EB8;
	sub_8991B538(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991c578
	ctx.lr = 0x89979EC0;
	sub_8991C578(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lhzx r10,r21,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r6.u32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r25,r31,158
	ctx.r25.s64 = ctx.r31.s64 + 158;
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r6,r21,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r5.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r24,r31,207
	ctx.r24.s64 = ctx.r31.s64 + 207;
	// lbzx r4,r21,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// addi r20,r29,18
	ctx.r20.s64 = ctx.r29.s64 + 18;
	// addi r19,r29,20
	ctx.r19.s64 = ctx.r29.s64 + 20;
	// addi r18,r29,17
	ctx.r18.s64 = ctx.r29.s64 + 17;
	// addi r23,r31,207
	ctx.r23.s64 = ctx.r31.s64 + 207;
	// addi r22,r31,206
	ctx.r22.s64 = ctx.r31.s64 + 206;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lhzx r20,r21,r20
	ctx.r20.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r20.u32);
	// li r16,256
	ctx.r16.s64 = 256;
	// lbzx r19,r21,r19
	ctx.r19.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r19.u32);
	// addi r17,r29,21
	ctx.r17.s64 = ctx.r29.s64 + 21;
	// lbzx r18,r21,r18
	ctx.r18.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r18.u32);
	// lwzx r15,r28,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lwzx r26,r30,r26
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r29,r31,204
	ctx.r29.s64 = ctx.r31.s64 + 204;
	// stwx r15,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r15.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwzx r15,r28,r9
	ctx.r15.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r15,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r15.u32);
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// sthx r16,r30,r25
	REX_STORE_U16(ctx.r30.u32 + ctx.r25.u32, ctx.r16.u16);
	// lbzx r8,r28,r24
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r24.u32);
	// stbx r8,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u8);
	// stbx r4,r30,r22
	REX_STORE_U8(ctx.r30.u32 + ctx.r22.u32, ctx.r4.u8);
	// lbzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r31,66
	ctx.r5.s64 = ctx.r31.s64 + 66;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// lbzx r7,r21,r17
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r17.u32);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// cmplwi cr6,r26,18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 18, ctx.xer);
	// stbx r6,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u8);
	// lbzx r6,r28,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stbx r6,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u8);
	// sthx r20,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r20.u16);
	// stbx r19,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r19.u8);
	// lwzx r5,r28,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stwx r5,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u32);
	// ld r29,104(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stbx r18,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r18.u8);
	// stbx r7,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u8);
	// bne cr6,0x8997a024
	if (!ctx.cr6.eq) goto loc_8997A024;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8997a024
	if (!ctx.cr6.gt) goto loc_8997A024;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lwz r4,96(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stwx r4,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
loc_8997A024:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x89979e28
	if (ctx.cr6.lt) goto loc_89979E28;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stb r11,12342(r9)
	REX_STORE_U8(ctx.r9.u32 + 12342, ctx.r11.u8);
	// stb r10,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r10.u8);
	// bl 0x89934058
	ctx.lr = 0x8997A058;
	sub_89934058(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89934058
	ctx.lr = 0x8997A060;
	sub_89934058(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899340e8
	ctx.lr = 0x8997A068;
	sub_899340E8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899340e8
	ctx.lr = 0x8997A070;
	sub_899340E8(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x899340e8
	ctx.lr = 0x8997A078;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8997A084:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997AC60) {
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
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r11,189
	ctx.r30.s64 = ctx.r11.s64 + 189;
	// addi r9,r11,150
	ctx.r9.s64 = ctx.r11.s64 + 150;
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// lhzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8997adb8
	if (ctx.cr6.gt) goto loc_8997ADB8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997ad00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AD00;
	// bdzf 4*cr6+eq,0x8997ad48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AD48;
	// bne cr6,0x8997ad90
	if (!ctx.cr6.eq) goto loc_8997AD90;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8997adb8
	if (ctx.cr6.eq) goto loc_8997ADB8;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r9,r11,164
	ctx.r9.s64 = ctx.r11.s64 + 164;
	// addi r8,r11,168
	ctx.r8.s64 = ctx.r11.s64 + 168;
	// li r3,46
	ctx.r3.s64 = 46;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r6,r7,28
	ctx.r6.s64 = ctx.r7.s64 + 1835008;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x89936360
	ctx.lr = 0x8997ACF0;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u8);
	// b 0x8997adb8
	goto loc_8997ADB8;
loc_8997AD00:
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8997adb8
	if (!ctx.cr6.eq) goto loc_8997ADB8;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// b 0x8997adb8
	goto loc_8997ADB8;
loc_8997AD48:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8997adb8
	if (!ctx.cr6.eq) goto loc_8997ADB8;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// b 0x8997adb8
	goto loc_8997ADB8;
loc_8997AD90:
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8997adb8
	if (!ctx.cr6.eq) goto loc_8997ADB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
loc_8997ADB8:
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

DEFINE_REX_FUNC(sub_8997EDE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8997EDF0;
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
	// lwzx r29,r30,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
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
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r28,r30,r6
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r27,r30,r3
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// bgt cr6,0x8997f0a0
	if (ctx.cr6.gt) goto loc_8997F0A0;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4524
	ctx.r12.s64 = ctx.r12.s64 + -4524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8997EF10;
	case 1:
		goto loc_8997EF64;
	case 2:
		goto loc_8997EF8C;
	case 3:
		goto loc_8997EF8C;
	case 4:
		goto loc_8997F0A0;
	case 5:
		goto loc_8997F0A0;
	case 6:
		goto loc_8997F0A0;
	case 7:
		goto loc_8997F0A0;
	case 8:
		goto loc_8997F0A0;
	case 9:
		goto loc_8997F0A0;
	case 10:
		goto loc_8997F0A0;
	case 11:
		goto loc_8997F0A0;
	case 12:
		goto loc_8997F02C;
	case 13:
		goto loc_8997F060;
	case 14:
		goto loc_8997F060;
	case 15:
		goto loc_8997F060;
	case 16:
		goto loc_8997F0A0;
	case 17:
		goto loc_8997F0A0;
	case 18:
		goto loc_8997F088;
	case 19:
		goto loc_8997F0A0;
	case 20:
		goto loc_8997F0A0;
	case 21:
		goto loc_8997F0A0;
	case 22:
		goto loc_8997F0A0;
	case 23:
		goto loc_8997F0A0;
	case 24:
		goto loc_8997F0A0;
	case 25:
		goto loc_8997F0A0;
	case 26:
		goto loc_8997EFB4;
	case 27:
		goto loc_8997F02C;
	case 28:
		goto loc_8997F0A0;
	case 29:
		goto loc_8997F0A0;
	case 30:
		goto loc_8997F0A0;
	case 31:
		goto loc_8997F060;
	case 32:
		goto loc_8997F060;
	case 33:
		goto loc_8997F060;
	case 34:
		goto loc_8997F060;
	case 35:
		goto loc_8997F0A0;
	case 36:
		goto loc_8997F0A0;
	case 37:
		goto loc_8997F0A0;
	case 38:
		goto loc_8997F0A0;
	case 39:
		goto loc_8997F0A0;
	case 40:
		goto loc_8997F0A0;
	case 41:
		goto loc_8997F060;
	case 42:
		goto loc_8997F0A0;
	case 43:
		goto loc_8997EFDC;
	case 44:
		goto loc_8997EFDC;
	case 45:
		goto loc_8997EFDC;
	case 46:
		goto loc_8997F054;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8997EF10:
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
	// addi r4,r9,-18392
	ctx.r4.s64 = ctx.r9.s64 + -18392;
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
	ctx.lr = 0x8997EF58;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x8997EF5C;
	sub_89936440(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8997EF64:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8997EF7C;
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
loc_8997EF8C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8997EFA4;
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
loc_8997EFB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997EFBC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8997f088
	if (ctx.cr6.lt) goto loc_8997F088;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c340
	ctx.lr = 0x8997EFD4;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8997EFDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997EFE4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8997f018
	if (!ctx.cr6.lt) goto loc_8997F018;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4fb0
	ctx.lr = 0x8997F008;
	sub_899D4FB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8997F018:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c340
	ctx.lr = 0x8997F024;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8997F02C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4fb0
	ctx.lr = 0x8997F044;
	sub_899D4FB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8997F054:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8997f090
	goto loc_8997F090;
loc_8997F060:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8997F078;
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
loc_8997F088:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8997F090:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8997F0A0;
	sub_899D4440(ctx, base);
loc_8997F0A0:
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

DEFINE_REX_FUNC(sub_8997F288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8997F290;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r9,r6,-18280
	ctx.r9.s64 = ctx.r6.s64 + -18280;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// andc r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r5.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8991b880
	ctx.lr = 0x8997F2DC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997f2ec
	if (!ctx.cr6.eq) goto loc_8997F2EC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997F2EC:
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ori r23,r9,256
	ctx.r23.u64 = ctx.r9.u64 | 256;
	// addi r22,r10,-4592
	ctx.r22.s64 = ctx.r10.s64 + -4592;
loc_8997F308:
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8997f31c
	if (ctx.cr6.eq) goto loc_8997F31C;
	// lhz r26,0(r22)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// b 0x8997f320
	goto loc_8997F320;
loc_8997F31C:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8997F320:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// lhz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r29,r9,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r27,r11,r22
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// or r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 | ctx.r23.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r8,r29,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stwx r8,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r24,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997F374;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x8997F37C;
	sub_8991C578(ctx, base);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// addi r6,r31,148
	ctx.r6.s64 = ctx.r31.s64 + 148;
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r31,154
	ctx.r3.s64 = ctx.r31.s64 + 154;
	// lbzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// addi r8,r31,154
	ctx.r8.s64 = ctx.r31.s64 + 154;
	// sthx r26,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r6,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r6.u16);
	// lhzx r9,r29,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// sthx r9,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u16);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lhzx r7,r29,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r3.u32);
	// sthx r7,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u16);
	// lhz r8,12(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 12);
	// beq cr6,0x8997f410
	if (ctx.cr6.eq) goto loc_8997F410;
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 10);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r4,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r11,r29,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x8997f448
	goto loc_8997F448;
loc_8997F410:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lhz r10,10(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 10);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stwx r4,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
loc_8997F448:
	// lbz r11,14(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 14);
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// lhzu r10,16(r28)
	ea = 16 + ctx.r28.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r6,r25,1
	ctx.r6.s64 = ctx.r25.s64 + 1;
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// stbx r11,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lbzx r11,r29,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// addi r8,r31,66
	ctx.r8.s64 = ctx.r31.s64 + 66;
	// addi r7,r31,164
	ctx.r7.s64 = ctx.r31.s64 + 164;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r10,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u16);
	// stbx r24,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r24.u8);
	// stbx r6,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u8);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// stbx r6,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u8);
	// stwx r24,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r24.u32);
	// stwx r24,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r24.u32);
	// blt cr6,0x8997f308
	if (ctx.cr6.lt) goto loc_8997F308;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x89936360
	ctx.lr = 0x8997F4B8;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89980080) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89980088;
	__savegprlr_29(ctx, base);
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
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r6,r9,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r11,69
	ctx.r4.s64 = ctx.r11.s64 + 69;
	// addi r29,r11,69
	ctx.r29.s64 = ctx.r11.s64 + 69;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,70
	ctx.r3.s64 = ctx.r11.s64 + 70;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r31,r11,70
	ctx.r31.s64 = ctx.r11.s64 + 70;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// lbzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// stbx r4,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r30,r11,71
	ctx.r30.s64 = ctx.r11.s64 + 71;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// stbx r3,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u8);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lbzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// stbx r8,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u8);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lbzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r5,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u8);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r8,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// rlwinm r7,r7,0,10,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89980268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89980270;
	__savegprlr_17(ctx, base);
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
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bgt cr6,0x89983324
	if (ctx.cr6.gt) goto loc_89983324;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,688
	ctx.r12.s64 = ctx.r12.s64 + 688;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89980370;
	case 1:
		goto loc_8998090C;
	case 2:
		goto loc_899804F8;
	case 3:
		goto loc_899807D4;
	case 4:
		goto loc_8998090C;
	case 5:
		goto loc_8998246C;
	case 6:
		goto loc_8998246C;
	case 7:
		goto loc_8998246C;
	case 8:
		goto loc_8998246C;
	case 9:
		goto loc_8998246C;
	case 10:
		goto loc_8998246C;
	case 11:
		goto loc_8998246C;
	case 12:
		goto loc_89981994;
	case 13:
		goto loc_89982508;
	case 14:
		goto loc_89982538;
	case 15:
		goto loc_899826C8;
	case 16:
		goto loc_899820E8;
	case 17:
		goto loc_89982204;
	case 18:
		goto loc_899822E4;
	case 19:
		goto loc_89982E1C;
	case 20:
		goto loc_899809FC;
	case 21:
		goto loc_89980C5C;
	case 22:
		goto loc_89980DB0;
	case 23:
		goto loc_899809FC;
	case 24:
		goto loc_89980C5C;
	case 25:
		goto loc_89980DB0;
	case 26:
		goto loc_89980E6C;
	case 27:
		goto loc_89980EF8;
	case 28:
		goto loc_89981544;
	case 29:
		goto loc_89981654;
	case 30:
		goto loc_899817A8;
	case 31:
		goto loc_899811F4;
	case 32:
		goto loc_899811F4;
	case 33:
		goto loc_8998146C;
	case 34:
		goto loc_8998146C;
	case 35:
		goto loc_899810E8;
	case 36:
		goto loc_89980934;
	case 37:
		goto loc_89980934;
	case 38:
		goto loc_899809B8;
	case 39:
		goto loc_899809B8;
	case 40:
		goto loc_899829E4;
	case 41:
		goto loc_89982B94;
	case 42:
		goto loc_89982F14;
	case 43:
		goto loc_89981DF0;
	case 44:
		goto loc_89981F44;
	case 45:
		goto loc_89982028;
	case 46:
		goto loc_89983120;
	case 47:
		goto loc_89981C30;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89980370:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8998038c
	if (ctx.cr6.eq) goto loc_8998038C;
	// bl 0x8997f738
	ctx.lr = 0x89980388;
	sub_8997F738(ctx, base);
	// b 0x899804d4
	goto loc_899804D4;
loc_8998038C:
	// bl 0x8991c8b8
	ctx.lr = 0x89980390;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899803a4
	if (!ctx.cr6.eq) goto loc_899803A4;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899803A4;
	sub_89936360(ctx, base);
loc_899803A4:
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
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x899804d4
	if (ctx.cr6.lt) goto loc_899804D4;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r7,20077
	ctx.r11.u64 = ctx.r7.u64 | 20077;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lwz r10,-9212(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r5,9016
	ctx.r6.s64 = ctx.r5.s64 + 9016;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r5,r10,17
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r5,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lhzx r29,r10,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r4,r4,4,13,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x70000;
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r5,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 16;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mullw r7,r4,r10
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// mullw r4,r9,r10
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r7,-18156
	ctx.r8.s64 = ctx.r7.s64 + -18156;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r29,r5,17,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lbzx r4,r29,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// li r8,116
	ctx.r8.s64 = 116;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x899d4640
	ctx.lr = 0x899804D4;
	sub_899D4640(ctx, base);
loc_899804D4:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899804F0;
	sub_89933B88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899804F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89980500;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89980518;
	sub_89980080(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89980640
	if (ctx.cr6.lt) goto loc_89980640;
	// beq cr6,0x89980618
	if (ctx.cr6.eq) goto loc_89980618;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x89980570
	if (ctx.cr6.eq) goto loc_89980570;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89980760
	goto loc_89980760;
loc_89980570:
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899805e8
	if (ctx.cr6.lt) goto loc_899805E8;
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899805E8:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980618:
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
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89980760
	goto loc_89980760;
loc_89980640:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x89983324
	if (ctx.cr6.gt) goto loc_89983324;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899806cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899806CC;
	// bdzf 4*cr6+eq,0x899806f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899806F0;
	// bdzf 4*cr6+eq,0x89980710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89980710;
	// bne cr6,0x89980734
	if (!ctx.cr6.eq) goto loc_89980734;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899806A0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899806CC:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899806F0:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980710:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8997f0b0
	ctx.lr = 0x8998073C;
	sub_8997F0B0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_89980760:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
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
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899807D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899807DC;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x899807F4;
	sub_89980080(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89980854
	if (ctx.cr6.eq) goto loc_89980854;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x89980834
	if (ctx.cr6.eq) goto loc_89980834;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89980880
	goto loc_89980880;
loc_89980834:
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
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x89980878
	goto loc_89980878;
loc_89980854:
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
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89980874;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_89980878:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89980880:
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
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// beq 0x899808ec
	if (ctx.cr0.eq) goto loc_899808EC;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
loc_899808EC:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998090C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89980914;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x899809ac
	if (!ctx.cr6.lt) goto loc_899809AC;
loc_89980928:
	// bl 0x8997ede8
	ctx.lr = 0x8998092C;
	sub_8997EDE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980934:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998093C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8998095c
	if (!ctx.cr6.lt) goto loc_8998095C;
loc_8998094C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8997ede8
	ctx.lr = 0x89980954;
	sub_8997EDE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998095C:
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// beq cr6,0x8998099c
	if (ctx.cr6.eq) goto loc_8998099C;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x899809a8
	if (!ctx.cr6.eq) goto loc_899809A8;
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x89980080
	ctx.lr = 0x89980994;
	sub_89980080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998099C:
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899809A0:
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_899809A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_899809AC:
	// bl 0x89980080
	ctx.lr = 0x899809B0;
	sub_89980080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899809B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899809C0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r10,54
	ctx.r8.s64 = ctx.r10.s64 + 54;
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// beq cr6,0x8998099c
	if (ctx.cr6.eq) goto loc_8998099C;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x899809a8
	if (!ctx.cr6.eq) goto loc_899809A8;
	// b 0x899809a0
	goto loc_899809A0;
loc_899809FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89980A04;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89980A1C;
	sub_89980080(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
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
	// bgt cr6,0x89983324
	if (ctx.cr6.gt) goto loc_89983324;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89980af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89980AF8;
	// bdzf 4*cr6+eq,0x89980ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89980BA0;
	// bne cr6,0x89980c14
	if (!ctx.cr6.eq) goto loc_89980C14;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mulli r5,r7,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lbzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x89980AEC;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
loc_89980AF8:
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r11,r7,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFF;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8991db50
	ctx.lr = 0x89980B54;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8997f288
	ctx.lr = 0x89980B64;
	sub_8997F288(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stbx r7,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u8);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980BA0:
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// ori r12,r12,65531
	ctx.r12.u64 = ctx.r12.u64 | 65531;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// addi r5,r30,104
	ctx.r5.s64 = ctx.r30.s64 + 104;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// oris r9,r4,16384
	ctx.r9.u64 = ctx.r4.u64 | 1073741824;
	// stbx r3,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u8);
	// li r8,7
	ctx.r8.s64 = 7;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// stwx r28,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980C14:
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// li r28,0
	ctx.r28.s64 = 0;
	// oris r9,r11,176
	ctx.r9.u64 = ctx.r11.u64 | 11534336;
	// stbx r28,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u8);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980C5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89980C64;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lwzx r28,r31,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// beq cr6,0x89980d44
	if (ctx.cr6.eq) goto loc_89980D44;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mulli r10,r10,240
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(240));
	// lwzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r29,r31,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// mulli r9,r9,240
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(240));
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
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
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980D44:
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// beq cr6,0x89980d94
	if (ctx.cr6.eq) goto loc_89980D94;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x89980d9c
	if (!ctx.cr6.eq) goto loc_89980D9C;
	// li r11,25
	ctx.r11.s64 = 25;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89980D8C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980D94:
	// li r11,22
	ctx.r11.s64 = 22;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
loc_89980D9C:
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b610
	ctx.lr = 0x89980DA8;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980DB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89980DB8;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x89980e50
	if (ctx.cr6.eq) goto loc_89980E50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980E50:
	// li r11,26
	ctx.r11.s64 = 26;
	// stwx r28,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89980E64;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980E6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89980E74;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x8997fe48
	ctx.lr = 0x89980E88;
	sub_8997FE48(ctx, base);
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r7,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// rlwinm r11,r7,31,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7E;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980EF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89980F00;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 26, ctx.xer);
	// beq cr6,0x89980f44
	if (ctx.cr6.eq) goto loc_89980F44;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// li r9,256
	ctx.r9.s64 = 256;
	// rlwinm r8,r11,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89980F44:
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x89980080
	ctx.lr = 0x89980F54;
	sub_89980080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89980F5C;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89980F68;
	sub_89932D30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x89980F70;
	sub_8991B7F8(ctx, base);
	// addi r17,r30,184
	ctx.r17.s64 = ctx.r30.s64 + 184;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbzx r9,r31,r17
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r17.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89980fa8
	if (ctx.cr6.eq) goto loc_89980FA8;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// b 0x89980fc8
	goto loc_89980FC8;
loc_89980FA8:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89980FB8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r17
	REX_STORE_U8(ctx.r31.u32 + ctx.r17.u32, ctx.r11.u8);
loc_89980FC8:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// lhzx r20,r31,r10
	ctx.r20.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r20,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x3FE;
	// extsh r24,r20
	ctx.r24.s64 = ctx.r20.s16;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// addi r19,r10,-18292
	ctx.r19.s64 = ctx.r10.s64 + -18292;
	// addi r18,r9,-4592
	ctx.r18.s64 = ctx.r9.s64 + -4592;
	// addi r25,r8,-18152
	ctx.r25.s64 = ctx.r8.s64 + -18152;
loc_89981004:
	// addi r10,r24,128
	ctx.r10.s64 = ctx.r24.s64 + 128;
	// lhzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r22,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r29.u32);
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rotlwi r3,r9,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r4,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r8,r3,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0xFFFFC000;
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r27,r21,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r21.u64;
	// add r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x8991b880
	ctx.lr = 0x89981090;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899810bc
	if (ctx.cr6.eq) goto loc_899810BC;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89997d48
	ctx.lr = 0x899810B4;
	sub_89997D48(ctx, base);
	// lbz r3,4(r19)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// bl 0x89936360
	ctx.lr = 0x899810BC;
	sub_89936360(ctx, base);
loc_899810BC:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89981004
	if (ctx.cr6.lt) goto loc_89981004;
	// lbzx r11,r31,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r17.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r17
	REX_STORE_U8(ctx.r31.u32 + ctx.r17.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899810E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899810F0;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x899831c0
	if (ctx.cr6.lt) goto loc_899831C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x89981108;
	sub_89980080(ctx, base);
	// mulli r6,r28,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// beq cr6,0x89981130
	if (ctx.cr6.eq) goto loc_89981130;
loc_8998111C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
loc_89981120:
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981130:
	// addi r9,r30,66
	ctx.r9.s64 = ctx.r30.s64 + 66;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r7,192
	ctx.r7.s64 = 192;
	// oris r4,r10,16384
	ctx.r4.u64 = ctx.r10.u64 | 1073741824;
	// addi r5,r30,182
	ctx.r5.s64 = ctx.r30.s64 + 182;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// subfc r10,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// rlwinm r7,r7,2,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899811F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899811FC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// mulli r27,r11,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r27,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bne cr6,0x8998111c
	if (!ctx.cr6.eq) goto loc_8998111C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r27,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8998111c
	if (!ctx.cr6.eq) goto loc_8998111C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x89980080
	ctx.lr = 0x89981244;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r4,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r4.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r3,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r3.u32);
	// bgt cr6,0x89983324
	if (ctx.cr6.gt) goto loc_89983324;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89981348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89981348;
	// bdzf 4*cr6+eq,0x89981414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89981414;
	// bne cr6,0x89981438
	if (!ctx.cr6.eq) goto loc_89981438;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r27,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stbx r10,r27,r9
	REX_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981348:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r27,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8998138c
	if (ctx.cr6.eq) goto loc_8998138C;
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stbx r7,r27,r9
	REX_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998138C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998139C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r27,0
	ctx.r27.s64 = 0;
loc_899813A8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x8997f4c8
	ctx.lr = 0x899813C4;
	sub_8997F4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899813dc
	if (ctx.cr6.eq) goto loc_899813DC;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899813DC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x899813a8
	if (ctx.cr6.lt) goto loc_899813A8;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981414:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981438:
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
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998146C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89981474;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89981120
	if (ctx.cr6.eq) goto loc_89981120;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x89980080
	ctx.lr = 0x899814AC;
	sub_89980080(ctx, base);
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
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r9,r28,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981544:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998154C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89981564;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r25,r8,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r25,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r24,r7,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x89981630;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,29
	ctx.r9.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// bl 0x8991b610
	ctx.lr = 0x8998164C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998165C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89981674;
	sub_89980080(ctx, base);
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
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
	// beq cr6,0x899816dc
	if (ctx.cr6.eq) goto loc_899816DC;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x899816f0
	if (!ctx.cr6.eq) goto loc_899816F0;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x899816f0
	if (!ctx.cr6.lt) goto loc_899816F0;
	// li r10,30
	ctx.r10.s64 = 30;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899816D4;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899816DC:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89981790
	if (!ctx.cr6.gt) goto loc_89981790;
loc_899816F0:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
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
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981790:
	// li r11,28
	ctx.r11.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899817A0;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899817A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899817B0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x899817C8;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899818c0
	if (ctx.cr6.eq) goto loc_899818C0;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x899818d4
	if (!ctx.cr6.eq) goto loc_899818D4;
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x89983324
	if (ctx.cr6.gt) goto loc_89983324;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89981828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89981828;
	// bdzf 4*cr6+eq,0x89981850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89981850;
	// bne cr6,0x89981894
	if (!ctx.cr6.eq) goto loc_89981894;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 3;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981828:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981850:
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r5,r6,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 3;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981894:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// sthx r7,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u16);
	// b 0x899818d4
	goto loc_899818D4;
loc_899818C0:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89981974
	if (!ctx.cr6.gt) goto loc_89981974;
loc_899818D4:
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
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r6,r29,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981974:
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998198C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8998199C;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x899819B4;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r23,r30,184
	ctx.r23.s64 = ctx.r30.s64 + 184;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899819f8
	if (ctx.cr6.eq) goto loc_899819F8;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// b 0x89981b1c
	goto loc_89981B1C;
loc_899819F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89981A00;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89981A0C;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x89981a28
	if (!ctx.cr6.lt) goto loc_89981A28;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89981A28:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x89981a40
	if (!ctx.cr6.gt) goto loc_89981A40;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89981A40:
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r11,-124
	ctx.r5.s64 = ctx.r11.s64 + -124;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r27,r30,150
	ctx.r27.s64 = ctx.r30.s64 + 150;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r25,r7,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r26,r30,193
	ctx.r26.s64 = ctx.r30.s64 + 193;
	// stwx r25,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r31,r27
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lbzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// rlwinm r4,r5,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89981B0C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u8);
loc_89981B1C:
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lis r9,-30296
	ctx.r9.s64 = -1985478656;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lis r25,9
	ctx.r25.s64 = 589824;
	// addi r27,r8,9016
	ctx.r27.s64 = ctx.r8.s64 + 9016;
	// addi r26,r9,-27608
	ctx.r26.s64 = ctx.r9.s64 + -27608;
	// addi r29,r10,-18144
	ctx.r29.s64 = ctx.r10.s64 + -18144;
loc_89981B40:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r22,r4,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lhzx r8,r22,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r8.u32);
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// lhzx r21,r22,r29
	ctx.r21.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r20,r10,r27
	ctx.r20.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rotlwi r10,r21,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r21.u32, 16);
	// lhzx r21,r11,r27
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lhzx r19,r22,r7
	ctx.r19.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r7.u32);
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// lwzx r7,r22,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r8,r20
	ctx.r8.s64 = ctx.r20.s16;
	// extsh r6,r21
	ctx.r6.s64 = ctx.r21.s16;
	// mullw r22,r8,r10
	ctx.r22.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r21,r6,r11
	ctx.r21.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 8;
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r22,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r22.s64 = ctx.r6.s32 >> 8;
	// add r4,r19,r4
	ctx.r4.u64 = ctx.r19.u64 + ctx.r4.u64;
	// subf r11,r11,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// bl 0x899cc518
	ctx.lr = 0x89981C08;
	sub_899CC518(ctx, base);
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x89981b40
	if (ctx.cr6.lt) goto loc_89981B40;
	// lbzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981C30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89981C38;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899831c0
	if (ctx.cr6.lt) goto loc_899831C0;
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
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// lhzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r9,r7,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// lwzx r8,r3,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// lhzx r6,r9,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// lhzx r9,r7,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// addi r25,r30,28
	ctx.r25.s64 = ctx.r30.s64 + 28;
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// mullw r7,r6,r11
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// subf r5,r10,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addi r7,r30,206
	ctx.r7.s64 = ctx.r30.s64 + 206;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r24,r10,r8
	ctx.r24.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// lbzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// addis r7,r24,4
	ctx.r7.s64 = ctx.r24.s64 + 262144;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// lwzx r4,r3,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r3,r26
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r3,r27,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lhzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r25,r30,20
	ctx.r25.s64 = ctx.r30.s64 + 20;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r3,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r3.u32);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r6,r8,61440
	ctx.r6.u64 = ctx.r8.u64 | 61440;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// addi r30,r30,66
	ctx.r30.s64 = ctx.r30.s64 + 66;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// srawi r11,r9,24
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 24;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// sthx r4,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u16);
	// stbx r5,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u8);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981DF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89981DF8;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89981e78
	if (ctx.cr6.eq) goto loc_89981E78;
	// bl 0x8991b9f0
	ctx.lr = 0x89981E1C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r7,r9,-18072
	ctx.r7.s64 = ctx.r9.s64 + -18072;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// rotlwi r11,r3,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// beq cr6,0x89981120
	if (ctx.cr6.eq) goto loc_89981120;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x89980080
	ctx.lr = 0x89981E70;
	sub_89980080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981E78:
	// bl 0x8997f6e0
	ctx.lr = 0x89981E7C;
	sub_8997F6E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x89981f24
	if (ctx.cr6.eq) goto loc_89981F24;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981F24:
	// li r10,44
	ctx.r10.s64 = 44;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89981F3C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89981F44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89981F4C;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x8997f6e0
	ctx.lr = 0x89981F60;
	sub_8997F6E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x89982008
	if (ctx.cr6.eq) goto loc_89982008;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982008:
	// li r10,45
	ctx.r10.s64 = 45;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x89982020;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982028:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89982030;
	sub_8991BBA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x8997f6e0
	ctx.lr = 0x89982044;
	sub_8997F6E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
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
	// lwzx r29,r7,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899820E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899820F0;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982108;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r6,r28,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r28,r7,0,2,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r25,r30,36
	ctx.r25.s64 = ctx.r30.s64 + 36;
	// addi r24,r30,32
	ctx.r24.s64 = ctx.r30.s64 + 32;
	// lwzx r23,r5,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r23,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r23.u32);
	// add r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r22,r31,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r10,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// stwx r28,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwzx r9,r6,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// or r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 | ctx.r28.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,43
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899821E8;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,73
	ctx.r3.s64 = 73;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x89936360
	ctx.lr = 0x899821FC;
	sub_89936360(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982204:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998220C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982224;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x899822c4
	if (ctx.cr6.eq) goto loc_899822C4;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r8,r3,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899822C4:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899822DC;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899822E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899822EC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982304;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r4,4
	ctx.r4.s64 = 4;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
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
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r29,r7,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x899823A8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
loc_899823C0:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r11,1,23,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,176
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 176, ctx.xer);
	// blt cr6,0x899823e8
	if (ctx.cr6.lt) goto loc_899823E8;
	// cmpwi cr6,r11,336
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 336, ctx.xer);
	// ble cr6,0x89982444
	if (!ctx.cr6.gt) goto loc_89982444;
loc_899823E8:
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r10,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lhzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r21,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r21.u64;
	// bl 0x899cc2e0
	ctx.lr = 0x89982444;
	sub_899CC2E0(ctx, base);
loc_89982444:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x899823c0
	if (ctx.cr6.lt) goto loc_899823C0;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8998246C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982474;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x8998248C;
	sub_89980080(ctx, base);
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// addi r6,r7,-18024
	ctx.r6.s64 = ctx.r7.s64 + -18024;
	// addi r7,r4,-18008
	ctx.r7.s64 = ctx.r4.s64 + -18008;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// ori r11,r8,32768
	ctx.r11.u64 = ctx.r8.u64 | 32768;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mulli r4,r10,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// lbzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r5,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 15;
	// clrlwi r4,r5,28
	ctx.r4.u64 = ctx.r5.u32 & 0xF;
	// lbzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x89982500;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982510;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982528;
	sub_89980080(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x8998329c
	goto loc_8998329C;
loc_89982538:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982540;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982558;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899825f8
	if (ctx.cr6.eq) goto loc_899825F8;
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
	// beq cr6,0x899825b8
	if (ctx.cr6.eq) goto loc_899825B8;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8998262c
	goto loc_8998262C;
loc_899825B8:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// bge cr6,0x8998262c
	if (!ctx.cr6.lt) goto loc_8998262C;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,8
	ctx.r10.s64 = 8;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899825F0;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899825F8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x89982620;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8998262C:
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
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
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
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899826C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899826D0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x899826E8;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x899827e4
	if (ctx.cr6.lt) goto loc_899827E4;
	// beq cr6,0x89982780
	if (ctx.cr6.eq) goto loc_89982780;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x89982940
	if (!ctx.cr6.lt) goto loc_89982940;
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
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// blt cr6,0x89982940
	if (ctx.cr6.lt) goto loc_89982940;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89982768;
	sub_8991B610(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r28,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u8);
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982780:
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89982788:
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899827a0
	if (!ctx.cr6.gt) goto loc_899827A0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899827A0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x899827b4
	if (!ctx.cr6.lt) goto loc_899827B4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899827B4:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89982788
	if (ctx.cr6.lt) goto loc_89982788;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x89982940
	if (!ctx.cr6.eq) goto loc_89982940;
loc_899827D4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// b 0x89982940
	goto loc_89982940;
loc_899827E4:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998281c
	if (ctx.cr6.eq) goto loc_8998281C;
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
	// blt cr6,0x89982940
	if (ctx.cr6.lt) goto loc_89982940;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899828a4
	goto loc_899828A4;
loc_8998281C:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899827d4
	if (ctx.cr6.eq) goto loc_899827D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89982844;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89982850;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x8998286c
	if (!ctx.cr6.lt) goto loc_8998286C;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8998286C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x89982884
	if (!ctx.cr6.gt) goto loc_89982884;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89982884:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89982894;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89982940
	if (ctx.cr6.eq) goto loc_89982940;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
loc_899828A4:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
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
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x89982934;
	sub_899CC3D0(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
loc_89982940:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r9,-120
	ctx.r9.s64 = ctx.r9.s64 + -120;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
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
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899829E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899829EC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982A04;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x89982a34
	if (!ctx.cr6.eq) goto loc_89982A34;
loc_89982A24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89980168
	ctx.lr = 0x89982A2C;
	sub_89980168(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982A34:
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89982ac0
	if (ctx.cr6.eq) goto loc_89982AC0;
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
	// beq cr6,0x89982a74
	if (ctx.cr6.eq) goto loc_89982A74;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89982af4
	goto loc_89982AF4;
loc_89982A74:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// bge cr6,0x89982af4
	if (!ctx.cr6.lt) goto loc_89982AF4;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,32
	ctx.r10.s64 = 32;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x89982AAC;
	sub_8991B610(ctx, base);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// li r8,256
	ctx.r8.s64 = 256;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982AC0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x89982AE8;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89982AF4:
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
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
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
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
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
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982B94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982B9C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89980928
	if (ctx.cr6.lt) goto loc_89980928;
	// bl 0x89980080
	ctx.lr = 0x89982BB4;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89982a24
	if (ctx.cr6.eq) goto loc_89982A24;
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x89982cc0
	if (ctx.cr6.lt) goto loc_89982CC0;
	// beq cr6,0x89982c4c
	if (ctx.cr6.eq) goto loc_89982C4C;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x89982e0c
	if (!ctx.cr6.lt) goto loc_89982E0C;
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
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// blt cr6,0x89982e0c
	if (ctx.cr6.lt) goto loc_89982E0C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89982C34;
	sub_8991B610(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r28,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u8);
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982C4C:
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89982C54:
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x89982c70
	if (!ctx.cr6.gt) goto loc_89982C70;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_89982C70:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x89982c84
	if (!ctx.cr6.lt) goto loc_89982C84;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_89982C84:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89982c54
	if (ctx.cr6.lt) goto loc_89982C54;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x89982e0c
	if (!ctx.cr6.eq) goto loc_89982E0C;
loc_89982CA4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x89982CB8;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982CC0:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x89982e0c
	if (ctx.cr6.gt) goto loc_89982E0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89982d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89982D50;
	// bdzf 4*cr6+eq,0x89982da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89982DA8;
	// bne cr6,0x89982df4
	if (!ctx.cr6.eq) goto loc_89982DF4;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89982ca4
	if (ctx.cr6.eq) goto loc_89982CA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89982D10;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89982D1C;
	sub_89932D30(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89982D2C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89982e0c
	if (ctx.cr6.eq) goto loc_89982E0C;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x89982D48;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982D50:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899cfa40
	ctx.lr = 0x89982D74;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89982e0c
	if (ctx.cr6.eq) goto loc_89982E0C;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x89982DA0;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982DA8:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x89982e0c
	if (ctx.cr6.lt) goto loc_89982E0C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x89982DEC;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982DF4:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89982e0c
	if (!ctx.cr6.eq) goto loc_89982E0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
loc_89982E0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x89982E14;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982E1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982E24;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x899831c0
	if (ctx.cr6.lt) goto loc_899831C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x89982E3C;
	sub_89980080(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mulli r6,r28,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bne cr6,0x89981120
	if (!ctx.cr6.eq) goto loc_89981120;
	// addi r8,r30,66
	ctx.r8.s64 = ctx.r30.s64 + 66;
	// li r7,192
	ctx.r7.s64 = 192;
	// oris r4,r11,16384
	ctx.r4.u64 = ctx.r11.u64 | 1073741824;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// subfc r11,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// rlwinm r7,r7,1,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// lwzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89982F14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89982F1C;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x899831c0
	if (ctx.cr6.lt) goto loc_899831C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x89982F34;
	sub_89980080(ctx, base);
	// addi r9,r30,191
	ctx.r9.s64 = ctx.r30.s64 + 191;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89982fcc
	if (!ctx.cr6.eq) goto loc_89982FCC;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
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
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
loc_89982FCC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89983034
	if (ctx.cr6.eq) goto loc_89983034;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8998300c
	if (ctx.cr6.eq) goto loc_8998300C;
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
	// blt cr6,0x89983324
	if (ctx.cr6.lt) goto loc_89983324;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x89983054
	goto loc_89983054;
loc_8998300C:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x89983054
	goto loc_89983054;
loc_89983034:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89983324
	if (ctx.cr6.eq) goto loc_89983324;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// sthx r5,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u16);
loc_89983054:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
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
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r5,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r26.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r5,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// beq cr6,0x89983100
	if (ctx.cr6.eq) goto loc_89983100;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x89983324
	if (!ctx.cr6.eq) goto loc_89983324;
loc_89983100:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_89983120:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89983128;
	sub_8991BBA0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8998094c
	if (ctx.cr6.lt) goto loc_8998094C;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899831d0
	if (ctx.cr6.lt) goto loc_899831D0;
	// bne cr6,0x89983290
	if (!ctx.cr6.eq) goto loc_89983290;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addis r8,r11,-192
	ctx.r8.s64 = ctx.r11.s64 + -12582912;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bge 0x8998318c
	if (!ctx.cr0.lt) goto loc_8998318C;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_8998318C:
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899831c0
	if (ctx.cr6.gt) goto loc_899831C0;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899831b4
	if (!ctx.cr0.lt) goto loc_899831B4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899831B4:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x89983290
	if (!ctx.cr6.gt) goto loc_89983290;
loc_899831C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899831D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x899831D8;
	sub_89980080(ctx, base);
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x89983290
	if (!ctx.cr6.eq) goto loc_89983290;
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r6,r30,168
	ctx.r6.s64 = ctx.r30.s64 + 168;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lhzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// stbx r29,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u8);
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// lbzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// oris r4,r9,176
	ctx.r4.u64 = ctx.r9.u64 | 11534336;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// lhzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
loc_89983290:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_8998329C:
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
loc_89983324:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A5E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899A5E08;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899A5E1C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899a5e30
	if (!ctx.cr6.eq) goto loc_899A5E30;
loc_899A5E24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899A5E30:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8991b880
	ctx.lr = 0x899A5E38;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a5e24
	if (ctx.cr6.eq) goto loc_899A5E24;
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
	// lhz r25,-4592(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// addi r30,r31,158
	ctx.r30.s64 = ctx.r31.s64 + 158;
	// extsh r6,r25
	ctx.r6.s64 = ctx.r25.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r29,r6,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r29,r5
	REX_STORE_U16(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u16);
	// sthx r11,r29,r30
	REX_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r9,r8,33028
	ctx.r9.u64 = ctx.r8.u64 | 33028;
	// clrlwi r22,r28,16
	ctx.r22.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r26,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r26,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r23,r10,-4592
	ctx.r23.s64 = ctx.r10.s64 + -4592;
	// stwx r9,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r22,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r22.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A5EA8;
	sub_8991B538(ctx, base);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// lis r8,384
	ctx.r8.s64 = 25165824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r29,r21
	REX_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.r8.u32);
	// bl 0x89915d78
	ctx.lr = 0x899A5EBC;
	sub_89915D78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x899A5EC4;
	sub_8991C578(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r20,r31,204
	ctx.r20.s64 = ctx.r31.s64 + 204;
	// addi r19,r31,200
	ctx.r19.s64 = ctx.r31.s64 + 200;
	// addi r7,r31,164
	ctx.r7.s64 = ctx.r31.s64 + 164;
	// addi r6,r31,194
	ctx.r6.s64 = ctx.r31.s64 + 194;
	// stwx r10,r29,r3
	REX_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r5,r31,193
	ctx.r5.s64 = ctx.r31.s64 + 193;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// li r11,111
	ctx.r11.s64 = 111;
	// li r17,256
	ctx.r17.s64 = 256;
	// stwx r26,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r26.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r11,r29,r20
	REX_STORE_U8(ctx.r29.u32 + ctx.r20.u32, ctx.r11.u8);
	// stbx r11,r29,r19
	REX_STORE_U8(ctx.r29.u32 + ctx.r19.u32, ctx.r11.u8);
	// addi r18,r31,68
	ctx.r18.s64 = ctx.r31.s64 + 68;
	// stbx r26,r29,r6
	REX_STORE_U8(ctx.r29.u32 + ctx.r6.u32, ctx.r26.u8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stbx r26,r29,r5
	REX_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r26.u8);
	// li r16,-1
	ctx.r16.s64 = -1;
	// stbx r26,r29,r4
	REX_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r26.u8);
	// addi r28,r10,-9680
	ctx.r28.s64 = ctx.r10.s64 + -9680;
	// sthx r17,r29,r30
	REX_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r17.u16);
loc_899A5F20:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r7,r23,2
	ctx.r7.s64 = ctx.r23.s64 + 2;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// rlwinm r15,r8,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// lhzx r14,r9,r7
	ctx.r14.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r14
	ctx.r8.s64 = ctx.r14.s16;
	// lbzx r10,r15,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r30,r8,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r15,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r28.u32);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lwzx r10,r15,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// oris r7,r7,49152
	ctx.r7.u64 = ctx.r7.u64 | 3221225472;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lhzx r8,r8,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r23.u32);
	// sthx r25,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r25.u16);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r22,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u32);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r26,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A5F9C;
	sub_8991B538(ctx, base);
	// addi r7,r28,12
	ctx.r7.s64 = ctx.r28.s64 + 12;
	// addi r6,r28,14
	ctx.r6.s64 = ctx.r28.s64 + 14;
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// addi r24,r31,158
	ctx.r24.s64 = ctx.r31.s64 + 158;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// sthx r16,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r16.u16);
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// sthx r17,r30,r24
	REX_STORE_U16(ctx.r30.u32 + ctx.r24.u32, ctx.r17.u16);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lhzx r7,r15,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r7.u32);
	// lhzx r6,r15,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r6.u32);
	// lwzx r5,r29,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stwx r5,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r5,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r7,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// bl 0x8991c578
	ctx.lr = 0x899A5FF8;
	sub_8991C578(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// addi r11,r28,18
	ctx.r11.s64 = ctx.r28.s64 + 18;
	// std r28,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// std r26,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// addi r10,r28,23
	ctx.r10.s64 = ctx.r28.s64 + 23;
	// addi r9,r31,207
	ctx.r9.s64 = ctx.r31.s64 + 207;
	// lhzx r7,r15,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r3.u32);
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// lhzx r5,r15,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r11.u32);
	// addi r14,r28,20
	ctx.r14.s64 = ctx.r28.s64 + 20;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lbzx r11,r15,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// lhzx r14,r15,r14
	ctx.r14.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r14.u32);
	// addi r28,r28,22
	ctx.r28.s64 = ctx.r28.s64 + 22;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// lbzx r4,r29,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// sthx r5,r30,r24
	REX_STORE_U16(ctx.r30.u32 + ctx.r24.u32, ctx.r5.u16);
	// stbx r10,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r4,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r10,r29,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r19.u32);
	// stbx r10,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u8);
	// stbx r11,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u8);
	// lbzx r9,r29,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r20.u32);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// lbzx r8,r15,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r28.u32);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// sthx r14,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r14.u16);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// ld r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r26,88(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stbx r9,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r7,r31,66
	ctx.r7.s64 = ctx.r31.s64 + 66;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// stbx r8,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwzx r4,r29,r18
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r18.u32);
	// stwx r4,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// blt cr6,0x899a5f20
	if (ctx.cr6.lt) goto loc_899A5F20;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r3,22
	ctx.r3.s64 = 22;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r26,12342(r9)
	REX_STORE_U8(ctx.r9.u32 + 12342, ctx.r26.u8);
	// stb r26,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r26.u8);
	// bl 0x89934058
	ctx.lr = 0x899A60C0;
	sub_89934058(ctx, base);
	// addi r7,r31,134
	ctx.r7.s64 = ctx.r31.s64 + 134;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// addi r5,r31,122
	ctx.r5.s64 = ctx.r31.s64 + 122;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r26,r29,r7
	REX_STORE_U8(ctx.r29.u32 + ctx.r7.u32, ctx.r26.u8);
	// stbx r26,r29,r6
	REX_STORE_U8(ctx.r29.u32 + ctx.r6.u32, ctx.r26.u8);
	// stbx r26,r29,r5
	REX_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r26.u8);
	// stbx r26,r29,r4
	REX_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r26.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A87D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899A87D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r30,r11,31968
	ctx.r30.s64 = ctx.r11.s64 + 31968;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x89934fb8
	ctx.lr = 0x899A8814;
	sub_89934FB8(ctx, base);
	// addi r11,r30,5120
	ctx.r11.s64 = ctx.r30.s64 + 5120;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r9,144
	ctx.r9.s64 = 144;
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
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x89934fb8
	ctx.lr = 0x899A8844;
	sub_89934FB8(ctx, base);
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,31372
	ctx.r29.s64 = ctx.r10.s64 + 31372;
	// addi r28,r11,4664
	ctx.r28.s64 = ctx.r11.s64 + 4664;
loc_899A8858:
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// mulli r11,r31,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899A8878;
	sub_89935880(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,35
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 35, ctx.xer);
	// blt cr6,0x899a8858
	if (ctx.cr6.lt) goto loc_899A8858;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899A8DA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-24072
	ctx.r31.s64 = ctx.r11.s64 + -24072;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// li r10,88
	ctx.r10.s64 = 88;
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x899A8DE8;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// lis r4,-30225
	ctx.r4.s64 = -1980825600;
	// addi r6,r7,31336
	ctx.r6.s64 = ctx.r7.s64 + 31336;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r4,-27304
	ctx.r4.s64 = ctx.r4.s64 + -27304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89935b08
	ctx.lr = 0x899A8E08;
	sub_89935B08(ctx, base);
	// addi r3,r31,-2208
	ctx.r3.s64 = ctx.r31.s64 + -2208;
	// li r24,4
	ctx.r24.s64 = 4;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// sth r24,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899A8E3C;
	sub_89934FB8(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r25,r11,3484
	ctx.r25.s64 = ctx.r11.s64 + 3484;
loc_899A8E48:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-2208
	ctx.r10.s64 = ctx.r31.s64 + -2208;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r31,-360
	ctx.r7.s64 = ctx.r31.s64 + -360;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r6,r8,108
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(108));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_899A8E6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x899a8e6c
	if (ctx.cr6.lt) goto loc_899A8E6C;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899a8e48
	if (ctx.cr6.lt) goto loc_899A8E48;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r10,r11,-8568
	ctx.r10.s64 = ctx.r11.s64 + -8568;
	// lbz r11,-8568(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a8f48
	if (ctx.cr6.eq) goto loc_899A8F48;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_899A8ECC:
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// lbz r27,14(r30)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// addi r4,r31,-3544
	ctx.r4.s64 = ctx.r31.s64 + -3544;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// clrlwi r26,r5,16
	ctx.r26.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x89934b48
	ctx.lr = 0x899A8F24;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899a8ecc
	if (!ctx.cr6.eq) goto loc_899A8ECC;
loc_899A8F48:
	// addi r6,r31,-2824
	ctx.r6.s64 = ctx.r31.s64 + -2824;
	// addi r5,r31,-3544
	ctx.r5.s64 = ctx.r31.s64 + -3544;
	// addi r4,r31,-1064
	ctx.r4.s64 = ctx.r31.s64 + -1064;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899A8F60;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r10,r11,-8480
	ctx.r10.s64 = ctx.r11.s64 + -8480;
	// lbz r11,-8480(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a8fec
	if (ctx.cr6.eq) goto loc_899A8FEC;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899A8F7C:
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r6,3(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r8,5(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r27,r31,-2048
	ctx.r27.s64 = ctx.r31.s64 + -2048;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// li r4,5
	ctx.r4.s64 = 5;
	// lbzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899A8FCC;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r23,r10
	ctx.r7.u64 = ctx.r23.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899a8f7c
	if (!ctx.cr6.eq) goto loc_899A8F7C;
loc_899A8FEC:
	// addi r9,r31,-2048
	ctx.r9.s64 = ctx.r31.s64 + -2048;
	// addi r10,r31,-1536
	ctx.r10.s64 = ctx.r31.s64 + -1536;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_899A8FF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x899a8ff8
	if (ctx.cr6.lt) goto loc_899A8FF8;
	// addi r9,r31,-2048
	ctx.r9.s64 = ctx.r31.s64 + -2048;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r11,r31,-472
	ctx.r11.s64 = ctx.r31.s64 + -472;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_899A9038:
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
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899a9038
	if (ctx.cr6.lt) goto loc_899A9038;
	// addi r8,r31,-1680
	ctx.r8.s64 = ctx.r31.s64 + -1680;
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r10,224
	ctx.r10.s64 = 224;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-16
	ctx.r8.s64 = -16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x899A909C;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,-1680
	ctx.r5.s64 = ctx.r31.s64 + -1680;
	// addi r30,r7,31092
	ctx.r30.s64 = ctx.r7.s64 + 31092;
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// addi r6,r30,224
	ctx.r6.s64 = ctx.r30.s64 + 224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899A90BC;
	sub_89935610(ctx, base);
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r6,r31,-144
	ctx.r6.s64 = ctx.r31.s64 + -144;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r10,168
	ctx.r10.s64 = 168;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x89934b48
	ctx.lr = 0x899A90EC;
	sub_89934B48(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-144
	ctx.r5.s64 = ctx.r31.s64 + -144;
	// addi r4,r31,-1792
	ctx.r4.s64 = ctx.r31.s64 + -1792;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899A9104;
	sub_89935610(ctx, base);
	// addi r5,r31,-1320
	ctx.r5.s64 = ctx.r31.s64 + -1320;
	// li r10,104
	ctx.r10.s64 = 104;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r9,-28
	ctx.r9.s64 = -28;
	// li r8,-28
	ctx.r8.s64 = -28;
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89934b48
	ctx.lr = 0x899A9134;
	sub_89934B48(ctx, base);
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// addi r9,r31,-1320
	ctx.r9.s64 = ctx.r31.s64 + -1320;
	// addi r11,r11,-25248
	ctx.r11.s64 = ctx.r11.s64 + -25248;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_899A9144:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899a9144
	if (ctx.cr6.lt) goto loc_899A9144;
	// sth r24,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
	// addi r8,r31,-664
	ctx.r8.s64 = ctx.r31.s64 + -664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,160
	ctx.r9.s64 = 160;
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899A91A4;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-664
	ctx.r9.s64 = ctx.r31.s64 + -664;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_899A91B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899a91b0
	if (ctx.cr6.lt) goto loc_899A91B0;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r28,r9,32768
	ctx.r28.u64 = ctx.r9.u64 | 32768;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r23,3
	ctx.r23.s64 = 196608;
	// lis r24,8
	ctx.r24.s64 = 524288;
	// lis r27,6
	ctx.r27.s64 = 393216;
	// lis r25,-3
	ctx.r25.s64 = -196608;
	// addi r9,r10,9016
	ctx.r9.s64 = ctx.r10.s64 + 9016;
loc_899A9204:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r4,r31,-2824
	ctx.r4.s64 = ctx.r31.s64 + -2824;
	// addi r3,r31,-2824
	ctx.r3.s64 = ctx.r31.s64 + -2824;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lhzx r10,r6,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// addi r6,r31,-2824
	ctx.r6.s64 = ctx.r31.s64 + -2824;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r11,r8
	ctx.r20.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r31,-2824
	ctx.r11.s64 = ctx.r31.s64 + -2824;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r20,r20,14,0,17
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 14) & 0xFFFFC000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r8,r31,-2824
	ctx.r8.s64 = ctx.r31.s64 + -2824;
	// addi r30,r31,-2824
	ctx.r30.s64 = ctx.r31.s64 + -2824;
	// stwx r27,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r27.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r26,r31,-2824
	ctx.r26.s64 = ctx.r31.s64 + -2824;
	// addi r7,r31,-2824
	ctx.r7.s64 = ctx.r31.s64 + -2824;
	// addi r11,r6,20
	ctx.r11.s64 = ctx.r6.s64 + 20;
	// stwx r25,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r25.u32);
	// srawi r22,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r22.s64 = ctx.r20.s32 >> 8;
	// rlwinm r6,r5,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// addi r5,r8,28
	ctx.r5.s64 = ctx.r8.s64 + 28;
	// addi r20,r31,-2824
	ctx.r20.s64 = ctx.r31.s64 + -2824;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// extsh r4,r21
	ctx.r4.s64 = ctx.r21.s16;
	// subf r3,r23,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r23.u64;
	// stwx r24,r10,r20
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r24.u32);
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// stwx r29,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// stwx r27,r10,r26
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stwx r3,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u32);
	// cmpwi cr6,r4,17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 17, ctx.xer);
	// stwx r8,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u32);
	// blt cr6,0x899a9204
	if (ctx.cr6.lt) goto loc_899A9204;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AD2F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899AD300;
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
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r27,r30,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r26,r30,r3
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// bgt cr6,0x899ad464
	if (ctx.cr6.gt) goto loc_899AD464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ad3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD3C0;
	// bdzf 4*cr6+eq,0x899ad464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD464;
	// bdzf 4*cr6+eq,0x899ad464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD464;
	// bdzf 4*cr6+eq,0x899ad3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD3D0;
	// bdzf 4*cr6+eq,0x899ad3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD3D0;
	// bdzf 4*cr6+eq,0x899ad3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD3DC;
	// bdzf 4*cr6+eq,0x899ad44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD44C;
	// bne cr6,0x899ad44c
	if (!ctx.cr6.eq) goto loc_899AD44C;
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
	// addi r4,r9,-6424
	ctx.r4.s64 = ctx.r9.s64 + -6424;
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
loc_899AD3C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899a9638
	ctx.lr = 0x899AD3C8;
	sub_899A9638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899AD3D0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x899ad454
	goto loc_899AD454;
loc_899AD3DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AD3E4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899ad464
	if (ctx.cr6.lt) goto loc_899AD464;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899ad410
	if (!ctx.cr6.eq) goto loc_899AD410;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x899ad454
	goto loc_899AD454;
loc_899AD410:
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
	ctx.lr = 0x899AD444;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899AD44C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
loc_899AD454:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899AD464;
	sub_899D4C10(ctx, base);
loc_899AD464:
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

DEFINE_REX_FUNC(sub_899AEF30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x899AEF38;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x899AEF44;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899af25c
	if (ctx.cr6.eq) goto loc_899AF25C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r27,r11,-4592
	ctx.r27.s64 = ctx.r11.s64 + -4592;
	// lhz r30,26864(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 26864);
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89934058
	ctx.lr = 0x899AEF6C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899af25c
	if (ctx.cr6.eq) goto loc_899AF25C;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8991b880
	ctx.lr = 0x899AEF7C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899af25c
	if (ctx.cr6.eq) goto loc_899AF25C;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lhz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r28,r9,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhz r11,-17120(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -17120);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,162
	ctx.r7.s64 = ctx.r31.s64 + 162;
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lis r10,-8016
	ctx.r10.s64 = -525336576;
	// li r26,0
	ctx.r26.s64 = 0;
	// sthx r11,r28,r7
	REX_STORE_U16(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u16);
	// clrlwi r22,r30,16
	ctx.r22.u64 = ctx.r30.u32 & 0xFFFF;
	// sthx r11,r28,r6
	REX_STORE_U16(ctx.r28.u32 + ctx.r6.u32, ctx.r11.u16);
	// ori r9,r10,260
	ctx.r9.u64 = ctx.r10.u64 | 260;
	// stwx r26,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r26.u32);
	// stwx r26,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r26.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r22,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x8991b538
	ctx.lr = 0x899AEFE8;
	sub_8991B538(ctx, base);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lis r8,392
	ctx.r8.s64 = 25690112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r28,r30
	REX_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r8.u32);
	// bl 0x89915d78
	ctx.lr = 0x899AEFFC;
	sub_89915D78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x899AF004;
	sub_8991C578(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// addi r11,r6,12032
	ctx.r11.s64 = ctx.r6.s64 + 12032;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// stwx r26,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r26.u32);
	// addi r3,r5,9448
	ctx.r3.s64 = ctx.r5.s64 + 9448;
	// rlwinm r9,r7,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// addi r21,r31,200
	ctx.r21.s64 = ctx.r31.s64 + 200;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// li r8,115
	ctx.r8.s64 = 115;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r25,-3
	ctx.r25.s64 = -196608;
	// stbx r8,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// sthx r29,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r29.u16);
	// stbx r8,r28,r21
	REX_STORE_U8(ctx.r28.u32 + ctx.r21.u32, ctx.r8.u8);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// stwx r25,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stbx r24,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r24.u8);
	// stwx r11,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r11.u32);
loc_899AF06C:
	// lhzx r8,r28,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
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
	// blt cr6,0x899af06c
	if (ctx.cr6.lt) goto loc_899AF06C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-6000
	ctx.r10.s64 = ctx.r10.s64 + -6000;
	// li r24,64
	ctx.r24.s64 = 64;
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r23,r10,256
	ctx.r23.u64 = ctx.r10.u64 | 256;
	// b 0x899af0c4
	goto loc_899AF0C4;
loc_899AF0BC:
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_899AF0C4:
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// lhz r11,6(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// lwz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2);
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
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
	// or r3,r9,r23
	ctx.r3.u64 = ctx.r9.u64 | ctx.r23.u64;
	// stwx r26,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r26.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x8991b538
	ctx.lr = 0x899AF134;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
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
	// lwzx r22,r28,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lhz r20,10(r29)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r19,12(r29)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r29.u32 + 12);
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
	// stwx r26,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r26.u32);
	// bl 0x8991c578
	ctx.lr = 0x899AF190;
	sub_8991C578(ctx, base);
	// lbz r10,14(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 14);
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// lbz r6,15(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 15);
	// addi r4,r25,1
	ctx.r4.s64 = ctx.r25.s64 + 1;
	// lbz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 16);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r3,17(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 17);
	// addi r25,r31,200
	ctx.r25.s64 = ctx.r31.s64 + 200;
	// lhz r22,18(r29)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r29.u32 + 18);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lbzu r9,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// stbx r10,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r20,r31,68
	ctx.r20.s64 = ctx.r31.s64 + 68;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r19,r31,64
	ctx.r19.s64 = ctx.r31.s64 + 64;
	// addi r18,r31,66
	ctx.r18.s64 = ctx.r31.s64 + 66;
	// addi r17,r31,44
	ctx.r17.s64 = ctx.r31.s64 + 44;
	// addi r16,r31,104
	ctx.r16.s64 = ctx.r31.s64 + 104;
	// lbzx r8,r28,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r21.u32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stbx r4,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r4.u8);
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// addi r25,r31,192
	ctx.r25.s64 = ctx.r31.s64 + 192;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r21,r31,194
	ctx.r21.s64 = ctx.r31.s64 + 194;
	// lbzx r8,r28,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// stbx r6,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r6.u8);
	// stbx r5,r30,r21
	REX_STORE_U8(ctx.r30.u32 + ctx.r21.u32, ctx.r5.u8);
	// stbx r3,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r3.u8);
	// sthx r22,r30,r19
	REX_STORE_U16(ctx.r30.u32 + ctx.r19.u32, ctx.r22.u16);
	// stbx r8,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// stbx r9,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r9.u8);
	// stwx r10,r30,r17
	REX_STORE_U32(ctx.r30.u32 + ctx.r17.u32, ctx.r10.u32);
	// stwx r24,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// blt cr6,0x899af0bc
	if (ctx.cr6.lt) goto loc_899AF0BC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x899AF234;
	sub_89934058(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x89934058
	ctx.lr = 0x899AF23C;
	sub_89934058(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r26,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r26.u8);
	// stb r26,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r26.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_899AF25C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B0E98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899B0EA0;
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
	// bgt cr6,0x899b0f80
	if (ctx.cr6.gt) goto loc_899B0F80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b0f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B0F58;
	// bdzf 4*cr6+eq,0x899b0f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B0F80;
	// bdzf 4*cr6+eq,0x899b0f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B0F80;
	// bdzf 4*cr6+eq,0x899b0f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B0F90;
	// bdzf 4*cr6+eq,0x899b0f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B0F68;
	// bne cr6,0x899b0fb8
	if (!ctx.cr6.eq) goto loc_899B0FB8;
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
	// addi r4,r9,-5008
	ctx.r4.s64 = ctx.r9.s64 + -5008;
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
loc_899B0F58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899a9638
	ctx.lr = 0x899B0F60;
	sub_899A9638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B0F68:
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
	ctx.lr = 0x899B0F80;
	sub_899D4C10(ctx, base);
loc_899B0F80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B0F90:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B0FA8;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899B0FB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B0FC0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b0f80
	if (ctx.cr6.lt) goto loc_899B0F80;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b0f68
	if (ctx.cr6.eq) goto loc_899B0F68;
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
	ctx.lr = 0x899B1014;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B1468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899B1470;
	__savegprlr_22(ctx, base);
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
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x899b21ac
	if (ctx.cr6.gt) goto loc_899B21AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b1c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1C74;
	// bdzf 4*cr6+eq,0x899b1c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1C94;
	// bdzf 4*cr6+eq,0x899b1d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1D64;
	// bdzf 4*cr6+eq,0x899b1f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1F28;
	// bdzf 4*cr6+eq,0x899b16f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B16F0;
	// bdzf 4*cr6+eq,0x899b17b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B17B4;
	// bne cr6,0x899b1d54
	if (!ctx.cr6.eq) goto loc_899B1D54;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r11,9448
	ctx.r29.s64 = ctx.r11.s64 + 9448;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b1594
	if (ctx.cr6.eq) goto loc_899B1594;
	// bl 0x899b1020
	ctx.lr = 0x899B14E0;
	sub_899B1020(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899b14fc
	if (!ctx.cr6.eq) goto loc_899B14FC;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r25,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u8);
	// b 0x899b16d0
	goto loc_899B16D0;
loc_899B14FC:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899b1548
	if (ctx.cr6.eq) goto loc_899B1548;
loc_899B151C:
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
	// blt cr6,0x899b151c
	if (ctx.cr6.lt) goto loc_899B151C;
	// b 0x899b1578
	goto loc_899B1578;
loc_899B1548:
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
loc_899B154C:
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
	// blt cr6,0x899b154c
	if (ctx.cr6.lt) goto loc_899B154C;
loc_899B1578:
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
	// b 0x899b16d0
	goto loc_899B16D0;
loc_899B1594:
	// bl 0x8991c8b8
	ctx.lr = 0x899B1598;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899b15ac
	if (!ctx.cr6.eq) goto loc_899B15AC;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899B15AC;
	sub_89936360(ctx, base);
loc_899B15AC:
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
	// blt cr6,0x899b16d0
	if (ctx.cr6.lt) goto loc_899B16D0;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// stbx r25,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r25.u8);
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
	// addi r28,r5,-4904
	ctx.r28.s64 = ctx.r5.s64 + -4904;
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
	ctx.lr = 0x899B16D0;
	sub_899D4640(ctx, base);
loc_899B16D0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899b21ac
	if (!ctx.cr6.eq) goto loc_899B21AC;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r25,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B16F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B16F8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b1c84
	if (ctx.cr6.lt) goto loc_899B1C84;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwzx r8,r5,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r29,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B17B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899B17BC;
	sub_8991BA70(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x899b1c84
	if (ctx.cr6.lt) goto loc_899B1C84;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r8,r29,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// srawi. r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x899b181c
	if (!ctx.cr0.lt) goto loc_899B181C;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_899B181C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r23,r11,r12
	ctx.r23.u64 = ctx.r11.u64 & ctx.r12.u64;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r22,r6,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// lhzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lhzx r7,r22,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r28.u32);
	// addi r22,r9,8
	ctx.r22.s64 = ctx.r9.s64 + 8;
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r5,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r11,r5,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r23,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r23.u32);
	// sthx r22,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u16);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// stwx r4,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r4.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// or r8,r9,r23
	ctx.r8.u64 = ctx.r9.u64 | ctx.r23.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// bgt cr6,0x899b1c04
	if (ctx.cr6.gt) goto loc_899B1C04;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b1a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1A54;
	// bdzf 4*cr6+eq,0x899b1adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1ADC;
	// bdzf 4*cr6+eq,0x899b1b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1B80;
	// bdzf 4*cr6+eq,0x899b1bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1BB0;
	// bne cr6,0x899b1bcc
	if (!ctx.cr6.eq) goto loc_899B1BCC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89932b18
	ctx.lr = 0x899B1914;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89932d30
	ctx.lr = 0x899B1920;
	sub_89932D30(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b1acc
	if (!ctx.cr6.eq) goto loc_899B1ACC;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b1c04
	if (ctx.cr6.eq) goto loc_899B1C04;
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r9,-4888
	ctx.r11.s64 = ctx.r9.s64 + -4888;
	// lbzx r8,r29,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r5,1(r23)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + 1);
	// bl 0x8991db50
	ctx.lr = 0x899B1980;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b1c04
	if (ctx.cr6.eq) goto loc_899B1C04;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-4900
	ctx.r11.s64 = ctx.r11.s64 + -4900;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_899B1998:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r8,2(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzu r9,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rotlwi r6,r8,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r8,r31,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rotlwi r4,r9,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r26,r31,r25
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// lwz r7,4(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// mullw r22,r10,r5
	ctx.r22.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r9,r10,224
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x899cda00
	ctx.lr = 0x899B1A38;
	sub_899CDA00(ctx, base);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x899b1998
	if (ctx.cr6.lt) goto loc_899B1998;
	// b 0x899b1c04
	goto loc_899B1C04;
loc_899B1A54:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_899B1A5C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x899b1a78
	if (!ctx.cr6.gt) goto loc_899B1A78;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B1A78:
	// bge cr6,0x899b1a88
	if (!ctx.cr6.lt) goto loc_899B1A88;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_899B1A88:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899b1a5c
	if (ctx.cr6.lt) goto loc_899B1A5C;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x899b1c04
	if (!ctx.cr6.eq) goto loc_899B1C04;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// subfic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stbx r4,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
loc_899B1ACC:
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// b 0x899b1c04
	goto loc_899B1C04;
loc_899B1ADC:
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r8,r29,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// clrlwi r3,r4,26
	ctx.r3.u64 = ctx.r4.u32 & 0x3F;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b1c04
	if (!ctx.cr6.eq) goto loc_899B1C04;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x899B1B30;
	sub_899CFA40(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899b1b4c
	if (ctx.cr6.eq) goto loc_899B1B4C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B1B4C:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b1c04
	if (ctx.cr6.eq) goto loc_899B1C04;
	// lbzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
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
	// stbx r6,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899b1c04
	goto loc_899B1C04;
loc_899B1B80:
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
	// bne cr6,0x899b1c04
	if (!ctx.cr6.eq) goto loc_899B1C04;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u8);
	// b 0x899b1c04
	goto loc_899B1C04;
loc_899B1BB0:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899b1c04
	goto loc_899B1C04;
loc_899B1BCC:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b1c04
	if (!ctx.cr6.eq) goto loc_899B1C04;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stbx r3,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u8);
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
loc_899B1C04:
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
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1C74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899aa060
	ctx.lr = 0x899B1C7C;
	sub_899AA060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b21ac
	if (!ctx.cr6.eq) goto loc_899B21AC;
loc_899B1C84:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_899B1C88:
	// bl 0x899b0e98
	ctx.lr = 0x899B1C8C;
	sub_899B0E98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1C94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B1C9C;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x899b1c88
	if (ctx.cr6.lt) goto loc_899B1C88;
	// bl 0x899a9f48
	ctx.lr = 0x899B1CB4;
	sub_899A9F48(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b1cfc
	if (ctx.cr6.eq) goto loc_899B1CFC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899b1d38
	if (!ctx.cr6.eq) goto loc_899B1D38;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x899b1d38
	if (!ctx.cr6.lt) goto loc_899B1D38;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B1CF4;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1CFC:
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
	// bne cr6,0x899b1d24
	if (!ctx.cr6.eq) goto loc_899B1D24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b21ac
	if (!ctx.cr6.eq) goto loc_899B21AC;
loc_899B1D24:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899B1D2C;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B1D38:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// b 0x899b2164
	goto loc_899B2164;
loc_899B1D54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899aa4a0
	ctx.lr = 0x899B1D5C;
	sub_899AA4A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1D64:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B1D6C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x899b1c88
	if (ctx.cr6.lt) goto loc_899B1C88;
	// bl 0x899a9f48
	ctx.lr = 0x899B1D84;
	sub_899A9F48(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899b1de8
	if (!ctx.cr6.eq) goto loc_899B1DE8;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b1de8
	if (ctx.cr6.eq) goto loc_899B1DE8;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B1DD4;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1DE8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B1DF8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b21ac
	if (ctx.cr6.eq) goto loc_899B21AC;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mulli r25,r29,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r24,r30,196
	ctx.r24.s64 = ctx.r30.s64 + 196;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r23,r11,-4648
	ctx.r23.s64 = ctx.r11.s64 + -4648;
loc_899B1E80:
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r8,r25,r24
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r24.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwzx r8,r5,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r5,r6,128
	ctx.r5.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r22
	ctx.r4.u64 = ctx.r9.u64 + ctx.r22.u64;
	// bl 0x899cbc30
	ctx.lr = 0x899B1F0C;
	sub_899CBC30(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x899b1e80
	if (ctx.cr6.lt) goto loc_899B1E80;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B1F28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B1F30;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x899b1c88
	if (ctx.cr6.lt) goto loc_899B1C88;
	// bl 0x899a9f48
	ctx.lr = 0x899B1F48;
	sub_899A9F48(ctx, base);
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r29,r29,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// rlwinm r9,r10,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwzx r8,r29,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r7,r8,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	// rlwinm r7,r7,0,10,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lhzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x899b21ac
	if (ctx.cr6.eq) goto loc_899B21AC;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2108
	if (ctx.cr6.eq) goto loc_899B2108;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899b1fc0
	if (ctx.cr6.eq) goto loc_899B1FC0;
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
	// blt cr6,0x899b21ac
	if (ctx.cr6.lt) goto loc_899B21AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899b214c
	goto loc_899B214C;
loc_899B1FC0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b1ff0
	if (!ctx.cr6.eq) goto loc_899B1FF0;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x899b214c
	goto loc_899B214C;
loc_899B1FF0:
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// li r25,0
	ctx.r25.s64 = 0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2028
	if (ctx.cr6.eq) goto loc_899B2028;
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
	// blt cr6,0x899b21ac
	if (ctx.cr6.lt) goto loc_899B21AC;
	// stbx r25,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
	// b 0x899b2040
	goto loc_899B2040;
loc_899B2028:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B2038;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b21ac
	if (ctx.cr6.eq) goto loc_899B21AC;
loc_899B2040:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// addi r10,r10,-4628
	ctx.r10.s64 = ctx.r10.s64 + -4628;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r9,r8,-4612
	ctx.r9.s64 = ctx.r8.s64 + -4612;
	// rotlwi r10,r7,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rotlwi r11,r3,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899329e0
	ctx.lr = 0x899B2098;
	sub_899329E0(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r26,0(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x899B20C8;
	sub_89932C20(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x899cbb90
	ctx.lr = 0x899B20E4;
	sub_899CBB90(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x899b21ac
	if (!ctx.cr6.eq) goto loc_899B21AC;
	// stbx r25,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B2108:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b21ac
	if (ctx.cr6.eq) goto loc_899B21AC;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899B2130;
	sub_89936360(ctx, base);
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
loc_899B214C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
loc_899B2164:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
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
loc_899B21AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BFE30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899BFE38;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991f608
	ctx.lr = 0x899BFE48;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899bfe60
	if (!ctx.cr6.eq) goto loc_899BFE60;
loc_899BFE54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899BFE60:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r3,41
	ctx.r3.s64 = 41;
	// addi r24,r11,-4592
	ctx.r24.s64 = ctx.r11.s64 + -4592;
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// lhz r28,2(r24)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r24.u32 + 2);
	// bl 0x8991b880
	ctx.lr = 0x899BFE78;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bfe54
	if (ctx.cr6.eq) goto loc_899BFE54;
	// lhz r26,0(r24)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhz r22,26864(r10)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 26864);
	// stwx r22,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r22.u32);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lis r5,-16208
	ctx.r5.s64 = -1062207488;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r4,r5,260
	ctx.r4.u64 = ctx.r5.u64 | 260;
	// stwx r27,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BFECC;
	sub_8991B538(ctx, base);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// lis r11,576
	ctx.r11.s64 = 37748736;
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r11,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r11.u32);
	// stwx r10,r30,r20
	REX_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BFEEC;
	sub_8991C578(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r6,r31,164
	ctx.r6.s64 = ctx.r31.s64 + 164;
	// addi r7,r9,9448
	ctx.r7.s64 = ctx.r9.s64 + 9448;
	// extsh r23,r28
	ctx.r23.s64 = ctx.r28.s16;
	// extsh r25,r29
	ctx.r25.s64 = ctx.r29.s16;
	// addi r19,r31,204
	ctx.r19.s64 = ctx.r31.s64 + 204;
	// addi r18,r31,200
	ctx.r18.s64 = ctx.r31.s64 + 200;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// li r9,116
	ctx.r9.s64 = 116;
	// stbx r10,r23,r7
	REX_STORE_U8(ctx.r23.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// stbx r10,r25,r7
	REX_STORE_U8(ctx.r25.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// stbx r9,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r9.u8);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stbx r9,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r9.u8);
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// sthx r8,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u16);
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// stwx r29,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r29.u32);
	// sthx r8,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u16);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r25,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r25.u32);
	// addi r29,r10,1296
	ctx.r29.s64 = ctx.r10.s64 + 1296;
	// stwx r23,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r23.u32);
	// ori r17,r9,256
	ctx.r17.u64 = ctx.r9.u64 | 256;
loc_899BFF6C:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r16,r28,4,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r24,2
	ctx.r9.s64 = ctx.r24.s64 + 2;
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
	// lhzx r8,r8,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r24.u32);
	// stwx r22,r14,r3
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, ctx.r22.u32);
	// sthx r26,r14,r5
	REX_STORE_U16(ctx.r14.u32 + ctx.r5.u32, ctx.r26.u16);
	// sthx r8,r14,r7
	REX_STORE_U16(ctx.r14.u32 + ctx.r7.u32, ctx.r8.u16);
	// or r7,r4,r17
	ctx.r7.u64 = ctx.r4.u64 | ctx.r17.u64;
	// stwx r10,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r27,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r27.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stwx r7,r14,r31
	REX_STORE_U32(ctx.r14.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BFFE0;
	sub_8991B538(ctx, base);
	// lwzx r9,r30,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lis r10,13
	ctx.r10.s64 = 851968;
	// stwx r9,r14,r6
	REX_STORE_U32(ctx.r14.u32 + ctx.r6.u32, ctx.r9.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwzx r8,r30,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// stwx r8,r14,r5
	REX_STORE_U32(ctx.r14.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r10,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r27,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C0014;
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
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// addi r16,r31,104
	ctx.r16.s64 = ctx.r31.s64 + 104;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r15,r11,16
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r15,40
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 40, ctx.xer);
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r5,r14,r3
	REX_STORE_U8(ctx.r14.u32 + ctx.r3.u32, ctx.r5.u8);
	// stbx r7,r14,r4
	REX_STORE_U8(ctx.r14.u32 + ctx.r4.u32, ctx.r7.u8);
	// lbzx r5,r30,r18
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r18.u32);
	// stbx r5,r14,r9
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r8,r14,r6
	REX_STORE_U8(ctx.r14.u32 + ctx.r6.u32, ctx.r8.u8);
	// lbzx r4,r30,r19
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// stbx r4,r14,r10
	REX_STORE_U8(ctx.r14.u32 + ctx.r10.u32, ctx.r4.u8);
	// stwx r25,r14,r28
	REX_STORE_U32(ctx.r14.u32 + ctx.r28.u32, ctx.r25.u32);
	// stwx r23,r14,r16
	REX_STORE_U32(ctx.r14.u32 + ctx.r16.u32, ctx.r23.u32);
	// blt cr6,0x899bff6c
	if (ctx.cr6.lt) goto loc_899BFF6C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r25,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 9) & 0xFFFFFE00;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lhzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r8,r8,12032
	ctx.r8.s64 = ctx.r8.s64 + 12032;
loc_899C00A0:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,512
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 512, ctx.xer);
	// stwx r9,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u32);
	// blt cr6,0x899c00a0
	if (ctx.cr6.lt) goto loc_899C00A0;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r27.u8);
	// stb r27,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r27.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C1D80;
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
	// bge 0x899c1e20
	if (!ctx.cr0.lt) goto loc_899C1E20;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C1E20:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899c1f1c
	if (ctx.cr6.gt) goto loc_899C1F1C;
	// lhzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899c1e3c
	if (!ctx.cr0.lt) goto loc_899C1E3C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C1E3C:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899c1f1c
	if (ctx.cr6.gt) goto loc_899C1F1C;
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
	// addi r6,r8,2224
	ctx.r6.s64 = ctx.r8.s64 + 2224;
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
	ctx.lr = 0x899C1E98;
	sub_8991B610(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C1EA8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c1f24
	if (ctx.cr6.eq) goto loc_899C1F24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C1EB8;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c1f24
	if (ctx.cr6.eq) goto loc_899C1F24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C1EC8;
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
	ctx.lr = 0x899C1EFC;
	sub_89932C20(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// bl 0x899cc3d0
	ctx.lr = 0x899C1F14;
	sub_899CC3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899C1F1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_899C1F24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C2E08;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4768(r1)
	ea = -4768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x89934860
	ctx.lr = 0x899C2E44;
	sub_89934860(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r31,r10,34050
	ctx.r31.u64 = ctx.r10.u64 | 34050;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x899352b8
	ctx.lr = 0x899C2E7C;
	sub_899352B8(ctx, base);
	// addi r8,r1,2400
	ctx.r8.s64 = ctx.r1.s64 + 2400;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x89934860
	ctx.lr = 0x899C2EA8;
	sub_89934860(ctx, base);
	// addi r7,r1,2400
	ctx.r7.s64 = ctx.r1.s64 + 2400;
	// li r10,144
	ctx.r10.s64 = 144;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-26
	ctx.r8.s64 = -26;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x899352b8
	ctx.lr = 0x899C2ED8;
	sub_899352B8(ctx, base);
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-6544
	ctx.r31.s64 = ctx.r11.s64 + -6544;
	// addi r27,r10,21844
	ctx.r27.s64 = ctx.r10.s64 + 21844;
loc_899C2EEC:
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_899C2EF4:
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r8,r31,1704
	ctx.r8.s64 = ctx.r31.s64 + 1704;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
loc_899C2F24:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x899c2f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C2F24;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,4008
	ctx.r5.s64 = ctx.r31.s64 + 4008;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r4,r1,2400
	ctx.r4.s64 = ctx.r1.s64 + 2400;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// lhz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// lhz r28,10(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r10,14(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// sth r28,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r28.u16);
	// sth r6,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
loc_899C2F84:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r5.u32 = ea;
	// bdnz 0x899c2f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C2F84;
	// addi r11,r1,2400
	ctx.r11.s64 = ctx.r1.s64 + 2400;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r4,14(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// sth r7,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r7.u16);
	// sth r6,10(r8)
	REX_STORE_U16(ctx.r8.u32 + 10, ctx.r6.u16);
	// sth r5,12(r8)
	REX_STORE_U16(ctx.r8.u32 + 12, ctx.r5.u16);
	// sth r4,14(r8)
	REX_STORE_U16(ctx.r8.u32 + 14, ctx.r4.u16);
	// blt cr6,0x899c2ef4
	if (ctx.cr6.lt) goto loc_899C2EF4;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,1704
	ctx.r10.s64 = ctx.r31.s64 + 1704;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r31,-1920
	ctx.r11.s64 = ctx.r31.s64 + -1920;
	// rlwinm r28,r9,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r29,r30,60
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(60));
	// addi r6,r27,-20
	ctx.r6.s64 = ctx.r27.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x899C2FFC;
	sub_89935610(ctx, base);
	// addi r10,r31,4008
	ctx.r10.s64 = ctx.r31.s64 + 4008;
	// addi r11,r31,6312
	ctx.r11.s64 = ctx.r31.s64 + 6312;
	// addi r6,r27,-20
	ctx.r6.s64 = ctx.r27.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899C3018;
	sub_89935610(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x899c2eec
	if (ctx.cr6.lt) goto loc_899C2EEC;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,2316
	ctx.r10.s64 = ctx.r11.s64 + 2316;
	// lbz r11,2316(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2316);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x899c30b0
	if (ctx.cr6.eq) goto loc_899C30B0;
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
loc_899C304C:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r26,3(r30)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// li r8,-20
	ctx.r8.s64 = -20;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// lhzu r4,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// li r7,-20
	ctx.r7.s64 = -20;
	// add r5,r29,r6
	ctx.r5.u64 = ctx.r29.u64 + ctx.r6.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,40
	ctx.r5.s64 = 40;
	// add r25,r3,r31
	ctx.r25.u64 = ctx.r3.u64 + ctx.r31.u64;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899C3094;
	sub_89934FB8(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899c304c
	if (!ctx.cr6.eq) goto loc_899C304C;
loc_899C30B0:
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-6032
	ctx.r29.s64 = ctx.r11.s64 + -6032;
loc_899C30BC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r30,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(396));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x899C30E8;
	sub_89935C28(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x899c30bc
	if (ctx.cr6.lt) goto loc_899C30BC;
	// addi r1,r1,4768
	ctx.r1.s64 = ctx.r1.s64 + 4768;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3F98) {
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
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899c3fc4
	if (ctx.cr6.eq) goto loc_899C3FC4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
loc_899C3FC4:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8991c1b8
	sub_8991C1B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C40C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C40C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C40D4;
	sub_8991B9F0(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899c4104
	if (!ctx.cr6.lt) goto loc_899C4104;
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
loc_899C4104:
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
	// clrlwi r9,r5,29
	ctx.r9.u64 = ctx.r5.u32 & 0x7;
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

DEFINE_REX_FUNC(sub_899C5448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C5450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899C5464;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c553c
	if (ctx.cr6.eq) goto loc_899C553C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899C5474;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c553c
	if (ctx.cr6.eq) goto loc_899C553C;
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
	// lis r8,-16336
	ctx.r8.s64 = -1070596096;
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
	// ori r4,r8,20
	ctx.r4.u64 = ctx.r8.u64 | 20;
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
	ctx.lr = 0x899C54F8;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C5500;
	sub_8991C578(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,4946(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 4946);
	// bl 0x8991c678
	ctx.lr = 0x899C5514;
	sub_8991C678(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12024(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12024);
	// bl 0x8991cac0
	ctx.lr = 0x899C5524;
	sub_8991CAC0(ctx, base);
	// addi r7,r30,172
	ctx.r7.s64 = ctx.r30.s64 + 172;
	// addi r6,r30,176
	ctx.r6.s64 = ctx.r30.s64 + 176;
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// stwx r29,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r29,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
loc_899C553C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C5A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899C5A90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899c5aec
	if (ctx.cr6.lt) goto loc_899C5AEC;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899c5aec
	if (ctx.cr6.gt) goto loc_899C5AEC;
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
	// bge 0x899c5ad4
	if (!ctx.cr0.lt) goto loc_899C5AD4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C5AD4:
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
	// b 0x899c5af0
	goto loc_899C5AF0;
loc_899C5AEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899C5AF0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c5c5c
	if (ctx.cr6.eq) goto loc_899C5C5C;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x89934058
	ctx.lr = 0x899C5B04;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c5c5c
	if (ctx.cr6.eq) goto loc_899C5C5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899C5B14;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c5c5c
	if (ctx.cr6.eq) goto loc_899C5C5C;
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// ori r29,r11,20077
	ctx.r29.u64 = ctx.r11.u64 | 20077;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lwz r11,-9212(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -9212);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// addi r30,r9,12800
	ctx.r30.s64 = ctx.r9.s64 + 12800;
	// lhz r28,-4592(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// addi r27,r11,12345
	ctx.r27.s64 = ctx.r11.s64 + 12345;
	// mulli r31,r7,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwinm r9,r5,19,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C5B88;
	sub_8991B538(ctx, base);
	// mullw r11,r27,r29
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// stwx r25,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r25.u32);
	// addi r27,r10,12345
	ctx.r27.s64 = ctx.r10.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// rlwinm r10,r4,26,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x1FF;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// rlwinm r11,r7,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFF;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// stwx r24,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u32);
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C5BF4;
	sub_8991C578(ctx, base);
	// mullw r11,r27,r29
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r30,204
	ctx.r5.s64 = ctx.r30.s64 + 204;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r23)
	REX_STORE_U32(ctx.r23.u32 + -9212, ctx.r11.u32);
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// stbx r26,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r26.u8);
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// rlwinm r9,r5,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFF;
	// stbx r26,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r26.u8);
	// li r8,256
	ctx.r8.s64 = 256;
	// li r5,7
	ctx.r5.s64 = 7;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stbx r5,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_899C5C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C7010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899C7018;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c7050
	if (ctx.cr6.lt) goto loc_899C7050;
	// bne cr6,0x899c73ac
	if (!ctx.cr6.eq) goto loc_899C73AC;
	// bl 0x899c40c0
	ctx.lr = 0x899C7048;
	sub_899C40C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C7050:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x899c70ec
	if (ctx.cr6.eq) goto loc_899C70EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899C7070;
	sub_89932B18(ctx, base);
	// addi r8,r30,186
	ctx.r8.s64 = ctx.r30.s64 + 186;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r28,r30,162
	ctx.r28.s64 = ctx.r30.s64 + 162;
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
	ctx.lr = 0x899C70B4;
	sub_89932C20(ctx, base);
	// subf r6,r3,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c70d8
	if (ctx.cr6.eq) goto loc_899C70D8;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x899c70d4
	if (ctx.cr6.gt) goto loc_899C70D4;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_899C70D4:
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
loc_899C70D8:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c70e4
	if (!ctx.cr0.lt) goto loc_899C70E4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C70E4:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// ble cr6,0x899c7110
	if (!ctx.cr6.gt) goto loc_899C7110;
loc_899C70EC:
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899c7134
	if (!ctx.cr6.lt) goto loc_899C7134;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// b 0x899c7130
	goto loc_899C7130;
loc_899C7110:
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899c7134
	if (!ctx.cr6.gt) goto loc_899C7134;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
loc_899C7130:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_899C7134:
	// addi r9,r30,162
	ctx.r9.s64 = ctx.r30.s64 + 162;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// lhzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c7194
	if (!ctx.cr0.lt) goto loc_899C7194;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C7194:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c71ac
	if (!ctx.cr6.gt) goto loc_899C71AC;
loc_899C719C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C71AC:
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// lhzx r3,r31,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r11.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c71ec
	if (!ctx.cr0.lt) goto loc_899C71EC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C71EC:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c719c
	if (ctx.cr6.gt) goto loc_899C719C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C71FC;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C7208;
	sub_89932D30(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899C7210;
	sub_8991B770(ctx, base);
	// addi r25,r30,184
	ctx.r25.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c72dc
	if (ctx.cr6.eq) goto loc_899C72DC;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r26,r31,r27
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r11,r9,57344
	ctx.r11.u64 = ctx.r9.u64 | 57344;
	// ori r7,r8,32896
	ctx.r7.u64 = ctx.r8.u64 | 32896;
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r8,r5,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r7,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// lhzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r22,r8
	ctx.r22.s64 = ctx.r8.s16;
	// lbzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lhzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// neg r11,r22
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mulli r21,r5,-7168
	ctx.r21.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-7168));
	// rlwinm r20,r5,15,0,16
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// mullw r19,r22,r23
	ctx.r19.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r23.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r9,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 8;
	// rlwinm r22,r22,15,0,16
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 15) & 0xFFFF8000;
	// mullw r23,r5,r23
	ctx.r23.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// srawi r11,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 8;
	// srawi r5,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r19.s32 >> 8;
	// srawi r22,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 8;
	// srawi r23,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r5,r22,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r22.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// addis r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -262144;
	// bl 0x899d7a90
	ctx.lr = 0x899C72D0;
	sub_899D7A90(ctx, base);
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r4,r11,255
	ctx.r4.s64 = ctx.r11.s64 + 255;
	// stbx r4,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r4.u8);
loc_899C72DC:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C72EC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c73ac
	if (ctx.cr6.eq) goto loc_899C73AC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C72FC;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c73ac
	if (ctx.cr6.eq) goto loc_899C73AC;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r10,r7,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r28,r10,15,0,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r30,r30,13,0,18
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFFFE000;
	// srawi r29,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 8;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// srawi r28,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r30,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 8;
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x8999efa8
	ctx.lr = 0x899C7390;
	sub_8999EFA8(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899c73a4
	if (ctx.cr6.eq) goto loc_899C73A4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
loc_899C73A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C73AC;
	sub_89932A38(ctx, base);
loc_899C73AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CABA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899CABA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r9,r11,158
	ctx.r9.s64 = ctx.r11.s64 + 158;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r28,r11,168
	ctx.r28.s64 = ctx.r11.s64 + 168;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// lhzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// addi r27,r11,56
	ctx.r27.s64 = ctx.r11.s64 + 56;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r26,r10,1,22,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// lhzx r26,r26,r6
	ctx.r26.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r6.u32);
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lhzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r10,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r10.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r7,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u32);
	// bge 0x899cac4c
	if (!ctx.cr0.lt) goto loc_899CAC4C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CAC4C:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// ble cr6,0x899cac64
	if (!ctx.cr6.gt) goto loc_899CAC64;
loc_899CAC54:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CAC64:
	// lhzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addic. r10,r9,-512
	ctx.xer.ca = ctx.r9.u32 > 511;
	ctx.r10.s64 = ctx.r9.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899cac78
	if (!ctx.cr0.lt) goto loc_899CAC78;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CAC78:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// bgt cr6,0x899cac54
	if (ctx.cr6.gt) goto loc_899CAC54;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// addi r26,r11,20
	ctx.r26.s64 = ctx.r11.s64 + 20;
	// addi r7,r11,188
	ctx.r7.s64 = ctx.r11.s64 + 188;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r25,r11,36
	ctx.r25.s64 = ctx.r11.s64 + 36;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r24,r11,32
	ctx.r24.s64 = ctx.r11.s64 + 32;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r5,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r6,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r5,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r5.u32);
	// blt cr6,0x899cad98
	if (ctx.cr6.lt) goto loc_899CAD98;
	// beq cr6,0x899cad24
	if (ctx.cr6.eq) goto loc_899CAD24;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x899cade0
	if (!ctx.cr6.lt) goto loc_899CADE0;
	// addi r11,r4,4096
	ctx.r11.s64 = ctx.r4.s64 + 4096;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899cade0
	if (!ctx.cr6.eq) goto loc_899CADE0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CAD24:
	// addi r11,r11,182
	ctx.r11.s64 = ctx.r11.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,720
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 720, ctx.xer);
	// blt cr6,0x899cad5c
	if (ctx.cr6.lt) goto loc_899CAD5C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CAD5C:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x8991db50
	ctx.lr = 0x899CAD68;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899cade0
	if (ctx.cr6.eq) goto loc_899CADE0;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// li r7,12
	ctx.r7.s64 = 12;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addis r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -1310720;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x899ce510
	ctx.lr = 0x899CAD90;
	sub_899CE510(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899CAD98:
	// addi r9,r11,104
	ctx.r9.s64 = ctx.r11.s64 + 104;
	// addi r6,r11,100
	ctx.r6.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// bne cr6,0x899cade0
	if (!ctx.cr6.eq) goto loc_899CADE0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r3,r9,176
	ctx.r3.u64 = ctx.r9.u64 | 11534336;
	// stbx r6,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_899CADE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBEC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899CBED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-2880(r1)
	ea = -2880 + ctx.r1.u32;
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x89934fb8
	ctx.lr = 0x899CBF08;
	sub_89934FB8(ctx, base);
	// lis r11,-30223
	ctx.r11.s64 = -1980694528;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-23760
	ctx.r30.s64 = ctx.r11.s64 + -23760;
loc_899CBF14:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,15200
	ctx.r9.s64 = ctx.r30.s64 + 15200;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_899CBF38:
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_899CBF48:
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,12480
	ctx.r7.s64 = ctx.r30.s64 + 12480;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899CBF90:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899cbf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CBF90;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899cbf48
	if (ctx.cr6.lt) goto loc_899CBF48;
	// mulli r10,r4,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(170));
	// addi r9,r30,12480
	ctx.r9.s64 = ctx.r30.s64 + 12480;
	// mulli r11,r4,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899CBFD4;
	sub_89935880(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cbf38
	if (ctx.cr6.lt) goto loc_899CBF38;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cbf14
	if (ctx.cr6.lt) goto loc_899CBF14;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r3,r30,15200
	ctx.r3.s64 = ctx.r30.s64 + 15200;
	// addi r4,r11,15844
	ctx.r4.s64 = ctx.r11.s64 + 15844;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x899cbe38
	ctx.lr = 0x899CC010;
	sub_899CBE38(ctx, base);
	// addi r1,r1,2880
	ctx.r1.s64 = ctx.r1.s64 + 2880;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CCE38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899cce84
	if (ctx.cr6.lt) goto loc_899CCE84;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cce84
	if (ctx.cr6.gt) goto loc_899CCE84;
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
	// bge 0x899cce6c
	if (!ctx.cr0.lt) goto loc_899CCE6C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CCE6C:
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
	// b 0x899cce88
	goto loc_899CCE88;
loc_899CCE84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CCE88:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cce9c
	if (!ctx.cr6.eq) goto loc_899CCE9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899CCE9C:
	// b 0x899ccd48
	sub_899CCD48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CD5F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899CD600;
	__savegprlr_14(ctx, base);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r3,r4,20077
	ctx.r3.u64 = ctx.r4.u64 | 20077;
	// extsh r20,r6
	ctx.r20.s64 = ctx.r6.s16;
	// lwz r11,-9212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -9212);
	// lis r30,-30320
	ctx.r30.s64 = -1987051520;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r22,r30,9016
	ctx.r22.s64 = ctx.r30.s64 + 9016;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r5)
	REX_STORE_U32(ctx.r5.u32 + -9212, ctx.r11.u32);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// rlwinm r11,r11,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// add r24,r10,r30
	ctx.r24.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r25,r9,-4
	ctx.r25.s64 = ctx.r9.s64 + -4;
	// addi r21,r11,24
	ctx.r21.s64 = ctx.r11.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// lhz r15,-21396(r5)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r5.u32 + -21396);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// stw r31,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ori r30,r4,32896
	ctx.r30.u64 = ctx.r4.u64 | 32896;
	// lis r16,-32768
	ctx.r16.s64 = -2147483648;
	// li r17,22
	ctx.r17.s64 = 22;
	// lis r18,512
	ctx.r18.s64 = 33554432;
	// li r19,116
	ctx.r19.s64 = 116;
	// addi r28,r11,14336
	ctx.r28.s64 = ctx.r11.s64 + 14336;
	// addi r26,r10,11976
	ctx.r26.s64 = ctx.r10.s64 + 11976;
	// addi r23,r9,11272
	ctx.r23.s64 = ctx.r9.s64 + 11272;
loc_899CD6A0:
	// add r10,r24,r27
	ctx.r10.u64 = ctx.r24.u64 + ctx.r27.u64;
	// std r28,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r28.u64);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// li r29,2
	ctx.r29.s64 = 2;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r21,4,0,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r28,r5,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// sth r6,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r6.u16);
	// stw r7,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// stw r5,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r10,72(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 68);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwzx r9,r14,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r10.u32);
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwzx r4,r29,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// ld r28,-168(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lwz r29,36(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// sth r15,134(r11)
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r15.u16);
	// stw r31,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r30,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// beq cr6,0x899cd7a8
	if (ctx.cr6.eq) goto loc_899CD7A8;
	// addi r10,r20,128
	ctx.r10.s64 = ctx.r20.s64 + 128;
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// lhzx r9,r4,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r22.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// stw r5,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lhzx r4,r9,r22
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r22.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// b 0x899cd888
	goto loc_899CD888;
loc_899CD7A8:
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r9,r20,128
	ctx.r9.s64 = ctx.r20.s64 + 128;
	// stw r29,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r14,r9,1,22,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r24,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// stw r4,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lhzx r29,r14,r22
	ctx.r29.u64 = REX_LOAD_U16(ctx.r14.u32 + ctx.r22.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// lhzx r5,r5,r22
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r22.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r29,-168(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// srawi r5,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 8;
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwzx r4,r29,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// sth r4,132(r11)
	REX_STORE_U16(ctx.r11.u32 + 132, ctx.r4.u16);
loc_899CD808:
	// addi r5,r9,21
	ctx.r5.s64 = ctx.r9.s64 + 21;
	// lwzu r10,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// stwx r10,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// lhz r5,132(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 132);
	// stw r17,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r17.u32);
	// stw r16,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// lwz r29,712(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 712);
	// stw r29,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// lwz r29,708(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// stb r31,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r31.u8);
	// stb r31,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r31.u8);
	// stb r31,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r31.u8);
	// stw r18,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r18.u32);
	// stw r31,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r31.u32);
	// stw r30,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r30.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r31,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stb r19,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r19.u8);
	// stw r29,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// stw r31,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r31.u32);
	// stw r31,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r31.u32);
	// stw r31,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r31.u32);
	// stb r31,80(r10)
	REX_STORE_U8(ctx.r10.u32 + 80, ctx.r31.u8);
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// lhz r4,134(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// sth r4,72(r10)
	REX_STORE_U16(ctx.r10.u32 + 72, ctx.r4.u16);
	// blt cr6,0x899cd808
	if (ctx.cr6.lt) goto loc_899CD808;
	// sth r31,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r31.u16);
loc_899CD888:
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// lwz r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// li r10,192
	ctx.r10.s64 = 192;
	// stb r31,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r31.u8);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r11,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r9,519
	ctx.r9.s64 = 519;
	// stb r10,71(r11)
	REX_STORE_U8(ctx.r11.u32 + 71, ctx.r10.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r10,70(r11)
	REX_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
	// stw r5,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// sth r9,68(r11)
	REX_STORE_U16(ctx.r11.u32 + 68, ctx.r9.u16);
	// blt cr6,0x899cd6a0
	if (ctx.cr6.lt) goto loc_899CD6A0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CFCC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899cfcf4
	if (ctx.cr6.eq) goto loc_899CFCF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899cfcf4
	if (ctx.cr6.eq) goto loc_899CFCF4;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899cfd00
	if (ctx.cr6.eq) goto loc_899CFD00;
loc_899CFCF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899CFD00:
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x899cfd14
	if (!ctx.cr6.gt) goto loc_899CFD14;
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
loc_899CFD14:
	// li r3,72
	ctx.r3.s64 = 72;
	// b 0x89936360
	sub_89936360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0620) {
	REX_FUNC_PROLOGUE();
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r8,r11,43691
	ctx.r8.u64 = ctx.r11.u64 | 43691;
	// mulhwu r7,r9,r8
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r5,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d0678
	if (ctx.cr6.eq) goto loc_899D0678;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d0678
	if (ctx.cr6.eq) goto loc_899D0678;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899d0684
	if (ctx.cr6.eq) goto loc_899D0684;
loc_899D0678:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D0684:
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899d0698
	if (!ctx.cr6.gt) goto loc_899D0698;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_899D0698:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x899d06ac
	if (!ctx.cr6.lt) goto loc_899D06AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_899D06AC:
	// li r3,72
	ctx.r3.s64 = 72;
	// b 0x89936360
	sub_89936360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0EB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899D0EC0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lhz r31,-25920(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -25920);
	// addi r11,r10,-25920
	ctx.r11.s64 = ctx.r10.s64 + -25920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// bl 0x899d0dc0
	ctx.lr = 0x899D0EF0;
	sub_899D0DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x899d0f04
	if (!ctx.cr6.lt) goto loc_899D0F04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899D0F04:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r19,r31
	ctx.r19.s64 = ctx.r31.s16;
	// addi r11,r11,-8688
	ctx.r11.s64 = ctx.r11.s64 + -8688;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x899d1078
	if (!ctx.cr6.gt) goto loc_899D1078;
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// lhz r27,-21396(r5)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r5.u32 + -21396);
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// extsh r20,r30
	ctx.r20.s64 = ctx.r30.s16;
	// addi r6,r10,9016
	ctx.r6.s64 = ctx.r10.s64 + 9016;
	// lwz r10,-9212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -9212);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
	// ori r30,r4,20077
	ctx.r30.u64 = ctx.r4.u64 | 20077;
	// lis r21,-16176
	ctx.r21.s64 = -1060110336;
	// li r22,5
	ctx.r22.s64 = 5;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r31,r3,32896
	ctx.r31.u64 = ctx.r3.u64 | 32896;
	// lis r24,3
	ctx.r24.s64 = 196608;
	// li r25,519
	ctx.r25.s64 = 519;
	// li r26,192
	ctx.r26.s64 = 192;
	// addi r5,r9,11272
	ctx.r5.s64 = ctx.r9.s64 + 11272;
loc_899D0F74:
	// lhzu r9,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r4,r9,r20
	ctx.r4.u64 = ctx.r9.u64 + ctx.r20.u64;
	// extsh r15,r8
	ctx.r15.s64 = ctx.r8.s16;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// rlwinm r8,r3,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r16,r10,1
	ctx.r16.s64 = ctx.r10.s64 + 1;
	// lhzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmpw cr6,r15,r19
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r19.s32, ctx.xer);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r8,r4,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r3.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// rlwinm r4,r4,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// rlwinm r9,r3,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// srawi r3,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 8;
	// srawi r9,r16,16
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r16.s32 >> 16;
	// rlwinm r9,r9,19,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r16,r9,4,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,168(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 168);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r9,164(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 164);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwzx r9,r16,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r16,0(r9)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r16,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r16.u32);
	// lwz r16,4(r9)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r16,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r16.u32);
	// lwz r16,4(r9)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r16,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r16.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// sth r27,134(r11)
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r27.u16);
	// stw r31,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// stw r18,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r18.u32);
	// stw r17,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r17.u32);
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r24,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r24.u32);
	// stb r7,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r7.u8);
	// sth r25,68(r11)
	REX_STORE_U16(ctx.r11.u32 + 68, ctx.r25.u16);
	// stb r26,70(r11)
	REX_STORE_U8(ctx.r11.u32 + 70, ctx.r26.u8);
	// blt cr6,0x899d0f74
	if (ctx.cr6.lt) goto loc_899D0F74;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// stw r10,-9212(r11)
	REX_STORE_U32(ctx.r11.u32 + -9212, ctx.r10.u32);
loc_899D1078:
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x89936360
	ctx.lr = 0x899D1080;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D2B20) {
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
	// bne cr6,0x899d2b48
	if (!ctx.cr6.eq) goto loc_899D2B48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D2B48:
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

DEFINE_REX_FUNC(sub_899D2FB8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D2FC0;
	__savegprlr_26(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r9,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d318c
	if (ctx.cr6.eq) goto loc_899D318C;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r28,68(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d300c
	if (ctx.cr6.eq) goto loc_899D300C;
	// lhz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r8,154(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899d300c
	if (!ctx.cr6.eq) goto loc_899D300C;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899d300c
	if (ctx.cr6.eq) goto loc_899D300C;
	// lhz r8,136(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 136);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x899d3014
	if (ctx.cr6.eq) goto loc_899D3014;
loc_899D300C:
	// rlwinm r11,r9,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_899D3014:
	// lhz r8,158(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 158);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lhz r9,118(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 118);
	// li r27,117
	ctx.r27.s64 = 117;
	// addi r11,r7,9016
	ctx.r11.s64 = ctx.r7.s64 + 9016;
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,40(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lhz r31,52(r3)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// srawi r9,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r26,54(r3)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 54);
	// rotlwi r29,r31,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// lwz r30,48(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lbz r5,77(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 77);
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rotlwi r4,r26,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r26.u32, 16);
	// lhzx r31,r7,r11
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhzx r26,r6,r11
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// mullw r26,r26,r9
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// subf r31,r31,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r31.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stb r27,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r27.u8);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blt cr6,0x899d3134
	if (ctx.cr6.lt) goto loc_899D3134;
	// beq cr6,0x899d3108
	if (ctx.cr6.eq) goto loc_899D3108;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x899d31bc
	if (!ctx.cr6.lt) goto loc_899D31BC;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x899d30fc
	if (ctx.cr6.lt) goto loc_899D30FC;
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x899d31a4
	if (!ctx.cr6.lt) goto loc_899D31A4;
loc_899D30FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D3108:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899d31bc
	if (!ctx.cr6.eq) goto loc_899D31BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D3134:
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// beq cr6,0x899d3148
	if (ctx.cr6.eq) goto loc_899D3148;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// stb r11,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
loc_899D3148:
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bne cr6,0x899d31bc
	if (!ctx.cr6.eq) goto loc_899D31BC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// oris r10,r11,16592
	ctx.r10.u64 = ctx.r11.u64 | 1087373312;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lbz r11,77(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 77);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stb r9,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r9.u8);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D318C:
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x899d30fc
	if (ctx.cr6.lt) goto loc_899D30FC;
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// blt cr6,0x899d30fc
	if (ctx.cr6.lt) goto loc_899D30FC;
loc_899D31A4:
	// addi r10,r11,242
	ctx.r10.s64 = ctx.r11.s64 + 242;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stb r10,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r10.u8);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_899D31BC:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D4918) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D4920;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// sth r9,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r9.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899d4a54
	if (!ctx.cr6.eq) goto loc_899D4A54;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lwz r30,24(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lbz r8,79(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lbz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 80);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r11,-9212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -9212);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// lis r29,-30320
	ctx.r29.s64 = -1987051520;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r28,r10,17
	ctx.r28.u64 = ctx.r10.u32 & 0x7FFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// srawi r25,r25,16
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 16;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r29,r29,9016
	ctx.r29.s64 = ctx.r29.s64 + 9016;
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r30,r30,14
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 14;
	// clrlwi r25,r25,17
	ctx.r25.u64 = ctx.r25.u32 & 0x7FFF;
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// mullw r30,r25,r30
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// lhzx r25,r10,r29
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// lhzx r29,r28,r29
	ctx.r29.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r10,r30,1,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFF0000;
	// stw r11,-9212(r5)
	REX_STORE_U32(ctx.r5.u32 + -9212, ctx.r11.u32);
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r30,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 16;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r30,17
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFF;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r9,r4,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// rlwinm r4,r10,17,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// bl 0x899d42b0
	ctx.lr = 0x899D4A28;
	sub_899D42B0(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d4a4c
	if (ctx.cr6.eq) goto loc_899D4A4C;
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 76);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r31)
	REX_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899d4a54
	if (!ctx.cr6.eq) goto loc_899D4A54;
loc_899D4A4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_899D4A54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D57B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blt cr6,0x899d581c
	if (ctx.cr6.lt) goto loc_899D581C;
	// lbz r10,46(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stb r10,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r10.u8);
	// stb r9,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r9.u8);
loc_899D581C:
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899d5850
	if (!ctx.cr6.eq) goto loc_899D5850;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D5850:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D5FD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D5FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,-160
	ctx.r11.s64 = ctx.r4.s64 + -10485760;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d5ffc
	if (!ctx.cr0.lt) goto loc_899D5FFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D5FFC:
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899d60d4
	if (!ctx.cr6.lt) goto loc_899D60D4;
	// addis r11,r29,-512
	ctx.r11.s64 = ctx.r29.s64 + -33554432;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d6018
	if (!ctx.cr0.lt) goto loc_899D6018;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D6018:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899d60d4
	if (!ctx.cr6.lt) goto loc_899D60D4;
	// bl 0x8991a388
	ctx.lr = 0x899D6024;
	sub_8991A388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d60d4
	if (ctx.cr6.eq) goto loc_899D60D4;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lwz r10,3896(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3896);
	// ori r3,r7,16
	ctx.r3.u64 = ctx.r7.u64 | 16;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r8,r9,9656
	ctx.r8.s64 = ctx.r9.s64 + 9656;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mulli r7,r5,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(92));
	// lwz r10,872(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 872);
	// stw r10,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// addi r5,r8,76
	ctx.r5.s64 = ctx.r8.s64 + 76;
	// lwz r10,868(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 868);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// ori r3,r9,32896
	ctx.r3.u64 = ctx.r9.u64 | 32896;
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r11,78(r4)
	REX_STORE_U8(ctx.r4.u32 + 78, ctx.r11.u8);
	// li r10,519
	ctx.r10.s64 = 519;
	// stw r3,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r3.u32);
	// li r8,192
	ctx.r8.s64 = 192;
	// stb r11,77(r4)
	REX_STORE_U8(ctx.r4.u32 + 77, ctx.r11.u8);
	// stb r11,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r11.u8);
	// stw r28,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r30,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// stw r29,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r29.u32);
	// stb r31,80(r4)
	REX_STORE_U8(ctx.r4.u32 + 80, ctx.r31.u8);
	// lbzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stb r7,79(r4)
	REX_STORE_U8(ctx.r4.u32 + 79, ctx.r7.u8);
	// sth r10,44(r4)
	REX_STORE_U16(ctx.r4.u32 + 44, ctx.r10.u16);
	// stb r9,46(r4)
	REX_STORE_U8(ctx.r4.u32 + 46, ctx.r9.u8);
	// stb r9,50(r4)
	REX_STORE_U8(ctx.r4.u32 + 50, ctx.r9.u8);
	// stb r9,49(r4)
	REX_STORE_U8(ctx.r4.u32 + 49, ctx.r9.u8);
	// stb r8,51(r4)
	REX_STORE_U8(ctx.r4.u32 + 51, ctx.r8.u8);
loc_899D60D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D6728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x89919d28
	ctx.lr = 0x899D6740;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d686c
	if (ctx.cr6.eq) goto loc_899D686C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// ori r11,r9,20077
	ctx.r11.u64 = ctx.r9.u64 | 20077;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lwz r9,-9212(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// li r5,26
	ctx.r5.s64 = 26;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,7904(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 7904);
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r8,r8,12345
	ctx.r8.s64 = ctx.r8.s64 + 12345;
	// addi r6,r4,11976
	ctx.r6.s64 = ctx.r4.s64 + 11976;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r11,840(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 840);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// rlwinm r29,r4,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,836(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 836);
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subf r8,r4,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r4.u64;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// rlwinm r8,r8,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r6,r4,9016
	ctx.r6.s64 = ctx.r4.s64 + 9016;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// rlwinm r9,r10,27,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3FF;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// rlwinm r5,r5,19,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x3;
	// stb r10,78(r3)
	REX_STORE_U8(ctx.r3.u32 + 78, ctx.r10.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stb r10,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r10.u8);
	// addi r11,r9,1024
	ctx.r11.s64 = ctx.r9.s64 + 1024;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// rlwinm r9,r8,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lhzx r7,r4,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r4,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lhzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stb r8,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r8.u8);
	// rlwinm r5,r6,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
loc_899D686C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D7D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899D7D28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r8,r11,3832
	ctx.r8.s64 = ctx.r11.s64 + 3832;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,160
	ctx.r10.s64 = 10485760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subf. r11,r10,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7d6c
	if (!ctx.cr0.lt) goto loc_899D7D6C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7D6C:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899d7da8
	if (!ctx.cr6.lt) goto loc_899D7DA8;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r8,r11,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r11.u64;
	// subf. r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7d98
	if (!ctx.cr0.lt) goto loc_899D7D98;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7D98:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x899d7dac
	if (ctx.cr6.lt) goto loc_899D7DAC;
loc_899D7DA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D7DAC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d7e5c
	if (!ctx.cr6.eq) goto loc_899D7E5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991a248
	ctx.lr = 0x899D7DC0;
	sub_8991A248(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d7e5c
	if (ctx.cr6.eq) goto loc_899D7E5C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r8,11976
	ctx.r6.s64 = ctx.r8.s64 + 11976;
	// rlwimi r30,r7,30,28,26
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xFFFFFFFFFFFFFFEF) | (ctx.r30.u64 & 0x10);
	// lwz r11,7904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r10,192
	ctx.r10.s64 = 192;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r8,512
	ctx.r8.s64 = 512;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,616(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 616);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,612(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 612);
	// stw r31,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r31.u32);
	// stb r31,78(r4)
	REX_STORE_U8(ctx.r4.u32 + 78, ctx.r31.u8);
	// stb r31,77(r4)
	REX_STORE_U8(ctx.r4.u32 + 77, ctx.r31.u8);
	// stb r31,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r31.u8);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// stw r31,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r28,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r28.u32);
	// stw r27,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r27.u32);
	// stw r24,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r24.u32);
	// stw r23,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r23.u32);
	// stb r26,80(r4)
	REX_STORE_U8(ctx.r4.u32 + 80, ctx.r26.u8);
	// stb r25,79(r4)
	REX_STORE_U8(ctx.r4.u32 + 79, ctx.r25.u8);
	// sth r8,44(r4)
	REX_STORE_U16(ctx.r4.u32 + 44, ctx.r8.u16);
	// stb r10,46(r4)
	REX_STORE_U8(ctx.r4.u32 + 46, ctx.r10.u8);
	// stb r10,47(r4)
	REX_STORE_U8(ctx.r4.u32 + 47, ctx.r10.u8);
	// stw r9,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899D7E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8E20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D8E28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,3960
	ctx.r7.s64 = ctx.r10.s64 + 3960;
	// lis r9,160
	ctx.r9.s64 = 10485760;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// subf. r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d8e60
	if (!ctx.cr0.lt) goto loc_899D8E60;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D8E60:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899d8f3c
	if (!ctx.cr6.lt) goto loc_899D8F3C;
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r30,r10,92
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// addi r31,r11,9656
	ctx.r31.s64 = ctx.r11.s64 + 9656;
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899d8f3c
	if (ctx.cr6.eq) goto loc_899D8F3C;
	// bl 0x8991a388
	ctx.lr = 0x899D8E90;
	sub_8991A388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d8f3c
	if (ctx.cr6.eq) goto loc_899D8F3C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r6,25
	ctx.r6.s64 = 25;
	// ori r5,r7,16
	ctx.r5.u64 = ctx.r7.u64 | 16;
	// lwz r10,3896(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3896);
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// ori r6,r4,20077
	ctx.r6.u64 = ctx.r4.u64 | 20077;
	// lwz r9,-9212(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r5,r3,11976
	ctx.r5.s64 = ctx.r3.s64 + 11976;
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r10.u32);
	// ori r6,r4,32896
	ctx.r6.u64 = ctx.r4.u64 | 32896;
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// rlwinm r10,r8,19,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r10,808(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 808);
	// stw r10,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// lwz r10,804(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 804);
	// stb r11,78(r7)
	REX_STORE_U8(ctx.r7.u32 + 78, ctx.r11.u8);
	// stb r11,77(r7)
	REX_STORE_U8(ctx.r7.u32 + 77, ctx.r11.u8);
	// stb r11,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r11.u8);
	// stw r11,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// stw r10,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// stw r6,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// stw r4,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// stw r27,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r27.u32);
	// stw r26,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r26.u32);
	// stb r29,80(r7)
	REX_STORE_U8(ctx.r7.u32 + 80, ctx.r29.u8);
	// lbzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stb r3,79(r7)
	REX_STORE_U8(ctx.r7.u32 + 79, ctx.r3.u8);
loc_899D8F3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D9C78) {
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
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,3668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3668);
	// lwz r10,428(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899d9cd8
	if (!ctx.cr6.eq) goto loc_899D9CD8;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// lwz r10,-3500(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -3500);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d9cc8
	if (ctx.cr6.eq) goto loc_899D9CC8;
	// lwz r9,-3500(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -3500);
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lwz r3,-3756(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -3756);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899D9CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_899D9CC8:
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lwz r11,-4180(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -4180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4180(r10)
	REX_STORE_U32(ctx.r10.u32 + -4180, ctx.r11.u32);
loc_899D9CD8:
	// bl 0x899d9830
	ctx.lr = 0x899D9CDC;
	sub_899D9830(ctx, base);
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

DEFINE_REX_FUNC(sub_899DA468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899DA470;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// lis r31,-30232
	ctx.r31.s64 = -1981284352;
	// lwz r3,3668(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3668);
	// lwz r29,-4180(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + -4180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lwz r3,3672(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 3672);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,292(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899DA4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r26,-30216
	ctx.r26.s64 = -1980235776;
	// lwz r3,3668(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3668);
	// lis r7,-30216
	ctx.r7.s64 = -1980235776;
	// lfd f0,26312(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r26.u32 + 26312);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fsub f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 - ctx.f0.f64;
	// stfd f1,26320(r7)
	REX_STORE_U64(ctx.r7.u32 + 26320, ctx.f1.u64);
	// lwz r5,392(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 392);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899DA4D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dcd98
	ctx.lr = 0x899DA4DC;
	sub_899DCD98(ctx, base);
	// lwz r11,-4180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4180);
	// subf r4,r29,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bge cr6,0x899da550
	if (!ctx.cr6.lt) goto loc_899DA550;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r28,-30232
	ctx.r28.s64 = -1981284352;
	// addi r30,r11,14460
	ctx.r30.s64 = ctx.r11.s64 + 14460;
loc_899DA4F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899da538
	if (ctx.cr6.eq) goto loc_899DA538;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x899dcd98
	ctx.lr = 0x899DA50C;
	sub_899DCD98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-20684(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -20684);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899DA538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA538:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dcd98
	ctx.lr = 0x899DA540;
	sub_899DCD98(ctx, base);
	// lwz r11,-4180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4180);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899da4f8
	if (ctx.cr6.lt) goto loc_899DA4F8;
loc_899DA550:
	// lwz r3,3672(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 3672);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfd f1,26312(r26)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r26.u32 + 26312, ctx.f1.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DAE38) {
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
	ctx.lr = 0x899DAE68;
	sub_899DAC58(ctx, base);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
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

DEFINE_REX_FUNC(sub_899DB1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899DB1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x899dd048
	ctx.lr = 0x899DB1F8;
	sub_899DD048(ctx, base);
	// lis r30,-30305
	ctx.r30.s64 = -1986068480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x899e41b8
	ctx.lr = 0x899DB208;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x899db298
	if (!ctx.cr0.eq) goto loc_899DB298;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x899e41c8
	ctx.lr = 0x899DB21C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899db2a8
	if (ctx.cr0.eq) goto loc_899DB2A8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899dc428
	ctx.lr = 0x899DB230;
	sub_899DC428(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// beq 0x899db28c
	if (ctx.cr0.eq) goto loc_899DB28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x899e41c8
	ctx.lr = 0x899DB244;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899db27c
	if (ctx.cr0.eq) goto loc_899DB27C;
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
	ctx.lr = 0x899DB26C;
	sub_899DD038(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x899db2a8
	goto loc_899DB2A8;
loc_899DB27C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dba90
	ctx.lr = 0x899DB284;
	sub_899DBA90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x899db2a8
	goto loc_899DB2A8;
loc_899DB28C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899e41c8
	ctx.lr = 0x899DB294;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x899db2a8
	goto loc_899DB2A8;
loc_899DB298:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_899DB2A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dd030
	ctx.lr = 0x899DB2B0;
	sub_899DD030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_20) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_18) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_29) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBC80) {
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
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r11,4832(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4832);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899dbcb0
	if (ctx.cr0.eq) goto loc_899DBCB0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DBCA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x899dbcb4
	if (!ctx.cr0.eq) goto loc_899DBCB4;
loc_899DBCB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DBCB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC490) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3536
	ctx.r9.s64 = ctx.r10.s64 + 3536;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_899DC4A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x899dc4c4
	if (ctx.cr6.eq) goto loc_899DC4C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x899dc4a0
	if (ctx.cr6.lt) goto loc_899DC4A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899DC4C4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC660) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC820) {
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

DEFINE_REX_FUNC(sub_899DCBA0) {
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
	// bl 0x899dc5d0
	ctx.lr = 0x899DCBB4;
	sub_899DC5D0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCCA0) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x899dccbc
	goto loc_899DCCBC;
loc_899DCCB0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_899DCCBC:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x899dccb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_899DCCB0;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x899dccf0
	if (ctx.cr0.eq) goto loc_899DCCF0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_899DCCD8:
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x899dccd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DCCD8;
loc_899DCCF0:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x899dcd1c
	if (ctx.cr0.eq) goto loc_899DCD1C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x899dcd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899DCD1C;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x899dcd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899DCD1C;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_899DCD1C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
	// stb r4,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
	// stb r4,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DE278) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899de2c8
	if (ctx.cr0.eq) goto loc_899DE2C8;
	// bl 0x899e4278
	ctx.lr = 0x899DE2A4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x899de2c8
	if (ctx.cr6.eq) goto loc_899DE2C8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5206
	ctx.r6.s64 = 5206;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x899e4268
	ctx.lr = 0x899DE2C8;
	__imp__KeBugCheckEx(ctx, base);
loc_899DE2C8:
	// lbz r11,-11(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x899de2dc
	if (!ctx.cr0.eq) goto loc_899DE2DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x899de308
	goto loc_899DE308;
loc_899DE2DC:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899de2f8
	if (ctx.cr0.eq) goto loc_899DE2F8;
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x899de308
	goto loc_899DE308;
loc_899DE2F8:
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_899DE308:
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

DEFINE_REX_FUNC(sub_899DEFEC) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DF880) {
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
	// lwz r28,124(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x899df8c4
	goto loc_899DF8C4;
loc_899DF8C4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x899df8d4
	if (ctx.cr6.eq) goto loc_899DF8D4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899DF8D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_899DF8D4:
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

DEFINE_REX_FUNC(sub_899DF8F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899DF900;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r26,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r27,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// beq 0x899df95c
	if (ctx.cr0.eq) goto loc_899DF95C;
	// bl 0x899e4278
	ctx.lr = 0x899DF938;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x899df95c
	if (ctx.cr6.eq) goto loc_899DF95C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4450
	ctx.r6.s64 = 4450;
	// lwz r5,152(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x899e4268
	ctx.lr = 0x899DF95C;
	__imp__KeBugCheckEx(ctx, base);
loc_899DF95C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x899df96c
	if (!ctx.cr6.eq) goto loc_899DF96C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dfb6c
	goto loc_899DFB6C;
loc_899DF96C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899df994
	if (!ctx.cr0.eq) goto loc_899DF994;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x899e4228
	ctx.lr = 0x899DF98C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
loc_899DF994:
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899dfafc
	if (!ctx.cr0.eq) goto loc_899DFAFC;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x899dd6a0
	ctx.lr = 0x899DF9BC;
	sub_899DD6A0(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x899dfa44
	if (!ctx.cr6.lt) goto loc_899DFA44;
	// lbz r11,5(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899dfa1c
	if (!ctx.cr6.eq) goto loc_899DFA1C;
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_899DFA1C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x899dfae8
	goto loc_899DFAE8;
loc_899DFA44:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899dfa70
	if (ctx.cr6.lt) goto loc_899DFA70;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x899dfa70
	if (ctx.cr6.lt) goto loc_899DFA70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899de6c8
	ctx.lr = 0x899DFA6C;
	sub_899DE6C8(ctx, base);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFA70:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x899dfaf0
	if (ctx.cr6.gt) goto loc_899DFAF0;
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_899DFA90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899dfac4
	if (ctx.cr6.eq) goto loc_899DFAC4;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x899dfac4
	if (!ctx.cr6.gt) goto loc_899DFAC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dfa90
	goto loc_899DFA90;
loc_899DFAC4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_899DFAE8:
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFAF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DFAF8;
	sub_899DDAA8(ctx, base);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFAFC:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x899dfb2c
	if (ctx.cr6.eq) goto loc_899DFB2C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899DFB24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
loc_899DFB2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x899e4288
	ctx.lr = 0x899DFB4C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_899DFB5C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x899dfb9c
	ctx.lr = 0x899DFB68;
	sub_899DFB9C(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_899DFB6C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E15C8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x899e1610
	if (ctx.cr6.eq) goto loc_899E1610;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x899e1610
	if (ctx.cr6.eq) goto loc_899E1610;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x899e15f8
	if (!ctx.cr6.eq) goto loc_899E15F8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x899e13c8
	sub_899E13C8(ctx, base);
	return;
loc_899E15F8:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x899e160c
	if (ctx.cr6.eq) goto loc_899E160C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x899e160c
	if (ctx.cr6.eq) goto loc_899E160C;
	// b 0x899e1498
	sub_899E1498(ctx, base);
	return;
loc_899E160C:
	// b 0x899e0e00
	sub_899E0E00(ctx, base);
	return;
loc_899E1610:
	// b 0x899e0d10
	sub_899E0D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E16C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1184
	ctx.r11.s64 = ctx.r11.s64 + 1184;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E1700) {
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
	ctx.lr = 0x899E1740;
	sub_899E2968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x899e1b38
	ctx.lr = 0x899E1750;
	sub_899E1B38(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1778
	if (!ctx.cr0.eq) goto loc_899E1778;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x899e1768
	if (!ctx.cr6.eq) goto loc_899E1768;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x899e1790
	goto loc_899E1790;
loc_899E1768:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x899e178c
	if (!ctx.cr6.eq) goto loc_899E178C;
loc_899E1770:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x899e1790
	goto loc_899E1790;
loc_899E1778:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1770
	if (!ctx.cr0.eq) goto loc_899E1770;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x899e1790
	if (!ctx.cr0.eq) goto loc_899E1790;
loc_899E178C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E1790:
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

DEFINE_REX_FUNC(sub_899E2250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899E2258;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lhz r8,10(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,4056
	ctx.r20.s64 = ctx.r10.s64 + 4056;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x899e22e0
	if (!ctx.cr6.eq) goto loc_899E22E0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_899E22A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e22c8
	if (!ctx.cr6.eq) goto loc_899E22C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e22a8
	if (ctx.cr6.lt) goto loc_899E22A8;
	// b 0x899e2914
	goto loc_899E2914;
loc_899E22C8:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x899e2918
	goto loc_899E2918;
loc_899E22E0:
	// lwz r25,8(r20)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e242c
	if (ctx.cr0.eq) goto loc_899E242C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e2398
	if (!ctx.cr0.eq) goto loc_899E2398;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x899e242c
	if (!ctx.cr6.lt) goto loc_899E242C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E2378:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e2398
	if (!ctx.cr6.eq) goto loc_899E2398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e2378
	if (ctx.cr6.lt) goto loc_899E2378;
	// b 0x899e242c
	goto loc_899E242C;
loc_899E2398:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899e23dc
	if (ctx.cr6.lt) goto loc_899E23DC;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x899e23e0
	if (!ctx.cr6.lt) goto loc_899E23E0;
loc_899E23DC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E23E0:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x899e242c
	if (ctx.cr0.lt) goto loc_899E242C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E23F8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899e242c
	if (ctx.cr6.eq) goto loc_899E242C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x899e241c
	if (ctx.cr6.lt) goto loc_899E241C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x899e2420
	if (!ctx.cr6.lt) goto loc_899E2420;
loc_899E241C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E2420:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x899e23f8
	if (!ctx.cr0.lt) goto loc_899E23F8;
loc_899E242C:
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x899e2474
	if (!ctx.cr6.lt) goto loc_899E2474;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e2474
	if (ctx.cr6.eq) goto loc_899E2474;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899E246C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899e246c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E246C;
loc_899E2474:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899e2480
	if (ctx.cr6.eq) goto loc_899E2480;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_899E2480:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899e24ac
	if (!ctx.cr6.lt) goto loc_899E24AC;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x899e2918
	goto loc_899E2918;
loc_899E24AC:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x899e2794
	if (ctx.cr6.gt) goto loc_899E2794;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_899E2514:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x899e2514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2514;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E2554:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899e2568
	if (ctx.cr6.lt) goto loc_899E2568;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e256c
	goto loc_899E256C;
loc_899E2568:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E256C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e2554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2554;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e269c
	if (ctx.cr0.eq) goto loc_899E269C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e2604
	if (!ctx.cr0.eq) goto loc_899E2604;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x899e269c
	if (!ctx.cr6.lt) goto loc_899E269C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E25E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e2604
	if (!ctx.cr6.eq) goto loc_899E2604;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e25e4
	if (ctx.cr6.lt) goto loc_899E25E4;
	// b 0x899e269c
	goto loc_899E269C;
loc_899E2604:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899e2648
	if (ctx.cr6.lt) goto loc_899E2648;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x899e264c
	if (!ctx.cr6.lt) goto loc_899E264C;
loc_899E2648:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E264C:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x899e269c
	if (ctx.cr0.lt) goto loc_899E269C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E2668:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899e269c
	if (ctx.cr6.eq) goto loc_899E269C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x899e268c
	if (ctx.cr6.lt) goto loc_899E268C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x899e2690
	if (!ctx.cr6.lt) goto loc_899E2690;
loc_899E268C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_899E2690:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x899e2668
	if (!ctx.cr0.lt) goto loc_899E2668;
loc_899E269C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	REX_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x899e26e4
	if (!ctx.cr6.lt) goto loc_899E26E4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e26e4
	if (ctx.cr6.eq) goto loc_899E26E4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899E26DC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899e26dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E26DC;
loc_899E26E4:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_899E2720:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x899e2720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2720;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E2760:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899e2774
	if (ctx.cr6.lt) goto loc_899E2774;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e2778
	goto loc_899E2778;
loc_899E2774:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E2778:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e2760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2760;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x899e2918
	goto loc_899E2918;
loc_899E2794:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899e2864
	if (ctx.cr6.lt) goto loc_899E2864;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_899E27F0:
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x899e27f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E27F0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E2830:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899e2844
	if (ctx.cr6.lt) goto loc_899E2844;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e2848
	goto loc_899E2848;
loc_899E2844:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E2848:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e2830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2830;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x899e2918
	goto loc_899E2918;
loc_899E2864:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_899E28AC:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x899e28ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E28AC;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E28EC:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x899e2900
	if (ctx.cr6.lt) goto loc_899E2900;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e2904
	goto loc_899E2904;
loc_899E2900:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E2904:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e28ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E28EC;
loc_899E2914:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_899E2918:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r21.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r19.u64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x899e2954
	if (!ctx.cr6.eq) goto loc_899E2954;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x899e295c
	goto loc_899E295C;
loc_899E2954:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x899e2960
	if (!ctx.cr6.eq) goto loc_899E2960;
loc_899E295C:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_899E2960:
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

