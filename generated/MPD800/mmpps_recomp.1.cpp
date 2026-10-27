#include "mmpps_funcs.1.h"

DEFINE_REX_FUNC(sub_89912C68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89912C70;
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
	// lwz r11,3472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3472);
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
loc_89913438:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89913448:
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
	// bdnz 0x89913448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913448;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// blt cr6,0x89913438
	if (ctx.cr6.lt) goto loc_89913438;
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
loc_899135E8:
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r10,r5,-128
	ctx.r10.s64 = ctx.r5.s64 + -128;
	// addi r11,r8,-128
	ctx.r11.s64 = ctx.r8.s64 + -128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899135F8:
	// lwzu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899135f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899135F8;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r7,128
	ctx.r11.s64 = ctx.r7.s64 + 128;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899135e8
	if (ctx.cr6.lt) goto loc_899135E8;
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
loc_89913630:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89913630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913630;
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
loc_89913670:
	// lbzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89913670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913670;
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
	ctx.lr = 0x899136EC;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,8484
	ctx.r4.s64 = ctx.r31.s64 + 8484;
	// addi r3,r30,696
	ctx.r3.s64 = ctx.r30.s64 + 696;
	// li r5,696
	ctx.r5.s64 = 696;
	// bl 0x899dbdb0
	ctx.lr = 0x899136FC;
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
	ctx.lr = 0x89913714;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9360
	ctx.r4.s64 = ctx.r31.s64 + 9360;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x89913724;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9240
	ctx.r4.s64 = ctx.r31.s64 + 9240;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x89913734;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9420
	ctx.r4.s64 = ctx.r31.s64 + 9420;
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x89913744;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9300
	ctx.r4.s64 = ctx.r31.s64 + 9300;
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x89913754;
	sub_899DBDB0(ctx, base);
	// addi r4,r31,9480
	ctx.r4.s64 = ctx.r31.s64 + 9480;
	// addi r3,r30,300
	ctx.r3.s64 = ctx.r30.s64 + 300;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x89913764;
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
loc_89913778:
	// addi r4,r30,-16896
	ctx.r4.s64 = ctx.r30.s64 + -16896;
	// addi r3,r29,-16896
	ctx.r3.s64 = ctx.r29.s64 + -16896;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89913788;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89913798;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x89913778
	if (!ctx.cr0.eq) goto loc_89913778;
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
loc_899137C0:
	// addi r4,r29,-3168
	ctx.r4.s64 = ctx.r29.s64 + -3168;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899137D0;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x899137E0;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,-2112
	ctx.r4.s64 = ctx.r29.s64 + -2112;
	// addi r3,r30,-2112
	ctx.r3.s64 = ctx.r30.s64 + -2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x899137F0;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,1056
	ctx.r4.s64 = ctx.r29.s64 + 1056;
	// addi r3,r30,1056
	ctx.r3.s64 = ctx.r30.s64 + 1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89913800;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,-1056
	ctx.r4.s64 = ctx.r29.s64 + -1056;
	// addi r3,r30,-1056
	ctx.r3.s64 = ctx.r30.s64 + -1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89913810;
	sub_899DBDB0(ctx, base);
	// addi r4,r29,2112
	ctx.r4.s64 = ctx.r29.s64 + 2112;
	// addi r3,r30,2112
	ctx.r3.s64 = ctx.r30.s64 + 2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x89913820;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x899137c0
	if (!ctx.cr0.eq) goto loc_899137C0;
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
loc_89913848:
	// addi r4,r30,-1600
	ctx.r4.s64 = ctx.r30.s64 + -1600;
	// addi r3,r29,-1600
	ctx.r3.s64 = ctx.r29.s64 + -1600;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x899dbdb0
	ctx.lr = 0x89913858;
	sub_899DBDB0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89913868;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x89913848
	if (!ctx.cr0.eq) goto loc_89913848;
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
loc_8991388C:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8991389C;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// bne 0x8991388c
	if (!ctx.cr0.eq) goto loc_8991388C;
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
loc_899138C0:
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x899138D0;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// addi r28,r28,208
	ctx.r28.s64 = ctx.r28.s64 + 208;
	// bne 0x899138c0
	if (!ctx.cr0.eq) goto loc_899138C0;
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
loc_899138F4:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89913904;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// bne 0x899138f4
	if (!ctx.cr0.eq) goto loc_899138F4;
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
loc_89913928:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89913938;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bne 0x89913928
	if (!ctx.cr0.eq) goto loc_89913928;
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
	ctx.lr = 0x89913964;
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
	ctx.lr = 0x89913978;
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
	ctx.lr = 0x8991398C;
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
	ctx.lr = 0x899139A0;
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
	ctx.lr = 0x899139B4;
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
	ctx.lr = 0x899139C8;
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
loc_899139EC:
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
	// bdnz 0x899139ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899139EC;
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
loc_89913A90:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r8,4032
	ctx.r10.s64 = ctx.r8.s64 + 4032;
	// addi r11,r7,4032
	ctx.r11.s64 = ctx.r7.s64 + 4032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89913AA0:
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
	// bdnz 0x89913aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913AA0;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,1088
	ctx.r11.s64 = ctx.r6.s64 + 1088;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89913a90
	if (ctx.cr6.lt) goto loc_89913A90;
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
loc_89913AFC:
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
loc_89913B14:
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
	// bdnz 0x89913b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913B14;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x89913afc
	if (ctx.cr6.lt) goto loc_89913AFC;
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
loc_89913F3C:
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
	// bdnz 0x89913f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89913F3C;
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
loc_89913FF4:
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
	// bne 0x89913ff4
	if (!ctx.cr0.eq) goto loc_89913FF4;
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
loc_89914104:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x89914104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89914104;
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
loc_89914194:
	// lhzu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r6,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89914194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89914194;
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
loc_89914200:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89914200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89914200;
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
loc_8991477C:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,-420
	ctx.r8.s64 = ctx.r9.s64 + -420;
	// addi r7,r10,-420
	ctx.r7.s64 = ctx.r10.s64 + -420;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8991478C:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8991478c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991478C;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899147A8:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899147a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899147A8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,412
	ctx.r8.s64 = ctx.r9.s64 + 412;
	// addi r7,r10,412
	ctx.r7.s64 = ctx.r10.s64 + 412;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899147C4:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899147c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899147C4;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,828
	ctx.r8.s64 = ctx.r9.s64 + 828;
	// addi r7,r10,828
	ctx.r7.s64 = ctx.r10.s64 + 828;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899147E0:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x899147e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899147E0;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x8991477c
	if (!ctx.cr0.eq) goto loc_8991477C;
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
loc_89914E58:
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
	// bdnz 0x89914e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89914E58;
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
loc_89915480:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89915480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89915480;
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
loc_899154B8:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899154b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899154B8;
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
loc_899154F0:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899154f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899154F0;
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
loc_89915748:
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
loc_89915760:
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
	// bdnz 0x89915760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89915760;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x89915748
	if (ctx.cr6.lt) goto loc_89915748;
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
loc_89915A28:
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
	// bdnz 0x89915a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89915A28;
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
loc_89915A5C:
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89915a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89915A5C;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// lis r7,12
	ctx.r7.s64 = 786432;
	// ori r10,r10,3120
	ctx.r10.u64 = ctx.r10.u64 | 3120;
	// ori r9,r9,3124
	ctx.r9.u64 = ctx.r9.u64 | 3124;
	// ori r8,r8,3128
	ctx.r8.u64 = ctx.r8.u64 | 3128;
	// ori r7,r7,3130
	ctx.r7.u64 = ctx.r7.u64 | 3130;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lhzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// ori r6,r6,3132
	ctx.r6.u64 = ctx.r6.u64 | 3132;
	// ori r5,r5,3140
	ctx.r5.u64 = ctx.r5.u64 | 3140;
	// ori r4,r4,3144
	ctx.r4.u64 = ctx.r4.u64 | 3144;
	// ori r3,r3,3148
	ctx.r3.u64 = ctx.r3.u64 | 3148;
	// ori r31,r31,3152
	ctx.r31.u64 = ctx.r31.u64 | 3152;
	// ori r30,r30,3156
	ctx.r30.u64 = ctx.r30.u64 | 3156;
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lwzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// stw r10,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r10.u32);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// stw r9,3488(r28)
	REX_STORE_U32(ctx.r28.u32 + 3488, ctx.r9.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// sth r8,3492(r27)
	REX_STORE_U16(ctx.r27.u32 + 3492, ctx.r8.u16);
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// sth r7,3496(r26)
	REX_STORE_U16(ctx.r26.u32 + 3496, ctx.r7.u16);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// sth r6,3500(r30)
	REX_STORE_U16(ctx.r30.u32 + 3500, ctx.r6.u16);
	// stw r5,7924(r25)
	REX_STORE_U32(ctx.r25.u32 + 7924, ctx.r5.u32);
	// stw r4,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r4.u32);
	// stw r3,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r3.u32);
	// stw r31,12024(r8)
	REX_STORE_U32(ctx.r8.u32 + 12024, ctx.r31.u32);
	// stw r11,5756(r7)
	REX_STORE_U32(ctx.r7.u32 + 5756, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936760) {
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
	// beq cr6,0x89936814
	if (ctx.cr6.eq) goto loc_89936814;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
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
	// bge cr6,0x899367fc
	if (!ctx.cr6.lt) goto loc_899367FC;
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
	// beq cr6,0x899367fc
	if (ctx.cr6.eq) goto loc_899367FC;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bgt 0x899367f4
	if (ctx.cr0.gt) goto loc_899367F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x899367E0;
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
loc_899367F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89936814
	if (!ctx.cr6.eq) goto loc_89936814;
loc_899367FC:
	// bl 0x89936360
	ctx.lr = 0x89936800;
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
loc_89936814:
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

DEFINE_REX_FUNC(sub_89937A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32546(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32546);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89937b3c
	if (ctx.cr6.eq) goto loc_89937B3C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,25128
	ctx.r9.s64 = ctx.r11.s64 + 25128;
	// mulli r11,r10,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r5,r9,625
	ctx.r5.s64 = ctx.r9.s64 + 625;
	// lbzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89937b3c
	if (ctx.cr6.eq) goto loc_89937B3C;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,680
	ctx.r7.s64 = ctx.r9.s64 + 680;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89937A9C:
	// addi r6,r9,681
	ctx.r6.s64 = ctx.r9.s64 + 681;
	// lbzx r4,r8,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stbx r4,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x89937a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89937A9C;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lbzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,680
	ctx.r4.s64 = ctx.r9.s64 + 680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,530(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 530);
	// stbx r7,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r7.u8);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r8,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r8,11
	ctx.xer.ca = ctx.r8.u32 <= 11;
	ctx.r6.u64 = static_cast<uint64_t>(11) - ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89937b14
	if (ctx.cr6.eq) goto loc_89937B14;
	// addi r7,r9,685
	ctx.r7.s64 = ctx.r9.s64 + 685;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r7,r7,19088
	ctx.r7.s64 = ctx.r7.s64 + 19088;
loc_89937AF8:
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r31,r10,r7
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x89937b3c
	if (!ctx.cr6.eq) goto loc_89937B3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x89937af8
	if (ctx.cr6.lt) goto loc_89937AF8;
loc_89937B14:
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r8,r9,658
	ctx.r8.s64 = ctx.r9.s64 + 658;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// clrlwi r6,r10,25
	ctx.r6.u64 = ctx.r10.u32 & 0x7F;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r6,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// sth r3,27844(r7)
	REX_STORE_U16(ctx.r7.u32 + 27844, ctx.r3.u16);
loc_89937B3C:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899385B0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899385B8;
	__savegprlr_29(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r7,r10,3620
	ctx.r7.s64 = ctx.r10.s64 + 3620;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r8,6420
	ctx.r3.s64 = ctx.r8.s64 + 6420;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lhz r9,3620(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 3620);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lhz r8,6420(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 6420);
	// addi r30,r6,-9496
	ctx.r30.s64 = ctx.r6.s64 + -9496;
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r6,-9496(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -9496);
	// lhz r10,25056(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 25056);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r8,2(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lwz r7,25056(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 25056);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subfic r3,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r3.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// lwz r9,12792(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12792);
	// subf r10,r31,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r31.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r3,r8,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lis r4,-30274
	ctx.r4.s64 = -1984036864;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// rlwimi r10,r5,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r8,512(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 512);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r10,r6,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// add r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// or r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 | ctx.r9.u64;
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// or r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938C90) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89938C98;
	__savegprlr_29(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r4,r9,6420
	ctx.r4.s64 = ctx.r9.s64 + 6420;
	// addi r5,r10,-9496
	ctx.r5.s64 = ctx.r10.s64 + -9496;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,-9496(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -9496);
	// addi r3,r8,3620
	ctx.r3.s64 = ctx.r8.s64 + 3620;
	// lhz r6,6420(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 6420);
	// lhz r8,3620(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 3620);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lhz r8,2(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,12792(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12792);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lwz r10,512(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 512);
	// subf r3,r3,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// subf r7,r31,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r31.u64;
	// add r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r9,25056(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 25056);
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993B6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x8993B6B0;
	__savegprlr_17(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r18,r11,25128
	ctx.r18.s64 = ctx.r11.s64 + 25128;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lbz r20,-31402(r6)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r6.u32 + -31402);
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// addi r27,r11,13024
	ctx.r27.s64 = ctx.r11.s64 + 13024;
	// addi r23,r10,-2480
	ctx.r23.s64 = ctx.r10.s64 + -2480;
	// addi r5,r9,9656
	ctx.r5.s64 = ctx.r9.s64 + 9656;
	// addi r22,r8,27804
	ctx.r22.s64 = ctx.r8.s64 + 27804;
	// addi r19,r7,3536
	ctx.r19.s64 = ctx.r7.s64 + 3536;
loc_8993B6EC:
	// lwz r24,0(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r24,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993b984
	if (ctx.cr6.eq) goto loc_8993B984;
	// clrlwi r28,r20,24
	ctx.r28.u64 = ctx.r20.u32 & 0xFF;
	// lhz r3,28(r21)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r21.u32 + 28);
	// lhz r31,24(r21)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r21.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8993b71c
	if (!ctx.cr6.eq) goto loc_8993B71C;
loc_8993B714:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8993b964
	goto loc_8993B964;
loc_8993B71C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x8993b8c4
	if (!ctx.cr6.gt) goto loc_8993B8C4;
	// addic. r26,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r26.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x8993b8c4
	if (!ctx.cr0.gt) goto loc_8993B8C4;
loc_8993B730:
	// lbzx r6,r30,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// addi r11,r5,76
	ctx.r11.s64 = ctx.r5.s64 + 76;
	// mulli r7,r6,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lbzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,116
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 116, ctx.xer);
	// bge cr6,0x8993b848
	if (!ctx.cr6.lt) goto loc_8993B848;
	// rlwinm r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993b714
	if (ctx.cr6.eq) goto loc_8993B714;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
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
	// bge 0x8993b79c
	if (!ctx.cr0.lt) goto loc_8993B79C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993B79C:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x8993b714
	if (ctx.cr6.gt) goto loc_8993B714;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r11,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r11.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993b7b4
	if (!ctx.cr0.lt) goto loc_8993B7B4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993B7B4:
	// cmpwi cr6,r11,160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 160, ctx.xer);
	// bgt cr6,0x8993b714
	if (ctx.cr6.gt) goto loc_8993B714;
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993b7dc
	if (ctx.cr6.eq) goto loc_8993B7DC;
	// addi r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 + 68;
	// lhzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,516
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 516, ctx.xer);
	// beq cr6,0x8993b8b8
	if (ctx.cr6.eq) goto loc_8993B8B8;
loc_8993B7DC:
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
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
	// beq cr6,0x8993b8b8
	if (ctx.cr6.eq) goto loc_8993B8B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8993b828
	if (!ctx.cr6.gt) goto loc_8993B828;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
loc_8993B828:
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// bge cr6,0x8993b960
	if (!ctx.cr6.lt) goto loc_8993B960;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993b960
	if (ctx.cr6.eq) goto loc_8993B960;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8993b960
	goto loc_8993B960;
loc_8993B848:
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// addic. r11,r8,-160
	ctx.xer.ca = ctx.r8.u32 > 159;
	ctx.r11.s64 = ctx.r8.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993b858
	if (!ctx.cr0.lt) goto loc_8993B858;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993B858:
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bgt cr6,0x8993b714
	if (ctx.cr6.gt) goto loc_8993B714;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r10,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r10.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8993b870
	if (!ctx.cr0.lt) goto loc_8993B870;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8993B870:
	// cmpwi cr6,r10,160
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 160, ctx.xer);
	// bgt cr6,0x8993b714
	if (ctx.cr6.gt) goto loc_8993B714;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// addi r17,r11,160
	ctx.r17.s64 = ctx.r11.s64 + 160;
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
	// srawi r10,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 4;
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
	// bne cr6,0x8993b93c
	if (!ctx.cr6.eq) goto loc_8993B93C;
loc_8993B8B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8993b730
	if (ctx.cr6.lt) goto loc_8993B730;
loc_8993B8C4:
	// add r11,r28,r22
	ctx.r11.u64 = ctx.r28.u64 + ctx.r22.u64;
	// addi r10,r5,76
	ctx.r10.s64 = ctx.r5.s64 + 76;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r11,r9,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// rlwinm r8,r11,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bge cr6,0x8993b94c
	if (!ctx.cr6.lt) goto loc_8993B94C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8993b960
	if (ctx.cr6.eq) goto loc_8993B960;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8993b900
	if (!ctx.cr6.gt) goto loc_8993B900;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8993B900:
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
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// subfe r10,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993b960
	if (ctx.cr6.eq) goto loc_8993B960;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8993b960
	goto loc_8993B960;
loc_8993B93C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8993b960
	if (!ctx.cr6.gt) goto loc_8993B960;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// b 0x8993b960
	goto loc_8993B960;
loc_8993B94C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8993b960
	if (ctx.cr6.eq) goto loc_8993B960;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8993b960
	if (!ctx.cr6.gt) goto loc_8993B960;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8993B960:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8993B964:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,660(r21)
	REX_STORE_U8(ctx.r21.u32 + 660, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993b984
	if (ctx.cr6.eq) goto loc_8993B984;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r19
	REX_STORE_U16(ctx.r11.u32 + ctx.r19.u32, ctx.r10.u16);
loc_8993B984:
	// addi r21,r21,696
	ctx.r21.s64 = ctx.r21.s64 + 696;
	// addi r11,r18,1392
	ctx.r11.s64 = ctx.r18.s64 + 1392;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993b6ec
	if (ctx.cr6.lt) goto loc_8993B6EC;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993FB98) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x8993FBA0;
	__savegprlr_21(ctx, base);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r7,-32640
	ctx.r7.s64 = -2139095040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32640
	ctx.r8.s64 = -2139095040;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r3,-32640
	ctx.r3.s64 = -2139095040;
	// addi r29,r11,580
	ctx.r29.s64 = ctx.r11.s64 + 580;
	// ori r6,r7,32833
	ctx.r6.u64 = ctx.r7.u64 | 32833;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// li r30,16
	ctx.r30.s64 = 16;
	// li r31,2
	ctx.r31.s64 = 2;
	// ori r5,r8,32835
	ctx.r5.u64 = ctx.r8.u64 | 32835;
	// ori r7,r3,32854
	ctx.r7.u64 = ctx.r3.u64 | 32854;
	// addi r11,r10,3800
	ctx.r11.s64 = ctx.r10.s64 + 3800;
loc_8993FBD8:
	// mulli r3,r4,13
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(13));
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8993FBE0:
	// add r28,r3,r10
	ctx.r28.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// rlwinm r28,r28,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r25,r11,26
	ctx.r25.s64 = ctx.r11.s64 + 26;
	// subfic r27,r10,10
	ctx.xer.ca = ctx.r10.u32 <= 10;
	ctx.r27.u64 = static_cast<uint64_t>(10) - ctx.r10.u64;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r28,r26
	REX_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r30.u32);
	// mullw r27,r27,r8
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// stbx r31,r28,r25
	REX_STORE_U8(ctx.r28.u32 + ctx.r25.u32, ctx.r31.u8);
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// addi r23,r11,12
	ctx.r23.s64 = ctx.r11.s64 + 12;
	// addi r22,r11,16
	ctx.r22.s64 = ctx.r11.s64 + 16;
	// addi r21,r11,20
	ctx.r21.s64 = ctx.r11.s64 + 20;
	// addi r26,r11,25
	ctx.r26.s64 = ctx.r11.s64 + 25;
	// addi r25,r11,24
	ctx.r25.s64 = ctx.r11.s64 + 24;
	// stwx r5,r28,r24
	REX_STORE_U32(ctx.r28.u32 + ctx.r24.u32, ctx.r5.u32);
	// mulli r27,r27,1000
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(1000));
	// stwx r6,r28,r23
	REX_STORE_U32(ctx.r28.u32 + ctx.r23.u32, ctx.r6.u32);
	// stwx r7,r28,r22
	REX_STORE_U32(ctx.r28.u32 + ctx.r22.u32, ctx.r7.u32);
	// stwx r9,r28,r21
	REX_STORE_U32(ctx.r28.u32 + ctx.r21.u32, ctx.r9.u32);
	// stwx r27,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r27.u32);
	// stbx r9,r28,r26
	REX_STORE_U8(ctx.r28.u32 + ctx.r26.u32, ctx.r9.u8);
	// stbx r9,r28,r25
	REX_STORE_U8(ctx.r28.u32 + ctx.r25.u32, ctx.r9.u8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x8993fbe0
	if (ctx.cr6.lt) goto loc_8993FBE0;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// stbx r3,r4,r29
	REX_STORE_U8(ctx.r4.u32 + ctx.r29.u32, ctx.r3.u8);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// blt cr6,0x8993fbd8
	if (ctx.cr6.lt) goto loc_8993FBD8;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stb r9,9542(r11)
	REX_STORE_U8(ctx.r11.u32 + 9542, ctx.r9.u8);
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899407F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899407F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x899dab80
	ctx.lr = 0x89940808;
	sub_899DAB80(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x89940834
	if (!ctx.cr6.eq) goto loc_89940834;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r8,r10,19504
	ctx.r8.s64 = ctx.r10.s64 + 19504;
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x89936360
	ctx.lr = 0x89940834;
	sub_89936360(ctx, base);
loc_89940834:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dab80
	ctx.lr = 0x89940840;
	sub_899DAB80(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,19508
	ctx.r27.s64 = ctx.r11.s64 + 19508;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
	// lwzx r6,r8,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// lwzx r9,r5,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lis r8,-16320
	ctx.r8.s64 = -1069547520;
	// li r4,60
	ctx.r4.s64 = 60;
	// ori r7,r8,16442
	ctx.r7.u64 = ctx.r8.u64 | 16442;
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// bl 0x899dab80
	ctx.lr = 0x899408A0;
	sub_899DAB80(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x899dab80
	ctx.lr = 0x899408B0;
	sub_899DAB80(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r6,12280
	ctx.r9.s64 = ctx.r6.s64 + 12280;
	// rlwinm r11,r7,0,23,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F0;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r10,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// ori r10,r4,16384
	ctx.r10.u64 = ctx.r4.u64 | 16384;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// lbzx r4,r29,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r11,r3,0,23,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1F0;
	// rlwimi r10,r7,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwimi r6,r3,1,27,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1E) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r28,r30,136
	ctx.r28.s64 = ctx.r30.s64 + 136;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// or r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r7,r30,140
	ctx.r7.s64 = ctx.r30.s64 + 140;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r29,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// stwx r26,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r26.u32);
	// addi r28,r30,128
	ctx.r28.s64 = ctx.r30.s64 + 128;
	// stwx r25,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u32);
	// addi r27,r30,132
	ctx.r27.s64 = ctx.r30.s64 + 132;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// addi r6,r10,33
	ctx.r6.s64 = ctx.r10.s64 + 33;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// stbx r4,r29,r8
	REX_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u8);
	// stbx r11,r29,r9
	REX_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89942400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89942408;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r11,530(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// stb r11,9519(r10)
	REX_STORE_U8(ctx.r10.u32 + 9519, ctx.r11.u8);
	// bl 0x89948a30
	ctx.lr = 0x89942420;
	sub_89948A30(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89942424;
	sub_899306A8(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x89942438;
	sub_89931DD8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
loc_89942444:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89942444
	if (!ctx.cr6.eq) goto loc_89942444;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r10,r10,-10772
	ctx.r10.s64 = ctx.r10.s64 + -10772;
	// addi r11,r11,20304
	ctx.r11.s64 = ctx.r11.s64 + 20304;
	// addi r31,r7,5344
	ctx.r31.s64 = ctx.r7.s64 + 5344;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r30,r6,12280
	ctx.r30.s64 = ctx.r6.s64 + 12280;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r5,-31400
	ctx.r29.s64 = ctx.r5.s64 + -31400;
	// addi r28,r4,20428
	ctx.r28.s64 = ctx.r4.s64 + 20428;
	// addi r27,r3,-9484
	ctx.r27.s64 = ctx.r3.s64 + -9484;
	// addi r26,r8,-21296
	ctx.r26.s64 = ctx.r8.s64 + -21296;
	// addi r25,r9,20412
	ctx.r25.s64 = ctx.r9.s64 + 20412;
loc_8994249C:
	// bl 0x899301c0
	ctx.lr = 0x899424A0;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x899424A4;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x899424AC;
	sub_89930930(ctx, base);
	// lis r24,-30305
	ctx.r24.s64 = -1986068480;
	// li r4,28
	ctx.r4.s64 = 28;
	// lbz r3,4144(r24)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + 4144);
	// bl 0x899426b8
	ctx.lr = 0x899424BC;
	sub_899426B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r4,27
	ctx.r4.s64 = 27;
	// lbz r3,4146(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4146);
	// bl 0x899426b8
	ctx.lr = 0x899424CC;
	sub_899426B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r4,26
	ctx.r4.s64 = 26;
	// lbz r3,4147(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4147);
	// bl 0x899426b8
	ctx.lr = 0x899424DC;
	sub_899426B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r4,25
	ctx.r4.s64 = 25;
	// lbz r3,4145(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4145);
	// bl 0x899426b8
	ctx.lr = 0x899424EC;
	sub_899426B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r4,24
	ctx.r4.s64 = 24;
	// lbz r3,4148(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4148);
	// bl 0x899426b8
	ctx.lr = 0x899424FC;
	sub_899426B8(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r11,3660(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3660);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x899426b8
	ctx.lr = 0x89942510;
	sub_899426B8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r11,-9224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9224);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x899426b8
	ctx.lr = 0x89942524;
	sub_899426B8(ctx, base);
	// lbz r10,4144(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 4144);
	// li r4,8
	ctx.r4.s64 = 8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// bl 0x89942750
	ctx.lr = 0x8994253C;
	sub_89942750(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r4,18
	ctx.r4.s64 = 18;
	// lbz r3,27280(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 27280);
	// bl 0x89942750
	ctx.lr = 0x8994254C;
	sub_89942750(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r4,23
	ctx.r4.s64 = 23;
	// lbz r3,7384(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 7384);
	// bl 0x89942750
	ctx.lr = 0x8994255C;
	sub_89942750(ctx, base);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r7,530(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89942680
	if (ctx.cr6.eq) goto loc_89942680;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x8994257C;
	sub_89931DD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_89942580:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// addi r5,r3,19
	ctx.r5.s64 = ctx.r3.s64 + 19;
	// stb r9,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r9.u8);
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r22,r6,30,2,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stb r10,8(r30)
	REX_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// rlwinm r9,r8,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// stb r10,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// rlwinm r5,r7,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r23,r8,30,2,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r24,r11,r28
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// addi r4,r29,1152
	ctx.r4.s64 = ctx.r29.s64 + 1152;
	// lwzx r21,r9,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r20,r5,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r5,r3,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r8,r29,1024
	ctx.r8.s64 = ctx.r29.s64 + 1024;
	// lwzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r19,r6,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r7,r29,768
	ctx.r7.s64 = ctx.r29.s64 + 768;
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// rlwinm r18,r24,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r23,r5,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r6,r29,640
	ctx.r6.s64 = ctx.r29.s64 + 640;
	// stw r21,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r21.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r9,r3,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r20,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// addi r5,r29,512
	ctx.r5.s64 = ctx.r29.s64 + 512;
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r21,r18,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r8,r24,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r22,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r22.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r19.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// stw r23,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// stb r11,9(r30)
	REX_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// blt cr6,0x89942580
	if (ctx.cr6.lt) goto loc_89942580;
loc_89942680:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x8994268C;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89942690;
	sub_899319C8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994249c
	if (ctx.cr6.eq) goto loc_8994249C;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9519(r10)
	REX_STORE_U8(ctx.r10.u32 + 9519, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899452F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x899452F8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// addi r25,r10,25128
	ctx.r25.s64 = ctx.r10.s64 + 25128;
	// addi r6,r9,7384
	ctx.r6.s64 = ctx.r9.s64 + 7384;
	// lbz r11,27280(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27280);
	// lis r23,-30242
	ctx.r23.s64 = -1981939712;
	// lbz r10,128(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 128);
	// li r26,0
	ctx.r26.s64 = 0;
	// lbz r8,7384(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 7384);
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lbz r9,256(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 256);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lbz r7,128(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// addi r28,r5,8088
	ctx.r28.s64 = ctx.r5.s64 + 8088;
	// lbz r6,256(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 256);
	// addi r31,r25,8
	ctx.r31.s64 = ctx.r25.s64 + 8;
	// stb r10,625(r25)
	REX_STORE_U8(ctx.r25.u32 + 625, ctx.r10.u8);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stb r11,624(r25)
	REX_STORE_U8(ctx.r25.u32 + 624, ctx.r11.u8);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r24,-21584(r23)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + -21584);
	// lis r21,8
	ctx.r21.s64 = 524288;
	// stb r9,626(r25)
	REX_STORE_U8(ctx.r25.u32 + 626, ctx.r9.u8);
	// lis r17,432
	ctx.r17.s64 = 28311552;
	// stb r8,1320(r25)
	REX_STORE_U8(ctx.r25.u32 + 1320, ctx.r8.u8);
	// lis r18,352
	ctx.r18.s64 = 23068672;
	// lwz r19,12000(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 12000);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// stb r7,1321(r25)
	REX_STORE_U8(ctx.r25.u32 + 1321, ctx.r7.u8);
	// addi r20,r11,20432
	ctx.r20.s64 = ctx.r11.s64 + 20432;
	// stb r6,1322(r25)
	REX_STORE_U8(ctx.r25.u32 + 1322, ctx.r6.u8);
loc_89945380:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,580(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 616);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r10,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// lwz r30,4(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// bgt cr6,0x8994579c
	if (ctx.cr6.gt) goto loc_8994579C;
	// beq cr6,0x89945728
	if (ctx.cr6.eq) goto loc_89945728;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899455b8
	if (ctx.cr6.eq) goto loc_899455B8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x89945838
	if (!ctx.cr6.eq) goto loc_89945838;
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8994548c
	if (ctx.cr6.eq) goto loc_8994548C;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89945454
	if (ctx.cr6.eq) goto loc_89945454;
loc_899453D4:
	// lwz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x89945448
	if (!ctx.cr6.eq) goto loc_89945448;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x89945424
	if (ctx.cr6.eq) goto loc_89945424;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_899453FC:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x89945414
	if (!ctx.cr6.eq) goto loc_89945414;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_89945414:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x899453fc
	if (!ctx.cr6.eq) goto loc_899453FC;
loc_89945424:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89945448
	if (!ctx.cr6.eq) goto loc_89945448;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x89933ef8
	ctx.lr = 0x8994543C;
	sub_89933EF8(ctx, base);
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// bl 0x89945140
	ctx.lr = 0x89945448;
	sub_89945140(ctx, base);
loc_89945448:
	// lwzu r4,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899453d4
	if (!ctx.cr6.eq) goto loc_899453D4;
loc_89945454:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89945478
	if (ctx.cr6.eq) goto loc_89945478;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8994547c
	goto loc_8994547C;
loc_89945478:
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8994547C:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// bl 0x89945140
	ctx.lr = 0x8994548C;
	sub_89945140(ctx, base);
loc_8994548C:
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945588
	if (ctx.cr6.eq) goto loc_89945588;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89945528
	if (ctx.cr6.eq) goto loc_89945528;
loc_899454A8:
	// lwz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8994551c
	if (!ctx.cr6.eq) goto loc_8994551C;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x899454f8
	if (ctx.cr6.eq) goto loc_899454F8;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_899454D0:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x899454e8
	if (!ctx.cr6.eq) goto loc_899454E8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_899454E8:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x899454d0
	if (!ctx.cr6.eq) goto loc_899454D0;
loc_899454F8:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994551c
	if (!ctx.cr6.eq) goto loc_8994551C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x89933ef8
	ctx.lr = 0x89945510;
	sub_89933EF8(ctx, base);
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// bl 0x89945140
	ctx.lr = 0x8994551C;
	sub_89945140(ctx, base);
loc_8994551C:
	// lwzu r4,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899454a8
	if (!ctx.cr6.eq) goto loc_899454A8;
loc_89945528:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945540
	if (ctx.cr6.eq) goto loc_89945540;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x89945578
	goto loc_89945578;
loc_89945540:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945578
	if (ctx.cr6.eq) goto loc_89945578;
loc_89945554:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89945554
	if (!ctx.cr6.eq) goto loc_89945554;
loc_89945578:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// bl 0x89945140
	ctx.lr = 0x89945588;
	sub_89945140(ctx, base);
loc_89945588:
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945838
	if (ctx.cr6.eq) goto loc_89945838;
	// lbz r11,646(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 646);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,646(r31)
	REX_STORE_U8(ctx.r31.u32 + 646, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x89945838
	if (!ctx.cr6.eq) goto loc_89945838;
	// stb r26,646(r31)
	REX_STORE_U8(ctx.r31.u32 + 646, ctx.r26.u8);
	// b 0x89945838
	goto loc_89945838;
loc_899455B8:
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899455fc
	if (ctx.cr6.eq) goto loc_899455FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899455ec
	if (ctx.cr6.eq) goto loc_899455EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x899455f0
	goto loc_899455F0;
loc_899455EC:
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_899455F0:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// bl 0x89945140
	ctx.lr = 0x899455FC;
	sub_89945140(ctx, base);
loc_899455FC:
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945668
	if (ctx.cr6.eq) goto loc_89945668;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945624
	if (ctx.cr6.eq) goto loc_89945624;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8994565c
	goto loc_8994565C;
loc_89945624:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8994565c
	if (ctx.cr6.eq) goto loc_8994565C;
loc_89945638:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89945638
	if (!ctx.cr6.eq) goto loc_89945638;
loc_8994565C:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// bl 0x89945140
	ctx.lr = 0x89945668;
	sub_89945140(ctx, base);
loc_89945668:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,618(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r30,r9,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// beq cr6,0x899456b4
	if (ctx.cr6.eq) goto loc_899456B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899456a8
	if (ctx.cr6.eq) goto loc_899456A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x899456ac
	goto loc_899456AC;
loc_899456A8:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_899456AC:
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// bl 0x89945140
	ctx.lr = 0x899456B4;
	sub_89945140(ctx, base);
loc_899456B4:
	// lbz r11,618(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945838
	if (ctx.cr6.eq) goto loc_89945838;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899456e4
	if (ctx.cr6.eq) goto loc_899456E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x89945140
	ctx.lr = 0x899456E0;
	sub_89945140(ctx, base);
	// b 0x89945838
	goto loc_89945838;
loc_899456E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8994571c
	if (ctx.cr6.eq) goto loc_8994571C;
loc_899456F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899456f8
	if (!ctx.cr6.eq) goto loc_899456F8;
loc_8994571C:
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// bl 0x89945140
	ctx.lr = 0x89945724;
	sub_89945140(ctx, base);
	// b 0x89945838
	goto loc_89945838;
loc_89945728:
	// lbz r11,256(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 256);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89945748
	if (ctx.cr6.eq) goto loc_89945748;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,7104(r22)
	REX_STORE_U32(ctx.r22.u32 + 7104, ctx.r21.u32);
loc_89945748:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89945764
	if (ctx.cr6.eq) goto loc_89945764;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x89945764
	if (!ctx.cr6.gt) goto loc_89945764;
	// lis r11,-8
	ctx.r11.s64 = -524288;
	// stw r11,7104(r22)
	REX_STORE_U32(ctx.r22.u32 + 7104, ctx.r11.u32);
loc_89945764:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994577c
	if (ctx.cr6.eq) goto loc_8994577C;
	// cmpw cr6,r24,r17
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8994577c
	if (!ctx.cr6.lt) goto loc_8994577C;
	// add r24,r24,r21
	ctx.r24.u64 = ctx.r24.u64 + ctx.r21.u64;
loc_8994577C:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89945838
	if (ctx.cr6.eq) goto loc_89945838;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x89945838
	if (!ctx.cr6.gt) goto loc_89945838;
	// subf r24,r21,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r21.u64;
	// stw r24,-21584(r23)
	REX_STORE_U32(ctx.r23.u32 + -21584, ctx.r24.u32);
	// b 0x89945838
	goto loc_89945838;
loc_8994579C:
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// bne cr6,0x89945838
	if (!ctx.cr6.eq) goto loc_89945838;
	// lbz r10,618(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 618);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899457cc
	if (ctx.cr6.eq) goto loc_899457CC;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bge cr6,0x899457cc
	if (!ctx.cr6.lt) goto loc_899457CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
loc_899457CC:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899457f0
	if (ctx.cr6.eq) goto loc_899457F0;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899457f0
	if (!ctx.cr6.gt) goto loc_899457F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
loc_899457F0:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945814
	if (ctx.cr6.eq) goto loc_89945814;
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bge cr6,0x89945814
	if (!ctx.cr6.lt) goto loc_89945814;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_89945814:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89945838
	if (ctx.cr6.eq) goto loc_89945838;
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -80, ctx.xer);
	// ble cr6,0x89945838
	if (!ctx.cr6.gt) goto loc_89945838;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_89945838:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r25,1400
	ctx.r11.s64 = ctx.r25.s64 + 1400;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89945380
	if (ctx.cr6.lt) goto loc_89945380;
	// stw r24,-21584(r23)
	REX_STORE_U32(ctx.r23.u32 + -21584, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899490E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899490E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// addi r3,r11,22540
	ctx.r3.s64 = ctx.r11.s64 + 22540;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x89931d78
	ctx.lr = 0x8994910C;
	sub_89931D78(ctx, base);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// lbz r11,12799(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 12799);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89949180
	if (ctx.cr6.eq) goto loc_89949180;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,-4536
	ctx.r31.s64 = ctx.r10.s64 + -4536;
	// addi r8,r31,-96
	ctx.r8.s64 = ctx.r31.s64 + -96;
	// lwzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x89927b98
	ctx.lr = 0x89949144;
	sub_89927B98(ctx, base);
	// lbz r11,12799(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 12799);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,16576
	ctx.r6.s64 = 1086324736;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r9,r7,22560
	ctx.r9.s64 = ctx.r7.s64 + 22560;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r11,r3,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x89931d78
	ctx.lr = 0x89949178;
	sub_89931D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89949180:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r3,r11,22548
	ctx.r3.s64 = ctx.r11.s64 + 22548;
	// bl 0x89931d78
	ctx.lr = 0x8994918C;
	sub_89931D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89949548) {
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899496b8
	if (ctx.cr6.gt) goto loc_899496B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899495f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899495F0;
	// bdzf 4*cr6+eq,0x89949644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949644;
	// bne cr6,0x89949680
	if (!ctx.cr6.eq) goto loc_89949680;
	// bl 0x8994bf28
	ctx.lr = 0x89949580;
	sub_8994BF28(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
	// addi r9,r9,9544
	ctx.r9.s64 = ctx.r9.s64 + 9544;
loc_89949594:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899495e0
	if (!ctx.cr6.eq) goto loc_899495E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x89949594
	if (ctx.cr6.lt) goto loc_89949594;
	// li r11,1
	ctx.r11.s64 = 1;
loc_899495BC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899495e8
	if (ctx.cr6.eq) goto loc_899495E8;
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
loc_899495E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x899495bc
	goto loc_899495BC;
loc_899495E8:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x899496b8
	goto loc_899496B8;
loc_899495F0:
	// lis r11,-16320
	ctx.r11.s64 = -1069547520;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r6,r11,16384
	ctx.r6.u64 = ctx.r11.u64 | 16384;
	// addi r3,r10,10132
	ctx.r3.s64 = ctx.r10.s64 + 10132;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x8994960C;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r11,r9,-4772
	ctx.r11.s64 = ctx.r9.s64 + -4772;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// bl 0x89931d78
	ctx.lr = 0x89949624;
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
	// beq cr6,0x899496b8
	if (ctx.cr6.eq) goto loc_899496B8;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x899496b8
	goto loc_899496B8;
loc_89949644:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,-4772
	ctx.r3.s64 = ctx.r11.s64 + -4772;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949660;
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
	// beq cr6,0x899496b8
	if (ctx.cr6.eq) goto loc_899496B8;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x899496b8
	goto loc_899496B8;
loc_89949680:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
	// addi r9,r9,9544
	ctx.r9.s64 = ctx.r9.s64 + 9544;
loc_89949694:
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x89949694
	if (ctx.cr6.lt) goto loc_89949694;
	// bl 0x89948238
	ctx.lr = 0x899496B4;
	sub_89948238(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_899496B8:
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

DEFINE_REX_FUNC(sub_89949C40) {
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
	// bl 0x899483f8
	ctx.lr = 0x89949C5C;
	sub_899483F8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89949c70
	if (ctx.cr6.eq) goto loc_89949C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x89949dcc
	goto loc_89949DCC;
loc_89949C70:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bgt cr6,0x89949dc8
	if (ctx.cr6.gt) goto loc_89949DC8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89949cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949CEC;
	// bdzf 4*cr6+eq,0x89949d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949D30;
	// bdzf 4*cr6+eq,0x89949d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949D30;
	// bne cr6,0x89949d5c
	if (!ctx.cr6.eq) goto loc_89949D5C;
	// bl 0x89949490
	ctx.lr = 0x89949C98;
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
	ctx.lr = 0x89949CB4;
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
	ctx.lr = 0x89949CCC;
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
	// beq cr6,0x89949dc8
	if (ctx.cr6.eq) goto loc_89949DC8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x89949dc8
	goto loc_89949DC8;
loc_89949CEC:
	// bl 0x89949490
	ctx.lr = 0x89949CF0;
	sub_89949490(ctx, base);
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
	ctx.lr = 0x89949D10;
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
	// beq cr6,0x89949dc8
	if (ctx.cr6.eq) goto loc_89949DC8;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x89949dc8
	goto loc_89949DC8;
loc_89949D30:
	// bl 0x89949490
	ctx.lr = 0x89949D34;
	sub_89949490(ctx, base);
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
	ctx.lr = 0x89949D50;
	sub_89931D78(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// b 0x89949dc8
	goto loc_89949DC8;
loc_89949D5C:
	// bl 0x8994bf28
	ctx.lr = 0x89949D60;
	sub_8994BF28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899d8f48
	ctx.lr = 0x89949D78;
	sub_899D8F48(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// addi r30,r11,8544
	ctx.r30.s64 = ctx.r11.s64 + 8544;
	// lbz r10,3(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x89949da0
	if (!ctx.cr6.eq) goto loc_89949DA0;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x89949da4
	if (ctx.cr6.eq) goto loc_89949DA4;
loc_89949DA0:
	// bl 0x89948b70
	ctx.lr = 0x89949DA4;
	sub_89948B70(ctx, base);
loc_89949DA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89949DA8:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,96
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 96, ctx.xer);
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt cr6,0x89949da8
	if (ctx.cr6.lt) goto loc_89949DA8;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_89949DC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_89949DCC:
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

DEFINE_REX_FUNC(sub_8994A648) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8994A650;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r10,530(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// addi r6,r6,22964
	ctx.r6.s64 = ctx.r6.s64 + 22964;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r7,r10,22944
	ctx.r7.s64 = ctx.r10.s64 + 22944;
loc_8994A690:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbzx r31,r10,r7
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u8);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r31,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r31.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x8994a690
	if (ctx.cr6.lt) goto loc_8994A690;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r27,-30274
	ctx.r27.s64 = -1984036864;
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// addi r8,r3,22984
	ctx.r8.s64 = ctx.r3.s64 + 22984;
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r11,r27,544
	ctx.r11.s64 = ctx.r27.s64 + 544;
	// addi r9,r26,-9480
	ctx.r9.s64 = ctx.r26.s64 + -9480;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r24,12344
	ctx.r3.s64 = ctx.r24.s64 + 12344;
	// addi r16,r7,-10736
	ctx.r16.s64 = ctx.r7.s64 + -10736;
	// lis r23,-30295
	ctx.r23.s64 = -1985413120;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r22,-30295
	ctx.r22.s64 = -1985413120;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// addi r15,r29,-4960
	ctx.r15.s64 = ctx.r29.s64 + -4960;
	// addi r7,r6,22896
	ctx.r7.s64 = ctx.r6.s64 + 22896;
	// lis r31,32639
	ctx.r31.s64 = 2139029504;
	// stw r15,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r6,r5,12768
	ctx.r6.s64 = ctx.r5.s64 + 12768;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// addi r29,r28,22908
	ctx.r29.s64 = ctx.r28.s64 + 22908;
	// addi r27,r23,22932
	ctx.r27.s64 = ctx.r23.s64 + 22932;
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r28,r22,22920
	ctx.r28.s64 = ctx.r22.s64 + 22920;
	// addi r26,r21,20432
	ctx.r26.s64 = ctx.r21.s64 + 20432;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r26,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lis r3,16576
	ctx.r3.s64 = 1086324736;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r10,r10,-2072
	ctx.r10.s64 = ctx.r10.s64 + -2072;
	// addi r5,r4,6036
	ctx.r5.s64 = ctx.r4.s64 + 6036;
	// addi r25,r25,5216
	ctx.r25.s64 = ctx.r25.s64 + 5216;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ori r18,r31,32768
	ctx.r18.u64 = ctx.r31.u64 | 32768;
	// stw r5,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// ori r14,r3,16384
	ctx.r14.u64 = ctx.r3.u64 | 16384;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r20,r9,12280
	ctx.r20.s64 = ctx.r9.s64 + 12280;
	// addi r30,r8,-31400
	ctx.r30.s64 = ctx.r8.s64 + -31400;
	// b 0x8994a7c8
	goto loc_8994A7C8;
loc_8994A7A4:
	// lis r11,16576
	ctx.r11.s64 = 1086324736;
	// lwz r15,104(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ori r14,r11,16384
	ctx.r14.u64 = ctx.r11.u64 | 16384;
	// lwz r25,100(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r26,120(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
loc_8994A7C8:
	// lwz r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x899301c0
	ctx.lr = 0x8994A7DC;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994A7E0;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994A7E8;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8994A7EC;
	sub_899306A8(ctx, base);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// lbz r6,256(r26)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r26.u32 + 256);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8994a8b8
	if (!ctx.cr6.eq) goto loc_8994A8B8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a820
	if (ctx.cr6.eq) goto loc_8994A820;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r17,r11,r28
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// stb r17,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
loc_8994A820:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a838
	if (ctx.cr6.eq) goto loc_8994A838;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r17,r11,r27
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r17,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
loc_8994A838:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a878
	if (ctx.cr6.eq) goto loc_8994A878;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8994a870
	if (!ctx.cr6.eq) goto loc_8994A870;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// b 0x8994a878
	goto loc_8994A878;
loc_8994A870:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8994A878:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a8b8
	if (ctx.cr6.eq) goto loc_8994A8B8;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8994a8b0
	if (!ctx.cr6.eq) goto loc_8994A8B0;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8994a8b8
	goto loc_8994A8B8;
loc_8994A8B0:
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8994A8B8:
	// rlwinm r11,r7,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8994a9a0
	if (ctx.cr6.eq) goto loc_8994A9A0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x8994a92c
	if (ctx.cr6.eq) goto loc_8994A92C;
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// bne cr6,0x8994aa10
	if (!ctx.cr6.eq) goto loc_8994AA10;
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a900
	if (ctx.cr6.eq) goto loc_8994A900;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
loc_8994A900:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994aa10
	if (ctx.cr6.eq) goto loc_8994AA10;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8994aa10
	goto loc_8994AA10;
loc_8994A92C:
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a964
	if (ctx.cr6.eq) goto loc_8994A964;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r24
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x8994a95c
	if (!ctx.cr6.eq) goto loc_8994A95C;
	// stbx r22,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u8);
	// b 0x8994a964
	goto loc_8994A964;
loc_8994A95C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
loc_8994A964:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994aa10
	if (ctx.cr6.eq) goto loc_8994AA10;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r24
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8994a994
	if (!ctx.cr6.eq) goto loc_8994A994;
	// li r10,63
	ctx.r10.s64 = 63;
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// b 0x8994aa10
	goto loc_8994AA10;
loc_8994A994:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// b 0x8994aa10
	goto loc_8994AA10;
loc_8994A9A0:
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a9d8
	if (ctx.cr6.eq) goto loc_8994A9D8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bne cr6,0x8994a9d0
	if (!ctx.cr6.eq) goto loc_8994A9D0;
	// stbx r22,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r22.u8);
	// b 0x8994a9d8
	goto loc_8994A9D8;
loc_8994A9D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
loc_8994A9D8:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994aa10
	if (ctx.cr6.eq) goto loc_8994AA10;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// extsb r11,r17
	ctx.r11.s64 = ctx.r17.s8;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8994aa08
	if (!ctx.cr6.eq) goto loc_8994AA08;
	// li r10,127
	ctx.r10.s64 = 127;
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// b 0x8994aa10
	goto loc_8994AA10;
loc_8994AA08:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
loc_8994AA10:
	// rlwinm r11,r6,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994aafc
	if (ctx.cr6.eq) goto loc_8994AAFC;
	// extsb r9,r17
	ctx.r9.s64 = ctx.r17.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8994aaac
	if (ctx.cr6.eq) goto loc_8994AAAC;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x8994aa68
	if (ctx.cr6.eq) goto loc_8994AA68;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lbz r8,-31405(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// lbzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8994aafc
	if (ctx.cr6.eq) goto loc_8994AAFC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8994aa60
	if (!ctx.cr6.eq) goto loc_8994AA60;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x899d9448
	ctx.lr = 0x8994AA5C;
	sub_899D9448(ctx, base);
	// b 0x8994aafc
	goto loc_8994AAFC;
loc_8994AA60:
	// stbx r17,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r17.u8);
	// b 0x8994aafc
	goto loc_8994AAFC;
loc_8994AA68:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
loc_8994AA74:
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8994aa9c
	if (ctx.cr6.eq) goto loc_8994AA9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8994aa74
	if (ctx.cr6.lt) goto loc_8994AA74;
	// b 0x8994aafc
	goto loc_8994AAFC;
loc_8994AA9C:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x899d92f8
	ctx.lr = 0x8994AAA8;
	sub_899D92F8(ctx, base);
	// b 0x8994aafc
	goto loc_8994AAFC;
loc_8994AAAC:
	// lbz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994aacc
	if (!ctx.cr6.eq) goto loc_8994AACC;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r19.u8);
	// b 0x8994aae4
	goto loc_8994AAE4;
loc_8994AACC:
	// addi r10,r31,-7560
	ctx.r10.s64 = ctx.r31.s64 + -7560;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,-8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x899d94e8
	ctx.lr = 0x8994AAE4;
	sub_899D94E8(ctx, base);
loc_8994AAE4:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,530(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8994aafc
	if (!ctx.cr6.eq) goto loc_8994AAFC;
	// li r11,600
	ctx.r11.s64 = 600;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_8994AAFC:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994ab74
	if (ctx.cr6.eq) goto loc_8994AB74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994ab74
	if (!ctx.cr6.eq) goto loc_8994AB74;
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// lwz r11,3668(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8994AB3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3672(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3672);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,600(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 600);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8994AB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8994AB74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8994AB74:
	// lbz r11,128(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 128);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994ab8c
	if (ctx.cr6.eq) goto loc_8994AB8C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x899d9448
	ctx.lr = 0x8994AB8C;
	sub_899D9448(ctx, base);
loc_8994AB8C:
	// extsb r4,r17
	ctx.r4.s64 = ctx.r17.s8;
	// lbz r11,-10032(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10032);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r31,-10032
	ctx.r10.s64 = ctx.r31.s64 + -10032;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8994abd4
	if (ctx.cr6.eq) goto loc_8994ABD4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994ABBC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r14
	ctx.r6.u64 = ctx.r11.u64 + ctx.r14.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994abbc
	if (!ctx.cr6.eq) goto loc_8994ABBC;
loc_8994ABD4:
	// lbz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stbx r19,r7,r20
	REX_STORE_U8(ctx.r7.u32 + ctx.r20.u32, ctx.r19.u8);
	// addi r9,r30,3856
	ctx.r9.s64 = ctx.r30.s64 + 3856;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994ac0c
	if (ctx.cr6.eq) goto loc_8994AC0C;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994ABF4:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r18,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r18.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994abf4
	if (!ctx.cr6.eq) goto loc_8994ABF4;
loc_8994AC0C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,30(r20)
	REX_STORE_U8(ctx.r20.u32 + 30, ctx.r19.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8994AC18:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r9,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994ac68
	if (ctx.cr6.eq) goto loc_8994AC68;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_8994AC50:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r18,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r18.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994ac50
	if (!ctx.cr6.eq) goto loc_8994AC50;
loc_8994AC68:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stbx r19,r6,r20
	REX_STORE_U8(ctx.r6.u32 + ctx.r20.u32, ctx.r19.u8);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x8994ac18
	if (ctx.cr6.lt) goto loc_8994AC18;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,530(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8994ad1c
	if (ctx.cr6.eq) goto loc_8994AD1C;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8994AC98:
	// subfic r9,r10,12
	ctx.xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.u64 = static_cast<uint64_t>(12) - ctx.r10.u64;
	// lbzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// rlwinm r7,r6,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_8994ACBC:
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stwu r5,-4(r8)
	ea = -4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8994acbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994ACBC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r19,r6,r20
	REX_STORE_U8(ctx.r6.u32 + ctx.r20.u32, ctx.r19.u8);
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
loc_8994ACF4:
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stwu r7,-4(r8)
	ea = -4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8994acf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994ACF4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r19,r6,r20
	REX_STORE_U8(ctx.r6.u32 + ctx.r20.u32, ctx.r19.u8);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8994ac98
	if (ctx.cr6.lt) goto loc_8994AC98;
loc_8994AD1C:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lbz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// rlwinm r3,r11,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stb r19,28(r20)
	REX_STORE_U8(ctx.r20.u32 + 28, ctx.r19.u8);
	// rlwinm r5,r11,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r7,r30,3348
	ctx.r7.s64 = ctx.r30.s64 + 3348;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mulli r8,r11,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwzx r9,r3,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r9,3628(r30)
	REX_STORE_U32(ctx.r30.u32 + 3628, ctx.r9.u32);
	// stw r11,3624(r30)
	REX_STORE_U32(ctx.r30.u32 + 3624, ctx.r11.u32);
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994ad84
	if (ctx.cr6.eq) goto loc_8994AD84;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
loc_8994AD6C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r18,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r18.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994ad6c
	if (!ctx.cr6.eq) goto loc_8994AD6C;
loc_8994AD84:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stb r19,26(r20)
	REX_STORE_U8(ctx.r20.u32 + 26, ctx.r19.u8);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x8994ad9c
	goto loc_8994AD9C;
loc_8994AD98:
	// lwz r25,100(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8994AD9C:
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// subfic r3,r11,25
	ctx.xer.ca = ctx.r11.u32 <= 25;
	ctx.r3.u64 = static_cast<uint64_t>(25) - ctx.r11.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// extsb r28,r7
	ctx.r28.s64 = ctx.r7.s8;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r27,r10,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r26,r10,r25
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r25,r10,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lbzx r22,r10,r9
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r28,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// lbzx r21,r6,r7
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r23,r26,30,2,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r26,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r6,r30,72
	ctx.r6.s64 = ctx.r30.s64 + 72;
	// stbx r19,r3,r20
	REX_STORE_U8(ctx.r3.u32 + ctx.r20.u32, ctx.r19.u8);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r25,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r3,r23,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stbx r19,r28,r20
	REX_STORE_U8(ctx.r28.u32 + ctx.r20.u32, ctx.r19.u8);
	// lwzx r24,r7,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r25,r5,30,2,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r6,r5,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stbx r19,r28,r20
	REX_STORE_U8(ctx.r28.u32 + ctx.r20.u32, ctx.r19.u8);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// rlwinm r5,r22,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// rlwinm r8,r28,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// rlwinm r9,r21,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r7,r30,84
	ctx.r7.s64 = ctx.r30.s64 + 84;
	// lwzx r26,r25,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r3,r22,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r25,r6,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r24,r5,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r23,r21,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stbx r19,r28,r20
	REX_STORE_U8(ctx.r28.u32 + ctx.r20.u32, ctx.r19.u8);
	// rlwinm r6,r28,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// stbx r19,r28,r20
	REX_STORE_U8(ctx.r28.u32 + ctx.r20.u32, ctx.r19.u8);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r8,r28,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r28,r9,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r7,r30,108
	ctx.r7.s64 = ctx.r30.s64 + 108;
	// lwzx r27,r23,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r24,r6,r5
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r24.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// stw r27,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// blt cr6,0x8994ad98
	if (ctx.cr6.lt) goto loc_8994AD98;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r30,3272
	ctx.r10.s64 = ctx.r30.s64 + 3272;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994aef4
	if (ctx.cr6.eq) goto loc_8994AEF4;
	// lis r8,16319
	ctx.r8.s64 = 1069481984;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// ori r7,r8,49152
	ctx.r7.u64 = ctx.r8.u64 | 49152;
loc_8994AEDC:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994aedc
	if (!ctx.cr6.eq) goto loc_8994AEDC;
loc_8994AEF4:
	// lbz r11,-10028(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10028);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r10,r31,-10028
	ctx.r10.s64 = ctx.r31.s64 + -10028;
	// stb r19,25(r20)
	REX_STORE_U8(ctx.r20.u32 + 25, ctx.r19.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,268
	ctx.r9.s64 = ctx.r30.s64 + 268;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994af30
	if (ctx.cr6.eq) goto loc_8994AF30;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994AF18:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r18,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r18.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994af18
	if (!ctx.cr6.eq) goto loc_8994AF18;
loc_8994AF30:
	// lbz r11,-10000(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10000);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r10,r31,-10000
	ctx.r10.s64 = ctx.r31.s64 + -10000;
	// stb r19,2(r20)
	REX_STORE_U8(ctx.r20.u32 + 2, ctx.r19.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,148
	ctx.r9.s64 = ctx.r30.s64 + 148;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994af6c
	if (ctx.cr6.eq) goto loc_8994AF6C;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994AF54:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r18,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r18.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994af54
	if (!ctx.cr6.eq) goto loc_8994AF54;
loc_8994AF6C:
	// stb r19,1(r20)
	REX_STORE_U8(ctx.r20.u32 + 1, ctx.r19.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bl 0x89930720
	ctx.lr = 0x8994AF80;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x8994AF84;
	sub_899319C8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994a7a4
	if (ctx.cr6.eq) goto loc_8994A7A4;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r19.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89956448;
	__savegprlr_24(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,8
	ctx.r31.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
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
	ctx.lr = 0x89956480;
	sub_89934FB8(ctx, base);
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
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
	ctx.lr = 0x899564B0;
	sub_89934FB8(ctx, base);
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// li r7,-31740
	ctx.r7.s64 = -31740;
	// addi r31,r11,29808
	ctx.r31.s64 = ctx.r11.s64 + 29808;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r6,r31,432
	ctx.r6.s64 = ctx.r31.s64 + 432;
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
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
	ctx.lr = 0x899564EC;
	sub_89934FB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_899564F4:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_89956500:
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
	// addi r7,r31,-4472
	ctx.r7.s64 = ctx.r31.s64 + -4472;
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
loc_89956544:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89956544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89956544;
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// addi r7,r31,512
	ctx.r7.s64 = ctx.r31.s64 + 512;
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
loc_89956570:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x89956570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89956570;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x89956500
	if (ctx.cr6.lt) goto loc_89956500;
	// addi r10,r31,-4472
	ctx.r10.s64 = ctx.r31.s64 + -4472;
	// addi r11,r31,-3792
	ctx.r11.s64 = ctx.r31.s64 + -3792;
	// mulli r28,r30,170
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// mulli r29,r30,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,-672
	ctx.r6.s64 = ctx.r31.s64 + -672;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899565B8;
	sub_89935880(ctx, base);
	// addi r10,r31,512
	ctx.r10.s64 = ctx.r31.s64 + 512;
	// addi r11,r31,1192
	ctx.r11.s64 = ctx.r31.s64 + 1192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x899565D4;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899564f4
	if (ctx.cr6.lt) goto loc_899564F4;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r10,3484
	ctx.r5.s64 = ctx.r10.s64 + 3484;
	// addi r4,r11,27276
	ctx.r4.s64 = ctx.r11.s64 + 27276;
loc_899565FC:
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
	// ble cr6,0x89956654
	if (!ctx.cr6.gt) goto loc_89956654;
	// rlwinm r7,r10,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xC0000000;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8995662C:
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
	// blt cr6,0x8995662c
	if (ctx.cr6.lt) goto loc_8995662C;
loc_89956654:
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
	// blt cr6,0x899565fc
	if (ctx.cr6.lt) goto loc_899565FC;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
loc_89956680:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r29,r31,-672
	ctx.r29.s64 = ctx.r31.s64 + -672;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// rlwinm r3,r9,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lhzx r7,r3,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// addi r30,r31,-672
	ctx.r30.s64 = ctx.r31.s64 + -672;
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r3,r31,-672
	ctx.r3.s64 = ctx.r31.s64 + -672;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// rlwinm r24,r11,15,0,16
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r28,r31,-672
	ctx.r28.s64 = ctx.r31.s64 + -672;
	// stwx r11,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r4,r31,-672
	ctx.r4.s64 = ctx.r31.s64 + -672;
	// addi r5,r31,-672
	ctx.r5.s64 = ctx.r31.s64 + -672;
	// addi r6,r31,-672
	ctx.r6.s64 = ctx.r31.s64 + -672;
	// addi r7,r31,-672
	ctx.r7.s64 = ctx.r31.s64 + -672;
	// stwx r10,r26,r3
	REX_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r10.u32);
	// srawi r9,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 8;
	// addi r24,r31,-672
	ctx.r24.s64 = ctx.r31.s64 + -672;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stwx r9,r26,r30
	REX_STORE_U32(ctx.r26.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stwx r10,r26,r24
	REX_STORE_U32(ctx.r26.u32 + ctx.r24.u32, ctx.r10.u32);
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// stwx r10,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r10.u32);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r10,r26,r4
	REX_STORE_U32(ctx.r26.u32 + ctx.r4.u32, ctx.r10.u32);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r3,r26,r5
	REX_STORE_U32(ctx.r26.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r9,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r9.u32);
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 17, ctx.xer);
	// stwx r27,r26,r7
	REX_STORE_U32(ctx.r26.u32 + ctx.r7.u32, ctx.r27.u32);
	// blt cr6,0x89956680
	if (ctx.cr6.lt) goto loc_89956680;
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89958278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89958280;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-9456
	ctx.r30.s64 = ctx.r11.s64 + -9456;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,-648
	ctx.r11.s64 = ctx.r30.s64 + -648;
	// li r9,216
	ctx.r9.s64 = 216;
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934860
	ctx.lr = 0x899582C0;
	sub_89934860(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899352b8
	ctx.lr = 0x899582F0;
	sub_899352B8(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-19828
	ctx.r29.s64 = ctx.r11.s64 + -19828;
loc_899582FC:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89958304:
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
	// blt cr6,0x89958304
	if (ctx.cr6.lt) goto loc_89958304;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,-648
	ctx.r9.s64 = ctx.r30.s64 + -648;
	// mulli r8,r31,84
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(84));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r31,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(60));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,560
	ctx.r6.s64 = ctx.r30.s64 + 560;
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
	ctx.lr = 0x899583A0;
	sub_89935610(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x899582fc
	if (ctx.cr6.lt) goto loc_899582FC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// beq cr6,0x899583e8
	if (ctx.cr6.eq) goto loc_899583E8;
	// addi r11,r11,-19132
	ctx.r11.s64 = ctx.r11.s64 + -19132;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x89957ea0
	ctx.lr = 0x899583E0;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899583E8:
	// addi r4,r11,-19132
	ctx.r4.s64 = ctx.r11.s64 + -19132;
	// addi r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 + 28;
	// bl 0x89957ea0
	ctx.lr = 0x899583F4;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959A40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89959A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x899597a0
	ctx.lr = 0x89959A5C;
	sub_899597A0(ctx, base);
	// lbz r11,54(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 54);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,54(r31)
	REX_STORE_U8(ctx.r31.u32 + 54, ctx.r10.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x89959a8c
	if (!ctx.cr6.gt) goto loc_89959A8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,54(r31)
	REX_STORE_U8(ctx.r31.u32 + 54, ctx.r10.u8);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_89959A8C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89959f30
	ctx.lr = 0x89959A9C;
	sub_89959F30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959F30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89959F38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r30,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(696));
	// addi r10,r11,638
	ctx.r10.s64 = ctx.r11.s64 + 638;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89959f7c
	if (!ctx.cr6.eq) goto loc_89959F7C;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x89959f80
	if (ctx.cr6.eq) goto loc_89959F80;
loc_89959F7C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_89959F80:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8995a178
	if (ctx.cr6.eq) goto loc_8995A178;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r8,r9,29320
	ctx.r8.s64 = ctx.r9.s64 + 29320;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r28,r31,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r28,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lbzx r24,r6,r8
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// bne cr6,0x89959fd8
	if (!ctx.cr6.eq) goto loc_89959FD8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899337b0
	ctx.lr = 0x89959FC4;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995a178
	if (ctx.cr6.eq) goto loc_8995A178;
	// ori r11,r28,16
	ctx.r11.u64 = ctx.r28.u64 | 16;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
loc_89959FD8:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,9416
	ctx.r7.s64 = ctx.r11.s64 + 9416;
	// lhz r11,12600(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 12600);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bgt cr6,0x8995a05c
	if (ctx.cr6.gt) goto loc_8995A05C;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8995a05c
	if (ctx.cr6.lt) goto loc_8995A05C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r26
	ctx.r10.s64 = ctx.r26.s16;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-17112
	ctx.r11.s64 = ctx.r9.s64 + -17112;
	// mulli r10,r5,1056
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1056));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_8995A02C:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8995a04c
	if (!ctx.cr6.eq) goto loc_8995A04C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8995a180
	if (ctx.cr6.eq) goto loc_8995A180;
loc_8995A04C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8995a02c
	if (ctx.cr6.lt) goto loc_8995A02C;
loc_8995A05C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8995A060:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995a178
	if (ctx.cr6.eq) goto loc_8995A178;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lhz r6,40(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 40);
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lis r3,-14336
	ctx.r3.s64 = -939524096;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r9,-9212(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// ori r7,r5,20077
	ctx.r7.u64 = ctx.r5.u64 | 20077;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// sth r6,124(r4)
	REX_STORE_U16(ctx.r4.u32 + 124, ctx.r6.u16);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// rlwinm r10,r10,19,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3;
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwz r7,20(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r5,9016
	ctx.r11.s64 = ctx.r5.s64 + 9016;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// ori r31,r3,32896
	ctx.r31.u64 = ctx.r3.u64 | 32896;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,10
	ctx.r3.s64 = 10;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r10,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addis r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -196608;
	// stw r7,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// lwz r7,24(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lhzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rotlwi r10,r6,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r7,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lhzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// lhzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// stw r5,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r5.u32);
	// stw r31,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r31.u32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stw r9,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// bl 0x8992b0c0
	ctx.lr = 0x8995A16C;
	sub_8992B0C0(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899362a0
	ctx.lr = 0x8995A178;
	sub_899362A0(ctx, base);
loc_8995A178:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8995A180:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8995a060
	goto loc_8995A060;
}

DEFINE_REX_FUNC(sub_8995B980) {
	REX_FUNC_PROLOGUE();
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995ba00
	if (ctx.cr6.eq) goto loc_8995BA00;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8995ba00
	if (ctx.cr6.eq) goto loc_8995BA00;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r5.u32);
	// lwzx r11,r9,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r11,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r10,52(r4)
	REX_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// blr 
	return;
loc_8995BA00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995BDD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x8995BDE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// mulli r30,r10,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995bec8
	if (ctx.cr6.eq) goto loc_8995BEC8;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwzx r5,r30,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r7,-21584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// addis r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -65536;
	// lbzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stwx r3,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// stwx r7,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u32);
	// blt cr6,0x8995be8c
	if (ctx.cr6.lt) goto loc_8995BE8C;
	// bne cr6,0x8995c028
	if (!ctx.cr6.eq) goto loc_8995C028;
	// addi r10,r31,66
	ctx.r10.s64 = ctx.r31.s64 + 66;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8995be6c
	if (!ctx.cr6.lt) goto loc_8995BE6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995BE6C:
	// addi r11,r31,67
	ctx.r11.s64 = ctx.r31.s64 + 67;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r9,r9,248
	ctx.r9.s64 = ctx.r9.s64 + 248;
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
loc_8995BE8C:
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8995c028
	if (!ctx.cr6.lt) goto loc_8995C028;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// addi r8,r31,67
	ctx.r8.s64 = ctx.r31.s64 + 67;
	// addi r7,r31,66
	ctx.r7.s64 = ctx.r31.s64 + 66;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r6,516
	ctx.r6.s64 = 516;
	// li r5,1
	ctx.r5.s64 = 1;
	// sthx r6,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u16);
	// stbx r11,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r11,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r5,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8995BEC8:
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
	// cmplwi cr6,r9,90
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 90, ctx.xer);
	// bne cr6,0x8995c028
	if (!ctx.cr6.eq) goto loc_8995C028;
	// addi r28,r31,110
	ctx.r28.s64 = ctx.r31.s64 + 110;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stbx r27,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u8);
	// addi r10,r10,5464
	ctx.r10.s64 = ctx.r10.s64 + 5464;
	// lbzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8995bf30
	if (!ctx.cr6.eq) goto loc_8995BF30;
loc_8995BF08:
	// lbzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r30,r28
	REX_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r9.u8);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8995c024
	if (ctx.cr6.eq) goto loc_8995C024;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995bf08
	if (ctx.cr6.eq) goto loc_8995BF08;
loc_8995BF30:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c368
	ctx.lr = 0x8995BF38;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995c028
	if (ctx.cr6.eq) goto loc_8995C028;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// li r6,48
	ctx.r6.s64 = 48;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mulli r29,r5,112
	ctx.r29.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// stwx r7,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r6,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r6.u32);
	// stwx r27,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r27.u32);
	// lbzx r4,r30,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stwx r4,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8995BF7C;
	sub_8992BD50(ctx, base);
	// addi r11,r31,109
	ctx.r11.s64 = ctx.r31.s64 + 109;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r9,300
	ctx.r9.s64 = 19660800;
	// addi r6,r3,29644
	ctx.r6.s64 = ctx.r3.s64 + 29644;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// addi r26,r31,60
	ctx.r26.s64 = ctx.r31.s64 + 60;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// addi r24,r31,68
	ctx.r24.s64 = ctx.r31.s64 + 68;
	// addi r23,r31,44
	ctx.r23.s64 = ctx.r31.s64 + 44;
	// addi r22,r31,80
	ctx.r22.s64 = ctx.r31.s64 + 80;
	// addi r21,r31,111
	ctx.r21.s64 = ctx.r31.s64 + 111;
	// addi r20,r31,88
	ctx.r20.s64 = ctx.r31.s64 + 88;
	// li r8,128
	ctx.r8.s64 = 128;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r9,r9,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x2;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// rotlwi r9,r6,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stwx r9,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r9,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r7,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u8);
	// stwx r3,r29,r26
	REX_STORE_U32(ctx.r29.u32 + ctx.r26.u32, ctx.r3.u32);
	// stwx r3,r29,r25
	REX_STORE_U32(ctx.r29.u32 + ctx.r25.u32, ctx.r3.u32);
	// stbx r27,r29,r24
	REX_STORE_U8(ctx.r29.u32 + ctx.r24.u32, ctx.r27.u8);
	// stwx r10,r29,r23
	REX_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.r10.u32);
	// stwx r8,r29,r22
	REX_STORE_U32(ctx.r29.u32 + ctx.r22.u32, ctx.r8.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stbx r27,r29,r21
	REX_STORE_U8(ctx.r29.u32 + ctx.r21.u32, ctx.r27.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stbx r5,r29,r20
	REX_STORE_U8(ctx.r29.u32 + ctx.r20.u32, ctx.r5.u8);
	// lbzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r30,r28
	REX_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u8);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8995c028
	if (!ctx.cr6.eq) goto loc_8995C028;
loc_8995C024:
	// stwx r27,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
loc_8995C028:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995F280) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// addi r11,r10,625
	ctx.r11.s64 = ctx.r10.s64 + 625;
loc_8995F28C:
	// lwz r9,-625(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -625);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995f2a8
	if (ctx.cr6.eq) goto loc_8995F2A8;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8995f2c0
	if (!ctx.cr6.eq) goto loc_8995F2C0;
loc_8995F2A8:
	// addi r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 + 696;
	// addi r9,r10,2017
	ctx.r9.s64 = ctx.r10.s64 + 2017;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8995f28c
	if (ctx.cr6.lt) goto loc_8995F28C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8995F2C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995FCE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8995FCE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x89934208
	ctx.lr = 0x8995FCF4;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995fecc
	if (ctx.cr6.eq) goto loc_8995FECC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c2a8
	ctx.lr = 0x8995FD04;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995fecc
	if (ctx.cr6.eq) goto loc_8995FECC;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// addi r30,r11,592
	ctx.r30.s64 = ctx.r11.s64 + 592;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// li r7,15
	ctx.r7.s64 = 15;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lwz r29,7924(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 7924);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mulli r31,r6,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// lhzu r10,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8995FD64;
	sub_8992BD50(ctx, base);
	// lhzu r4,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rotlwi r3,r4,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// lhzu r9,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,-21584(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,7924(r27)
	REX_STORE_U32(ctx.r27.u32 + 7924, ctx.r9.u32);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// bgt cr6,0x8995fe80
	if (ctx.cr6.gt) goto loc_8995FE80;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-568
	ctx.r12.s64 = ctx.r12.s64 + -568;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8995FE48;
	case 1:
		goto loc_8995FE48;
	case 2:
		goto loc_8995FE50;
	case 3:
		goto loc_8995FE50;
	case 4:
		goto loc_8995FE50;
	case 5:
		goto loc_8995FE50;
	case 6:
		goto loc_8995FE50;
	case 7:
		goto loc_8995FE50;
	case 8:
		goto loc_8995FE58;
	case 9:
		goto loc_8995FE48;
	case 10:
		goto loc_8995FE48;
	case 11:
		goto loc_8995FE48;
	case 12:
		goto loc_8995FE48;
	case 13:
		goto loc_8995FE80;
	case 14:
		goto loc_8995FE58;
	case 15:
		goto loc_8995FE58;
	case 16:
		goto loc_8995FE58;
	case 17:
		goto loc_8995FE58;
	case 18:
		goto loc_8995FE78;
	case 19:
		goto loc_8995FE48;
	case 20:
		goto loc_8995FE80;
	case 21:
		goto loc_8995FE80;
	case 22:
		goto loc_8995FE80;
	case 23:
		goto loc_8995FE80;
	case 24:
		goto loc_8995FE80;
	case 25:
		goto loc_8995FE80;
	case 26:
		goto loc_8995FE80;
	case 27:
		goto loc_8995FE80;
	case 28:
		goto loc_8995FE80;
	case 29:
		goto loc_8995FE80;
	case 30:
		goto loc_8995FE80;
	case 31:
		goto loc_8995FE58;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8995FE48:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8995fe84
	goto loc_8995FE84;
loc_8995FE50:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8995fe84
	goto loc_8995FE84;
loc_8995FE58:
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// li r8,32
	ctx.r8.s64 = 32;
	// ori r7,r9,32832
	ctx.r7.u64 = ctx.r9.u64 | 32832;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x8995fe8c
	goto loc_8995FE8C;
loc_8995FE78:
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8995fe84
	goto loc_8995FE84;
loc_8995FE80:
	// li r10,127
	ctx.r10.s64 = 127;
loc_8995FE84:
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8995FE8C:
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// addi r7,r30,66
	ctx.r7.s64 = ctx.r30.s64 + 66;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,516
	ctx.r4.s64 = 516;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// sthx r4,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stb r11,5754(r6)
	REX_STORE_U8(ctx.r6.u32 + 5754, ctx.r11.u8);
	// stb r11,4939(r5)
	REX_STORE_U8(ctx.r5.u32 + 4939, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8995FECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89960790) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89960798;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,3556(r8)
	REX_STORE_U32(ctx.r8.u32 + 3556, ctx.r26.u32);
	// addi r9,r9,-24224
	ctx.r9.s64 = ctx.r9.s64 + -24224;
loc_899607BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r26,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899607bc
	if (ctx.cr6.lt) goto loc_899607BC;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89934208
	ctx.lr = 0x899607DC;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899607f0
	if (!ctx.cr6.eq) goto loc_899607F0;
loc_899607E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899607F0:
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8992c2a8
	ctx.lr = 0x899607F8;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899607e4
	if (ctx.cr6.eq) goto loc_899607E4;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r18,r10,-4592
	ctx.r18.s64 = ctx.r10.s64 + -4592;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// addi r11,r11,32744
	ctx.r11.s64 = ctx.r11.s64 + 32744;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lhz r25,0(r18)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r24,-21584(r9)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r15,-16384
	ctx.r15.s64 = -1073741824;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// li r16,33
	ctx.r16.s64 = 33;
	// lis r17,128
	ctx.r17.s64 = 8388608;
	// addi r31,r10,592
	ctx.r31.s64 = ctx.r10.s64 + 592;
loc_89960844:
	// lhzx r3,r11,r18
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r30,r11,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// stwx r15,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r15.u32);
	// beq cr6,0x89960874
	if (ctx.cr6.eq) goto loc_89960874;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 13, ctx.xer);
	// beq cr6,0x89960874
	if (ctx.cr6.eq) goto loc_89960874;
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// beq cr6,0x89960874
	if (ctx.cr6.eq) goto loc_89960874;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// bne cr6,0x89960878
	if (!ctx.cr6.eq) goto loc_89960878;
loc_89960874:
	// stwx r23,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r23.u32);
loc_89960878:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwz r9,36(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// sthx r25,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u16);
	// stwx r16,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r16.u32);
	// stwx r11,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// bl 0x8992bd50
	ctx.lr = 0x899608A4;
	sub_8992BD50(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// lwz r8,24(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// lwz r22,20(r29)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// lwz r6,28(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// lwzu r10,32(r29)
	ea = 32 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r28,r31,76
	ctx.r28.s64 = ctx.r31.s64 + 76;
	// stwx r8,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r8.u32);
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// stwx r3,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r3.u32);
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// addi r19,r31,110
	ctx.r19.s64 = ctx.r31.s64 + 110;
	// stwx r22,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r22.u32);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// addi r3,r31,111
	ctx.r3.s64 = ctx.r31.s64 + 111;
	// stwx r17,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r17.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// extsh r27,r5
	ctx.r27.s64 = ctx.r5.s16;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stwx r11,r30,r20
	REX_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stbx r4,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r4.u8);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// cmpwi cr6,r27,26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 26, ctx.xer);
	// stbx r7,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r26,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r26.u8);
	// blt cr6,0x89960844
	if (ctx.cr6.lt) goto loc_89960844;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8992c2a8
	ctx.lr = 0x89960940;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899607e4
	if (ctx.cr6.eq) goto loc_899607E4;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lhz r25,0(r18)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r19,60
	ctx.r19.s64 = 3932160;
	// lis r20,30
	ctx.r20.s64 = 1966080;
	// lis r21,40
	ctx.r21.s64 = 2621440;
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// li r23,16
	ctx.r23.s64 = 16;
	// ori r27,r10,32896
	ctx.r27.u64 = ctx.r10.u64 | 32896;
	// b 0x8996097c
	goto loc_8996097C;
loc_89960974:
	// lis r15,-16384
	ctx.r15.s64 = -1073741824;
	// li r16,33
	ctx.r16.s64 = 33;
loc_8996097C:
	// lhzx r3,r11,r18
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r18.u32);
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// mulli r14,r5,112
	ctx.r14.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// sthx r25,r14,r9
	REX_STORE_U16(ctx.r14.u32 + ctx.r9.u32, ctx.r25.u16);
	// stwx r15,r14,r31
	REX_STORE_U32(ctx.r14.u32 + ctx.r31.u32, ctx.r15.u32);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r7,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 3;
	// subf r28,r6,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r6.u64;
	// addze r29,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r29.s64 = temp.s64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stwx r16,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r16.u32);
	// stwx r8,r14,r10
	REX_STORE_U32(ctx.r14.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r26,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r26.u32);
	// bl 0x8992bd50
	ctx.lr = 0x899609D0;
	sub_8992BD50(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r28,r19
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r19.s32);
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// rlwinm r10,r6,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFF00000;
	// addi r8,r31,76
	ctx.r8.s64 = ctx.r31.s64 + 76;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r3,r30,26
	ctx.r3.s64 = ctx.r30.s64 + 26;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// add r11,r5,r20
	ctx.r11.u64 = ctx.r5.u64 + ctx.r20.u64;
	// stwx r17,r14,r8
	REX_STORE_U32(ctx.r14.u32 + ctx.r8.u32, ctx.r17.u32);
	// stwx r22,r14,r6
	REX_STORE_U32(ctx.r14.u32 + ctx.r6.u32, ctx.r22.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// stwx r11,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stbx r23,r14,r30
	REX_STORE_U8(ctx.r14.u32 + ctx.r30.u32, ctx.r23.u8);
	// addi r8,r31,110
	ctx.r8.s64 = ctx.r31.s64 + 110;
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stwx r26,r14,r29
	REX_STORE_U32(ctx.r14.u32 + ctx.r29.u32, ctx.r26.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stwx r10,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r10,r14,r5
	REX_STORE_U32(ctx.r14.u32 + ctx.r5.u32, ctx.r10.u32);
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// stwx r7,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r7.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r3,r14,r8
	REX_STORE_U8(ctx.r14.u32 + ctx.r8.u32, ctx.r3.u8);
	// stwx r27,r14,r6
	REX_STORE_U32(ctx.r14.u32 + ctx.r6.u32, ctx.r27.u32);
	// blt cr6,0x89960974
	if (ctx.cr6.lt) goto loc_89960974;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89962200) {
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
	// addi r31,r11,-5056
	ctx.r31.s64 = ctx.r11.s64 + -5056;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,32
	ctx.r10.s64 = 32;
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
	ctx.lr = 0x89962254;
	sub_89934B48(ctx, base);
	// lis r7,-30304
	ctx.r7.s64 = -1986002944;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,25492
	ctx.r6.s64 = ctx.r7.s64 + 25492;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x89962270;
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

DEFINE_REX_FUNC(sub_89962288) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// addi r31,r10,24992
	ctx.r31.s64 = ctx.r10.s64 + 24992;
	// addi r5,r9,-4104
	ctx.r5.s64 = ctx.r9.s64 + -4104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// addi r10,r5,-624
	ctx.r10.s64 = ctx.r5.s64 + -624;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r6,r7,3484
	ctx.r6.s64 = ctx.r7.s64 + 3484;
loc_899622B8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x899622b8
	if (ctx.cr6.lt) goto loc_899622B8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r31,132
	ctx.r8.s64 = ctx.r31.s64 + 132;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r9,r5,-552
	ctx.r9.s64 = ctx.r5.s64 + -552;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_899622F4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x899622f4
	if (ctx.cr6.lt) goto loc_899622F4;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r8,r31,184
	ctx.r8.s64 = ctx.r31.s64 + 184;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r10,r5,-160
	ctx.r10.s64 = ctx.r5.s64 + -160;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_89962330:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// blt cr6,0x89962330
	if (ctx.cr6.lt) goto loc_89962330;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r31,244
	ctx.r8.s64 = ctx.r31.s64 + 244;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r9,r5,-336
	ctx.r9.s64 = ctx.r5.s64 + -336;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8996236C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// blt cr6,0x8996236c
	if (ctx.cr6.lt) goto loc_8996236C;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r8,r31,304
	ctx.r8.s64 = ctx.r31.s64 + 304;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r10,r5,-696
	ctx.r10.s64 = ctx.r5.s64 + -696;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_899623A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x899623a8
	if (ctx.cr6.lt) goto loc_899623A8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r31,324
	ctx.r8.s64 = ctx.r31.s64 + 324;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r9,r5,-72
	ctx.r9.s64 = ctx.r5.s64 + -72;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_899623E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x899623e4
	if (ctx.cr6.lt) goto loc_899623E4;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r7,r31,344
	ctx.r7.s64 = ctx.r31.s64 + 344;
	// addi r10,r10,-29444
	ctx.r10.s64 = ctx.r10.s64 + -29444;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r10,-6344
	ctx.r9.s64 = ctx.r10.s64 + -6344;
loc_89962428:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x89962428
	if (ctx.cr6.lt) goto loc_89962428;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r8,r5,-248
	ctx.r8.s64 = ctx.r5.s64 + -248;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_89962464:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// blt cr6,0x89962464
	if (ctx.cr6.lt) goto loc_89962464;
	// addi r7,r31,444
	ctx.r7.s64 = ctx.r31.s64 + 444;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8996249C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x8996249c
	if (ctx.cr6.lt) goto loc_8996249C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r4,r5,-480
	ctx.r4.s64 = ctx.r5.s64 + -480;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r30,r5,72
	ctx.r30.s64 = ctx.r5.s64 + 72;
	// addi r5,r31,-200
	ctx.r5.s64 = ctx.r31.s64 + -200;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_899624E0:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_899624EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x899624ec
	if (ctx.cr6.lt) goto loc_899624EC;
	// addi r8,r31,-80
	ctx.r8.s64 = ctx.r31.s64 + -80;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_89962528:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x89962528
	if (ctx.cr6.lt) goto loc_89962528;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_89962560:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89962560
	if (ctx.cr6.lt) goto loc_89962560;
	// addi r9,r31,-200
	ctx.r9.s64 = ctx.r31.s64 + -200;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r5,r5,60
	ctx.r5.s64 = ctx.r5.s64 + 60;
	// addi r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 + 120;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899624e0
	if (ctx.cr6.lt) goto loc_899624E0;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899648B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899648C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r8,-7
	ctx.r11.s64 = ctx.r8.s64 + -7;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x89964ac4
	if (ctx.cr6.gt) goto loc_89964AC4;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18688
	ctx.r12.s64 = ctx.r12.s64 + 18688;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89964948;
	case 1:
		goto loc_89964948;
	case 2:
		goto loc_89964948;
	case 3:
		goto loc_89964AC4;
	case 4:
		goto loc_89964AC4;
	case 5:
		goto loc_89964AC4;
	case 6:
		goto loc_89964AC4;
	case 7:
		goto loc_89964AC4;
	case 8:
		goto loc_89964AC4;
	case 9:
		goto loc_89964AC4;
	case 10:
		goto loc_89964948;
	case 11:
		goto loc_89964948;
	case 12:
		goto loc_89964948;
	case 13:
		goto loc_89964948;
	case 14:
		goto loc_89964948;
	case 15:
		goto loc_89964948;
	case 16:
		goto loc_899649E8;
	case 17:
		goto loc_899649E8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89964948:
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// addi r9,r30,94
	ctx.r9.s64 = ctx.r30.s64 + 94;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r30,100
	ctx.r6.s64 = ctx.r30.s64 + 100;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r30,76
	ctx.r28.s64 = ctx.r30.s64 + 76;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// srawi r6,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 4;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sthx r4,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u16);
	// addi r9,r4,128
	ctx.r9.s64 = ctx.r4.s64 + 128;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// beq cr6,0x89964ac4
	if (ctx.cr6.eq) goto loc_89964AC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r5,28
	ctx.r4.u64 = ctx.r5.u32 & 0xF;
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// bl 0x8992be58
	ctx.lr = 0x899649E0;
	sub_8992BE58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899649E8:
	// addi r9,r30,94
	ctx.r9.s64 = ctx.r30.s64 + 94;
	// li r10,256
	ctx.r10.s64 = 256;
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// clrlwi r5,r11,23
	ctx.r5.u64 = ctx.r11.u32 & 0x1FF;
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
	// subfc r6,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// eqv r5,r5,r10
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r10.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89964a64
	if (ctx.cr6.lt) goto loc_89964A64;
	// bne cr6,0x89964a78
	if (!ctx.cr6.eq) goto loc_89964A78;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r6,r30,84
	ctx.r6.s64 = ctx.r30.s64 + 84;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lhzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// b 0x89964a7c
	goto loc_89964A7C;
loc_89964A64:
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// b 0x89964a7c
	goto loc_89964A7C;
loc_89964A78:
	// lhz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_89964A7C:
	// extsh r28,r29
	ctx.r28.s64 = ctx.r29.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x89964a98
	if (!ctx.cr6.eq) goto loc_89964A98;
	// xori r11,r8,15
	ctx.r11.u64 = ctx.r8.u64 ^ 15;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8992be58
	ctx.lr = 0x89964A94;
	sub_8992BE58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
loc_89964A98:
	// bge cr6,0x89964aa4
	if (!ctx.cr6.lt) goto loc_89964AA4;
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_89964AA4:
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
loc_89964AC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89965CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89965CF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r14,-30275
	ctx.r14.s64 = -1984102400;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r11,-32384
	ctx.r10.s64 = ctx.r11.s64 + -32384;
	// lwz r27,7924(r14)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r14.u32 + 7924);
	// lhz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lhzu r16,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r16.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// rotlwi r24,r9,16
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzu r8,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// rotlwi r28,r8,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lhzu r7,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// rlwinm r6,r7,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1C;
	// lhzu r11,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// clrlwi r15,r11,8
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq cr6,0x89965e58
	if (ctx.cr6.eq) goto loc_89965E58;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r17,-16384
	ctx.r17.s64 = -1073741824;
	// li r18,31
	ctx.r18.s64 = 31;
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// li r19,519
	ctx.r19.s64 = 519;
	// lis r20,8
	ctx.r20.s64 = 524288;
	// li r25,192
	ctx.r25.s64 = 192;
	// addi r30,r11,592
	ctx.r30.s64 = ctx.r11.s64 + 592;
	// li r21,7
	ctx.r21.s64 = 7;
	// li r26,768
	ctx.r26.s64 = 768;
	// li r22,116
	ctx.r22.s64 = 116;
loc_89965D70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bl 0x8992c2a8
	ctx.lr = 0x89965D7C;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89965d94
	if (!ctx.cr6.eq) goto loc_89965D94;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c368
	ctx.lr = 0x89965D8C;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89965e6c
	if (ctx.cr6.eq) goto loc_89965E6C;
loc_89965D94:
	// lhz r3,-4592(r23)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r23.u32 + -4592);
	// rlwinm r8,r29,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// mulli r31,r9,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stwx r17,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r17.u32);
	// stwx r18,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r18.u32);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89965DD0;
	sub_8992BD50(ctx, base);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// stwx r15,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r15.u32);
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// stwx r19,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r19.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r28,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u32);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// stwx r28,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// addi r4,r30,67
	ctx.r4.s64 = ctx.r30.s64 + 67;
	// stbx r21,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u8);
	// addi r3,r30,66
	ctx.r3.s64 = ctx.r30.s64 + 66;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// stwx r24,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r24.u32);
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r8,r30,94
	ctx.r8.s64 = ctx.r30.s64 + 94;
	// stwx r24,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r24.u32);
	// addi r7,r30,88
	ctx.r7.s64 = ctx.r30.s64 + 88;
	// stbx r25,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r25.u8);
	// stbx r25,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r25.u8);
	// add r28,r28,r20
	ctx.r28.u64 = ctx.r28.u64 + ctx.r20.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r26,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
	// sthx r16,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r16.u16);
	// stbx r22,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r22.u8);
	// lhz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x89965d70
	if (!ctx.cr6.eq) goto loc_89965D70;
	// stw r27,7924(r14)
	REX_STORE_U32(ctx.r14.u32 + 7924, ctx.r27.u32);
loc_89965E58:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,7924(r14)
	REX_STORE_U32(ctx.r14.u32 + 7924, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89965E6C:
	// stw r27,7924(r14)
	REX_STORE_U32(ctx.r14.u32 + 7924, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899671B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,12800
	ctx.r9.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r9,190
	ctx.r8.s64 = ctx.r9.s64 + 190;
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stbx r5,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u8);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x89967200
	if (ctx.cr6.lt) goto loc_89967200;
	// addi r11,r9,192
	ctx.r11.s64 = ctx.r9.s64 + 192;
	// li r7,96
	ctx.r7.s64 = 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x89967284
	goto loc_89967284;
loc_89967200:
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// ble cr6,0x89967230
	if (!ctx.cr6.gt) goto loc_89967230;
	// addi r11,r9,192
	ctx.r11.s64 = ctx.r9.s64 + 192;
	// li r7,96
	ctx.r7.s64 = 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x89967284
	goto loc_89967284;
loc_89967230:
	// cmpwi cr6,r11,176
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 176, ctx.xer);
	// addi r11,r9,192
	ctx.r11.s64 = ctx.r9.s64 + 192;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x8996724c
	if (!ctx.cr6.lt) goto loc_8996724C;
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x89967284
	goto loc_89967284;
loc_8996724C:
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// ori r4,r6,20077
	ctx.r4.u64 = ctx.r6.u64 | 20077;
	// addi r3,r5,-30564
	ctx.r3.s64 = ctx.r5.s64 + -30564;
	// lwz r8,-9212(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r8,r8,12345
	ctx.r8.s64 = ctx.r8.s64 + 12345;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stw r8,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r8.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// rlwinm r4,r5,18,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x1;
	// lbzx r3,r4,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
loc_89967284:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r7,r8,0,25,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899672b4
	if (ctx.cr6.eq) goto loc_899672B4;
	// addi r7,r9,196
	ctx.r7.s64 = ctx.r9.s64 + 196;
	// lbzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,25,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r5,96
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 96, ctx.xer);
	// bne cr6,0x899672b4
	if (!ctx.cr6.eq) goto loc_899672B4;
	// ori r8,r8,16
	ctx.r8.u64 = ctx.r8.u64 | 16;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_899672B4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,196
	ctx.r9.s64 = ctx.r9.s64 + 196;
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8996A0F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8996A0F8;
	__savegprlr_24(ctx, base);
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
	// lwzx r29,r30,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
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
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r28,r30,r8
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r27,r30,r7
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// lbzx r26,r30,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r25,r30,r5
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// bgt cr6,0x8996a3e4
	if (ctx.cr6.gt) goto loc_8996A3E4;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24232
	ctx.r12.s64 = ctx.r12.s64 + -24232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8996A244;
	case 1:
		goto loc_8996A280;
	case 2:
		goto loc_8996A3E4;
	case 3:
		goto loc_8996A2B4;
	case 4:
		goto loc_8996A2E0;
	case 5:
		goto loc_8996A254;
	case 6:
		goto loc_8996A3E4;
	case 7:
		goto loc_8996A3E4;
	case 8:
		goto loc_8996A3C8;
	case 9:
		goto loc_8996A3C8;
	case 10:
		goto loc_8996A254;
	case 11:
		goto loc_8996A254;
	case 12:
		goto loc_8996A308;
	case 13:
		goto loc_8996A308;
	case 14:
		goto loc_8996A308;
	case 15:
		goto loc_8996A308;
	case 16:
		goto loc_8996A308;
	case 17:
		goto loc_8996A308;
	case 18:
		goto loc_8996A308;
	case 19:
		goto loc_8996A3BC;
	case 20:
		goto loc_8996A3BC;
	case 21:
		goto loc_8996A3C8;
	case 22:
		goto loc_8996A3C8;
	case 23:
		goto loc_8996A3C8;
	case 24:
		goto loc_8996A3C8;
	case 25:
		goto loc_8996A368;
	case 26:
		goto loc_8996A368;
	case 27:
		goto loc_8996A368;
	case 28:
		goto loc_8996A368;
	case 29:
		goto loc_8996A368;
	case 30:
		goto loc_8996A368;
	case 31:
		goto loc_8996A368;
	case 32:
		goto loc_8996A368;
	case 33:
		goto loc_8996A368;
	case 34:
		goto loc_8996A368;
	case 35:
		goto loc_8996A368;
	case 36:
		goto loc_8996A368;
	case 37:
		goto loc_8996A368;
	case 38:
		goto loc_8996A368;
	case 39:
		goto loc_8996A368;
	case 40:
		goto loc_8996A368;
	case 41:
		goto loc_8996A368;
	case 42:
		goto loc_8996A368;
	case 43:
		goto loc_8996A368;
	case 44:
		goto loc_8996A368;
	case 45:
		goto loc_8996A368;
	case 46:
		goto loc_8996A368;
	case 47:
		goto loc_8996A368;
	case 48:
		goto loc_8996A368;
	case 49:
		goto loc_8996A368;
	case 50:
		goto loc_8996A368;
	case 51:
		goto loc_8996A368;
	case 52:
		goto loc_8996A368;
	case 53:
		goto loc_8996A368;
	case 54:
		goto loc_8996A368;
	case 55:
		goto loc_8996A368;
	case 56:
		goto loc_8996A368;
	case 57:
		goto loc_8996A3E4;
	case 58:
		goto loc_8996A398;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8996A244:
	// bl 0x8995e188
	ctx.lr = 0x8996A248;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x8996A24C;
	sub_89936440(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8996A254:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8996A270;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8996A280:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8996A29C;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,78
	ctx.r3.s64 = 78;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x8996A2AC;
	sub_89936360(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8996A2B4:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8996A2D0;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8996A2E0:
	// lis r24,36
	ctx.r24.s64 = 2359296;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r6,r27,r24
	ctx.r6.u64 = ctx.r27.u64 + ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8996A300;
	sub_899D4440(ctx, base);
	// subf r6,r24,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r24.u64;
	// b 0x8996a3cc
	goto loc_8996A3CC;
loc_8996A308:
	// bl 0x8991b9f0
	ctx.lr = 0x8996A30C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8996a324
	if (!ctx.cr6.lt) goto loc_8996A324;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8996a3d0
	goto loc_8996A3D0;
loc_8996A324:
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// ori r12,r12,49151
	ctx.r12.u64 = ctx.r12.u64 | 49151;
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwzx r5,r30,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// sthx r7,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8996A368:
	// bl 0x8991b9f0
	ctx.lr = 0x8996A36C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996a38c
	if (ctx.cr6.lt) goto loc_8996A38C;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,198
	ctx.r10.s64 = ctx.r31.s64 + 198;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_8996A38C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8996a3d0
	goto loc_8996A3D0;
loc_8996A398:
	// bl 0x8991b9f0
	ctx.lr = 0x8996A39C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996a3bc
	if (ctx.cr6.lt) goto loc_8996A3BC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,198
	ctx.r10.s64 = ctx.r31.s64 + 198;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_8996A3BC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8996a3d0
	goto loc_8996A3D0;
loc_8996A3C8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8996A3CC:
	// li r4,5
	ctx.r4.s64 = 5;
loc_8996A3D0:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x8996A3E4;
	sub_899D4440(ctx, base);
loc_8996A3E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996F7E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8996F7E8;
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
	// addi r27,r30,164
	ctx.r27.s64 = ctx.r30.s64 + 164;
	// addi r26,r30,188
	ctx.r26.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x89970160
	if (ctx.cr6.gt) goto loc_89970160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996f950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996F950;
	// bdzf 4*cr6+eq,0x8996fbc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FBC0;
	// bdzf 4*cr6+eq,0x8996fc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FC74;
	// bdzf 4*cr6+eq,0x8996fbc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FBC0;
	// bdzf 4*cr6+eq,0x8996fed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FED4;
	// bne cr6,0x899700a0
	if (!ctx.cr6.eq) goto loc_899700A0;
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8996f934
	if (ctx.cr6.gt) goto loc_8996F934;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996f8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996F8A8;
	// bdzf 4*cr6+eq,0x8996f8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996F8DC;
	// bne cr6,0x8996f90c
	if (!ctx.cr6.eq) goto loc_8996F90C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,288
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 288, ctx.xer);
	// bgt cr6,0x8996f934
	if (ctx.cr6.gt) goto loc_8996F934;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// b 0x8996f934
	goto loc_8996F934;
loc_8996F8A8:
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
	// bne 0x8996f934
	if (!ctx.cr0.eq) goto loc_8996F934;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x8996F8CC;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x8996f934
	goto loc_8996F934;
loc_8996F8DC:
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
	// bgt cr6,0x8996f934
	if (ctx.cr6.gt) goto loc_8996F934;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x8996f934
	goto loc_8996F934;
loc_8996F90C:
	// bl 0x899368b0
	ctx.lr = 0x8996F910;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8996f934
	if (!ctx.cr6.eq) goto loc_8996F934;
	// li r29,0
	ctx.r29.s64 = 0;
	// stbx r29,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u8);
	// bl 0x899365d0
	ctx.lr = 0x8996F924;
	sub_899365D0(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// stwx r29,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
loc_8996F934:
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
	// b 0x89970160
	goto loc_89970160;
loc_8996F950:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x89970160
	if (ctx.cr6.gt) goto loc_89970160;
	// li r29,0
	ctx.r29.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996f9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996F9E4;
	// bdzf 4*cr6+eq,0x8996fa0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FA0C;
	// bdzf 4*cr6+eq,0x8996fa84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FA84;
	// bdzf 4*cr6+eq,0x8996fac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FAC0;
	// bdzf 4*cr6+eq,0x8996fb20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FB20;
	// bne cr6,0x8996fb64
	if (!ctx.cr6.eq) goto loc_8996FB64;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// li r5,-128
	ctx.r5.s64 = -128;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r4,r30,182
	ctx.r4.s64 = ctx.r30.s64 + 182;
	// addi r3,r30,195
	ctx.r3.s64 = ctx.r30.s64 + 195;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r7,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u8);
	// rlwinm r4,r8,19,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// stbx r4,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996F9E4:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8991d830
	ctx.lr = 0x8996F9FC;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FA0C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8996fa2c
	if (!ctx.cr6.lt) goto loc_8996FA2C;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996FA2C:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmplwi cr6,r8,480
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 480, ctx.xer);
	// blt cr6,0x8996fa60
	if (ctx.cr6.lt) goto loc_8996FA60;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FA60:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8991d8e0
	ctx.lr = 0x8996FA68;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FA84:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996faa0
	if (ctx.cr6.eq) goto loc_8996FAA0;
loc_8996FA94:
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x89970160
	goto loc_89970160;
loc_8996FAA0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FAC0:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x89970160
	if (ctx.cr6.lt) goto loc_89970160;
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// sthx r29,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u16);
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8996fba8
	if (!ctx.cr6.eq) goto loc_8996FBA8;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r3,r5,64
	ctx.r3.u64 = ctx.r5.u64 | 64;
	// ori r9,r4,64
	ctx.r9.u64 = ctx.r4.u64 | 64;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FB20:
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x89970160
	if (ctx.cr6.lt) goto loc_89970160;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,26,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FB64:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89970160
	if (!ctx.cr6.eq) goto loc_89970160;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// bgt cr6,0x8996fba8
	if (ctx.cr6.gt) goto loc_8996FBA8;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8996fbb8
	if (ctx.cr6.eq) goto loc_8996FBB8;
loc_8996FBA8:
	// bl 0x89936508
	ctx.lr = 0x8996FBAC;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
loc_8996FBB8:
	// stbx r29,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FBC0:
	// addi r7,r30,189
	ctx.r7.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8996fc48
	if (ctx.cr6.lt) goto loc_8996FC48;
	// beq cr6,0x8996fc24
	if (ctx.cr6.eq) goto loc_8996FC24;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89970160
	if (!ctx.cr6.lt) goto loc_89970160;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 30, ctx.xer);
	// blt cr6,0x8996fc0c
	if (ctx.cr6.lt) goto loc_8996FC0C;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
loc_8996FC0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r29,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r29.u32);
	// stbx r29,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FC24:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89970160
	if (!ctx.cr6.eq) goto loc_89970160;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FC48:
	// bl 0x89936828
	ctx.lr = 0x8996FC4C;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89970160
	if (!ctx.cr6.eq) goto loc_89970160;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FC74:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x89970160
	if (ctx.cr6.gt) goto loc_89970160;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996fcd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FCD4;
	// bdzf 4*cr6+eq,0x8996fcfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FCFC;
	// bdzf 4*cr6+eq,0x8996fd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FD3C;
	// bdzf 4*cr6+eq,0x8996fda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FDA8;
	// bdzf 4*cr6+eq,0x8996fe2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FE2C;
	// bne cr6,0x8996fe70
	if (!ctx.cr6.eq) goto loc_8996FE70;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r3,r5,2
	ctx.r3.u64 = ctx.r5.u64 | 2;
	// ori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 1;
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FCD4:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8991d830
	ctx.lr = 0x8996FCEC;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FCFC:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8996fd18
	if (!ctx.cr6.lt) goto loc_8996FD18;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996FD18:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8996FD20;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FD3C:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8996fd58
	if (ctx.cr6.eq) goto loc_8996FD58;
	// addi r11,r10,-2048
	ctx.r11.s64 = ctx.r10.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x89970160
	goto loc_89970160;
loc_8996FD58:
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x8996fd9c
	if (ctx.cr6.lt) goto loc_8996FD9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FD9C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FDA8:
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r9,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u16);
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// blt cr6,0x89970160
	if (ctx.cr6.lt) goto loc_89970160;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r5,r6,20077
	ctx.r5.u64 = ctx.r6.u64 | 20077;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r3,r30,194
	ctx.r3.s64 = ctx.r30.s64 + 194;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// stbx r4,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u8);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// ori r7,r6,48
	ctx.r7.u64 = ctx.r6.u64 | 48;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// sthx r5,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u16);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,17,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFF;
	// stbx r6,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FE2C:
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x89970160
	if (ctx.cr6.lt) goto loc_89970160;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,28,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FE70:
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
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// blt cr6,0x89970160
	if (ctx.cr6.lt) goto loc_89970160;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// li r29,0
	ctx.r29.s64 = 0;
	// sthx r29,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u16);
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// stbx r29,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u8);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8996febc
	if (ctx.cr6.gt) goto loc_8996FEBC;
	// cmpwi cr6,r8,7200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7200, ctx.xer);
	// ble cr6,0x89970160
	if (!ctx.cr6.gt) goto loc_89970160;
loc_8996FEBC:
	// stwx r29,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r29.u32);
	// bl 0x89936508
	ctx.lr = 0x8996FEC4;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FED4:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x89970160
	if (ctx.cr6.gt) goto loc_89970160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996ff34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FF34;
	// bdzf 4*cr6+eq,0x8996ff5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FF5C;
	// bdzf 4*cr6+eq,0x8996ffd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996FFD0;
	// bdzf 4*cr6+eq,0x89970020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89970020;
	// bdzf 4*cr6+eq,0x89970044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89970044;
	// bne cr6,0x89970068
	if (!ctx.cr6.eq) goto loc_89970068;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// ori r3,r4,4
	ctx.r3.u64 = ctx.r4.u64 | 4;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FF34:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8991d830
	ctx.lr = 0x8996FF4C;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FF5C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8996ff78
	if (!ctx.cr6.lt) goto loc_8996FF78;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996FF78:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmplwi cr6,r8,480
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 480, ctx.xer);
	// blt cr6,0x8996ffac
	if (ctx.cr6.lt) goto loc_8996FFAC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FFAC:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8991d8e0
	ctx.lr = 0x8996FFB4;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_8996FFD0:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8996fa94
	if (!ctx.cr6.eq) goto loc_8996FA94;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r30,194
	ctx.r7.s64 = ctx.r30.s64 + 194;
	// addi r6,r30,193
	ctx.r6.s64 = ctx.r30.s64 + 193;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r3,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u8);
	// rlwimi r10,r8,3,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// stbx r9,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_89970020:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8991db50
	ctx.lr = 0x8997002C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_89970044:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r10,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89970160
	if (!ctx.cr6.eq) goto loc_89970160;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x89970160
	goto loc_89970160;
loc_89970068:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8991db50
	ctx.lr = 0x89970074;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,10800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10800, ctx.xer);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// ble cr6,0x89970160
	if (!ctx.cr6.gt) goto loc_89970160;
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// b 0x89970160
	goto loc_89970160;
loc_899700A0:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89970138
	if (ctx.cr6.lt) goto loc_89970138;
	// beq cr6,0x89970110
	if (ctx.cr6.eq) goto loc_89970110;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89970160
	if (!ctx.cr6.lt) goto loc_89970160;
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
	// bgt cr6,0x89970160
	if (ctx.cr6.gt) goto loc_89970160;
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
	ctx.lr = 0x8997010C;
	sub_8995E188(ctx, base);
	// b 0x89970160
	goto loc_89970160;
loc_89970110:
	// bl 0x89936938
	ctx.lr = 0x89970114;
	sub_89936938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89970160
	if (!ctx.cr6.eq) goto loc_89970160;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x89970160
	goto loc_89970160;
loc_89970138:
	// bl 0x89936760
	ctx.lr = 0x8997013C;
	sub_89936760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89970160
	if (ctx.cr6.eq) goto loc_89970160;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,60
	ctx.r5.u64 = ctx.r6.u64 | 60;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
loc_89970160:
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
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997EB10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8997EB18;
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
	ctx.lr = 0x8997EB2C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997edd8
	if (ctx.cr6.eq) goto loc_8997EDD8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8991b880
	ctx.lr = 0x8997EB3C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997edd8
	if (ctx.cr6.eq) goto loc_8997EDD8;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// clrlwi r23,r30,16
	ctx.r23.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r28,r7,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sth r26,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stwx r24,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r24.u32);
	// stwx r24,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r24.u32);
	// stwx r23,r28,r10
	REX_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r23.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997EBA0;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,384
	ctx.r5.s64 = 25165824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r5,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x8997EBB4;
	sub_89915D78(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x8997EBBC;
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
	// stbx r24,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r24.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// sthx r7,r28,r4
	REX_STORE_U16(ctx.r28.u32 + ctx.r4.u32, ctx.r7.u16);
	// stwx r8,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r29,r10,-19328
	ctx.r29.s64 = ctx.r10.s64 + -19328;
	// b 0x8997ec08
	goto loc_8997EC08;
loc_8997EBF8:
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	ctx.r24.s64 = 0;
	// lhz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8997EC08:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r22,r8,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// lhzx r21,r9,r7
	ctx.r21.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r21
	ctx.r8.s64 = ctx.r21.s16;
	// lhzx r10,r22,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r30,r8,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r22,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwzx r10,r22,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// oris r7,r7,49152
	ctx.r7.u64 = ctx.r7.u64 | 3221225472;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r7,r7,256
	ctx.r7.u64 = ctx.r7.u64 | 256;
	// lhzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// sthx r26,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r26.u16);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r23,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r24,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r24.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997EC88;
	sub_8991B538(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991c578
	ctx.lr = 0x8997EC90;
	sub_8991C578(ctx, base);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lhzx r10,r22,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r7.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// rotlwi r21,r10,16
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r8,r22,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r6.u32);
	// addi r10,r29,18
	ctx.r10.s64 = ctx.r29.s64 + 18;
	// lbzx r5,r22,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r5.u32);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r26,r31,158
	ctx.r26.s64 = ctx.r31.s64 + 158;
	// addi r25,r31,207
	ctx.r25.s64 = ctx.r31.s64 + 207;
	// addi r24,r31,207
	ctx.r24.s64 = ctx.r31.s64 + 207;
	// lhzx r14,r22,r10
	ctx.r14.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r10.u32);
	// addi r23,r31,206
	ctx.r23.s64 = ctx.r31.s64 + 206;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r20,r29,20
	ctx.r20.s64 = ctx.r29.s64 + 20;
	// addi r19,r29,17
	ctx.r19.s64 = ctx.r29.s64 + 17;
	// addi r18,r29,21
	ctx.r18.s64 = ctx.r29.s64 + 21;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// li r17,256
	ctx.r17.s64 = 256;
	// lwzx r16,r28,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lbzx r20,r22,r20
	ctx.r20.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lbzx r19,r22,r19
	ctx.r19.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r19.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r15,r31,204
	ctx.r15.s64 = ctx.r31.s64 + 204;
	// stwx r16,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r16.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// lwzx r3,r28,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// addi r16,r31,66
	ctx.r16.s64 = ctx.r31.s64 + 66;
	// stwx r3,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// stwx r8,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u32);
	// stwx r21,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r21.u32);
	// sthx r17,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r17.u16);
	// lbzx r9,r28,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// lbzx r8,r22,r18
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r18.u32);
	// stbx r9,r30,r24
	REX_STORE_U8(ctx.r30.u32 + ctx.r24.u32, ctx.r9.u8);
	// stbx r5,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r5.u8);
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// stbx r6,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u8);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// lbzx r5,r28,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sthx r14,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r14.u16);
	// stbx r5,r30,r15
	REX_STORE_U8(ctx.r30.u32 + ctx.r15.u32, ctx.r5.u8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stbx r20,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r20.u8);
	// cmplwi cr6,r4,39
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 39, ctx.xer);
	// lwzx r3,r28,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// stwx r3,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// stbx r19,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r19.u8);
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// blt cr6,0x8997ebf8
	if (ctx.cr6.lt) goto loc_8997EBF8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// stb r11,12342(r9)
	REX_STORE_U8(ctx.r9.u32 + 12342, ctx.r11.u8);
	// stb r10,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r10.u8);
	// bl 0x89934058
	ctx.lr = 0x8997EDBC;
	sub_89934058(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899340e8
	ctx.lr = 0x8997EDC4;
	sub_899340E8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899340e8
	ctx.lr = 0x8997EDCC;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8997EDD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997F4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8997F4D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r4,318(r1)
	REX_STORE_U16(ctx.r1.u32 + 318, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8997F4E4;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997f4f4
	if (!ctx.cr6.eq) goto loc_8997F4F4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8997F4F4:
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r9,r9,-18184
	ctx.r9.s64 = ctx.r9.s64 + -18184;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r9,-2
	ctx.r29.s64 = ctx.r9.s64 + -2;
	// addi r10,r10,-4592
	ctx.r10.s64 = ctx.r10.s64 + -4592;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r31,r9,12800
	ctx.r31.s64 = ctx.r9.s64 + 12800;
	// b 0x8997f524
	goto loc_8997F524;
loc_8997F520:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8997F524:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lhzu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// lhz r6,6(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// oris r5,r9,49152
	ctx.r5.u64 = ctx.r9.u64 | 3221225472;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mulli r25,r4,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwzx r5,r25,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r4,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r11,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r5,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// bl 0x8991b538
	ctx.lr = 0x8997F57C;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8997F584;
	sub_8991C578(ctx, base);
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// lhz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// rotlwi r8,r3,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbzu r11,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// sthx r26,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u16);
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r3,r31,154
	ctx.r3.s64 = ctx.r31.s64 + 154;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r26,r31,154
	ctx.r26.s64 = ctx.r31.s64 + 154;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r24,r31,56
	ctx.r24.s64 = ctx.r31.s64 + 56;
	// std r31,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// addi r23,r31,48
	ctx.r23.s64 = ctx.r31.s64 + 48;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// addi r22,r31,48
	ctx.r22.s64 = ctx.r31.s64 + 48;
	// addi r21,r31,60
	ctx.r21.s64 = ctx.r31.s64 + 60;
	// std r27,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r27.u64);
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// addi r28,r31,104
	ctx.r28.s64 = ctx.r31.s64 + 104;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r19,r31,52
	ctx.r19.s64 = ctx.r31.s64 + 52;
	// addi r18,r31,206
	ctx.r18.s64 = ctx.r31.s64 + 206;
	// addi r17,r31,200
	ctx.r17.s64 = ctx.r31.s64 + 200;
	// addi r16,r31,44
	ctx.r16.s64 = ctx.r31.s64 + 44;
	// lhzx r5,r25,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r5.u32);
	// addi r15,r31,204
	ctx.r15.s64 = ctx.r31.s64 + 204;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r31,200
	ctx.r14.s64 = ctx.r31.s64 + 200;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r28,r31,158
	ctx.r28.s64 = ctx.r31.s64 + 158;
	// sthx r5,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u16);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// lhzx r4,r25,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r3.u32);
	// clrlwi r27,r27,16
	ctx.r27.u64 = ctx.r27.u32 & 0xFFFF;
	// sthx r4,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r4.u16);
	// stwx r7,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r7.u32);
	// lwzx r9,r25,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r8,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r8.u32);
	// stwx r3,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r3.u32);
	// lwzx r9,r25,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r20.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r11,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r11.u8);
	// lhz r7,318(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 318);
	// li r4,7
	ctx.r4.s64 = 7;
	// stwx r9,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r9.u32);
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// lbzx r11,r25,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r17.u32);
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r4,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r4.u8);
	// sthx r7,r30,r28
	REX_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r7.u16);
	// ld r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// ld r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r27,120(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stwx r10,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r10.u32);
	// stbx r6,r30,r15
	REX_STORE_U8(ctx.r30.u32 + ctx.r15.u32, ctx.r6.u8);
	// stbx r6,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r6.u8);
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8997f520
	if (ctx.cr6.lt) goto loc_8997F520;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x8997F6D4;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89980168) {
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
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// addi r9,r10,180
	ctx.r9.s64 = ctx.r10.s64 + 180;
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x89980250
	if (ctx.cr6.lt) goto loc_89980250;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// ori r9,r9,20077
	ctx.r9.u64 = ctx.r9.u64 | 20077;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stbx r5,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// lwz r9,-9212(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r8,r10,207
	ctx.r8.s64 = ctx.r10.s64 + 207;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r5,r5,-18160
	ctx.r5.s64 = ctx.r5.s64 + -18160;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r9,r8,12345
	ctx.r9.s64 = ctx.r8.s64 + 12345;
	// srawi r8,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 16;
	// stw r9,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r9.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r8,17
	ctx.r9.u64 = ctx.r8.u32 & 0x7FFF;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r6,r4,19,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x3;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
	// addi r30,r10,48
	ctx.r30.s64 = ctx.r10.s64 + 48;
	// rlwinm r10,r4,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// addi r10,r10,-2048
	ctx.r10.s64 = ctx.r10.s64 + -2048;
	// li r8,116
	ctx.r8.s64 = 116;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x899d4640
	ctx.lr = 0x89980250;
	sub_899D4640(ctx, base);
loc_89980250:
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

DEFINE_REX_FUNC(sub_89983330) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89983338;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30230
	ctx.r11.s64 = -1981153280;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r31,r11,12096
	ctx.r31.s64 = ctx.r11.s64 + 12096;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r7,r31,3256
	ctx.r7.s64 = ctx.r31.s64 + 3256;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,65
	ctx.r4.s64 = 65;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89983378;
	sub_89934FB8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,3256
	ctx.r9.s64 = ctx.r31.s64 + 3256;
	// addi r11,r31,7672
	ctx.r11.s64 = ctx.r31.s64 + 7672;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r21,r8,3484
	ctx.r21.s64 = ctx.r8.s64 + 3484;
loc_89983390:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x89983390
	if (ctx.cr6.lt) goto loc_89983390;
	// addi r9,r31,3544
	ctx.r9.s64 = ctx.r31.s64 + 3544;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934b48
	ctx.lr = 0x899833F8;
	sub_89934B48(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_89983400:
	// addi r10,r31,1000
	ctx.r10.s64 = ctx.r31.s64 + 1000;
	// mulli r9,r30,780
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r6,r31,10736
	ctx.r6.s64 = ctx.r31.s64 + 10736;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,3544
	ctx.r5.s64 = ctx.r31.s64 + 3544;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x89983424;
	sub_89935610(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89983400
	if (ctx.cr6.lt) goto loc_89983400;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// addi r11,r31,-6808
	ctx.r11.s64 = ctx.r31.s64 + -6808;
	// li r22,4
	ctx.r22.s64 = 4;
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// sth r22,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r22.u16);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x89934b48
	ctx.lr = 0x89983470;
	sub_89934B48(ctx, base);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r24,r10,-6652
	ctx.r24.s64 = ctx.r10.s64 + -6652;
loc_89983480:
	// addi r10,r31,6544
	ctx.r10.s64 = ctx.r31.s64 + 6544;
	// mulli r9,r30,252
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(252));
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r6,r24,60
	ctx.r6.s64 = ctx.r24.s64 + 60;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,-6808
	ctx.r5.s64 = ctx.r31.s64 + -6808;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x899834A4;
	sub_89935610(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89983480
	if (ctx.cr6.lt) goto loc_89983480;
	// addi r8,r31,-576
	ctx.r8.s64 = ctx.r31.s64 + -576;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,-8
	ctx.r9.s64 = -8;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899834F0;
	sub_89934B48(ctx, base);
	// addi r9,r31,-576
	ctx.r9.s64 = ctx.r31.s64 + -576;
	// addi r11,r31,5096
	ctx.r11.s64 = ctx.r31.s64 + 5096;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_899834FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899834fc
	if (ctx.cr6.lt) goto loc_899834FC;
	// addi r10,r31,-5048
	ctx.r10.s64 = ctx.r31.s64 + -5048;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// li r20,2
	ctx.r20.s64 = 2;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,176
	ctx.r8.s64 = 176;
	// sth r20,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r20.u16);
	// li r10,224
	ctx.r10.s64 = 224;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-19
	ctx.r8.s64 = -19;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x89983568;
	sub_89934B48(ctx, base);
	// addi r6,r24,-1192
	ctx.r6.s64 = ctx.r24.s64 + -1192;
	// addi r5,r31,-5048
	ctx.r5.s64 = ctx.r31.s64 + -5048;
	// addi r4,r31,9616
	ctx.r4.s64 = ctx.r31.s64 + 9616;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x89983580;
	sub_89935610(ctx, base);
	// addi r7,r31,-3160
	ctx.r7.s64 = ctx.r31.s64 + -3160;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-34
	ctx.r8.s64 = -34;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899835B8;
	sub_89934B48(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_899835C0:
	// rlwinm r9,r11,14,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// addi r11,r31,5712
	ctx.r11.s64 = ctx.r31.s64 + 5712;
	// mulli r10,r30,108
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// ori r3,r9,8
	ctx.r3.u64 = ctx.r9.u64 | 8;
	// addi r6,r24,40
	ctx.r6.s64 = ctx.r24.s64 + 40;
	// addi r5,r31,-3160
	ctx.r5.s64 = ctx.r31.s64 + -3160;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899835E4;
	sub_89935610(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899835c0
	if (ctx.cr6.lt) goto loc_899835C0;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17992
	ctx.r10.s64 = ctx.r11.s64 + -17992;
	// lbz r11,-17992(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983698
	if (ctx.cr6.eq) goto loc_89983698;
	// addi r30,r10,-10
	ctx.r30.s64 = ctx.r10.s64 + -10;
loc_89983614:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r3,18(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// lbz r8,19(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// addi r4,r31,-6448
	ctx.r4.s64 = ctx.r31.s64 + -6448;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r28,11(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// add r26,r10,r4
	ctx.r26.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983674;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89983614
	if (!ctx.cr6.eq) goto loc_89983614;
loc_89983698:
	// addi r6,r24,-1384
	ctx.r6.s64 = ctx.r24.s64 + -1384;
	// addi r5,r31,-6448
	ctx.r5.s64 = ctx.r31.s64 + -6448;
	// addi r4,r31,13440
	ctx.r4.s64 = ctx.r31.s64 + 13440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899836B0;
	sub_89935610(ctx, base);
	// addi r11,r31,-6448
	ctx.r11.s64 = ctx.r31.s64 + -6448;
	// addi r6,r24,-1384
	ctx.r6.s64 = ctx.r24.s64 + -1384;
	// addi r4,r31,-4688
	ctx.r4.s64 = ctx.r31.s64 + -4688;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89935610
	ctx.lr = 0x899836CC;
	sub_89935610(ctx, base);
	// addi r11,r31,-6448
	ctx.r11.s64 = ctx.r31.s64 + -6448;
	// addi r6,r24,-1156
	ctx.r6.s64 = ctx.r24.s64 + -1156;
	// addi r4,r31,-4904
	ctx.r4.s64 = ctx.r31.s64 + -4904;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r5,r11,306
	ctx.r5.s64 = ctx.r11.s64 + 306;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89935610
	ctx.lr = 0x899836E8;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17928
	ctx.r10.s64 = ctx.r11.s64 + -17928;
	// lbz r11,-17928(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983784
	if (ctx.cr6.eq) goto loc_89983784;
	// addi r30,r10,-10
	ctx.r30.s64 = ctx.r10.s64 + -10;
loc_89983704:
	// lbz r9,19(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// addi r8,r31,13552
	ctx.r8.s64 = ctx.r31.s64 + 13552;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r28,12(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,11(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// sth r4,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r4.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// extsb r5,r28
	ctx.r5.s64 = ctx.r28.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// lbz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983760;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89983704
	if (!ctx.cr6.eq) goto loc_89983704;
loc_89983784:
	// addi r9,r31,13552
	ctx.r9.s64 = ctx.r31.s64 + 13552;
	// addi r11,r31,4696
	ctx.r11.s64 = ctx.r31.s64 + 4696;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_89983790:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x89983790
	if (ctx.cr6.lt) goto loc_89983790;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-17688
	ctx.r10.s64 = ctx.r10.s64 + -17688;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983850
	if (ctx.cr6.eq) goto loc_89983850;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_899837DC:
	// lbz r27,25(r30)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lhz r28,26(r30)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r30.u32 + 26);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// addi r8,r31,-2400
	ctx.r8.s64 = ctx.r31.s64 + -2400;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x8998382C;
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
	// bne cr6,0x899837dc
	if (!ctx.cr6.eq) goto loc_899837DC;
loc_89983850:
	// addi r11,r31,-2400
	ctx.r11.s64 = ctx.r31.s64 + -2400;
	// addi r6,r24,-2216
	ctx.r6.s64 = ctx.r24.s64 + -2216;
	// addi r4,r31,5928
	ctx.r4.s64 = ctx.r31.s64 + 5928;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,162
	ctx.r5.s64 = ctx.r11.s64 + 162;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8998386C;
	sub_89935B08(ctx, base);
	// addi r11,r31,-2400
	ctx.r11.s64 = ctx.r31.s64 + -2400;
	// addi r6,r24,-2216
	ctx.r6.s64 = ctx.r24.s64 + -2216;
	// addi r4,r31,2560
	ctx.r4.s64 = ctx.r31.s64 + 2560;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,468
	ctx.r5.s64 = ctx.r11.s64 + 468;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89935b08
	ctx.lr = 0x89983888;
	sub_89935B08(ctx, base);
	// addi r10,r31,-2400
	ctx.r10.s64 = ctx.r31.s64 + -2400;
	// addi r11,r31,7560
	ctx.r11.s64 = ctx.r31.s64 + 7560;
	// addi r9,r10,774
	ctx.r9.s64 = ctx.r10.s64 + 774;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_89983898:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x89983898
	if (ctx.cr6.lt) goto loc_89983898;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r10,r31,-2400
	ctx.r10.s64 = ctx.r31.s64 + -2400;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r4,r31,13040
	ctx.r4.s64 = ctx.r31.s64 + 13040;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,918
	ctx.r5.s64 = ctx.r10.s64 + 918;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899838E4;
	sub_89935B08(ctx, base);
	// addi r11,r31,14128
	ctx.r11.s64 = ctx.r31.s64 + 14128;
	// sth r20,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r20.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-44
	ctx.r8.s64 = -44;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89983914;
	sub_89934FB8(ctx, base);
	// addi r6,r24,460
	ctx.r6.s64 = ctx.r24.s64 + 460;
	// addi r5,r31,14128
	ctx.r5.s64 = ctx.r31.s64 + 14128;
	// addi r4,r31,9504
	ctx.r4.s64 = ctx.r31.s64 + 9504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x8998392C;
	sub_89935688(ctx, base);
	// addi r8,r31,7048
	ctx.r8.s64 = ctx.r31.s64 + 7048;
	// li r10,112
	ctx.r10.s64 = 112;
	// sth r22,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r22.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x89934fb8
	ctx.lr = 0x89983958;
	sub_89934FB8(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_89983960:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,6328
	ctx.r11.s64 = ctx.r31.s64 + 6328;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// mulli r7,r6,108
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(108));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,7048
	ctx.r10.s64 = ctx.r31.s64 + 7048;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899839b4
	if (!ctx.cr6.gt) goto loc_899839B4;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_8998398C:
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
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8998398c
	if (ctx.cr6.lt) goto loc_8998398C;
loc_899839B4:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89983960
	if (ctx.cr6.lt) goto loc_89983960;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17432
	ctx.r10.s64 = ctx.r11.s64 + -17432;
	// lbz r11,-17432(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983a60
	if (ctx.cr6.eq) goto loc_89983A60;
	// addi r30,r10,-12
	ctx.r30.s64 = ctx.r10.s64 + -12;
loc_899839EC:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,23(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lhz r4,14(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// addi r28,r31,2968
	ctx.r28.s64 = ctx.r31.s64 + 2968;
	// lbz r6,18(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,19(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// lbz r9,21(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,22(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983A3C;
	sub_89934B48(ctx, base);
	// lbzu r10,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899839ec
	if (!ctx.cr6.eq) goto loc_899839EC;
loc_89983A60:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_89983A68:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,-3568
	ctx.r11.s64 = ctx.r31.s64 + -3568;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// mulli r7,r6,204
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(204));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,2968
	ctx.r10.s64 = ctx.r31.s64 + 2968;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89983abc
	if (!ctx.cr6.gt) goto loc_89983ABC;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_89983A94:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89983a94
	if (ctx.cr6.lt) goto loc_89983A94;
loc_89983ABC:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89983a68
	if (ctx.cr6.lt) goto loc_89983A68;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17320
	ctx.r10.s64 = ctx.r11.s64 + -17320;
	// lbz r11,-17320(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983b70
	if (ctx.cr6.eq) goto loc_89983B70;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89983AF4:
	// lbz r3,25(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,26(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// addi r8,r31,9728
	ctx.r8.s64 = ctx.r31.s64 + 9728;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983B4C;
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
	// bne cr6,0x89983af4
	if (!ctx.cr6.eq) goto loc_89983AF4;
loc_89983B70:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_89983B78:
	// rlwinm r25,r11,14,2,17
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// add r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// ori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 | 1;
loc_89983B90:
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89983BA0:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r24,2548
	ctx.r5.s64 = ctx.r24.s64 + 2548;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,9728
	ctx.r11.s64 = ctx.r31.s64 + 9728;
	// addi r9,r31,8280
	ctx.r9.s64 = ctx.r31.s64 + 8280;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x89935610
	ctx.lr = 0x89983BE8;
	sub_89935610(ctx, base);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x89983ba0
	if (ctx.cr6.lt) goto loc_89983BA0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x89983b90
	if (ctx.cr6.lt) goto loc_89983B90;
	// addi r11,r31,9728
	ctx.r11.s64 = ctx.r31.s64 + 9728;
	// addi r10,r31,-3784
	ctx.r10.s64 = ctx.r31.s64 + -3784;
	// mulli r9,r27,108
	ctx.r9.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(108));
	// clrlwi r8,r25,16
	ctx.r8.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r6,r24,496
	ctx.r6.s64 = ctx.r24.s64 + 496;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,864
	ctx.r5.s64 = ctx.r11.s64 + 864;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r3,r8,8
	ctx.r3.u64 = ctx.r8.u64 | 8;
	// bl 0x89935610
	ctx.lr = 0x89983C38;
	sub_89935610(ctx, base);
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89983b78
	if (ctx.cr6.lt) goto loc_89983B78;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17236
	ctx.r10.s64 = ctx.r11.s64 + -17236;
	// lbz r11,-17236(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983ce0
	if (ctx.cr6.eq) goto loc_89983CE0;
	// addi r30,r10,-5
	ctx.r30.s64 = ctx.r10.s64 + -5;
loc_89983C68:
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// sth r22,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r22.u16);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,6(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// addi r7,r31,400
	ctx.r7.s64 = ctx.r31.s64 + 400;
	// lbz r5,7(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// stb r6,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// li r9,-8
	ctx.r9.s64 = -8;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-8
	ctx.r8.s64 = -8;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x89934b48
	ctx.lr = 0x89983CBC;
	sub_89934B48(ctx, base);
	// lbzu r10,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89983c68
	if (!ctx.cr6.eq) goto loc_89983C68;
loc_89983CE0:
	// addi r6,r24,20
	ctx.r6.s64 = ctx.r24.s64 + 20;
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// addi r4,r31,-5832
	ctx.r4.s64 = ctx.r31.s64 + -5832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x89983CF8;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r30,r11,-17220
	ctx.r30.s64 = ctx.r11.s64 + -17220;
	// lbz r11,-17220(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983d88
	if (ctx.cr6.eq) goto loc_89983D88;
	// li r28,160
	ctx.r28.s64 = 160;
loc_89983D14:
	// sth r20,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r20.u16);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r8,r31,-1176
	ctx.r8.s64 = ctx.r31.s64 + -1176;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,1(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// li r7,40
	ctx.r7.s64 = 40;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r10,216
	ctx.r10.s64 = 216;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,40
	ctx.r6.s64 = 40;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r9,-20
	ctx.r9.s64 = -20;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934b48
	ctx.lr = 0x89983D64;
	sub_89934B48(ctx, base);
	// lbz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// lbzu r11,3(r30)
	ea = 3 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// bne cr6,0x89983d14
	if (!ctx.cr6.eq) goto loc_89983D14;
loc_89983D88:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r31,-1176
	ctx.r5.s64 = ctx.r31.s64 + -1176;
	// addi r4,r31,-4568
	ctx.r4.s64 = ctx.r31.s64 + -4568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x89983DA0;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17208
	ctx.r10.s64 = ctx.r11.s64 + -17208;
	// lbz r11,-17208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983e38
	if (ctx.cr6.eq) goto loc_89983E38;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89983DBC:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r3,25(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// lbz r7,26(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// addi r8,r31,-288
	ctx.r8.s64 = ctx.r31.s64 + -288;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983E14;
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
	// bne cr6,0x89983dbc
	if (!ctx.cr6.eq) goto loc_89983DBC;
loc_89983E38:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_89983E40:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,5304
	ctx.r11.s64 = ctx.r31.s64 + 5304;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// mulli r7,r6,204
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(204));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,-288
	ctx.r10.s64 = ctx.r31.s64 + -288;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89983e94
	if (!ctx.cr6.gt) goto loc_89983E94;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_89983E6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89983e6c
	if (ctx.cr6.lt) goto loc_89983E6C;
loc_89983E94:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89983e40
	if (ctx.cr6.lt) goto loc_89983E40;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-17096
	ctx.r10.s64 = ctx.r11.s64 + -17096;
	// lbz r11,-17096(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89983f44
	if (ctx.cr6.eq) goto loc_89983F44;
	// addi r30,r10,-14
	ctx.r30.s64 = ctx.r10.s64 + -14;
loc_89983ECC:
	// lbz r28,25(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 25);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,26(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 26);
	// addi r8,r31,-3016
	ctx.r8.s64 = ctx.r31.s64 + -3016;
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
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r7,21(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 21);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,23(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// lbz r8,22(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 22);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89983F20;
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
	// bne cr6,0x89983ecc
	if (!ctx.cr6.eq) goto loc_89983ECC;
loc_89983F44:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_89983F4C:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,7128
	ctx.r11.s64 = ctx.r31.s64 + 7128;
	// ori r9,r10,17
	ctx.r9.u64 = ctx.r10.u64 | 17;
	// mulli r7,r6,216
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(216));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,-3016
	ctx.r10.s64 = ctx.r31.s64 + -3016;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89983fa0
	if (!ctx.cr6.gt) goto loc_89983FA0;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_89983F78:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89983f78
	if (ctx.cr6.lt) goto loc_89983F78;
loc_89983FA0:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89983f4c
	if (ctx.cr6.lt) goto loc_89983F4C;
	// addi r11,r31,-3016
	ctx.r11.s64 = ctx.r31.s64 + -3016;
	// addi r4,r31,7880
	ctx.r4.s64 = ctx.r31.s64 + 7880;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,306
	ctx.r5.s64 = ctx.r11.s64 + 306;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x89983FD8;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-16996
	ctx.r10.s64 = ctx.r11.s64 + -16996;
	// lbz r11,-16996(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -16996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89984064
	if (ctx.cr6.eq) goto loc_89984064;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_89983FF4:
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lbz r6,15(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// sth r20,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r20.u16);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,10(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// addi r7,r31,14208
	ctx.r7.s64 = ctx.r31.s64 + 14208;
	// lhz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 12);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// stb r6,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-19
	ctx.r8.s64 = -19;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x89934b48
	ctx.lr = 0x89984040;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89983ff4
	if (!ctx.cr6.eq) goto loc_89983FF4;
loc_89984064:
	// addi r5,r31,14208
	ctx.r5.s64 = ctx.r31.s64 + 14208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8998407C;
	sub_89935B08(ctx, base);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lis r26,14
	ctx.r26.s64 = 917504;
	// lis r27,13
	ctx.r27.s64 = 851968;
	// addi r9,r10,9016
	ctx.r9.s64 = ctx.r10.s64 + 9016;
loc_89984090:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r29,r31,10736
	ctx.r29.s64 = ctx.r31.s64 + 10736;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// lhzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// addi r30,r31,10736
	ctx.r30.s64 = ctx.r31.s64 + 10736;
	// lhzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// addi r3,r31,10736
	ctx.r3.s64 = ctx.r31.s64 + 10736;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r25,r29
	REX_STORE_U32(ctx.r25.u32 + ctx.r29.u32, ctx.r27.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r11,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r5,r7,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r21,r8,12,0,19
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// rlwinm r20,r10,15,0,16
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// srawi r19,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r6.s32 >> 8;
	// neg r22,r10
	ctx.r22.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// addi r8,r31,10736
	ctx.r8.s64 = ctx.r31.s64 + 10736;
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// rlwinm r18,r7,15,0,16
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// srawi r7,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r20.s32 >> 8;
	// addi r20,r8,24
	ctx.r20.s64 = ctx.r8.s64 + 24;
	// addi r8,r31,10736
	ctx.r8.s64 = ctx.r31.s64 + 10736;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r28,r31,10736
	ctx.r28.s64 = ctx.r31.s64 + 10736;
	// addi r4,r31,10736
	ctx.r4.s64 = ctx.r31.s64 + 10736;
	// addi r5,r31,10736
	ctx.r5.s64 = ctx.r31.s64 + 10736;
	// stwx r26,r25,r8
	REX_STORE_U32(ctx.r25.u32 + ctx.r8.u32, ctx.r26.u32);
	// addi r6,r31,10736
	ctx.r6.s64 = ctx.r31.s64 + 10736;
	// stwx r27,r25,r30
	REX_STORE_U32(ctx.r25.u32 + ctx.r30.u32, ctx.r27.u32);
	// rlwinm r22,r22,15,0,16
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 15) & 0xFFFF8000;
	// subf r29,r19,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r19.u64;
	// srawi r21,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stwx r29,r25,r3
	REX_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r29.u32);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// srawi r8,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 8;
	// addi r5,r5,28
	ctx.r5.s64 = ctx.r5.s64 + 28;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r21.u64;
	// stwx r26,r25,r28
	REX_STORE_U32(ctx.r25.u32 + ctx.r28.u32, ctx.r26.u32);
	// extsh r30,r24
	ctx.r30.s64 = ctx.r24.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r11,r25,r20
	REX_STORE_U32(ctx.r25.u32 + ctx.r20.u32, ctx.r11.u32);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwx r7,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r3,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r3.u32);
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// stwx r23,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r23.u32);
	// blt cr6,0x89984090
	if (ctx.cr6.lt) goto loc_89984090;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998CDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x8998CDE8;
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
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8998d694
	if (ctx.cr6.gt) goto loc_8998D694;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8998ce68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998CE68;
	// bdzf 4*cr6+eq,0x8998d158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998D158;
	// bdzf 4*cr6+eq,0x8998d3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998D3E0;
	// bdzf 4*cr6+eq,0x8998d158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998D158;
	// bne cr6,0x8998d158
	if (!ctx.cr6.eq) goto loc_8998D158;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8998ce4c
	if (!ctx.cr6.lt) goto loc_8998CE4C;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
loc_8998CE4C:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8998d694
	if (!ctx.cr6.lt) goto loc_8998D694;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998CE68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998CE70;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8998ce8c
	if (!ctx.cr6.lt) goto loc_8998CE8C;
loc_8998CE7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8998cbb0
	ctx.lr = 0x8998CE84;
	sub_8998CBB0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998CE8C:
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r6,r8,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// rlwimi r6,r7,0,24,22
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r6.u64 & 0x100);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r8,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// lwzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// stwx r9,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// rlwinm r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stbx r8,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u8);
	// beq cr6,0x8998d0f0
	if (ctx.cr6.eq) goto loc_8998D0F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932b18
	ctx.lr = 0x8998CF0C;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932d30
	ctx.lr = 0x8998CF18;
	sub_89932D30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b770
	ctx.lr = 0x8998CF20;
	sub_8991B770(ctx, base);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lhzx r28,r31,r10
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// blt cr6,0x8998cfa4
	if (ctx.cr6.lt) goto loc_8998CFA4;
	// bne cr6,0x8998d694
	if (!ctx.cr6.eq) goto loc_8998D694;
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// subfic r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi r3,r4,30
	ctx.r3.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998d694
	if (!ctx.cr6.eq) goto loc_8998D694;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8998d694
	if (!ctx.cr6.eq) goto loc_8998D694;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932a38
	ctx.lr = 0x8998CF94;
	sub_89932A38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998CFA4:
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8998d0a8
	if (!ctx.cr6.eq) goto loc_8998D0A8;
	// bl 0x8991db50
	ctx.lr = 0x8998CFC4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8998CFD4;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r24,5
	ctx.r24.s64 = 327680;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r27,r10,-14628
	ctx.r27.s64 = ctx.r10.s64 + -14628;
loc_8998CFF4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r4,r10,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rlwinm r23,r11,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhzx r9,r23,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r28.u32);
	// mullw r23,r10,r4
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// extsh r22,r9
	ctx.r22.s64 = ctx.r9.s16;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// srawi r9,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 8;
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r4,r9,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(224));
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x8998D08C;
	sub_899CC3D0(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8998cff4
	if (ctx.cr6.lt) goto loc_8998CFF4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998D0A8:
	// bl 0x8991db50
	ctx.lr = 0x8998D0AC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8998D0BC;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998D0F0:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8998D0F8:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x8998d118
	if (!ctx.cr6.lt) goto loc_8998D118;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8998D118:
	// ble cr6,0x8998d128
	if (!ctx.cr6.gt) goto loc_8998D128;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8998D128:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8998d0f8
	if (ctx.cr6.lt) goto loc_8998D0F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b770
	ctx.lr = 0x8998D144;
	sub_8991B770(ctx, base);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998D158:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998D160;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ce7c
	if (ctx.cr6.lt) goto loc_8998CE7C;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r28,r31,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// rlwimi r9,r10,0,24,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r9.u64 & 0x100);
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// sthx r9,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u16);
	// clrlwi r25,r9,16
	ctx.r25.u64 = ctx.r9.u32 & 0xFFFF;
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// addi r26,r30,160
	ctx.r26.s64 = ctx.r30.s64 + 160;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r4,r25
	ctx.r4.s64 = ctx.r25.s16;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r24,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r31,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r5,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r27,r30,56
	ctx.r27.s64 = ctx.r30.s64 + 56;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r7,r7,9016
	ctx.r7.s64 = ctx.r7.s64 + 9016;
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzx r27,r10,r7
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// stwx r3,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r3.u32);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r6,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r9,r3,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lhzx r3,r27,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r7.u32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwzx r5,r11,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// subfc r5,r10,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// eqv r8,r10,r6
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r6.u64);
	// lbzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stbx r5,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u8);
	// bne cr6,0x8998d694
	if (!ctx.cr6.eq) goto loc_8998D694;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r24,r30,192
	ctx.r24.s64 = ctx.r30.s64 + 192;
	// addi r23,r30,192
	ctx.r23.s64 = ctx.r30.s64 + 192;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lbzx r3,r31,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// mulli r27,r6,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r11,r27,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r24.u32);
	// extsb r26,r3
	ctx.r26.s64 = ctx.r3.s8;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// and r8,r26,r25
	ctx.r8.u64 = ctx.r26.u64 & ctx.r25.u64;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// addi r11,r4,128
	ctx.r11.s64 = ctx.r4.s64 + 128;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r11,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r3,r6,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r7,r11,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r6,r9,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8998D37C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8998D390;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998d694
	if (!ctx.cr6.eq) goto loc_8998D694;
	// subfic r11,r26,-1
	ctx.xer.ca = ctx.r26.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r26.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stbx r10,r27,r24
	REX_STORE_U8(ctx.r27.u32 + ctx.r24.u32, ctx.r10.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899cda00
	ctx.lr = 0x8998D3B8;
	sub_899CDA00(ctx, base);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8998d694
	if (ctx.cr6.eq) goto loc_8998D694;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// lbzx r7,r27,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stbx r6,r27,r11
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998D3E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998D3E8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ce7c
	if (ctx.cr6.lt) goto loc_8998CE7C;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r9,r29,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// rlwimi r9,r11,0,24,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r9.u64 & 0x100);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhzx r4,r29,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// sthx r4,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwzx r9,r29,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r26,r30,56
	ctx.r26.s64 = ctx.r30.s64 + 56;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r31,r8
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r27,r30,164
	ctx.r27.s64 = ctx.r30.s64 + 164;
	// addi r25,r30,36
	ctx.r25.s64 = ctx.r30.s64 + 36;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,206
	ctx.r9.s64 = ctx.r30.s64 + 206;
	// addi r21,r30,32
	ctx.r21.s64 = ctx.r30.s64 + 32;
	// addi r20,r30,200
	ctx.r20.s64 = ctx.r30.s64 + 200;
	// lwzx r22,r31,r7
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r19,r30,200
	ctx.r19.s64 = ctx.r30.s64 + 200;
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lhzx r24,r31,r9
	ctx.r24.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// add r23,r9,r10
	ctx.r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u32);
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r9,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r9.u32);
	// lbzx r8,r29,r20
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r20.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r8.u8);
	// beq cr6,0x8998d5e0
	if (ctx.cr6.eq) goto loc_8998D5E0;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// ori r6,r11,32896
	ctx.r6.u64 = ctx.r11.u64 | 32896;
	// rlwinm r11,r7,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lwz r10,-9212(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// ori r7,r5,20077
	ctx.r7.u64 = ctx.r5.u64 | 20077;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r4,r28,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lhzx r5,r4,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// lhzx r4,r11,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// lis r6,-2
	ctx.r6.s64 = -131072;
	// stw r10,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r10.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// ori r11,r6,49152
	ctx.r11.u64 = ctx.r6.u64 | 49152;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// addi r21,r30,207
	ctx.r21.s64 = ctx.r30.s64 + 207;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// ori r25,r9,32768
	ctx.r25.u64 = ctx.r9.u64 | 32768;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r10,r10,30,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1FFF;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lbzx r7,r31,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r21.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x899d7a90
	ctx.lr = 0x8998D5A4;
	sub_899D7A90(ctx, base);
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// add. r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// bne 0x8998d610
	if (!ctx.cr0.eq) goto loc_8998D610;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// extsh r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stbx r3,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// b 0x8998d610
	goto loc_8998D610;
loc_8998D5E0:
	// extsh r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
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
	// beq cr6,0x8998d610
	if (ctx.cr6.eq) goto loc_8998D610;
	// lis r11,-8
	ctx.r11.s64 = -524288;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8998D610:
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// rlwinm r9,r28,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// rlwinm r7,r8,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// srawi r11,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 4;
	// lhzx r6,r9,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// srawi r10,r22,4
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 4;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lwzx r9,r29,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lhzx r8,r7,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// mullw r3,r11,r3
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addis r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 196608;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwzx r10,r29,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
loc_8998D694:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89991718) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89991720;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mulli r3,r9,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// rlwimi r11,r7,0,24,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r7,r30,180
	ctx.r7.s64 = ctx.r30.s64 + 180;
	// lhzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// sthx r5,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u16);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lhzx r29,r31,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// lbzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// stbx r4,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// addi r5,r30,160
	ctx.r5.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r3,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r25,r31,r7
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhzx r7,r31,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r4,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r4,r7,128
	ctx.r4.s64 = ctx.r7.s64 + 128;
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r6,r4,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,9016
	ctx.r11.s64 = ctx.r11.s64 + 9016;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lhzx r29,r7,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r6,r3,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// mullw r4,r29,r10
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r29,r30,206
	ctx.r29.s64 = ctx.r30.s64 + 206;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r4,r3,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lbzx r6,r3,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// beq cr6,0x89991994
	if (ctx.cr6.eq) goto loc_89991994;
	// addi r4,r30,185
	ctx.r4.s64 = ctx.r30.s64 + 185;
	// lbzx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u8);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x89991994
	if (ctx.cr6.lt) goto loc_89991994;
	// addi r6,r30,184
	ctx.r6.s64 = ctx.r30.s64 + 184;
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stbx r10,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// rlwinm r3,r3,6,22,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x3C0;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// rlwinm r4,r6,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r4,24
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 24;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// rlwinm r9,r29,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r6,r29,128
	ctx.r6.s64 = ctx.r29.s64 + 128;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8999195C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89991994
	if (ctx.cr6.eq) goto loc_89991994;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x89991970;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89991994
	if (!ctx.cr6.eq) goto loc_89991994;
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x899cde10
	ctx.lr = 0x89991994;
	sub_899CDE10(ctx, base);
loc_89991994:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89993D28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// lwz r11,27852(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27852);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lbz r10,4946(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4946);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
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
	// sth r10,9536(r7)
	REX_STORE_U16(ctx.r7.u32 + 9536, ctx.r10.u16);
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
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,27852(r8)
	REX_STORE_U32(ctx.r8.u32 + 27852, ctx.r11.u32);
	// sth r9,-17120(r5)
	REX_STORE_U16(ctx.r5.u32 + -17120, ctx.r9.u16);
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r11,12024(r4)
	REX_STORE_U32(ctx.r4.u32 + 12024, ctx.r11.u32);
	// b 0x89993aa8
	sub_89993AA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89993F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89993F08;
	__savegprlr_21(ctx, base);
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
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x89994e1c
	if (ctx.cr6.gt) goto loc_89994E1C;
	// lis r12,-30311
	ctx.r12.s64 = -1986461696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16200
	ctx.r12.s64 = ctx.r12.s64 + 16200;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89993F90;
	case 1:
		goto loc_89993F90;
	case 2:
		goto loc_89993F90;
	case 3:
		goto loc_89993F90;
	case 4:
		goto loc_899944C8;
	case 5:
		goto loc_89994618;
	case 6:
		goto loc_8999487C;
	case 7:
		goto loc_89994998;
	case 8:
		goto loc_89994998;
	case 9:
		goto loc_89994BB4;
	case 10:
		goto loc_89994CB4;
	case 11:
		goto loc_89994CB4;
	case 12:
		goto loc_89994CB4;
	case 13:
		goto loc_89994CB4;
	case 14:
		goto loc_89994CB4;
	case 15:
		goto loc_89994CB4;
	case 16:
		goto loc_89994CB4;
	case 17:
		goto loc_89994CB4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89993F90:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899942b0
	if (ctx.cr6.eq) goto loc_899942B0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x89993FA8;
	sub_8991C8B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991c718
	ctx.lr = 0x89993FB0;
	sub_8991C718(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// addi r8,r9,-12636
	ctx.r8.s64 = ctx.r9.s64 + -12636;
	// lhzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// clrlwi r4,r6,30
	ctx.r4.u64 = ctx.r6.u32 & 0x3;
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lbzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// stwx r8,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r8.u32);
	// stwx r10,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x89993FF8;
	sub_8991B610(ctx, base);
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lwzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899940fc
	if (ctx.cr6.eq) goto loc_899940FC;
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
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x899940fc
	if (ctx.cr6.lt) goto loc_899940FC;
	// stbx r22,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u8);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lis r23,8
	ctx.r23.s64 = 524288;
	// addi r27,r11,-12628
	ctx.r27.s64 = ctx.r11.s64 + -12628;
loc_89994048:
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// lwzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r4,r10,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// addi r3,r31,207
	ctx.r3.s64 = ctx.r31.s64 + 207;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwzx r7,r30,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lbzx r6,r30,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// lhzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// mullw r21,r9,r11
	ctx.r21.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r5,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r21.s32 >> 8;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r4,r23,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r23.u64;
	// bl 0x899d5fd0
	ctx.lr = 0x899940E8;
	sub_899D5FD0(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89994048
	if (ctx.cr6.lt) goto loc_89994048;
loc_899940FC:
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89994290
	if (ctx.cr6.lt) goto loc_89994290;
	// beq cr6,0x89994264
	if (ctx.cr6.eq) goto loc_89994264;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89994e1c
	if (!ctx.cr6.lt) goto loc_89994E1C;
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r9,r6,128
	ctx.r9.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r10,r6,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r9,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bl 0x8991db50
	ctx.lr = 0x89994194;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x899941B0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899941C4;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89994e1c
	if (!ctx.cr6.eq) goto loc_89994E1C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r27,r31,184
	ctx.r27.s64 = ctx.r31.s64 + 184;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lbz r24,7935(r11)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 7935);
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// addi r25,r11,-27528
	ctx.r25.s64 = ctx.r11.s64 + -27528;
loc_899941E8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// beq cr6,0x89994220
	if (ctx.cr6.eq) goto loc_89994220;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rlwinm r7,r9,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// bl 0x899cb940
	ctx.lr = 0x8999421C;
	sub_899CB940(ctx, base);
	// b 0x8999423c
	goto loc_8999423C;
loc_89994220:
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rlwinm r5,r9,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r7,r5,r26
	ctx.r7.u64 = ctx.r5.u64 + ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x899cba78
	ctx.lr = 0x8999423C;
	sub_899CBA78(ctx, base);
loc_8999423C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x899941e8
	if (ctx.cr6.lt) goto loc_899941E8;
	// lbzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stbx r11,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994264:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x89994274;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994290:
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899942B0:
	// addi r27,r31,183
	ctx.r27.s64 = ctx.r31.s64 + 183;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// lbzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r10.u8);
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bgt cr6,0x899942ec
	if (ctx.cr6.gt) goto loc_899942EC;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x89994358
	if (!ctx.cr6.lt) goto loc_89994358;
loc_899942EC:
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lhzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lbzx r6,r30,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r4,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// rlwinm r11,r5,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r8,r4,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x899d5fd0
	ctx.lr = 0x89994350;
	sub_899D5FD0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991c100
	ctx.lr = 0x89994358;
	sub_8991C100(ctx, base);
loc_89994358:
	// lbzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89994e1c
	if (!ctx.cr6.eq) goto loc_89994E1C;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// lwzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r3,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhzx r5,r8,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r4,r6,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r11,r3,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x899943f8
	if (!ctx.cr6.eq) goto loc_899943F8;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899943f8
	if (!ctx.cr6.eq) goto loc_899943F8;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8992e330
	ctx.lr = 0x899943F8;
	sub_8992E330(ctx, base);
loc_899943F8:
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r26,r7,-12632
	ctx.r26.s64 = ctx.r7.s64 + -12632;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r5,r6,17
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r6,r5,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// rlwinm r7,r5,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lhzx r6,r6,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// lhzx r4,r7,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// rlwinm r5,r10,7,10,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F0000;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r7,17
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFF;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// lbzx r7,r30,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r4,r10,r26
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x899d4440
	ctx.lr = 0x899944C0;
	sub_899D4440(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899944C8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899944D0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899944ec
	if (!ctx.cr6.lt) goto loc_899944EC;
loc_899944DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89993d90
	ctx.lr = 0x899944E4;
	sub_89993D90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899944EC:
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r8,r31,164
	ctx.r8.s64 = ctx.r31.s64 + 164;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lhzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// mulli r4,r11,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// rlwinm r3,r10,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lis r29,-21846
	ctx.r29.s64 = -1431699456;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// lhzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// ori r29,r29,43691
	ctx.r29.u64 = ctx.r29.u64 | 43691;
	// lwzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// lwzx r6,r30,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lhzx r5,r3,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// mullw r3,r27,r11
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// lwzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulhwu r3,r10,r29
	ctx.r3.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r8,r3,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r6,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r6.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r8,r5,r11
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwzx r5,r30,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// stwx r10,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r6,r31,206
	ctx.r6.s64 = ctx.r31.s64 + 206;
	// stwx r7,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stwx r3,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stwx r3,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u32);
	// lbzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r11,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994618:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89994620;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899944dc
	if (ctx.cr6.lt) goto loc_899944DC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r6,r31,164
	ctx.r6.s64 = ctx.r31.s64 + 164;
	// addi r5,r8,9016
	ctx.r5.s64 = ctx.r8.s64 + 9016;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lhzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lwzx r7,r30,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,128
	ctx.r10.s64 = ctx.r8.s64 + 128;
	// lwzx r4,r30,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r28,r10,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r27,r29,128
	ctx.r27.s64 = ctx.r29.s64 + 128;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// srawi r9,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 4;
	// rlwinm r4,r27,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// lhzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// lhzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r26,r8,r5
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhzx r29,r4,r5
	ctx.r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// srawi r4,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 8;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mullw r3,r29,r9
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// stwx r4,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r4.u32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addi r5,r31,206
	ctx.r5.s64 = ctx.r31.s64 + 206;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r10,r30,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// stbx r4,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x89994e1c
	if (ctx.cr6.gt) goto loc_89994E1C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89994788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89994788;
	// bdzf 4*cr6+eq,0x899947c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899947C0;
	// bne cr6,0x8999481c
	if (!ctx.cr6.eq) goto loc_8999481C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x89994748;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x89994754;
	sub_89932D30(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8999475C;
	sub_8991B7F8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991db50
	ctx.lr = 0x8999476C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994788:
	// addi r10,r31,193
	ctx.r10.s64 = ctx.r31.s64 + 193;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// ori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 | 1;
	// rlwinm r3,r5,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// stbx r3,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899947C0:
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89994e1c
	if (!ctx.cr6.eq) goto loc_89994E1C;
	// addi r10,r31,193
	ctx.r10.s64 = ctx.r31.s64 + 193;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89994800
	if (!ctx.cr6.eq) goto loc_89994800;
	// addi r11,r31,185
	ctx.r11.s64 = ctx.r31.s64 + 185;
	// li r22,0
	ctx.r22.s64 = 0;
	// stbx r22,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r22.u8);
	// stbx r22,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994800:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lis r10,-3
	ctx.r10.s64 = -196608;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// stbx r9,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8999481C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89994834
	if (ctx.cr6.eq) goto loc_89994834;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994834:
	// addi r11,r31,185
	ctx.r11.s64 = ctx.r31.s64 + 185;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8999486c
	if (ctx.cr6.lt) goto loc_8999486C;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r22,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x89932a38
	ctx.lr = 0x89994860;
	sub_89932A38(ctx, base);
	// stbx r22,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8999486C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8999487C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89994884;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899944dc
	if (ctx.cr6.lt) goto loc_899944DC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,158
	ctx.r3.s64 = ctx.r31.s64 + 158;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// addi r6,r10,9016
	ctx.r6.s64 = ctx.r10.s64 + 9016;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// lhzx r5,r11,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r29,r5,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r28,r10,128
	ctx.r28.s64 = ctx.r10.s64 + 128;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// sthx r5,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u16);
	// rlwinm r4,r4,0,12,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// rlwinm r5,r28,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// lhzx r29,r29,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mullw r5,r29,r9
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r27,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 8;
	// mullw r26,r10,r6
	ctx.r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r29,r27,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r27.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mulli r6,r29,224
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(224));
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r5.u32);
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r9,0,10,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// eqv r5,r8,r7
	ctx.r5.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// subfc r6,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stbx r7,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u8);
	// bl 0x8991b770
	ctx.lr = 0x89994990;
	sub_8991B770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994998:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899949A0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899944dc
	if (ctx.cr6.lt) goto loc_899944DC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// addi r25,r31,158
	ctx.r25.s64 = ctx.r31.s64 + 158;
	// lhzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r23,r8,0,12,9
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lwzx r4,r30,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r8,r5,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// sthx r5,r30,r25
	REX_STORE_U16(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u16);
	// rlwinm r4,r3,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// extsh r24,r8
	ctx.r24.s64 = ctx.r8.s16;
	// lhzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r8,r4,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(224));
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r4,r24,r10
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// lwzx r7,r30,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r23,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r23.u32);
	// stwx r8,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r4,r6,0,10,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x300000;
	// or r10,r4,r23
	ctx.r10.u64 = ctx.r4.u64 | ctx.r23.u64;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// eqv r4,r7,r6
	ctx.r4.u64 = ~(ctx.r7.u64 ^ ctx.r6.u64);
	// lbzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// subfc r5,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stbx r8,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r8.u8);
	// bl 0x8991b770
	ctx.lr = 0x89994A88;
	sub_8991B770(ctx, base);
	// addi r6,r31,150
	ctx.r6.s64 = ctx.r31.s64 + 150;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// lhzx r5,r30,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r6.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r24,r4,208
	ctx.r24.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lbzx r3,r24,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r11,r24,r10
	REX_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r9,r30,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r7,r30,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r25.u32);
	// extsh r25,r7
	ctx.r25.s64 = ctx.r7.s16;
	// addi r6,r25,128
	ctx.r6.s64 = ctx.r25.s64 + 128;
	// lbzx r5,r30,r27
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r4,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// lhzx r7,r3,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r3,r6,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r11,r4,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// mulli r7,r10,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x89994B20;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x89994B34;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89994e1c
	if (!ctx.cr6.eq) goto loc_89994E1C;
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
	// li r3,1
	ctx.r3.s64 = 1;
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
	// mulli r9,r10,25
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(25));
	// rlwinm r8,r9,17,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// bl 0x899cda00
	ctx.lr = 0x89994B90;
	sub_899CDA00(ctx, base);
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89994e1c
	if (ctx.cr6.eq) goto loc_89994E1C;
	// addi r11,r31,193
	ctx.r11.s64 = ctx.r31.s64 + 193;
	// lbzx r9,r24,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stbx r8,r24,r11
	REX_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994BB4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89994BBC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899944dc
	if (ctx.cr6.lt) goto loc_899944DC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r5,r9,9016
	ctx.r5.s64 = ctx.r9.s64 + 9016;
	// lhzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r29,r10,128
	ctx.r29.s64 = ctx.r10.s64 + 128;
	// sthx r4,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r4.u16);
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lhzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// lhzx r6,r4,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// mullw r4,r29,r9
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r27,r10,r28
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// mullw r29,r10,r29
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r10,r4,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r4.u64;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// mulli r4,r10,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stwx r10,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subfc r7,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// eqv r6,r9,r8
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r8.u64);
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subf r9,r10,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stbx r9,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u8);
	// bl 0x8991b770
	ctx.lr = 0x89994CAC;
	sub_8991B770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994CB4:
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// lbzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89994cf8
	if (ctx.cr6.lt) goto loc_89994CF8;
	// bne cr6,0x89994e1c
	if (!ctx.cr6.eq) goto loc_89994E1C;
	// addi r10,r31,66
	ctx.r10.s64 = ctx.r31.s64 + 66;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89994ce8
	if (!ctx.cr6.lt) goto loc_89994CE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994CE8:
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// stbx r11,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994CF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89994D00;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89994d20
	if (!ctx.cr6.lt) goto loc_89994D20;
	// lbzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89994D20:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r6,r10,9016
	ctx.r6.s64 = ctx.r10.s64 + 9016;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// lwzx r27,r30,r5
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// srawi r9,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 4;
	// rlwinm r26,r7,1,22,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r27,r31,206
	ctx.r27.s64 = ctx.r31.s64 + 206;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// addi r22,r31,200
	ctx.r22.s64 = ctx.r31.s64 + 200;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r6,r26,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r6.u32);
	// mullw r26,r4,r9
	ctx.r26.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// extsh r21,r6
	ctx.r21.s64 = ctx.r6.s16;
	// srawi r6,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r26.s32 >> 8;
	// mullw r26,r10,r21
	ctx.r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// mullw r4,r10,r4
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf r6,r6,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r6.u64;
	// mullw r9,r9,r21
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stwx r5,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r27,r31,164
	ctx.r27.s64 = ctx.r31.s64 + 164;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u32);
	// addi r6,r4,-12612
	ctx.r6.s64 = ctx.r4.s64 + -12612;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stbx r10,r30,r22
	REX_STORE_U8(ctx.r30.u32 + ctx.r22.u32, ctx.r10.u8);
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// clrlwi r5,r7,29
	ctx.r5.u64 = ctx.r7.u32 & 0x7;
	// lbzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stwx r9,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89994E1C;
	sub_8991B610(ctx, base);
loc_89994E1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999C628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x8999C630;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8999ce5c
	if (ctx.cr6.gt) goto loc_8999CE5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8999c7bc
	if (ctx.cr6.eq) goto loc_8999C7BC;
	// bdz 0x8999cad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8999CAD4;
	// bdz 0x8999cb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8999CB9C;
	// bdz 0x8999c670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8999C670;
loc_8999C670:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8999C678;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8999c694
	if (!ctx.cr6.lt) goto loc_8999C694;
loc_8999C684:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999C694:
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwzx r8,r10,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// blt cr6,0x8999ce5c
	if (ctx.cr6.lt) goto loc_8999CE5C;
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// li r19,0
	ctx.r19.s64 = 0;
	// stbx r19,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u8);
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8999c72c
	if (ctx.cr6.eq) goto loc_8999C72C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8999c768
	if (!ctx.cr6.eq) goto loc_8999C768;
loc_8999C720:
	// stwx r19,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999C72C:
	// addi r8,r30,180
	ctx.r8.s64 = ctx.r30.s64 + 180;
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8999c748
	if (!ctx.cr6.eq) goto loc_8999C748;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_8999C748:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r10,-11816
	ctx.r9.s64 = ctx.r10.s64 + -11816;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_8999C768:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999C7BC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8999C7C4;
	sub_8991B9F0(ctx, base);
	// extsh r18,r3
	ctx.r18.s64 = ctx.r3.s16;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bge cr6,0x8999c7e0
	if (!ctx.cr6.lt) goto loc_8999C7E0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8999c580
	ctx.lr = 0x8999C7D8;
	sub_8999C580(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999C7E0:
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
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,-9212(r20)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
	// lis r21,32
	ctx.r21.s64 = 2097152;
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
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r29,r9,20077
	ctx.r29.u64 = ctx.r9.u64 | 20077;
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// addi r22,r10,-11824
	ctx.r22.s64 = ctx.r10.s64 + -11824;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r24,r11,9016
	ctx.r24.s64 = ctx.r11.s64 + 9016;
loc_8999C868:
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// addi r28,r11,12345
	ctx.r28.s64 = ctx.r11.s64 + 12345;
	// clrlwi r11,r8,17
	ctx.r11.u64 = ctx.r8.u32 & 0x7FFF;
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x4;
	// rlwinm r11,r5,22,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x1FFFF;
	// add r5,r9,r21
	ctx.r5.u64 = ctx.r9.u64 + ctx.r21.u64;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// addi r23,r30,200
	ctx.r23.s64 = ctx.r30.s64 + 200;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwzx r4,r4,r22
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r8,r31,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r6,r31,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lhzx r11,r10,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r10,r9,r24
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r24.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// bl 0x899d7a90
	ctx.lr = 0x8999C918;
	sub_899D7A90(ctx, base);
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x8999c868
	if (ctx.cr6.lt) goto loc_8999C868;
	// addi r5,r30,188
	ctx.r5.s64 = ctx.r30.s64 + 188;
	// stw r28,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r28.u32);
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8999ca60
	if (ctx.cr6.lt) goto loc_8999CA60;
	// bne cr6,0x8999ce5c
	if (!ctx.cr6.eq) goto loc_8999CE5C;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8999c97c
	if (!ctx.cr0.lt) goto loc_8999C97C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999C97C:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8999c720
	if (ctx.cr6.gt) goto loc_8999C720;
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
	// blt cr6,0x8999ce5c
	if (ctx.cr6.lt) goto loc_8999CE5C;
	// stbx r19,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8999C9B0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999ce5c
	if (ctx.cr6.eq) goto loc_8999CE5C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// lis r6,-8016
	ctx.r6.s64 = -525336576;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r28,r4,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// stwx r6,r28,r30
	REX_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r11,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r5,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r19,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r19.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999C9FC;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999CA04;
	sub_8991C578(ctx, base);
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// addi r7,r30,66
	ctx.r7.s64 = ctx.r30.s64 + 66;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r9,516
	ctx.r9.s64 = 516;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// sthx r9,r28,r10
	REX_STORE_U16(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// stbx r11,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// stbx r11,r28,r7
	REX_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r3,r30,182
	ctx.r3.s64 = ctx.r30.s64 + 182;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stwx r10,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// stwx r9,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// stbx r19,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r19.u8);
	// stbx r8,r28,r4
	REX_STORE_U8(ctx.r28.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999CA60:
	// mulli r11,r18,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r3,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r3.u32);
	// lwzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8999ce5c
	if (!ctx.cr6.eq) goto loc_8999CE5C;
	// stbx r19,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u8);
	// lis r10,-4
	ctx.r10.s64 = -262144;
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r4,r8,176
	ctx.r4.u64 = ctx.r8.u64 | 11534336;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// stbx r6,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999CAD4:
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8999cb24
	if (!ctx.cr6.eq) goto loc_8999CB24;
	// addi r11,r30,67
	ctx.r11.s64 = ctx.r30.s64 + 67;
	// addi r8,r30,66
	ctx.r8.s64 = ctx.r30.s64 + 66;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r10,255
	ctx.r7.s64 = ctx.r10.s64 + 255;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// bge cr6,0x8999cb24
	if (!ctx.cr6.lt) goto loc_8999CB24;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_8999CB24:
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8999ce5c
	if (!ctx.cr6.eq) goto loc_8999CE5C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8999c684
	if (ctx.cr6.eq) goto loc_8999C684;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
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
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999CB9C:
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
	// blt cr6,0x8999ce5c
	if (ctx.cr6.lt) goto loc_8999CE5C;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// li r19,0
	ctx.r19.s64 = 0;
	// stbx r19,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u8);
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8999cd28
	if (ctx.cr6.eq) goto loc_8999CD28;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// beq cr6,0x8999ccdc
	if (ctx.cr6.eq) goto loc_8999CCDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r3,16838
	ctx.r3.s64 = 1103495168;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r29,r3,20077
	ctx.r29.u64 = ctx.r3.u64 | 20077;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-9212(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -9212);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r6,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 16;
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r7,r6,7,10,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x3F0000;
	// clrlwi r8,r10,17
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r11,-9212(r4)
	REX_STORE_U32(ctx.r4.u32 + -9212, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// clrlwi r10,r5,17
	ctx.r10.u64 = ctx.r5.u32 & 0x7FFF;
	// rlwinm r7,r8,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r3,r3,9016
	ctx.r3.s64 = ctx.r3.s64 + 9016;
	// rlwinm r6,r4,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lhzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r7,r4,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// b 0x8999ce4c
	goto loc_8999CE4C;
loc_8999CCDC:
	// stwx r19,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r19.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
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
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999CD28:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
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
	// beq cr6,0x8999cd60
	if (ctx.cr6.eq) goto loc_8999CD60;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8999CD4C;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8999cd60
	if (ctx.cr6.lt) goto loc_8999CD60;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8999cd68
	goto loc_8999CD68;
loc_8999CD60:
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8999CD68:
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// ori r29,r6,20077
	ctx.r29.u64 = ctx.r6.u64 | 20077;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwz r10,-9212(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// stw r10,-9212(r27)
	REX_STORE_U32(ctx.r27.u32 + -9212, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// clrlwi r6,r11,17
	ctx.r6.u64 = ctx.r11.u32 & 0x7FFF;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x899d64d0
	ctx.lr = 0x8999CDFC;
	sub_899D64D0(ctx, base);
	// lwz r11,-9212(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r8,9016
	ctx.r7.s64 = ctx.r8.s64 + 9016;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r27)
	REX_STORE_U32(ctx.r27.u32 + -9212, ctx.r11.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r5,r5,17
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFF;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r3,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r4,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r6,r8,17,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFFFFFE;
	// lhzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r3,r4,17,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8999CE4C:
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899d6720
	ctx.lr = 0x8999CE5C;
	sub_899D6720(ctx, base);
loc_8999CE5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A6948) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899A6950;
	__savegprlr_25(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// and r5,r9,r12
	ctx.r5.u64 = ctx.r9.u64 & ctx.r12.u64;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lhzx r8,r10,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lis r12,16560
	ctx.r12.s64 = 1085276160;
	// lwzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// mulli r28,r8,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,206
	ctx.r3.s64 = ctx.r11.s64 + 206;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// addi r27,r11,68
	ctx.r27.s64 = ctx.r11.s64 + 68;
	// lbzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// lwzx r26,r28,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r25,r11,200
	ctx.r25.s64 = ctx.r11.s64 + 200;
	// and r26,r26,r12
	ctx.r26.u64 = ctx.r26.u64 & ctx.r12.u64;
	// or r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 | ctx.r5.u64;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r9,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbzx r11,r28,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbx r8,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r8.u8);
	// lwzx r6,r28,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// stwx r6,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r6.u32);
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899A81A0;
	__savegprlr_15(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r31,r11,760
	ctx.r31.s64 = ctx.r11.s64 + 760;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r11,r31,-856
	ctx.r11.s64 = ctx.r31.s64 + -856;
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
	// li r4,769
	ctx.r4.s64 = 769;
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x89934fb8
	ctx.lr = 0x899A81E0;
	sub_89934FB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r29,r31,-856
	ctx.r29.s64 = ctx.r31.s64 + -856;
	// addi r30,r31,-3920
	ctx.r30.s64 = ctx.r31.s64 + -3920;
loc_899A81EC:
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899A8200;
	sub_89935880(ctx, base);
	// addi r11,r31,-3920
	ctx.r11.s64 = ctx.r31.s64 + -3920;
	// addi r30,r30,612
	ctx.r30.s64 = ctx.r30.s64 + 612;
	// addi r11,r11,3060
	ctx.r11.s64 = ctx.r11.s64 + 3060;
	// addi r29,r29,170
	ctx.r29.s64 = ctx.r29.s64 + 170;
	// addi r4,r4,780
	ctx.r4.s64 = ctx.r4.s64 + 780;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899a81ec
	if (ctx.cr6.lt) goto loc_899A81EC;
	// li r9,256
	ctx.r9.s64 = 256;
	// sth r28,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// sth r28,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r28.u16);
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r9,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r9.u16);
	// sth r9,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r9.u16);
	// li r25,0
	ctx.r25.s64 = 0;
	// sth r9,138(r1)
	REX_STORE_U16(ctx.r1.u32 + 138, ctx.r9.u16);
	// li r8,14
	ctx.r8.s64 = 14;
	// sth r9,150(r1)
	REX_STORE_U16(ctx.r1.u32 + 150, ctx.r9.u16);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,144
	ctx.r6.s64 = 144;
	// sth r10,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// li r5,-144
	ctx.r5.s64 = -144;
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// sth r10,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// sth r10,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r10.u16);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// sth r11,122(r1)
	REX_STORE_U16(ctx.r1.u32 + 122, ctx.r11.u16);
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
	// sth r10,124(r1)
	REX_STORE_U16(ctx.r1.u32 + 124, ctx.r10.u16);
	// sth r11,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// sth r11,134(r1)
	REX_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// sth r10,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r10.u16);
	// sth r11,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r11.u16);
	// sth r11,146(r1)
	REX_STORE_U16(ctx.r1.u32 + 146, ctx.r11.u16);
	// sth r10,148(r1)
	REX_STORE_U16(ctx.r1.u32 + 148, ctx.r10.u16);
	// sth r11,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r11.u16);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// sth r10,154(r1)
	REX_STORE_U16(ctx.r1.u32 + 154, ctx.r10.u16);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// sth r25,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r25.u16);
	// sth r25,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r25.u16);
	// sth r25,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r25.u16);
	// sth r25,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// sth r7,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r7.u16);
	// sth r6,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r6.u16);
	// sth r5,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r5.u16);
	// sth r28,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r28.u16);
	// sth r8,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r8.u16);
	// sth r8,142(r1)
	REX_STORE_U16(ctx.r1.u32 + 142, ctx.r8.u16);
loc_899A82C8:
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// li r7,17
	ctx.r7.s64 = 17;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// addi r23,r1,100
	ctx.r23.s64 = ctx.r1.s64 + 100;
loc_899A82EC:
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// lhzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// lhzx r21,r11,r23
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r30,r1,98
	ctx.r30.s64 = ctx.r1.s64 + 98;
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// add r7,r22,r8
	ctx.r7.u64 = ctx.r22.u64 + ctx.r8.u64;
	// lhzx r20,r11,r3
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r26,r31,-3920
	ctx.r26.s64 = ctx.r31.s64 + -3920;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// rlwinm r29,r29,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// rlwinm r28,r6,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r27,r4,r9
	ctx.r27.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rotlwi r6,r30,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 16);
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r19,r3,r9
	ctx.r19.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// extsh r18,r27
	ctx.r18.s64 = ctx.r27.s16;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lhzx r30,r29,r9
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// add r16,r7,r4
	ctx.r16.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lhzx r3,r28,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// addi r27,r31,-3920
	ctx.r27.s64 = ctx.r31.s64 + -3920;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r18,r18,r6
	ctx.r18.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r6.s32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// extsh r15,r3
	ctx.r15.s64 = ctx.r3.s16;
	// extsh r17,r30
	ctx.r17.s64 = ctx.r30.s16;
	// addi r28,r31,-3920
	ctx.r28.s64 = ctx.r31.s64 + -3920;
	// addi r3,r31,-3920
	ctx.r3.s64 = ctx.r31.s64 + -3920;
	// srawi r18,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 8;
	// mullw r6,r17,r6
	ctx.r6.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r6.s32);
	// stwx r18,r16,r27
	REX_STORE_U32(ctx.r16.u32 + ctx.r27.u32, ctx.r18.u32);
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// mullw r17,r15,r5
	ctx.r17.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r5.s32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r29,r31,-3920
	ctx.r29.s64 = ctx.r31.s64 + -3920;
	// addi r30,r31,-3920
	ctx.r30.s64 = ctx.r31.s64 + -3920;
	// addi r4,r31,-3920
	ctx.r4.s64 = ctx.r31.s64 + -3920;
	// addi r7,r31,-3920
	ctx.r7.s64 = ctx.r31.s64 + -3920;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// mullw r27,r19,r5
	ctx.r27.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r5.s32);
	// stwx r6,r16,r28
	REX_STORE_U32(ctx.r16.u32 + ctx.r28.u32, ctx.r6.u32);
	// srawi r19,r17,8
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r17.s32 >> 8;
	// addi r15,r31,-3920
	ctx.r15.s64 = ctx.r31.s64 + -3920;
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// stwx r19,r16,r3
	REX_STORE_U32(ctx.r16.u32 + ctx.r3.u32, ctx.r19.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// rlwinm r21,r21,15,0,16
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r6,r20,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 15) & 0xFFFF8000;
	// srawi r3,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 8;
	// stwx r21,r16,r26
	REX_STORE_U32(ctx.r16.u32 + ctx.r26.u32, ctx.r21.u32);
	// stwx r21,r16,r15
	REX_STORE_U32(ctx.r16.u32 + ctx.r15.u32, ctx.r21.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r6,r16,r29
	REX_STORE_U32(ctx.r16.u32 + ctx.r29.u32, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r6,r16,r30
	REX_STORE_U32(ctx.r16.u32 + ctx.r30.u32, ctx.r6.u32);
	// stwx r3,r16,r4
	REX_STORE_U32(ctx.r16.u32 + ctx.r4.u32, ctx.r3.u32);
	// stwx r25,r16,r7
	REX_STORE_U32(ctx.r16.u32 + ctx.r7.u32, ctx.r25.u32);
	// bdnz 0x899a82ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899A82EC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r22,r22,17
	ctx.r22.s64 = ctx.r22.s64 + 17;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// blt cr6,0x899a82c8
	if (ctx.cr6.lt) goto loc_899A82C8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A9710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899A9718;
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
	// bgt cr6,0x899a97f8
	if (ctx.cr6.gt) goto loc_899A97F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899a97d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A97D0;
	// bdzf 4*cr6+eq,0x899a97f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A97F8;
	// bdzf 4*cr6+eq,0x899a97f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A97F8;
	// bdzf 4*cr6+eq,0x899a97e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A97E0;
	// bdzf 4*cr6+eq,0x899a97e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A97E0;
	// bne cr6,0x899a9808
	if (!ctx.cr6.eq) goto loc_899A9808;
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
	// addi r4,r9,-8136
	ctx.r4.s64 = ctx.r9.s64 + -8136;
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
loc_899A97D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899a9638
	ctx.lr = 0x899A97D8;
	sub_899A9638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899A97E0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
loc_899A97F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899A97F8;
	sub_899D4C10(ctx, base);
loc_899A97F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899A9808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A9810;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a97f8
	if (ctx.cr6.lt) goto loc_899A97F8;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899a9844
	if (!ctx.cr6.eq) goto loc_899A9844;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x899a97f0
	goto loc_899A97F0;
loc_899A9844:
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
	ctx.lr = 0x899A9878;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AB1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899AB1E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-21888
	ctx.r30.s64 = ctx.r11.s64 + -21888;
	// li r10,80
	ctx.r10.s64 = 80;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,-720
	ctx.r11.s64 = ctx.r30.s64 + -720;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,-12
	ctx.r8.s64 = -12;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899AB228;
	sub_89934FB8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r30,-720
	ctx.r9.s64 = ctx.r30.s64 + -720;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r25,r8,3484
	ctx.r25.s64 = ctx.r8.s64 + 3484;
loc_899AB240:
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
	// blt cr6,0x899ab240
	if (ctx.cr6.lt) goto loc_899AB240;
	// addi r8,r30,-384
	ctx.r8.s64 = ctx.r30.s64 + -384;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,184
	ctx.r9.s64 = 184;
	// li r8,-26
	ctx.r8.s64 = -26;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899AB2A0;
	sub_89934FB8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r5,r30,-384
	ctx.r5.s64 = ctx.r30.s64 + -384;
	// addi r28,r11,30756
	ctx.r28.s64 = ctx.r11.s64 + 30756;
	// addi r4,r30,-304
	ctx.r4.s64 = ctx.r30.s64 + -304;
	// addi r6,r28,228
	ctx.r6.s64 = ctx.r28.s64 + 228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899AB2C0;
	sub_89935688(ctx, base);
	// addi r7,r30,224
	ctx.r7.s64 = ctx.r30.s64 + 224;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x89934fb8
	ctx.lr = 0x899AB2EC;
	sub_89934FB8(ctx, base);
	// addi r6,r28,208
	ctx.r6.s64 = ctx.r28.s64 + 208;
	// addi r5,r30,224
	ctx.r5.s64 = ctx.r30.s64 + 224;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899AB304;
	sub_89935688(ctx, base);
	// addi r6,r30,-80
	ctx.r6.s64 = ctx.r30.s64 + -80;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89934fb8
	ctx.lr = 0x899AB330;
	sub_89934FB8(ctx, base);
	// addi r9,r30,-80
	ctx.r9.s64 = ctx.r30.s64 + -80;
	// addi r11,r30,-1448
	ctx.r11.s64 = ctx.r30.s64 + -1448;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899AB33C:
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
	// blt cr6,0x899ab33c
	if (ctx.cr6.lt) goto loc_899AB33C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-7944
	ctx.r10.s64 = ctx.r10.s64 + -7944;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ab404
	if (ctx.cr6.eq) goto loc_899AB404;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
loc_899AB388:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r27,14(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// lbz r8,15(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// addi r4,r30,-1760
	ctx.r4.s64 = ctx.r30.s64 + -1760;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,10(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// li r5,6
	ctx.r5.s64 = 6;
	// lbz r10,13(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r4,5
	ctx.r4.s64 = 5;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x89934b48
	ctx.lr = 0x899AB3E0;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899ab388
	if (!ctx.cr6.eq) goto loc_899AB388;
loc_899AB404:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r30,-1760
	ctx.r5.s64 = ctx.r30.s64 + -1760;
	// addi r4,r30,-1336
	ctx.r4.s64 = ctx.r30.s64 + -1336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899AB41C;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-7872
	ctx.r10.s64 = ctx.r11.s64 + -7872;
	// lbz r11,-7872(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -7872);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ab4a8
	if (ctx.cr6.eq) goto loc_899AB4A8;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899AB438:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// addi r28,r30,-640
	ctx.r28.s64 = ctx.r30.s64 + -640;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,7(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// li r4,5
	ctx.r4.s64 = 5;
	// lbzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899AB488;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 + ctx.r10.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899ab438
	if (!ctx.cr6.eq) goto loc_899AB438;
loc_899AB4A8:
	// addi r9,r30,-640
	ctx.r9.s64 = ctx.r30.s64 + -640;
	// addi r11,r30,-936
	ctx.r11.s64 = ctx.r30.s64 + -936;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899AB4B4:
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
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x899ab4b4
	if (ctx.cr6.lt) goto loc_899AB4B4;
	// addi r10,r30,-640
	ctx.r10.s64 = ctx.r30.s64 + -640;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 + 170;
loc_899AB4F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r25,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r26,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x899ab4f0
	if (ctx.cr6.lt) goto loc_899AB4F0;
	// stw r26,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AD478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899AD480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r28,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x899adaf4
	if (ctx.cr6.gt) goto loc_899ADAF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ad604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD604;
	// bdzf 4*cr6+eq,0x899ad870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD870;
	// bne cr6,0x899ad9e0
	if (!ctx.cr6.eq) goto loc_899AD9E0;
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x899ad5e8
	if (ctx.cr6.gt) goto loc_899AD5E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ad50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD50C;
	// bdzf 4*cr6+eq,0x899ad53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD53C;
	// bdzf 4*cr6+eq,0x899ad578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD578;
	// bne cr6,0x899ad5a8
	if (!ctx.cr6.eq) goto loc_899AD5A8;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899ad5e8
	if (!ctx.cr6.lt) goto loc_899AD5E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x899ad5e8
	goto loc_899AD5E8;
loc_899AD50C:
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addic. r11,r11,-4096
	ctx.xer.ca = ctx.r11.u32 > 4095;
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bne 0x899ad5e8
	if (!ctx.cr0.eq) goto loc_899AD5E8;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899ad5e8
	goto loc_899AD5E8;
loc_899AD53C:
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
	// cmplwi cr6,r7,60
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 60, ctx.xer);
	// blt cr6,0x899ad5e8
	if (ctx.cr6.lt) goto loc_899AD5E8;
	// addi r8,r30,71
	ctx.r8.s64 = ctx.r30.s64 + 71;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899ad5e8
	goto loc_899AD5E8;
loc_899AD578:
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
	// bgt cr6,0x899ad5e8
	if (ctx.cr6.gt) goto loc_899AD5E8;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899ad5e8
	goto loc_899AD5E8;
loc_899AD5A8:
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
	// li r4,-128
	ctx.r4.s64 = -128;
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
loc_899AD5E8:
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
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD604:
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x899adaf4
	if (ctx.cr6.gt) goto loc_899ADAF4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ad680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD680;
	// bdzf 4*cr6+eq,0x899ad6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD6B4;
	// bdzf 4*cr6+eq,0x899ad718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD718;
	// bdzf 4*cr6+eq,0x899ad734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD734;
	// bdzf 4*cr6+eq,0x899ad770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD770;
	// bdzf 4*cr6+eq,0x899ad7b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD7B4;
	// bdzf 4*cr6+eq,0x899ad808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD808;
	// bne cr6,0x899ad83c
	if (!ctx.cr6.eq) goto loc_899AD83C;
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// ble cr6,0x899ad668
	if (!ctx.cr6.gt) goto loc_899AD668;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD668:
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r8,6
	ctx.r8.s64 = 6;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD680:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,256
	ctx.r4.s64 = 256;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x899AD6A4;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD6B4:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899ad6d0
	if (!ctx.cr6.lt) goto loc_899AD6D0;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899AD6D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x899AD6D8;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899ad708
	if (!ctx.cr6.eq) goto loc_899AD708;
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
	// cmplwi cr6,r9,20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20, ctx.xer);
	// blt cr6,0x899adaf4
	if (ctx.cr6.lt) goto loc_899ADAF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899AD708:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD718:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899ad830
	if (ctx.cr6.eq) goto loc_899AD830;
	// addi r11,r10,-16384
	ctx.r11.s64 = ctx.r10.s64 + -16384;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD734:
	// addi r9,r30,197
	ctx.r9.s64 = ctx.r30.s64 + 197;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899adaf4
	if (!ctx.cr6.eq) goto loc_899ADAF4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD770:
	// addi r10,r30,197
	ctx.r10.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899adaf4
	if (!ctx.cr6.eq) goto loc_899ADAF4;
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD7B4:
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r7,r8,-6320
	ctx.r7.s64 = ctx.r8.s64 + -6320;
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r5,r6,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// lhzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// sthx r3,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u16);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x899adaf4
	if (ctx.cr6.lt) goto loc_899ADAF4;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// sthx r7,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u16);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD808:
	// addi r10,r30,197
	ctx.r10.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899adaf4
	if (!ctx.cr6.eq) goto loc_899ADAF4;
loc_899AD830:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD83C:
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ad858
	if (ctx.cr6.eq) goto loc_899AD858;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD858:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// stbx r9,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD870:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x899adaf4
	if (ctx.cr6.gt) goto loc_899ADAF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ad8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD8B4;
	// bdzf 4*cr6+eq,0x899ad8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD8DC;
	// bdzf 4*cr6+eq,0x899ad950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AD950;
	// bne cr6,0x899ad98c
	if (!ctx.cr6.eq) goto loc_899AD98C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
loc_899AD8B4:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x899AD8CC;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD8DC:
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
	// bge cr6,0x899ad8fc
	if (!ctx.cr6.lt) goto loc_899AD8FC;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_899AD8FC:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x899ad92c
	if (ctx.cr6.lt) goto loc_899AD92C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD92C:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991d8e0
	ctx.lr = 0x899AD934;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899adaf4
	if (ctx.cr6.eq) goto loc_899ADAF4;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD950:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ad96c
	if (ctx.cr6.eq) goto loc_899AD96C;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD96C:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r6,r7,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD98C:
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
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// blt cr6,0x899adaf4
	if (ctx.cr6.lt) goto loc_899ADAF4;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,7200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7200, ctx.xer);
	// ble cr6,0x899ad9d4
	if (!ctx.cr6.gt) goto loc_899AD9D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD9D4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899AD9E0:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899adaf4
	if (ctx.cr6.gt) goto loc_899ADAF4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ada3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ADA3C;
	// bdzf 4*cr6+eq,0x899ada78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ADA78;
	// bne cr6,0x899adaac
	if (!ctx.cr6.eq) goto loc_899ADAAC;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r7,r30,193
	ctx.r7.s64 = ctx.r30.s64 + 193;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stbx r3,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u8);
	// ori r7,r11,2
	ctx.r7.u64 = ctx.r11.u64 | 2;
	// sthx r4,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899ADA3C:
	// addi r8,r30,197
	ctx.r8.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// and r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899adaf4
	if (!ctx.cr6.eq) goto loc_899ADAF4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899ADA78:
	// addi r9,r30,197
	ctx.r9.s64 = ctx.r30.s64 + 197;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899adaf4
	if (!ctx.cr6.eq) goto loc_899ADAF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899adaf4
	goto loc_899ADAF4;
loc_899ADAAC:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899adac8
	if (!ctx.cr6.lt) goto loc_899ADAC8;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899ADAC8:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-96
	ctx.r10.s64 = -6291456;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899adaf4
	if (ctx.cr6.gt) goto loc_899ADAF4;
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
loc_899ADAF4:
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

DEFINE_REX_FUNC(sub_899B2F88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899B2F90;
	__savegprlr_27(ctx, base);
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
	// blt cr6,0x899b3208
	if (ctx.cr6.lt) goto loc_899B3208;
	// beq cr6,0x899b3080
	if (ctx.cr6.eq) goto loc_899B3080;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x899b32e4
	if (!ctx.cr6.lt) goto loc_899B32E4;
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b3060
	if (ctx.cr6.lt) goto loc_899B3060;
	// beq cr6,0x899b3030
	if (ctx.cr6.eq) goto loc_899B3030;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b32e4
	if (!ctx.cr6.lt) goto loc_899B32E4;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899b3000
	if (!ctx.cr6.gt) goto loc_899B3000;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B3000:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b32e4
	if (ctx.cr6.gt) goto loc_899B32E4;
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
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3030:
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
	// blt cr6,0x899b32e4
	if (ctx.cr6.lt) goto loc_899B32E4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3060:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,-6
	ctx.r8.s64 = -6;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3080:
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899b32e4
	if (ctx.cr6.gt) goto loc_899B32E4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b3134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B3134;
	// bdzf 4*cr6+eq,0x899b3188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B3188;
	// bne cr6,0x899b31c8
	if (!ctx.cr6.eq) goto loc_899B31C8;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// bl 0x8991d830
	ctx.lr = 0x899B30CC;
	sub_8991D830(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,104
	ctx.r7.s64 = ctx.r30.s64 + 104;
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r6,-56
	ctx.r6.s64 = -56;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwzx r27,r31,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// lbzx r28,r31,r29
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r3,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 7;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// srawi r10,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 7;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3134:
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// blt cr6,0x899b32e4
	if (ctx.cr6.lt) goto loc_899B32E4;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// rlwimi r4,r5,4,0,28
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3188:
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
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x899b32e4
	if (ctx.cr6.lt) goto loc_899B32E4;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,28,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899b32e0
	goto loc_899B32E0;
loc_899B31C8:
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
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x899b32e4
	if (ctx.cr6.lt) goto loc_899B32E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,10800
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10800, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// ble cr6,0x899b3200
	if (!ctx.cr6.gt) goto loc_899B3200;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u8);
loc_899B3200:
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899b32e4
	goto loc_899B32E4;
loc_899B3208:
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b32ac
	if (ctx.cr6.lt) goto loc_899B32AC;
	// beq cr6,0x899b327c
	if (ctx.cr6.eq) goto loc_899B327C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b32cc
	if (!ctx.cr6.lt) goto loc_899B32CC;
	// addi r10,r30,71
	ctx.r10.s64 = ctx.r30.s64 + 71;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bgt cr6,0x899b32cc
	if (ctx.cr6.gt) goto loc_899B32CC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r5,r30,164
	ctx.r5.s64 = ctx.r30.s64 + 164;
	// li r3,128
	ctx.r3.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// rlwinm r7,r7,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stbx r4,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u8);
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// b 0x899b32cc
	goto loc_899B32CC;
loc_899B327C:
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addic. r11,r11,4096
	ctx.xer.ca = ctx.r11.u32 > 4294963199;
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x899b32cc
	if (!ctx.cr0.eq) goto loc_899B32CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r30,71
	ctx.r10.s64 = ctx.r30.s64 + 71;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r7,255
	ctx.r7.s64 = 255;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899b32cc
	goto loc_899B32CC;
loc_899B32AC:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899b32cc
	if (!ctx.cr6.lt) goto loc_899B32CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_899B32CC:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// addi r10,r30,70
	ctx.r10.s64 = ctx.r30.s64 + 70;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
loc_899B32E0:
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899B32E4:
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
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B5DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899B5DA8;
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
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x899b7368
	if (ctx.cr6.gt) goto loc_899B7368;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24040
	ctx.r12.s64 = ctx.r12.s64 + 24040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B5E1C;
	case 1:
		goto loc_899B6138;
	case 2:
		goto loc_899B6158;
	case 3:
		goto loc_899B627C;
	case 4:
		goto loc_899B626C;
	case 5:
		goto loc_899B60B4;
	case 6:
		goto loc_899B6504;
	case 7:
		goto loc_899B652C;
	case 8:
		goto loc_899B66D4;
	case 9:
		goto loc_899B6960;
	case 10:
		goto loc_899B6AB8;
	case 11:
		goto loc_899B6D20;
	case 12:
		goto loc_899B6EC0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B5E1C:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b5f70
	if (ctx.cr6.eq) goto loc_899B5F70;
	// bl 0x899b56b0
	ctx.lr = 0x899B5E34;
	sub_899B56B0(ctx, base);
	// addi r29,r30,190
	ctx.r29.s64 = ctx.r30.s64 + 190;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899b7368
	if (ctx.cr6.gt) goto loc_899B7368;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b5e84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5E84;
	// bdzf 4*cr6+eq,0x899b5f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5F3C;
	// bne cr6,0x899b65c0
	if (!ctx.cr6.eq) goto loc_899B65C0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B5E84:
	// li r10,-27
	ctx.r10.s64 = -27;
	// li r9,-80
	ctx.r9.s64 = -80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x899B5EA8;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b5ec4
	if (ctx.cr6.eq) goto loc_899B5EC4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B5EC4:
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,-80
	ctx.r9.s64 = -80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x899B5EE8;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b5f04
	if (ctx.cr6.eq) goto loc_899B5F04;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B5F04:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B5F3C:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B5F70:
	// bl 0x8991c8b8
	ctx.lr = 0x899B5F74;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899b5f88
	if (!ctx.cr6.eq) goto loc_899B5F88;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899B5F88;
	sub_89936360(ctx, base);
loc_899B5F88:
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b5fb8
	if (!ctx.cr6.eq) goto loc_899B5FB8;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// li r3,4
	ctx.r3.s64 = 4;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x8992e330
	ctx.lr = 0x899B5FB8;
	sub_8992E330(ctx, base);
loc_899B5FB8:
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
	// blt cr6,0x899b7368
	if (ctx.cr6.lt) goto loc_899B7368;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r4,9016
	ctx.r8.s64 = ctx.r4.s64 + 9016;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r6,17
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lhzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r11,r10,7,10,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F0000;
	// lhzx r9,r4,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mullw r4,r7,r10
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// addi r4,r30,207
	ctx.r4.s64 = ctx.r30.s64 + 207;
	// addi r30,r5,-2444
	ctx.r30.s64 = ctx.r5.s64 + -2444;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r29,r6,19,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x3;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// li r8,116
	ctx.r8.s64 = 116;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r4,r29,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x899d4440
	ctx.lr = 0x899B60AC;
	sub_899D4440(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B60B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B60BC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B60D4;
	sub_899A9F48(ctx, base);
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
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6138:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899aa060
	ctx.lr = 0x899B6140;
	sub_899AA060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
loc_899B6148:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_899B614C:
	// bl 0x899b5450
	ctx.lr = 0x899B6150;
	sub_899B5450(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6158:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6160;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B6178;
	sub_899A9F48(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b61c8
	if (ctx.cr6.eq) goto loc_899B61C8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899b6204
	if (!ctx.cr6.eq) goto loc_899B6204;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x899b6204
	if (!ctx.cr6.lt) goto loc_899B6204;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r28,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B61B8;
	sub_8991B610(ctx, base);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// sthx r28,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B61C8:
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
	// bne cr6,0x899b61f0
	if (!ctx.cr6.eq) goto loc_899B61F0;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
loc_899B61F0:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899B61F8;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B6204:
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
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B626C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899aa4a0
	ctx.lr = 0x899B6274;
	sub_899AA4A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B627C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6284;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B629C;
	sub_899A9F48(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899b6148
	if (ctx.cr6.eq) goto loc_899B6148;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899b7368
	if (ctx.cr6.gt) goto loc_899B7368;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b6378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B6378;
	// bdzf 4*cr6+eq,0x899b63d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B63D8;
	// bne cr6,0x899b64a0
	if (!ctx.cr6.eq) goto loc_899B64A0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_899B62E8:
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,18
	ctx.r7.s64 = 18;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899cfa40
	ctx.lr = 0x899B6310;
	sub_899CFA40(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899b632c
	if (ctx.cr6.eq) goto loc_899B632C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B632C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x899b62e8
	if (ctx.cr6.lt) goto loc_899B62E8;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6378:
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
	// cmplwi cr6,r8,90
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 90, ctx.xer);
	// blt cr6,0x899b7368
	if (ctx.cr6.lt) goto loc_899B7368;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r5,r30,160
	ctx.r5.s64 = ctx.r30.s64 + 160;
	// addi r6,r8,-2440
	ctx.r6.s64 = ctx.r8.s64 + -2440;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r8,1,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x2;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lhzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// sthx r6,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B63D8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b647c
	if (ctx.cr6.eq) goto loc_899B647C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x899b647c
	if (ctx.cr6.lt) goto loc_899B647C;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r4,r10,0,26,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x38;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B647C:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B64A0:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// rlwinm r6,r8,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B64F0;
	sub_8991B610(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6504:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B650C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B6524;
	sub_899A9F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B652C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6534;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B654C;
	sub_899A9F48(ctx, base);
	// mulli r8,r29,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b6650
	if (ctx.cr6.lt) goto loc_899B6650;
	// beq cr6,0x899b65a4
	if (ctx.cr6.eq) goto loc_899B65A4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b7368
	if (!ctx.cr6.lt) goto loc_899B7368;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B65A4:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899b6610
	if (ctx.cr6.lt) goto loc_899B6610;
	// beq cr6,0x899b65e0
	if (ctx.cr6.eq) goto loc_899B65E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899b7368
	if (!ctx.cr6.lt) goto loc_899B7368;
loc_899B65C0:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B65E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899b5cb8
	ctx.lr = 0x899B65E8;
	sub_899B5CB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6610:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899b6680
	if (ctx.cr6.eq) goto loc_899B6680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B6634;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6650:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b66a0
	if (ctx.cr6.eq) goto loc_899B66A0;
loc_899B6680:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B66A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B66B0;
	sub_8991B610(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B66D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B66DC;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B66F4;
	sub_899A9F48(ctx, base);
	// mulli r7,r29,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b6720
	if (!ctx.cr6.eq) goto loc_899B6720;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6720:
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899b6774
	if (ctx.cr6.lt) goto loc_899B6774;
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B676C;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6774:
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b68a4
	if (ctx.cr6.eq) goto loc_899B68A4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x899b68d4
	if (!ctx.cr6.eq) goto loc_899B68D4;
	// addi r27,r30,189
	ctx.r27.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b6804
	if (ctx.cr6.lt) goto loc_899B6804;
	// beq cr6,0x899b67d0
	if (ctx.cr6.eq) goto loc_899B67D0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b7368
	if (!ctx.cr6.lt) goto loc_899B7368;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// b 0x899b68f8
	goto loc_899B68F8;
loc_899B67D0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6804:
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-2436
	ctx.r29.s64 = ctx.r11.s64 + -2436;
loc_899B6810:
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// li r7,18
	ctx.r7.s64 = 18;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x899cfa40
	ctx.lr = 0x899B6834;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b6850
	if (ctx.cr6.eq) goto loc_899B6850;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B6850:
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x899b6810
	if (ctx.cr6.lt) goto loc_899B6810;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B68A4:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,32768
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32768, ctx.xer);
	// blt cr6,0x899b68d4
	if (ctx.cr6.lt) goto loc_899B68D4;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B68D4:
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
	// blt cr6,0x899b7368
	if (ctx.cr6.lt) goto loc_899B7368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899B68F8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6960:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6968;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B6980;
	sub_899A9F48(ctx, base);
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
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b6a00
	if (ctx.cr6.eq) goto loc_899B6A00;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x899b69e0
	if (ctx.cr6.eq) goto loc_899B69E0;
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
	// blt cr6,0x899b7368
	if (ctx.cr6.lt) goto loc_899B7368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899b6a2c
	goto loc_899B6A2C;
loc_899B69E0:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x899b6a24
	goto loc_899B6A24;
loc_899B6A00:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x899B6A20;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_899B6A24:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B6A2C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
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
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
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
	// beq 0x899b6a98
	if (ctx.cr0.eq) goto loc_899B6A98;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
loc_899B6A98:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6AB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6AC0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B6AD8;
	sub_899A9F48(ctx, base);
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
	// beq cr6,0x899b7368
	if (ctx.cr6.eq) goto loc_899B7368;
	// addi r7,r30,188
	ctx.r7.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b6ce0
	if (ctx.cr6.lt) goto loc_899B6CE0;
	// beq cr6,0x899b6b88
	if (ctx.cr6.eq) goto loc_899B6B88;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b6d10
	if (!ctx.cr6.lt) goto loc_899B6D10;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
loc_899B6B2C:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899b6b40
	if (!ctx.cr6.gt) goto loc_899B6B40;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899B6B40:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x899b6b54
	if (!ctx.cr6.lt) goto loc_899B6B54;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_899B6B54:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x899b6b2c
	if (ctx.cr6.lt) goto loc_899B6B2C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x899b6d10
	if (!ctx.cr6.eq) goto loc_899B6D10;
	// stbx r28,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x899B6B80;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6B88:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b6bb8
	if (!ctx.cr6.eq) goto loc_899B6BB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
loc_899B6BB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899B6BC0;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899B6BCC;
	sub_89932D30(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B6BDC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b6d10
	if (ctx.cr6.eq) goto loc_899B6D10;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r9,9016
	ctx.r27.s64 = ctx.r9.s64 + 9016;
	// addi r29,r10,-2416
	ctx.r29.s64 = ctx.r10.s64 + -2416;
loc_899B6BFC:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// rlwinm r7,r28,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,6
	ctx.r6.s64 = ctx.r29.s64 + 6;
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lhzx r24,r7,r29
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// lhzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// rotlwi r23,r8,16
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r22,r11,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r7,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rotlwi r7,r24,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r24.u32, 16);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// srawi r11,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 4;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhzx r24,r22,r27
	ctx.r24.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r27.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// mullw r24,r10,r24
	ctx.r24.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// srawi r11,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r7,r3,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// mulli r3,r11,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899cda00
	ctx.lr = 0x899B6CBC;
	sub_899CDA00(ctx, base);
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x899b6bfc
	if (ctx.cr6.lt) goto loc_899B6BFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x899B6CD8;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6CE0:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899b6d10
	if (ctx.cr6.eq) goto loc_899B6D10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
loc_899B6D10:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x899B6D18;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6D20:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6D28;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b6148
	if (ctx.cr6.lt) goto loc_899B6148;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r3,r30,158
	ctx.r3.s64 = ctx.r30.s64 + 158;
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r7,r6,9016
	ctx.r7.s64 = ctx.r6.s64 + 9016;
	// lhzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// lwzx r6,r31,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// sthx r4,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u16);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r3,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lhzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// mulli r7,r3,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(224));
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r3,r28,r10
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subfc r10,r6,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r6.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// eqv r8,r6,r4
	ctx.r8.u64 = ~(ctx.r6.u64 ^ ctx.r4.u64);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// rlwinm r4,r8,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// subf r6,r8,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stbx r6,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6EC0:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x899b7368
	if (ctx.cr6.gt) goto loc_899B7368;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28392
	ctx.r12.s64 = ctx.r12.s64 + 28392;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B6F18;
	case 1:
		goto loc_899B6FE8;
	case 2:
		goto loc_899B6FE8;
	case 3:
		goto loc_899B6FE8;
	case 4:
		goto loc_899B710C;
	case 5:
		goto loc_899B710C;
	case 6:
		goto loc_899B710C;
	case 7:
		goto loc_899B710C;
	case 8:
		goto loc_899B710C;
	case 9:
		goto loc_899B710C;
	case 10:
		goto loc_899B710C;
	case 11:
		goto loc_899B710C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B6F18:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6F20;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B6F38;
	sub_899A9F48(ctx, base);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-18
	ctx.r10.s64 = -1179648;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -65536;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B6FE8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B6FF0;
	sub_8991B9F0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x899b614c
	if (ctx.cr6.lt) goto loc_899B614C;
	// bl 0x899a9f48
	ctx.lr = 0x899B7008;
	sub_899A9F48(ctx, base);
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
	// blt cr6,0x899b7368
	if (ctx.cr6.lt) goto loc_899B7368;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// stwx r4,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bne cr6,0x899b7368
	if (!ctx.cr6.eq) goto loc_899B7368;
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// stbx r28,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// oris r11,r3,176
	ctx.r11.u64 = ctx.r3.u64 | 11534336;
	// sthx r5,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u16);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r28,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// stwx r28,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B710C:
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r11,183(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 183);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x899b7254
	if (ctx.cr6.eq) goto loc_899B7254;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,183(r28)
	REX_STORE_U8(ctx.r28.u32 + 183, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899B712C;
	sub_89932B18(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r7,158(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 158);
	// addi r11,r9,25128
	ctx.r11.s64 = ctx.r9.s64 + 25128;
	// lwz r4,52(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// mulli r5,r8,696
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// lwzx r6,r5,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x89932c20
	ctx.lr = 0x899B7160;
	sub_89932C20(ctx, base);
	// subf r8,r3,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r3.u64;
	// clrlwi r11,r8,23
	ctx.r11.u64 = ctx.r8.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x899b717c
	if (!ctx.cr6.lt) goto loc_899B717C;
	// addi r10,r27,-3
	ctx.r10.s64 = ctx.r27.s64 + -3;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// sth r10,158(r28)
	REX_STORE_U16(ctx.r28.u32 + 158, ctx.r10.u16);
loc_899B717C:
	// ble cr6,0x899b718c
	if (!ctx.cr6.gt) goto loc_899B718C;
	// lhz r10,158(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 158);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// sth r9,158(r28)
	REX_STORE_U16(ctx.r28.u32 + 158, ctx.r9.u16);
loc_899B718C:
	// li r10,16
	ctx.r10.s64 = 16;
	// lbz r8,183(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 183);
	// li r9,496
	ctx.r9.s64 = 496;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// eqv r5,r11,r9
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addi r3,r8,-255
	ctx.r3.s64 = ctx.r8.s64 + -255;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// subfc r9,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r5,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// or r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 | ctx.r3.u64;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,164(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 164);
	// beq cr6,0x899b71f4
	if (ctx.cr6.eq) goto loc_899B71F4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899b7208
	if (!ctx.cr6.lt) goto loc_899B7208;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// b 0x899b7204
	goto loc_899B7204;
loc_899B71F4:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899b7208
	if (!ctx.cr6.gt) goto loc_899B7208;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
loc_899B7204:
	// stw r11,168(r28)
	REX_STORE_U32(ctx.r28.u32 + 168, ctx.r11.u32);
loc_899B7208:
	// lhz r11,158(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 158);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwz r9,168(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 168);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// rlwinm r6,r11,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lhzx r4,r6,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// lhzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// stw r6,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r6.u32);
	// stw r5,60(r28)
	REX_STORE_U32(ctx.r28.u32 + 60, ctx.r5.u32);
loc_899B7254:
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899b7274
	if (!ctx.cr0.lt) goto loc_899B7274;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899B7274:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899b7290
	if (!ctx.cr6.gt) goto loc_899B7290;
loc_899B7280:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899B7290:
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwz r10,52(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-21584(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// stw r11,52(r28)
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899b72bc
	if (!ctx.cr0.lt) goto loc_899B72BC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899B72BC:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b7280
	if (ctx.cr6.gt) goto loc_899B7280;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x899b72e4
	if (ctx.cr6.lt) goto loc_899B72E4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
loc_899B72E4:
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
loc_899B7368:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C88D8) {
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
	ctx.lr = 0x899C88F0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8908
	if (!ctx.cr6.eq) goto loc_899C8908;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C8908:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// bl 0x89915de0
	ctx.lr = 0x899C8914;
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

DEFINE_REX_FUNC(sub_899C8B30) {
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
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,-31231
	ctx.r10.s64 = -31231;
	// addi r31,r11,25624
	ctx.r31.s64 = ctx.r11.s64 + 25624;
	// li r9,200
	ctx.r9.s64 = 200;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,-312
	ctx.r8.s64 = ctx.r31.s64 + -312;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,136
	ctx.r10.s64 = 136;
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
	ctx.lr = 0x899C8B84;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,-312
	ctx.r5.s64 = ctx.r31.s64 + -312;
	// addi r6,r7,17560
	ctx.r6.s64 = ctx.r7.s64 + 17560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899C8BA0;
	sub_89935B08(ctx, base);
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

DEFINE_REX_FUNC(sub_899C8E90) {
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
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r31,r11,26816
	ctx.r31.s64 = ctx.r11.s64 + 26816;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,-576
	ctx.r8.s64 = ctx.r31.s64 + -576;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,216
	ctx.r10.s64 = 216;
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x899C8EE8;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,-576
	ctx.r5.s64 = ctx.r31.s64 + -576;
	// addi r30,r7,17488
	ctx.r30.s64 = ctx.r7.s64 + 17488;
	// addi r4,r31,-792
	ctx.r4.s64 = ctx.r31.s64 + -792;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899C8F08;
	sub_89935610(ctx, base);
	// addi r11,r31,-576
	ctx.r11.s64 = ctx.r31.s64 + -576;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899C8F24;
	sub_89935610(ctx, base);
	// addi r10,r31,-576
	ctx.r10.s64 = ctx.r31.s64 + -576;
	// addi r11,r31,-792
	ctx.r11.s64 = ctx.r31.s64 + -792;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,432
	ctx.r5.s64 = ctx.r10.s64 + 432;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899C8F44;
	sub_89935610(ctx, base);
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

DEFINE_REX_FUNC(sub_899C9500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C9508;
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
	ctx.lr = 0x899C9518;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c9528
	if (!ctx.cr6.eq) goto loc_899C9528;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C9528:
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
	ctx.lr = 0x899C957C;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C959C;
	sub_8991C578(ctx, base);
	// addi r9,r31,162
	ctx.r9.s64 = ctx.r31.s64 + 162;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r10,256
	ctx.r10.s64 = 256;
	// ori r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 32768;
	// li r11,115
	ctx.r11.s64 = 115;
	// sthx r10,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r10.u16);
	// stwx r5,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r5.u32);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// stbx r11,r28,r4
	REX_STORE_U8(ctx.r28.u32 + ctx.r4.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r11,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// sthx r10,r28,r8
	REX_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r10.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899C95E8;
	sub_899C3D90(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x899C95F0;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CA4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899CA4D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r28,r11,12800
	ctx.r28.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r10,r28,188
	ctx.r10.s64 = ctx.r28.s64 + 188;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899ca600
	if (ctx.cr6.lt) goto loc_899CA600;
	// beq cr6,0x899ca5dc
	if (ctx.cr6.eq) goto loc_899CA5DC;
	// addi r10,r28,183
	ctx.r10.s64 = ctx.r28.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x899ca64c
	if (ctx.cr6.eq) goto loc_899CA64C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899CA51C;
	sub_89932B18(ctx, base);
	// addi r8,r28,186
	ctx.r8.s64 = ctx.r28.s64 + 186;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r29,r28,158
	ctx.r29.s64 = ctx.r28.s64 + 158;
	// addi r11,r7,25128
	ctx.r11.s64 = ctx.r7.s64 + 25128;
	// addi r6,r28,52
	ctx.r6.s64 = ctx.r28.s64 + 52;
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
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// lhzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// bl 0x89932c20
	ctx.lr = 0x899CA560;
	sub_89932C20(ctx, base);
	// subf r6,r3,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ca584
	if (ctx.cr6.eq) goto loc_899CA584;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// bgt cr6,0x899ca580
	if (ctx.cr6.gt) goto loc_899CA580;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
loc_899CA580:
	// sthx r10,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u16);
loc_899CA584:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899ca590
	if (!ctx.cr0.lt) goto loc_899CA590;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CA590:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// addi r10,r28,168
	ctx.r10.s64 = ctx.r28.s64 + 168;
	// ble cr6,0x899ca5bc
	if (!ctx.cr6.gt) goto loc_899CA5BC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899ca64c
	if (!ctx.cr6.lt) goto loc_899CA64C;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899ca64c
	goto loc_899CA64C;
loc_899CA5BC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899ca64c
	if (!ctx.cr6.gt) goto loc_899CA64C;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899ca64c
	goto loc_899CA64C;
loc_899CA5DC:
	// addi r9,r28,164
	ctx.r9.s64 = ctx.r28.s64 + 164;
	// addi r8,r28,48
	ctx.r8.s64 = ctx.r28.s64 + 48;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x899ca64c
	if (!ctx.cr6.lt) goto loc_899CA64C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899ca64c
	goto loc_899CA64C;
loc_899CA600:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r4,r28,164
	ctx.r4.s64 = ctx.r28.s64 + 164;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,23,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFFFF;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
loc_899CA64C:
	// addi r10,r28,158
	ctx.r10.s64 = ctx.r28.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r28,168
	ctx.r9.s64 = ctx.r28.s64 + 168;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// addi r27,r28,48
	ctx.r27.s64 = ctx.r28.s64 + 48;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r26,r28,52
	ctx.r26.s64 = ctx.r28.s64 + 52;
	// addi r7,r28,56
	ctx.r7.s64 = ctx.r28.s64 + 56;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r28,60
	ctx.r5.s64 = ctx.r28.s64 + 60;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r3,r11,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// lhzx r6,r3,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// lhzx r4,r10,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// lhzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addic. r11,r7,-160
	ctx.xer.ca = ctx.r7.u32 > 159;
	ctx.r11.s64 = ctx.r7.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bge 0x899ca6dc
	if (!ctx.cr0.lt) goto loc_899CA6DC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CA6DC:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899ca6f4
	if (!ctx.cr6.gt) goto loc_899CA6F4;
loc_899CA6E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899CA6F4:
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899ca708
	if (!ctx.cr0.lt) goto loc_899CA708;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CA708:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899ca6e4
	if (ctx.cr6.gt) goto loc_899CA6E4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8991b770
	ctx.lr = 0x899CA718;
	sub_8991B770(ctx, base);
	// addi r20,r28,8
	ctx.r20.s64 = ctx.r28.s64 + 8;
	// lwzx r11,r31,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899ca884
	if (ctx.cr6.gt) goto loc_899CA884;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ca76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CA76C;
	// bdzf 4*cr6+eq,0x899ca76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CA76C;
	// bne cr6,0x899ca794
	if (!ctx.cr6.eq) goto loc_899CA794;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8991db50
	ctx.lr = 0x899CA74C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ca884
	if (ctx.cr6.eq) goto loc_899CA884;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899CA75C;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ca884
	if (ctx.cr6.eq) goto loc_899CA884;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x899ca85c
	goto loc_899CA85C;
loc_899CA76C:
	// addi r11,r28,185
	ctx.r11.s64 = ctx.r28.s64 + 185;
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
	// bne cr6,0x899ca884
	if (!ctx.cr6.eq) goto loc_899CA884;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899ca864
	goto loc_899CA864;
loc_899CA794:
	// addi r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// addi r23,r9,2844
	ctx.r23.s64 = ctx.r9.s64 + 2844;
	// addi r7,r25,128
	ctx.r7.s64 = ctx.r25.s64 + 128;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// rlwinm r21,r7,1,22,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r22,r10,2836
	ctx.r22.s64 = ctx.r10.s64 + 2836;
loc_899CA7C8:
	// rlwinm r6,r24,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r21,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r29.u32);
	// lwzx r4,r11,r22
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lwzx r5,r31,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// srawi r9,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 4;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r3,r6,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r6,r7,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r3,r3,13,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cbd98
	ctx.lr = 0x899CA840;
	sub_899CBD98(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899ca7c8
	if (ctx.cr6.lt) goto loc_899CA7C8;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_899CA85C:
	// addi r11,r28,160
	ctx.r11.s64 = ctx.r28.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899CA864:
	// addi r11,r28,160
	ctx.r11.s64 = ctx.r28.s64 + 160;
	// lwzx r10,r31,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899CA884;
	sub_8991B610(ctx, base);
loc_899CA884:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CD370) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x899cd5a4
	if (ctx.cr6.gt) goto loc_899CD5A4;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11372
	ctx.r12.s64 = ctx.r12.s64 + -11372;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899CD404;
	case 1:
		goto loc_899CD5A4;
	case 2:
		goto loc_899CD5A4;
	case 3:
		goto loc_899CD404;
	case 4:
		goto loc_899CD5A4;
	case 5:
		goto loc_899CD5A4;
	case 6:
		goto loc_899CD404;
	case 7:
		goto loc_899CD5A4;
	case 8:
		goto loc_899CD5A4;
	case 9:
		goto loc_899CD404;
	case 10:
		goto loc_899CD5A4;
	case 11:
		goto loc_899CD5A4;
	case 12:
		goto loc_899CD49C;
	case 13:
		goto loc_899CD5A4;
	case 14:
		goto loc_899CD5A4;
	case 15:
		goto loc_899CD49C;
	case 16:
		goto loc_899CD5A4;
	case 17:
		goto loc_899CD5A4;
	case 18:
		goto loc_899CD49C;
	case 19:
		goto loc_899CD5A4;
	case 20:
		goto loc_899CD5A4;
	case 21:
		goto loc_899CD49C;
	case 22:
		goto loc_899CD5A4;
	case 23:
		goto loc_899CD5A4;
	case 24:
		goto loc_899CD528;
	case 25:
		goto loc_899CD528;
	case 26:
		goto loc_899CD528;
	case 27:
		goto loc_899CD528;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899CD404:
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
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899cd490
	if (!ctx.cr6.eq) goto loc_899CD490;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cd450
	if (!ctx.cr0.lt) goto loc_899CD450;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CD450:
	// lis r9,208
	ctx.r9.s64 = 13631488;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899cd468
	if (!ctx.cr6.gt) goto loc_899CD468;
loc_899CD45C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899CD468:
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
	// bge 0x899cd484
	if (!ctx.cr0.lt) goto loc_899CD484;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CD484:
	// lis r10,168
	ctx.r10.s64 = 11010048;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cd45c
	if (ctx.cr6.gt) goto loc_899CD45C;
loc_899CD490:
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// b 0x899cd148
	sub_899CD148(ctx, base);
	return;
loc_899CD49C:
	// lbz r11,138(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r6,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r6.u8);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899cd51c
	if (!ctx.cr6.eq) goto loc_899CD51C;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cd4e8
	if (!ctx.cr0.lt) goto loc_899CD4E8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CD4E8:
	// lis r9,224
	ctx.r9.s64 = 14680064;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899cd45c
	if (ctx.cr6.gt) goto loc_899CD45C;
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
	// bge 0x899cd510
	if (!ctx.cr0.lt) goto loc_899CD510;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CD510:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cd45c
	if (ctx.cr6.gt) goto loc_899CD45C;
loc_899CD51C:
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// b 0x899cd148
	sub_899CD148(ctx, base);
	return;
loc_899CD528:
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
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
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
loc_899CD5A4:
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899cd5cc
	if (ctx.cr6.eq) goto loc_899CD5CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899cd5cc
	if (ctx.cr6.eq) goto loc_899CD5CC;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899cd5d0
	if (ctx.cr6.eq) goto loc_899CD5D0;
loc_899CD5CC:
	// b 0x899cd2d0
	sub_899CD2D0(ctx, base);
	return;
loc_899CD5D0:
	// lhz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 60);
	// lhz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r6,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r6.u16);
	// lhz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CF348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899CF350;
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
	// blt cr6,0x899cf370
	if (ctx.cr6.lt) goto loc_899CF370;
	// bl 0x899cec08
	ctx.lr = 0x899CF368;
	sub_899CEC08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899CF370:
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
	// beq cr6,0x899cf56c
	if (ctx.cr6.eq) goto loc_899CF56C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf. r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf3a0
	if (!ctx.cr0.lt) goto loc_899CF3A0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF3A0:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf568
	if (ctx.cr6.gt) goto loc_899CF568;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r27,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r27.u64;
	// subf. r11,r26,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf3c0
	if (!ctx.cr0.lt) goto loc_899CF3C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF3C0:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf568
	if (ctx.cr6.gt) goto loc_899CF568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89932ba0
	ctx.lr = 0x899CF3D4;
	sub_89932BA0(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899cf414
	if (ctx.cr6.eq) goto loc_899CF414;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r29,24
	ctx.r8.s64 = ctx.r29.s64 + 24;
	// mulli r30,r11,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf40c
	if (!ctx.cr0.lt) goto loc_899CF40C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF40C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899cf494
	if (ctx.cr6.lt) goto loc_899CF494;
loc_899CF414:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899cf448
	if (ctx.cr6.eq) goto loc_899CF448;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r29,28
	ctx.r8.s64 = ctx.r29.s64 + 28;
	// mulli r30,r11,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf440
	if (!ctx.cr0.lt) goto loc_899CF440;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF440:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899cf494
	if (ctx.cr6.lt) goto loc_899CF494;
loc_899CF448:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r29,24
	ctx.r8.s64 = ctx.r29.s64 + 24;
	// mulli r30,r11,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf468
	if (!ctx.cr0.lt) goto loc_899CF468;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF468:
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// subf. r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899cf480
	if (!ctx.cr0.lt) goto loc_899CF480;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CF480:
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf48c
	if (!ctx.cr0.lt) goto loc_899CF48C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF48C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899cf56c
	if (!ctx.cr6.lt) goto loc_899CF56C;
loc_899CF494:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89919d28
	ctx.lr = 0x899CF49C;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899cf56c
	if (ctx.cr6.eq) goto loc_899CF56C;
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
	ctx.lr = 0x899CF4C4;
	sub_89932C20(ctx, base);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lhz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// rlwinm r9,r9,0,23,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C0;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// subf. r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899cf4e4
	if (!ctx.cr0.lt) goto loc_899CF4E4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CF4E4:
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x899cf4f8
	if (!ctx.cr6.gt) goto loc_899CF4F8;
	// cmpwi cr6,r10,448
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 448, ctx.xer);
	// blt cr6,0x899cf56c
	if (ctx.cr6.lt) goto loc_899CF56C;
loc_899CF4F8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x899cf56c
	if (ctx.cr6.eq) goto loc_899CF56C;
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
	ctx.lr = 0x899CF564;
	sub_899D6BE8(ctx, base);
	// b 0x899cf56c
	goto loc_899CF56C;
loc_899CF568:
	// stb r25,138(r31)
	REX_STORE_U8(ctx.r31.u32 + 138, ctx.r25.u8);
loc_899CF56C:
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
	// bge 0x899cf588
	if (!ctx.cr0.lt) goto loc_899CF588;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CF588:
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899cf5a0
	if (!ctx.cr6.gt) goto loc_899CF5A0;
loc_899CF594:
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899CF5A0:
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
	// bge 0x899cf5c0
	if (!ctx.cr0.lt) goto loc_899CF5C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF5C0:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cf594
	if (ctx.cr6.gt) goto loc_899CF594;
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

DEFINE_REX_FUNC(sub_899D2350) {
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
	// beq cr6,0x899d2384
	if (ctx.cr6.eq) goto loc_899D2384;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d2384
	if (ctx.cr6.eq) goto loc_899D2384;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899d2390
	if (ctx.cr6.eq) goto loc_899D2390;
loc_899D2384:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D2390:
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D2A00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D2A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,384
	ctx.r11.s64 = 25165824;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899d2b14
	if (ctx.cr6.gt) goto loc_899D2B14;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899d2b14
	if (ctx.cr6.lt) goto loc_899D2B14;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899d2a58
	if (!ctx.cr6.eq) goto loc_899D2A58;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89934178
	ctx.lr = 0x899D2A44;
	sub_89934178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d2a58
	if (!ctx.cr6.eq) goto loc_899D2A58;
loc_899D2A4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899D2A58:
	// bl 0x8991a388
	ctx.lr = 0x899D2A5C;
	sub_8991A388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d2a4c
	if (ctx.cr6.eq) goto loc_899D2A4C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r7,r10,20077
	ctx.r7.u64 = ctx.r10.u64 | 20077;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lwz r10,-9212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -9212);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r10,3896(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 3896);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r6,r6,11976
	ctx.r6.s64 = ctx.r6.s64 + 11976;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r11)
	REX_STORE_U32(ctx.r11.u32 + -9212, ctx.r9.u32);
	// addi r9,r5,9656
	ctx.r9.s64 = ctx.r5.s64 + 9656;
	// ori r5,r4,16
	ctx.r5.u64 = ctx.r4.u64 | 16;
	// srawi r3,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 16;
	// li r4,33
	ctx.r4.s64 = 33;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r3,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x7;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r4,r9,76
	ctx.r4.s64 = ctx.r9.s64 + 76;
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// mulli r9,r7,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(92));
	// lwz r10,1064(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1064);
	// stw r10,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// ori r7,r5,32896
	ctx.r7.u64 = ctx.r5.u64 | 32896;
	// lwz r10,1060(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1060);
	// stw r30,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r29,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r29.u32);
	// stw r10,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stb r11,78(r8)
	REX_STORE_U8(ctx.r8.u32 + 78, ctx.r11.u8);
	// stb r11,77(r8)
	REX_STORE_U8(ctx.r8.u32 + 77, ctx.r11.u8);
	// stb r11,76(r8)
	REX_STORE_U8(ctx.r8.u32 + 76, ctx.r11.u8);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r7,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r7.u32);
	// stb r31,80(r8)
	REX_STORE_U8(ctx.r8.u32 + 80, ctx.r31.u8);
	// lbzx r5,r9,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stb r5,79(r8)
	REX_STORE_U8(ctx.r8.u32 + 79, ctx.r5.u8);
loc_899D2B14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D35B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D35B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r11,-19608
	ctx.r31.s64 = ctx.r11.s64 + -19608;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-368
	ctx.r7.s64 = ctx.r31.s64 + -368;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D35F8;
	sub_89934FB8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// addi r8,r31,-368
	ctx.r8.s64 = ctx.r31.s64 + -368;
	// addi r11,r31,-208
	ctx.r11.s64 = ctx.r31.s64 + -208;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r7,r7,3484
	ctx.r7.s64 = ctx.r7.s64 + 3484;
loc_899D3610:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x899d3610
	if (ctx.cr6.lt) goto loc_899D3610;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r10,3580
	ctx.r10.s64 = ctx.r10.s64 + 3580;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// ori r3,r10,32769
	ctx.r3.u64 = ctx.r10.u64 | 32769;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,16385
	ctx.r31.s64 = 16385;
	// ori r4,r8,49153
	ctx.r4.u64 = ctx.r8.u64 | 49153;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r10,31
	ctx.r10.s64 = 31;
loc_899D3674:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbz r29,1(r6)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// clrlwi r28,r5,16
	ctx.r28.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r31,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r31.u16);
	// stb r29,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// sth r4,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// cmplwi cr6,r28,21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 21, ctx.xer);
	// stb r29,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// stb r29,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r29.u8);
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// stb r8,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// stb r8,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// stb r8,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// stb r9,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, ctx.r9.u8);
	// stb r9,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
	// stb r9,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r9.u8);
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// stb r7,31(r11)
	REX_STORE_U8(ctx.r11.u32 + 31, ctx.r7.u8);
	// stb r7,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r7.u8);
	// stb r7,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// stb r7,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// stb r10,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// sthu r9,34(r11)
	ea = 34 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// blt cr6,0x899d3674
	if (ctx.cr6.lt) goto loc_899D3674;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D4440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899D4448;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x899d42b0
	ctx.lr = 0x899D4468;
	sub_899D42B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d4480
	if (!ctx.cr6.eq) goto loc_899D4480;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899D4480:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r24,r28,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,8704
	ctx.r27.s64 = ctx.r11.s64 + 8704;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhzx r8,r24,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x899d5a38
	ctx.lr = 0x899D44AC;
	sub_899D5A38(ctx, base);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r6,r24,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r9.u32);
	// bl 0x899d6388
	ctx.lr = 0x899D44C4;
	sub_899D6388(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4018
	ctx.lr = 0x899D44D8;
	sub_899D4018(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D4A60) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x899d4c00
	if (ctx.cr6.gt) goto loc_899D4C00;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d4b4c
	if (ctx.cr6.eq) goto loc_899D4B4C;
	// bdz 0x899d4b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4B4C;
	// bdz 0x899d4acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4ACC;
	// bdz 0x899d4acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4ACC;
	// bdz 0x899d4aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4AA4;
	// bdz 0x899d4aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4AA4;
	// bdz 0x899d4be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D4BE0;
	// b 0x899d4bf8
	goto loc_899D4BF8;
loc_899D4AA4:
	// lwz r11,36(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r10,40(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// stw r4,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r4.u32);
	// stw r3,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r3.u32);
loc_899D4ACC:
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r9,32(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r10,36(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r8,40(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r5.u32);
	// bl 0x899d3f38
	ctx.lr = 0x899D4AF8;
	sub_899D3F38(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d4b1c
	if (ctx.cr6.eq) goto loc_899D4B1C;
loc_899D4B04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899D4B1C:
	// lbz r11,78(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 78);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stb r10,78(r7)
	REX_STORE_U8(ctx.r7.u32 + 78, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d4b4c
	if (!ctx.cr6.eq) goto loc_899D4B4C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x899d3f38
	ctx.lr = 0x899D4B40;
	sub_899D3F38(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d4b04
	if (!ctx.cr6.eq) goto loc_899D4B04;
loc_899D4B4C:
	// lhz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d4b6c
	if (ctx.cr6.eq) goto loc_899D4B6C;
	// lbz r11,46(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 46);
	// addi r11,r11,242
	ctx.r11.s64 = ctx.r11.s64 + 242;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,46(r7)
	REX_STORE_U8(ctx.r7.u32 + 46, ctx.r10.u8);
	// stb r10,47(r7)
	REX_STORE_U8(ctx.r7.u32 + 47, ctx.r10.u8);
loc_899D4B6C:
	// lbz r11,76(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x899d4c00
	if (!ctx.cr6.eq) goto loc_899D4C00;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x899d4bc4
	if (!ctx.cr6.eq) goto loc_899D4BC4;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,516
	ctx.r10.s64 = 516;
	// stb r11,47(r7)
	REX_STORE_U8(ctx.r7.u32 + 47, ctx.r11.u8);
	// sth r10,44(r7)
	REX_STORE_U16(ctx.r7.u32 + 44, ctx.r10.u16);
	// stb r11,46(r7)
	REX_STORE_U8(ctx.r7.u32 + 46, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899D4BC4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899d4c00
	if (!ctx.cr6.eq) goto loc_899D4C00;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899D4BE0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x899d4720
	ctx.lr = 0x899D4BE8;
	sub_899D4720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899D4BF8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x899d4918
	ctx.lr = 0x899D4C00;
	sub_899D4918(ctx, base);
loc_899D4C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D5860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D5868;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r28,r11,-2024
	ctx.r28.s64 = ctx.r11.s64 + -2024;
	// addi r27,r9,3672
	ctx.r27.s64 = ctx.r9.s64 + 3672;
loc_899D588C:
	// addi r11,r28,-480
	ctx.r11.s64 = ctx.r28.s64 + -480;
	// lhzx r25,r10,r27
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// mulli r30,r31,240
	ctx.r30.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(240));
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,-4
	ctx.r8.s64 = -4;
	// li r7,-4
	ctx.r7.s64 = -4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899D58C8;
	sub_89934FB8(ctx, base);
	// addi r11,r28,-480
	ctx.r11.s64 = ctx.r28.s64 + -480;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r10,128
	ctx.r10.s64 = 128;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r9,112
	ctx.r9.s64 = 112;
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899D5900;
	sub_89934FB8(ctx, base);
	// addi r11,r28,-480
	ctx.r11.s64 = ctx.r28.s64 + -480;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// li r9,96
	ctx.r9.s64 = 96;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899D5938;
	sub_89934FB8(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899d588c
	if (ctx.cr6.lt) goto loc_899D588C;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r3,r10,3484
	ctx.r3.s64 = ctx.r10.s64 + 3484;
	// addi r25,r11,3676
	ctx.r25.s64 = ctx.r11.s64 + 3676;
loc_899D5964:
	// rlwinm r30,r27,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lhzx r11,r30,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r25.u32);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
loc_899D597C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_899D5994:
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,-480
	ctx.r9.s64 = ctx.r28.s64 + -480;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r7,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(108));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899d59ec
	if (!ctx.cr6.gt) goto loc_899D59EC;
	// rlwinm r7,r29,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899D59C8:
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
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899d59c8
	if (ctx.cr6.lt) goto loc_899D59C8;
loc_899D59EC:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x899d5994
	if (ctx.cr6.lt) goto loc_899D5994;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899d597c
	if (ctx.cr6.lt) goto loc_899D597C;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899d5964
	if (ctx.cr6.lt) goto loc_899D5964;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6E08) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r10,-12
	ctx.r11.s64 = ctx.r10.s64 + -12;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899d6e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E3C;
	// bdzf 4*cr6+eq,0x899d6e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E3C;
	// bdzf 4*cr6+eq,0x899d6e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E3C;
	// bdzf 4*cr6+eq,0x899d6e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E7C;
	// bdzf 4*cr6+eq,0x899d6e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E7C;
	// bdzf 4*cr6+eq,0x899d6e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D6E7C;
	// bne cr6,0x899d6e7c
	if (!ctx.cr6.eq) goto loc_899D6E7C;
loc_899D6E3C:
	// lbz r11,77(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 77);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d6e68
	if (!ctx.cr6.eq) goto loc_899D6E68;
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
loc_899D6E68:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_899D6E7C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D7970) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D7978;
	__savegprlr_29(ctx, base);
	// lhz r10,50(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,192
	ctx.r9.s64 = 192;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r31,116
	ctx.r31.s64 = 116;
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// li r30,512
	ctx.r30.s64 = 512;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r7.u32);
	// oris r29,r29,16384
	ctx.r29.u64 = ctx.r29.u64 | 1073741824;
	// stw r8,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r4,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// stw r5,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r6,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// stb r11,80(r10)
	REX_STORE_U8(ctx.r10.u32 + 80, ctx.r11.u8);
	// stb r31,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r31.u8);
	// sth r30,44(r10)
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r30.u16);
	// stb r9,46(r10)
	REX_STORE_U8(ctx.r10.u32 + 46, ctx.r9.u8);
	// stb r9,47(r10)
	REX_STORE_U8(ctx.r10.u32 + 47, ctx.r9.u8);
	// lhz r10,50(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, ctx.r7.u16);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bne cr6,0x899d79f0
	if (!ctx.cr6.eq) goto loc_899D79F0;
	// sth r11,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
loc_899D79F0:
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D7EF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d7f64
	if (ctx.cr6.eq) goto loc_899D7F64;
	// lbz r10,46(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bge cr6,0x899d7f18
	if (!ctx.cr6.lt) goto loc_899D7F18;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D7F18:
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// addi r5,r10,244
	ctx.r5.s64 = ctx.r10.s64 + 244;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
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
loc_899D7F64:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D8328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D8330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8991a058
	ctx.lr = 0x899D834C;
	sub_8991A058(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d8364
	if (!ctx.cr6.eq) goto loc_899D8364;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899D8364:
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// ori r10,r11,20077
	ctx.r10.u64 = ctx.r11.u64 | 20077;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r10,-9212(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// li r3,34
	ctx.r3.s64 = 34;
	// mullw r9,r10,r5
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lwz r10,7904(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 7904);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r10.u32);
	// srawi r5,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 16;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// srawi r3,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 16;
	// addi r4,r4,11976
	ctx.r4.s64 = ctx.r4.s64 + 11976;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// lwz r9,1096(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 1096);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// addi r3,r3,9016
	ctx.r3.s64 = ctx.r3.s64 + 9016;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,1092(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 1092);
	// rlwinm r5,r5,19,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x3;
	// addi r7,r9,-32
	ctx.r7.s64 = ctx.r9.s64 + -32;
	// stw r10,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// stw r11,44(r6)
	REX_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// ori r8,r8,32896
	ctx.r8.u64 = ctx.r8.u64 | 32896;
	// stb r11,78(r6)
	REX_STORE_U8(ctx.r6.u32 + 78, ctx.r11.u8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stb r11,77(r6)
	REX_STORE_U8(ctx.r6.u32 + 77, ctx.r11.u8);
	// rlwinm r9,r31,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// stb r11,76(r6)
	REX_STORE_U8(ctx.r6.u32 + 76, ctx.r11.u8);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// rlwinm r7,r30,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// stw r8,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r8.u32);
	// stw r9,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// stw r7,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r7.u32);
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// li r8,117
	ctx.r8.s64 = 117;
	// li r7,512
	ctx.r7.s64 = 512;
	// lhzx r5,r10,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 8;
	// li r4,224
	ctx.r4.s64 = 224;
	// stw r5,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r5.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stb r8,79(r6)
	REX_STORE_U8(ctx.r6.u32 + 79, ctx.r8.u8);
	// sth r7,44(r6)
	REX_STORE_U16(ctx.r6.u32 + 44, ctx.r7.u16);
	// stb r4,46(r6)
	REX_STORE_U8(ctx.r6.u32 + 46, ctx.r4.u8);
	// stb r10,47(r6)
	REX_STORE_U8(ctx.r6.u32 + 47, ctx.r10.u8);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r6)
	REX_STORE_U32(ctx.r6.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D9900) {
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
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,10156
	ctx.r9.s64 = ctx.r11.s64 + 10156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x899d9934
	if (ctx.cr6.eq) goto loc_899D9934;
	// bl 0x899dabc8
	ctx.lr = 0x899D9930;
	sub_899DABC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_899D9934:
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

DEFINE_REX_FUNC(sub_899D9E18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899D9E20;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30214
	ctx.r31.s64 = -1980104704;
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899d9e60
	if (!ctx.cr6.eq) goto loc_899D9E60;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_899D9E60:
	// lwz r9,428(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899d9e74
	if (ctx.cr6.eq) goto loc_899D9E74;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_899D9E74:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,336(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899D9E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x899d9eac
	if (!ctx.cr6.gt) goto loc_899D9EAC;
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899D9EAC:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x899da208
	if (ctx.cr6.eq) goto loc_899DA208;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r14,-30305
	ctx.r14.s64 = -1986068480;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r15,-30305
	ctx.r15.s64 = -1986068480;
	// lis r16,-30305
	ctx.r16.s64 = -1986068480;
	// lis r17,-30305
	ctx.r17.s64 = -1986068480;
	// lis r18,-30214
	ctx.r18.s64 = -1980104704;
	// lis r19,-30214
	ctx.r19.s64 = -1980104704;
	// lis r20,-30214
	ctx.r20.s64 = -1980104704;
	// lis r21,-30214
	ctx.r21.s64 = -1980104704;
	// lis r22,-30214
	ctx.r22.s64 = -1980104704;
	// lis r23,-30214
	ctx.r23.s64 = -1980104704;
	// lis r24,-30214
	ctx.r24.s64 = -1980104704;
	// lis r25,-30214
	ctx.r25.s64 = -1980104704;
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
loc_899D9F14:
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D9F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3612(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3612);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x899D9F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3616(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 3616);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899D9F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3620(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 3620);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899D9F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3624(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 3624);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899D9FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3628(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 3628);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,96(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899D9FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3632(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 3632);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3636(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 3636);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D9FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3640(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 3640);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,108(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 108);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x899DA004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3644(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 3644);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3648(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 3648);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899DA034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3652(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 3652);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899DA04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,3656(r19)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 3656);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,124(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 124);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899DA064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,168(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899DA094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3612(r30)
	REX_STORE_U32(ctx.r30.u32 + 3612, ctx.r3.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,176(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 176);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899DA0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3620(r29)
	REX_STORE_U32(ctx.r29.u32 + 3620, ctx.r3.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,216(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 216);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899DA0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3660(r18)
	REX_STORE_U32(ctx.r18.u32 + 3660, ctx.r3.u32);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA0DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4144(r17)
	REX_STORE_U8(ctx.r17.u32 + 4144, ctx.r3.u8);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,228(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899DA0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4145(r16)
	REX_STORE_U8(ctx.r16.u32 + 4145, ctx.r3.u8);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,232(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 232);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899DA10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4146(r15)
	REX_STORE_U8(ctx.r15.u32 + 4146, ctx.r3.u8);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,236(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 236);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899DA124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4147(r14)
	REX_STORE_U8(ctx.r14.u32 + 4147, ctx.r3.u8);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// stb r3,4148(r9)
	REX_STORE_U8(ctx.r9.u32 + 4148, ctx.r3.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,244(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899DA15C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r3,4149(r7)
	REX_STORE_U8(ctx.r7.u32 + 4149, ctx.r3.u8);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,248(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 248);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899DA178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// stb r3,4150(r4)
	REX_STORE_U8(ctx.r4.u32 + 4150, ctx.r3.u8);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x899da1f8
	if (!ctx.cr6.gt) goto loc_899DA1F8;
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899da1e4
	if (!ctx.cr6.eq) goto loc_899DA1E4;
loc_899DA1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899dcd98
	ctx.lr = 0x899DA1C8;
	sub_899DCD98(ctx, base);
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA1DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899da1c0
	if (ctx.cr6.eq) goto loc_899DA1C0;
loc_899DA1E4:
	// lwz r3,3668(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA1F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x899d9f14
	if (!ctx.cr0.eq) goto loc_899D9F14;
loc_899DA208:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x899da218
	if (!ctx.cr6.eq) goto loc_899DA218;
	// bl 0x899d99b8
	ctx.lr = 0x899DA218;
	sub_899D99B8(ctx, base);
loc_899DA218:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DC8BC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC8C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x899db2c0
	ctx.lr = 0x899DC8E0;
	sub_899DB2C0(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dc908
	if (ctx.cr6.eq) goto loc_899DC908;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DC8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_899DC908:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x899e41f8
	ctx.lr = 0x899DC914;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_899DCDA0) {
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
	// lwz r10,10168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899dcdd0
	if (ctx.cr6.eq) goto loc_899DCDD0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DCDD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DCDD0:
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x899dce20
	if (!ctx.cr6.lt) goto loc_899DCE20;
loc_899DCDF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899dce68
	if (!ctx.cr6.eq) goto loc_899DCE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dce0c
	if (ctx.cr6.eq) goto loc_899DCE0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DCE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DCE0C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x899dcdf0
	if (ctx.cr6.lt) goto loc_899DCDF0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899dce68
	if (!ctx.cr6.eq) goto loc_899DCE68;
loc_899DCE20:
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x899dce64
	if (!ctx.cr6.lt) goto loc_899DCE64;
loc_899DCE3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dce58
	if (ctx.cr6.eq) goto loc_899DCE58;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x899dce58
	if (ctx.cr6.eq) goto loc_899DCE58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DCE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DCE58:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x899dce3c
	if (ctx.cr6.lt) goto loc_899DCE3C;
loc_899DCE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DCE68:
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

DEFINE_REX_FUNC(sub_899DEA30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899DEA38;
	__savegprlr_20(ctx, base);
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r21,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r4,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r4.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r5,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stw r6,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r6.u32);
	// stw r7,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_899DEA80:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x899dea80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DEA80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899deaf4
	if (ctx.cr6.eq) goto loc_899DEAF4;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x899deab8
	if (!ctx.cr6.eq) goto loc_899DEAB8;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x899daf50
	ctx.lr = 0x899DEAB4;
	sub_899DAF50(ctx, base);
	// lwz r5,324(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
loc_899DEAB8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899deae0
	goto loc_899DEAE0;
loc_899DEAE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x899deaf0
	if (!ctx.cr6.lt) goto loc_899DEAF0;
loc_899DEAE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899defe4
	goto loc_899DEFE4;
loc_899DEAF0:
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
loc_899DEAF4:
	// lis r22,-30212
	ctx.r22.s64 = -1979973632;
	// lwz r11,3836(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 3836);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899deb08
	if (ctx.cr0.eq) goto loc_899DEB08;
	// ori r23,r23,128
	ctx.r23.u64 = ctx.r23.u64 | 128;
loc_899DEB08:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deb20
	if (!ctx.cr6.eq) goto loc_899DEB20;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_899DEB20:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deb38
	if (!ctx.cr6.eq) goto loc_899DEB38;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,2076(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2076);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_899DEB38:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deb50
	if (!ctx.cr6.eq) goto loc_899DEB50;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_899DEB50:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deb68
	if (!ctx.cr6.eq) goto loc_899DEB68;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,2080(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2080);
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_899DEB68:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deb80
	if (!ctx.cr6.eq) goto loc_899DEB80;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_899DEB80:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899deb98
	if (ctx.cr6.eq) goto loc_899DEB98;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x899deba0
	if (!ctx.cr6.gt) goto loc_899DEBA0;
loc_899DEB98:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_899DEBA0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x899debf8
	if (!ctx.cr6.eq) goto loc_899DEBF8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// bne cr6,0x899debc8
	if (!ctx.cr6.eq) goto loc_899DEBC8;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// b 0x899debd8
	goto loc_899DEBD8;
loc_899DEBC8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_899DEBD0:
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + ctx.r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_899DEBD8:
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1432
	ctx.r24.s64 = 1432;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne 0x899dec30
	if (!ctx.cr0.eq) goto loc_899DEC30;
	// beq cr6,0x899dec24
	if (ctx.cr6.eq) goto loc_899DEC24;
	// oris r23,r23,32768
	ctx.r23.u64 = ctx.r23.u64 | 2147483648;
	// b 0x899dec34
	goto loc_899DEC34;
loc_899DEBF8:
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
	// bne cr6,0x899debd0
	if (!ctx.cr6.eq) goto loc_899DEBD0;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x899debd8
	goto loc_899DEBD8;
loc_899DEC24:
	// li r24,1460
	ctx.r24.s64 = 1460;
	// li r20,-1
	ctx.r20.s64 = -1;
	// b 0x899dec34
	goto loc_899DEC34;
loc_899DEC30:
	// bne cr6,0x899deae8
	if (!ctx.cr6.eq) goto loc_899DEAE8;
loc_899DEC34:
	// rlwinm. r11,r23,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dec4c
	if (ctx.cr0.eq) goto loc_899DEC4C;
	// bl 0x899e4278
	ctx.lr = 0x899DEC40;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r27,3
	ctx.r27.s64 = 3;
	// beq cr6,0x899dec50
	if (ctx.cr6.eq) goto loc_899DEC50;
loc_899DEC4C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_899DEC50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x899ded58
	if (ctx.cr6.eq) goto loc_899DED58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899decac
	if (ctx.cr6.eq) goto loc_899DECAC;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899deae8
	if (ctx.cr6.eq) goto loc_899DEAE8;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899deae8
	if (ctx.cr6.eq) goto loc_899DEAE8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899deae8
	if (ctx.cr6.gt) goto loc_899DEAE8;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x899deae8
	if (!ctx.cr0.eq) goto loc_899DEAE8;
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
	// bl 0x899dcca0
	ctx.lr = 0x899DECA8;
	sub_899DCCA0(ctx, base);
	// b 0x899ded48
	goto loc_899DED48;
loc_899DECAC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899e42b8
	ctx.lr = 0x899DECBC;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899deae8
	if (ctx.cr0.lt) goto loc_899DEAE8;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x899deae8
	if (!ctx.cr6.eq) goto loc_899DEAE8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x899deae8
	if (ctx.cr6.eq) goto loc_899DEAE8;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x899ded40
	if (!ctx.cr6.eq) goto loc_899DED40;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x899DECF4;
	sub_899DCCA0(ctx, base);
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
	// bl 0x899e42b8
	ctx.lr = 0x899DED14;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// blt 0x899ded48
	if (ctx.cr0.lt) goto loc_899DED48;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x899ded48
	if (!ctx.cr6.eq) goto loc_899DED48;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// b 0x899ded48
	goto loc_899DED48;
loc_899DED40:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_899DED48:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// b 0x899deda4
	goto loc_899DEDA4;
loc_899DED58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899deae8
	if (!ctx.cr6.eq) goto loc_899DEAE8;
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
	// bl 0x899e4258
	ctx.lr = 0x899DED7C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899deae8
	if (ctx.cr0.lt) goto loc_899DEAE8;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899ded98
	if (!ctx.cr6.eq) goto loc_899DED98;
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_899DED98:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_899DEDA4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x899dee04
	if (!ctx.cr6.eq) goto loc_899DEE04;
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
	// bl 0x899e4258
	ctx.lr = 0x899DEDCC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x899dedf8
	if (!ctx.cr0.lt) goto loc_899DEDF8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x899deae8
	if (!ctx.cr6.eq) goto loc_899DEAE8;
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
	// bl 0x899e4288
	ctx.lr = 0x899DEDF4;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x899deae8
	goto loc_899DEAE8;
loc_899DEDF8:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_899DEE04:
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
loc_899DEE1C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x899dee1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DEE1C;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,3836(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 3836);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899dee64
	if (ctx.cr0.eq) goto loc_899DEE64;
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
	// b 0x899dee68
	goto loc_899DEE68;
loc_899DEE64:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_899DEE68:
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
	// bl 0x899e4278
	ctx.lr = 0x899DEED0;
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
loc_899DEEF0:
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x899deef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DEEF0;
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
	// bne cr6,0x899def24
	if (!ctx.cr6.eq) goto loc_899DEF24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// bl 0x899e42a8
	ctx.lr = 0x899DEF24;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_899DEF24:
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
	// bl 0x899de320
	ctx.lr = 0x899DEF50;
	sub_899DE320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899deae8
	if (ctx.cr0.eq) goto loc_899DEAE8;
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
loc_899DEFE4:
	// addi r1,r31,288
	ctx.r1.s64 = ctx.r31.s64 + 288;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

